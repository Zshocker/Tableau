#pragma once
#include "Tableau.h"
namespace INTERV {
	class TableauBorne :public Tableau
	{
		Type Inf;
		Type Sup;
	public:
		TableauBorne(Type bornInf, Type bornSup,unsigned int Taille);
		Type operator[](unsigned int ind);
		void operator()(unsigned int ind,Type Val);
	};
}


