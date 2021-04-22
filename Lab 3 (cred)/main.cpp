
#include"matrice.h"


int main(){
	
	int n=2;
	
	fractie **a=new fractie*[n];
	for(int i=0;i<n;i++){
		a[i]=new fractie[n];
		for(int j=0;j<n;j++)
			a[i][j]=fractie(i+1,j+1);
	}

	matrice x(2,a);
	cout<<x;
	
	
}


