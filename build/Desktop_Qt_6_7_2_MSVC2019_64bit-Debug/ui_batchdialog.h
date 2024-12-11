/********************************************************************************
** Form generated from reading UI file 'batchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHDIALOG_H
#define UI_BATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BatchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_batchNumber;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BatchDialog)
    {
        if (BatchDialog->objectName().isEmpty())
            BatchDialog->setObjectName("BatchDialog");
        BatchDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(BatchDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(BatchDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_batchNumber = new QLineEdit(BatchDialog);
        lineEdit_batchNumber->setObjectName("lineEdit_batchNumber");

        horizontalLayout->addWidget(lineEdit_batchNumber);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(BatchDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BatchDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BatchDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BatchDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BatchDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchDialog)
    {
        BatchDialog->setWindowTitle(QCoreApplication::translate("BatchDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BatchDialog", "Enter batch no : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatchDialog: public Ui_BatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHDIALOG_H
