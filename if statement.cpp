// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include "iostream"
using namespace std;

int main(){
    int number;
    cout << "Enter an integer" <<endl;
    cin >> number;

    //checks if the number is postive 
    if (number>1)
    {
      cout <<"You entered a postive number "<<endl;
        /* code */
    }
    
    cout << "This line will always executed";
    return 0;

}