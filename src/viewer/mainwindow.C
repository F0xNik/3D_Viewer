#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainscene.h"
#include <QColorDialog>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Scene = this->findChild<GLWidget *>("D3_graph");
    timer = new QTimer;
    gifImage = new QImage[50]{};
    connect(timer,SIGNAL(timeout()),this,SLOT(time_out()));
}

MainWindow::~MainWindow()
{
    delete timer;
    delete[] gifImage;
    delete ui;
}


double count = 0;

void MainWindow::on_povorot_x_valueChanged(int value)
{
    Scene->yAxisRotation = (double)value;
    Scene->start();
}

void MainWindow::on_povorot_y_valueChanged(int value)
{
    Scene->xAxisRotation = (double)value;
    Scene->start();
}


void MainWindow::on_povorot_z_valueChanged(int value)
{
    Scene->zAxisRotation = (double)value;
    Scene->start();
}

int scale_save;

void MainWindow::on_Scale_valueChanged(int value)
{
    if(value > scale_save) Scene->scale = 1.05;
    else Scene->scale = 0.95;
    scale_save = value;
    Scene->start();
}


void MainWindow::on_Sdvig_x_valueChanged(int value)
{
    double value_d = value;
    Scene->sdvig_x = (value_d - Scene->save_sdvig_x)/200;
    Scene->start();
    Scene->save_sdvig_x = value;
}



void MainWindow::on_Sdvig_y_valueChanged(int value)
{
    double value_d = value;
    Scene->sdvig_y = (value_d - Scene->save_sdvig_y)/200;
    Scene->start();
    Scene->save_sdvig_y = value;
}


void MainWindow::on_Sdvig_z_valueChanged(int value)
{
    double value_d = value;
    Scene->sdvig_z = (value_d - Scene->save_sdvig_z)/200;
    Scene->start();
    Scene->save_sdvig_z = value;
}


void MainWindow::on_Backgroundcolor_clicked()
{
    QColor initColor = Scene->getBackgroundColor();
    QColor newColor = QColorDialog::getColor(initColor,this,tr("Select background color"));
    Scene->backgroundColor = newColor;
    Scene->start();
}


void MainWindow::on_VertexColor_clicked()
{
    QColor initColor = Scene->getVertexColor();
    QColor newColor = QColorDialog::getColor(initColor,this,tr("Select vertex color"));
    Scene->VertexColor = newColor;
    Scene->start();
}


void MainWindow::on_PolyColor_clicked()
{
    QColor initColor = Scene->getPolyColor();
    QColor newColor = QColorDialog::getColor(initColor,this,tr("Select polygons color"));
    Scene->PolyColor = newColor;
    Scene->start();
}


void MainWindow::on_Type_line_currentIndexChanged(int index)
{
    Scene->line_view = index;
    Scene->start();
}


void MainWindow::on_Size_line_valueChanged(double arg1)
{
    Scene->line_size = arg1;
    Scene->start();
}


void MainWindow::on_type_vertex_currentIndexChanged(int index)
{
    Scene->vertex_view = index;
    Scene->start();
}


void MainWindow::on_size_vertex_valueChanged(int arg1)
{
    Scene->vertex_size=arg1;
    Scene->start();
}


void MainWindow::on_type_proection_currentIndexChanged(int index)
{
    Scene->proection = index;
    Scene->start();
}


void MainWindow::on_Openfile_clicked()
{
    QString str;
    str = QFileDialog::getOpenFileName();
    if(str.contains(".obj")){
    char temp[255] = "\0";
    strcpy(temp,str.toStdString().c_str());
    int i = strlen(temp) - 1;
    char buf[255] = "\0";
    int k =0;
    while(temp[i]!='/') buf[k++] = temp[i--];
    memset(temp,0,255);
    for(int i = 0; i < strlen(buf);i++){
        temp[i]= buf[--k];
    }
    ui->path->setText(QString(temp));
    Scene->getfile(str);
    unsigned int h = Scene->point_data.matrix_3d.rows;
    QString formatedString = QString("%1").arg(h);
    ui->count_vertex->setText(formatedString);
    unsigned int h2 = Scene->count_line_for_front/2;
    QString formatedString2 = QString("%1").arg(h2);
    ui->count_poly->setText(formatedString2);
    }
}

void MainWindow::on_save_in_file_clicked()
{
      QString screen = QFileDialog::getSaveFileName(this, "Save screen as:", "", "*.jpeg;;*.bmp");
      if (screen != nullptr) {
        QString cur_type;
        if(screen.contains(".bmp"))
            cur_type = "BMP";
        else
            cur_type = "JPEG";
        QFile file(screen);
        file.open(QIODevice::WriteOnly);
        QRect rect(0, 0, Scene->width() * 2, Scene->height() * 2);
        QPixmap map = Scene->grab(rect);
        map.copy(rect).toImage().save(&file, cur_type.toStdString().c_str());
      }
}




void MainWindow::on_gif_clicked()
{
    ui->gif->setEnabled(false);
    Scene->saveSettings();
    timer->start(100);
}

void MainWindow::time_out() {
  if (gifTime < 50) {
    gifImage[gifTime] = Scene->grab().toImage();
    ++gifTime;
  } else {
    gif = new QGifImage;

    for (int i = 0; i < gifTime; ++i) {
      gif->addFrame(gifImage[i], 0);
    }
    QDateTime dateTime = dateTime.currentDateTime();
    QString currentDateTime = dateTime.toString("dd.MM.yy_HH.mm.ss_zzz");
    QString fileName = QFileDialog::getSaveFileName(
        this, "Save GIF", "GIF_" + currentDateTime, "GIF (*.gif)");
    gif->save(fileName);
    ui->gif->setEnabled(true);
    timer->stop();
    delete gif;
    gifTime = 0;
  }
}

