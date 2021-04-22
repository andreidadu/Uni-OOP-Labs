#include"piesa.h"

class piesa_B:public piesa{
	protected:
		char* culoare;
	public:
		piesa_B(){}
		piesa_B(char *, int , char *);
		piesa_B(const piesa_B&);
		piesa_B& operator=(const piesa_B&);
		~piesa_B();
		void afisare();
			
	
};


