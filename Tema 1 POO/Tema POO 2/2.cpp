#include<iostream>
#include<cstdlib>
using namespace std;
void alocare(int ***v,int n,int m){
    (*v)=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
        (*v)[i]=(int*)malloc(m*sizeof(int));
}

void citire(int **v,int n,int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(i<=j)
                cin>>v[i][j];
            else
                v[i][j]=0;

}

int **patrat(int **v,int n,int m){
    int **p;
    alocare(&p,n,m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) {
            p[i][j]=0;
            for(int k=0;k<n;k++)
                p[i][j] = p[i][j]+p[i][k]*p[k][j];
        }
    return p;
}

int suma(int **v,int n,int m){
    int s=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(i==j)
                s=s+v[i][j];
    return s;
}

void afisare(int **v,int n,int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cout<<v[i][j];
}

int main(){

    int n,m,**v,s;
    cin>>n>>m;
    int **p;
    alocare(&v,n,m);
    citire(v,n,m);
    p=patrat(v,n,m);
    s=suma(v,n,m);
    afisare(v,n,m);

}


