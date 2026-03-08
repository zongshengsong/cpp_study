#include <iostream>
#include <string>
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
    cout << name << " 汽车价位大于" << car.name << "\t的价位" << endl;
    return true;
  }
  else
  {
    cout << name << " 汽车价位小于" << car.name << "\t的价位" << endl;
    return false;
  }
}

int main()
{
  int y;
  int *py = &y; // 一般的给指针赋值

  Car x1;
  Car *px1 = &x1; // 把类的对象赋给指针变量

  // 方式一
  x1.setName("BYD");
  x1.setPrice(40.0);
  cout << x1.getName() << '\t' << x1.getPrice() << endl;
  cout << (*px1).getName() << '\t' << (*px1).getPrice() << endl;

  (*px1).setName("WeiLan");
  (*px1).setPrice(60.0);
  cout << x1.getName() << '\t' << x1.getPrice() << endl;
  cout << (*px1).getName() << '\t' << (*px1).getPrice() << endl;

  // 方式二 对象特有的方法
  px1->setName("NeZa");
  px1->setPrice(20.0);
  cout << px1->getName() << '\t' << px1->getPrice() << endl;

  return 0;
}
