#include <iostream>
using namespace std;

int tuna = 69; // you can use this varrible inside any function in your program, "global"

int main()
{
	int tuna = 20;
	cout << :: tuna << endl; // :: means use the global tuna not local tuna *69 :: is the uniary scope resolution operator 
}							//  Whenever you create a varriable inside a function you can only use it inside the function
							// One tuna is local one tuna is global
