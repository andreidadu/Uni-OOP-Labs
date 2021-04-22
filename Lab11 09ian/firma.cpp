#include"firma.h"

firma::firma(string a, map<string, sucursala> b):nume(a), scs(b){};

void firma::afisare(){
	cout<<"\n\n"<<"NUME FIRMA: "<<nume<<endl;
	for( map<string, sucursala>::iterator it=scs.begin(); it!=scs.end() ; it++)
		cout<<it->second<<endl;
}

void firma::adaugare(sucursala&a){
	scs.insert(pair<string, sucursala>(a.getadresa(), a));
}

void firma::stergere(sucursala&a){
	scs.erase(a.getadresa());
}

void firma::edit(sucursala&a, sucursala &b){
	scs.erase(a.getadresa());
	scs.insert(pair<string, sucursala>(b.getadresa(), b));

}

ostream& operator<<(ostream& dev, firma& fir){
	map<string, sucursala>::iterator it;
	
	for( it=fir.scs.begin(); it!=fir.scs.end() ; ++it)
		dev<<it->second;
	
	return dev;
	
}







