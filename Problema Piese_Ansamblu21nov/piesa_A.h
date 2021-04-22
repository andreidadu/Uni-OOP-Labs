#include"piesa.h"

class piesa_A:public piesa{
	protected:
		int gauri;
	public:
		piesa_A(char*, int p, int g);
		void afisare();
		int getGauri();	
	
};




