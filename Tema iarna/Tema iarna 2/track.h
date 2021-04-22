#include<iostream>
#include<string>
using namespace std;

class track{
	int poz;
	int durata;
	string nume;
	
	public:
		track(int, int, string);
		~track(){};
		void afisare();
		int getpoz();
		int getdurata();
		friend ostream& operator<<(ostream &, const track&);
		
};





