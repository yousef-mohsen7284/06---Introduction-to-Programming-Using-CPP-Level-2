#include<iostream>

using namespace std;


void PrintNumbersFromMToNUsingRecursion(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintNumbersFromMToNUsingRecursion(M - 1, N);
	}
}


int main()
{
	PrintNumbersFromMToNUsingRecursion(10, 1);

	return 0;
}