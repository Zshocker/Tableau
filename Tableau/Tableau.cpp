#include "Tableau.h"
#include<iostream>
#include<assert.h>
using namespace INTERV;
using namespace std;
INTERV::Tableau::Tableau(unsigned int Taille)
{
	this->Taille = Taille;
	if (Taille > 0) {
		this->Tab = new Type[Taille]();
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
Type& INTERV::Tableau::operator[](unsigned int ind)const
{
	assert(this->Taille > ind);
	return this->Tab[ind];
}
INTERV::Tableau::Tableau(const Tableau&T)
{
	this->Taille = T.Taille;
	if (Taille > 0) { 
		this->Tab = new Type[Taille];
		for (unsigned int i = 0; i < Taille; i++)
		{
			Tab[i] = T.Tab[i];
		}
	}
	else this->Tab = NULL;
}

Tableau& INTERV::Tableau::operator=(const Tableau&T)
{
	if (this != &T) {
		if (this->Taille!=T.Taille) {
			this->Taille = T.Taille;
			if (this->Tab) 
			{
				delete[] this->Tab;
				this->Tab = NULL;
			}
			if(Taille)this->Tab = new Type[Taille];
		}
		for (unsigned int i = 0; i < Taille; i++)
		{
			Tab[i] = T.Tab[i];
		}
	}
	return *this;
}

void INTERV::Tableau::Print() const
{
	cout << "Table: {";
	for (int i = 0; i < Taille; i++)
	{
		cout << this->Tab[i]<<" ";
	}
	cout << "}"<< endl;
}


