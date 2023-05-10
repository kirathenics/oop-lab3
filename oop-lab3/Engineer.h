#pragma once

#include "Worker.h"

class Engineer : public Worker	// производный класс Инженер от класса Рабочий
{
public:
	Engineer();							// конструктор без параметров
	Engineer(string, int, int, string);	// конструктор с параметрами
	Engineer(const Engineer&);			// конструктор копирования
	~Engineer() override;				// виртуальный деструктор
	//~Engineer();

	void set_specialization(string);	// метод: установить специализация
	void show() override;				// виртуальный метод: вывод содержимого объекта
	//void show();

protected:
	string specialization;	// поле данных: специализация
};
