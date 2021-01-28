#include "Enigma.h"

Enigma::Enigma(vector<char> key) : _keyRotor1(key)
{

}

string Enigma::encode()
{
	string textCipher = this->getPlain();
	vector<int> rotor1Int;
	for (const auto& charRotor1 : getKeyRotor1())
	{
		rotor1Int.push_back(charRotor1 - 97);
	}
	Vigenere rotor1(rotor1Int);
	rotor1.setPlainText(getPlain());
	textCipher = rotor1.encode();
	this->_cipher = textCipher;
	return this->getCipher();
}

string Enigma::decode()
{
	string textPlain = this->getCipher();
	vector<int> rotor1Int;
	for (const auto& charRotor1 : getKeyRotor1())
	{
		rotor1Int.push_back(charRotor1 - 97);
	}
	Vigenere rotor1(rotor1Int);
	rotor1.setCipherText(getCipher());
	textPlain = rotor1.decode();
	this->setPlainText(textPlain);
	return this->getPlain();
}

const vector<char> Enigma::getKeyRotor1()
{
	return _keyRotor1;
}