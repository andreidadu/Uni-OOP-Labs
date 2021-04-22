#include"vagon.h"
#include"locomotiva.h"

class tren{
	protected:
		locomotiva l;
		vagon *vv;
	public:
		tren(){}
		tren(locomotiva , vagon*);
		tren(const tren&);
		tren& operator=(const tren&);
		~tren();
		void afisare();
		double getm();

		
};
