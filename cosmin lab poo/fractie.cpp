#include "fractie.h"

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
	cout<<"\nam distrus fractie";
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
