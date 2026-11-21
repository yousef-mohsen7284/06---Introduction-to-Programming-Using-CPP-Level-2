#include<iostream>

using namespace std;


int main()
{

	int Number = 0;
	string Result;

	Result = (Number == 0) ? "Zero" : ((Number > 0) ? "Postivie !" : "Negative !");

	cout << "Number Is: " << Result;

	return 0;
}