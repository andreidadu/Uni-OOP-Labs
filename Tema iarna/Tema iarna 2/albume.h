#include"track.h"
#include<vector>


class albume{
	int anap;
	string nume;
	vector<track> trk;
	
	public:
		albume(int, string, vector<track> );
		~albume(){};
		void afisare();
		int getanap();
		string getnume();
		friend ostream & operator<<(ostream&, const albume&);
		friend bool operator<(const albume&, const albume&);
		int getduratatotala();
		
		
		
};





