#pragma once
#include "Techniciens.h"
#include <iostream>
using namespace std;
class Interimaires :
	public Techniciens
{
private:
	float tauxHoraire;
	float heuresTravaillees;
public:
	Interimaires(float t, float h);
};

