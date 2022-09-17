#include <iostream>
#include <string>
#include"EMPLOYE.h"

using namespace std;


EMPLOYE::EMPLOYE(){};
EMPLOYE::EMPLOYE(string n ,int m ,double i){
    nom=n;
	matricule=m;
    indice=i;
};
void EMPLOYE :: afficherEmploye(){
	cout<<"les infos sur employes sont"<<endl;
	cout<<nom<<"votre matricule est"<<endl;
	cout<<matricule<<"votre indice est"<<endl;
	cout<<indice<<endl;
};
double EMPLOYE :: salaire(){
    double valeur = 10;
	return indice*valeur; //salaire
};

