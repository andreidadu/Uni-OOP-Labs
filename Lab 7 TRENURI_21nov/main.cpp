#include"tren.h"


int main(int argc, char** argv) {
	vagon a(50,"223","Detalii",0);
	a.afisare();
	
	locomotiva k(500,"224",50);
	k.afisare();
	
	cout<<"=================="<<endl<<endl;
	
/*	vagon **v=new vagon*[3];
	v[0]=new vagon(100,"10","Detalii 0",0);
	v[1]=new vagon(200,"11","Detalii 1",0);
	v[2]=new vagon(300,"12","Detalii 2",1);
	v[3]=new vagon(50,"13","Detalii 3",1);
	*/
	vagon **v=new vagon*[3];
	v[0]=new vagon(100,"10","Detalii 0",0);
	v[1]=new vagon(200,"11","Detalii 1",0);
	v[2]=new vagon(300,"12","Detalii 2",1);
	v[3]=new vagon(50,"13","Detalii 3",1);
	
	for(int i=0;i<4;i++){
		v[i]->afisare();
	}	

	
	return 0;
}
