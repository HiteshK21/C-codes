#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int x;
	cin >> x;

	if (x % 2 == 0)
	{
		x--;
		cout << x << endl;
		while (x > 1)
		{
			x -= 2;
			cout << x << endl;
		}
	}
	else
	{
		while (x > 1)
		{
			x -= 2;
			cout << x << endl;
		}
	}


}