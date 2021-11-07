#include "TableauBorne.h"
#include<assert.h>
#include<iostream>
using namespace std;
using namespace INTERV;
INTERV::TableauBorne::TableauBorne(Type bornInf, Type bornSup,unsigned int Taille):Tableau(Taille)
{
	assert(bornInf <= bornSup);
	this->Inf = bornInf;
	this->Sup = bornSup;
}

Type INTERV::TableauBorne::operator[](unsigned int ind)const
{
	return this->Tab[ind];
}

void INTERV::TableauBorne::operator()(unsigned int ind, Type Val)
{
	if (Taille > ind && Val >= Inf && Val <= Sup) 
	{
		this->Tableau::operator[](ind) = Val;
	}
}

void INTERV::TableauBorne::Print() const
{
	cout << endl << "Inf:" << this->Inf << " Sup:" << this->Sup<<endl;
	this->Tableau::Print();
}
