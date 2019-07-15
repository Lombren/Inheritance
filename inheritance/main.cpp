#include"Human.h"
#include"student.h"
#include"Teacher.h"
#include"Graduate.h"

void main()
{
	setlocale(LC_ALL, "");
	Human h("Вассилий", 20);
	//h.info();
	cout << h << endl;

	cout << "\n-------------------------------------------------------\n" << endl;

	student durko("Дурко Вассилий", 20, "РПО");
	//durko.info();
	cout << durko << endl;

	cout << "\n-------------------------------------------------------\n" << endl;

	Teacher pablo("Pablo Escobar", 40, "\"Распространение наркотиков\"", 25, 50);
	//pablo.info();
	cout << pablo << endl;
	cout << "\n-------------------------------------------------------\n" << endl;

	Graduate tony("Antonio Montana", 22, "\"Распространение наркотиков\"", 5, 90, "\"Работа с проблемной задолженностью\"");
	//tony.info();
	cout << tony << endl;
}