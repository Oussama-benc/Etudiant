#pragma once
#include<iostream>

using namespace std;

class Etudiant
{
	int matricule;
	string nom;
	int nbrNotes;
	float* tabNotes;
	static int n;

public:

	Etudiant();

	Etudiant(string nome, int nb);

	~Etudiant()
	{
		delete[]tabNotes;
	}

	Etudiant(const Etudiant& E);




	void saisie();

	void affichage();

	float moyenne();

	bool admis();

	bool comparer(Etudiant E);

};

