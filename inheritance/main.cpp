#include"Human.h"
#include"student.h"
#include"Teacher.h"
#include"Graduate.h"
#define delimiter  "\n-------------------------------------------------------\n"
void main()
{
	setlocale(LC_ALL, "");
	Human h("��������", 20);
	//h.info();
	cout << h << endl;

	cout << delimiter << endl;

	student durko("����� ��������", 20, "���");
	//durko.info();
	cout << durko << endl;

	cout << delimiter << endl;

	Teacher pablo("Pablo Escobar", 40, "\"�������� ������������ ����������\"", 25, 50);
	//pablo.info();
	cout << pablo << endl;
	cout << delimiter << endl;

	Graduate tony("Antonio Montana", 22, "\"��������������� ����������\"", 5, 90, "\"������ � ���������� ��������������\"");
	//tony.info();
	cout << tony << endl;
}