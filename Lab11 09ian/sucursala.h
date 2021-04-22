#include"angajat.h"
#include<map>


class sucursala{
	protected:
		string adresa;
		multimap<int,angajat> ang;
	
	public:
		sucursala(string, multimap<int, angajat> );
		~sucursala(){};
		void afisare();
		string getadresa();
		friend ostream & operator<<(ostream&,  sucursala&);
		
		void adaugare(angajat&);
		void stergere(angajat&);
		void edit(angajat&, angajat&);
		void verificarecnp(string&);	
	
	
};







