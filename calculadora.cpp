#include <iostream>
#include <vector>

// Código usado para validar commits que
// referenciam mais de um requisito

// Código usado para validar requisito
// com mais de um arquivo modificado por commit

using namespace std;

int main()
{
	int sum = 0;
	int product = 1;

	int number;
	while(cin >> number and number)
	{
		sum += number;
		product *= number;
	}

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;

	return 0;
}
