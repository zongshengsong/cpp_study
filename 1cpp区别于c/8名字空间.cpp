#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

/*名字空间namespace：
1,一种作用域的划分，通常用于区分项目中模块或组件；
2，关键字namespace，可以分开使用，即在不同文件中使用；
3，名字空间可以嵌套；
4，名字空间可以取别名；
5，名字空间里也可以定义函数；
6，调用不同名字空间里的变量或函数，需要用名字空间的名字加“四饼连字符”——“：：”;

名字空间的引用：
 1，直接引用：名字空间名+：：+引用的内容；（推荐）
 2，声明名字空间：using namespace szs; 则在该语句下所有与szs名字空间里的变量名相同的变量都指的是szs里的变量；
 3，声明只使用名字空间里的部分变量或函数：using szs::引用的内容；
 1*/
 
namespace szs{
	int nage=19;
	namespace scb{
		int nheight=173;       //嵌套
	}
}

namespace n=szs;         //取别名,指的是将整个szs名字空间给n
namespace m=szs::scb;     //指的是将szs里的scb名字空间给m

namespace f{
	void fun(){
		cout<<"名字空间还可以定义函数。"<<endl;
	}
}

int e=200;       //这里我定义一个全局变量e;

namespace d{
	int e=100;
	void pilot(){
	e=120;          //在一个名字空间域里定义的函数，它调用的变量优先在该空间域里找
	cout<<::e<<endl; //如果想在一个名字空间域里，调用全局变量中，一个与该空间域内相同
	                 //名字的变量，直接用“四饼连字符”加全局变量名即可；如这里的：：e代表的是全局变量e=200;

	}
}



int main()
{
	szs::nage=20;      //给szs名字空间里的变量nage赋新值    等于n::nage=20;
	cout<<szs::nage<<endl;
	
	szs::scb::nheight=186;   //给szs里嵌套的scb名字空间里的变量nheight赋新值   等于m::nheight=186;
   cout<<m::nheight<<endl;
   
   f::fun();
   
   d::pilot();
   return 0;
}

