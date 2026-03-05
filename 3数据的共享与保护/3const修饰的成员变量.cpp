#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Teacher{
	private:
		string name;
		string id;
		string speciality;
		const string phoneNumber;
	public:
		Teacher():name("“¶—‡"),id("342625"),speciality("ΩÃ È"),phoneNumber("110"){
         cout<<"constructor is called..."<<endl;
		}
		~Teacher(){
			cout<<"destructor is called..."<<endl;
		}
		void get()const;
};

void Teacher::get()const{
	cout<<this->name<<"\t"<<this->id<<"\t"<<this->speciality<<"\t"<<this->phoneNumber<<endl;
}
int main()
{
	Teacher t1;
	t1.get();
   return 0;
}

