#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
  string str1 = "醉后不知天在水";
  string str2 = "满船清梦压星河";
  string str3;
  cout << "根据上联对出下联：" << endl;
  cout << "上联：" << str1 << endl;
  cout << "下联：";
  cin >> str3;
  if (str2 == str3) //
    cout << "恭喜你，答对啦！" << endl;
  else
    cout << "很可惜，答错了..." << endl;
  return 0;
}

/*
C++中字符串分两种,一种是C语言的字符串（用字符数组来存储字符串）,一种是string字符串。

1,比较大小的方法不同
C语言字符串是不可以直接比较大小的,string是可以直接比较大小的。
具体细节: C语言的字符串的实质是一个字符数组中存储的字符序列,
如果直接比较大小相当于比较了两个字符串的首地址的大小,毫无意义。
C语言的字符串需要通过strcmp函数进行比较大小。
 C++添加的string字符串是一个类,该类对运算符>、<和==进行了重载,
 能够直接比较两个字符串的大小 ！！

2，不同字符串的复制、连接、连接后字符串长度的测量方法不同

 以C语言字符串形式:                                           以C++的string类形式

  char str1[13] = "runoob";                                   string str1 = "runoob";
   char str2[13] = "google";                                   string str2 = "google";
   char str3[13];                                              string str3;
                                                             //结合“类”的定义，此时创建了一个string类的对象str3!!!
   int  len ;                                                  int  len ;


   // 复制 str1 到 str3                                         // 复制 str1 到 str3
   strcpy( str3, str1);                                          str3 = str1;
   cout << "strcpy( str3, str1) : " << str3 << endl;            cout << "str3 : " << str3 << endl;

   // 连接 str1 和 str2                                        // 连接 str1 和 str2
   strcat( str1, str2);                                          str3 = str1 + str2;
   cout << "strcat( str1, str2): " << str1 << endl;              cout << "str1 + str2 : " << str3 << endl;

   // 连接后，str1 的总长度                                    // 连接后，str3 的总长度
   len = strlen(str1);                                           len = str3.size();      string类的对象str3调用该类的成员函数int size（）；
   cout << "strlen(str1) : " << len << endl;                     cout << "str3.size() :  " << len << endl;

*/
