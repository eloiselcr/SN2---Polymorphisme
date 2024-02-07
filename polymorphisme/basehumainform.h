#pragma once
#include <qwidget.h>
#include <qlayout.h>
#include "Humain.h"

class BaseHumainForm :
    public QWidget
{
    Q_OBJECT
        QVBoxLayout* containerLayout;

public:
    BaseHumainForm(QWidget* parent = nullptr);
    void display(Humain* humain);

};

