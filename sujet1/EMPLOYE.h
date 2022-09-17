#ifndef EMPLOYE_h
#define EMPLOYE_h
#include <iostream>
#include <string>

using namespace std;


class EMPLOYE{
protected:
    double indice;
    string nom;
    double valeur ;
public:
	int matricule;
	EMPLOYE();
    EMPLOYE(string , int, double);
    void afficherEmploye();
    double salaire();
};
#endif

