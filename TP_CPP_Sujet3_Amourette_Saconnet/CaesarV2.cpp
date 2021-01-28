#include "CaesarV2.h"

CaesarV2::CaesarV2(int key): _key(key)
{

}

std::string CaesarV2::decode()
{
	string motCoder = this->getCipher();
	string motDecoder = "";
	for (int i = 0; i < motCoder.length(); i++)
	{
		char car = motCoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car -= _key;
			if (car > 'z')
			{
				car = car + 'z' - 'a' + 1;
			}
			motDecoder += car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car -= _key;
			if (car > 'Z')
			{
				car = car + 'Z' - 'A' + 1;
			}
			motDecoder += car;
		}
		else motDecoder += (car - _key);

	}
	this->_cipher = motDecoder;
	return motDecoder;
}

std::string CaesarV2::encode()
{
	string motDecoder = this->getPlain();
	string motCoder = "";
	for (int i = 0; i < motDecoder.length(); i++)
	{
		char car = motDecoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car += _key;
			if (car > 'z')
			{
				car = car - 'z' + 'a' - 1;
			}
			motCoder += car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car += _key;
			if (car > 'Z')
			{
				car = car - 'Z' + 'A' - 1;
			}
			motCoder += car;
		}
		else motCoder += (car + _key);

	}
	this->_cipher = motCoder;
	return motCoder;
}
