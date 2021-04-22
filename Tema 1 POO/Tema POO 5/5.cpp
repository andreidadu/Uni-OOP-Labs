#include <cstdlib>
#include <iostream>
using namespace std;

typedef struct{
    double r;
    double i;
}complexe;

int main(){

    int n;
    complexe suma,*v;
    cin>>n;
    v=(complexe*)malloc(n*sizeof(complexe));

    for(int i=0;i<n;i++){
        cin>>v[i].r;
        cin>>v[i].i;
    }
    suma.r=0;
    suma.i=0;
    for(int i=0;i<n;i++){
        suma.r=suma.r+v[i].r;
        suma.i=suma.i+v[i].i;
    }

    cout<<suma.r<<"+"<<suma.i;

    return 0;
}
