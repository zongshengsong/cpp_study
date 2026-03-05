#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Car {
 private:
  string name;
  double cost;
 public:
  double getCost();
  void setName( string name );
};

double Car::getCost() {
  return this->cost; // 等价于 return cost;
}

/*形参 name 与类数据成员 name 同名时，可以在成员变量前加“this->”表示该变量是成员变量，
这样就不会因与形参名相同而报错，并且可以将形参的值赋给成员变量；*/
void Car::setName( string name ) {
 this->name = name;	 //(*this).name=name;
}
int main()
{

   return 0;
}

