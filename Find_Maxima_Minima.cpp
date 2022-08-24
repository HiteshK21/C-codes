#include<bits/stdc++.h>
using namespace std;
/*

This program gives the output as a*x^2 + b*x + c = 0 is our quadratic equation so, after finding the roots of the given Q.E it checks
whether a>0 or a<0
if a>0 --->  then the minimum value of the Q.E will be given as output.
otherwise if a<0 ---> then the maximum value of the Q.E will be given as output.
and if a = 0 then no output will be given, cause it's invalid.

*/

void MaximaOrMinima(int a, int b, int c) {
	double min_value, max_value, ans = (c * (1.0) - (b * b) / (4.0) * a);
	if (a > 0) {
		min_value = ans;
		cout << min_value << endl;
	}
	else if (a < 0) {
		max_value = ans;
		cout << max_value << endl;
	}
	else {
		cout << "Invalid input a" << endl;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif


	int a, b, c;
	cin >> a >> b >> c;
	MaximaOrMinima(a, b, c);
	return 0;

}