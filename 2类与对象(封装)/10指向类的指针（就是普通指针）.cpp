/*
   < C++ 指向类的指针 >

1.一个指向 C++ 类的指针与指向结构的指针类似，访问指向类的指针的成员，需要使用成员访问运算符 ->，
就像访问指向结构的指针一样。与所有的指针一样，您必须在使用指针之前，对指针进行初始化。

2.所谓指向类的指针，其实与C语言里的普通指针一样，定义形式都是：
          指针变量类型  * 指针变量名;
   唯一特殊的在于这里的指针变量类型是用户自己定义的类类型！！
   
3.由此，也可类推出“引用变量”，分为普通引用变量和类引用变量；定义形式都是：
          引用变量类型 & 引用变量名;


下面的实例有助于更好地理解指向类的指针的概念： */

#include <iostream>

using namespace std;

class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   
   
   Box *ptrBox;                // Declare pointer to a class.     !!!!!!!!!!!!    与普通指针变量的定义相同

   // 保存第一个对象的地址
   ptrBox = &Box1;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;

   // 保存第二个对象的地址
   ptrBox = &Box2;

   // 现在尝试使用成员访问运算符来访问成员
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;

   return 0;
}
