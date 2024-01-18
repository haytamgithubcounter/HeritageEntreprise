#pragma once
#include "Entreprise.h"
#include <iostream>
using namespace std;
class Employes :
	private Entreprise
{
private:
	string nom, prenom;
	int age;
public:
	float calculSalaire();
	void afficheSalaire();
};

