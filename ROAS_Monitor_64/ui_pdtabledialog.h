/********************************************************************************
** Form generated from reading UI file 'pdtabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDTABLEDIALOG_H
#define UI_PDTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PdTableDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *cbChannel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *editRef;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *editVolt;
    QLabel *label;
    QPushButton *btnSetVolt;
    QPushButton *btnWriteTable;
    QTableWidget *tableWidget;

    void setupUi(QDialog *PdTableDialog)
    {
        if (PdTableDialog->objectName().isEmpty())
            PdTableDialog->setObjectName(QStringLiteral("PdTableDialog"));
        PdTableDialog->resize(791, 118);
        gridLayout = new QGridLayout(PdTableDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cbChannel = new QComboBox(PdTableDialog);
        cbChannel->setObjectName(QStringLiteral("cbChannel"));

        gridLayout->addWidget(cbChannel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_2 = new QLabel(PdTableDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editRef = new QLineEdit(PdTableDialog);
        editRef->setObjectName(QStringLiteral("editRef"));

        gridLayout->addWidget(editRef, 0, 3, 1, 1);

        label_3 = new QLabel(PdTableDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        editVolt = new QLineEdit(PdTableDialog);
        editVolt->setObjectName(QStringLiteral("editVolt"));
        editVolt->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(editVolt, 0, 6, 1, 1);

        label = new QLabel(PdTableDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 7, 1, 1);

        btnSetVolt = new QPushButton(PdTableDialog);
        btnSetVolt->setObjectName(QStringLiteral("btnSetVolt"));

        gridLayout->addWidget(btnSetVolt, 0, 8, 1, 1);

        btnWriteTable = new QPushButton(PdTableDialog);
        btnWriteTable->setObjectName(QStringLiteral("btnWriteTable"));

        gridLayout->addWidget(btnWriteTable, 0, 9, 1, 1);

        tableWidget = new QTableWidget(PdTableDialog);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setShowGrid(true);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(65);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 10);


        retranslateUi(PdTableDialog);

        QMetaObject::connectSlotsByName(PdTableDialog);
    } // setupUi

    void retranslateUi(QDialog *PdTableDialog)
    {
        PdTableDialog->setWindowTitle(QApplication::translate("PdTableDialog", "\353\263\264\354\240\225 \355\205\214\354\235\264\353\270\224", Q_NULLPTR));
        label_2->setText(QApplication::translate("PdTableDialog", "Reference", Q_NULLPTR));
        label_3->setText(QApplication::translate("PdTableDialog", "(dBm)", Q_NULLPTR));
        label->setText(QApplication::translate("PdTableDialog", "(mV x 10)", Q_NULLPTR));
        btnSetVolt->setText(QApplication::translate("PdTableDialog", "Set Voltage", Q_NULLPTR));
        btnWriteTable->setText(QApplication::translate("PdTableDialog", "Write Table", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PdTableDialog", "0 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PdTableDialog", "-5 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PdTableDialog", "-10 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PdTableDialog", "-15 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PdTableDialog", "-20 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PdTableDialog", "-25 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("PdTableDialog", "-30 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("PdTableDialog", "-35 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("PdTableDialog", "-40 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("PdTableDialog", "-45 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("PdTableDialog", "-50 dB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("PdTableDialog", "Voltage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PdTableDialog: public Ui_PdTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDTABLEDIALOG_H
