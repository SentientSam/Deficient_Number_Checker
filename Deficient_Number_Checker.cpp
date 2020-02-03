// ***************************************************************************************
// * Example file made by Samuel Lamb                                                    *         
// * The purpose of this file is to show an implementation of a deficient number checker *  
// ***************************************************************************************
using namespace std; // For ease of use, not necessary if you are willing to put std:: before cout and endl
#include <iostream> // Input/Output stream, necessary for cout and cin
int main() // Beginning of main function
{
int num; // Setting number which will be the input
int sum = 0; // The sum variable will be used to add up the factors (divisors)
do // Do-while is saying that while the num variable is greater than 0, re-loop
{
  cout << "Please enter a number (Press 0 to exit): " << endl; // Prompting user input
  cin >> num; // User input
  if (num == 0) // If the number is 0, exit the loop
  {
    return 0;
  }
  for (int i = 1; i < num; i++) // This for loop increments from 1 to 1 less than the number, checking if the index is a factor
  {
    if (num % i == 0) // % is modulus, saying if num variable divided by the index has a remainder of 0,  it is a factor
    {
      sum += i; // If the current index is a factor, add it to the sum variable
    }
  }
  if (sum < num) // If the sum of all factors is less than the input, the number is deficient
  {
    cout << "This number is deficient" << endl;
  }
  if (sum > num) // If the sum is less than the input, the number is not deficient
  {
    cout << "This number is not deficient" << endl;
  }
  sum = 0; // This is important, resetting sum after every number checked
} 
while(num > 0);
};