#include"tren.h"

tren::tren(locomotiva loco, vagon *vag):l(loco){
	vv=new vagon[loco.getNrVag()];
	for(int i=0;i<loco.getNrVag();i++)
		vv[i]=vag[i];	
}

tren::tren(const tren& tomas):l(tomas.l){
		vv=NULL;
		*this=tomas;
}
tren& tren::operator=(const tren& tomas){
	l=tomas.l;
	if(vv!=NULL){
		delete [] vv;
	}
	vv=new vagon[l.getNrVag()];
	for(int i=0;i<l.getNrVag();i++)
		vv[i]=tomas.vv[i];
}

tren::~tren(){
	if(vv!=NULL)
		delete[] vv;
}
void tren::afisare(){
	l.afisare();
	for(int i=0;i<l.getNrVag();i++)
		vv[i].afisare();
}

double tren::getm(){
	
	for(int i=0;i<l.getNrVag();i++)
}
