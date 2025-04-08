#include <stdio.h>
int main()
{
    // now we see the conditional operator - nested if else

    // get the value
    int money;
    scanf("%d", &money);

    // normal conditional do just on work but the nested condition can do multiple work with nested if else, let's see.
    if (money >= 10000)
    {
        printf("I'm gonna go Saint Martin on vacation\n");

        // this is nested if else you can use nested if else any inside of if else condition
        if (money >= 5000)
        {
            printf("then i'll go Cox'z Bazar\n");
        }
        else
        {
            printf("then i back to my home\n");
        }
    }
    else if (money >= 2000)
    {
        printf("i gonna go kuakata on tour\n");
    }
    else
    {
        printf("i don't go on vacation anywhere\n");
    }

    return 0;
}