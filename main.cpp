#include <iostream>

using namespace std;

    void numSwaps (int &x, int &y){
    int z = x;
     x = y;
     y = z;

     }
int main(){
    int firstNum = 20;
    int secondNum = 30;

   cout<<"Before swap: "<<endl;
   cout<<firstNum<<endl;
   cout<<secondNum<<endl;

     numSwaps(firstNum, secondNum);

  cout << "After swap: " << endl;
  cout << firstNum <<endl;
  cout << secondNum << endl;
    return 0;
}
