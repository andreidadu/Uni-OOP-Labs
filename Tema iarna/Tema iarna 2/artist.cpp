#include"artist.h"
#include<utility>
artist::artist(persoana p, multimap<int, albume> M):alb(M),persoana(p){};

void artist::afisare(){
	persoana::afisare();
	
	for( multimap<int, albume>::iterator it=alb.begin(); it!=alb.end() ; it++)
		cout<<it->second;

}

void artist::adaugare(albume& a){
	
	alb.insert(pair<int,albume>(a.getanap(),a));
	
}

void artist::stergere(albume& a){
	
	alb.erase(a.getanap());
	
}

void artist::modificare(albume&a, albume &b){
	alb.erase(a.getanap());
	alb.insert(pair<int,albume>(b.getanap(),b));
	
}

void artist::afisareintreani(const int &a,const int &b){
	for( multimap<int, albume>::iterator it=alb.begin(); it!=alb.end() ; it++)
		if(it->second.getanap() > a && it->second.getanap()<b)
			cout<<it->second;	
} 

void artist::gasirealbumlung(){
	int max=0;
	for( multimap<int, albume>::iterator it=alb.begin(); it!=alb.end() ; it++)
		if((it->second).getduratatotala() > max)
			max=(it->second).getduratatotala();
	for( multimap<int, albume>::iterator it=alb.begin(); it!=alb.end() ; it++)
		if((it->second).getduratatotala() == max)
			cout<<endl<<"Cel mai durativ album este:"<<(it->second).getnume()<<" cu "<<(it->second).getduratatotala()<<"secunde";
	
}

ostream & operator<<(ostream& dev,  artist &art){
	
	multimap<int, albume>::iterator it;
	for( it=art.alb.begin(); it!=art.alb.end() ; ++it)
		dev<<it->second;
	
	return dev;
}


//ERROR

