/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mainscene.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    GLWidget *D3_graph;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *save_in_file;
    QPushButton *Openfile;
    QPushButton *gif;
    QWidget *widget_3;
    QPushButton *Backgroundcolor;
    QPushButton *VertexColor;
    QPushButton *PolyColor;
    QWidget *widget_4;
    QLabel *label_8;
    QComboBox *type_proection;
    QWidget *widget_5;
    QLabel *label_9;
    QSlider *Scale;
    QWidget *widget_6;
    QSlider *Sdvig_x;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSlider *Sdvig_y;
    QSlider *Sdvig_z;
    QSlider *povorot_x;
    QSlider *povorot_y;
    QSlider *povorot_z;
    QWidget *widget_7;
    QLabel *label_17;
    QComboBox *type_vertex;
    QLabel *label_18;
    QSpinBox *size_vertex;
    QWidget *widget_8;
    QDoubleSpinBox *Size_line;
    QLabel *label_19;
    QComboBox *Type_line;
    QLabel *label_20;
    QWidget *widget_9;
    QLabel *path;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *count_vertex;
    QLabel *count_poly;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        D3_graph = new GLWidget(centralwidget);
        D3_graph->setObjectName(QString::fromUtf8("D3_graph"));
        D3_graph->setGeometry(QRect(400, 0, 800, 800));
        D3_graph->setStyleSheet(QString::fromUtf8("Background-color: white"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 400, 800));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(149, 148, 149);\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(210, 590, 185, 210));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        save_in_file = new QPushButton(widget_2);
        save_in_file->setObjectName(QString::fromUtf8("save_in_file"));
        save_in_file->setGeometry(QRect(40, 80, 120, 35));
        save_in_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        Openfile = new QPushButton(widget_2);
        Openfile->setObjectName(QString::fromUtf8("Openfile"));
        Openfile->setGeometry(QRect(40, 20, 120, 35));
        Openfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        gif = new QPushButton(widget_2);
        gif->setObjectName(QString::fromUtf8("gif"));
        gif->setGeometry(QRect(40, 140, 120, 35));
        gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(5, 590, 195, 210));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        Backgroundcolor = new QPushButton(widget_3);
        Backgroundcolor->setObjectName(QString::fromUtf8("Backgroundcolor"));
        Backgroundcolor->setGeometry(QRect(35, 20, 120, 35));
        Backgroundcolor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        VertexColor = new QPushButton(widget_3);
        VertexColor->setObjectName(QString::fromUtf8("VertexColor"));
        VertexColor->setGeometry(QRect(35, 80, 120, 35));
        VertexColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        PolyColor = new QPushButton(widget_3);
        PolyColor->setObjectName(QString::fromUtf8("PolyColor"));
        PolyColor->setGeometry(QRect(35, 140, 120, 35));
        PolyColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;\n"
"}"));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(210, 490, 185, 90));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(35, 10, 130, 20));
        QFont font;
        font.setPointSize(18);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_8->setAlignment(Qt::AlignCenter);
        type_proection = new QComboBox(widget_4);
        type_proection->addItem(QString());
        type_proection->addItem(QString());
        type_proection->setObjectName(QString::fromUtf8("type_proection"));
        type_proection->setGeometry(QRect(35, 45, 130, 35));
        type_proection->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 5px ;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"color: white;"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(5, 490, 195, 90));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 161, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_9->setAlignment(Qt::AlignCenter);
        Scale = new QSlider(widget_5);
        Scale->setObjectName(QString::fromUtf8("Scale"));
        Scale->setGeometry(QRect(20, 50, 160, 25));
        Scale->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        Scale->setMinimum(10);
        Scale->setMaximum(150);
        Scale->setSingleStep(1);
        Scale->setSliderPosition(80);
        Scale->setOrientation(Qt::Horizontal);
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(5, 270, 390, 211));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        Sdvig_x = new QSlider(widget_6);
        Sdvig_x->setObjectName(QString::fromUtf8("Sdvig_x"));
        Sdvig_x->setGeometry(QRect(225, 60, 160, 25));
        Sdvig_x->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        Sdvig_x->setMinimum(-100);
        Sdvig_x->setMaximum(100);
        Sdvig_x->setSingleStep(1);
        Sdvig_x->setSliderPosition(0);
        Sdvig_x->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 10, 130, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(240, 10, 130, 20));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(165, 30, 60, 20));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(widget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(165, 95, 60, 20));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(widget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(165, 150, 60, 20));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_15->setAlignment(Qt::AlignCenter);
        Sdvig_y = new QSlider(widget_6);
        Sdvig_y->setObjectName(QString::fromUtf8("Sdvig_y"));
        Sdvig_y->setGeometry(QRect(225, 120, 160, 25));
        Sdvig_y->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        Sdvig_y->setMinimum(-100);
        Sdvig_y->setMaximum(100);
        Sdvig_y->setSingleStep(1);
        Sdvig_y->setSliderPosition(0);
        Sdvig_y->setOrientation(Qt::Horizontal);
        Sdvig_z = new QSlider(widget_6);
        Sdvig_z->setObjectName(QString::fromUtf8("Sdvig_z"));
        Sdvig_z->setGeometry(QRect(225, 175, 160, 25));
        Sdvig_z->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        Sdvig_z->setMinimum(-100);
        Sdvig_z->setMaximum(100);
        Sdvig_z->setSingleStep(1);
        Sdvig_z->setSliderPosition(0);
        Sdvig_z->setOrientation(Qt::Horizontal);
        povorot_x = new QSlider(widget_6);
        povorot_x->setObjectName(QString::fromUtf8("povorot_x"));
        povorot_x->setGeometry(QRect(5, 60, 160, 25));
        povorot_x->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        povorot_x->setMaximum(360);
        povorot_x->setSliderPosition(0);
        povorot_x->setOrientation(Qt::Horizontal);
        povorot_y = new QSlider(widget_6);
        povorot_y->setObjectName(QString::fromUtf8("povorot_y"));
        povorot_y->setGeometry(QRect(5, 120, 160, 25));
        povorot_y->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        povorot_y->setMaximum(360);
        povorot_y->setSliderPosition(0);
        povorot_y->setOrientation(Qt::Horizontal);
        povorot_z = new QSlider(widget_6);
        povorot_z->setObjectName(QString::fromUtf8("povorot_z"));
        povorot_z->setGeometry(QRect(5, 175, 160, 25));
        povorot_z->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"color: white;"));
        povorot_z->setMaximum(360);
        povorot_z->setSliderPosition(0);
        povorot_z->setOrientation(Qt::Horizontal);
        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(5, 130, 195, 130));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        label_17 = new QLabel(widget_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 10, 130, 20));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_17->setAlignment(Qt::AlignCenter);
        type_vertex = new QComboBox(widget_7);
        type_vertex->addItem(QString());
        type_vertex->addItem(QString());
        type_vertex->addItem(QString());
        type_vertex->setObjectName(QString::fromUtf8("type_vertex"));
        type_vertex->setGeometry(QRect(40, 40, 110, 25));
        type_vertex->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 5px ;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"color: white;"));
        label_18 = new QLabel(widget_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 75, 140, 20));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_18->setAlignment(Qt::AlignCenter);
        size_vertex = new QSpinBox(widget_7);
        size_vertex->setObjectName(QString::fromUtf8("size_vertex"));
        size_vertex->setGeometry(QRect(70, 100, 45, 25));
        size_vertex->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 5px ;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"color: white;"));
        size_vertex->setAlignment(Qt::AlignCenter);
        size_vertex->setMinimum(1);
        size_vertex->setMaximum(100);
        size_vertex->setSingleStep(1);
        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(210, 130, 185, 130));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 211, 213);\n"
"border-radius: 20;\n"
""));
        Size_line = new QDoubleSpinBox(widget_8);
        Size_line->setObjectName(QString::fromUtf8("Size_line"));
        Size_line->setGeometry(QRect(70, 100, 50, 25));
        Size_line->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 5px ;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"color: white;"));
        Size_line->setAlignment(Qt::AlignCenter);
        Size_line->setMinimum(1.000000000000000);
        Size_line->setMaximum(9.990000000000000);
        label_19 = new QLabel(widget_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 10, 130, 20));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_19->setAlignment(Qt::AlignCenter);
        Type_line = new QComboBox(widget_8);
        Type_line->addItem(QString());
        Type_line->addItem(QString());
        Type_line->setObjectName(QString::fromUtf8("Type_line"));
        Type_line->setGeometry(QRect(40, 40, 110, 25));
        Type_line->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 149, 204);\n"
"border-top-left-radius: 5px ;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"color: white;"));
        label_20 = new QLabel(widget_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 75, 140, 20));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        label_20->setAlignment(Qt::AlignCenter);
        widget_9 = new QWidget(widget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(0, 0, 400, 120));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 93, 119);\n"
"border-top-left-radius: 0px ;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-left-radius: 15px;\n"
"border-bottom-right-radius: 15px;\n"
""));
        path = new QLabel(widget_9);
        path->setObjectName(QString::fromUtf8("path"));
        path->setGeometry(QRect(155, 5, 235, 31));
        QFont font1;
        font1.setPointSize(25);
        path->setFont(font1);
        path->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        path->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_21 = new QLabel(widget_9);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(35, 10, 130, 20));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(widget_9);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 60, 220, 20));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(widget_9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 90, 220, 20));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        label_23->setAlignment(Qt::AlignCenter);
        count_vertex = new QLabel(widget_9);
        count_vertex->setObjectName(QString::fromUtf8("count_vertex"));
        count_vertex->setGeometry(QRect(220, 60, 171, 20));
        count_vertex->setFont(font);
        count_vertex->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        count_vertex->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        count_poly = new QLabel(widget_9);
        count_poly->setObjectName(QString::fromUtf8("count_poly"));
        count_poly->setGeometry(QRect(230, 90, 151, 20));
        count_poly->setFont(font);
        count_poly->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        count_poly->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_21->raise();
        path->raise();
        label_22->raise();
        label_23->raise();
        count_vertex->raise();
        count_poly->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        save_in_file->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        Openfile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        gif->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 gif", nullptr));
        Backgroundcolor->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
        VertexColor->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        PolyColor->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\200\320\265\320\261\320\265\321\200", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        type_proection->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        type_proection->setItemText(1, QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\214 X", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\214 Y", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\214 Z", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        type_vertex->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        type_vertex->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        type_vertex->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\200\320\265\320\261\320\265\321\200", nullptr));
        Type_line->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        Type_line->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", nullptr));

        label_20->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\200\320\265\320\261\320\265\321\200", nullptr));
        path->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\320\270\320\263\320\276\320\275\320\276\320\262:", nullptr));
        count_vertex->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        count_poly->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
