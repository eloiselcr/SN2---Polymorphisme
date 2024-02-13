#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_polymorphisme.h"
#include "Etudiant.h"
#include "ActiveForm.h"

class polymorphisme : public QMainWindow
{
    Q_OBJECT

    ActiveForm mode;

private slots:
    void onToggleRadioButton(bool checked);

private:
    Ui::polymorphismeClass ui;

public:
    polymorphisme(QWidget *parent = nullptr);
    ~polymorphisme();

};
