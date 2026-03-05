#include<iostream>
#include<string>
using namespace std;

/*一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
定义一个派生类，我们使用一个类派生列表来指定基类。类派生列表以一个或多个基类命名，形式如下：
		 class derived-class: access-specifier base-class
其中，访问修饰符 access-specifier 是 public、protected 或 private 其中的一个，base-class 是
之前定义过的某个类的名称。如果未使用访问修饰符 access-specifier，则默认为 private。*/


class Company{                       //基类或父类
 private:
  string name;
  double property;
 public:
  void produce(){
   cout<<"开工啦！"<<endl;
  }

  double sail(){
   cout<<"卖钱啦"<<endl;
   return 6.3;
  }
};


//构造函数、复制构造函数和析构函数;基类的重载运算符;基类的友元函数是不能继承的；

class HighTechCompany: public Company{       //派生类或子类
 /**
  不可访问:
  string name;
  double property;
 public:
  void produce(){
   cout<<"开工啦！"<<endl;
  }

  double sail(){
   cout<<"卖钱啦"<<endl;
   return 6.3;
  }
 */
 public:
 void operate(){
 	int i=0;
 	for(i;i<10;i++){
 		produce();
 		cout<<sail()<<endl;
	 }
 }

};

int main(){
 HighTechCompany MI;
 MI.produce();
 cout<<MI.sail()<<endl;
 cout<<endl<<endl;
 MI.operate();
 return 0;
}

/*当在继承类的构造函数参数列表后面不给基类构造函数“初始化”的时候，
（如果基类有有参构造函数的话）一定要在基类中由用户编写出一个无参的基类构造函数  ！！！！！！！！！！1
*/

/*继承类型
当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的。

我们几乎不使用 protected 或 private 继承，通常使用 public 继承。当使用不同类型的继承时，遵循以下几个规则：

公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。
*/
