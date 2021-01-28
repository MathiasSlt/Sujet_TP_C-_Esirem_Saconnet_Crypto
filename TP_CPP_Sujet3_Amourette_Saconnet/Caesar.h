#pragma once
#include "Encrypt.h"
#include <iostream>
/*
	Classe Caesar servant a créer le chiffrement d'une phrase sur le principe du chiffrement de Caesar
*/

class Caesar : public Encrypt
{

public:

	Caesar(int decalage);

	std::string encode();

	std::string decode();

private:

	int _decalage;
};

