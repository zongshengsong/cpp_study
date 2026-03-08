#include <iostream>
#include <string>
using namespace std;

// 初始化成员列表是用来初始化成员变量的

// 初始化成员列表只能写在构造函数后面！！！！！！！！！！！！！！！！

/*C++中可以通过下面两种方式为类的数据成员赋值 :
1，通过函数体内的赋值操作来实现数据成员的“初始化”————————任何函数的函数体内都可以！！
2，通过初始化表来实现数据成员的初始化  ——————————————只能在构造函数后面！！

3，初始化（成员）列表的语法格式：
   类名：：构造函数名（参数列表）：数据成员1（参数1）,数据成员的2（参数2）,…,数据成员n（参数n）
   {
      构造函数体
   }

4，与在构造函数内给数据成员赋值的效果是相同的
5，成员列表完成的是对数据成员的初始化，而构造函数内部完成的是对数据成员的赋值
6，何时需要初始化成员列表 ：
    1）如果数据成员是用户自定的类类型，该成员必须通过初始化列表来初始化(类的组合)


     2）如果数据成员是 const 的或者是引用，它们也必须在初始化列表中初始化
       class A {
               public:
                   A( int ii); // 构造函数
               private:
                   int i;
                   const int ci;  // const 类型数据成员
                   int & ri;  // 引用类型数据成员
              };


        A::A( int ii ) {
                i = ii;    // RIGHT
                ci = ii;   // WRONG：不允许给 const 变量赋值
                ri = ii;   // WRONG：引用类型变量 ri 没有被初始化
              }


*/
class Student
{
private:
  string name;
  int id;
  // 另外一个类的对象
public:
  //  Student(string name, int id){
  //   this->name = name;
  //   this->id = id;
  //  }

  Student(string name, int id) : name(name), id(id)
  {
    //   this->id = id;
  }
};

int main()
{
  Student stu("宋宗胜", 110);
  return 0;
}

/*
  class Car {
        public:
           Car( string n, double p ); // 构造函数
           ~Car();  // 析构函数
           Car( Car & car ); // 复制构造函数
           string getName ()  const;
           double  getPrice() const;

        private:
           string name;  double price;
      };

     Car::Car( string n, double p ) {                       构造函数 V1
         name = n;                                         在构部给造函数的内各个成员数据赋值
         price = p;
      }

     Car::Car( string n, double p ) : name(n), price(p)      构造函数 V2
      {                                                      在构造函数的外部初始化各个成员数据
         空函数体
       }

*/
