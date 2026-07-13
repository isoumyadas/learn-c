// #include <cs50.h> // you have install this package 
#include <stdio.h>

int main(void)
{
    // printf("hello, world\n");

    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);

    char *text = "This is something you're not aware of";
    printf("=>, %s\n", text);
}

