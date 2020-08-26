#include <iostream>
using namespace std;

bool isSafeBridge(string str) {
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			return false;
	}
	return true;
}

int main()
{
	cout << isSafeBridge("#######");
}

