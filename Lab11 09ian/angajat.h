#include<iostream>
#include<string>
using namespace std;

class angajat{
	string cnp;
	string nume;
	int salariu;
	
	public:
		angajat(string, string, int);
		~angajat(){};
		void afisare();
		string getcnp();
		string getnume();
		int getsalariu();
		friend ostream& operator<<(ostream&, const angajat&);

};



