#include "Etudiant.h"

Etudiant::Etudiant(std::string nom, std::string prenom, int age, std::string telephone, std::string adresse, std::string email, std::vector<matiere>matiere, std::string classe)
	: Humain(nom, prenom, age, telephone, adresse, email)
{
	/*
	for (auto it = matiere.begin(); it != matieres.end(); it++)
	{
		this->matieres.push_back((*it));
	}
	*/

	this->matieres.swap(matieres);
	this->classe = classe;
}
