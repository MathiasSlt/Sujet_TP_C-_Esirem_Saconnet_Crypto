#pragma once
#include "Encrypt.h"
#include <vector>
#include "Vigenere.h"
/*
	Classe Enigma servant a créer le chiffrement d'une phrase sur le principe de la machine Enigma
*/
class Enigma :
	public Encrypt
{
public:
	Enigma(vector<char> key);
	string encode();
	string decode();
	const vector<char> getKeyRotor1();


private:
	vector<char> _keyRotor1;

};

