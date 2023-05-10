#include "Employee.h"

Employee::Employee() : Persona(), post("�� �������") {}

Employee::Employee(string full_name, int age, string post) : Persona(full_name, age), post(post) {}

Employee::Employee(const Employee& object) : Persona(object), post(object.post) {}

Employee::~Employee() {}

void Employee::set_post(string post)
{
	this->post = post;
}

void Employee::show()
{
	cout << "���: " << this->full_name << " �������: " << this->age << " ���������: " << this->post << endl;
}
