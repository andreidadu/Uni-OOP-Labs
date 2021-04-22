#include "persoana.h"
#include<map>


int main(int argc, char** argv) {
	map<int,persoana> mp;
	persoana p1(1,"Ana");
	persoana p2(2,"Maria");
	persoana p3(3,"AnaMaria");
	mp[p1.getid()]=p1;
	mp[p3.getid()]=p3;
	mp[2]=p2; 
	
	map<int,persoana>::iterator ip= mp.find(4);
	cout<<ip->second.getnume()<<endl;
	
	int i=1;
	cout<<i;
	
	return 0;
}
