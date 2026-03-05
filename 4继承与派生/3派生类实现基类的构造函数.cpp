#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*
为什么子类的构造函数中会出现在初始化列表中呢？原因在于子类能够从基类集成的内容限制上。

我们知道，一个派生类继承了所有的基类方法，但下列情况除外：

1基类的构造函数、析构函数和拷贝构造函数。
2基类的重载运算符。
3基类的友元函数。
因此，我们不能够在子类的成员函数体中调用基类的构造函数来为成员变量进行初始化。例如这样子是不可以的：

#include <iostream>

using namespace std;

// 基类
class Shape
{
   public:
      Shape(int w,int h)
      {
        width=w;
        height=h;
      }
   protected:
      int width;
      int height;
};

// 派生类
class Rectangle: public Shape
{
   public:
      Rectangle(int a,int b)
      {
        Shape(a,b);               //错误！！！
      }

};
*/

//但我们可以把基类的构造函数放在子类构造函数的初始化列表上，以此实现调用基类的构造函数来为子类从基类继承的成员变量初始化。

#include <iostream>

using namespace std;

// 基类
class Shape
{
   public:
      Shape(int w,int h)
      {
        width=w;
        height=h;
      }
   protected:
      int width;
      int height;
};

// 派生类
class Rectangle: public Shape
{
   public:
      Rectangle(int a,int b):Shape(a,b){       //初始化成员列表

      }
};

