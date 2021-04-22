#include "persoana.h"
#include<unordered_set>


int main(int argc, char** argv) {
	
	unordered_set<persoana> P;

	
	persoana P1(1,"Andrei");
	
	
	P1.afis();
		
	
	cout<<"People: \n";
	unordored_set<persoana> ::iterator i;
	for(i=P.begin() ; i != P.end() ; i++ ){
		cout<< i->second <<"  "<<endl;
		
	}



	return 0;
}











