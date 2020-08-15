#include "widget.h"
#include "ui_widget.h"

void Widget::combobox(){      //下拉框的设置
    QMenu *menu1 = new QMenu(this);
    menu1->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime1()));
    menu1->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime2()));
    menu1->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime3()));
    ui->tbtn1->setMenu(menu1);

    QMenu *menu2 = new QMenu(this);
    menu2->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime4()));
    menu2->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime5()));
    menu2->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime6()));
    ui->tbtn2->setMenu(menu2);

    QMenu *menu3 = new QMenu(this);
    menu3->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime7()));
    menu3->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime8()));
    menu3->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime9()));
    ui->tbtn3->setMenu(menu3);

    QMenu *menu4 = new QMenu(this);
    menu4->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime10()));
    menu4->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime11()));
    menu4->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime12()));
    ui->tbtn4->setMenu(menu4);

    QMenu *menu5 = new QMenu(this);
    menu5->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime13()));
    menu5->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime14()));
    menu5->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime15()));
    ui->tbtn5->setMenu(menu5);

    QMenu *menu6 = new QMenu(this);
    menu6->addAction(QIcon("../test06_toolbar/DD2.png"), "菜1", this, SLOT(waittime16()));
    menu6->addAction(QIcon("../test06_toolbar/DD3.png"), "菜2", this, SLOT(waittime17()));
    menu6->addAction(QIcon("../test06_toolbar/DD1.png"), "菜3", this, SLOT(waittime18()));
    ui->tbtn6->setMenu(menu6);
}

void Widget::numbersetting(){   //每个桌的3个菜的等待时间的设置
    dish1_time = 300;
    dish2_time = 300;
    dish3_time = 320;
    time1 = dish1_time; //第一个桌3个菜的等待时间  5-10分钟
    time2 = dish2_time;
    time3 = dish3_time;
    time4 = dish1_time; //第二个桌3个菜的等待时间  5-10分钟
    time5 = dish2_time;
    time6 = dish3_time;
    time7 = dish1_time; //第三个桌3个菜的等待时间  5-10分钟
    time8 = dish2_time;
    time9 = dish3_time;
    time10 = dish1_time; //第四个桌3个菜的等待时间  5-10分钟
    time11 = dish2_time;
    time12 = dish3_time;
    time13 = dish1_time; //第五个桌3个菜的等待时间  5-10分钟
    time14 = dish2_time;
    time15 = dish3_time;
    time16 = dish1_time; //第六个桌3个菜的等待时间  5-10分钟
    time17 = dish2_time;
    time18 = dish3_time;
    flag = 0;
    sequence1.clear();
    sequence2.clear();
    sequence3.clear();
}

void Widget::timersetting(){    //定时器的设置及信号的绑定
    mytimer1 = new QTimer(this);
    mytimer2 = new QTimer(this);
    mytimer3 = new QTimer(this);
    mytimer4 = new QTimer(this);
    mytimer5 = new QTimer(this);
    mytimer6 = new QTimer(this);
    mytimer7 = new QTimer(this);
    mytimer8 = new QTimer(this);
    mytimer9 = new QTimer(this);
    mytimer10 = new QTimer(this);
    mytimer11 = new QTimer(this);
    mytimer12 = new QTimer(this);
    mytimer13 = new QTimer(this);
    mytimer14 = new QTimer(this);
    mytimer15 = new QTimer(this);
    mytimer16 = new QTimer(this);
    mytimer17 = new QTimer(this);
    mytimer18 = new QTimer(this);

    connect(mytimer1,SIGNAL(timeout()), this, SLOT(doProcesstimeout1()));
    connect(mytimer2,SIGNAL(timeout()), this, SLOT(doProcesstimeout2()));
    connect(mytimer4,SIGNAL(timeout()), this, SLOT(doProcesstimeout4()));
    connect(mytimer3,SIGNAL(timeout()), this, SLOT(doProcesstimeout3()));
    connect(mytimer5,SIGNAL(timeout()), this, SLOT(doProcesstimeout5()));
    connect(mytimer6,SIGNAL(timeout()), this, SLOT(doProcesstimeout6()));
    connect(mytimer7,SIGNAL(timeout()), this, SLOT(doProcesstimeout7()));
    connect(mytimer8,SIGNAL(timeout()), this, SLOT(doProcesstimeout8()));
    connect(mytimer9,SIGNAL(timeout()), this, SLOT(doProcesstimeout9()));
    connect(mytimer10,SIGNAL(timeout()), this, SLOT(doProcesstimeout10()));
    connect(mytimer11,SIGNAL(timeout()), this, SLOT(doProcesstimeout11()));
    connect(mytimer12,SIGNAL(timeout()), this, SLOT(doProcesstimeout12()));
    connect(mytimer13,SIGNAL(timeout()), this, SLOT(doProcesstimeout13()));
    connect(mytimer14,SIGNAL(timeout()), this, SLOT(doProcesstimeout14()));
    connect(mytimer15,SIGNAL(timeout()), this, SLOT(doProcesstimeout15()));
    connect(mytimer16,SIGNAL(timeout()), this, SLOT(doProcesstimeout16()));
    connect(mytimer17,SIGNAL(timeout()), this, SLOT(doProcesstimeout17()));
    connect(mytimer18,SIGNAL(timeout()), this, SLOT(doProcesstimeout18()));
}

void Widget::mysqlconnect(int a,int b){  //数据库的连接
    dayList.clear();
    timeList.clear();
    tableList.clear();
    dishList.clear();
    qDebug()<<QSqlDatabase::drivers();
    qDebug()<<QCoreApplication::libraryPaths(); //数据库驱动的文件位置
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");//数据库对象
    db.setHostName("127.0.0.1");//数据库服务器IP
    db.setUserName("root"); //数据库帐号
    db.setPassword("123456");//数据库密码
    db.setDatabaseName("order_dish");//数据库名
    //判断数据库是否连接成功，同时打开数据库
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }
    else {
        qDebug()<<"连接数据库成功";
        QSqlQuery query;
        QDate D1;
        QTime T1;
        D1 = QDate::currentDate();
        T1 = QTime::currentTime();
        //为了调试的时候避免数据叠加，可在每一次创建表之前删除原来的表，在加入数据
        //query.exec("drop table dish");
        //创建表一次就行
        //query.exec("create table dish(id int primary key auto_increment,orderday varchar(255),ordertime varchar(255),whichtable int,whichdish int);");
        //单组传入
        //query.exec("insert into dish(orderday,ordertime,whichtable,whichdish) values('D1','T1',01,01)");
        //传入后可用查询风格
/////////////////////////////test/////////////////////
        //批量插入 odbc风格
        //预处理语句  相当与占位符
        query.prepare("insert into dish(orderday,ordertime,whichtable,whichdish) values(?,?,?,?);");
        //给字段设置内容 list
        dayList<<D1;
        timeList<<T1;
        tableList<<a;
        dishList<<b;
        //给字段绑定相应的值，按顺序绑定
        query.addBindValue(dayList);
        query.addBindValue(timeList);
        query.addBindValue(tableList);
        query.addBindValue(dishList);
        //执行预处理命令
        query.execBatch();
///////////////////////////////////test//////////////////////////////
}
}
