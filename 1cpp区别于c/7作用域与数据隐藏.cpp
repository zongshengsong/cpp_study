#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*c++里面的作用域：
  1，全局作用域  名字空间域（namespace）
  2，局部作用域  块作用域
  3，类域（class）
  
  数据隐藏：
  1，不同作用域里可以定义多个相同名字的变量；
  2，内部的变量会隐藏外部的变量 （变量的查找是从内->外查找，
  找不到就报错，这个块里的变量不会进入另一个块里找与该变量名相同的变量值）；
  */


int n=9;
int main()
{
   cout<<"global n="<<n<<endl;
   int n=7;
   cout<<"main n="<<n<<endl;
   {
   	int n=4;
   	cout<<"block n="<<n<<endl;     //block代表“块”，即块作用域；
	}
   return 0;
}

