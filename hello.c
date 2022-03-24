#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //Input username
  string name = get_string("Whats your name? ");
  
  //User output
  printf("hello, %s\n", name);
}