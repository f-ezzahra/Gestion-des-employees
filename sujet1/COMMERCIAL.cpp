#include <iostream>
#include <string>
#include"COMMERCIAL.h"

using namespace std;

COMMERCIAL::COMMERCIAL(string n,int m ,double i, int vente_derni):EMPLOYE(n,m,i){
	this->vente_derni=vente_derni;
};

void COMMERCIAL::mettre_a_jour(int vente_derni){
	this->vente_derni=vente_derni;
};

double COMMERCIAL::salaire(){
	return ((indice*valeur)+(vente_derni*0.1));
};
