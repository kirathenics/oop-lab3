#include "Employee.h"

Employee::Employee() : Persona(), post("Не указана") {}

Employee::Employee(string full_name, int age, string post) : Persona(full_name, age), post(post) {}

Employee::Employee(const Employee& object) : Persona(object), post(object.post) {}

Employee::~Employee() {}

void Employee::set_post(string post)
{
	this->post = post;
}

void Employee::show()
{
	cout << "ФИО: " << this->full_name << " Возраст: " << this->age << " Должность: " << this->post << endl;
}
