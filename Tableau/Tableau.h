#pragma once
namespace INTERV {
	typedef float Type;
	class Tableau
	{
	protected:
		Type* Tab;
		unsigned int Taille;
	public:
		Tableau(unsigned int Taille=0);
		~Tableau();
		Tableau& operator=(const Tableau&);
		Type& operator[](unsigned int ind);
	};

}