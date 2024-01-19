#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <cctype>
using namespace std;

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

bool MainWindow::isPalindrome(QString &text)
{
    return equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();

    if (text.isEmpty())
    {
        ui->label2->setText("           Помилка. Ви не ввели нічого.");
    }
    else
    {
        if (isPalindrome(text))
        {
            ui->label2->setText("        Введений рядок є паліндромом");
        }
        else
        {
            ui->label2->setText("       Введене рядок не є паліндромом");
        }
    }
}
