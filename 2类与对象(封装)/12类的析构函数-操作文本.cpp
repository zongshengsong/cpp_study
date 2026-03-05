#include<iostream>
#include<string>
using namespace std;

class Car{
 private:
  string name;
  double price;
 public:
  Car(string name = "BYD", double price = 60.0){
   this->name = name;
   this->price = price;
   cout<<"constructor is called\n"<<this->name<<'\t'<<this->price<<endl;
  }

  bool com(Car & car){
   if(this->price > car.price){
    cout<<this->name<<"\t 价位更高"<<endl;
    return true;
   }else{
    cout<<car.name<<"\t 价位更高"<<endl;
    return true;
   }
  }


//  ~Car(){  }    如果编者不编写的话，系统会默认添加的析构函数代码 ，且它的函数体为空语句，不执行任何操作；
	 ~Car();    //这里我自己编写一个析构函数，（析构函数只能是无参函数
	            //且一个类中只能有一个析构函数，不存在重载的析构函数）;

   
  // 系统默认添加的“复制构造函数”的代码，自己不编写的话，系统会自动给出以下代码：
  Car(Car & car){
   this->name = car.name;
   this->price = car.price;
   cout<<"copy constructor is called..."<<endl;
  }
};


//这里在类外对析构函数进行定义，与类的构造函数定义形式相同：
Car::~Car(){
 cout<<"析构函数 destructor is called\n"<<name<<'\t'<<price<<endl; //我们对其函数体编写一些执行语句；
}

void exch(int & a, int & b){
 int tmp;
 tmp = a;
 a = b;
 b = tmp;
}


int main(){
 Car car1;
 Car car2("Audi",70.0);
 car1.com(car2); // Car car = car2;
// Car car3 = car2;
 //用已经创建好的对象去初始化另一个正在创建的本类的对象
 //对象直接赋值
// Car car4;
// car4 = car2; //赋值构造函数
 //作为函数的形参，实参



// /**引用**/
// int x;
// int & y = x; //const类型的指针
//
// const int a = 9; // int a = 0;
//// a = 9; // 修改a
//
// int x1, x2;
// x1 = 9;
// x2 = 12;
// exch(x1,x2); // int& a = x1;  int& b = x2;
//

 /**
 引用   变量类型 & 标识符（变量名）
 单与 变量1 & 变量2
 取地址  &变量
 **/

 return 0;
}
