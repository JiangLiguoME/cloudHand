#ifndef LUATDEVICE_H
#define LUATDEVICE_H

#include <QMainWindow>

namespace Ui {
class LuatDevice;
}

class LuatDevice : public QMainWindow
{
    Q_OBJECT

public:
    explicit LuatDevice(QWidget *parent = 0);
    ~LuatDevice();

private:
    Ui::LuatDevice *ui;
};

#endif // LUATDEVICE_H
