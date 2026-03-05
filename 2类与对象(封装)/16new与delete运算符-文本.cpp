#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


//栈上的对象
//全局对象
//堆对象

/*
   C语言中用malloc与free来分配和释放空间，
   而C++在堆对象中规定了两个运算符：
 1，new      先分配空间，再调用构造函数；
 2,delete    先调用析构函数，再释放空间；
 3,对于基本数据类型而言，new与delete仅仅分配与释放内存空间；不存在调用构造析构函数；


	 new一般为指针变量开辟空间，但指针的类型又有很多，可以是基本指针类型，也可以是创建的类对象型


4，  new的语法格式：
   注意：1，以下的变量一般是指针变量；2，以下的变量类型可以是基本类型，也可以是自己创建的类类型

		  1）   为指针变量分配空间：
		  
		      变量类型* 变量名 = NULL;
		      变量名 = new 变量类型 ;或者 变量名 = new 变量类型(n)    n表示n个字节   //这种就是单纯的为
				                                                                        指针变量开辟动态内存；
		      
     也可写成：变量类型* 变量名 = new 变量类型  或者   new 变量类型(n);
		      
            如：
                  double* pvalue  = NULL; // 初始化为 null 的指针
                  pvalue  = new double;   // 为变量请求内存
            或：
                double* pvalue=new double;   或double* pvalue=new double(16);

在任何时候，当您觉得某个已经动态分配内存的变量不再需要使用时，您可以使用 delete 操作符释放它所占用的内存，如下所示：
                  delete pvalue;        // 释放 pvalue 所指向的内存

			2）   为数组分配空间：
	（在c++中数组也多会以指针形式声明，但在调用数组中元素时，依旧用数组名[n]的形式，但这里数组名就是指针变量名）

				 变量类型* 变量名 = NULL;
		       变量名 = new 变量类型 [n];  //这就是将指针变量看成数组，为数组开辟n个变量类型空间；

	   也可写成：变量类型* 变量名=new 变量类型[n];

				如:
					 假设我们要为一个字符数组（一个有 20 个字符的字符串）分配内存:
                 char* pvalue  = NULL;   // 初始化为 null 的指针
                 pvalue  = new char[20]; // 为变量请求内存，大小为20个字符空间
            或：
              char* pvalue = new char[20];
             
         如果少释放该空间，语句为：
					  delete [] pvalue;        // 删除 pvalue 所指向的数组 ,这时[]中不需要在写大小;

		  3)   对象的动态内存分配
对象与简单的数据类型没有什么不同。例如，请看下面的代码，我们将使用一个对象数组来理清这一概念：

   实例:
         #include <iostream>
         using namespace std;

         class Box
         {
               public:
                  Box() {
                          cout << "调用构造函数！" <<endl;
                        }
                 ~Box() {
                          cout << "调用析构函数！" <<endl;
                        }
       };

       int main( )
       {
             Box* myBoxArray = new Box[4];    //这里的变量类型就是自己创建的类类型;

             delete [] myBoxArray; // 删除数组
             return 0;
       }
如果要为一个包含四个 Box 对象的数组分配内存，构造函数将被调用 4 次，同样地，当删除这些对象时，析构函数也将被调用相同的次数（4次）。

当上面的代码被编译和执行时，它会产生下列结果：

             调用构造函数！
             调用构造函数！
             调用构造函数！
             调用构造函数！
             调用析构函数！
             调用析构函数！
             调用析构函数！
             调用析构函数！

*/



class CStudent{
   public:
   	//构造函数：
   	CStudent(){
   		 cout<<"构造函数被调用了！"<<endl;
		}
		//析构函数：
      ~CStudent(){
      	cout<<"析构函数被调用了！"<<endl;
		}

};


int main()
{
	//在堆上创建一个对象
	CStudent* pStu = NULL;
	pStu=new CStudent;

	if(pStu !=NULL ){
		//释放对象
		delete pStu;
	}

	//在堆上申请空间：
	int* pN =new int [12];
	delete pN ;     //也可以用free(pN)
	


   return 0;
}

