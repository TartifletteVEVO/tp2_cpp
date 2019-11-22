#include <iostream>

class Vecteur3D
{
private:
	//Donn�es membres de la classe
	float x;
	float y;
	float z;
public:
	float getX();
	float getY();
	float getZ();

	///////////////////////////////////////
	//fonction membre coincide utilisant la transmission par valeur
	bool coincide(Vecteur3D vect);
	///////////////////////////////////////
	//fonction membre coincide utilisant la transmission par adresse
	bool coincide2(Vecteur3D *vect);
	///////////////////////////////////////
	//fonction membre coincide utilisant la transmission par reference
	bool coincide3(Vecteur3D &vect);
	///////////////////////////////////////

	///////////////////////////////////////
	//constructeurs a : fonctions membres surdefinie
	//Vecteur3D(float x, float y, float z);
	//Vecteur3D();
	///////////////////////////////////////
	//constructeur b et c : 1 fonction membre en ligne
	Vecteur3D(float x = 0, float y = 0, float z = 0);
	///////////////////////////////////////

	//destructeur
	~Vecteur3D();
};