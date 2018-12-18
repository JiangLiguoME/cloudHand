/********************************************************************************
** Form generated from reading UI file 'luatdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUATDEVICE_H
#define UI_LUATDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LuatDevice
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFrame *frame_2;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_5;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_6;
    QFrame *frame_3;
    QLabel *label_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSlider_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QSlider *horizontalSlider_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *frame_4;
    QLabel *label_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QSlider *horizontalSlider_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QSlider *horizontalSlider_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame_5;
    QLabel *label_5;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSlider *horizontalSlider_4;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QScrollBar *horizontalScrollBar;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LuatDevice)
    {
        if (LuatDevice->objectName().isEmpty())
            LuatDevice->setObjectName(QStringLiteral("LuatDevice"));
        LuatDevice->resize(651, 498);
        LuatDevice->setMinimumSize(QSize(651, 498));
        centralWidget = new QWidget(LuatDevice);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 631, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 0, 101, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 90, 281, 151));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 67, 17));
        gridLayoutWidget = new QWidget(frame_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 55, 281, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        horizontalSlider_5 = new QSlider(gridLayoutWidget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_5, 1, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(frame_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(-1, 10, 281, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(310, 90, 281, 151));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 0, 67, 17));
        gridLayoutWidget_2 = new QWidget(frame_3);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 55, 281, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_2 = new QSlider(gridLayoutWidget_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 0, 1, 1, 1);

        horizontalSlider_6 = new QSlider(gridLayoutWidget_2);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_6, 1, 1, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(frame_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(-1, 10, 281, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 240, 281, 151));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 0, 67, 17));
        gridLayoutWidget_3 = new QWidget(frame_4);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 55, 281, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_3 = new QSlider(gridLayoutWidget_3);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_3, 1, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_3->addWidget(lineEdit_6, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_3->addWidget(lineEdit_7, 0, 1, 1, 1);

        horizontalSlider_7 = new QSlider(gridLayoutWidget_3);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_7, 1, 1, 1, 1);

        horizontalLayoutWidget_4 = new QWidget(frame_4);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(-1, 10, 281, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        label_11 = new QLabel(horizontalLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(310, 240, 281, 151));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 0, 67, 17));
        gridLayoutWidget_4 = new QWidget(frame_5);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(0, 55, 281, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_4 = new QSlider(gridLayoutWidget_4);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_4, 1, 0, 1, 1);

        lineEdit_8 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_4->addWidget(lineEdit_8, 0, 0, 1, 1);

        lineEdit_9 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_4->addWidget(lineEdit_9, 0, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(gridLayoutWidget_4);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalScrollBar, 1, 1, 1, 1);

        horizontalLayoutWidget_5 = new QWidget(frame_5);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(-1, 10, 281, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);

        label_13 = new QLabel(horizontalLayoutWidget_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_5->addWidget(label_13);

        LuatDevice->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LuatDevice);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 28));
        LuatDevice->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LuatDevice);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LuatDevice->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LuatDevice);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LuatDevice->setStatusBar(statusBar);

        retranslateUi(LuatDevice);

        QMetaObject::connectSlotsByName(LuatDevice);
    } // setupUi

    void retranslateUi(QMainWindow *LuatDevice)
    {
        LuatDevice->setWindowTitle(QApplication::translate("LuatDevice", "LuatDevice", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LuatDevice", "binding", Q_NULLPTR));
        label_2->setText(QApplication::translate("LuatDevice", "device_id", Q_NULLPTR));
        label->setText(QApplication::translate("LuatDevice", "DO", Q_NULLPTR));
        label_7->setText(QApplication::translate("LuatDevice", "1", Q_NULLPTR));
        label_6->setText(QApplication::translate("LuatDevice", "2", Q_NULLPTR));
        label_3->setText(QApplication::translate("LuatDevice", "AO", Q_NULLPTR));
        label_8->setText(QApplication::translate("LuatDevice", "1", Q_NULLPTR));
        label_9->setText(QApplication::translate("LuatDevice", "2", Q_NULLPTR));
        label_4->setText(QApplication::translate("LuatDevice", "DO", Q_NULLPTR));
        label_10->setText(QApplication::translate("LuatDevice", "1", Q_NULLPTR));
        label_11->setText(QApplication::translate("LuatDevice", "2", Q_NULLPTR));
        label_5->setText(QApplication::translate("LuatDevice", "DO", Q_NULLPTR));
        label_12->setText(QApplication::translate("LuatDevice", "1", Q_NULLPTR));
        label_13->setText(QApplication::translate("LuatDevice", "2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LuatDevice: public Ui_LuatDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUATDEVICE_H
