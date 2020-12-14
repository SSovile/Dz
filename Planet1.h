#pragma once
#include <iostream>
#include <string>
using namespace std;

enum type {
	Terrestrial, Jovian
};

class Planets;

 void Distance(Planets& first, Planets& second);
 void Mass(Planets& first, Planets& second);

class Planets{
public:
	
	string name;
	string type;
	int mass; int length_of_day; int distance_from_sun;

	Planets() {}
	void operator=(Planets planet);
	void set_mass(int);
	void set_length_of_day(int);
	void set_distance_from_sun(int);

	void get_mass();

	void get_name();
};








