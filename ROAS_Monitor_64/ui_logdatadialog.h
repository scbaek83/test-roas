/********************************************************************************
** Form generated from reading UI file 'logdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGDATADIALOG_H
#define UI_LOGDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogDataDialog
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QSpacerItem *verticalSpacer;
    QPushButton *btnDelete;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QTextEdit *editLog;
    QLabel *labelCnt;
    QLabel *labelMaxCnt;

    void setupUi(QDialog *LogDataDialog)
    {
        if (LogDataDialog->objectName().isEmpty())
            LogDataDialog->setObjectName(QStringLiteral("LogDataDialog"));
        LogDataDialog->resize(739, 384);
        gridLayout_3 = new QGridLayout(LogDataDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame_2 = new QFrame(LogDataDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnLoad = new QPushButton(frame_2);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        verticalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(frame_2);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        verticalLayout->addWidget(btnSave);

        btnClear = new QPushButton(frame_2);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        verticalLayout->addWidget(btnClear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        btnDelete = new QPushButton(frame_2);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        verticalLayout->addWidget(btnDelete);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 199, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        frame = new QFrame(LogDataDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(550, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        editLog = new QTextEdit(frame);
        editLog->setObjectName(QStringLiteral("editLog"));

        gridLayout->addWidget(editLog, 0, 0, 1, 2);

        labelCnt = new QLabel(frame);
        labelCnt->setObjectName(QStringLiteral("labelCnt"));

        gridLayout->addWidget(labelCnt, 1, 0, 1, 1);

        labelMaxCnt = new QLabel(frame);
        labelMaxCnt->setObjectName(QStringLiteral("labelMaxCnt"));

        gridLayout->addWidget(labelMaxCnt, 1, 1, 1, 1);

        editLog->raise();
        editLog->raise();
        labelMaxCnt->raise();
        labelCnt->raise();

        gridLayout_3->addWidget(frame, 0, 1, 1, 1);


        retranslateUi(LogDataDialog);

        QMetaObject::connectSlotsByName(LogDataDialog);
    } // setupUi

    void retranslateUi(QDialog *LogDataDialog)
    {
        LogDataDialog->setWindowTitle(QApplication::translate("LogDataDialog", "Dialog", Q_NULLPTR));
        btnLoad->setText(QApplication::translate("LogDataDialog", "\353\266\210\353\237\254\354\230\244\352\270\260", Q_NULLPTR));
        btnSave->setText(QApplication::translate("LogDataDialog", "\355\214\214\354\235\274 \354\240\200\354\236\245", Q_NULLPTR));
        btnClear->setText(QApplication::translate("LogDataDialog", "\355\231\224\353\251\264 Clear", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("LogDataDialog", "\353\241\234\352\267\270 \354\202\255\354\240\234", Q_NULLPTR));
        labelCnt->setText(QApplication::translate("LogDataDialog", "Log \352\260\257\354\210\230 :", Q_NULLPTR));
        labelMaxCnt->setText(QApplication::translate("LogDataDialog", "Log \352\260\257\354\210\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogDataDialog: public Ui_LogDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGDATADIALOG_H
