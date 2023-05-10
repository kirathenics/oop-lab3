#pragma once

#include "Persona.h"

class Worker : public Persona	// ����������� ����� ������� �� ������ �������
{
public:
	Worker();					// ����������� ��� ����������
	Worker(string, int, int);	// ����������� � �����������
	Worker(const Worker&);		// ����������� �����������
	~Worker() override;			// ����������� ����������
	//~Worker();

	void set_category(int);		// �����: ���������� ������
	void show() override;		// ����������� �����: ����� ����������� �������
	//void show();

protected:
	int category;	// ���� ������: ������
};