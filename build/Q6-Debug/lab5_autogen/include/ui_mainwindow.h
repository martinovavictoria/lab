/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QWidget *widget;
    QGridLayout *inputLayout;
    QLabel *info_input_number_1;
    QLabel *info_input_number_2;
    QLineEdit *input_number_2;
    QLineEdit *input_number_1;
    QGroupBox *groupBox;
    QGridLayout *buttonsLayout;
    QPushButton *division_assignment;
    QPushButton *not_equals;
    QPushButton *increment_postfix;
    QPushButton *subtraction;
    QSpacerItem *horizontalSpacer;
    QPushButton *multiplication;
    QPushButton *addition;
    QPushButton *more;
    QPushButton *addition_assignment;
    QPushButton *root;
    QPushButton *subtraction_assignment;
    QPushButton *degree;
    QPushButton *increment_prefix;
    QPushButton *remainder_assignment;
    QPushButton *less;
    QPushButton *multiplication_assignment;
    QPushButton *equals;
    QPushButton *division;
    QPushButton *remainder;
    QWidget *widget1;
    QHBoxLayout *resultLayout;
    QLabel *info_result;
    QLineEdit *result;
    QTextBrowser *error_output;
    QStatusBar *statusbar_2;
    QPushButton *Secret;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(961, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 0, 471, 591));
        widget = new QWidget(centralwidget_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 11, 421, 56));
        inputLayout = new QGridLayout(widget);
        inputLayout->setObjectName("inputLayout");
        inputLayout->setContentsMargins(0, 0, 0, 0);
        info_input_number_1 = new QLabel(widget);
        info_input_number_1->setObjectName("info_input_number_1");

        inputLayout->addWidget(info_input_number_1, 0, 0, 1, 1);

        info_input_number_2 = new QLabel(widget);
        info_input_number_2->setObjectName("info_input_number_2");

        inputLayout->addWidget(info_input_number_2, 1, 0, 1, 1);

        input_number_2 = new QLineEdit(widget);
        input_number_2->setObjectName("input_number_2");

        inputLayout->addWidget(input_number_2, 1, 1, 1, 1);

        input_number_1 = new QLineEdit(widget);
        input_number_1->setObjectName("input_number_1");

        inputLayout->addWidget(input_number_1, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(11, 73, 421, 231));
        buttonsLayout = new QGridLayout(groupBox);
        buttonsLayout->setObjectName("buttonsLayout");
        division_assignment = new QPushButton(groupBox);
        division_assignment->setObjectName("division_assignment");

        buttonsLayout->addWidget(division_assignment, 1, 3, 1, 1);

        not_equals = new QPushButton(groupBox);
        not_equals->setObjectName("not_equals");

        buttonsLayout->addWidget(not_equals, 3, 3, 1, 1);

        increment_postfix = new QPushButton(groupBox);
        increment_postfix->setObjectName("increment_postfix");

        buttonsLayout->addWidget(increment_postfix, 2, 1, 1, 1);

        subtraction = new QPushButton(groupBox);
        subtraction->setObjectName("subtraction");

        buttonsLayout->addWidget(subtraction, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer, 4, 2, 1, 2);

        multiplication = new QPushButton(groupBox);
        multiplication->setObjectName("multiplication");

        buttonsLayout->addWidget(multiplication, 0, 2, 1, 1);

        addition = new QPushButton(groupBox);
        addition->setObjectName("addition");

        buttonsLayout->addWidget(addition, 0, 0, 1, 1);

        more = new QPushButton(groupBox);
        more->setObjectName("more");

        buttonsLayout->addWidget(more, 3, 1, 1, 1);

        addition_assignment = new QPushButton(groupBox);
        addition_assignment->setObjectName("addition_assignment");

        buttonsLayout->addWidget(addition_assignment, 1, 0, 1, 1);

        root = new QPushButton(groupBox);
        root->setObjectName("root");

        buttonsLayout->addWidget(root, 4, 1, 1, 1);

        subtraction_assignment = new QPushButton(groupBox);
        subtraction_assignment->setObjectName("subtraction_assignment");

        buttonsLayout->addWidget(subtraction_assignment, 1, 1, 1, 1);

        degree = new QPushButton(groupBox);
        degree->setObjectName("degree");

        buttonsLayout->addWidget(degree, 4, 0, 1, 1);

        increment_prefix = new QPushButton(groupBox);
        increment_prefix->setObjectName("increment_prefix");

        buttonsLayout->addWidget(increment_prefix, 2, 0, 1, 1);

        remainder_assignment = new QPushButton(groupBox);
        remainder_assignment->setObjectName("remainder_assignment");

        buttonsLayout->addWidget(remainder_assignment, 2, 3, 1, 1);

        less = new QPushButton(groupBox);
        less->setObjectName("less");

        buttonsLayout->addWidget(less, 3, 0, 1, 1);

        multiplication_assignment = new QPushButton(groupBox);
        multiplication_assignment->setObjectName("multiplication_assignment");

        buttonsLayout->addWidget(multiplication_assignment, 1, 2, 1, 1);

        equals = new QPushButton(groupBox);
        equals->setObjectName("equals");

        buttonsLayout->addWidget(equals, 3, 2, 1, 1);

        division = new QPushButton(groupBox);
        division->setObjectName("division");

        buttonsLayout->addWidget(division, 0, 3, 1, 1);

        remainder = new QPushButton(groupBox);
        remainder->setObjectName("remainder");

        buttonsLayout->addWidget(remainder, 2, 2, 1, 1);

        widget1 = new QWidget(centralwidget_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 310, 421, 91));
        resultLayout = new QHBoxLayout(widget1);
        resultLayout->setObjectName("resultLayout");
        resultLayout->setContentsMargins(0, 0, 0, 0);
        info_result = new QLabel(widget1);
        info_result->setObjectName("info_result");

        resultLayout->addWidget(info_result);

        result = new QLineEdit(widget1);
        result->setObjectName("result");
        result->setEnabled(false);
        result->setReadOnly(true);

        resultLayout->addWidget(result);

        error_output = new QTextBrowser(centralwidget_2);
        error_output->setObjectName("error_output");
        error_output->setEnabled(false);
        error_output->setGeometry(QRect(10, 401, 421, 171));
        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName("statusbar_2");
        statusbar_2->setGeometry(QRect(0, 0, 3, 22));
        Secret = new QPushButton(centralwidget);
        Secret->setObjectName("Secret");
        Secret->setGeometry(QRect(600, 330, 61, 51));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(820, 490, 119, 89));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        info_input_number_1->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\265\321\200\320\262\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        info_input_number_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\202\320\276\321\200\320\276\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        input_number_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        input_number_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        division_assignment->setText(QCoreApplication::translate("MainWindow", "/=", nullptr));
        not_equals->setText(QCoreApplication::translate("MainWindow", "!=", nullptr));
        increment_postfix->setText(QCoreApplication::translate("MainWindow", "x++", nullptr));
        subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        more->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        addition_assignment->setText(QCoreApplication::translate("MainWindow", "+=", nullptr));
        root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        subtraction_assignment->setText(QCoreApplication::translate("MainWindow", "-=", nullptr));
        degree->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        increment_prefix->setText(QCoreApplication::translate("MainWindow", "++x", nullptr));
        remainder_assignment->setText(QCoreApplication::translate("MainWindow", "%=", nullptr));
        less->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        multiplication_assignment->setText(QCoreApplication::translate("MainWindow", "*=", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "==", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        remainder->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        info_result->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        error_output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#000000;\"> </span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans "
                        "Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">\342\240\200     (\\__/)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">\342\240\200      (\342\200\242\343\205\205\342\200\242) \320\272\320\260\321\201\321\201\320\270\321\200\321\210\320\260, \320\272\320\276\321\202\320\276\321\200\320\260\321\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">    \357\274\277\343\203\216 \343\203\275 \343\203\216\357\274\274\357\274\277 \321\203\320\274\320\265\320\265\321\202 \320\276\321\202\320\274\320\265\320\275\321\217\321\202\321\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kan"
                        "nada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">   `/ `/ \342\214\222\357\274\271\342\214\222 \357\274\271 \343\203\275 \320\277\320\276\320\272\321\203\320\277\320\272\320\270</span><a href=\"https://vk.com/id135933843\"><span style=\" font-size:10pt; text-decoration: underline; color:#000000;\"><br /></span></a><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">(    (\344\270\211\343\203\275\344\272\272      /      | </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">|       \357\276\211\342\214\222\357\274\274 \357\277\243\357\277\243\343\203\275 \343\203\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans "
                        "Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">\343\203\275\357\274\277\357\274\277\357\274\277\357\274\236\357\275\244\357\274\277\357\274\277_\357\274\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">       \357\275\234( \347\216\213 \357\276\211\343\200\210 (\\__/)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0p"
                        "x; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanagari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">        /\357\276\220`\343\203\274\342\200\225\345\275\241\\(\342\200\242\343\205\205\342\200\242) \320\276\320\261\321\213\321\207\320\275\320\260\321\217 \320\272\320\260\321\201\321\201\320\270\321\200\321\210\320\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Roboto','Helvetica Neue','Geneva','Noto Sans Armenian','Noto Sans Bengali','Noto Sans Cherokee','Noto Sans Devanag"
                        "ari','Noto Sans Ethiopic','Noto Sans Georgian','Noto Sans Hebrew','Noto Sans Kannada','Noto Sans Khmer','Noto Sans Lao','Noto Sans Osmanya','Noto Sans Tamil','Noto Sans Telugu','Noto Sans Thai','arial','Tahoma','verdana','sans-serif'; font-size:10pt; color:#000000;\">       / \342\225\260------\342\225\257 \\/\341\205\240\\&gt;</span></p></body></html>", nullptr));
        Secret->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\357\274\217\357\276\214\357\276\214 \343\203\240\357\275\200\343\203\275\n"
"/ \343\203\216) \342\210\247 \342\210\247 \357\274\211 \343\203\275\n"
"/ \357\275\234 (\302\264\343\203\273\317\211 \343\203\273`\357\274\211\343\203\216\342\214\222\357\274\210\343\202\235._,\343\203\216\n"
"/ \357\276\211\342\214\222\357\274\277\342\214\222\343\202\235\343\203\274\343\201\217 \357\274\274 \357\274\217\n"
"\344\270\266\357\274\277 \343\203\216 \343\203\216\357\275\244 | /\n"
"`\343\203\275 `\343\203\274-\342\200\230\344\272\272`\343\203\274\357\276\211 /\n"
"\344\270\266 \357\277\243 _\344\272\272\342\200\231\345\275\241\357\276\211\n"
"\357\274\217\357\275\200\343\203\275 _/__'", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
