#include "TableauBorne.h"
#include<assert.h>
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
