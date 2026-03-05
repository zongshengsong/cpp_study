#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int a = 5;

	int q = (a > 2); // 在C语言中，没有专门表示真假的变量类型。但是可以将“逻辑值”赋给一个整型变量，
					 // 通常用“0”表示假，用“非0”表示真；
					 // 即在为“真”的情况下，理论上可能出现非0的任何东西；(虽然实际中经常以1出现)
	cout << q << endl;

	bool d = (a > 2); // 但在 C++中，有专门用来表示逻辑真假的变量类型，即布尔类型（bool或BOOL）。该类型定义的变量，
					  // 是专门用来表示真假的 ，即它的值只可能为“0”或“1”，不可能出现“非0”的现象。

	cout << d << endl; // 例如，这里的d只能为“0”或“1”

	cout << boolalpha << d << endl; // 如果想出现ASCII的英文形式，在bool变量前加上“boolalpha”即可；如这里。

	if (q)
	{
		cout << "a>2" << endl;
	}

	if (d)
	{
		cout << "a>2" << endl;
	}

	int j, k;
	j = sizeof(bool);
	//	k=sizeof(Bool);
	cout << j << '\t' << k;
	return 0;
}
// 虽然C中用整型变量表示逻辑之真假也可以，但C++中的bool类型更规范。
// 布尔类型有小布尔与大布尔之分，bool占一个字节，BOOL占四个字节。 这里好像没有、
