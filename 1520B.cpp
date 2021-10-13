#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t, res = 0;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		res = 0;
		cin >> n;
		int ans = 0;
		m = n;
		while (m)
		{
			k = m % 10;
			m /= 10;
			ans++;
		}
		j = ans;
		while (j)
		{
			j--;
			res = (res * 10) + k;
		}
		ans = (ans - 1) * 9;
		ans += (k - 1);
		if (n >= res)
		{
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
