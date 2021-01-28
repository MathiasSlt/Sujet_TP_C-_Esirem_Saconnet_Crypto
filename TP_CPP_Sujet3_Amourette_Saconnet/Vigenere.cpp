#include "Vigenere.h"

Vigenere::Vigenere(vector<int> tabKey) :_keyCipher(tabKey)
{

}

vector<int> Vigenere::getKeyCipher() const
{
	return _keyCipher;
}

string Vigenere::encode()
{
	string plain = getPlain();
	string messageCode = "";
	vector<int> key = getKeyCipher();
	int c(0);
	for (int i = 0; i < plain.length(); i++)
	{
		char caractere = plain[i];
		if (plain[i] >= 'a'&& plain[i] <= 'z')
		{
			if (plain[i] + key[i%key.size()] > 'z')
			{
				int decallage = (plain[i] + key[i] % key.size()) - c;
				messageCode.push_back(decallage);
			}
			else messageCode.push_back(plain[i] + key[i%key.size()]);
		}
		else messageCode.push_back(plain[i]);
		c++;

	}
	this->_cipher = messageCode;
	return messageCode;
}

string Vigenere::decode()
{
	string cipher = getCipher();
	string messageDecode = "";
	vector<int> key = getKeyCipher();
	int c(0);
	for (int i = 0; i < cipher.length(); i++)
	{
		if (cipher[i] >= 'a'&&cipher[i] <= 'z')
		{
			messageDecode.push_back(cipher[i] - key[c]);
			c++;
			if (c == getKeyCipher().size())
			{
				c = 0;
			}
		}
		else messageDecode.push_back(cipher[i]);
	}
	this->_plain = messageDecode;
	return messageDecode;
}