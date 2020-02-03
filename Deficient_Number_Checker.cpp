// ***************************************************************************************
// * Example file made by Samuel Lamb                                                    *         
// * The purpose of this file is to show an implementation of a deficient number checker *  
// ***************************************************************************************
using namespace std; // For ease of use, not necessary if you are willing to put std:: before cout and endl
#include <iostream> // Input/Output stream, necessary for cout and cin
int main() // Beginning of main function
{
int num; // Setting number which will be the input
int sum = 0; // The sum variable will be used to add up the facotrs (divisors)
bool neg; // A true/false to check for a negative input
do // Do-while is saying that while the num variable is greater than 0, re-loop
{
  cout << "Please enter a number (Press 0 to exit): " << endl; // Prompting user input
  cin >> num; // User input
  if (num == 0) // If the number is 0, exit the loop
  {
    return 0;
  }
  if (num < 0) 
  {
    neg = true; // If the number inputted is negative, neg = true;
  }
  for (int i = 1; i < num; i++) // This for loop increments from 1 to 1 less than the number, checking if the index is a factor
  {
    if (num % i == 0) // % is modulus, saying if num variable divided by the index has a remainder of 0,  it is a factor
    {
      sum += i; // If the current index is a factor, add it to the sum variable
    }
  }
  if (neg == true) // The reason for this if/ else-if is that if there is a negative input, it will not also say "not deficient".
  {
    cout << "This program does not accept negative numbers, please try again" << endl;
  }
  else if (neg == false)
  {
    if (sum < num) // If the sum of all factors is less than the input, the number is deficient
    {
      cout << "This number is deficient" << endl;
    }
    if (sum > num) // If the sum is less than the input, the number is not deficient
    {
      cout << "This number is not deficient" << endl;
    } 
  }
  sum = 0; // This is important, resetting sum after every number checked
  neg = false; // You also need to reset the boolean expression;
} 
while(num != 0); // While num != 0 so that a negative or positive input will not exit the expression
};