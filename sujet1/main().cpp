#include <iostream>
#include "EMPLOYE.h"
#include "COMMERCIAL.h"
#include "RESPONSABLE.h"
#include "PERSONNEL.h"



using namespace std;
int main(int argc, char** argv) {	

	vector<EMPLOYE> E1;


	EMPLOYE e1("fa",150,1);
    e1.afficherEmploye();
    cout <<"le salaire de fa est : "<<e1.salaire()<<"\n"<<endl;
    
    COMMERCIAL e2("mehdi",151,1,13);
    e2.mettre_a_jour(2);
    e2.afficherEmploye();
    cout <<"le salaire de mehdi est : "<<e2.salaire()<<"\n"<<endl;
    
    
    PERSONNEL e3("akram",152,1);
    e3.afficherEmploye();
    cout <<"le salaire de akram est : "<<e3.salaire()<<"\n"<<endl;
    e3.ajouter_employe(e1);
    e3.ajouter_employe(e2);
    cout <<"la somme des salaires est : "<<e3.somme_salaire()<<"\n"<<endl;
    cout <<e3.verifier_employe(2)<<endl;
    cout <<e3.verifier_employe(150)<<endl;
    cout <<e3.verifier_employe(151)<<endl;

    
	RESPONSABLE r("wissal",153,1,E1,"PATRON");
    r.afficherEmploye();
    cout <<"le salaire de wissal est : "<<r.salaire()<<"\n"<<endl;   
    E1[0]=e1;
	E1[1]=e2;
	r.afficher_Infer_Direct();
    
    
    
/*
    r e3 = commercial("hamid", 170, 12);
    e3.affiche();
    e3.calcul_salaire();

    vector<employe> inf;
    inf[0]=e1;
    inf[1]=e2;

    responsable r1 = responsable("mohamed", 11, 17, inf, "DRH");
    cout << r1;
    /*personnel p ;
    p.ajouter_emp(e1);
    p.ajouter_emp(e2);

    p.ajouter_resp(r1);

    r1.affiche();
    r1.affiche_inferieurs();

    p.total_salaire();*/
    

    
    
//	return 0;
}


