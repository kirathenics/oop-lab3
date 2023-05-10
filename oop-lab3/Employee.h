#pragma once

#include "Persona.h"

class Employee : public Persona	// производный класс Служащий от класса Персона
{
public:
	Employee();						// конструктор без параметров
	Employee(string, int, string);	// конструктор с параметрами
	Employee(const Employee&);		// конструктор копирования
	~Employee() override;			// виртуальный деструктор
	//~Employee();

	void set_post(string);	// метод: установить разряд
	void show() override;	// виртуальный метод: вывод содержимого объекта
	//void show();

protected:
	string post;	// поле данных: должность
};

