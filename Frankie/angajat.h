class Angajat
{
	char *nume;
	char CNP[14];
	int salariu;
	
public:
	Angajat();
	Angajat(char*, char[14], int);
	Angajat(const Angajat &);
	~Angajat();
	void modif(char *, char[14], int);
	void afis() const;
	int getsalariu() const;
		
	
};
