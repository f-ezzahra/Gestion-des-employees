#ifndef PERSONNEL_h
#define PERSONNEL_h
#include <iostream>
#include <string>
#include"EMPLOYE.h"
#include <vector>

using namespace std;

class PERSONNEL : public EMPLOYE{
protected:
	vector<EMPLOYE> tab_emp;
	int somme;

public:
	PERSONNEL(string , int, int);
	bool verifier_employe(int);
	void ajouter_employe(EMPLOYE);
	int somme_salaire();
};

#endif 
