#pragma once
#include "Tableau.h"
namespace INTERV {
	class TableauBorne :private Tableau
	{
		Type Inf;
		Type Sup;
	public:
		TableauBorne(Type bornInf, Type bornSup,unsigned int Taille);
		const Type& operator[](unsigned int ind)const;
		void operator()(unsigned int ind,Type Val);
		void Print()const;
	};
}


