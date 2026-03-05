/*
  < 虚函数该怎样动态绑定（使用）>!!!!!!!!!
  
  虚函数与基类指针或基类引用配合使用实现动态绑定,所谓“配合使用”就是通过指针或者引用访问虚函数。

  所谓“基类指针”指的是定义一个指针变量，该指针变量的类型是用户编写的“基类/父类”类型；“基类引用”同理。

 */



/*           单独部分                */
//一，用基类引用
void printArea( Shape & rshape )       //这里是用基类引用实现的
{
  cout << rshape.getArea() << endl;    //这里就是基类引用访问虚函数
				                           //理解为什么是“引用变量形参”+“.”+“虚函数”这种形式！！！
}

//二，用基类指针
void printArea( Shape* shape )         //这里是用基类指针实现的
{
  cout << shape->getArea()<< endl;     //这里就是基类指针访问虚函数
}                                      //理解为什么是“指针变量形参”+“.”+“虚函数”这种形式！！！


int main() {
  Circle cc( 2 );
  Square sq( 4 );
  printArea( cc ); //访问了基类的getArea()
  printArea( sq ); //访问了基类的getArea()
}



/*           单独部分                */
//多态————指针VS引用

//1.指针：指针可以改变指向，可用于主函数代码中，也可用于传递函数形参。使用范围更广
         //a)用于主代码：
                int main(){
                   Shape * shape;     //定义一个基类指针（变量）
                   Circle circle;
                   Rectangle rect;
	
                   shape=&circle;     //给指针变量赋“指针/地址”值
	                shape->getArea();
	
                   shape=&rect;
                   shape->getArea();

                   return 0;
                        }
			//b)用于传递函数形参：
						 void printArea( Shape * rshape ) {
                        cout << rshape->getArea();		}

								Circle circle;
                        printArea(&circle)
//2.引用：引用不能再进行赋值，只能用于函数形参中。
		  //a)
						 Shape& shape = circle;
                   shape = rect;	//错误！

		  //b)
						 void printArea( Shape & rshape ) {
                        cout << rshape.getArea() << endl;	}
                        
                   Circle circle;
					    printArea(circle);

						 Rectangle rect;
						 printArea(rect);
						 
						 
						 
//基类指针（变量）与基类引用（变量）可以被继承类对象赋值！！！！、
//这也是多态实现的一个重要基础！！


/*
     < 多态的核心作用 >
如果传入的是 Shape 对象（指针），就调用类 Shape 的 getArea(),
如果传入的是 Circle 对象（指针），就调用类 Circle 的 getArea(),
如果传入的是 Square 对象（指针），就调用类 Square 的 getArea()

void printArea( Shape * rshape ) {
  cout << rshape->getArea()<<endl;;
}

void printArea( Shape & rshape ) {
  cout << rshape.getArea() << endl;
}

*/

