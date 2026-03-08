#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int getmax(int a, int b)
{
	return (a > b ? a : b);
}

inline int getmin(int a, int b)
{
	return (a < b ? a : b);
}
/*
1,内联函数是对编译器的一个建议，编译器可以“听”，也可以不“听”；
2，debug版本没有inline，为了方便调试；
3，内联函数必须写在头文件中。
*/

int main()
{
	cout << "maximum：\n";
	cout << getmax(100, 2) << endl; // 当重复调用一个函数时，且该函数较为简单，
	cout << getmax(39, 8) << endl;	// 这样就使得“进入该函数”和“离开该函数”开销相对较大，
	cout << getmax(9, 35) << endl;	// 于是可以在定义该函数时将其定义为内联函数（inline）。
									// 这相当于在调用该函数时，将该函数的整个代码搬运过来运算，而不
									// 用进出函数。

	cout << "minimum：\n";
	cout << getmin(4, 2) << endl;
	cout << getmin(67, 65) << endl;
	cout << getmin(0, 90) << endl;

	return 0;
}
