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
		Type& operator[](unsigned int ind)const;
		Tableau(const Tableau&);
		Tableau& operator=(const Tableau&);
		void Print()const;
		~Tableau();
	};

}