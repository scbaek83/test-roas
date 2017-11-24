/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionDeviceAdd;
    QAction *actionDeviceDelete;
    QAction *actionConnectUSB;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QDockWidget *dockDeviceList;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTreeWidget *treeDeviceList;
    QDockWidget *dockEventList;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeEventList;
    QPushButton *btnTest;
    QPushButton *btnClearEvent;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(991, 578);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/1495437474_connect_established.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/1495433836_stock_disconnect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionDeviceAdd = new QAction(MainWindow);
        actionDeviceAdd->setObjectName(QStringLiteral("actionDeviceAdd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/1495438874_group_full_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeviceAdd->setIcon(icon2);
        actionDeviceDelete = new QAction(MainWindow);
        actionDeviceDelete->setObjectName(QStringLiteral("actionDeviceDelete"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/1495438886_group_full_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeviceDelete->setIcon(icon3);
        actionConnectUSB = new QAction(MainWindow);
        actionConnectUSB->setObjectName(QStringLiteral("actionConnectUSB"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/image/usb_connector.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnectUSB->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dockDeviceList = new QDockWidget(centralWidget);
        dockDeviceList->setObjectName(QStringLiteral("dockDeviceList"));
        dockDeviceList->setMaximumSize(QSize(400, 524287));
        dockDeviceList->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeDeviceList = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        treeDeviceList->setHeaderItem(__qtreewidgetitem);
        treeDeviceList->setObjectName(QStringLiteral("treeDeviceList"));

        gridLayout->addWidget(treeDeviceList, 0, 0, 1, 1);

        dockDeviceList->setWidget(dockWidgetContents);

        gridLayout_3->addWidget(dockDeviceList, 0, 0, 1, 1);

        dockEventList = new QDockWidget(centralWidget);
        dockEventList->setObjectName(QStringLiteral("dockEventList"));
        dockEventList->setFeatures(QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeEventList = new QTreeWidget(dockWidgetContents_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setTextAlignment(3, Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignCenter);
        treeEventList->setHeaderItem(__qtreewidgetitem1);
        treeEventList->setObjectName(QStringLiteral("treeEventList"));
        treeEventList->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(treeEventList, 0, 0, 1, 1);

        dockEventList->setWidget(dockWidgetContents_2);

        gridLayout_3->addWidget(dockEventList, 0, 1, 1, 1);

        btnTest = new QPushButton(centralWidget);
        btnTest->setObjectName(QStringLiteral("btnTest"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/image/1495433778_Connect_256x256-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnTest->setIcon(icon5);
        btnTest->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(btnTest, 1, 0, 1, 1);

        btnClearEvent = new QPushButton(centralWidget);
        btnClearEvent->setObjectName(QStringLiteral("btnClearEvent"));

        gridLayout_3->addWidget(btnClearEvent, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 991, 21));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDeviceAdd);
        mainToolBar->addAction(actionDeviceDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionConnectUSB);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "\354\227\260\352\262\260", Q_NULLPTR));
        actionConnect->setIconText(QApplication::translate("MainWindow", "\354\227\260\352\262\260", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionConnect->setStatusTip(QApplication::translate("MainWindow", "\354\236\245\353\271\204 \354\227\260\352\262\260", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDisconnect->setText(QApplication::translate("MainWindow", "\354\227\260\352\262\260 \355\225\264\354\240\234", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionDisconnect->setStatusTip(QApplication::translate("MainWindow", "\354\227\260\352\262\260 \355\225\264\354\240\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDeviceAdd->setText(QApplication::translate("MainWindow", "DeviceAdd", Q_NULLPTR));
        actionDeviceAdd->setIconText(QApplication::translate("MainWindow", "\354\266\224\352\260\200 \354\202\255\354\240\234", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDeviceAdd->setToolTip(QApplication::translate("MainWindow", "\354\266\224\352\260\200 \354\202\255\354\240\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDeviceAdd->setStatusTip(QApplication::translate("MainWindow", "\354\236\245\354\271\230 \354\266\224\352\260\200 \354\202\255\354\240\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDeviceDelete->setText(QApplication::translate("MainWindow", "\354\236\245\354\271\230 \354\240\234\352\261\260", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionDeviceDelete->setStatusTip(QApplication::translate("MainWindow", "\353\223\261\353\241\235\353\220\234 \354\236\245\354\271\230 \354\240\234\352\261\260", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionConnectUSB->setText(QApplication::translate("MainWindow", "ConnectUSB", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        dockDeviceList->setWindowTitle(QApplication::translate("MainWindow", "\354\236\245\354\271\230 \353\246\254\354\212\244\355\212\270", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeDeviceList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\354\203\201\355\203\234", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "IP Address", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\354\236\245\354\271\230\353\252\205", Q_NULLPTR));
        dockEventList->setWindowTitle(QApplication::translate("MainWindow", "\354\235\264\353\262\244\355\212\270", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeEventList->headerItem();
        ___qtreewidgetitem1->setText(3, QApplication::translate("MainWindow", "\353\260\234\354\203\235 \354\213\234\352\260\204", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "\354\235\264\353\262\244\355\212\270", Q_NULLPTR));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "\354\261\204\353\204\220", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\354\236\245\354\271\230\353\252\205", Q_NULLPTR));
        btnTest->setText(QApplication::translate("MainWindow", "TEST", Q_NULLPTR));
        btnClearEvent->setText(QApplication::translate("MainWindow", "Clear Event", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
