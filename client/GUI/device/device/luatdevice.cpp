#include "luatdevice.h"
#include "ui_luatdevice.h"

LuatDevice::LuatDevice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LuatDevice)
{
    ui->setupUi(this);
}

LuatDevice::~LuatDevice()
{
    delete ui;
}
