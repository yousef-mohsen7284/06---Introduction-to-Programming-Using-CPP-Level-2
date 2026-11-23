#include<iostream>

using namespace std;

void PrintNumbersFromNToMUsingRecursion(int N, int M)
{

	if (N <= M)
	{
		cout << N << endl;
		PrintNumbersFromNToMUsingRecursion(N + 1, M);
	}
}


int main()
{
	PrintNumbersFromNToMUsingRecursion(1, 10);

	return 0;
}