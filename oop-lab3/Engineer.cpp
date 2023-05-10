#include "Engineer.h"

Engineer::Engineer() : Worker(), specialization("�� �������") {}

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
	cout << "���: " << this->full_name << " �������: " << this->age << " ������: " << this->category << " �������������: " << this->specialization << endl;
}
