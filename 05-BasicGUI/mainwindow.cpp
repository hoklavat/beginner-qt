#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(320, 450);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString s1 = QString("Line Edit: " + ui->lineEdit->text());
    QString s2 = QString("Text Edit: " + ui->textEdit->toPlainText());
    QString s3 = QString("Plain Edit: " + ui->plainTextEdit->toPlainText());

    QString s4 = "Radio Button: ";
    if(ui->radioButton->isChecked())
        s4.append("R1.");
    if(ui->radioButton_2->isChecked())
        s4.append("R2.");
    if(ui->radioButton_3->isChecked())
        s4.append("R3.");

    QString s5 = "Check Box: ";
    if(ui->checkBox->isChecked())
        s5.append("C1.");
    if(ui->checkBox_2->isChecked())
        s5.append("C2.");
    if(ui->checkBox_3->isChecked())
        s5.append("C3.");

    QString s6 = "Spinbox: " + ui->spinBox->text();
    QString s7 = "Font: " + ui->fontComboBox->currentFont().toString();
    QString s8 = "Combo Box: " + ui->comboBox->currentText();


    QString S = QString(s1+"\n"+s2+"\n"+s3+"\n"+s4+"\n"+s5+"\n"+s6+"\n"+s7+"\n"+s8);
    QMessageBox msg;
    msg.setText(S);
    msg.setIcon(QMessageBox::Information);
    msg.setWindowTitle("Basic Output");
    msg.exec();


}
