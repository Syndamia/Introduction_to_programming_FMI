#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//����� �����
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;


	//�����
	for (int j = 0; j < n - 2; j++)
	{
		cout << '|';
		for (int i = 0; i < n - 2; i++)
			cout << '-';
		cout << '|' << endl;
	}

	//����� �����
	cout << '+';
	for (int i = 0; i < n - 2; i++)
		cout << '-';
	cout << '+' << endl;
}