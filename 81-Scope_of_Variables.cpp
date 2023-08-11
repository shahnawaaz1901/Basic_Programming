#include<iostream>
using namespace std;
int main(){
    int i = 10;

    cout << i << endl;

    //int i = 30;                 // You Can Not ReDeclare A Variable which is Previously Declared in Same Scope HowEver You Can Update Value withOut Declaration
    i = 30;                       // You Can Do this, Update Value WithOut ReDelclaration
    if(i == 30){
        int i = 20;               // You Can Declare i Here in if Condition But You Can Not Redeclare i in this Scope Because Only One Declartion of Variable(Which Name is Same) is Possible in Same Scope
        cout << 20 << endl;
    }
    cout << i << endl;          // Gives 30, Because i which is declare in if is Not Accessable So it Means You Access i Which is declare Outside the if Condition
}