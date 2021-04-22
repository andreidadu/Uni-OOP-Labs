#include"piesa_A.h"
#include"piesa_B.h"

class ansamblu:public Object{
	protected:
		piesa_A pa;
		piesa_B *vec;
	public:
		ansamblu(piesa_A , piesa_B*);
		ansamblu& operator=(const ansamblu&);
		ansamblu(const ansamblu&);
		~ansamblu();
		void afisare();
		int getPret();
	
};



