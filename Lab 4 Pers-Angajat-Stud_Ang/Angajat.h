#include"Pers.h"

class Angajat:public Pers{
	protected:
		float sal;
	
	public:
		Angajat();
		Angajat(char*, int , float );
		Angajat(const Angajat& );
		~Angajat();
		float get_sal()const;
	
};
