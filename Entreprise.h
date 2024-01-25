#pragma once
#include <iostream>
using namespace std;

class Entreprise
{
private:
	string nom;
	string vendeurs[3]={"Paul","Pierre","Jack"};
	string representants [2] = { "Giselle","George"};
	string techniciens[2] = { "Raymond","Robert" };
	string interimaires[5] = { "Jean-Claude","Jean-Paul","Jean-Marie","Jean-Jean"};
public:
	Entreprise(string _nom);

};
