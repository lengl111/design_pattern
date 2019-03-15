#ifndef REAL_PRODUCT_H
#define REAL_PRODUCT_H

#include "product.h"

class BenzCar: public Car
{
public:
	string Name()
	{
		return "Benz Car";	
	}

};

class BmwCar: public Car
{
public:
	string Name()
	{
		return "Bmw Car";	
	}

};

class AudiCar: public Car
{
public:
	string Name()
	{
		return "Audi Car";	
	}

};



class BenzBike: public Bike
{
public:
	string Name()
	{
		return "Benz Bike";	
	}

};

class BmwBike: public Bike
{
public:
	string Name()
	{
		return "Bmw Bike";	
	}

};

class AudiBike: public Bike
{
public:
	string Name()
	{
		return "Audi Bike";	
	}

};

#endif
