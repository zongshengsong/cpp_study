/*
1，类与对象：
   类是抽象和概括的；
   对象是具体
   类是对象的模板，对象是类的实体。一个类包括许多对象；如狗“类”，包括许多个体狗。

2，类的特征：行为（功能）抽象、属性（状态）抽象；
	在定义类时，属性状态用定义变量的形式，行为功能用定义函数的形式！！
	如： 创建一个Clock类
	 class Clock
	 {
				//属性：
		  int hour,minute,second;

		//行为、方法：
		  void setTime( int newH, int newM, int newS);
		  void showTime();
	  }；
				  一般大括号后面是不能加分号“；”的，但是定义“类”时，大括号后面必须加上分号！！

3，类的定义（语法格式）：
	 class 类名
	 {
	   成员访问限定符：  (分为关键字private, 即私有类型成员和public，即公有类型成员,以及protected用来保护成员。)
		   数据成员/成员变量；（成员变量的类型可以为c中所学的任何类型）


	   成员访问限定符：
		   成员函数；   （成员函数的定义有两种方法，一是直接在类内定义函数；另一是在类内声明函数，
									而在类外定义该函数，在类外定义函数时，一定要在函数名和函数类型中间加上
													类名和两个冒号！！）
		 }  ；


4, 类的成员变量与成员函数之间的关系：  ！！！
		 成员函数可以直接调用成员变量名,且当在主函数中调用含参成员函数并给出实参时，实参赋给了形参，
		 如果此时在成员函数中，将形参赋给一个成员变量时，则该成员变量就等于所赋的那个值，即那个实参值！！

5，类（对象）的使用：
	在主函数中调用类内的成员变量和成员函数时，必须先在该类名下定义一个对象名，然后调用的时候
		以“对象名+.+调用对象部分”

*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Student
{
public:
	string name;
	int age;
	float height;
	float weight;
	float vitalCapacity;

public: // 该行可以不写，因为数据成员和成员函数的类型一样时，可写在一起，这里的写法只是更为清晰明了；
	void study()
	{ // 在类内定义函数，即默认该函数为inline函数；
		cout << "good good study, day day up!" << endl;
	}

	void makeFriend(); // 在类内声明函数，而在类外定义函数，并不默认该函数为inline函数；
	/*且在类外定义该函数时,需要在该函数名和函数类型之间加上该函数所属类的类名和“：：”！！
	   表示该函数属于此“类”;也可在函数首部前加上“inline”使其成为inline函数；
					  */
	float goShopping();
	void volunteer(string name);
};

void Student::makeFriend()
{
	cout << "海内存知己，天涯若比邻！" << endl;
}

int main()
{
	Student szs; // 一定要在类名下面定义一个或多个对象名，且在后续调用类内成员（变量和函数）时一定要加上对象名和点号“.”!!
	szs.study(); // 切不可写成cout<<szs.study<<endl; 因为study函数是空函数，无返回值！！
	szs.makeFriend();
	return 0;
}

/*
1，void 类型的函数在调用的时候，直接调用，不能用cout<<或printf("");形式，只能直接调用！！
2，无参函数调用时也需要写括号！！
3，在调用函数时，只有当该函数有返回值时，才能用"cout"或"printf"的形式调用输出，
因为当用“输出”形式输出函数时，实际上输出的是函数的返回值，如果该函数没有，则会输出乱码；
所以，void型函数和其他型函数但无“return语句”的函数都不能用“cout”和“printf”调用(但凡涉及到需要函数的返回值的方式都不能调用)，只能直接调用！！*/
