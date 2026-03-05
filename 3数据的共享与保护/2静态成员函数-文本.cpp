/*
    < C++类的静态成员函数 >
1.如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。

2.静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。

3.静态成员函数有一个类范围，他们不能访问类的 this 指针。

  特别注意1：当静态成员函数调用静态成员变量时，只能直接调用，或通过类名来调用，不能在其名字前面加this->!!!!

  如：
            static int booknum;
				......
            void Student::borrowbook(int n){
             	this->booknum-=n;                     // 错误！！静态成员变量不能通过this指针调用！！
																	//应该改为  booknum-=n; 或 Student：：booknum-=n;
            	cout<<"借走了"<<n<<"本书..."<<endl;
            }
            
   特别注意2：当在静态成员函数中想调用类的非静态成员变量时，可以通过基类指针/基类引用
	           作静态成员函数的形参来实现！！！

   如：
				private:
					string name; int age;
					.......
				static void Student::display(Student * stu){
            	cout<<"姓名："<<stu->name<<"  年龄："<<stu->age<<endl;
	            cout<<"学校："<<Student::school<<"  学校存书数量："<<Student::booknum<<endl;
            }
            
     或
				static void Student::display(Student & student){
	            cout<<"姓名："<<student.name<<"  年龄："<<student.age<<endl;
	            cout<<"学校："<<Student::school<<"  学校存书数量："<<Student::booknum<<endl;
            }


4.静态成员函数与普通成员函数的区别：
     静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
     普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。

5.静态成员函数与普通成员函数的混同：
     二者都既可以在类内定义，也可以只在类内声明，而在类外定义！！！！

6.总之，静态成员变量与静态成员函数一样，都不在属于类的对象，而是直接属于用户定义的类。
   所以，调用静态成员时，既可以通过对象来调用（格式为：对象名.静态成员），也可以直接通过类来调用
	 （格式为：类名：：静态成员）。
   但是为了区别于普通成员函数与成员变量，静态成员还是通过类来直接调用！！！！
   
   普通成员（变量、函数）都是属于类的对象的，即必须在该类的类型下创建一个对象，通过对象来调用！！！！
   


下面的实例有助于更好地理解静态成员函数的概念：  */

#include <iostream>

using namespace std;

class Box
{
   public:
      static int objectCount;
      
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      
      double Volume()
      {
         return length * breadth * height;
      }
      
      static int getCount()             //直接在类内定义静态成员变量！！
      {
         return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};

// 初始化类 Box 的静态成员
int Box::objectCount = 0;

int main(void)
{

   // 在创建对象之前输出对象的总数
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2

   // 在创建对象之后输出对象的总数
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}
