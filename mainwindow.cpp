#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget->setLabelText("username");
    ui->widget_2->setLabelText("password");
    ui->widget_2->editor()->setEchoMode(QLineEdit::EchoMode::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    if (ui->widget->editor()->hasFocus())
    {
        ui->widget->showCorrect();
    }
    else if (ui->widget_2->editor()->hasFocus())
    {
        ui->widget_2->showCorrect();
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->widget->editor()->hasFocus())
    {
        ui->widget->showWrong();
    }
    else if (ui->widget_2->editor()->hasFocus())
    {
        ui->widget_2->showWrong();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui->widget->editor()->hasFocus())
    {
        ui->widget->showLoading();
    }
    else if (ui->widget_2->editor()->hasFocus())
    {
        ui->widget_2->showLoading();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if (ui->widget->editor()->hasFocus())
    {
        ui->widget->hideLoading();
    }
    else if (ui->widget_2->editor()->hasFocus())
    {
        ui->widget_2->hideLoading();
    }
}
