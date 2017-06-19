#include <iostream>
#include <vector>
#include <map>

// Código usado para validar requisito
// que contempla apenas um commit

// Código usado para validar requisito
// com mais de um arquivo modificado por commit

using namespace std;

int main()
{
	vector<int> numbers;
	int number;
	while(cin >> number and number)
	{
		numbers.push_back(number);
	}

	map<int,int> count_list;

	int max = 0;
	for(auto number : numbers)
	{
		if(number > max)
		{
			max = number;
		}
		++count_list[number];
	}

	int total = 0;
	int old_count = 0;
	for(int i = 0; i < max+1; ++i)
	{
		old_count = count_list[i];
		count_list[i] = total;
		total += old_count;
	}

	vector<int> sorted(numbers.size());
	for(int i = 0; i < numbers.size(); ++i)
	{
		sorted[count_list[numbers[i]]] = numbers[i];
		++count_list[numbers[i]];
	}

	for(auto number : sorted)
	{
		cout << "[" << number << "]";
	}
	cout << endl;

	return 0;
}
