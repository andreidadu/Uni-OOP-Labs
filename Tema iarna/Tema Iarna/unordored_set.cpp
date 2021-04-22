#include "persoana.h"
#include<unordered_set>
#include<utility>

int main(int argc, char** argv) {
	
	unordered_set<persoana> P;
	Persoana P1;
	
	P1=persoana(1,"Andrei");
	
	
	P1.afisare();
	
	P.insert(P1);
	P.insert(persoana(2,"Dan"));
	P.insert(persoana(3,"Dragos"));
	P.insert(persoana(4,"Doru"));
	P.insert(persoana(5,"Bia"));
	P.insert(persoana(6,"Ana"));
	
	
	cout<<"People: \n";
	unordored_set<persoana> ::iterator i;
	for(i=P.begin() ; i != P.end() ; i++ ){
		cout<< i->second <<"  "<<endl;
		
	}

	return 0;
}
