/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *msgBrowser;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTbtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *msgTxtEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *userNumLbl;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(765, 369);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_9 = new QWidget(Widget);
        widget_9->setObjectName("widget_9");
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName("widget_7");
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName("widget_5");
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(widget);
        msgBrowser->setObjectName("msgBrowser");

        horizontalLayout->addWidget(msgBrowser);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontCbx = new QFontComboBox(widget_2);
        fontCbx->setObjectName("fontCbx");

        horizontalLayout_2->addWidget(fontCbx);

        sizeCbx = new QComboBox(widget_2);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName("sizeCbx");

        horizontalLayout_2->addWidget(sizeCbx);

        boldTBtn = new QToolButton(widget_2);
        boldTBtn->setObjectName("boldTBtn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/b.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(boldTBtn);

        italicTbtn = new QToolButton(widget_2);
        italicTbtn->setObjectName("italicTbtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/i.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTbtn->setIcon(icon1);
        italicTbtn->setCheckable(true);

        horizontalLayout_2->addWidget(italicTbtn);

        underlineTBtn = new QToolButton(widget_2);
        underlineTBtn->setObjectName("underlineTBtn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/u.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(underlineTBtn);

        colorTBtn = new QToolButton(widget_2);
        colorTBtn->setObjectName("colorTBtn");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);

        horizontalLayout_2->addWidget(colorTBtn);

        saveTBtn = new QToolButton(widget_2);
        saveTBtn->setObjectName("saveTBtn");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon4);

        horizontalLayout_2->addWidget(saveTBtn);

        clearTBtn = new QToolButton(widget_2);
        clearTBtn->setObjectName("clearTBtn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon5);

        horizontalLayout_2->addWidget(clearTBtn);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        msgTxtEdit = new QTextEdit(widget_4);
        msgTxtEdit->setObjectName("msgTxtEdit");
        msgTxtEdit->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_3->addWidget(msgTxtEdit);


        verticalLayout_2->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        sendBtn = new QPushButton(widget_6);
        sendBtn->setObjectName("sendBtn");

        horizontalLayout_4->addWidget(sendBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        userNumLbl = new QLabel(widget_6);
        userNumLbl->setObjectName("userNumLbl");

        horizontalLayout_4->addWidget(userNumLbl);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(widget_6);
        exitBtn->setObjectName("exitBtn");

        horizontalLayout_4->addWidget(exitBtn);


        verticalLayout_3->addWidget(widget_6);


        horizontalLayout_6->addWidget(widget_7);

        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName("widget_8");
        horizontalLayout_5 = new QHBoxLayout(widget_8);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(widget_8);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_5->addWidget(tableWidget);


        horizontalLayout_6->addWidget(widget_8);


        verticalLayout_4->addWidget(widget_9);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sizeCbx->setItemText(0, QCoreApplication::translate("Widget", "6", nullptr));
        sizeCbx->setItemText(1, QCoreApplication::translate("Widget", "7", nullptr));
        sizeCbx->setItemText(2, QCoreApplication::translate("Widget", "8", nullptr));
        sizeCbx->setItemText(3, QCoreApplication::translate("Widget", "9", nullptr));
        sizeCbx->setItemText(4, QCoreApplication::translate("Widget", "10", nullptr));
        sizeCbx->setItemText(5, QCoreApplication::translate("Widget", "11", nullptr));
        sizeCbx->setItemText(6, QCoreApplication::translate("Widget", "12", nullptr));

#if QT_CONFIG(tooltip)
        boldTBtn->setToolTip(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        boldTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        italicTbtn->setToolTip(QCoreApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        italicTbtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        underlineTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        colorTBtn->setToolTip(QCoreApplication::translate("Widget", "\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        colorTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        saveTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        saveTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        clearTBtn->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        clearTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        sendBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        userNumLbl->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
