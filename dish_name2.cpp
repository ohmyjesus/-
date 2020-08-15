#include "widget.h"
#include "ui_widget.h"
void Widget::waittime2(){   //第一个桌的第二个菜的等待时间
    time2 = dish2_time;
    sequence2 += "1";
    mytimer2->start(1000);
    ui->lcd2->display(time2);
   ui->label2->setText("等待制作菜2");
}

void Widget::doProcesstimeout2(){  //第一个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "1"){
        time2--;
        ui->label2->setText("正在制作菜2中");
        ui->lcd2->display(time2);
    }
    if (time2 == 0){
        mytimer2->stop();
        ui->label2->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(01,02);
    }
}
void Widget::waittime5(){   //第二个桌的第二个菜的等待时间
    time5 = dish2_time;
    sequence2 += "2";
    mytimer5->start(1000);
    ui->lcd5->display(time5);
   ui->label5->setText("等待制作菜2");
}

void Widget::doProcesstimeout5(){  //第二个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "2"){
        time5--;
        ui->label5->setText("正在制作菜2中");
        ui->lcd5->display(time5);
    }
    if (time5== 0){
        mytimer5->stop();
        ui->label5->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(02,02);
    }
}

void Widget::waittime8(){   //第三个桌的第二个菜的等待时间
    time8 = dish2_time;
    sequence2 += "3";
    mytimer8->start(1000);
    ui->lcd8->display(time8);
   ui->label8->setText("等待制作菜2");
}

void Widget::doProcesstimeout8(){  //第三个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "3"){
        time8--;
        ui->label8->setText("正在制作菜2中");
        ui->lcd8->display(time8);
    }
    if (time8== 0){
        mytimer8->stop();
        ui->label8->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(03,02);
    }
}

void Widget::waittime11(){   //第四个桌的第二个菜的等待时间
    time11 = dish2_time;
    sequence2 += "4";
    mytimer11->start(1000);
    ui->lcd11->display(time11);
   ui->label11->setText("等待制作菜2");
}

void Widget::doProcesstimeout11(){  //第四个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "4"){
        time11--;
        ui->label11->setText("正在制作菜2中");
        ui->lcd11->display(time11);
    }
    if (time11== 0){
        mytimer11->stop();
        ui->label11->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(04,02);
    }
}
void Widget::waittime14(){   //第五个桌的第二个菜的等待时间
    time14 = dish2_time;
    sequence2 += "5";
    mytimer14->start(1000);
    ui->lcd14->display(time14);
   ui->label14->setText("等待制作菜2");
}

void Widget::doProcesstimeout14(){  //第五个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "5"){
        time14--;
        ui->label14->setText("正在制作菜2中");
        ui->lcd14->display(time14);
    }
    if (time14== 0){
        mytimer14->stop();
        ui->label14->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(05,02);
    }
}

void Widget::waittime17(){   //第六个桌的第二个菜的等待时间
    time17 = dish2_time;
    sequence2 += "6";
    mytimer17->start(1000);
    ui->lcd17->display(time17);
   ui->label17->setText("等待制作菜2");
}

void Widget::doProcesstimeout17(){  //第六个桌的第二个菜的定时器的处理函数
    if(sequence2[0] == "6"){
        time17--;
        ui->label17->setText("正在制作菜2中");
        ui->lcd17->display(time17);
    }
    if (time17== 0){
        mytimer17->stop();
        ui->label17->setText("菜2已完成");
        sequence2.remove(0,1);
        mysqlconnect(06,02);
    }
}
