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
  ~HotPotDian(){
   cout<<"destructor is called..."<<endl;
  }

  string getMeat() const;
  double getPrice() const;
  string getFavor();
};
const string HotPotDian::BRAND = "Ñî·»´ó¶¼äÌÑòÈâ";
string HotPotDian::getMeat() const {
 return meat;
}
double HotPotDian::getPrice() const {
 return price;
}
string HotPotDian::getFavor(){
 return favor;
}

int main(){
 HotPotDian myDian("ÑòÈâ",56.2, "ÉÏ²Ë£¬Ëæ½ÐËæµ½");
 cout<<HotPotDian::BRAND<<endl;
 cout<<myDian.getMeat()<<endl;
 cout<<myDian.getPrice()<<endl;
 cout<<myDian.getFavor()<<endl;
 return 0;
}
