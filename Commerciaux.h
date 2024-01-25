#pragma once
#include "Employes.h"
#include <iostream>
using namespace std;
class Commerciaux :
	private Employes
{
private:
	float salaireDeBase;
	float primes;
public:
	Commerciaux(float sdb);
	float primes();
	
};

