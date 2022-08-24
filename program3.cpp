#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	string alpha;
	cin >> alpha;
	int n = alpha.size();
	map<char, int> count;
	for (int i = 0; i < n; i++) {
		count[alpha[i]]++;
	}
	std :: string :: iterator it;
	for ( it = count.begin(); it != count.end(); it++) {
		alpha += it.first;
		alpha += it.second;
	}

	cout << alpha << endl;


}
