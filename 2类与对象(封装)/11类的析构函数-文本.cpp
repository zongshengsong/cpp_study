#include <iostream>
#include <string>
using namespace std;

class CharArr
{
private:
  int n;
  char *p;

public:
  CharArr();
  ~CharArr();
  /* 析构函数： (一个对象调用完他所属类的功能函数后，被释放时调用，即用来析构对象 ）
    1,析构函数构造函数相同，都是类成员函数的一种特殊形式，作用是用来完成资源反初始化，完成资源的释放；
    2,析构函数的声明：类名前加上一个波浪号，“~类名（）；”
    3,析构函数一定是无参函数，不能存在重载析构函数（因为重载函数是通过形参来区分的，析构函数不存在形参）；
    4,析构函数与重载函数相同，如果编者不对其编码，系统自动默认是一个无参函数，且函数体为空函数体，函数体
      内部不执行任何操作；复制构造函数也相同！
    5,当编者自己在编写的时候，可以在这三种函数定义时，在它们的函数体内编写执行语句，让其执行相关操作；

    6,析构函数的清除顺序是按照“栈”的存储形式来清除的，即先存储的后清除，后存储的先清除；
         这里“先储存”即指在主函数里先构造（定义）的对象后析构（销毁），后构造的先析构。

    7,析构函数的调用：析构函数在执行类的一系列操作后 ，会被系统自动调用，不需要编者编写，且析构函数的
    调用永远作为该类操作的最后一步，对你所定义的类的对象一一清除；

    8，定义析构函数的语法格式：
      类名：：~析构函数()
          {
            函数体
          }
    9，析构函数不能写返回值；

  */
  void setChar(int index, char newChar);
  char getChar(int index);
};

void CharArr::setChar(int index, char newChar)
{
  if (index > -1 || index < n)
    p[index] = newChar;
  else
    cout << "index out of array boundary..." << endl;
}

char CharArr::getChar(int index)
{
  return p[index];
}

CharArr::~CharArr()
{
  delete[] p;
  cout << "data swept over..." << endl;
}

CharArr::CharArr()
{
  cout << "please input the char number:" << endl;
  cin >> n;
  p = new char[n];
  cout << "please input " << n << " chars, seperated by blankspace:" << endl;
  int i = 0;
  for (i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  cout << "loaded finish..." << endl;
  for (i = 0; i < n; i++)
    cout << p[i] << '\t';
  cout << endl;
}

int main()
{
  CharArr ca;
  cout << ca.getChar(2) << endl;
  ca.setChar(2, 'A');
  cout << ca.getChar(2) << endl;

  return 0;
}
