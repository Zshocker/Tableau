#include "Tableau.h"
#include<iostream>
#include<assert.h>
using namespace INTERV;
INTERV::Tableau::Tableau(unsigned int Taille)
{
	this->Taille = Taille;
	if (Taille > 0) {
		this->Tab = new Type[Taille];
	}
	else this->Tab = NULL;
}

INTERV::Tableau::~Tableau()
{
	if (this->Tab) {
		delete[] this->Tab;
		this->Tab = NULL;
	}
}

Tableau& INTERV::Tableau::operator=(const Tableau&T)
{
	if (this != &T) {
		if (this->Tab) {
			delete[] this->Tab;
			this->Tab = NULL;
		}
		this->Taille = T.Taille;
		if(Taille>0)this->Tab = new Type[Taille];
	}
}

Type& INTERV::Tableau::operator[](unsigned int ind)
{
	assert(this->Taille > ind);
	return this->Tab[ind];
}
