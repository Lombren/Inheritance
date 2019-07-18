#include"Teacher.h"


const string& Teacher::get_specialty() const
{
	return this->specialty;
}
unsigned int Teacher::get_xp() const
{
	return this->xp;
}
int Teacher::get_evil() const
{
	return this->evil;
}
const string& Teacher::set_specialty(const string& specialty)
{
	return this->specialty = specialty;
}
unsigned int Teacher::set_xp(unsigned int xp)
{
	return this->xp = xp;
}
int Teacher::set_evil(int evil)
{
	return this->evil = evil;
}
//Constructors:
Teacher::Teacher(
	const string& name, unsigned int age,
	const string& specialty, unsigned int xp, int evil
) :Human(name, age)
{
	this->specialty = specialty;
	this->xp = xp;
	this->evil = evil;
	cout << "TConstructor:\t" << this << endl;
}
Teacher::~Teacher()
{
	cout << "TDestructor:\t" << this << endl;
}
//Methods
void Teacher::info()
{
	Human::info();
	cout << "Специальность: " << specialty << ", "
		<< "опыт преподавания: " << xp << " лет, "
		<< "уровень злости: " << evil << "%" << endl;
}

ostream & operator<<(ostream & os, const Teacher & obj)
{
	os << (Human)obj << " ";
	return os<< "Специальность: " << obj.get_specialty() << ", "<< "опыт преподавания: " << obj.get_xp() << " лет, "<< "уровень злости: " << obj.get_evil() << "%";// TODO: insert return statement here
}
