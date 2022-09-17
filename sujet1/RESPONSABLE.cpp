#include <iostream>
#include <string>
#include"RESPONSABLE.h"
using namespace std;


RESPONSABLE :: RESPONSABLE(string n ,int m , double i,vector<EMPLOYE> inf_ier ,string respo):EMPLOYE(n,m,i){
	for(i=0;i<inf_ier.size();i++){
		infer_hierar[i] = inf_ier[i];
	}	
	responsable=respo;
};

void RESPONSABLE :: afficher_Infer_Direct(){
	this->afficherEmploye();
	cout<<"ses inferieurs hieararchiques sont"<<endl;
	for(int i = 0; i<infer_hierar.size(); i++){	
		infer_hierar[i].afficherEmploye();
		cout<<"\n"<<endl;
	}	
};

