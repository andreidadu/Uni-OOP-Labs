#include<iostream>
#include<string.h>
#include <cstdlib>
#pragma once
using namespace std;

class Object{
	
	public:
		virtual void afisare()=0;
		virtual int getPret()=0;
		virtual ~Object()=0;
};

