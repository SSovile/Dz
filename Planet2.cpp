#include <iostream>
#include "Planet2.h"
#include <string>
using namespace std;

void Planet2::add_Planet(Planets &planet)
{
	this->planets_list[number_of_planet] = &planet;
	number_of_planet = number_of_planet + 1;
	cout << number_of_planet << endl;
}

void Planet2::sort()
{
	vector <int> length;

	for (int k = 0; k < number_of_planet; k++)
	{

		length.push_back(planets_list[k]->length_of_day);
	}

	for (int i = 0; i < number_of_planet; i++)
	{
		for(int a = i;a< number_of_planet;a++)
		{
			if(length[a]>length[i])
			{
				int tmp = length[a];
				length[a] = length[i];
				length[i] = tmp;

				cout << length[i] << endl;

			}
		}
	}

}

void Planet2::get_info(std::string planet_n)
{
	for (int i = 0; i < kd; i++) {
		if (planet_n == planets_list[i]->name)
		{
			cout << this->planets_list[i]->name << " " << this->planets_list[i]->mass << "/" << "kg" << endl;
		}
	}
}


