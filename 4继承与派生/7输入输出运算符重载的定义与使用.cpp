运算符函数通常分为两种形式：一类是在类中定义的运算符成员函数，称之为类成员运算符；另一种在类之外定义的运算符重载，通常以该类的友元形式，称之为友元运算符。

1、重载输入输出运算符的形式。常见的形式如下：

类型中声明友元函数（友元函数必须在类中声明）

class Complex{
    public:
        Complex( double r=0, double i=0):real(r),imag(i){ };
        friend ostream & operator<<( ostream & os,const Complex & c);
        friend istream & operator>>( istream & is,Complex & c);
    private:
        double real,imag;
};
具体的定义：

ostream & operator<<( ostream & os,const Complex & c){
    os << c.real << "+" << c.imag << "i"; //以"a+bi"的形式输出
    return os;
}
istream & operator>>( istream & is,Complex & c){
    string s;
    is >> s;  //将"a+bi"作为字符串读入, "a+bi" 中间不能有空格
    int pos = s.find("+",0);
    string sTmp = s.substr(0,pos); //分离出代表实部的字符串
    c.real = atof(sTmp.c_str());//atof库函数能将const char*指针指向的内容转换成 float
    sTmp = s.substr(pos+1, s.length()-pos-2);   //分离出代表虚部的字符串
    c.imag = atof(sTmp.c_str());
    return is;
}


2、重载输入输出运算符函数的参数。

答：由以上形式可以知道是两个参数。

（1）第一个参数是非常量的(输出/输入)流的引用。

之所以ostream是非常量的原因是：向流写入内容会改变流的状态。必须是引用的原因是：不用引用的话就是按值传递，而iostream(ostream/istream)规定是不允许拷贝器副本的，所以必须要传引用。对于重载输入运算符它的第一个参数应该也是这个道理。（注：cout 是 ostream 类的对象。ostream 类和 cout 都是在头文件 <iostream> 中声明的。）

（2）第二个参数输入和输出运算符的重载则不同：

输出运算符重载：对于重载输出运算符而言第二个参数是一个const的引用，该常量就是我们想要打印的类类型。采用引用的原因是我们希望避免复制实参；而之所以是常量的原因是通常情况下我们只是打印该形参默认不允许修改对象的内容。

输入运算符重载：对于重载输入运算符而言第二个参数必须是一个非const的引用。原因是它要存储我们读取到的数据，所以这个形参一定是能修改的才行
————————————————
版权声明：本文为CSDN博主「焱齿」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/mijichui2153/article/details/85123242
