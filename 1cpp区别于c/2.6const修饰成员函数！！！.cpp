/*
       四、const修饰类的成员函数


1.       语法格式：
		          声明时：成员函数类型 成员函数名 （形参列表）const;
             或
                定义时：成员函数类型 成员函数名 （形参列表）const
					         {.......}
					         
	  注意，如果在类内声明const类型成员函数，在类外定义时，依然需要在形参列表的括号后面写上“const”！！！
2.const 修饰类成员函数，其目的是防止成员函数修改被调用对象的值。
    即，一旦成员函数加上了const，那么该函数的定义里就不能出现给类的成员变量赋值或修改的语句！！！！
   如果我们不想修改一个调用对象的值，所有的成员函数都应当声明为 const 成员函数。
   如果确实需要改变某些成员变量的值，则参考 ——4.

3.注意：const 关键字不能与 static 关键字同时使用，因为 static 关键字修饰静态成员函数，
     静态成员函数不含有 this 指针，即不能实例化，const 成员函数必须具体到某一实例。

下面的 get_cm()const; 函数用到了 const 成员函数：

实例
#include<iostream>
using namespace std;
class Test
{
public:
    Test(){}
    Test(int _m):_cm(_m){}
    int get_cm()const        //const
    {
       return _cm;
    }

private:
    int _cm;
};


void Cmf(const Test& _tt)
{
    cout<<_tt.get_cm();
}

int main(void)
{
    Test t(8);
    Cmf(t);
    system("pause");
    return 0;
}
如果 get_cm() 去掉 const 修饰，则 Cmf 传递的 const _tt 即使没有改变对象的值，
编译器也认为函数会改变对象的值，所以我们尽量按照要求将所有的不需要改变对象内容的函数都作为 const 成员函数。



4.如果有个成员函数想修改对象中的某一个成员怎么办？这时我们可以使用 mutable 关键字修饰这个成员，
mutable 的意思也是易变的，容易改变的意思，被 mutable 关键字修饰的成员可以处于不断变化中，如下面的例子。

实例
#include<iostream>
using namespace std;
class Test
{
private:
    int _cm;                    //_cm在const修饰的成员函数中不可改变！！！
    mutable int _ct;            //_ct在const修饰的成员函数中可改变  ！！！
public:
    Test(int _m,int _t):_cm(_m),_ct(_t){}
    void Kf()const
    {
        ++_cm; // 错误
        ++_ct; // 正确
    }

};

int main(void)
{
    Test t(8,7);
    return 0;
}
这里我们在 Kf()const 中通过 ++_ct; 修改 _ct 的值，但是通过 ++_cm 修改 _cm 则会报错。
因为 ++_cm 没有用 mutable 修饰。

*/
