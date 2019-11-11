#include <iostream>
#include <string>
using namespace std;

int Judge(const string &s)
{
	int i, j;
	for (i = 0, j = s.size() - 1; i <= j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return 0;
		}
	}
	return 1;
}
int Judges(const string &s)
{
	if (s.size() <= 100)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] < 'a' || s[i] > 'z')
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}


int main1()
{
	string s, s1;
	getline(cin, s);
	getline(cin, s1);
	int count = 0, n,m,tmp;
	if (Judges(s) && Judges(s1))
	{
		n = s.size();
		m = s1.size();

		for (int i = 0; i < n; i++)
		{
			s.insert(i, s1);
			if (Judge(s))
			{
				count++;
			}
			else
			{
				s.erase(i, m);
			}
		}
		cout << count;

	}
	return 0;
}