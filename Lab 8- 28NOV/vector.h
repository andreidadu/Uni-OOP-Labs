#include<iostream>
using namespace std;

 

template<typename T>
class vector 
{ 
	int dim; 
	T* buf; 
	public:
		vector(int=0){};
		
		vector(int , T*); 
		vector(const vector&);
  		~vector();
  		vector & operator=(const vector &); 
  		int getDim();
  		
  		void afis();
  		void append(const vector&);
  		void deleteEL(int );
  		int cautaEl(T &el);
  		
};

template<typename T>
vector<T>::vector(int d, T*b){
	dim=d;
	buf=new T[dim];
	for( int i=0; i<dim;i++)
		buf[i]=b[i];
}

template<typename T>
vector<T>::vector(const vector<T>& v) { 
	dim=v.dim;
	buf=new T[dim];
	for(int i=0;i<dim;i++)
		buf[i]=v.buf[i];

}

template<typename T>
vector<T>::~vector() {
	if(buf!=NULL)
		delete [] buf;

}

template<typename T>

vector<T>& vector<T>::operator=(const vector<T> &v) { 

	dim=v.dim;
	if(buf!=NULL) delete[] buf;
	buf=new T[dim];
	for(int i=0;i<dim;i++)
		buf[i]=v.buf[i];
	return *this;
	
}

template<typename T>
int vector<T>::getDim(){ 

	return dim;

}

template<typename T>
void vector<T>::afis(){
	
	cout<<"Dim:"<<dim<<endl;
	for(int i=0;i<dim;i++)
		cout<<"buf["<<i<<"]="<<buf[i]<<endl;
	
}

template<typename T>
void vector<T>::append(const vector& b){
	
	T* buf1=new T[dim+b.dim];
	
	for(int i=0;i<dim;i++)
		buf1[i]=buf[i];
		
	for(int i=dim;i<dim+b.dim;i++)
		buf1[i]=b.buf[i-dim];	
		
	delete[] buf;
	
	dim=dim+b.dim;
	buf=buf1;
}

template<typename T>
int vector<T>::cautaEl(T &el){
	
	for(int i=0;i<dim;i++)
		if(el==buf[i])
			return i;
	return -1;

}

template <typename T>
void vector<T>::deleteEL(int pos){
	T* buf1=new T[dim-1];
	
	for(int i=0;i<pos;i++){
		buf1[i]=buf[i];
	}
	
	for(int i=pos+1;i<dim;i++)
		buf1[i]=buf[i];
		
	delete[] buf;
	dim--;
	buf=buf1;
}



















//=====================================
//=====================================

class fractie{
		int a,b;
	public:
		
		fractie(int n1, int n2){
			a=n1;
			b=n2;
		}
	
		void afis(){
			cout<<"  "<<a<<"/"<<b<<"  ";
		}
		
		friend bool operator==(const fractie &x, const fractie &y){
		
			return (float)x.a/x.b==(float)y.a/y.b;
		
		}

};








