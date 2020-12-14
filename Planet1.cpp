#include "Planet1.h"

void Planets::set_mass(int mass) {
	this->mass = mass;
}

void Planets::set_length_of_day(int length_of_day) {
	this->length_of_day = length_of_day;
}

void Planets::set_distance_from_sun(int distance_from_sun) {
	this->distance_from_sun = distance_from_sun;
}

void Planets::get_mass() {

	cout << this->mass << "kg" << endl;

}

void Planets::get_name() {
	
	cout << this->name << endl;

}

void Planets::operator=(Planets planet)
{
	name = planet.name;
	type = planet.type;
	mass = planet.mass;
	length_of_day = planet.length_of_day;
	distance_from_sun = planet.distance_from_sun;
}

void Distance(Planets& first, Planets& second)
{
	
	int distance;
	distance = first.distance_from_sun - second.distance_from_sun;
	cout << distance << "\t" << "riznuca vidstani" << endl;

}

void Mass(Planets& first, Planets& second)
{

	int average_weight;
	average_weight = first.mass - second.mass;
	cout << average_weight << "\t" << "riznuca masu" << endl;

}
