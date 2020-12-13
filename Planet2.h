#pragma once
#include <vector>
#include "Planet1.h"

class Planet2
{
private:

	static const int kd = 2;

public:

	int  number_of_planet =0;
	int days[kd];

	Planets* planets_list[kd];

	void add_Planet(Planets&);

	void sort();

	void get_info(string);

};