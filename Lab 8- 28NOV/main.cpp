#include"vector.h"

int main(int argc, char** argv) {
	int k=3;
	
	float x[2];
	x[0]=0.33;
	x[1]=3.2;
	x[2]=1;
	
	float y[2];
	y[0]=1;
	y[1]=1;
	y[2]=1;
	
	
	vector<float>a(3,x);
	vector<float>b(3,y);

	a.afis();
	b.afis();
	cout<<"__________"<<endl<<endl;
	
	
	b.append(a);
	
	b.afis();
	
	cout<<"__________"<<endl<<endl;
	
	float cautat=0.33;
	
	cout<<"cautatul este: "<<a.cautaEl(cautat)<<endl;
	
	a.afis();
		
	cout<<endl<<"__________"<<endl<<endl;
	
	a.deleteEL(2);
	a.afis();
	
	cout<<endl<<"$=========FRACTII=========$"<<endl<<endl;
	
	
	
	
	
	return 0;
}
