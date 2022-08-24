#include<bits/stdc++.h>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	/*


	1)
		string str;
		cin >> str;
		int n = str.length();
		for (int i = 0; i < n ; i++) {
			char temp = str[i];
			str[i] = str[n - i - 1];
			str[n - i - 1] = temp;
		}
		cout << str;

		This program will print the exact string as we input.
		example:
		input = "hitesh"
		output = "hitesh"




	2)
		While the program below will print the reverse of the string.
		Because here we use the swapping of the two characters
		correctly.
		example:
		input = "hitesh"
		output = "hsetih"

	string str;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n / 2 ; i++) {
		char temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
	cout << str;



	(i)  Here, we have used an inbuilt function named swap().

	string str;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n / 2 ; i++) {
		swap(str[i],str[n-i-1]);
	}
	cout << str;



	3) This program gives the sorted array by the use of
	   an inbuilt function called  "sort()".
	   (i) sort() has the T.C of O(n).


	int arr[] = {1, 0, 2, 4, 9, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
	// cout << arr << endl;  ---> this statement will not print the array, it will print it's address.
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



	4) This program will give the pattern as:

		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4
		0 1 2 3 4   when n = 5;


	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}


	5) This program will give the pattern as:

		0
		0 1
		0 1 2
		0 1 2 3
		0 1 2 3 4   when n = 5;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}


	6) Program to find the smallest element from the given
	array.

	int array[] = {1, 0, 2, 5, -5, 9, 11, 35};
	int min = INT_MAX;
	int n = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < n ; i++) {
		if (array[i] < min)
			min = array[i];
	}
	cout << min << endl;



	4) Program to find the reverse of a number.
	// int num = 3432742;
	// int num = 3432742895;
	// int num = 34327428953  ----> this number shows overflow.
	int num;
	cin >> num;
	int rem = 0;
	while (num > 0) {
		rem = rem * 10 + num % 10;
		num = num / 10;
	}
	cout << rem << endl;


	5)Program to find the given number is Palindrome or not.

	int num, ori, rem = 0;
	cin >> num;
	ori = num;
	while (num > 0) {
		rem = rem * 10 + num % 10;
		num /= 10;
	}
	if (rem == ori) {
		cout << "It's a Palindrome.";
	} else {
		cout << "It's not a Palindrome.";
	}




	int arr[] = {1, 5, 2, 3, 4, 1};
	int sum = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1;)
		}








	Pseudocode - 1------>

	int p = 2, q = 2, r = 10;
	for (r = 2; r <= 3; r++) {
		q = (r + 9) + p;
		q = q + r;
	}
	cout << p + q << endl;

	output : 19


	Pseudocode - 2------>
	int a = 5, b = 2, c = 4;
	for (c = 3; c <= 6; c++) {
		a = (b + c) + b;
	}
	for (c = 3; c <= 6; c++) {
		a = c + c;
	}
	cout << a + b;

	output : 14

	Pseudocode - 3------>
	int p = 1, q = 2, r = 10;
	if ((1 + p) < q || (r + 3) < 3) {
		q = 9 + q;
		if ((q + p + r) < (r + 6)) {
			p = (p + q) + q;
		}
		r = q + p;
	}
	cout << p + q + r;

	output : 13




	int a = 1, b = 2, c = 10;
	if (5 > a && 5 < a) {
		a = (b + a)^a;
		if ((c + b) < (b - c)) {
			c = (b + 12) + c;
		}
		c = a & c;
	}
	else {
		if ((b & c) < (a - b)) {
			b = 9 + c;
		}
	}
	cout << a + b + c;

	output : 13



	6) This program reverses the elements of the array

	int arr[] = {72, 2, 326, 12, 48, 3072};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



	7) This program gives the maximum element from the array

	int arr[] = {72, 2, 326, 12, 48, 3072};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;




	8) This program gives the minimum element from the array

	int arr[] = {72, 2, 326, 12, 48, 3072};
	int n = sizeof(arr) / sizeof(arr[0]);
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min;


	9) Program to find the kth smallest element in an array

	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int ans = arr[k - 1];
	cout << ans;

	*/






}