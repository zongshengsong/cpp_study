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
	    Holiday(int, int, bool, string);
		 Holiday(int, int, bool);
		 Holiday(int, int);
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
	Holiday h0;
	Holiday h1(1);
	Holiday h2(1,5);
	Holiday h3(1,5,false);
	Holiday h4(1,5,false,"watching movies");
   return 0;
}

