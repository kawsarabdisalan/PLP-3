# PLP-3

To declare a syntax in C++, you must specificy the name of the function followed by a closed parenthesis. <br>
```
void myFunction{
//block of code
}
```
  - myFunction is the name of the function
  - Void means that function does not have a return value. 
  - You can place your code in between the curly brackets.
To call a function, you can write the function name followed by ().
  ```
  #include <iostream>
  using namespace std;

  void modifyValue(int x){ //function name is modifyValue
    x = 10;  
  }

  int main(){
    int y = 100;
    modifyValue(y); //you can call the function by saying function name followed by ()
    cout << y << endl;  // Will still print 100
    return 0;
  }

  ```
There are some rules when it comes to calling a function.
  - You must declare a function before the main()
  - You can seperate the declartion from the definition by putting the declaration above main and the definition afterwards.
 
  ```
  #include <iostream>
  using namespace std;

  void myFunction();
  int main(){
  myFunction();
  return 0;
  }
  void myFunction(){
  cout <<"This is my function!"<<endl; //this will print out: This is my function!
  }
  ```
In C++, this language does support recurssions functions. This example shows a recurssion of 5. Once it reaches 0, the function will end and return the results. 
```
#include <iostream>
using namespace std;


    int sum(int x) {
        if (x > 0){
            return x + sum(x - 1);
        } else{
            return 0;
        }
    }

    int main() {
        int result = sum(5);
        cout << result << endl;
        return 0;
    }

```
C++ allows functions to accept multiple paramaters. Paramaters allows information to be passed down throughout the program. It can act as variables inside of functions. 
The syntax for paramaters is that it is specificed after the function name inside of paranthesis and you can add as many paramaters as you want as long as it is seperated by commas. 

```
#include <iostream>
using namespace std;

void myFunction(string fname, int age){
cout << fname << "Alex" << age << "years old. \n" ;
}
int main(){
myFunction("Abby", 20);
myFunction("Teale",14);
}
//will print out: "Abby Alex. 20 years old. Teale Alex. 14 years old."
```
If you want to add different types of data in the paramaters, make sure that the function call must have same number of arguments as paramaters and arguments must be passed down in the same order. 

In C++, technically you can only return one value at a time but there are ways to get around this by using pointers, structures, and arrays. <br>
Pointers: Pass the arguments with their address and make changes through pointers. This allows values to change into the orignal arguments. <br>
Structures: Define a structure with two integer variables and storing greater and smaller values in those variables. Pass the values using the structures. <br>
Arrays: When the array is passed as an argument, base address is passed to the function. All the changes that were made to the copy will be changed in the original. Arrays can only be used when returned items are the same type. <br>

C++ functions can be passed by references and passed by values. By default, C++ is passed by value. Passed by references is usually used by programmers when you need to change the values of an arguments. This can be done using pointers *& to change the value of a variable. 
```
(int x) //passed by value
(int &x) //passed by reference

```
Arguments: Arguments that are passed by value are stored in stacks. When you pass an integer, a copy of it is stored in a stack. <br> 
When an argument is passed by reference, the reference is stored in a stack but the variable is stored in a heap. <br>
Paramaters: Paramaters are stored in stacks as the copy of the paramater is stored in a stack. <br>
Local variables: Local variables are stored in stacks. <br>
Overall, functions with values like primitives are stored in stacks while references and pointers are stored in heaps. 

Scoping rules:
Local Variables: They are declared in a block and don't exist outside of the block. 
<br>
Global variables - They are declared at the top of the program outside of all of the functions and blocks and are available throughout the entire program.


Some side effects in C++ include: modifiying variables, changing data structures, etc. 

