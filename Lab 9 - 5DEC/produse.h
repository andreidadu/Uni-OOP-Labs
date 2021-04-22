#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;


class produs{
	public:
		string cod, marca;
		int pret, nr;
		string *car; //are dimensisune nr
	public:
		produs(){};
		int getCar();
		int getPret();
		string getCod();
			
		friend istream& operator>>(istream& ,produs&);
		friend ostream& operator<<(ostream &d, const produs&);
/*		void afisare(ostream&);
*/		
		int getGarantie();
		int find4b();
		produs& operator=(const produs&);
		
	
	
	
};
