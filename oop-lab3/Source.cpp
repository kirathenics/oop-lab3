#include "Employee.h"
#include "Engineer.h"

int main()
{
	system("chcp 1251");

	Employee obj1;
	obj1.set_full_name("�������� ������ ����������");
	obj1.set_age(27);
	obj1.set_post("���������");
	obj1.add_to_list();

	Worker obj2("��������� ���� ����������", 43, 3);
	obj2.add_to_list();

	Engineer obj3("������� ��������� �����", 35, 2, "�������-�����������");

	Persona::print_list();

	return 0;
}