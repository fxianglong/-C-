#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher 
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};

//int main()
//{
//	Assistant a;
//	/*a.Person::_name = "peter";*/
//
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
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
