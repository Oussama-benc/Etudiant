#include "Etudiant.h"
#include "Etudiant.h"

Etudiant::Etudiant()
{
	matricule = 0;
	nom = "";
	nbrNotes = 0;
	tabNotes = new float[nbrNotes];
}

Etudiant::Etudiant(string nome, int nb)
{

	n++;
	matricule = n;
	nom = nome;
	nbrNotes = nb;
	tabNotes = new float[nbrNotes];
}

Etudiant::Etudiant(const Etudiant& E)
{
	matricule = E.matricule;
	nom = E.nom;
	nbrNotes = E.nbrNotes;
	tabNotes = new float[nbrNotes];
	for (int i = 0; i < nbrNotes; i++)
	{
		tabNotes[i] = E.tabNotes[i];
	}
}

void Etudiant::saisie()
{
	cout << "Saisie des notes : " << endl;
	for (int i = 0; i < nbrNotes; i++)
	{
		cout << "Donner la note " << i + 1 << " : ";
		cin >> tabNotes[i];
	}
}

void Etudiant::affichage()
{
	cout << "- Matricule : " << matricule << endl
		<< "- Nom : " << nom << endl
		<< "- Nombre de notes : " << nbrNotes << endl
		<< "- Notes : " << endl;
	for (int i = 0; i < nbrNotes; i++)
	{
		cout << tabNotes[i] << "\t";
	}
	cout << endl;
}

float Etudiant::moyenne()
{
	float s = 0;
	for (int i = 0; i < nbrNotes; i++)
		s = s + tabNotes[i];

	return s / nbrNotes;
}

bool Etudiant::admis()
{
	return (moyenne() >= 10);
}

bool Etudiant::comparer(Etudiant E)
{
	return (moyenne() == E.moyenne());
}
