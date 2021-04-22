#include "persoana.h"
#include<unordered_multiset>


int main(int argc, char** argv) {
	
	unordered_multiset<persoana> P;
	
	P.insert(persoana(2,"Dan"));
	P.insert(persoana(2,"Dan"));
	P.insert(persoana(3,"Dragos"));
	P.insert(persoana(4,"Doru"));
	P.insert(persoana(5,"Bia"));
	P.insert(persoana(6,"Ana"));
	
	
	cout<<"People: \n";
	unordored_multimap<persoana> ::iterator i;
	for(i=P.begin() ; i != P.end() ; i++ ){
		cout<< *i <<"  "<<endl;
		
	}

	int i=1;
	cout <<i;

	return 0;
}
