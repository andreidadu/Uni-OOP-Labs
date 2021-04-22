#include"componenta.h"

class vagon:public componenta{
	protected:
		char* detalii;
		bool tp; //transport_persoane
	public:
		vagon(){}
		vagon(double, char*, char*, bool);
		vagon(const vagon&);
		vagon& operator=(const vagon&);
		~vagon();
		void afisare();
		
};


