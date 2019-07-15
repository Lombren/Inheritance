#pragma once
#include"Human.h"
#include"student.h"

class Graduate :public student
{
	string diploma_theme;
public:
	const string& get_diploma_theme()const;
	const string& set_diploma_theme(const string& diploma_theme);
	//constructors
	Graduate(
		const string& name, unsigned int age,
		const string& specialty, unsigned int year, int karma,
		const string& diploma_theme
	);
	~Graduate();
	void info();
};
ostream& operator<<(ostream& os, const Graduate& obj);
