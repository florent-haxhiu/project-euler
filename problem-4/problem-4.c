#include <stdio.h>
#include <stdbool.h>

/*
  Largest Palindrome product
  - Find the largest palindrome made from the product of two 3-digit numbers

  Need to check if the arguement passed through is a palindrome
  Need to loop through the 3 digit numbers to find the largest palindrome number
*/

int reverse(int n);
int isPalindrome(int n);

int reverse(int n)
{
  float reversed;
  reversed = 0;
  while (n > 0)
  {
    reversed = (10 * reversed) + (n % 10);
    n /= 10;
  }
  return reversed;
}

int isPalindrome(int n)
{
  return n == reverse(n);
}

int main(void)
{
  int largestPalindrome, a, b;
  int db;
  largestPalindrome = 0;
  a = 999;
  while (a >= 100)
  {
    if ((a % 11) == 0)
    {
      b = 999;
      db = 1;
    }
    else
    {
      b = 990;
      db = 11;
    }
    while (b >= a)
    {
      if ((a * b) <= largestPalindrome)
      {
        break;
      }
      if (isPalindrome(a * b))
      {
        largestPalindrome = a * b;
      }
      b = b - db;
    }
    a = a - 1;
  }
  printf("%d\n", largestPalindrome);
  return 0;
}