#include"fractie.h"
#include<ostream>
using namespace std;

class matrice{
	int n;
	fractie **m;

	public:
		matrice();
		matrice(int,fractie **);
		~matrice();
		friend ostream &operator<<(ostream&, const matrice&);
		matrice& operator=(const matrice&);	
		matrice(const matrice&);
		
		void aloc();
		void elib();
		friend ostream &operator<<(ostream&, const matrice&);
		
		friend matrice operator+(const matrice&, const matrice&);

};

