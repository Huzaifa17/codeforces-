#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	long long int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n >> m >> k;
		long long int arr[2];
		arr[0] = n * m;
		//arr[1] = ((n / 2) + (n % 2)) * k;
		arr[1] = ((n / 2) * k + (n % 2) * m);
		sort(arr, arr + 2);
		cout << arr[0] << endl;
	}
	return 0;
}
