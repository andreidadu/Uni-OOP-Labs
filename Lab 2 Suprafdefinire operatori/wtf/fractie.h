#include<iostream>
using namespace std;

class fractie{
	int a,b;
	
	public:
		fractie(int=0,int=1);
		void afis()const;
		~fractie(){cout<<"\ndestr\n";}
		fractie(const fractie&);
		fractie& operator=(const fractie&);
		
		
		
		
		friend fractie operator+(const fractie&,const fractie&);
		friend fractie operator-(const fractie&,const fractie&);
		friend fractie operator*(const fractie&,const fractie&);
		friend fractie operator/(const fractie&,const fractie&);

		fractie& operator+=(const fractie&);
		fractie& operator-=(const fractie&);
		fractie& operator*=(const fractie&);
		fractie& operator/=(const fractie&);
		
		
		
		friend bool operator==(const fractie&,const fractie&);
		friend bool operator!=(const fractie&,const fractie&);
		friend bool operator<(const fractie&,const fractie&);
		friend bool operator>(const fractie&,const fractie&);
		friend bool operator<=(const fractie&,const fractie&);
		friend bool operator>=(const fractie&,const fractie&);

		
		fractie& operator++();
		fractie& operator++(int);
		fractie& operator--();
		fractie& operator--(int);
		
		fractie& operator-();
		

};



