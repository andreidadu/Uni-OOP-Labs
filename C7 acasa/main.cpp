#include"derivata.h"


int main(int argc, char** argv) {
	
	baza *bp=new baza(1);
	bp->afisare();
	cout<<endl<<"___________________"<<endl;

	/*
	bp=new derivata(2,2);
	bp->afisare();
	((derivata*)bp)->afisare();

	*/
	derivata *d=new derivata(1,1);
	bp=d;
	bp->afisare();
	
	return 0;
}
