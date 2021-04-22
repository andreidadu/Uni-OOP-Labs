
#include"matrice.h"




void matrice::aloc(){
	m=new fractie*[n];
	for(int i=0;i<n;i++)
		m[i]=new fractie[n];
	
}

void matrice::elib(){
	for(int i=0;i<n;i++)
		delete[] m[i];
	delete [] m;
}

matrice::matrice(){
	n=0;
	m=NULL;
}

matrice::~matrice(){
	
	elib();
	
}


matrice::matrice(int k, fractie** x ){
	
	if(k==0){
		elib();
	}
	else{
		aloc();
    	for(int i=0;i<k;i++){
			for(int j=0;j<k;j++)
				m[i][j]=x[i][j];
		}
	}
	
}


ostream& operator<<(ostream& dev, const matrice& x){

	dev<<"Matrice:";
	dev<<"n="<<x.n;
	for(int i=0;i<x.n;i++){
		for(int j=0;j<x.n;j++)
				dev<<x.m[i][j]<<" ";
		dev<<"\n";
	}
	return dev;
	
}

matrice&matrice::operator=(const matrice& x){
	
	n=x.n;
	
	aloc(n);
	for(int i=0;i<x.n;i++){
		for(int j=0;j<x.n;j++)
			m[i][j]=x.m[i][j];
	}
	
}

/*
matrice operator+(const matrice& x, const matrice& y){
	
	
	
	if(x.n<=y.n){
		matrice(x.n,x);
		rez.n=x.n;
		for(int i=0;i<x.n;i++){
			for(int j=0;j<x.n;j++)
				rez.m[i][j]=x.m[i][j]+y.m[i][j];
		
		return rez;
	}
	else{
		matrice(y.n,y);
		rez.n=y.n;
			for(int i=0;i<y.n;i++){
				for(int j=0;j<y.n;j++)
					rez.m[i][j]=x.m[i][j]+y.m[i][j];
			
			return rez;	
	}
		
	
	
}



*/



