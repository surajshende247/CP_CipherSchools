#include<bits/stdc++.h>
using namespace std; 

void printSmall(int arr[], int n, int k) 
{ 
	for (int i = k; i < n; ++i) 
	{ 
		int max_var = arr[k-1]; 
		int pos = k-1; 
		for (int j=k-2; j>=0; j--) 
		{			 
			if (arr[j] > max_var) 
			{ 
				max_var = arr[j]; 
				pos = j; 
			} 
		} 
		if (max_var > arr[i]) 
		{ 
			int j = pos; 
			while (j < k-1) 
			{ 
				arr[j] = arr[j+1]; 
				j++; 
			} 
			arr[k-1] = arr[i]; 
		} 
	} 
	for (int i=0; i<k; i++) 
		cout << arr[i] <<" "; 
				
} 
int main() 
{ 
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int k = 5; 
	printSmall(arr, n, k); 
	return 0; 
} 
