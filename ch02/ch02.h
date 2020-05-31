#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ch02.h"

class ch02 : public QMainWindow
{
    Q_OBJECT

public:
    ch02(QWidget *parent = Q_NULLPTR);

private:
    Ui::ch02Class ui;
};
