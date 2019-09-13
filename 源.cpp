////编写一个函数，设计一个满足下边要求的CDate类，用数据进行调试并输出结果
////（1）用日/月/年格式输出日期。
////（2）可进行日期加一天的操作
////（3）设置日期。
//#include<iostream>
//using namespace std;
//class CDate
//{
//private:
//	int m_nDay;
//	int m_nMonth;
//	int m_nYear;
//public:
//	CDate();//默认构造函数
//	CDate(int, int, int);//重载构造函数
//	void Display();//输出日期
//	void Adddate();//返回加1后的日期
//	void Setdate(int,int,int);//设置日期
//	~CDate();//析构函数
//private:
//	bool Isleapyear();//判断年份是不是闰年
//};
//
//CDate::CDate()
//{}
//CDate::CDate(int year, int month, int day)
//{
//	m_nDay = day;
//	m_nMonth = month;
//	m_nYear = year;
//}
//void CDate::Display()
//{
//	cout << m_nYear << "年" << m_nMonth << "月" << m_nDay << "日" << endl;
//}
//void CDate::Adddate()
//{
//	m_nDay++;
//	if (Isleapyear())
//	{
//		if (m_nMonth == 2 && m_nDay == 30)
//		{
//			m_nMonth++;
//			m_nDay = 1;
//			return;
//		}
//	}
//	else
//	{
//		if (m_nMonth == 2 && m_nDay == 29)
//		{
//			m_nMonth++;
//			m_nDay = 1;
//			return;
//		}
//	}
//	if (m_nDay > 31)
//	{
//		if (m_nMonth == 12)
//		{
//			m_nYear++;
//			m_nMonth = 1;
//			m_nYear = 1;
//		}
//		else
//		{
//			m_nMonth++;
//			m_nDay = 1;
//		}
//	}
//	else if (m_nDay == 31)
//	{
//		if (m_nMonth == 4 || m_nMonth == 6 || m_nMonth == 9 || m_nMonth == 11)
//		{
//			m_nMonth++;
//			m_nDay = 1;
//		}
//	}
//}
//void CDate::Setdate(int year,int month,int day)
//{
//	m_nDay = day;
//	m_nMonth = month;
//	m_nYear = year;
//}
//CDate::~CDate()
//{
//}
//bool CDate::Isleapyear()
//{
//	bool bLeap;
//	if (m_nYear % 4 != 0) bLeap = false;
//	else if (m_nYear % 100 != 0) bLeap = true;
//	else if (m_nYear % 400) bLeap = false;
//	return bLeap;
//}
//void main()
//{
//	CDate date;
//	int y, m, d;
//	cout << "年月日" << endl;
//	cin >> y >> m >> d;
//	date.Setdate(y, m, d);
//	cout << "当前日期:";
//	date.Display();
//	date.Adddate();
//	cout << "当前日期加1:";
//	date.Display();
//	system("pause");
//}


