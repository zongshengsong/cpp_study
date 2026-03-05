#include<iostream>
#include<string>
using namespace std;

class HotPotDian{
 public:
  static const string BRAND;
 private:
  string meat;
  double price;
  string favor;
 public:
  HotPotDian(string meat, double price, string favor){
   this->meat = meat;
   this->price = price;
   this->favor = favor;
   cout<<"constructor is called..."<<endl;
  }

  HotPotDian(HotPotDian & h){
   this->meat = h.meat;
   this->price = h.price;
   this->favor = h.favor;
   cout<<"copy constructor is called..."<<endl;
  }

  ~HotPotDian(){
   cout<<"destructor is called..."<<endl;
  }

  string getMeat() const;
  double getPrice() const;
  string getFavor();
};
const string HotPotDian::BRAND = "杨坊大都涮羊肉";
string HotPotDian::getMeat() const {
// meat += "牛肉" ;

 getPrice();  //常成员函数
 cout<<meat<<endl; //非常成员变量
// getFavor();   //非 常成员函数  不可以

 return meat;
}
double HotPotDian::getPrice() const {
 return price;
}
string HotPotDian::getFavor(){
// favor += "上酸菜";
 getPrice();
 return favor;
}


void eat(const HotPotDian & myDian){
 cout<<HotPotDian::BRAND<<endl;
 cout<<myDian.getMeat()<<endl;
 cout<<myDian.getPrice()<<endl;
// cout<<myDian.getFavor()<<endl;
}

int main(){
// const HotPotDian myDian("羊肉",56.2, "上菜，随叫随到");
// cout<<HotPotDian::BRAND<<endl;
// cout<<myDian.getMeat()<<endl;
// cout<<myDian.getPrice()<<endl;
// cout<<myDian.getFavor()<<endl;

 HotPotDian myDian("羊肉",56.2, "上菜，随叫随到");
 eat(myDian);

 return 0;
}
