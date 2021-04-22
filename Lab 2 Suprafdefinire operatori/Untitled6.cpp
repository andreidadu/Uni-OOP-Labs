#include<iostream>
#include"fractie.h"
using namespace std;

fractie::fractie(int n1, int n2){
	a=n1;
	b=n2;
}

fractie::fractie(const fractie& f){
	a=f.a;
	b=f.b;
}

void fractie::afis()const{
	cout<<" "<<a<<" "<<b;
}

fractie operator+(const fractie& x,const fractie& y){
	
	return fractie( x.a * y.b + x.b * y.a , x.b * y.b );
		
}

fractie& fractie::operator+=(const fractie& x){
	
	a=a*x.b+b*x.a;
	b=b*x.b;
}

bool operator==(const fractie &x, const fractie &y){
	
	return (float)x.a/x.b==(float)y.a/y.b;
	
}

bool operator!=(const fractie &x, const fractie &y){
	
	return !((float)x.a/x.b==(float)y.a/y.b);
	
}


fractie& fractie::operator++(){
	a=a+b;
}
fractie& fractie::operator++(int k){
	a=a+b;
}

fractie& fractie::operator-(){
	return ;
}

































