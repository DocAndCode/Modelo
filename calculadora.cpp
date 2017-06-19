#include <iostream>
#include <vector>

// Código usado para validar commits que
// referenciam mais de um requisito

// Código usado para validar requisito
// com mais de um arquivo modificado por commit

using namespace std;

void calculate_sum_and_product(int &sum, int &product);

int main()
{
	int sum, product;
	calculate_sum_and_product(sum, product);

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;

	return 0;
}

void calculate_sum_and_product(int &sum, int &product)
{
	sum = 0;
	product = 1;

	int number;
	while(cin >> number and number)
	{
		sum += number;
		product *= number;
	}
}
