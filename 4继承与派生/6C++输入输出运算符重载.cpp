/*
     <  C++ 输入/输出运算符重载  >
     
1.C++ 能够使用流提取运算符 >> 和流插入运算符 << 来输入和输出内置的数据类型。
    您可以重载流提取运算符和流插入运算符来操作对象等用户自定义的数据类型。

2.在这里，有一点很重要，我们需要把运算符重载函数声明为类的友元函数，这样我们就能不用创建对象而直接调用函数。
	习惯上人们是使用 cin>> 和 cout<< 的，要想这样的话就必须使用友元函数来重载运算符；
	如果使用成员函数来重载会出现 d1<<cout; 这种不自然的代码。（这里的“d1”是一个类的对象）

下面的实例演示了如何重载提取运算符 >> 和插入运算符 <<。       */


#include <iostream>
using namespace std;

class Distance
{
   private:
      int feet;             // 0 到无穷
      int inches;           // 0 到 12
   public:
      // 所需的构造函数
      Distance(){
         feet = 0;
         inches = 0;
      }
      
      Distance(int f, int i){
         feet = f;
         inches = i;
      }
      
      
      friend ostream &operator<<( ostream &output, const Distance &D )  //注意输出运算符重载（函数）的写法
      {
         output << "F : " << D.feet << " I : " << D.inches;
         return output;
      }

      friend istream &operator>>( istream  &input, Distance &D )    //注意输入运算符重载（函数）的写法
      {
         input >> D.feet >> D.inches;
         return input;
      }
};
int main()
{
   Distance D1(11, 10), D2(5, 11), D3;

   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;


   return 0;
}
