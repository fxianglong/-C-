////��дһ�����������һ�������±�Ҫ���CDate�࣬�����ݽ��е��Բ�������
////��1������/��/���ʽ������ڡ�
////��2���ɽ������ڼ�һ��Ĳ���
////��3���������ڡ�
//#include<iostream>
//using namespace std;
//class CDate
//{
//private:
//	int m_nDay;
//	int m_nMonth;
//	int m_nYear;
//public:
//	CDate();//Ĭ�Ϲ��캯��
//	CDate(int, int, int);//���ع��캯��
//	void Display();//�������
//	void Adddate();//���ؼ�1�������
//	void Setdate(int,int,int);//��������
//	~CDate();//��������
//private:
//	bool Isleapyear();//�ж�����ǲ�������
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
//	cout << m_nYear << "��" << m_nMonth << "��" << m_nDay << "��" << endl;
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
//	cout << "������" << endl;
//	cin >> y >> m >> d;
//	date.Setdate(y, m, d);
//	cout << "��ǰ����:";
//	date.Display();
//	date.Adddate();
//	cout << "��ǰ���ڼ�1:";
//	date.Display();
//	system("pause");
//}


