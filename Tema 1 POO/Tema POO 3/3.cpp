#include<iostream>
#include<cstdlib>
using namespace std;

int factorial(int n){
    int s=n;
    if(n>1){
        n--;
        s=s*factorial(n);

    }
    return s;
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n);


}
