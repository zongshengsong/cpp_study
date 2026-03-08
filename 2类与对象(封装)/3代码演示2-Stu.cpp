#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Student
{
public:
	string name;
	int age;
	string favor1, favor2;

public:
	void setName(string n);
	void setAge(int m);
	void setFavor(string o, string p, string q = "rap", string r = "篮球");
	string showName();
	int showAge();
};

void Student::setName(string n)
{
	name = n;
}

void Student::setAge(int m)
{
	age = m;
}

void Student::setFavor(string o, string p, string q, string r)
{
	cout << "我喜欢" << o << "、" << p << "、" << q << "和" << r << endl;
}

string Student::showName()
{

	return this->name; // 或者return name;           //这里返回的name是类的成员变量，由于在主函数调用setName函数时，给了
					   // 实参“宋宗胜”，即name=n=宋宗胜，所以在以后使用name这一成员变量时，都是“宋宗胜”；
}

int Student::showAge()
{

	return age;
}

int main()
{
	Student szs;
	szs.setName("宋宗胜");
	cout << szs.showName() << endl;
	szs.setAge(19);
	cout << szs.showAge() << endl;
	szs.setFavor("唱", "跳");
	return 0;
}
