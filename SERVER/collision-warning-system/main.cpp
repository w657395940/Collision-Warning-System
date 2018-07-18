#include "mainwindow.h"
#include <QApplication>

/**
  应用程序入口
 * @brief qMain
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //窗口类
    MainWindow w;
    //显示窗口
    w.setWindowTitle("碰撞预警系统");
    w.show();

    return a.exec();
}
