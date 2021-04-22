#include <iostream>
#include <cstring>
#include "fractie.h"
using namespace std;

int main(int argc, char** argv) 
{
	fractie fr1(2,7), fr2(fr1);
	fr1.afis();
	fr2.afis();
	fractie fr3;
	fr3=fr1+fr2;
	fr3.afis();
	fractie fr4(-fr3);
	fr4.afis();
	fractie fr5;
	fr5=fr3*fr4;
	fr5.afis();
	fractie fr6;
	fr6=fr3/fr2;
	fr6.afis();
	fractie fr7(fr2);
	fr7+=fr1;
	fr7.afis();
	cout<<endl<<(fr2==fr1)<<" "<<(fr2!=fr5);
	fr1++;
	fr1.afis();
	++fr1;
	fr1.afis();
	fr1--;
	fr1.afis();
	--fr1;
	fr1.afis();
	fr1*=fr2;
	fr1.afis();
	cout<<endl<<(fr1>fr2)<<" "<<(fr1<=fr2);
}
