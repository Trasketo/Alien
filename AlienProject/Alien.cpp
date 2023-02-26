#include "Alien.h"


Alien::Alien(int weight, int height, char gender)
{
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}
int Alien::getWeight() const
{
	return weight;
}
int Alien::getHeith() const
{
	return height;
}
char Alien::getGender() const
{
	return gender;
}
int Alien::getPrestige() const
{
	int prestige;
	if (gender == 'M')
	{
		prestige = this->height * this->weight * 2;
	}
	else
	{
		prestige = this->height * this->weight * 3;
	}
	return prestige;
}

//operators 
bool Alien::operator==(const Alien& alien) const
{
	return (this->getPrestige() == alien.getPrestige()) ? true : false; 
}
bool Alien::operator!=(const Alien& alien) const
{
	return (this->getPrestige() != alien.getPrestige()) ? true : false;
}
bool Alien::operator>(const Alien& alien) const
{
	return (this->getPrestige() > alien.getPrestige()) ? true : false;
}
bool Alien::operator>=(const Alien& alien) const
{
	return (this->getPrestige() >= alien.getPrestige()) ? true : false;
}
bool Alien::operator<(const Alien& alien) const
{
	return (this->getPrestige() < alien.getPrestige()) ? true : false;
}
bool Alien::operator<=(const Alien& alien) const
{
	return (this->getPrestige() <= alien.getPrestige()) ? true : false;
}

Alien Alien::operator+(const Alien& alien) const
{
	char gender = 'M';

	srand((unsigned) time(NULL));
	int random = rand();

	switch (random % 10)
	{
		case 0:
		case 3:
		case 6:
			gender = 'F';			
	}

	Alien temp((alien.getWeight() + this->weight)/2,(alien.getHeith() + this->height)/2, gender);
	
	return temp;
}

void Alien::operator=(const Alien& alien)
{
	this->weight = alien.weight;
	this->height = alien.height;
	this->gender = alien.gender;
}