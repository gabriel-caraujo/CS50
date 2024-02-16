#include<stdio.h>
#include<cs50.h>

int main (void)

{
    string first = get_string("what's your name? ");
    string middle = get_string("your middle name?");
    string last = get_string("and your last name?");
    printf("hello, %s %s %s\n", first, middle, last);
}