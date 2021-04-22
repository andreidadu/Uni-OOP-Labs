#include"baza.h"

class derivata:public baza{
	protected:
		int atr2;
	public:
		derivata();
		derivata(int, int);
		void set_atr2(int);
		void afisare();

};
