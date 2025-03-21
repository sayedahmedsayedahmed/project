#include <iostream>
using namespace std;
void calc(int n1, int n2, int op)
{
	cout << " Type The Number One \n ";
	cin >> n1;
	cout << " Type The Number Two\n ";
	cin >> n2;

	cout << " Choose The Type Of Calculation \n";
	cout << " [1] + \n";
	cout << " [2] * \n";
	cout << " [3] - \n";
	cout << " [4] / \n";
	cin >> op;

	if (op == 1)
	{
		cout << n1 << " + " << n2 << " = ";
		cout << n1 + n2 << "\n";
	}
	else if (op == 2)
	{
		cout << n1 << " * " << n2 << " = ";
		cout << n1 * n2 << "\n";
	}
	else if (op == 3)
	{
		cout << n1 << " - " << n2 << " = ";
		cout << n1 - n2 << "\n";
	}
	else if (op == 4 )
	{
		cout << n1 << " / " << n2 << " = ";
		cout << n1 / n2 << "\n";
	}
}
int main()
{
	calc(1, 2, 3);
}