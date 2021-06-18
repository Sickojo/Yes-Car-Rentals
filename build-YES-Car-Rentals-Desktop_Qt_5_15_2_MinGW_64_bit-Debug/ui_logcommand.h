/********************************************************************************
** Form generated from reading UI file 'logcommand.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGCOMMAND_H
#define UI_LOGCOMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_LogCommand
{
public:

    void setupUi(QDialog *LogCommand)
    {
        if (LogCommand->objectName().isEmpty())
            LogCommand->setObjectName(QString::fromUtf8("LogCommand"));
        LogCommand->resize(998, 497);

        retranslateUi(LogCommand);

        QMetaObject::connectSlotsByName(LogCommand);
    } // setupUi

    void retranslateUi(QDialog *LogCommand)
    {
        LogCommand->setWindowTitle(QCoreApplication::translate("LogCommand", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogCommand: public Ui_LogCommand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGCOMMAND_H
