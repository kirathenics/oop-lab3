#include "Engineer.h"

Engineer::Engineer() : Worker(), specialization("Не указана") {}

Engineer::Engineer(string full_name, int age, int category, string specialization) : Worker(full_name, age, category), specialization(specialization) 
{
	Persona::add_to_list();
}

Engineer::Engineer(const Engineer& object) : Worker(object), specialization(object.specialization)
{
	Persona::add_to_list();
}

Engineer::~Engineer() {}

void Engineer::set_specialization(string specialization)
{
	this->specialization = specialization;
}

void Engineer::show()
{
	cout << "ФИО: " << this->full_name << " Возраст: " << this->age << " Разряд: " << this->category << " Специализация: " << this->specialization << endl;
}
