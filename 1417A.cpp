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
		cin >> n >> k;
		int arr[n];
		for (j = 0; j < n; ++j)
		{
			cin >> arr[j];
		}
		sort(arr, arr + n);
		int sum = 0;
		for (j = n - 1; j > 0; --j)
		{
			m = k - arr[j];
			sum += (m / arr[0]);
		}
		cout << sum << endl;
	}
	return 0;
}
