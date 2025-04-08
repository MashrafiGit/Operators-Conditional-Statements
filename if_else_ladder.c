#include <stdio.h>
int main()
{
    // now we see the conditional operator - if else ladder

    // get the value
    int money;
    scanf("%d", &money);

    // it is possible to do just one work, but you can add a lot of condition however you want, and it's work synchronize, when any condition will match operation just stop there and print the output, let's see.
    if (money >= 100)
    {
        printf("I'm gonna eat Burger");
    }
    else if (money >= 50)
    {
        printf("i'm gonna eat Coffee");
    }
    else if (money >= 20)
    {
        printf("i'm gonna eat Potato");
    }
    else
    {
        printf("i don't eat Burger");
    }

    return 0;
}