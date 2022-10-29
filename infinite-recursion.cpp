// C++ program to demsonstrate Infinite Recursion
#include <bits/stdc++.h>
using namespace std;

// Recursive function
void Geek(int N)
{
	// Base condition
	// This condition is never met here
	if (N == 0)
		return;

	// Print the current value of N
	cout << N << " ";

	// Call itself recursively
	Geek(N);
}

// Driver code
int main()
{

	// Initial value of N
	int N = 5;

	// Call the recursive function
	Geek(N);
	return 0;
}
