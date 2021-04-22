#include"persoana.h"
#include"albume.h"
#include<map>

class artist:public persoana{
	multimap<int, albume> alb;
	
	public:
		artist(persoana, multimap<int, albume>);
		~artist(){};
		void afisare();
		void adaugare(albume&);
		void stergere(albume&);
		void modificare(albume&,albume&);
		
		void afisareintreani(const int& ,const int&);
		void gasirealbumlung();
		friend ostream& operator<<(ostream&, artist &);
};



