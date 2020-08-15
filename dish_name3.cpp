#include "widget.h"
#include "ui_widget.h"
void Widget::waittime3(){   //第一个桌的第三个菜的等待时间
    time3 = dish3_time;
    sequence3 += "1";
    mytimer3->start(1000);
    ui->lcd3->display(time3);
   ui->label3->setText("等待制作菜3");
}

void Widget::doProcesstimeout3(){  //第一个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "1"){
        time3--;
        ui->label3->setText("正在制作菜3中");
        ui->lcd3->display(time3);
    }
    if (time3 == 0){
        mytimer3->stop();
        ui->label3->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(01,03);
    }
}

void Widget::waittime6(){   //第二个桌的第三个菜的等待时间
    time6 = dish3_time;
    sequence3 += "2";
    mytimer6->start(1000);
    ui->lcd6->display(time6);
   ui->label6->setText("等待制作菜3");
}

void Widget::doProcesstimeout6(){  //第二个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "2"){
        time6--;
        ui->label6->setText("正在制作菜3中");
        ui->lcd6->display(time6);
    }
    if (time6 == 0){
        mytimer6->stop();
        ui->label6->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(02,03);
    }
}
void Widget::waittime9(){   //第三个桌的第三个菜的等待时间
    time9 = dish3_time;
    sequence3 += "3";
    mytimer9->start(1000);
    ui->lcd9->display(time9);
   ui->label9->setText("等待制作菜3");
}

void Widget::doProcesstimeout9(){  //第三个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "3"){
        time9--;
        ui->label9->setText("正在制作菜3中");
        ui->lcd9->display(time9);
    }
    if (time9 == 0){
        mytimer9->stop();
        ui->label9->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(03,03);
    }
}

void Widget::waittime12(){   //第四个桌的第三个菜的等待时间
    time12 = dish3_time;
    sequence3 += "4";
    mytimer12->start(1000);
    ui->lcd12->display(time12);
   ui->label12->setText("等待制作菜3");
}

void Widget::doProcesstimeout12(){  //第四个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "4"){
        time12--;
        ui->label12->setText("正在制作菜3中");
        ui->lcd12->display(time12);
    }
    if (time12 == 0){
        mytimer12->stop();
        ui->label12->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(04,03);
    }
}

void Widget::waittime15(){   //第五个桌的第三个菜的等待时间
    time15 = dish3_time;
    sequence3 += "5";
    mytimer15->start(1000);
    ui->lcd15->display(time15);
   ui->label15->setText("等待制作菜3");
}

void Widget::doProcesstimeout15(){  //第五个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "5"){
        time15--;
        ui->label15->setText("正在制作菜3中");
        ui->lcd15->display(time15);
    }
    if (time15 == 0){
        mytimer15->stop();
        ui->label15->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(05,03);
    }
}

void Widget::waittime18(){   //第六个桌的第三个菜的等待时间
    time18 = dish3_time;
    sequence3 += "6";
    mytimer18->start(1000);
    ui->lcd18->display(time18);
   ui->label18->setText("等待制作菜3");
}

void Widget::doProcesstimeout18(){  //第六个桌的第三个菜的定时器的处理函数
    if(sequence3[0] == "6"){
        time18--;
        ui->label18->setText("正在制作菜3中");
        ui->lcd18->display(time18);
    }
    if (time18 == 0){
        mytimer18->stop();
        ui->label18->setText("菜3已完成");
        sequence3.remove(0,1);
        mysqlconnect(06,03);
    }
}
