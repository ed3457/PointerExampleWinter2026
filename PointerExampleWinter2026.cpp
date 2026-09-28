// PointerExampleWinter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	int x = 10; 

	int  *ptr; 

	ptr = &x; 

	cout << ptr << endl;
	cout << &x << endl;

	cout << *ptr << endl; 


	int* ptr2 = new int;

	//*ptr2 = 10;

	//cout << *ptr2<<endl; 

	////ptr2 = ptr; 

	//if (*ptr == *ptr2)
	//	cout << "Equal" << endl;
	//else
	//	cout << "Not equal" << endl;

	//int* ptr3 = 0;
	//cout << ptr3 << endl; 


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
