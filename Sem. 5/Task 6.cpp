#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	int currentPosition = 0;
	while (n != 0)
	{
		if (n % 2 == 1) //�������� �� ��������� ��� 
		{
			cout << "2^" << currentPosition << " ";
		}
		currentPosition++;
		n >>= 1; // ���� �������������� ��� ����� ��������.  (n /=2);
	}
}