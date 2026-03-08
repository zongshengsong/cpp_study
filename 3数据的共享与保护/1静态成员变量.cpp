#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*
静态成员变量：
1，静态成员变量与成员函数一样，是属于“类”的，类和类的对象都可以调用，但是为了区别于非静态成员变量和函数，
  我们都用类来调用静态成员！！！！

*/

class Chinese
{
private:
	string name;
	int age;

public:
	static string home;

public:
	Chinese(string name, int age) : name(name), age(age)
	{
		cout << name << "\t" << age << "\t";
		cout << "constructor is called" << endl;
	}
	~Chinese()
	{
		cout << name << "destructor is called" << endl;
	}
	void display();
};

string Chinese::home = "我们都有一个家，名字叫中国！";

void Chinese::display()
{
	cout << name << '\t' << age << '\t' << Chinese::home << endl;
}

int main()
{
	Chinese p1("宋宗胜", 19);
	Chinese p2("洪乐天", 20);
	cout << p1.home << endl;
	cout << p2.home << endl;
	p1.display();
	p2.display();
	return 0;
}
