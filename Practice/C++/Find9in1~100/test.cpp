#include<iostream>
using namespace std;
class OprateNum
{
public:
	void InitNum()
	{
		for (int i = 0; i < 101; i++)
		{
			num[i] = i;
		}
	}
	void Display()
	{
		for (auto ele : num)
		{
			cout << ele << ' ';
		}
		cout << endl;
	}
	void find9()
	{
		for (auto ele : num)
		{
			if ((ele % 10 == 9) || ((ele / 10) == 9))
				cout << ele << ' ';
		}
		cout << endl;
	}
private:
	int num[101];
};
void main()
{
	OprateNum Num;
	Num.InitNum();
	Num.Display();
	Num.find9();
}