#include<bits/stdc++.h>
using namespace std;

/*

This program gives the output as:-

input1 =>  abcd
output1 => zyxw

input2 => ACE
output2 => ZXV

*/

void reciprocalString(string word) {
	char ch;
	for (int i = 0; i < word.length(); i++) {
		if (isupper(word[i])) {
			ch = 'Z' - word[i] + 'A';
			cout << ch;
		}
		else if (islower(word[i])) {
			ch = 'z' - word[i] + 'a';
			cout << ch;
		} else {
			cout << word[i];
		}
	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	reciprocalString(s);
	return 0;
}