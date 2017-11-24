/********************************************************************************
** Form generated from reading UI file 'devicewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEWINDOW_H
#define UI_DEVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "formport.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceWindow
{
public:
    QAction *actionSetPortName;
    QAction *actionSetAlarmMask;
    QAction *actionSetDeviceInfo;
    QAction *actionPdTable;
    QAction *actionGetLog;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QDockWidget *dockInfo;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *editName;
    QLabel *label_2;
    QLineEdit *editVersion;
    QLabel *label_3;
    QLineEdit *editIP;
    QLabel *label_4;
    QLineEdit *editMCUTemp;
    QFrame *frame;
    QGridLayout *gridLayout_7;
    QCustomPlot *plotGraph;
    QFrame *frame_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    FormPort *widget_9;
    FormPort *widget_12;
    FormPort *widget_6;
    FormPort *widget_7;
    FormPort *widget_5;
    FormPort *widget_1;
    FormPort *widget_8;
    FormPort *widget_10;
    FormPort *widget_3;
    FormPort *widget_2;
    FormPort *widget_4;
    FormPort *widget_11;
    FormPort *widget_13;
    FormPort *widget_14;
    FormPort *widget_15;
    FormPort *widget_16;
    QDockWidget *dockSetting;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpinBox *sbScanCycle;
    QPushButton *btnSetScanCycle;
    QLabel *label_6;
    QSpinBox *sbDetectionPeriod;
    QPushButton *btnSetDetectionPeriod;
    QLabel *label_7;
    QSpinBox *sbSwitchingTime;
    QPushButton *btnSetSwitchingTime;
    QLabel *label_8;
    QPushButton *btnSetThreshold;
    QDoubleSpinBox *dsbPdThreshold;
    QDockWidget *dockSetting_2;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QPushButton *btnAutoAll;
    QPushButton *btnManualAll;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QPushButton *btnMainAll;
    QPushButton *btnSubAll;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeviceWindow)
    {
        if (DeviceWindow->objectName().isEmpty())
            DeviceWindow->setObjectName(QStringLiteral("DeviceWindow"));
        DeviceWindow->resize(1015, 664);
        actionSetPortName = new QAction(DeviceWindow);
        actionSetPortName->setObjectName(QStringLiteral("actionSetPortName"));
        actionSetAlarmMask = new QAction(DeviceWindow);
        actionSetAlarmMask->setObjectName(QStringLiteral("actionSetAlarmMask"));
        actionSetDeviceInfo = new QAction(DeviceWindow);
        actionSetDeviceInfo->setObjectName(QStringLiteral("actionSetDeviceInfo"));
        actionPdTable = new QAction(DeviceWindow);
        actionPdTable->setObjectName(QStringLiteral("actionPdTable"));
        actionGetLog = new QAction(DeviceWindow);
        actionGetLog->setObjectName(QStringLiteral("actionGetLog"));
        centralwidget = new QWidget(DeviceWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        dockInfo = new QDockWidget(centralwidget);
        dockInfo->setObjectName(QStringLiteral("dockInfo"));
        dockInfo->setMinimumSize(QSize(250, 138));
        dockInfo->setMaximumSize(QSize(260, 150));
        dockInfo->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_5 = new QGridLayout(dockWidgetContents);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        editName = new QLineEdit(dockWidgetContents);
        editName->setObjectName(QStringLiteral("editName"));

        gridLayout_5->addWidget(editName, 0, 1, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        editVersion = new QLineEdit(dockWidgetContents);
        editVersion->setObjectName(QStringLiteral("editVersion"));

        gridLayout_5->addWidget(editVersion, 1, 1, 1, 1);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        editIP = new QLineEdit(dockWidgetContents);
        editIP->setObjectName(QStringLiteral("editIP"));

        gridLayout_5->addWidget(editIP, 2, 1, 1, 1);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 3, 0, 1, 1);

        editMCUTemp = new QLineEdit(dockWidgetContents);
        editMCUTemp->setObjectName(QStringLiteral("editMCUTemp"));

        gridLayout_5->addWidget(editMCUTemp, 3, 1, 1, 1);

        dockInfo->setWidget(dockWidgetContents);

        gridLayout_4->addWidget(dockInfo, 0, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 99999));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        plotGraph = new QCustomPlot(frame);
        plotGraph->setObjectName(QStringLiteral("plotGraph"));
        plotGraph->setMinimumSize(QSize(0, 400));

        gridLayout_7->addWidget(plotGraph, 0, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 450));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_9 = new FormPort(frame_2);
        widget_9->setObjectName(QStringLiteral("widget_9"));

        gridLayout->addWidget(widget_9, 2, 0, 1, 1);

        widget_12 = new FormPort(frame_2);
        widget_12->setObjectName(QStringLiteral("widget_12"));

        gridLayout->addWidget(widget_12, 2, 3, 1, 1);

        widget_6 = new FormPort(frame_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));

        gridLayout->addWidget(widget_6, 1, 1, 1, 1);

        widget_7 = new FormPort(frame_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));

        gridLayout->addWidget(widget_7, 1, 2, 1, 1);

        widget_5 = new FormPort(frame_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        gridLayout->addWidget(widget_5, 1, 0, 1, 1);

        widget_1 = new FormPort(frame_2);
        widget_1->setObjectName(QStringLiteral("widget_1"));

        gridLayout->addWidget(widget_1, 0, 0, 1, 1);

        widget_8 = new FormPort(frame_2);
        widget_8->setObjectName(QStringLiteral("widget_8"));

        gridLayout->addWidget(widget_8, 1, 3, 1, 1);

        widget_10 = new FormPort(frame_2);
        widget_10->setObjectName(QStringLiteral("widget_10"));

        gridLayout->addWidget(widget_10, 2, 1, 1, 1);

        widget_3 = new FormPort(frame_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        widget_2 = new FormPort(frame_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout->addWidget(widget_2, 0, 1, 1, 1);

        widget_4 = new FormPort(frame_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        gridLayout->addWidget(widget_4, 0, 3, 1, 1);

        widget_11 = new FormPort(frame_2);
        widget_11->setObjectName(QStringLiteral("widget_11"));

        gridLayout->addWidget(widget_11, 2, 2, 1, 1);

        widget_13 = new FormPort(frame_2);
        widget_13->setObjectName(QStringLiteral("widget_13"));

        gridLayout->addWidget(widget_13, 3, 0, 1, 1);

        widget_14 = new FormPort(frame_2);
        widget_14->setObjectName(QStringLiteral("widget_14"));

        gridLayout->addWidget(widget_14, 3, 1, 1, 1);

        widget_15 = new FormPort(frame_2);
        widget_15->setObjectName(QStringLiteral("widget_15"));

        gridLayout->addWidget(widget_15, 3, 2, 1, 1);

        widget_16 = new FormPort(frame_2);
        widget_16->setObjectName(QStringLiteral("widget_16"));

        gridLayout->addWidget(widget_16, 3, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 1, 4, 1);

        dockSetting = new QDockWidget(centralwidget);
        dockSetting->setObjectName(QStringLiteral("dockSetting"));
        dockSetting->setMinimumSize(QSize(253, 150));
        dockSetting->setMaximumSize(QSize(260, 150));
        dockSetting->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(dockWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        sbScanCycle = new QSpinBox(dockWidgetContents_2);
        sbScanCycle->setObjectName(QStringLiteral("sbScanCycle"));
        sbScanCycle->setMinimum(1);
        sbScanCycle->setValue(1);

        gridLayout_2->addWidget(sbScanCycle, 0, 1, 1, 1);

        btnSetScanCycle = new QPushButton(dockWidgetContents_2);
        btnSetScanCycle->setObjectName(QStringLiteral("btnSetScanCycle"));

        gridLayout_2->addWidget(btnSetScanCycle, 0, 2, 1, 1);

        label_6 = new QLabel(dockWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        sbDetectionPeriod = new QSpinBox(dockWidgetContents_2);
        sbDetectionPeriod->setObjectName(QStringLiteral("sbDetectionPeriod"));
        sbDetectionPeriod->setMaximum(255);

        gridLayout_2->addWidget(sbDetectionPeriod, 1, 1, 1, 1);

        btnSetDetectionPeriod = new QPushButton(dockWidgetContents_2);
        btnSetDetectionPeriod->setObjectName(QStringLiteral("btnSetDetectionPeriod"));

        gridLayout_2->addWidget(btnSetDetectionPeriod, 1, 2, 1, 1);

        label_7 = new QLabel(dockWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        sbSwitchingTime = new QSpinBox(dockWidgetContents_2);
        sbSwitchingTime->setObjectName(QStringLiteral("sbSwitchingTime"));
        sbSwitchingTime->setMaximum(255);

        gridLayout_2->addWidget(sbSwitchingTime, 2, 1, 1, 1);

        btnSetSwitchingTime = new QPushButton(dockWidgetContents_2);
        btnSetSwitchingTime->setObjectName(QStringLiteral("btnSetSwitchingTime"));

        gridLayout_2->addWidget(btnSetSwitchingTime, 2, 2, 1, 1);

        label_8 = new QLabel(dockWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        btnSetThreshold = new QPushButton(dockWidgetContents_2);
        btnSetThreshold->setObjectName(QStringLiteral("btnSetThreshold"));

        gridLayout_2->addWidget(btnSetThreshold, 3, 2, 1, 1);

        dsbPdThreshold = new QDoubleSpinBox(dockWidgetContents_2);
        dsbPdThreshold->setObjectName(QStringLiteral("dsbPdThreshold"));
        dsbPdThreshold->setMinimum(-99);
        dsbPdThreshold->setMaximum(20);

        gridLayout_2->addWidget(dsbPdThreshold, 3, 1, 1, 1);

        dockSetting->setWidget(dockWidgetContents_2);

        gridLayout_4->addWidget(dockSetting, 1, 0, 1, 1);

        dockSetting_2 = new QDockWidget(centralwidget);
        dockSetting_2->setObjectName(QStringLiteral("dockSetting_2"));
        dockSetting_2->setMinimumSize(QSize(250, 217));
        dockSetting_2->setMaximumSize(QSize(260, 217));
        dockSetting_2->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_4 = new QGroupBox(dockWidgetContents_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        btnAutoAll = new QPushButton(groupBox_4);
        btnAutoAll->setObjectName(QStringLiteral("btnAutoAll"));

        gridLayout_8->addWidget(btnAutoAll, 0, 0, 1, 1);

        btnManualAll = new QPushButton(groupBox_4);
        btnManualAll->setObjectName(QStringLiteral("btnManualAll"));

        gridLayout_8->addWidget(btnManualAll, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(dockWidgetContents_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        btnMainAll = new QPushButton(groupBox_6);
        btnMainAll->setObjectName(QStringLiteral("btnMainAll"));

        gridLayout_9->addWidget(btnMainAll, 0, 0, 1, 1);

        btnSubAll = new QPushButton(groupBox_6);
        btnSubAll->setObjectName(QStringLiteral("btnSubAll"));

        gridLayout_9->addWidget(btnSubAll, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_6, 1, 0, 1, 1);

        dockSetting_2->setWidget(dockWidgetContents_3);

        gridLayout_4->addWidget(dockSetting_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        DeviceWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeviceWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1015, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        DeviceWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DeviceWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DeviceWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menu->menuAction());
        menu->addAction(actionSetDeviceInfo);
        menu->addAction(actionSetPortName);
        menu->addAction(actionSetAlarmMask);
        menu->addAction(actionPdTable);
        menu->addAction(actionGetLog);

        retranslateUi(DeviceWindow);

        QMetaObject::connectSlotsByName(DeviceWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeviceWindow)
    {
        DeviceWindow->setWindowTitle(QApplication::translate("DeviceWindow", "MainWindow", Q_NULLPTR));
        actionSetPortName->setText(QApplication::translate("DeviceWindow", "\355\217\254\355\212\270 \354\235\264\353\246\204 \354\204\244\354\240\225", Q_NULLPTR));
        actionSetAlarmMask->setText(QApplication::translate("DeviceWindow", "\354\225\214\353\236\214 \353\247\210\354\212\244\355\201\254 \354\204\244\354\240\225", Q_NULLPTR));
        actionSetDeviceInfo->setText(QApplication::translate("DeviceWindow", "\353\224\224\353\260\224\354\235\264\354\212\244 \354\240\225\353\263\264 \354\204\244\354\240\225", Q_NULLPTR));
        actionPdTable->setText(QApplication::translate("DeviceWindow", "\353\263\264\354\240\225\353\215\260\354\235\264\355\204\260 \354\204\244\354\240\225", Q_NULLPTR));
        actionGetLog->setText(QApplication::translate("DeviceWindow", "\353\241\234\352\267\270 \353\215\260\354\235\264\355\204\260", Q_NULLPTR));
        dockInfo->setWindowTitle(QApplication::translate("DeviceWindow", "\353\224\224\353\260\224\354\235\264\354\212\244 \354\240\225\353\263\264", Q_NULLPTR));
        label->setText(QApplication::translate("DeviceWindow", "\354\236\245\354\271\230\353\252\205", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeviceWindow", "\353\262\204\354\240\204", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeviceWindow", "IP \354\243\274\354\206\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("DeviceWindow", "MCU\354\230\250\353\217\204", Q_NULLPTR));
        dockSetting->setWindowTitle(QApplication::translate("DeviceWindow", "\353\224\224\353\260\224\354\235\264\354\212\244 \354\204\244\354\240\225", Q_NULLPTR));
        label_5->setText(QApplication::translate("DeviceWindow", "\354\212\244\354\272\224 \354\243\274\352\270\260 (sec)", Q_NULLPTR));
        btnSetScanCycle->setText(QApplication::translate("DeviceWindow", "SET", Q_NULLPTR));
        label_6->setText(QApplication::translate("DeviceWindow", "\352\262\200\354\266\234 \354\243\274\352\270\260 (sec)", Q_NULLPTR));
        btnSetDetectionPeriod->setText(QApplication::translate("DeviceWindow", "SET", Q_NULLPTR));
        label_7->setText(QApplication::translate("DeviceWindow", "\354\240\210\354\262\264 \355\232\237\354\210\230 (\355\232\214)", Q_NULLPTR));
        btnSetSwitchingTime->setText(QApplication::translate("DeviceWindow", "SET", Q_NULLPTR));
        label_8->setText(QApplication::translate("DeviceWindow", "\352\270\260\354\244\200\355\214\214\354\233\214 (dBm)", Q_NULLPTR));
        btnSetThreshold->setText(QApplication::translate("DeviceWindow", "SET", Q_NULLPTR));
        dockSetting_2->setWindowTitle(QApplication::translate("DeviceWindow", "\354\240\204\354\262\264\353\204\220 \354\240\234\354\226\264", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("DeviceWindow", "\353\252\250\353\223\234", Q_NULLPTR));
        btnAutoAll->setText(QApplication::translate("DeviceWindow", "\354\240\204\354\261\204\353\204\220 \354\236\220\353\217\231", Q_NULLPTR));
        btnManualAll->setText(QApplication::translate("DeviceWindow", "\354\240\204\354\261\204\353\204\220 \354\210\230\353\217\231", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("DeviceWindow", "\352\262\275\353\241\234", Q_NULLPTR));
        btnMainAll->setText(QApplication::translate("DeviceWindow", "\354\240\204\354\261\204\353\204\220 \353\251\224\354\235\270", Q_NULLPTR));
        btnSubAll->setText(QApplication::translate("DeviceWindow", "\354\240\204\354\261\204\353\204\220 \354\204\234\353\270\214", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("DeviceWindow", "\355\214\214\354\235\274", Q_NULLPTR));
        menu->setTitle(QApplication::translate("DeviceWindow", "\354\204\244\354\240\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeviceWindow: public Ui_DeviceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEWINDOW_H
