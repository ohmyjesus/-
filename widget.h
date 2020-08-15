#ifndef WIDGET_H
#define WIDGET_H

#include <QString>
#include <QWidget>
#include <QMessageBox>
#include <QMenu>
#include <QDebug>
#include <QTimer>
#include <QTime>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QVariantList>
#include <qsqlquery.h>
#include <QDate>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void waittime1();   //响应下拉框的槽函数
    void waittime2();
    void waittime3();
    void waittime4();
    void waittime5();
    void waittime6();
    void waittime7();
    void waittime8();
    void waittime9();
    void waittime10();
    void waittime11();
    void waittime12();
    void waittime13();
    void waittime14();
    void waittime15();
    void waittime16();
    void waittime17();
    void waittime18();
    void doProcesstimeout1();   //响应定时器的槽函数
    void doProcesstimeout2();
    void doProcesstimeout3();
    void doProcesstimeout4();
    void doProcesstimeout5();
    void doProcesstimeout6();
    void doProcesstimeout7();
    void doProcesstimeout8();
    void doProcesstimeout9();
    void doProcesstimeout10();
    void doProcesstimeout11();
    void doProcesstimeout12();
    void doProcesstimeout13();
    void doProcesstimeout14();
    void doProcesstimeout15();
    void doProcesstimeout16();
    void doProcesstimeout17();
    void doProcesstimeout18();

private:
    Ui::Widget *ui;
    void numbersetting();   //六个桌等待时间的设置
    void combobox();        //下拉框的设置
    void timersetting();    //18个定时器倒计时时间的设置
    void mysqlconnect(int a,int b);
    void timeconvert();
    //18个独立定时器的设置
    QTimer *mytimer1, *mytimer2 ,*mytimer3, *mytimer4,*mytimer5,*mytimer6,
    *mytimer7,*mytimer8,*mytimer9,*mytimer10,*mytimer11,*mytimer12,
    *mytimer13,*mytimer14,*mytimer15,*mytimer16,*mytimer17,*mytimer18;
    //6个桌的三个菜的等待时间的全局变量的设置
    int time1,time2,time3,time4,time5,time6,time7,time8,time9,time10,time11,
    time12,time13,time14,time15,time16,time17,time18;
    int dish1_time, dish2_time, dish3_time;
    //判断排队序列的flag，字符串sequence，输出到数据库的可变字符列表daylisy等
    QString sequence1, sequence2,sequence3;
    int flag;
    QVariantList dayList;
    QVariantList timeList;
    QVariantList tableList;
    QVariantList dishList;

};

#endif // WIDGET_H
