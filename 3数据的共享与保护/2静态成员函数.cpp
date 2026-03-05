#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Student{
   private:
		string name;
		int id;
	public:
		static string school;
		static int bookNum;
   public:
   	Student(string name="szs",int id=3333);
		~Student();
	//	Student(Student & stu);
		void display();
		static bool borrowBook(int num);
		static bool returnBook(int num);
};

string Student::school="bjfu";
int Student::bookNum=1000;

Student::Student(string name, int id){
	this->name=name;
	this->id=id;
	display();
	cout<<"constructor is called..."<<endl;
}

Student::~Student(){
	cout<<"destructor is called..."<<endl;
}

void Student::display() {
	cout<<Student::school<<'\t'<<name<<'\t'<<endl;
}

bool Student::borrowBook(int num){
	if(num>bookNum){
		cout<<"你要借阅"<<num<<"本书，但当前库存只有"<<bookNum<<"本，借阅失败，呜呜呜。。。"<<endl;
		return false;
	}
	else{
		bookNum-=num;
		cout<<"借阅"<<num<<"本书成功，书本剩余"<<bookNum<<"本。"<<endl;
		return true;
	}
}

bool Student::returnBook(int num){
	bookNum-=num;
	cout<<"还"<<num<<"本书成功，书本剩余" <<bookNum <<"本。"<<endl;
	return true;
}


int main()
{
	cout<<Student::school<<endl;
	cout<<Student::bookNum<<endl;
	cout<<Student::borrowBook(800)<<endl;
	cout<<Student::borrowBook(800)<<endl;
	cout<<Student::returnBook(200)<<endl;
	

	Student stu1;
	Student stu2("szs");
	Student stu3("hlt",1333);
	Student stu4=stu3;

   cout<<stu1.school<<endl;
	cout<<stu2.bookNum<<endl;
	cout<<stu1.borrowBook(5);
	cout<<stu3.returnBook(10);
	stu1.display();
	stu3.display();

   return 0;
}

