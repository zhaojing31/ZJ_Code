#include<iostream>
using namespace std;

class A
{
	public:
		const int* getx()const
		{
			cout << "[const] A.getx" << endl;
			return x;
		}
		int* getx()
		{
			cout << "[non-const] A.getx" << endl;
			return x;
		}
private:
	int* x = 0;
};

int main(int argc, char** argv)
{
	const A a;
	const int* x = a.getx();
}

