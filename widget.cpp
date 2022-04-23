#include "widget.h"
#include "ui_widget.h"
#include "core.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    isTo=true;
    ui->setupUi(this);
}
void Widget::changeType()
{
    isTo=!isTo;
    ui->inputLabel->setText((isTo)?"Plain Text:":"ASCII Code:");
    ui->inputTextBox->setPlaceholderText((isTo)?"Try to type somethings...":"Paste or press the ASCII Code here!");
    ui->inputTextBox->clear();
    ui->outputTextBox->clear();
    ui->outputLabel->setText((isTo)?"ASCII Code:":"Plain Text:");
}
void Widget::convert()
{
    ui->inputTextBox->text();
    ui->outputTextBox->setPlainText((isTo)?str2ascii(ui->inputTextBox->text()):ascii2str(ui->inputTextBox->text()));
}

Widget::~Widget()
{
    delete ui;
}
