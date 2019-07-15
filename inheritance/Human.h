#pragma once
#include<iostream>
#include<string>

using namespace std;




class Human
{
protected:
	string name;
	unsigned int age;
public:
	const string& get_name()const;
	unsigned int get_age()const;
	void set_name(string& name);
	void set_age(unsigned int age);
	Human(string name, unsigned int age);
	Human(const Human& other);
	
	~Human();
	//Methods:
	void info();
};

ostream& operator<<(ostream& os, const Human& obj);
