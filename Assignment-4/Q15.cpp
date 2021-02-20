#include <bits/stdc++.h> 
using namespace std; 

void printPrevSmaller(int arr[], int n) 
{ 
	stack<int> S; 

	for (int i=0; i<n; i++) 
	{ 
		while (!S.empty() && S.top() >= arr[i]) 
			S.pop(); 

		if (S.empty()) 
			cout << "_, "; 
		else 
			cout << S.top() << ", "; 
		S.push(arr[i]); 
	} 
} 

int main() 
{ 
	int arr[] = {1, 3, 0, 2, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printPrevSmaller(arr, n); 
	return 0; 
} 
