#include"vagon.h"

vagon::vagon(double m, char i[4], char*det, bool transp):componenta(m,i){
	detalii=new char[40];
	strcpy(detalii,det);
	tp=transp;
}

vagon::vagon( const vagon& vag):componenta(vag){
	detalii=new char[40];
	strcpy(detalii,vag.detalii);
	tp=vag.tp;
}
vagon& vagon::operator=(const vagon& vag){
	componenta::operator=(vag);
	if(detalii!=NULL)
		delete [] detalii;
	detalii=new char[40];
	strcpy(detalii,vag.detalii);
	tp=vag.tp;
	
}

vagon::~vagon(){
	if(detalii!=NULL)
		delete[] detalii;
	tp=0;
}

void vagon::afisare(){
	componenta::afisare();
	cout<<"Detalii: "<<detalii<<endl;
	cout<<"Transporta persoane:"<<tp<<endl;
	cout<<"_______"<<endl;
}

