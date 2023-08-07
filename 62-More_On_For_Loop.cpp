/*Some Conditions in For Loop is Optional*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;                  // You Can Also Initialize the i outSide the For Loop so i Can be Accessable Outside the for Loop
    for(;;){
        cout << i << " ";
        if(i == n){                     // You Can Also skip Condition when writing statement on for Loop You Can Also Put into the For Loop
            break;  
        }
        i++;                    // You Can Also Increment or Decrement into the For Loop instead of Writing on top on For Loop
    }
}
