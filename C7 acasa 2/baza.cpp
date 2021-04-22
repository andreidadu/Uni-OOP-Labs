#include"baza.h"

baza::baza(){
}

baza::baza(int i):atr1(i){}

void baza::set_atr1(int i){
	atr1=i;
}

void baza::afisare(){
	cout<<"atr1="<<atr1<<endl;
}



