#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mainscene.h"
#include <QTimer>
#include <QImage>

#include "QtGifImage/src/gifimage/qgifimage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_povorot_x_valueChanged(int value);

    void on_povorot_y_valueChanged(int value);

    void on_povorot_z_valueChanged(int value);

    void on_Scale_valueChanged(int value);

    void on_Sdvig_x_valueChanged(int value);

    void on_Sdvig_y_valueChanged(int value);

    void on_Sdvig_z_valueChanged(int value);

    void on_Backgroundcolor_clicked();

    void on_VertexColor_clicked();

    void on_PolyColor_clicked();

    void on_Type_line_currentIndexChanged(int index);

    void on_Size_line_valueChanged(double arg1);

    void on_type_vertex_currentIndexChanged(int index);

    void on_size_vertex_valueChanged(int arg1);

    void on_type_proection_currentIndexChanged(int index);

    void on_Openfile_clicked();

    void on_save_in_file_clicked();

    void on_gif_clicked();

    void time_out();

private:
    QTimer *timer;
    QGifImage *gif;
    QImage *gifImage;
    int gifTime = 0;
    Ui::MainWindow *ui;
    GLWidget *Scene;
};
#endif // MAINWINDOW_H
