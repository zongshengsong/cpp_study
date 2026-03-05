#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
double * p=NULL;
	p=new  double[3];         //表示给p开辟一个三个元素的数组    其实不写【3】或者写成（3）都可以执行
	int i=0;
	for(i;i<3;i++){
		cin>>p[i];
	}
	cout<<endl;
	for(i=0;i<3;i++){
		cout<<p[i]<<'\t';
	}
	delete []p;


   return 0;
}

