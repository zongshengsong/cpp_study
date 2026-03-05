#include "Student.h"

/**

		void setName(string n);
		void setId(int i);
		string getName();
		int getId();
void display();
*/

void Student::setName(string n){
	name = n;
}

void Student::setId(int i){
	id = i;
}


string Student::getName(){
	return name;
}

int Student::getId(){
	return id;
}

void display(){
	cout<<"我是一个过客"<<endl;
}
