#include<iostream>
#include<cstdlib>
using namespace std;

int functie(){
    int n;
    cin>>n;
    if(n==-1)
        return 0;

    functie();

}

int main()
{
    int n;
    functie();


    return 0;
}
