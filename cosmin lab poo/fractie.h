#include<iostream>
using namespace std;

class fractie
{
	private:
	
		int a,b;
	
	public:
		
		fractie(int =0, int =1);
		fractie(const fractie&);
		~fractie();
		void afis() const;
		fractie& operator=(const fractie&);
		const fractie operator-()const;
		const fractie operator+(const fractie&) const;
		const fractie operator-(const fractie&) const;
		const fractie operator*(const fractie&) const;
		const fractie operator/(const fractie&) const;
		const fractie& operator+=(const fractie&);
		const fractie& operator-=(const fractie&);
		const fractie& operator*=(const fractie&);
		const fractie& operator/=(const fractie&);
		const fractie& operator++();
		const fractie& operator++(int i);
		const fractie& operator--();
		const fractie& operator--(int i);
		bool operator==(const fractie&) const;
		bool operator!=(const fractie&) const;
		bool operator>(const fractie&) const;
		bool operator<=(const fractie&) const;
		bool operator<(const fractie&) const;
		bool operator>=(const fractie&) const;
};

fractie::fractie(int x, int y)
{
	this->a=x;
	this->b=y;
}

fractie::fractie(const fractie& x)
{
	this->a=x.a;
	this->b=x.b;
}

fractie::~fractie()
{
	cout<<endl<<"am distrus fractie";
}

void fractie::afis() const
{
	cout<<endl<<a<<"/"<<b;
}

fractie& fractie::operator=(const fractie &x)
{
	this->a=x.a;
	this->b=x.b;
	return *this;
}
const fractie fractie::operator+(const fractie &x) const
{
	cout<<"\n suma: ";
	return fractie((this->a)*(x.b) + (this->b)*(x.a), (this->b)*(x.b));
	
}

const fractie fractie::operator-() const
{
	return fractie((-1)*a, b);
} 

const fractie fractie::operator-(const fractie &x) const
{
	return  (*this)+(-x);
}

const fractie fractie::operator*(const fractie &x) const
{
	return fractie(a*x.a, b*x.b);
}

const fractie fractie::operator/(const fractie &x) const
{
	return fractie(a*x.b, b*x.a);
}

const fractie& fractie::operator+=(const fractie &x)
{
	(*this)=(*this)+x;
	return *this;
}

const fractie& fractie::operator-=(const fractie &x)
{
	(*this)=(*this)-x;
	return *this;
}

const fractie& fractie::operator*=(const fractie &x)
{
	(*this)=(*this)*x;
	return *this;
}

const fractie& fractie::operator/=(const fractie &x)
{
	(*this)=(*this)/x;
	return *this;
}

const fractie& fractie::operator++()
{
	a=a+b;
	return *this;
}

const fractie& fractie::operator++(int i)
{
	fractie aux(*this);
	++(*this);
	return aux;
}

const fractie& fractie::operator--()
{
	a=a-b;
	return *this;
}

const fractie& fractie::operator--(int i)
{
	fractie aux(*this);
	--(*this);
	return aux;
}

bool fractie::operator==(const fractie &x) const
{
	return( ((float)a/b) == ((float)x.a/x.b) );
}

bool fractie::operator!=(const fractie &x) const
{
	return !((*this)==x);
}

bool fractie::operator>(const fractie &x) const
{
	return( ((float)a/b) > ((float)x.a/x.b) );
}

bool fractie::operator<=(const fractie &x) const
{
	return !((*this)>x);
}

bool fractie::operator<(const fractie &x) const
{
	return( ((float)a/b) < ((float)x.a/x.b) );
}

bool fractie::operator>=(const fractie &x) const
{
	return !((*this)<x);
}
