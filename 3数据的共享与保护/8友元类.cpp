1include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*友元类
一个类 A 可以将另一个类 B 声明为自己的友元，类 B 的所有成员函数就都可以访问类 A 对象的"私有成员"。在类定义中声明友元类的写法如
下：
friend  class  类名;
来看如下例程：
1. class CCar
2. {
3. private:
4. int price;
5. friend class CDriver; //声明 CDriver 为友元类
6. };

7. class CDriver
8. {
9. public:
10. CCar myCar;
11. void ModifyCar() //改装汽车
12. {
13. myCar.price += 1000; //因CDriver是CCar的友元类，故此处可以访问其私有成员
14. }
15. };

16. int main()
17. {
18. return 0;
19. }
第 5 行将 CDriver 声明为 CCar 的友元类。这条语句本来就是在声明 CDriver 是一个类，所以 CCar 类定义前面
就不用声明 CDriver 类了。
第 5 行使得 CDriver 类的所有成员函数都能访问 CCar 对象的私有成员。如果没有第 5 行，第 13 行对 myCar 私有成员 price 的访问就会导
致编译错误
*/

/*值得注意的是，当在友元类里定义一个存在该友元类的类对象时，依旧符合用户定义类的类对象定义规则，
即得符合类的构造函数类型！！！
    如class point{
	  public:
	     point(int n){}
		  friend class line;
		  }；
		  
		class line{
		  public:
			 point p1;      //错误，因为point类的构造函数是有一个整形形参的函数，所以这里应该定义为：point p1 (2 ) ;

	};
