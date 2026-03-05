#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	const int a=3;      //const修饰的变量称为“常变量”，即具有常属型的变量 ，实质是变量，但是不能在对其赋值；
  cout<<a<<endl;   
	
	                 
//	const int b;				//而且，如果在用const修饰变量的时候，如果没有对其赋值，则后来也不能对其复值； 
//	b=7; 
//	cout<<b; 

  const float c=9;     //注意，const修饰后，变量的类型变为const float类型；在将它的指针（地址）赋给指针变量的时候，
  const float * d=&c;   //指针变量的类型也要为const float 类型； 
  float * e= (float *)&c; //或者用强制转换运算将其转换成指针变量的类型（注意，指针变量的类型包括“*”号）； 
  cout<<d<<'\t'<<e;     //const 修饰的变量也有地址； 
  
  
  int h=9;
	int * j=&h;
	cout<<endl<<j;
	
	
	int g;
	int * l=&g;
	cout<<endl<<l;
	 
  return 0;
}

