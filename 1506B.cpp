#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		int start, end, count = 0;
		cin >> n >> k;
		char s[n + 50];
		cin >> s;
		for (j = 0; j < n; ++j)
		{
			if (s[j] == '*')
			{
				start = j;
				count++;
				break;
			}
		}
		for (j = n - 1; j >= 0; j--)
		{
			if (s[j] == '*')
			{
				end = j;
				if (start != end)
					count++;
				break;
			}
		}
		int last = start, add = start;
		for (j = start + 1; j < end; ++j)
		{
			if (s[j] == '*')
			{
				last = j;
			}
			if ((j - add) == k)
			{
				count++;
				add = last;
			}
		}
		cout << count << endl;
	}
	return 0;
}
