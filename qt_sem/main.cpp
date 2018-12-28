#include "mainwindow.h"
#include <QApplication>
/// #include "qin_serial.h"

int main(int argc, char *argv[])
{
    /// QinSerial qs;
    /// QinAAA aaa;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /// QObject::connect(&aaa, &QinAAA::send, &qs, &QinSerial::display);

    return a.exec();
}
