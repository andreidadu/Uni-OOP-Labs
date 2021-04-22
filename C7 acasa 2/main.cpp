#include"derivata.h"

int main(int argc, char** argv) {
	
	int n;
	cout<<"Dati dimensiunea:";
	cin>>n;
	
	baza**vec=new baza*[n];
	
	for(int i=0;i<n;i++){
		cout<<"Introduceti obiect de tip baza(0) sau de tip derivata(1)??";
		int tip;
		cin>>tip;
		if(tip==0){
			cout<<"dati atr1: ";
			int a1;
			cin>>a1;
			vec[i]=new baza(a1);
		}
		else if(tip==1){
		
			cout<<"Dati atr1 si atr2:";
			int a1,a2;
			cin>>a1; cin>>a2;
			vec[i]=new derivata(a1,a2);
		}
		else
			i--;
	}
	for (int i=0;i<n;i++)
		vec[i]->afisare();
	
	return 0;
}
