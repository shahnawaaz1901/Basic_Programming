/*
Return type

What is the return type of a method that does not returns any value ?

1. int
2. double
3. char
4. void                 // Correct

Solution : The functions which doesn't return any value, their return type is "void". 

*/

/*
Return type

Let’s say the problem is - You will be given two numbers(both integers) and 
you need to return their sum.
For this problem, what should be the return type of function -

1. int                  // Correct, Because sum of two int is int
2. boolean
3. char
4. void

Solution : We need to return the sum of two integers, which is again an integer. 
            So the sum that we want to return is of type "int". 
            Hence return type should be "int" for this function.
*/

/*
What is the output

What will be the output of following code
void func (int a, int b){               // Value of a is 7 and b is 12
      cout << (a + b);
 }

int main() {
    int a = 7;
    func(a, 12);
}

Output : 19

Solution : The above function is simply adding the 2 values, a and b. 
            Since a=7 and b=12, the answer is 7+12=19.
*/

/*
What will be the output of the following code ?

void demo(int a, int b){
    cout << a << " " << b;
}

int main() {
    int a = 5;
    int b = 15; 
    demo(a);
}

1. 5 0
2. Compilation Error
3. 5 15
4. None of these

Solution : The function has been defined using 2 parameters, a and b, 
        but we are passing only 1 argument, hence it would throw up a compilation error.
*/