/********************************************************************************
** Form generated from reading UI file 'alarmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMDIALOG_H
#define UI_ALARMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AlarmDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *AlarmDialog)
    {
        if (AlarmDialog->objectName().isEmpty())
            AlarmDialog->setObjectName(QStringLiteral("AlarmDialog"));
        AlarmDialog->resize(317, 53);
        gridLayout = new QGridLayout(AlarmDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AlarmDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(AlarmDialog);

        QMetaObject::connectSlotsByName(AlarmDialog);
    } // setupUi

    void retranslateUi(QDialog *AlarmDialog)
    {
        AlarmDialog->setWindowTitle(QApplication::translate("AlarmDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AlarmDialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlarmDialog: public Ui_AlarmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMDIALOG_H
