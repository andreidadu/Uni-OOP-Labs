#include"angajat_PFA.h"


int main(int argc, char** argv) {
	
	persoana **v=new persoana*[3];
	
	v[1]=new angajat("Andrei_Dadu_SRL", 1111,1);
	v[2]=new PFA(2222,2);
	v[3]=new angajat_PFA("Firma2",3333,4444,"info suplimentare despre mine",3);
	
	persoana* aux;
	
	for(int i=1;i<3;i++)
		for(int j=i+1;j<4;j++)
			if(v[i]->getVenit()>v[j]->getVenit()){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}	
			
	for(int i=0;i<3;i++)
		v[i+1]->afis();
				
	
	
	return 0;
}
