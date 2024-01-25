#pragma once
#include "Commerciaux.h"
#include <iostream>
using namespace std;
class Representants :
	public Commerciaux
{
private:
	float fraisDeplacements;
public:
	Representants(float fd);
};

