/********************************************************************************
** Form generated from reading UI file 'mainscience.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCIENCE_H
#define UI_MAINSCIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainScience
{
public:

    void setupUi(QWidget *MainScience)
    {
        if (MainScience->objectName().isEmpty())
            MainScience->setObjectName("MainScience");
        MainScience->resize(800, 600);

        retranslateUi(MainScience);

        QMetaObject::connectSlotsByName(MainScience);
    } // setupUi

    void retranslateUi(QWidget *MainScience)
    {
        MainScience->setWindowTitle(QCoreApplication::translate("MainScience", "MainScience", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainScience: public Ui_MainScience {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCIENCE_H
