#include "Worker.h"

Worker::Worker() : Persona(), category(0) {}

Worker::Worker(string full_name, int age, int category) : Persona(full_name, age), category(category) {}

Worker::Worker(const Worker& object) : Persona(object), category(object.category) {}

Worker::~Worker() {}

void Worker::set_category(int category)
{
	this->category = category;
}

void Worker::show()
{
	cout << "���: " << this->full_name << " �������: " << this->age << " ������: " << this->category << endl;
}
