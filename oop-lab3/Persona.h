#pragma once

#include <iostream>
using namespace std;

class Persona	// абстрактный класс Персона
{
public:
	Persona();					// конструктор без параметров
	Persona(string, int);		// конструктор с параметрами
	Persona(const Persona&);	// конструктор копирования
	virtual ~Persona();			// виртуальный деструктор
	//~Persona();

	void set_full_name(string);	// метод: установить ФИО
	void set_age(int);			// метод: установить возраст
	virtual void show() = 0;	// виртуальный метод: вывести содержимого объекта
	//void show();

	static Persona* list_head;	// начало списка
	Persona* next = nullptr;	// указатель на следующий элемент списка
	void add_to_list();			// метод: добавить элемент в начало списка
	static void print_list();	// метод: вывод содержимого списка

protected:
	string full_name;	// поле данных: ФИО
	int age;			// поле данных: возраст
};