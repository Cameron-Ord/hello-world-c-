#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{

    //REF//
    string food = "Pizza"; // A food variable of type string

    cout << food << "\n";  // Outputs the value of food (Pizza)
    cout << &food << "\n"; // Outputs the memory address of food   
    
    //PTR//

    //Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr).//
    // Note that the type of the pointer has to match the type of the variable you're working with.//

    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    //Use the & operator to store the memory address of the variable called food, and assign it to the pointer.//
    //Now, ptr holds the value of food's memory address.//

    // Output the memory address of food 
    cout << &food << "\n";

    // Output the memory address of food with the pointer 
    cout << ptr << "\n";

    //You can declare a pointer variable three ways://

    //string* mystring;  
    //string *mystring;
    //string * mystring;

    // --------------------------------------------------- //

    //The pointer value can be modified. If this is done, it will also change the value of the original variable.

    *ptr = "Hamburger";

    cout << *ptr << "\n";
    cout << food << "\n";
}