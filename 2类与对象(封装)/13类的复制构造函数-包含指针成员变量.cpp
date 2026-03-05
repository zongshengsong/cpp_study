#include<iostream>
#include<string>
using namespace std;

class CharArr{
 private:
  int n;
  char * p;
 public:
  CharArr();
  ~CharArr();
  void setChar(int index, char newChar);
  char getChar(int index);
  CharArr(CharArr & c);
};



CharArr::CharArr(CharArr & c){
	
//系统默认的复制构造函数的代码 ,即浅复制 ;浅复制的代码如下：

// this->n = c.n;     把已有的对象的数据成员n赋给刚定义的对象的数据成员this->n

// this->p = c.p;     同理



//用户自己编写的复制构造函数的代码，即深复制 ；
 this->n = c.n;
   //深复制主要是对成员变量在复制拷贝的时候，重新写一个复制代码，为其重新开辟一个空间；
	//以免在析构的时候 ，造成二次析构同一对象内存（内容 ）而产生错误；
 this->p = new char[this->n];//或者 char *p=new char[this->n];  后者尽量不要用，有错误 ！！？？
 int i = 0;
 for(i=0;i<this->n;i++)
  this->p[i] = c.p[i];
 cout<<"deep copy constructor is finished..."<<endl;
}

void CharArr::setChar(int index, char newChar){
 if(index>-1 || index<n)
  p[index] = newChar;
 else
  cout<<"index out of array boundary..."<<endl;
}

char CharArr::getChar(int index){
 return p[index];
}

CharArr::~CharArr(){
 delete []p;
 cout<<"data swept over..."<<endl;
}


CharArr::CharArr(){
 cout<<"please input the char number:"<<endl;
 cin>>n;
 p = new char[n];
 cout<<"please input "<<n<<" chars, seperated by blankspace:" <<endl;
 int i=0;
 for(i=0;i<n;i++){
  cin>>p[i];
 }
 cout<<"loaded finish..."<<endl;
 for(i=0;i<n;i++)
  cout<<p[i]<<'\t';
 cout<<endl;
}


int main(){
 CharArr ca;
 cout<<ca.getChar(2)<<endl;
 ca.setChar(2,'A');
 cout<<ca.getChar(2)<<endl;

 CharArr ca2 = ca;

 return 0;
}
