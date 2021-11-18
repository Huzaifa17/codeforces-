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
		int a, b, c;
		cin >> a >> b >> c;
		char s1[10], s2[10];
		c--;
		m = a - 1;
		k = 0;
		for (j = c; j > 0; --j, m--)
		{
			s1[k] = '0';
			k++;
		}
		while (m >= 0)
		{
			s1[k] = '1';
			k++;
			m--;
		}
		k--;
		while (k >= 0)
		{
			cout << s1[k];
			k--;
		}
		cout << " ";
		k = 0;
		m = b - 1;
		for (j = c; j > 0; --j, m--)
		{
			s2[k] = '0';
			k++;
		}
		if (m >= 0)
		{
			s2[k] = '2';
			k++;
			m--;
		}
		while (m >= 0)
		{
			s2[k] = '1';
			k++;
			m--;
		}
		k--;
		while (k >= 0)
		{
			cout << s2[k];
			k--;
		}
		cout << endl;
	}
	return 0;
}
