#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Car
{
private:
   /* data */
   string name;
   float price;

public:
   Car(/* args */) {};
   Car(string name, float price);
   void setName(string name);
   void setPrice(float price);
   bool compare(Car &car);

   ~Car() {};
};

Car::Car(string name, float price)
{
   this->name = name;
   this->price = price;
}

void Car::setName(string name)
{
   this->name = name;
}
void Car::setPrice(float price)
{
   this->price = price;
}

bool Car::compare(Car &car)
{
   if (price > car.price)
   {
      cout << name << " 的汽车比" << car.name << "\t更贵" << endl;
      return true;
   }
   else
   {
      cout << name << " 的汽车比" << car.name << "\t更便宜" << endl;
      return false;
   }
}

int main()
{
   Car car1;
   car1.setName("ben");
   car1.setPrice(1112.2);
   Car car2 = Car("hh", 222.3);
   bool a = car2.compare(car1);
   cout << a << "\r\n";
   return 0;
}