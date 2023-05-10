#include "Persona.h"

Persona::Persona() : full_name("�� �������"), age(0) {}

Persona::Persona(string full_name, int age) : full_name(full_name), age(age) {}

Persona::Persona(const Persona& object) : full_name(object.full_name), age(object.age) {}

Persona::~Persona() {}

void Persona::set_full_name(string full_name)
{
	this->full_name = full_name;
}

void Persona::set_age(int age)
{
	this->age = age;
}

/*void Persona::show()
{
	cout << "�������� ����� show ������ Persona" << endl;
}*/

Persona* Persona::list_head = nullptr;

void Persona::add_to_list()
{
	Persona* temp = this;
	temp->next = list_head;
	list_head = temp;
}

void Persona::print_list()
{
	cout << "���������� ������:" << endl;
	Persona* temp = list_head;
	while (temp != nullptr)
	{
		temp->show();
		temp = temp->next;
	}
}
