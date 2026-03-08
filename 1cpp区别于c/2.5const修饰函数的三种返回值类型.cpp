/*
   const 修饰函数的返回值类型。

   Const 修饰返回值分三种情况。主要是根据函数返回值类型分的。

A：const 修饰内置类型的返回值，修饰与不修饰返回值作用一样。
		  //所谓“内置类型”即C++里面本身提供的一些变量类型，如 int ,char ,double...
实例
#include<iostream>

using namespace std;

const int Cmf()            //此时用不用const都一样
{
    return 1;
}

int Cpf()
{
    return 0;
}

int main(void)
{
    int _m = Cmf();
    int _n = Cpf();

    cout<<_m<<" "<<_n;
    system("pause");
    return 0;
}
B: const 修饰自定义类型的作为返回值，此时返回的值不能作为左值使用，既不能被赋值，也不能被修改。
		  //“自定义类型”即用户自己编写的类（class）类型。
		  
C: const 修饰返回的指针或者引用，是否返回一个指向 const 的指针，取决于我们想让用户干什么。
		//函数也可以用引用和指针修饰哦。
        即:
           普通变量          普通函数
           指针变量          指针函数
           引用变量          引用函数

*/