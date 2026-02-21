#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QRegularExpression>
#include <QMessageBox>
#include <QDateTime>
#include <stdexcept>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

mt::BigInt MainWindow::getFirstNumber() {
    QString text = ui->input_number_1->text().trimmed();
    if (text.isEmpty()) {
        throw std::runtime_error("Первое число не введено");
    }
    if (!validateNumber(text)) {
        throw std::runtime_error("Неправильно введено 1 число");
    }
    if (text.length()>=1000) {
        throw std::runtime_error("1 число слишком длинное");
    }
    return mt::BigInt(text.toStdString());
}

mt::BigInt MainWindow::getSecondNumber() {
    QString text = ui->input_number_2->text().trimmed();
    if (text.isEmpty()) {
        throw std::runtime_error("Второе число не введено");
    }
    if (!validateNumber(text)) {
        throw std::runtime_error("Неправильно введено 2 число");
    }
    if (text.length()>=1000) {
        throw std::runtime_error("2 число слишком длинное");
    }
    return mt::BigInt(text.toStdString());
}

bool MainWindow::validateNumber(const QString& text) {
    if (text.isEmpty()) return true;
    for (int i = 0; i < text.length(); ++i) {
        QChar ch = text[i];

        if (i == 0 && ch == '-') {
            continue;
        }

        if (!ch.isDigit()) {
            return false;
        }
    }
    if (text.startsWith('-') && text.length() == 1) {
        return false;
    }
    return true;
}

void MainWindow::showResult(const QString& result) {
    ui->result->setText(result);
}

void MainWindow::showError(const QString& message) {
    ui->error_output->setPlainText((QString("%1").arg(message)));
}

void MainWindow::on_addition_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        mt::BigInt result = a + b;
        showResult(QString::fromStdString(result.toString()));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_addition_assignment_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        a += b;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_increment_prefix_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        ++a;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_increment_postfix_clicked()
{
    try {
        mt::BigInt b = getSecondNumber();
        b++;
        ui->input_number_2->setText((QString::fromStdString(b.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_subtraction_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        mt::BigInt result = a - b;
        showResult(QString::fromStdString(result.toString()));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_subtraction_assignment_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        a -= b;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_multiplication_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        mt::BigInt result = a * b;
        showResult(QString::fromStdString(result.toString()));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_multiplication_assignment_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        a *= b;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_division_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        mt::BigInt result = a / b;
        showResult(QString::fromStdString(result.toString()));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_division_assignment_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        a /= b;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_remainder_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        mt::BigInt result = a % b;
        showResult(QString::fromStdString(result.toString()));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_remainder_assignment_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        a %= b;
        ui->input_number_1->setText((QString::fromStdString(a.toString())));
        showError(QString(" "));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}




void MainWindow::on_less_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();

        bool result = (a < b);
        showResult(result ? "true" : "false");
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_more_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();

        bool result = (a > b);
        showResult(result ? "true" : "false");
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_equals_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();

        bool result = (a == b);
        showResult(result ? "true" : "false");
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_not_equals_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();

        bool result = (a != b);
        showResult(result ? "true" : "false");
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_degree_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        if (b< mt::BigInt(0)) {
            showError("Степень не может быть отрицательной");
            return;
        }
        std::string expStr = b.toString();
        int exp = std::stoi(expStr);
        mt::BigInt result = a.pow(exp);
        showResult(QString::fromStdString(result.toString()));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}


void MainWindow::on_root_clicked()
{
    try {
        mt::BigInt a = getFirstNumber();
        mt::BigInt b = getSecondNumber();
        if (b< mt::BigInt(0)) {
            showError("Степень не может быть отрицательной");
            return;
        }
        std::string expStr = b.toString();
        int exp = std::stoi(expStr);
        mt::BigInt result = a.nRoot(exp);
        showResult(QString::fromStdString(result.toString()));
    } catch (const std::exception& e) {
        showError(e.what());
    }
}
