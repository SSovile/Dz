


enum type {
	Terrestrial, Jovian
};

int kamp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

class Planet;

void Distance(Planet& first, Planet& second);
void Mass(Planet& first, Planet& second);



class Planet {
	friend void Distance(Planet& first, Planet& second);
	friend void Mass(Planet& first, Planet& second);

public:
	std::string name;
	int mass, orbital_velocity, mean_temperature, length_of_day, distance_from_sun, type;

	Planet() {}


	void setkg(int mass) {
		this->mass = mass;
	}

	void setlength_of_day(int length_of_day) {
		this->length_of_day = length_of_day;
	}

	void setdistance_from_sun(int distance_from_sun) {
		this->distance_from_sun = distance_from_sun;
	}

	void getkg() {
		std::cout << this->mass << "kg" << endl;
	}

	void getname() {
		std::cout << this->name << endl;
	}

};



class Planets2
{
private:
	static const int kd = 2;
public:
	int n = 0;
	int days[kd];

	Planet* planets_list[kd];
	void addPlanet(Planet& planet)
	{
		this->planets_list[n] = &planet;
		n = n + 1;
		std::cout << n << endl;
	}

	void sort()
	{

		for (int i = 0; i < kd; i++)
		{
			days[i] = this->planets_list[i]->distance_from_sun;
		}
		qsort(days, n, sizeof(int), kamp1);
		for (int i = 0; i < kd; i++)
		{
			std::cout << days[i] << " " << " ";
		}
	}

	void getinfo(std::string planet_n)
	{
		for (int i = 0; i < kd; i++) {
			if (planet_n == planets_list[i]->name)
			{
				std::cout << this->planets_list[i]->name << " " << this->planets_list[i]->mass << "/" << "kg" << endl;
			}
		}
	}
};



void Distance(Planet& first, Planet& second)
{
	int distan;
	distan = first.distance_from_sun - second.distance_from_sun;
	std::cout << distan << "-" << "riznuca vidstani" << endl;
}

void Mass(Planet& first, Planet& second)
{
	int rmas;
	rmas = first.mass - second.mass;
	std::cout << rmas << "-" << "riznuca masu" << endl;
}