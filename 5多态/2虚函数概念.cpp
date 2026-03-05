/*
		< C++虚函数 >
1.C++虚函数是 C++ 实现动态绑定的基础

2.作用：
    对于基类与派生类中同时存在的“同名且同参数列表”的成员函数 foo(list)，如果将基类中的 foo(list) 声明
	 为虚函数，那么，当从外部通过基类指针或基类引用 X 调用该接口时X.foo(list)，可以根据 X 的实际类型
	 来决定到底调用基类还是派生类中的 foo(list) 。
	 
	 结合“1多态的概念-解释”来理解！！！！
	 
3.基本语法形式：
	  virtual  返回值类型  函数名（参数列表）；

4.虚函数与基类指针或基类引用配合使用实现动态绑定；
  所谓“基类指针”指的是定义一个指针变量，该指针变量的类型是用户编写的“基类/父类”类型；“基类引用”同理。


使用虚函数的注意事项：
1.只用于定义类的成员函数;

2.在声明虚函数时使用关键字 virtual，定义时无需使用;

3.具有继承性，基类中声明了虚函数，派生类中无论是否说明，同原型函数都自动为虚函数；

4.虽然基类声明了虚函数，它的派生类中该种函数也是虚函数，尽管它们的声明相同，
  但是它们定义时，函数体一般不相同！！

4.虚函数的功能只对类型兼容的继承体系有用；

5.通过指针或者引用访问虚函数才能达到动态绑定的效果；

6.尽量不要把虚函数声明为 inline 函数；（这也说明虚函数与其他非虚成员函数一样，类内类外均可定义）

7.虚函数与纯虚函数区别：
   虚函数一定有定义；（无论是在类内还是类外，一定存在定义）！！！！
   纯虚函数一定没有定义，即纯虚函数只有在“基类/父类”里面的一个声明，不存在定义！！！
   
   
*/
 
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


class Shape {
   public:
   Shape(){
	  cout<<"构造函数被调用了..."<<endl;}
     virtual double getArea();            //同样一个成员函数

}; //基类


class Circle: public Shape {
   private:
     double radius;
	public:
     Circle(double r );
     double getArea();           //同样一个成员函数

}; //派生类1


class Square: public Shape {
   private:
     double length;
	public:
     Square(double len );
     double getArea();          //同样一个成员函数

}; //派生类2


void printArea( Shape & rshape ){
  cout << rshape.getArea() << endl;
}

int main() {
  Circle cc( 2.0 );
  Square sq( 2.5 );
  printArea( cc );   //直接访问了基类的getArea()
  printArea( sq );   //直接访问了基类的getArea()

  return 0;
}

