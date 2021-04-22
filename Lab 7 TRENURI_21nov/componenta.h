#include<iostream>
#include<string.h>
using namespace std;
#pragma once


class componenta{
	protected:
		double masa;
		char id[4];
	public:
		componenta(){};
		componenta(double, char*);
		virtual void afisare();
		virtual double getm();
};




