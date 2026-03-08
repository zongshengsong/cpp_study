#include <iostream>
#include <string>
using namespace std;

class Card
{
private:
  string type;

public:
  Card()
  {
    cout << "Card无参构造函数" << endl;
  }
  Card(string type)
  {
    this->type = type;
    cout << type << "\t 构造函数调用" << endl;
  }
  Card(Card &card)
  {
    this->type = card.type;
    cout << "Car复制构造函数被调用啦" << endl;
  }
  ~Card()
  {
    cout << type << "\t 析构函数调用" << endl;
  }
};

class Student
{
private:
  string name;
  int id;
  // 另外一个类的对象:
  Card card1; // 一个类 A (Student)内，其数据成员为其他自定义类类型 B(Card)，则称“类 A 内嵌套了类 B”，
              // 它们的关系是一种“包含与被包含”的关系，也称为“组合关系”

public:
  //  Student(string name, int id){
  //   this->name = name;
  //   this->id = id;
  //  }

  Student(string name, int id, Card card1) : name(name), id(id), card1(card1)
  {
    //   this->id = id;
    //   this->card1 = card1; // Card this->card1; this->card1 = card1;
    cout << "Student constructor is called" << this->name << '\t' << this->id << endl;
  }

  ~Student()
  {
    cout << "Student destructor is called" << this->name << '\t' << this->id << endl;
  }
};

int main()
{
  Card card1("校园卡");
  Student stu("宋宗胜", 110, card1);
  return 0;
}

/*
  类嵌套的对象成员必须在初始化列表中初始化的两种情况:
       1,该成员对象（类）没有默认构造函数（i.e., 已经显式指定了有参数的构造函数）
       2,该成员对象以引用类型出现
  如果类A包含了以类B的对象为数据成员，则构造与析构的顺序为：
      类B 内嵌对象成员先被构造（即在主函数中先构造类B的对象），类A对象后被构造
      类A对象先被析构，类B 内嵌对象后被析构 （符合栈上的对象析构规则）
*/
