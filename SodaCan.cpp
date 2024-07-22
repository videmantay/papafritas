#include "SodaCan.hpp"
#include <iostream>
#include <numbers>
#include <string>


using namespace std;
using namespace std::numbers;


SodaCan::SodaCan() {
	this->r = 3.0;
	this->h = 5.0;
}

SodaCan::SodaCan(double r, double h)
{
	this->r = r;
	this->h = h;
}

double SodaCan::getVolume() const
{
	return pi * r * r * h;
}

double SodaCan::getSurfaceArea() const
{
	return 2 * pi * r * h + (2 * pi * r * r);
}

int main()
{
	SodaCan soda_1 = SodaCan();
	SodaCan soda_2 = SodaCan(7, 10);
	cout << "Soda 1 Volume: " << soda_1.getVolume() << endl;
	cout << "Soda 1 Surface Area: " << soda_1.getSurfaceArea() << endl;

	cout << "Soda 2 Volume: " << soda_2.getVolume() << endl;
	cout << "Soda 2 Surface Area: " << soda_2.getSurfaceArea() << endl;


}