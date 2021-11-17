#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n >> m;
		int arr[n], arr2[n];
		for (j = 0; j < n; ++j)
		{
			cin >> arr[j];
		}
		for (j = 0; j < n; ++j)
		{
			cin >> arr2[j];
		}
		k = 0;
		for (j = 0; j < n; ++j)
		{
			if ((arr[j] + arr2[n - 1 - j]) > m)
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
