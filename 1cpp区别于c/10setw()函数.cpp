#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip> // 添加这个头文件
using namespace std;

/*
1.setw()函数用来设置输出字符(串）位宽的

2.setw（）必须包含在头文件       #include <iomanip>
                                 using std::setw;
                        里面！！

2.setw(n)的位宽只对它后面输出的东西有效！！

3. 举例:假如你输出两句话,cout<<"hello"<<setw(5)<<"你好"<<endl;
指的是 “你好”二字输出位宽占5位，而“你好”二字本身占两位，所以他们前面有三个空格。

4.例如:cout<<"123"<<setw(3)<<"45678"<<endl;
      因为“45678”位宽超过了3位，所以会全部输出，且没有空格！！
*/
int main()
{
      string str1 = "123", str2 = "8956";
      cout << str1 << setw(8) << str2 << endl;
      return 0;
}
