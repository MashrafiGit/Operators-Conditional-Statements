#include<stdio.h>
int main()
{
    // now we see the conditional operator - if else

    // get the value
    int money;
    scanf("%d", &money);
    
    // it is possible to do just one work.
    if(money>=100)
    {
        printf("I'm gonna eat Burger");
    }
    else
    {
        printf("i don't eat Burger");
    }

    return 0;
}