/* This program reads two integrs from the user and prints their sum */

#include <iostream>
using namespace std;

//MARK:- Main Function

int main()
{
    //MARK:- Variables
    int num1;  //will hold the first input
    int num2;  //will hold the second input
    int sum;   //will hold the sum
    
    cout<<"Please enter two numbers seperated by a space:"<<endl;
    cin>>num1>>num2;
    
    sum = num1 + num2;
    
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    
    return 0;
}
