#ifndef MAINSCENE_H
#define MAINSCENE_H


#include<QOpenGLWidget>
#include<QMouseEvent>
#include <QSettings>

#ifdef __cplusplus
extern "C"
{
#endif
#include"../parser.h"
#ifdef __cplusplus
}
#endif


class GLWidget : public QOpenGLWidget
{
public:
    explicit GLWidget(QWidget* parent = 0);
    void start();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent* pe);
    QPoint pressPosition;
    double xAxisRotation = 0;
    double yAxisRotation = 0;
    double zAxisRotation = 0;
    double yAxissave = yAxisRotation;
    double xAxissave = xAxisRotation;
    double zAxissave = zAxisRotation;
    double currentHeight = 800;
    double currentWidth = 800;
    double scale = 1;
    double sdvig_x = 0;
    double sdvig_y = 0;
    double sdvig_z = 0;
    int line_view = 0;
    double line_size = 0;
    int vertex_view = 0;
    double vertex_size = 1;
    int proection = 0;
    QColor backgroundColor = (32);
    QColor VertexColor = (255);
    QColor PolyColor = (255);
    QColor getBackgroundColor() const { return backgroundColor; }
    QColor getVertexColor() const { return VertexColor; }
    QColor getPolyColor() const { return PolyColor; }
    void setOptionLine();
    void getfile(QString path);
    void saveSettings();
    data_t point_data;
    int count_line_for_front;
    int save_sdvig_x = 0;
    int save_sdvig_y = 0;
    int save_sdvig_z = 0;
    QSettings settings;
    ~GLWidget();
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};



#endif // MAINSCENE_H
