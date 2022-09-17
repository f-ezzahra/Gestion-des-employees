#include <iostream>
#include <string>
#include"PERSONNEL.h"

using namespace std;
int somme=0;
PERSONNEL::PERSONNEL(string n ,int m ,int i):EMPLOYE(n,m,i){};

bool PERSONNEL::verifier_employe(int mat){
	for(int i=0;i<tab_emp.size();i++){
		if(tab_emp[i].matricule == mat){return true;}
	}
	return false;
};

void PERSONNEL :: ajouter_employe(EMPLOYE e){
    if (!(verifier_employe(e.matricule))){
       tab_emp.push_back(e);
    }
};

int PERSONNEL::somme_salaire(){
	for(int j=0;j<tab_emp.size();j++){
		somme = somme + tab_emp[j].salaire();
	}
	return somme;
};



