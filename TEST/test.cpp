#include<iostream>
#include<assert.h>
#include<string>
using namespace std;

char FindFirst(string str)
{
	assert(str.size() > 0);
	int hashtable[256] = { 0 };
	int i = 0;
	for (i = 0; i < str.size(); i++)
	{
		hashtable[str[i]]++;
	}
	for (i = 0; i < str.size(); i++)
	{
		if (hashtable[str[i]] == 1)
			return str[i];
	}
	return 0;
}
int main()
{
	string str = " ";
	cin >> str;
	char ret = FindFirst(str);
	if (ret == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << ret << endl;
	}
	return 0;
}
/*
#include<iostream>
using namespace std;
#include<string>
#include<assert.h>
char FindFirst(string str) {
	assert(str.size() > 0);
	int hashtable[256] = { 0 };
	int i = 0;
	for (i = 0; i < str.size(); i++) {
		hashtable[str[i]]++;
	}
	for (i = 0; i < str.size(); i++) {
		if (hashtable[str[i]] == 1) {
			return str[i];
		}
	}
	return 0;
}
int main() {
	string str = "";
	cin >> str;
	char ret = FindFirst(str);
	cout << ret << endl;
	system("pause");
	return 0;
}
*/