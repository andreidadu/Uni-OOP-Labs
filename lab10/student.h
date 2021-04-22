#include"persoana.h"
#include<set>
using namespace std;

class student:public persoana{
	protected:
		string cod;
		set<nota> vn;
	public:
		student(string c , set<nota> vn):cod(c),vn(vn){}
		virtual void afis();
		virtual int getv()=0;
		
		student& operator=(const student& );
		~student(){};
		
		
	
};
