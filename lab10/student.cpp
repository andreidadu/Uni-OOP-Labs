#include"student.h"


student&::student oeprator=(cosnt student& stud){
	cod=stud.cod;
	vn=stud.vn;
	
}

void student::afis(){
	cout<<"Studentul: "<<cod<<endl;
	int k=vn.begin();
	while(k!=vn.end()){
		cout<<*vn.string<<" "<<*vn.val<<endl;
	}
	cout<<endl;
	
	
}
int student::getv(){
	
	int k=vn.begin();
	flaot media=0;
	int aux=0;
	while(k!=vn.end()){
		media=media+*vn.nota;
		if(*vn.nota<4)
			aux++;
	}
	
	media = media / vn.size();
	if(aux!=0 && media>8)
		return 800;
	else
		return 0;
	
}









