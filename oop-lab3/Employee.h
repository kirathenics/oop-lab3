#pragma once

#include "Persona.h"

class Employee : public Persona	// ����������� ����� �������� �� ������ �������
{
public:
	Employee();						// ����������� ��� ����������
	Employee(string, int, string);	// ����������� � �����������
	Employee(const Employee&);		// ����������� �����������
	~Employee() override;			// ����������� ����������
	//~Employee();

	void set_post(string);	// �����: ���������� ������
	void show() override;	// ����������� �����: ����� ����������� �������
	//void show();

protected:
	string post;	// ���� ������: ���������
};

