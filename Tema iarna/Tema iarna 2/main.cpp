#include"artist.h"
#include<fstream>

int main(int argc, char** argv) {
	
	persoana a,b;
	
	a=persoana("Maria Capitanescu", 55);
	b=persoana("Tudor Gheorghe", 67);
	
	
	
	vector<track>trk1;
	trk1.push_back(track(1,30,"manele"));
	trk1.push_back(track(2,40,"manele manele"));
	trk1.push_back(track(3,50,"franky the boss"));
	trk1.push_back(track(4,60,"dadau"));
	trk1.push_back(track(5,70,"hahaha"));
	
	albume al1(2019, "ALBUM 1", trk1);
	
	
	vector<track>trk2;
	trk2.push_back(track(1,12,"Ra"));
	trk2.push_back(track(2,22,"TA"));
	trk2.push_back(track(3,32,"ta"));
	trk2.push_back(track(4,42,"Ta"));
	trk2.push_back(track(5,52,"tA"));	
	
	albume al2(2017, "ALBUM2",trk2);
	
	vector<track>trk3;
	trk3.push_back(track(1,25,"Multi ani traiasca"));
	trk3.push_back(track(2,35,"Belociraptoru' dance'"));
	trk3.push_back(track(3,35,"Ma ucide ea"));
	trk3.push_back(track(4,45,"Eroina"));
	trk3.push_back(track(5,55,"Acadele"));
	
	albume al3(2020, "ALBUM3", trk3);
	
	
	
	multimap<int, albume> A1;
	multimap<int, albume> A2;
	
	
	A1.insert(pair<int, albume>(al1.getanap(), al1));
	A2.insert(pair<int, albume>(al2.getanap(), al2));
	A2.insert(pair<int, albume>(al3.getanap(), al3));
	
	artist ARTIST1(a,A1);
	artist ARTIST2(b,A2);
	
	
	ARTIST1.afisare();
	ARTIST2.afisare();
	
	int an1=2018;
	int an2=2021;
	
	//ARTIST2.afisareintreani(2018, 2021);
	
	//ARTIST2.gasirealbumlung();
	
	//sa se gaseasca toate albumele intre anii: an1 si an2
	vector<artist> art;
	
	art.push_back(ARTIST1);
	art.push_back(ARTIST2);
	
	cout<<endl<<endl<<endl<<endl;
	
/*	for(int i=0;i<art.size(); i++)
		art[i].afisareintreani(2018, 2021);
	
	*/
	cout<<"~~~~~~~~~~~~~~~~~Afisare fisier~~~~~~~~~~~~~~~";
	//In fisier ERROR
	
	ofstream output("artisti.txt",ios::app);
    for(int i=0;i<art.size();i++)
    	output<<art[i];
	
	
	
	
	return 0;
}
