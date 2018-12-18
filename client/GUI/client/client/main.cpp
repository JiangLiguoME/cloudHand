#include "client.h"
#include "loginform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Client w;
    w.hide();
    LoginForm l;
    l.show();

    return a.exec();
}
