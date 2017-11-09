#pragma once
#include <stdlib.h>
#include <string>

using namespace std;

class Carte
{

	
	int ID;
    string	Nom;
    string Prenom;
	string DateDeNaissance;
	string Ville;
	int CP;










public:
	Carte();
	int getID() const;
	string getNom() const;
	string getPrenom() const;
	string getDateDeNaissance() const;
	string getVille() const;
	int getCP() const;

	void setID(int);
	void créer();
	void modifier();
	void setNom(string);
	void setPrenom(string);
	void setDateDeNaissance(string);
	void setVille(string);
	void setCP(int);
	
	void affiche() const;













	~Carte();
};

