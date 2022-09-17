#ifndef COMMERCIAL_h
#define COMMERCIAL_h
#include <iostream>
#include <string>
#include"EMPLOYE.h"

using namespace std;


class COMMERCIAL : public EMPLOYE{
protected:
	int vente_derni; //vent du dernier mois

public:
 	COMMERCIAL(string,int,double,int);
	void mettre_a_jour(int);
	double salaire();};


#endif 


