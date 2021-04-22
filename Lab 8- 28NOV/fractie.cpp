#include"fractie.h"

fractie::fractie(int n1, int n2){
	a=n1;
	b=n2;
}

void fractie::afis(){
	cout<<"  "<<a<<"/"<<b<<"  ";
}

bool operator==(const fractie &x, const fractie &y){
	
	return (float)x.a/x.b==(float)y.a/y.b;
	
}
