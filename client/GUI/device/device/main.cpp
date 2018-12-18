#include "luatdevice.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LuatDevice w;
    w.show();

    return a.exec();
}
