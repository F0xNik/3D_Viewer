#include "mainscene.h"


GLWidget::GLWidget(QWidget* parent) : QOpenGLWidget(parent)
{
    backgroundColor = settings.value("backgroundColor").value<QColor>();
    VertexColor = settings.value("VertexColor").value<QColor>();
    PolyColor = settings.value("PolyColor").value<QColor>();
    line_size = settings.value("line_size").toDouble();
    line_view = settings.value("line_view").toInt();
    vertex_size = settings.value("line_size").toDouble();
    vertex_view = settings.value("line_size").toInt();
    proection = settings.value("proection").toInt();
    point_data.matrix_3d.matrix = NULL;
}


void GLWidget::initializeGL()
{

}

void GLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,1,3);
}

void GLWidget::start()
{
    update();
}


GLWidget::~GLWidget() {
  saveSettings();
}

double *cubeVertexArray;
unsigned int *cubeIndexArray;
int count_line;

void GLWidget::saveSettings(){
    settings.setValue("backgroundColor",backgroundColor);
    settings.setValue("VertexColor",VertexColor);
    settings.setValue("PolyColor",PolyColor);
    settings.setValue("line_size",line_size);
    settings.setValue("line_view",line_view);
    settings.setValue("vertex_size",vertex_size);
    settings.setValue("vertex_view",vertex_view);
    settings.setValue("proection",proection);
}



void GLWidget::paintGL()
{
    glClearColor(backgroundColor.redF(), backgroundColor.greenF(), backgroundColor.blueF(), backgroundColor.alphaF());
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if (point_data.matrix_3d.matrix!=NULL){
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    for(int i = 0; i < point_data.matrix_3d.rows; i++) {
        for(int z = 0; z < point_data.matrix_3d.columns; z++) {
            point_data.matrix_3d.matrix[i][z]*=scale;
        }
    }
    scale = 1;

        for (int i = 0; i < point_data.matrix_3d.rows;i++){
            if (sdvig_x!=0)
                point_data.matrix_3d.matrix[i][0]+=sdvig_x;
            if (sdvig_y!=0)
                point_data.matrix_3d.matrix[i][1]+=sdvig_y;
            if (sdvig_z!=0)
                point_data.matrix_3d.matrix[i][2]+=sdvig_z;
        }
        sdvig_x = 0;
        sdvig_y =0;
        sdvig_z = 0;

    glRotatef(yAxisRotation, 0.0, 1.0, 0.0);
    glRotatef(xAxisRotation, 1.0, 0.0, 0.0);
    glRotatef(zAxisRotation, 0.0, 0.0, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (proection) {
        glFrustum(-1, 1, -1, 1, 2, 6);
        glTranslatef(0, 0, -3);
      } else {
        glOrtho(-1, 1, -1, 1, -1, 99999);
    }


    setOptionLine();



       glBegin(GL_LINES);
       for(unsigned int i = 0; i <count_line-2; i+=2) {

                             glVertex3d(point_data.matrix_3d.matrix[cubeIndexArray[i]][0],point_data.matrix_3d.matrix[cubeIndexArray[i]][1], point_data.matrix_3d.matrix[cubeIndexArray[i]][2]);
                             glVertex3d(point_data.matrix_3d.matrix[cubeIndexArray[i+1]][0],point_data.matrix_3d.matrix[cubeIndexArray[i+1]][1], point_data.matrix_3d.matrix[cubeIndexArray[i+1]][2]);
       }
       glEnd();



    if (vertex_view != 0){
        if (vertex_view == 1){
            glDisable(GL_POINT_SMOOTH);
            glColor3f(VertexColor.redF(), VertexColor.greenF(), VertexColor.blueF());
            glEnable(GL_POINT_SMOOTH);
            glPointSize(vertex_size);
            glDrawElements(GL_POINTS, count_line, GL_UNSIGNED_INT,cubeIndexArray  );
        }
        else {
            glDisable(GL_POINT_SMOOTH);
            glColor3f(VertexColor.redF(), VertexColor.greenF(), VertexColor.blueF());
            glPointSize(vertex_size);
            glDrawElements(GL_POINTS,count_line, GL_UNSIGNED_INT, cubeIndexArray);
        }
    }
    else {
        glPointSize(0);
        glDisable(GL_POINT_SMOOTH);
        glEnable(GL_POINTS);
    }

    glBegin(GL_POINTS);
    for (int i = 0; i < point_data.matrix_3d.rows; i++){
        glVertex3d(point_data.matrix_3d.matrix[i][0],point_data.matrix_3d.matrix[i][1],point_data.matrix_3d.matrix[i][2]);
    }
    glEnd();
    }

}




void GLWidget::mousePressEvent(QMouseEvent *event)
{
    pressPosition = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    xAxisRotation += (180 * ((GLfloat)event->position().y() - (GLfloat)pressPosition.y())) / (currentHeight);
    yAxisRotation += (180 * ((GLfloat)event->position().x() - (GLfloat)pressPosition.x())) / (currentWidth);
    update();
     pressPosition = event->pos();
}

void GLWidget::wheelEvent(QWheelEvent* pe)
{
    if ((pe->angleDelta().y())>0) scale/=1.1;
    else if ((pe->angleDelta().y())<0) scale*=1.1;
    update();
}

void GLWidget::setOptionLine(){
    glColor3f(PolyColor.redF(), PolyColor.greenF(), PolyColor.blueF());
    glLineWidth(line_size);
    if (line_view == 1){
        glEnable(GL_LINE_STIPPLE);
        glLineStipple(1,0x0101);
    }
    else {
        glDisable(GL_LINE_STIPPLE);
    }
}

void GLWidget::getfile(QString str){
    if(str.contains(".obj")){
    if (cubeVertexArray){
                  free(cubeVertexArray);
                  free(cubeIndexArray);
                  delete_matrix(&point_data);
                  delete_facets(&point_data);
              }
              QByteArray path = str.toLocal8Bit();
              char * input = path.data();
              parse_file(input, &point_data);
              count_line = 0;
              cubeVertexArray = (double*)calloc(point_data.matrix_3d.rows*point_data.matrix_3d.columns, sizeof(double));
              int ccc = 0;
              for(int i = 0; i < point_data.matrix_3d.rows; i++) {
                  for(int z = 0; z < point_data.matrix_3d.columns; z++) {
                      cubeVertexArray[ccc++]= point_data.matrix_3d.matrix[i][z];
                  }
              }
              for(unsigned int i = 0; i < point_data.total_facets; i++) {
                  for (unsigned int k = 0; k < point_data.polygons[i].numbers_of_vertexes_in_facets*2;k++){
                      count_line++;
                  }
              }
              count_line_for_front = count_line;
              cubeIndexArray = (unsigned int*)calloc(count_line, sizeof( unsigned int));
              int count = 0;
              for(unsigned int i = 0; i < point_data.total_facets; i++) {
                  for(int z = 0; z < point_data.polygons[i].numbers_of_vertexes_in_facets*2; z++) {
                      cubeIndexArray[count++] = point_data.polygons[i].vertexes[z];
                  }
              }
        update();
    }
    else {
        point_data.matrix_3d.matrix = NULL;
    }
}

