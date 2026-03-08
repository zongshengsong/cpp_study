/*
      三、const 修饰函数形参可以分为三种情况。根据函数形参类型来分的。


A：const 修饰用普通变量做的形参，
      用来进行值传递的形参 ，一般这种情况不需要 const 修饰，因为函数会自动产生临时变量复制实参值。
      所谓普通的类型变量做形参就是 值传递形参
实例
         #include<iostream>
         using namespace std;
         void Cpf(const int a)    //const 修饰值传递形参
         {
          cout<<a;
          // ++a;  是错误的，a 不能被改变
          }

         int main(void)
         {
            Cpf(8);
            system("pause");
            return 0;
         }


B：当 const 修饰引用指针变量做的形参，可以防止指针被意外篡改。
   //这种情况下,一般用“const修饰指针”三种类型里的“右定向”！！

实例
#include<iostream>

using namespace std;

void Cpf(int *const a)    //const修饰指针变量  。“右定向”型
{
    cout<<*a<<" ";
    *a = 9;
}

int main(void)
{
    int a = 8;
    Cpf(&a);
    cout<<a; // a 为 9
    system("pause");
    return 0;
}


C： const修饰用应用变量作的形参
   自定义类型的参数传递，需要临时对象复制参数，对于临时对象的构造，需要调用构造函数，比较浪费时间，
   因此我们采取 const 外加引用传递的方法。

并且对于一般的 int、double 等内置类型，我们不采用引用的传递方式。

实例
#include<iostream>

using namespace std;

class Test
{
public:
    Test(){}
    Test(int _m):_cm(_m){}
    int get_cm()const
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

*/