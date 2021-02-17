#include <bits/stdc++.h> 
using namespace std; 

int titleToNumber(string s) 
{ 
	int result = 0; 
    int n=s.length();
	for (int i=0; i<n; i++) 
	{ 
		result *= 26; 
		result += s[i] - 'A' + 1; 
	} 

	return result; 
} 

int main() 
{ 
	cout << titleToNumber("CDA") << endl; 
	return 0; 
} 
