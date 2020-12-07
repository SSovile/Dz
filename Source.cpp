#include <iostream>
#include <string>
#include <math.h>
#include "Header.h"

using namespace std;






	int main() 
	{

	Planet neptun = Planet();
	neptun.name = "Neptun";
	neptun.mass = 59000;
	neptun.length_of_day = 50 ;
	neptun.distance_from_sun = 4;
	neptun.type = Terrestrial;
	neptun.type = Jovian;

	Planet saturn;
	saturn.name = "Saturn";
	saturn.mass = 25000;
	saturn.length_of_day = 75;
	saturn.distance_from_sun = 1;
	saturn.type = Terrestrial;
	saturn.type = Jovian;

	Planet2 planets;

	planets.addPlanet(neptun);
	planets.addPlanet(saturn);

	planets.sort();
	planets.get_info("Neptun");

	planets.sort();
	planets.get_info("Saturn");

    Distance(neptun, saturn);
    Mass(neptun, saturn);

	return 0;
	}
