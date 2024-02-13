#include "polymorphisme.h"

polymorphisme::polymorphisme(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    mode = NONE;
    QObject::connect(ui.ProfRadioBtn, &QRadioButton::toggled, this, &polymorphisme::onToggleRadioButton);
    QObject::connect(ui.EtudiantRadioBtn, &QRadioButton::toggled, this, &polymorphisme::onToggleRadioButton);

}

polymorphisme::~polymorphisme()
{}

void polymorphisme::onToggleRadioButton(bool checked)
{

    QObject* obj = sender();

    if (checked) 
    {
        if (obj == ui.ProfRadioBtn && mode != PROF)
        {
            ui.widget->display(PROF);
        }
        else if (obj == ui.EtudiantRadioBtn && mode != ETUDIANT)
        { 
            ui.widget->display(ETUDIANT);
        }
    }
}
