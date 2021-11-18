#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	k = m / n;
	if ((m % n) != 0)
		k++;
	cout << k << endl;
	return 0;
}
