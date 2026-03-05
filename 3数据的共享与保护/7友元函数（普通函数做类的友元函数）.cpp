#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Rectangle{
	private:
		double x,y,z;
	public:
		Rectangle(double len=3,double wid=4,double hig=5);
		~Rectangle();
		double show();
		friend double getArea(Rectangle & rec);
};

Rectangle::Rectangle(double len,double wid,double hig){
	cout<<"constructor is called..."<<endl;
	this->x=len;this->y=wid;this->z=hig;
}

Rectangle::~Rectangle(){
	cout<<"destructor is called..."<<endl;
}

double Rectangle::show(){
	cout<<"长："<<this->x<<"\t宽："<<this->y<<"\t高："<<this->z<<endl;
}

double getArea(Rectangle & rec){       //友元函数就是个普通函数，定义也与普通函数相同，不能按成员函数的形式定义！！
	double area;
	return area=rec.x*rec.y*rec.z;
}

int main()
{
   Rectangle rec1;
	rec1.show();
	cout<<getArea(rec1)<<endl;
	  //友元函数不属于“成员函数”，它的调用依旧以普通函数调用的形式，不需要通过对象来调用！！
	Rectangle rec2(4);
	rec2.show();
	cout<<getArea(rec2)<<endl;
	Rectangle rec3(4,5);
	rec3.show();
   cout<<getArea(rec3)<<endl;
   return 0;
}

