// TP_CPP_Sujet3_Amourette_Saconnet.cpp : Ce fichier contient la fonction main
// Ce fichier contient un exemple pour chaque classe de chiffrement
//
#include <iostream>
#include "Encrypt.h"
#include "Caesar.h"
#include "CaesarV2.h"
#include "Vigenere.h"
#include "Enigma.h"

int main()
{
	//Caesar
	string fileTextPlain("../FichiersTextes/TextePlainCaesar.txt");
	string fileTextCrypter("../FichiersTextes/TexteCrypterCaesar.txt");
	Caesar encryptCaesar(3);
	if (!encryptCaesar.read(true, fileTextPlain))
	{
		std::cout << "Le mot à crypter est : '"<< encryptCaesar.getPlain() <<"' avec un decallage de 3"<< endl;
		std::cout << "Le mot crypter avec Caesar est: " << encryptCaesar.encode() << endl;
		std::cout << "Le mot decrypter avec Caesar est: " << encryptCaesar.decode() << endl;
	}
	else std::cout << "Erreur lors du chargement du fichier texte pour le cryptage Caesar" <<endl;
	if (encryptCaesar.write(false, fileTextCrypter))
	{
		std::cout << "Erreur lors de l'ecriture sur le fichier" << endl;
	}

	//CaesarV2
	std::cout << endl << "CaesarV2" << endl;
	fileTextPlain="../FichiersTextes/TextePlainCaesarV2.txt";
	fileTextCrypter = "../FichiersTextes/TexteCrypterCaesarV2.txt";
	CaesarV2 encryptCaesarV2(3);
	if (!encryptCaesarV2.read(true, fileTextPlain))
	{
		std::cout << "Le mot à crypter est : '" << encryptCaesarV2.getPlain() << "' avec un decallage de 3" <<endl;
		std::cout << "Le mot crypter avec CaesarV2 est: " << encryptCaesarV2.encode() << endl;
		std::cout << "Le mot decrypter avec CaesarV2 est: " << encryptCaesarV2.decode() << endl;
	}
	else std::cout << "Erreur lors du chargement du fichier texte pour le cryptage CaesarV2" << endl;
	if (encryptCaesarV2.write(false, fileTextCrypter))
	{
		std::cout << "Erreur lors de l'ecriture sur le fichier" << endl;
	}

	//Vigenere
	std::cout << endl << "Vigenere" << endl;
	fileTextPlain = "../FichiersTextes/TextePlainVigenere.txt";
	fileTextCrypter = "../FichiersTextes/TexteCrypterVigenere.txt";
	vector<int> keyVigenere = { 3,4,9,4,6,7,2 };
	Vigenere encryptVigenere(keyVigenere);
	if (!encryptVigenere.read(true, fileTextPlain))
	{
		std::cout << "Le mot à crypter est : '" << encryptVigenere.getPlain() << "' avec la clé {3,4,9,4,6,7,2}"<< endl;
		std::cout << "Le mot crypter avec Vigenere est: " << encryptVigenere.encode() << endl;
		std::cout << "Le mot decrypter avec Vigenere est: " << encryptVigenere.decode() << endl;
	}
	else std::cout << "Erreur lors du chargement du fichier texte pour le cryptage Vigenere" << endl;
	if (encryptVigenere.write(false, fileTextCrypter))
	{
		std::cout << "Erreur lors de l'ecriture sur le fichier" << endl;
	}

	//Enigma
	std::cout << endl << "Enigma" << endl;
	fileTextPlain = "../FichiersTextes/TextePlainEnigma.txt";
	fileTextCrypter = "../FichiersTextes/TexteCrypterEnigma.txt";
	vector<char> keyEnigmaRotor1 = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	Enigma encryptEnigma(keyEnigmaRotor1);
	if (!encryptEnigma.read(true, fileTextPlain))
	{
		std::cout << "Le mot à crypter est : '" << encryptEnigma.getPlain() << "' avec un rotor ayant {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}" << endl;
		std::cout << "Le mot crypter avec Enigma est: " << encryptEnigma.encode() << endl;
		std::cout << "Le mot decrypter avec Enigma est: " << encryptEnigma.decode() << endl;
	}
	else std::cout << "Erreur lors du chargement du fichier texte pour le cryptage Enigma" << endl;
	if (encryptEnigma.write(false, fileTextCrypter))
	{
		std::cout << "Erreur lors de l'ecriture sur le fichier" << endl;
	}
	std::cin.get();
}


