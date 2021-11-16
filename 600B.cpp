#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int k)
{
	int l = 0, r = n - 1, i, j, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		//cout << "l " << l << " r " << r << " mid " << mid << endl;
		if (arr[mid] <= k)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	//cout << k << " " << mid << endl;
	if (arr[mid] > k)
		return mid;
	return mid + 1;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	int arr[n], arr2[m];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (i = 0; i < m; ++i)
	{
		cin >> arr2[i];
		arr2[i] = binary_search(arr, n , arr2[i]);
	}
	for (i = 0; i < m; ++i)
	{
		if (i == 0)
		{
			cout << arr2[i] ;
		}
		else
		{
			cout << " " << arr2[i] ;
		}
	}
	cout << endl;
	return 0;
}
