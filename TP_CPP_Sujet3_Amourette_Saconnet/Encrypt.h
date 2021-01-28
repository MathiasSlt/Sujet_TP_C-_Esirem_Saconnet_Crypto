#pragma once
#include <string>
using namespace std;
/*
	Classe Encrypt servant de classe mère pour les autres classe de chiffrement 
*/
class Encrypt {

public:

	Encrypt();

	string getPlain() const;

	string getCipher() const;

	bool read(bool isPlain, std::string filename);

	bool write(bool isPlain, std::string filename);

	void setPlainText(string plainText);
	void setCipherText(string cypherText);
	string encode();

	string decode();

protected:

	string _plain;

	string _cipher;

};