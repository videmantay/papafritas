#ifndef SODA_CAN_H
#define SODA_CAN_H


class SodaCan
{
public:
	SodaCan();
	SodaCan(double r, double h);
	double getSurfaceArea() const;
	double getVolume() const;
	double r;
	double h;

};

#endif