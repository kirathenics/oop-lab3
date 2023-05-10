#pragma once

#include "Persona.h"

class Worker : public Persona	// производный класс –абочий от класса ѕерсона
{
public:
	Worker();					// конструктор без параметров
	Worker(string, int, int);	// конструктор с параметрами
	Worker(const Worker&);		// конструктор копировани€
	~Worker() override;			// виртуальный деструктор
	//~Worker();

	void set_category(int);		// метод: установить разр€д
	void show() override;		// виртуальный метод: вывод содержимого объекта
	//void show();

protected:
	int category;	// поле данных: разр€д
};