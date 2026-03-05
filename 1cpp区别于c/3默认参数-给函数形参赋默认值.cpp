#include<iostream>
#include<cstdio>
#include<cstring>
#include<math.h>
using namespace std;
/*在定义一些函数时，函数有的形参参数的值在运算时是不变的，这样就可以在定义函数时，在函数首部给这些形参赋值，即默认参数；*/

/*
默认形参函数的使用规范
1，描述
  函数返回类型  函数名（type v1,type v2,...typei vi=vali,typei+1 vi+1=vali+1,...typen vn=valn;)
  即，不带默认形参的形参要全部放在最左边，带默认形参的必须全部放在最右边。 
2，正确的demo
   float mul(float x=1,float y=3,float z=8);
	 float mul(floatx, float y=3,float z=8);
	
3,错误的demo
   float mul(float x=1,float y=3,float z);
	 float mul(float x=1,float y,float z=6);
	 float mul(float x=1,float y,float z);
	 float mul(float x,float y,float z=3); 

4,声明和定义规范

  对于有默认参数的函数，在函数声明时和函数定义的首部时，只需要在二者中选择一处给形参赋默认值， 
函数声明：float mul(float x=1,float y=3,float z=8);     //如这里在函数声明中给x,y,z赋了默认值， 
	
函数定义：float mul(float x, float y,float z){...}      //则在函数定义时只需写出形参名即可，不能再重复对其赋默认值； 

5,在调用含有默认参数的函数时，在函数名后面的括号中只需填入除去默认形参的实参个数。 
*/


int main()
{
	double volume(double r,double pi=3.14);    //此函数有两个形参，但有一个是默认形参，所以在调用的时候只需给一个实参即可； 
  cout<<"此程序用来计算球体的体积"<<endl;
  cout<<"请输入所求球体的半径r=";
  double r;
  cin>>r;
  cout<<"球体体积为："<<volume(r)<<endl;    //调用时只需一个实参给“半径r”即可； 
  return 0;
}
double volume(double r,double pi)          //由于在函数声明时给默认形参赋了值，在此处只需写出其形参名，不必重复赋值； 
{
   double v;
	 v=4.0/3.0*pi*pow(r,3);
	 return v; 
}
