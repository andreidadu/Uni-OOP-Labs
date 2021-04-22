#pragma once
using namespace std;
#include <string>
class persoana{
	public:
		string nume;
		int varsta;
	
	public:
		persoana(){};
		persoana(string, int);
		~persoana(){};
		virtual void afisare()const;
	
	
};
