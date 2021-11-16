#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	long long int i, j, k, n, m, t, sum;
	cin >> n >> m;
	long long int arr[n], arr2[m];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sum = 0, j = 0;
	for (i = 0; i < m; ++i)
	{
		cin >> arr2[i];
		while (arr2[i] > sum)
		{
			sum += arr[j];
			j++;
		}
		j--;
		sum -= arr[j];
		cout << j + 1 << " " << arr2[i] - sum << endl;
	}
	return 0;
}
