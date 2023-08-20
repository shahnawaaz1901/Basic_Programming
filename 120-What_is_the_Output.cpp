/*
Function calling
What is the correct syntax for passing array to a function -

void func(int a[]) {
}

int main() {
    int a[10];
    // Call function "func" and pass array a
}

1. func(a[]);
2. func(a[10]);
3. func(int a[10]);
4. func(a);                                 // Correct

Solution Description : In C++, when passing an array to a function, you only 
                    need to specify the array name without any brackets or size 
                    information.
*/

/*
What is the output

#include <iostream>
using namespace std;
int main() {
    int a[10];
    cout << sizeof(a) << endl;
}

1. 10
2. 40                               // Correct
3. 4
4. 8

Solution Description : In C++, the sizeof operator returns the size of the object 
                    in bytes. In this case, a is an array of 10 integers, and each 
                    integer typically occupies 4 bytes of memory on most systems.
                    
                    Therefore, when you multiply the size of each element 
                    (4 bytes) by the number of elements in the array (10), 
                    you get a total size of 40 bytes.
*/

/*
What is the output
(Assume an integer takes 4 bytes and a pointer takes 8 bytes.)

#include <iostream>
using namespace std;

void func(int a[]) {
    cout << sizeof(a) << endl;
}

int main() {
    int a[10];
    func(a);
}
1. 10
2. 40
3. 4
4. 8                                // Correct

Solution Description : It's important to note that when you pass an array to 
                    a function in C++, it decays into a pointer to its first 
                    element. This means that the sizeof(a) inside the func 
                    function will not give you the actual size of the array, 
                    but instead the size of the pointer to the array.
*/