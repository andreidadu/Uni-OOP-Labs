#include<iostream>
using namespace std;

class Pers{
	protected:
		char* nume;
		int varsta;

	public:
		Pers();
		Pers(char*, int);
		~Pers();
		void afis()const;
		Pers(const Pers&);
		Pers& operator=(const Pers&);
		
		
		char* get_nume(){ return nume; };
		int get_varsta(){ return varsta; };
		
	

};

	
