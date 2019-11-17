#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//public:
//	string _name; // 姓名
//};
//class Student : public Person
//{
//protected:
//	int _num; //学号
//};
//class Teacher 
//{
//protected:
//	int _id; // 职工编号
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};

//int main()
//{
//	Assistant a;
//	/*a.Person::_name = "peter";*/
//
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//	a.Teacher::_name = "swq";
//	system("pause");
//	return 0;
//}

class Person {
public:
	virtual ~Person() { cout << "~Person()" << endl; }
};
class Student : public Person {
public:
		virtual ~Student() { cout << "~Student()" << endl; }
};
int main()
{
	Person* p1 = new Person;
	Person* p2 = new Student;
	delete p1;
	delete p2;
	system("pause");
	return 0;
}
