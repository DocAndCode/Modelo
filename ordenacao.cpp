#include <iostream>
#include <vector>

// Código usado para validar requisito
// que contempla apenas um commit

using namespace std;

int main()
{
	vector<int> numbers;
	int number;
	while(cin >> number and number)
	{
		numbers.push_back(number);
	}

	vector<int> sorted;
	for(int i = 1; i < numbers.size(); ++i)
	{
		int x = numbers[i];
		int j = i - 1;
		while(j >= 0 and numbers[j] > x)
		{
			numbers[j+1] = numbers[j];
			--j;
		}
		numbers[j+1] = x;
	}

	for(auto number : numbers)
	{
		cout << "[" << number << "]";
	}
	cout << endl;

	return 0;
}
