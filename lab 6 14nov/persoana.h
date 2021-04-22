#include<iostream>
#include<string.h>
#pragma once
using namespace std;

class persoana{
	protected:
		int id;
	public:
		persoana(){};
		persoana(int k){id=k;};
		virtual void afis()=0;
		virtual int getVenit()=0;
		virtual ~persoana(){};
	
};

