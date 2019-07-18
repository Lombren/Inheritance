#include"Human.h"

const string& Human::get_name()const
{
	return this->name;
}
unsigned int Human::get_age()const
{
	return this->age;
}
void Human::set_name(string& name)
{
	this->name = name;
}
void Human::set_age(unsigned int age)
{
	this->age = age;
}
Human::Human(string name, unsigned int age) :name(name), age(age)
{
	cout << "HConstructor:\t" << this << endl;
}
Human::Human(const Human & other)
{
	this->age = other.age;
	this->name = other.name;
#ifdef DEBUG
	cout << "HCopyConstrutor:" << this << endl;
#endif // DEBUG

}

Human::~Human()
{
#ifdef DEBUG
	cout << "HDestructor:\t" << this << endl;
#endif // DEBUG

}
//Methods:
void Human::info()
{
	cout << name << " " << age << " " << " лет\n";
}
ostream& operator<<(ostream& os, const Human& obj)
{
	return os << obj.get_name() << " " << obj.get_age() <<" лет.";
}