#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    numbersetting(); //time1-time16,菜的等待时间设置
    combobox();      //下拉框的设置
    timersetting();  //18个定时器的设置
}
Widget::~Widget()
{
    delete ui;
}

