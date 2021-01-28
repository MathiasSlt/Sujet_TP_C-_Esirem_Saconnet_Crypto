#pragma once
#include "Encrypt.h"
#include <cstring>
#include <algorithm>  
/*
	Classe CaesarV2 servant a cr�er le chiffrement d'une phrase sur le principe du chiffrement de Caesar am�lior�
*/
class CaesarV2 : public Encrypt
{
public:
	CaesarV2(int key);
	std::string encode();
	std::string decode();
private:
	const int _key;
};