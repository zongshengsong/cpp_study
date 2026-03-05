#include <iostream>

using namespace std;

class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};

// 成员函数定义
void Box::setWidth( double wid )
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数 ,他就是一个普通函数，定义也与普通函数一样 ！！
void printWidth( Box box )    //括号里或者为 Box & box  又或者为 Box *box    但此时调用类对象成员的方法也不同
{
   /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
   cout << "Width of box : " << box.width <<endl;
}

// 程序的主函数
int main( )
{
   Box box;

   // 使用成员函数设置宽度
   box.setWidth(10.0);

   // 使用友元函数输出宽度
   printWidth( box );

   return 0;
}
/*   !!!!!!!!!!!!!!!!!!!!
友元函数的使用:

因为友元函数没有this指针，则参数要有三种情况：

要访问非static成员时，需要对象做参数(函数形参)；

要访问static成员或全局变量时，则不需要对象做参数；

如果做参数的对象是全局对象，则不需要对象做参数.

可以直接调用友元函数，不需要通过对象或指针

实例代码：

class INTEGER
{
    friend void Print(const INTEGER& obj);//声明友元函数
};

void Print(const INTEGER& obj）
{
    //函数体
}

void main()
{
    INTEGER obj;
    Print(obj);//直接调用
}
