// Function Calling Works as Stack Means First Function Executes at Last
#include<iostream>
using namespace std;

/*
When Ever Function is Called Compiler Goes For that Function After Completes
Execution of that Function then Compiler Executes Remaining Statement of Current Function
*/
void d(){
    cout << "Inside d Function " << endl;       // Print Statement is Execute after that Compiler Returns From this Function
}

void c(){
    cout << "Inside c Function " << endl;
    d();            // d is Called After Print Statement So it First Print Inside c Function
}
void b(){
    c();            // c Called First Before Print Statement
    cout << "Inside b Function " << endl;
}

void a(){
    b();            // b is Called First Before Print Statement
    cout << "Inside a Function " << endl;
}

int main(){
    a();            // a is Called First Before Print Statement
    cout << "Inside Main Function " << endl;
}

/* Output is : */

/*
Inside c Function 
Inside d Function
Inside b Function
Inside a Function
*/