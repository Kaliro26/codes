// Q11. Write a program to calculate simple interest according to given principal, rate and time.

// Formula
// A = P (1 + rt)
// A	=	final amount
// P	=	initial principal balance
// r	=	annual interest rate
// t	=	time (in years)
#include <iostream>
 using namespace std;
int main()
{
    int a;
    int P;
    int r;
    int t;
    cout<<"enter the value of P : ";
    cin>>P;
    cout<<"enter the value of r : ";
    cin>>r;
    cout<<"enter the value of t : ";
    cin>>t; 
    cout<<"the value of a is "<<P*(1+(r*t));
  return 0;
}
