#pragma once

#include "Worker.h"

class Engineer : public Worker	// ����������� ����� ������� �� ������ �������
{
public:
	Engineer();							// ����������� ��� ����������
	Engineer(string, int, int, string);	// ����������� � �����������
	Engineer(const Engineer&);			// ����������� �����������
	~Engineer() override;				// ����������� ����������
	//~Engineer();

	void set_specialization(string);	// �����: ���������� �������������
	void show() override;				// ����������� �����: ����� ����������� �������
	//void show();

protected:
	string specialization;	// ���� ������: �������������
};
