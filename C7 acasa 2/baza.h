#pragma once
#include<iostream>
using namespace std;

class baza{
	protected:
		int atr1;
	public:
		baza();
		baza(int);
		void set_atr1(int);
		virtual void afisare();
		virtual ~baza(){};
	
	
};
