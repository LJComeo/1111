#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int findElement(vector<int> A, int n, int x) {
	int i = 0;
	while (i < A.size())
	{
		if (A[i] == x)
		{
			return i;
		}
		i++;
	}
}