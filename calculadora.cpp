#include <iostream>
#include <vector>

// Código usado para validar commits que
// referenciam mais de um requisito

using namespace std;

int main()
{
	vector<int> numbers;
	int number;
	while(cin >> number and number)
	{
		numbers.push_back(number);
	}

	int sum = 0;
	for(auto number : numbers)
	{
		sum += number;
	}

	int product = 1;
	for(auto number : numbers)
	{
		product *= number;
	}

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;

	return 0;
}
