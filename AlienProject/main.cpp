#include<iostream>
#include <cstdlib>
#include<ctime>
#include<vector>
#include<memory>
#include"Alien.h"

template <class T>
void print(T print);
void make3aliens(std::vector<Alien>& alien);

int main(int argc, char *argv[])
{
	std::vector<Alien> alienPointers;


	alienPointers.push_back(Alien(5, 5, 'F'));
	alienPointers.push_back(Alien(10, 3, 'M'));

	make3aliens(alienPointers);

	std::cout << std::boolalpha;

	print(alienPointers.at(0) == alienPointers.at(1));
	print(alienPointers.at(0) != alienPointers.at(1));
	print(alienPointers.at(1) > alienPointers.at(2));
	print(alienPointers.at(2) < alienPointers.at(3));
	print(alienPointers.at(4) >= alienPointers.at(3));
	print(alienPointers.at(0) <= alienPointers.at(4));

	alienPointers[1] = alienPointers[0];
	print(alienPointers.at(0) == alienPointers.at(1));


	
	
}

void make3aliens(std::vector<Alien>& alien)
{
	for (int i = 0; i < 3; i++)
	{
		alien.push_back(*alien.begin() + alien.back());
	}
}
template <class T>
void print(T print)
{
	std::cout << print << std::endl;
}
