#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Holiday{
	private:
		int startDay;
		int length;
		bool isBuke;
		string plan;
	public:
		Holiday(int startDay=3,int length=3,bool isBuke=true,string plan="climbing");
		/*
	    Holiday(int, int, bool, string);     对于有默认形参的函数，调用的时候可
		 Holiday(int, int, bool);             以接着在函数名后面的括号里填入实参，
		 Holiday(int, int);                   这样的话，会以实参代替原来的默认形参去进行运算；
		 Holiday();
	  */

};

Holiday::Holiday(int startDay,int length,bool isBuke,string plan){
	this->startDay = startDay;
	this->length = length;
	this->isBuke = isBuke;
	this->plan = plan;
	cout<<this->startDay<<'\t'<<this->length<<'\t'<<this->isBuke<<'\t'<<this->plan<<endl;
}


int main()
{
	Holiday h0; //等于Holiday h0();
	Holiday h1(1);           //用实参“1”代替原来第一个默认形参“3”；
	Holiday h2(1,5);         //用实参“1”，“5”代替原来第一二个默认形参“3”，“3”；依此类推。。。
	Holiday h3(1,5,false);
	Holiday h4(1,5,false,"watching movies");
   return 0;
}

