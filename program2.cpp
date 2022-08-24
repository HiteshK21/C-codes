#include<bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif


	/*
		int lisOptimised(string s)
		{
			// Stores at every i-th index, the length of the longest increasing subsequence ending with character i

			int dp[30] = { 0 };

			// Size of string
			int N = s.size();

			// Stores the length of LIS
			int lis = INT_MIN;

			// Iterate over each
			// character of the string
			for (int i = 0; i < N; i++) {

				// Store position of the
				// current character
				int val = s[i] - 'a';

				// Stores the length of LIS
				// ending with current character
				int curr = 0;

				// Check for all characters
				// less then current character
				for (int j = 0; j < val; j++) {
					curr = max(curr, dp[j]);
				}

				// Include current character
				curr++;

				// Update length of longest
				// increasing subsequence
				lis = max(lis, curr);

				// Updating LIS for current character
				dp[val] = max(dp[val], curr);
			}

			// Return the length of LIS
			return lis;
		}
	*/
	string str;
	cin >> str;
	int ans = INT_MAX;
	int dis = 0;
	unordered_map<char, int> m;
	int i, j;
	for (i = 0; i < str.size(); i++) {
		if (m.find(str[i]) == m.end()) {
			dis++;
			m[str[i]] = 1;
		}
		else {
			m[str[i]]++;
		}
		while (m[str[j]] > 1) {
			m[str[j]]--;
			j++;
		}
		if (dis == m) {
			ans = min(ans, i - j + 1);
		}
	}
	return ans;

}

