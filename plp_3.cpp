#include <iostream>
using namespace std; 

//this will be used to create a program that multiplies two numbers from user input 
int main() {
    int x, y;
    int mult;
    cout << "Type a number: ";
    cin >> x; //this function takes the user input from the keyboard and stores it in the variable x 
    cout << "Type in another number: ";
    cin >> y; 
    mult = x * y; 
    cout << "The product of x and y is: " << mult << endl;
    return 0;
}