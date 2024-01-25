#pragma once
#include "Employes.h"
#include <iostream>
using namespace std;
class Techniciens :
	public Employes
{
private: 
	float salaire;
public:
	Techniciens(float s);

};

