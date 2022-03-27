#include "widget.h"
#include "ui_widget.h"
#include "core.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    isTo=true;
//    setFixedSize(400,300);
    ui->setupUi(this);
    connect(ui->convertButton,SIGNAL(clicked()),this,SLOT(convert()));
    connect(ui->inputTextBox,SIGNAL(editingFinished()),this,SLOT(convert()));
    connect(ui->changeButton,SIGNAL(clicked()),this,SLOT(changeType()));
}
void Widget::changeType()
{
    isTo=!isTo;
    ui->inputLabel->setText((isTo)?"Plain Text:":"ASCII Code:");
    ui->inputTextBox->setPlaceholderText((isTo)?"Try to type somethings...":"Paste or press the ASCII Code here!");
    ui->inputTextBox->setText(QString());
//    ui->inputTextBox->
    ui->outputTextBox->setPlainText(QString());
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
