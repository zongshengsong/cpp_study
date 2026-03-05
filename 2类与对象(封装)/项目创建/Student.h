#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name;
		int id;
	public:
		void setName(string n);
		void setId(int i);
		string getName();
		int getId();
};

void display();
