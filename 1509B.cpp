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
		cin >> n;
		char s[n + 50];
		cin >> s;
		if (n % 3 != 0)
		{
			cout << "NO" << endl;
			continue ;
		}
		k = 0;
		m = 0;
		n /= 3;
		for (j = 0; s[j] != '\0'; ++j)
		{
			if (s[j] == 'T')
			{
				k++;
			}
			else
			{
				k--;
			}
			if (k < 0 || k > n)
			{
				m = 1;
				break;
			}
		}
		if (m == 0 && k == n)
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
