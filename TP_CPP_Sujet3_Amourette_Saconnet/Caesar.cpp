#include "Caesar.h"

Caesar::Caesar(int decalage)
{
	_decalage = decalage;
}

std::string Caesar::encode()
{
	string str = "";
	for (char c : _plain) {
		if (c < 123 && c>96)//Pour ne pas depasser le code ASCII des caratéres de a,...,z
			str += (c + _decalage);
		else str += c;
	}
	_cipher = str;
	return _cipher;
}

std::string Caesar::decode()
{
	string str = "";
	for (char c : _cipher) {
		if (c < 123 + _decalage && c>96 + _decalage)
			str += (c - _decalage);
		else str += c;
	}
	_plain = str;
	return _plain;
}
