#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("First");
    ui->comboBox->addItem("Second");
    ui->comboBox->addItem("Third");
    ui->pushButton->setText(ui->comboBox->currentText());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->pushButton->setText(ui->comboBox->currentText());
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->comboBox->currentText() == "First")
    {
        QMessageBox::information(this, ui->comboBox->currentText(), getFunction1().c_str());
    }
    else if (ui->comboBox->currentText() == "Second")
    {
        QMessageBox::information(this, ui->comboBox->currentText(), getFunction2().c_str());
    }
    else
    {
        QMessageBox::information(this, ui->comboBox->currentText(), getFunction3().c_str());
    }
}
