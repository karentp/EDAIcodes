// C++ program to illustrate Pointers

//#include <bits/stdc++.h> // Esto es para Linux y Windows 
/* Para MAC hay que incluir los de abajo */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;
void geeks()
{
    int var = 20;

    // declarar variable puntero
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;

    // assign the address of a variable to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
    cout << "Value at &var = " << &var << "\n";
}
// Driver program
int main() 
{ 
  geeks(); 
  return 0;
}
