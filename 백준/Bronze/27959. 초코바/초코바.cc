#include <iostream>
using namespace std;

int main()
{
	int don, choco;
	cin >> don >> choco;
	if (don * 100 >= choco)
		cout << "Yes";
	else
		cout << "No";
}