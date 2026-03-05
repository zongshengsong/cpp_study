#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Car
{
private:
   /* data */
public:
   Car(/* args */);
   bool compare(Car &car)；
   ~Car();
};



bool Car::compare(Car &car)
{
   if (price > car.price)
   {
      cout << name << " 汽车价位大于" << car.name << "\t的价位" << endl;
      return true;
   }
   else
   {
      cout << name << " 汽车价位小于" << car.name << "\t的价位" << endl;
      return false;
   }

   int main()
   {
      cout << ;
      return 0;
   }
}
