#include<string>
#include<iostream>
using namespace std;

class persoana{
	int id;
	string nume;
	
	
	public:
		persoana(){}
		persoana(int i, string c):id(i),nume(c){}
		friend ostream& operator<<(ostream &dev, persoana &ceva){
			dev<<ceva.id<<" "<<ceva.nume;
			return dev;
		}
		void afis(){
			cout<<id<<" "<<nume;
		}
		int getid(){return id;}
		string getnume(){return nume;}
		
		friend bool operator<(const persoana &p1, persoana const &p2){
			return p1.id < p2.id;
		}
		friend bool operator==(const persoana &p1,const persoana &p2){
			return (p1.id == p2.id);
		}	 
		
	
};
