#include"sucursala.h"


class firma{
	protected:
		string nume;
		map<string, sucursala> scs;
	
	public:
		firma(string, map<string, sucursala>);
		~firma(){};
		void afisare();
		void adaugare(sucursala&);
		void stergere(sucursala&);
		void edit(sucursala&, sucursala&);
		friend ostream&operator<<(ostream&, firma&);
		
	
	
};



