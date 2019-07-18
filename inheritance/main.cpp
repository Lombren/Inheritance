#include"Human.h"
#include"student.h"
#include"Teacher.h"
#include"Graduate.h"
#define delimiter  "\n-------------------------------------------------------\n"
//#define INHERITANCE
//#define POINTER_TO_BASE_CLASS
void main()
{
	setlocale(LC_ALL, "");
#ifdef INHERITANCE
	Human h("Вассилий", 20);
	//h.info();
	//cout << h << endl;

	//cout << delimiter << endl;

	student durko("Дурко Вассилий", 20, "РПО");
	//durko.info();
	//cout << durko << endl;

	//cout << delimiter << endl;

	Teacher pablo("Pablo Escobar", 40, "\"Массовое производство наркотиков\"", 25, 50);
	//pablo.info();
	//cout << pablo << endl;
	//cout << delimiter << endl;

	Graduate tony("Antonio Montana", 22, "\"Распространение наркотиков\"", 5, 90, "\"Работа с проблемной задолженностью\"");
	//tony.info();
	//cout << tony << endl;




#endif // INHERITANCE

#ifdef POINTER_TO_BASE_CLASS
	Human* p_h = &h;
	p_h->info();
	Human* p_teacher = &pablo;
	p_teacher->info();
	Human* p_student = &durko;
	p_student->info();
	Human* p_graduate = &tony;
	p_graduate->info();
#endif // POINTER_TO_BASE_CLASS



	Human* group[] =
	{
		new student("Дурко Вассилий", 20, "РПО"),
		new Teacher("Pablo Escobar", 40, "\"Массовое производство наркотиков\"", 25, 50),
		new Graduate("Antonio Montana", 22, "\"Распространение наркотиков\"", 5, 90, "\"Работа с проблемной задолженностью\""),
		new Teacher("Albert Einstein",150,"Phizics",120,8)
	};
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		//group[i]->info();
		/*if(typeid(*group[i])==typeid(student))cout << *(student*)group[i] << endl;
		if(typeid(*group[i])==typeid(Teacher))cout << *(Teacher*)group[i] << endl;
		if(typeid(*group[i])==typeid(Graduate))cout << *(Graduate*)group[i] << endl;*/
		if (typeid(*group[i]) == typeid(student))
			cout << *dynamic_cast<student*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Teacher))
			cout << *dynamic_cast<Teacher*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Graduate))
			cout << *dynamic_cast<Graduate*>(group[i]) << endl;
		
	}

}