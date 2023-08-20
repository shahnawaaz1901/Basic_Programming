/*

Array declaration

Which of the following correctly declares an array of size 10 ?

1. int array[10];                           // Correct
2. int array;
3. array{10};
4. array array[10];

Solution Description :
Option A) int array[10], it is the correct syntax to declare an array of size 10. 

Option B) int array,  it will declare a variable that can store an integer instead of an array.

Option C) array{10}, it will throw a compilation error due to wrong syntax.

Option D) array array[10], it will also throw a compilation error because 
        there is no data type named as array in c++. 
*/

/*
What will be the output of the following code ?

int arr[100];
cout << arr[0];

1. 0
2. 0 or Garbage Value                           // Correct
3. Error
4. null

Solution Description : Since the value of arr[0] is not explicitly set in the given code, 
            it will be assigned the value of whatever happened to be stored in the memory 
            location assigned to arr[0]. This value could be any garbage value that was 
            previously stored in that memory location.

*/

/*
What is the index number of the last element of an array with 5 elements ?

Output : 4                          // Last Index of Array is (ArraySize - 1)

Solution Description
In an array indexing starts from 0. So, if an array has 5 elements, 
the last element would be at index 4. This is because the index numbers 
would range from 0 to 4 for a total of 5 elements.
*/

/*
Access element

Which of the following accesses the third element stored in array?

1. array[3]
2. array[2]                         // Correct, Because First Element Index is 0
3. array(3)
4. array

Solution Description : In C++, array indexing starts from 0. So, if you have an array called 
                "array," the first element would be at index 0, the second element at index 1, 
                and the third element at index 2.

*/