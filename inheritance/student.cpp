
#include"student.h"
const string& student::get_specialty() const
{
	return this->specialty;
}
unsigned int student::get_year() const
{
	return this->year;
}
int student::get_karma() const
{
	return this->karma;
}
const string& student::set_specialty(const string& specialty)
{
	return this->specialty = specialty;
}
unsigned int student::set_year(unsigned int year)
{
	return this->year = year;
}
int student::set_karma(int karma)
{
	return this->karma = karma;
}
//Constructors

student::student(
	const string& name, unsigned int age,
	const string& specialty, unsigned int year, int karma
) :Human(name, age)
{
	this->specialty = specialty;
	this->year = year;
	this->karma = karma;
#ifdef DEBUG
	cout << "SConstructor:\t" << this << endl;
#endif // DEBUG


}
student::~student()
{
#ifdef DEBUG
	cout << "SDestructor:\t" << this << endl;
#endif // DEBUG

}

student::operator Human&()
{
	return *this;
}

student::operator const Human&() const
{
	return *this;
}


//Methods:
void student::info()
{
	Human::info();
	cout << "Специальность: " << specialty << ", " << year << "-й курс, успеваемость " << karma << "!" << endl;
}
ostream& operator<<(ostream& os, const student& obj)
{
	os << (Human&)obj <<"\t";
	return os << "Специальность: " << obj.get_specialty() << ", " << obj.get_year() << "-й курс, успеваемость " << obj.get_karma() << "!";
}