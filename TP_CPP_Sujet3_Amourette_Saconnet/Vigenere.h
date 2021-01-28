#pragma once
#include "Encrypt.h"
#include <vector>
#include <iostream>
/*
	Classe Vigenere servant chiffrer des phrases sur le principe de Vigenere
*/
class Vigenere : public Encrypt
{
public:
	Vigenere(vector<int> tabKey);
	vector<int> getKeyCipher() const;
	string encode();
	string decode();
private:
	vector<int> _keyCipher;

};
