#include<iostream>
#include <cstdlib>
using namespace std;

void alocare(int *&v,int n){
    v=(int*)malloc(n*sizeof(int));
}
void citire(int *v,int n){
    for(int i=0;i<n;i++)
        cin>>v[i];
}
void ordonare(int *v,int n){
    int aux;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
        }
}
void afisare(int *v,int n){
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
int main(){
    int n,*v;
    cin>>n;
    alocare(v,n);
    citire(v,n);
    ordonare(v,n);
    afisare(v,n);

    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
