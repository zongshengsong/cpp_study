#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Clock{
	public:
		int hour;
		int minute;
		int second;
		
	public:
		void setTime(int h,int m,int s){
			hour=h;
			minute=m;
			second=s;
		}
		void setTime(int h,int m);
		void setTime(int m);
		void showTime();
		void display(int y=2022,int m=3,int d=24);
};

void Clock::display(int y,int m,int d){
	cout<<"今天是"<<y<<"年"<<m<<"月"<<d<<"日"<<endl;
}

void Clock::showTime(){
	cout<<hour<<':'<<minute<<':'<<second<<endl;
}

void Clock::setTime(int h,int m){
	hour=h;
	minute=m;
}

void Clock::setTime(int m){
	minute=m;
}

int main()
{
	Clock myClock;
	myClock.showTime();
  myClock.display();
  cout<<"-----------------\n";
  cout<<myClock.hour<<':'<<myClock.minute<<':'<<myClock.second<<endl;
  myClock.setTime(16,30,46);
  myClock.display();
  return 0;
}

