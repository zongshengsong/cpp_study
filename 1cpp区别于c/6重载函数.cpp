#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*
A,重载函数:C++中允许出现同名函数；


B,函数重载的条件：（函数要素：函数名，函数类型（即返回值类型），函数参数，函数的调用约定）
1，函数名必须相同，函数类型相不相同无所谓；
2，函数a,参数个数不同，如：
      int volume (float a,float b);
      int volume (float a);
    或b,参数个数相同但参数类型不同，如：
      int volume (float a,float b);
      int volume (float a, int b);
    或c,参数个数和类型都相同，但顺序不同，如：
      int volume (float a, int b);
      int volume (int a, float b);
3,作用域必须相同，即这些同名函数都在同一个头文件中才称为重载函数，否则虽然同名但不称为重载函数；
4，重载函数函数名不能与头文件名相同；


C,重载函数的调用规则：
1，根据函数名找对应的函数，作为候选函数。
  1.1如果候选函数的函数个数为0，则报未定义错误（找不到标识符）；
2，如果候选函数个数>0,从候选中找匹配的函数（完全匹配，可以转换的匹配（char<->int ;float<->double float)
  2.1如果匹配的函数个数==0 ，则错误（隐式转换失败）；
  2.2如果匹配个数>0,找最佳匹配。
3，最佳匹配的个数=1，就会调用此函数，
   最佳匹配的个数>1,就会报二义性；
*/

int getmax(int a, float b)
{
  return (a > b ? a : b);
}

int getmax(float a, int b)
{
  return (a > b ? a : b);
}

char *getmax(char *a, char *b)
{
  return (a > b ? a : b);
}

int main()
{
  char *p = 0;
  char *q = 0;
  char *n = getmax(p, q);

  cout << getmax(1, 3.9);
  return 0;
}
