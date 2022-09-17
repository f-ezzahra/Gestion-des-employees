#ifndef RESPONSABLE_h
#define RESPONSABLE_h
#include <iostream>
#include <string>
#include"EMPLOYE.h"
#include <vector>


using namespace std;

class RESPONSABLE : public EMPLOYE{
protected:
	vector<EMPLOYE> infer_hierar;
    string responsable;

public:
    RESPONSABLE(string,int,double,vector<EMPLOYE>,string );
	void afficher_Infer_Direct();


    };


#endif 
