#include "widget.h"
#include "ui_widget.h"
void Widget::waittime1(){   //桌1的第一个菜的定时器启动函数
    time1 = dish1_time;     //再次点餐时用到
    sequence1 += "1";
    ui->lcd1->display(time1);
    mytimer1->start(1000);
    ui->label1->setText("等待制作菜1");
}

void Widget::doProcesstimeout1(){ //第一个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="1"){
        ui->label1->setText("正在制作菜1中");
        time1--;
        ui->lcd1->display(time1);}
    if (time1 == 0){
        mytimer1->stop();
        ui->label1->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(01,01);
    }
}

void Widget::waittime4(){   //第二个桌的第一个菜的启动定时器函数
    time4 = dish1_time;
    sequence1 += "2";
    ui->lcd4->display(time4);
    mytimer4->start(1000);
    ui->label4->setText("等待制作菜1");
}

void Widget::doProcesstimeout4(){  //第二个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="2"){
        ui->label4->setText("正在制作菜1中");
        time4--;
        ui->lcd4->display(time4);}
    if (time4 == 0){
        mytimer4->stop();
        ui->label4->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(02,01);
    }
}
void Widget::waittime7(){   //第三个桌的第一个菜的启动定时器函数
    time7 = dish1_time;
    sequence1 += "3";
    ui->lcd7->display(time7);
    mytimer7->start(1000);
    ui->label7->setText("等待制作菜1");
}

void Widget::doProcesstimeout7(){  //第三个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="3"){
        ui->label7->setText("正在制作菜1中");
        time7--;
        ui->lcd7->display(time7);}
    if (time7 == 0){
        mytimer7->stop();
        ui->label7->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(03,01);
    }
}
void Widget::waittime10(){   //第四个桌的第一个菜的启动定时器函数
    time10 = dish1_time;
    sequence1 += "4";
    ui->lcd10->display(time10);
    mytimer10->start(1000);
    ui->label10->setText("等待制作菜1");
}

void Widget::doProcesstimeout10(){  //第四个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="4"){
        ui->label10->setText("正在制作菜1中");
        time10--;
        ui->lcd10->display(time10);}
    if (time10 == 0){
        mytimer10->stop();
        ui->label10->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(04,01);
    }
}
void Widget::waittime13(){   //第五个桌的第一个菜的启动定时器函数
    time13 = dish1_time;
    sequence1 += "5";
    ui->lcd13->display(time13);
    mytimer13->start(1000);
    ui->label13->setText("等待制作菜1");
}

void Widget::doProcesstimeout13(){  //第五个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="5"){
        ui->label13->setText("正在制作菜1中");
        time13--;
        ui->lcd13->display(time13);}
    if (time13 == 0){
        mytimer13->stop();
        ui->label13->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(05,01);
    }
}
void Widget::waittime16(){   //第六个桌的第一个菜的启动定时器函数
    time16 = dish1_time;
    sequence1 += "6";
    ui->lcd16->display(time16);
    mytimer16->start(1000);
    ui->label16->setText("等待制作菜1");
}

void Widget::doProcesstimeout16(){  //第六个桌的第一个菜的定时器处理函数
    if(sequence1[0]=="6"){
        ui->label16->setText("正在制作菜1中");
        time16--;
        ui->lcd16->display(time16);}
    if (time16 == 0){
        mytimer16->stop();
        ui->label16->setText("菜1已完成");
        sequence1.remove(0,1);
        mysqlconnect(06,01);
    }
}
