#include <iostream>
#include <vector>
using namespace std;

int FindGreatestSumOfSubArray(vector<int> array)
{
	int tmp = array[0];
	int maxPre = array[0];

	int i;
	for (i = 1; i < array.size(); i++)
	{
		if (maxPre >= 0)
		{
			maxPre += array[i];
		}
		else
		{
			maxPre = array[i];
		}
		if (tmp < maxPre)
		{
			tmp = maxPre;
		}
	}
	return tmp;
}

int main()
{
	int n;
	cin >> n;
	int arr[10000];
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<int> v(arr,arr+n);
	int tmp = FindGreatestSumOfSubArray(v);
	cout << tmp;
	return 0;
}