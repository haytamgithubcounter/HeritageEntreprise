#pragma once

#include <iostream>
using namespace std;
class Employes 
{
private:
	string nom, prenom;
	int age;
public:
	float calculSalaire();
	void afficheSalaire();
	Employes(string n, string p, int a);
};

