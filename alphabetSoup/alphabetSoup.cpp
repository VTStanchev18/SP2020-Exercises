#include <iostream>
using namespace std;

string alphabetSoup(string str)
{
	char a;

	for (size_t i = 0; i < str.length() - 1; i++)
	{
		for (size_t j = 0; j < str.length() - i - 1; j++)
		{
			if (str[j] > str[j + 1])
			{
				a = str[j];
				str[j] = str[j + 1];
				str[j + 1] = a;
			}
		}
	}

	return str;
}

int main()
{
	cout << alphabetSoup("edabit");
}


