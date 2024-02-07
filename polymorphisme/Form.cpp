#include "Form.h"

void Form::addAllocatedObject(QObject* obj)
{
	allocatedObjects.push_back(obj);
}

Form::Form(QObject* parent)
	: QObject(parent)
{

}

Form::~Form()
{
	for (auto it = allocatedObjects.begin(); it != allocatedObjects.end(); it++)
	{
		(*it)->deleteLater();
	}
}
