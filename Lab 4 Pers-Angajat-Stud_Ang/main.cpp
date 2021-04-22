#include <iostream>
#include"Stud_Ang.h"
using namespace std;

int main(int argc, char** argv) {
	
	Pers a;
	a=Pers("ANA",20);
	a.afis();
	
	Pers b;
	b=a;
	b.afis();
	
	cout<<"\n\n";
	
	Angajat c;
	c=Angajat("AAAA",30,5000);
	c.afis();
	cout<<c.get_sal();
	
	cout<<"\n\n";
	
	Stud_Ang d;
	d=Stud_Ang("BBBB",30)
	
	
	return 0;
}
