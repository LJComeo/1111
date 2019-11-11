#include <iostream>
#include <string>
using namespace std;

int p2()
{
	int i;
	string s, s1;
	int str[256] = { 0 };
	getline(cin, s);
	if (s.size() > 100)
	{
		return 0;
	}
	if (!s.empty())
	{
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'z')
			{
				str[s[i] - 'A']++;
				if (str[s[i] - 'A'] == 1)
				{
					s1.push_back(s[i]);
				}
			}
			else
			{
				return 0;
			}
		}
		cout << s1;
	}
	return 0;
}