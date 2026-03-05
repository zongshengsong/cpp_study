#include<iostream>
#include<string>
using namespace std;

class Student{
 private:
  string name;
  int id;
 public:
  Student(){                         //无参的构造函数
   cout<<"无参构造函数"<<endl;
  }

  Student(string name){                //有参的构造函数
   this->name = name;
   cout<<"name constructor\t"<<name<<endl;
  }

  Student(int id){
   this->id = id;
   cout<<"id constructor\t"<<id<<endl;
  }

  Student(string name, int id){
   this->name = name;
   this->id = id;
   cout<<"name & id constructor\t"<<name<<'\t'<<id<<endl;
  }
};

int main(){
 cout<<"---------"<<endl;
 Student s0;    //这里表面上给student类定义一个s0对象，实际上，在定义对象时，其实就是在调用类的构造函数；
 cout<<"---------"<<endl;
 Student sn1("宋宗胜");
 cout<<"---------"<<endl;
 Student si1(123456);
 cout<<"---------"<<endl;
 Student s2("洪乐天",987654);
 cout<<"---------"<<endl;
 return 0;
}
