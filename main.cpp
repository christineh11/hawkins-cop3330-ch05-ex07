#include "std_lib_facilities.h"
#include <iostream>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */

/*

Quadratic equations are of the form
a · x^2 + b · x + c = 0
To solve these, one uses the quadratic formula:
There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a
quadratic equation. Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program
detects an equation with no real roots, have it print out a message. How do you know that your results are plausible? Can
you check that they are correct?

We know the results are plausable because the roots are a positive and a negative number. Also, the numbers 3,8, ad 2 for a,b,c in the equation gives a low positive and negative number. It doesn't give crazy roots or make both roots negative/positive. For a check of plausibility it doesn't mean our guess has to be exatly right, but it is a good enough guess. I used error() to catch when the discriminant was less than 0.

*/


//equation to find roots
double equation(double a, double b, double c)
{
  double discriminant= (b*b)-(4*a*c);
  double x1;
  double x2;


//case if it is less than 0, it is an error
if(discriminant<0)
{
  cerr<<"no real roots!";
  //fails
  return 1;

}else
{
  x1=(sqrt(discriminant));
  x2=(-b)-sqrt(discriminant)/(2*a);
  cout<<"x=: "<<x1<<" and "<<x2;
}

//success
return 0;

}

int main() {
  double a;
  double b;
  double c;

  cout<<"Input values for a,b, and c (with a space between each): \n";

//reads in a,b,c 
  cin>>a>>b>>c;

  equation(a,b,c);

} 