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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QVBoxLayout *mainLayout;
    QGridLayout *inputLayout;
    QLabel *info_input_number_1;
    QLineEdit *input_number_1;
    QLabel *info_input_number_2;
    QLineEdit *input_number_2;
    QGroupBox *groupBox;
    QGridLayout *buttonsLayout;
    QPushButton *addition;
    QPushButton *subtraction;
    QPushButton *multiplication;
    QPushButton *division;
    QPushButton *addition_assignment;
    QPushButton *subtraction_assignment;
    QPushButton *multiplication_assignment;
    QPushButton *division_assignment;
    QPushButton *increment_prefix;
    QPushButton *increment_postfix;
    QPushButton *remainder;
    QPushButton *remainder_assignment;
    QPushButton *less;
    QPushButton *more;
    QPushButton *equals;
    QPushButton *not_equals;
    QPushButton *degree;
    QPushButton *root;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *resultLayout;
    QLabel *info_result;
    QLineEdit *result;
    QTextBrowser *error_output;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(230, 100, 364, 389));
        mainLayout = new QVBoxLayout(centralwidget_2);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(0, 0, 0, 0);
        inputLayout = new QGridLayout();
        inputLayout->setObjectName("inputLayout");
        info_input_number_1 = new QLabel(centralwidget_2);
        info_input_number_1->setObjectName("info_input_number_1");

        inputLayout->addWidget(info_input_number_1, 0, 0, 1, 1);

        input_number_1 = new QLineEdit(centralwidget_2);
        input_number_1->setObjectName("input_number_1");

        inputLayout->addWidget(input_number_1, 0, 1, 1, 1);

        info_input_number_2 = new QLabel(centralwidget_2);
        info_input_number_2->setObjectName("info_input_number_2");

        inputLayout->addWidget(info_input_number_2, 1, 0, 1, 1);

        input_number_2 = new QLineEdit(centralwidget_2);
        input_number_2->setObjectName("input_number_2");

        inputLayout->addWidget(input_number_2, 1, 1, 1, 1);


        mainLayout->addLayout(inputLayout);

        groupBox = new QGroupBox(centralwidget_2);
        groupBox->setObjectName("groupBox");
        buttonsLayout = new QGridLayout(groupBox);
        buttonsLayout->setObjectName("buttonsLayout");
        addition = new QPushButton(groupBox);
        addition->setObjectName("addition");

        buttonsLayout->addWidget(addition, 0, 0, 1, 1);

        subtraction = new QPushButton(groupBox);
        subtraction->setObjectName("subtraction");

        buttonsLayout->addWidget(subtraction, 0, 1, 1, 1);

        multiplication = new QPushButton(groupBox);
        multiplication->setObjectName("multiplication");

        buttonsLayout->addWidget(multiplication, 0, 2, 1, 1);

        division = new QPushButton(groupBox);
        division->setObjectName("division");

        buttonsLayout->addWidget(division, 0, 3, 1, 1);

        addition_assignment = new QPushButton(groupBox);
        addition_assignment->setObjectName("addition_assignment");

        buttonsLayout->addWidget(addition_assignment, 1, 0, 1, 1);

        subtraction_assignment = new QPushButton(groupBox);
        subtraction_assignment->setObjectName("subtraction_assignment");

        buttonsLayout->addWidget(subtraction_assignment, 1, 1, 1, 1);

        multiplication_assignment = new QPushButton(groupBox);
        multiplication_assignment->setObjectName("multiplication_assignment");

        buttonsLayout->addWidget(multiplication_assignment, 1, 2, 1, 1);

        division_assignment = new QPushButton(groupBox);
        division_assignment->setObjectName("division_assignment");

        buttonsLayout->addWidget(division_assignment, 1, 3, 1, 1);

        increment_prefix = new QPushButton(groupBox);
        increment_prefix->setObjectName("increment_prefix");

        buttonsLayout->addWidget(increment_prefix, 2, 0, 1, 1);

        increment_postfix = new QPushButton(groupBox);
        increment_postfix->setObjectName("increment_postfix");

        buttonsLayout->addWidget(increment_postfix, 2, 1, 1, 1);

        remainder = new QPushButton(groupBox);
        remainder->setObjectName("remainder");

        buttonsLayout->addWidget(remainder, 2, 2, 1, 1);

        remainder_assignment = new QPushButton(groupBox);
        remainder_assignment->setObjectName("remainder_assignment");

        buttonsLayout->addWidget(remainder_assignment, 2, 3, 1, 1);

        less = new QPushButton(groupBox);
        less->setObjectName("less");

        buttonsLayout->addWidget(less, 3, 0, 1, 1);

        more = new QPushButton(groupBox);
        more->setObjectName("more");

        buttonsLayout->addWidget(more, 3, 1, 1, 1);

        equals = new QPushButton(groupBox);
        equals->setObjectName("equals");

        buttonsLayout->addWidget(equals, 3, 2, 1, 1);

        not_equals = new QPushButton(groupBox);
        not_equals->setObjectName("not_equals");

        buttonsLayout->addWidget(not_equals, 3, 3, 1, 1);

        degree = new QPushButton(groupBox);
        degree->setObjectName("degree");

        buttonsLayout->addWidget(degree, 4, 0, 1, 1);

        root = new QPushButton(groupBox);
        root->setObjectName("root");

        buttonsLayout->addWidget(root, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer, 4, 2, 1, 2);


        mainLayout->addWidget(groupBox);

        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName("resultLayout");
        info_result = new QLabel(centralwidget_2);
        info_result->setObjectName("info_result");

        resultLayout->addWidget(info_result);

        result = new QLineEdit(centralwidget_2);
        result->setObjectName("result");
        result->setEnabled(false);
        result->setReadOnly(true);

        resultLayout->addWidget(result);


        mainLayout->addLayout(resultLayout);

        error_output = new QTextBrowser(centralwidget_2);
        error_output->setObjectName("error_output");
        error_output->setEnabled(false);

        mainLayout->addWidget(error_output);

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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        addition_assignment->setText(QCoreApplication::translate("MainWindow", "+=", nullptr));
        subtraction_assignment->setText(QCoreApplication::translate("MainWindow", "-=", nullptr));
        multiplication_assignment->setText(QCoreApplication::translate("MainWindow", "*=", nullptr));
        division_assignment->setText(QCoreApplication::translate("MainWindow", "/=", nullptr));
        increment_prefix->setText(QCoreApplication::translate("MainWindow", "++x", nullptr));
        increment_postfix->setText(QCoreApplication::translate("MainWindow", "x++", nullptr));
        remainder->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        remainder_assignment->setText(QCoreApplication::translate("MainWindow", "%=", nullptr));
        less->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        more->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "==", nullptr));
        not_equals->setText(QCoreApplication::translate("MainWindow", "!=", nullptr));
        degree->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        info_result->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
