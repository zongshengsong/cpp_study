/*
   < C++ 类的静态成员变量 >

1.我们可以使用 static 关键字来把类成员定义为静态的。当我们声明类的成员为静态时，
这意味着无论创建多少个类的对象，静态成员都只有一个副本。

2.静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，
所有的静态数据都会被初始化为零。

3.我们不能把静态成员的初始化放置在类的定义中，
  但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化。
  即：静态成员变量只能类的外部初始化；       ！！！！！！
        注意：静态成员函数与非静态成员函数均可在类内或类外定义。！！！！！

4.静态成员变量的访问类型应该是public，只有这样才能在主函数中通过类直接调用他们；

5.静态成员变量不能通过this指针来调用，但是普通成员变量可以！！！

6.静态成员函数只能访问静态成员变量、静态成员函数和类外部的其它函数；
  特别注意：当静态成员函数调用静态成员变量时，只能直接调用，或通过类名来调用，不能在其名字前面加this->!!!!
  
  如：
            static int booknum;
				......
            void Student::borrowbook(int n){
             	this->booknum-=n;                     // 错误！！静态成员变量不能通过this指针调用！！
																	//应该改为  booknum-=n; 或 Student：：booknum-=n;
            	cout<<"借走了"<<n<<"本书..."<<endl;
            }

下面的实例有助于更好地理解静态成员数据的概念：   */

#include <iostream>

using namespace std;

class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};

// 初始化类 Box 的静态成员
int Box::objectCount = 0;          //当用静态成员变量来“计数”时，其功能与C语言中的静态变量功能相同，
                                       //在整个程序结束后才会“失效”。

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2

   // 输出对象的总数
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}
