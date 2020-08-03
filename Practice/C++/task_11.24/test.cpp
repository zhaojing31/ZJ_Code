#include<iostream>
using namespace std;

class Student
{
public:
	void SetData(int x)
	{
		m_data = x;
	}
	int GetData()const
	{
		return m_data;
	}
	/*int GetData()
	{
		return m_data;
	}*/
private:
	int m_data;
};

void main()
{
	Student st;
	st.SetData(2);
	cout << st.GetData() << endl;
}