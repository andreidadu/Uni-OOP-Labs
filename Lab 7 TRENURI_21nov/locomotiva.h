#include"componenta.h"

class locomotiva:public componenta{
	protected:
		int nr; //nr max vag
	public:
		locomotiva(){}
		locomotiva(double, char*, int);
		locomotiva(const locomotiva&);
		locomotiva& operator=(const locomotiva&);
		~locomotiva(){}
		void afisare();
		int getNrVag();
		
};


