#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_polymorphisme.h"

class polymorphisme : public QMainWindow
{
    Q_OBJECT

public:
    polymorphisme(QWidget *parent = nullptr);
    ~polymorphisme();

private:
    Ui::polymorphismeClass ui;
};
