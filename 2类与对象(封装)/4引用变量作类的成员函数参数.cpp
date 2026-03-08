#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Car
{
private:
	string name;
	double price;

public:
	void setName(string n);
	void setPrice(double p);
	string getName();
	double getPrice();
	bool compare(Car &car);
};

void Car::setName(string n)
{
	name = n;
}

void Car::setPrice(double p)
{
	price = p;
}

string Car::getName()
{
	return name;
}

double Car::getPrice()
{
	return price;
}

bool Car::compare(Car &car)
{
	if (price > car.price)
	{
		cout << name << "汽车价位大于" << car.name << "\t的价位" << endl;
		return true;
	}
	else
	{
		cout << name << "汽车价位小于" << car.name << "\t的价位" << endl;
		return false;
	}
}

int main()
{
	Car car1, car2;
	car1.setName("Benzi");
	car2.setName("Tesla");
	car1.setPrice(40.0);
	car2.setPrice(60.0);
	cout << car1.compare(car2) << endl;
	return 0;
}
