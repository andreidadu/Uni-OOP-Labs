#include"albume.h"

albume::albume(int an, string nm, vector<track>t ):anap(an),nume(nm),trk(t){};

void albume::afisare(){
	cout<<"An aparitie: "<<anap<<"  ";
	cout<<"Nume: "<<nume<<" ";
	cout<<"Track-uri: "<<endl;
	for( int i=0 ;i< trk.size();i++){
		cout<<"\t";
		trk[i].afisare();
		
	}
}

ostream& operator<<(ostream & dev, const albume &a){
	dev<<"An aparitie: "<<a.anap<<"  ";
	dev<<"Nume: "<<a.nume<<" ";
	dev<<"Track-uri: "<<endl;	
	for( int i=0 ;i< a.trk.size();i++){
		dev<<"\t";
		dev<<a.trk[i];
	}
	
	return dev;
	
}

int albume::getanap(){
	return anap;
}

string albume::getnume(){
	return nume;
}
bool operator<(const albume& a, const albume&b){
	
	return a.anap<b.anap;
}

int albume::getduratatotala(){
	int maxim=0;
	for( int i=0 ;i < trk.size();i++){
		
		maxim = maxim+trk[i].getdurata();	
	}
	return maxim;
}




