#ifndef ALIEN_H
#define ALIEN_H
#include <cstdlib>
#include <time.h>

class Alien
{
	private:
		int weight;
		int height;
		char gender;
	public:
		Alien(int weight, int height, char gender);
		int getWeight() const;
		int getHeith() const;
		char getGender() const;
		int getPrestige() const;

		//operators 
		bool operator==(const Alien& alien) const;
		bool operator!=(const Alien& alien) const;
		bool operator>(const Alien& alien) const;
		bool operator>=(const Alien& alien) const;
		bool operator<(const Alien& alien) const;
		bool operator<=(const Alien& alien) const;

		Alien operator+(const Alien& alien) const;

		void operator=(const Alien& alien);
		
};
#endif // !ALIEN_H