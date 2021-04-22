#include<string>
using namespace std;
class nota{
	
	protected:
		string materia;
		int val;
	public:
		nota(){};
		nota(string mat, int v){
			materia=mat;
			val=v;
		}
		nota& operator=(const nota& n){
			materia=n.materia;
			val=n.val;
		}
		~nota(){};
		bool operator<(const nota& b)const{
			return (val < b.val);
			
		}

		
};




