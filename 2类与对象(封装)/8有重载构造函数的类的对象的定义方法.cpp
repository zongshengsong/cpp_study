#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Phone
{
private:
	string brand;
	double price;
	double size;

public:
	void show();
	Phone();
	Phone(string brand, double price, double size);
};

void Phone::show()
{
	cout << this->brand << '\t' << this->price << '\t' << this->size << endl;
}

Phone::Phone()
{
	cout << "这是一个无参的构造函数。" << endl;
}

Phone::Phone(string brand, double price, double size)
{
	this->brand = brand, this->price = price, this->size = size;
	cout << this->brand << '\t' << this->price << '\t' << this->size << endl;
}

int main()
{
	Phone huawei;					 // 等于Phone huawei=Phone();
	Phone oppo("oppo", 2999.9, 9.8); // 等于Phone oppo=Phone("oppo",2999.9,9.8);
	huawei.show();
	oppo.show();
	return 0;
}
