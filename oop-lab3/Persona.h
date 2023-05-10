#pragma once

#include <iostream>
using namespace std;

class Persona	// ����������� ����� �������
{
public:
	Persona();					// ����������� ��� ����������
	Persona(string, int);		// ����������� � �����������
	Persona(const Persona&);	// ����������� �����������
	virtual ~Persona();			// ����������� ����������
	//~Persona();

	void set_full_name(string);	// �����: ���������� ���
	void set_age(int);			// �����: ���������� �������
	virtual void show() = 0;	// ����������� �����: ������� ����������� �������
	//void show();

	static Persona* list_head;	// ������ ������
	Persona* next = nullptr;	// ��������� �� ��������� ������� ������
	void add_to_list();			// �����: �������� ������� � ������ ������
	static void print_list();	// �����: ����� ����������� ������

protected:
	string full_name;	// ���� ������: ���
	int age;			// ���� ������: �������
};