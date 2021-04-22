#include<iostream>
using namespace std;

class fractie{
	int a,b;
	public:
		fractie(int=0,int=1);
		void afis();
		friend bool operator==(const fractie&,const fractie&);

};
