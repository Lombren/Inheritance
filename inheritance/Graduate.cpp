#include"Graduate.h"


const string& Graduate::get_diploma_theme()const
{
	return this->diploma_theme;
}
const string& Graduate::set_diploma_theme(const string& diploma_theme)
{
	return this->diploma_theme = diploma_theme;
}
//constructors
Graduate::Graduate(
	const string& name, unsigned int age,
	const string& specialty, unsigned int year, int karma,
	const string& diploma_theme
) :student(name, age, specialty, year, karma)
{
	this->diploma_theme = diploma_theme;
	cout << "GConstructor:\t" << this << endl;
}
Graduate::~Graduate()
{
	cout << "GDestructor:\t" << this << endl;
}
void Graduate::info()
{
	student::info();
	cout << "Тема дипломного проекта: " << diploma_theme << endl;
}

ostream & operator<<(ostream & os, const Graduate & obj)
{
	os << (student)obj << "\t";// TODO: insert return statement here
	return os << "\nТема дипломного проекта: " << obj.get_diploma_theme();
}
