#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char *p="hello world!";
	cout<<p[0]<<endl;   //等于cout<<*（p+0);    读取出字符串的首字母； 
	
	p="bitch!";        //可以对存放字符串的指针整体赋值 ,即对指针变量本身赋值； 
  cout<<p[0];
  p="8";
	cout<<endl<<*p<<endl; 
	
  //p[0]='a';        //但不能对存放字符串的指针指向的字符串中的某一个值赋值；即不能对指针变量内容赋值； 
  //cout<<*(p+1);     //赋值之后也不显示赋值结果；且不会报错； 
 
 /*正因对指针 内容赋值后不会报错，但后续代码无法运行，所以不便于检查； 
 故可以用const对指针变量修饰，这样依旧可以对指针本身赋值，但依旧不能对指针内容赋值，
 且此时系统会报错，便于编者发现查询； */
	
	const char * q="hello world!";     //const type * p等同于type const * 
	char const * q1="bitch!";
 //q[0]='a';                      //此时再对指针变量内容赋值是，系统会报错且自动跳到该行； 
 // q1[0]='a';
 q="12345";                       //但依旧可以对指针变量本身赋值； 
 cout<<q[0]<<endl;
  
  
  char * const g="qwerrt!";     //type * const p;
	cout<<g[0]<<endl; 
//	g[0]='s';                     //指针变量的内容可以改变 ，（这里是对指针变量的首元素改变，但实际不是首元素的替换； 
	cout<<g[0]<<endl;            
//	g="shdgynw!";               //指针变量本身不能改变 



  const char * const f="bitch!";   //const type * const f=type const * const f    此时指针变量的内容和本身都不能改变； 
	cout<<f[0]<<endl;
//	f[0]='q';
	cout<<f[0]<<endl;
//	f="asdwqe!";
	cout<<f[0]<<endl; 

  return 0;
}


