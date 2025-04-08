#include <stdio.h>
int main()
{
    // now we see the conditional operator - if else variation

    // get the value
    int money;
    scanf("%d", &money);

    // you can sue just if without else
    if (money >= 100)
    {
        printf("I'm gonna eat Burger\n");
    }

    // you can use if if if however you need
    // simple rule if condition match, he just print value
    // operation doesn't stop if any operation will match coz we don't use else.
    if (money >= 90)
    {
        printf("I'm gonna eat Burger\n");

        // you can use nested route anywhere any type of if else whatever you need
        if (money >= 50)
        {
            printf("I'm gonna eat Potato Fry\n");

            if (money >= 40)
            {
                printf("I'm gonna eat ice bar\n");
            }
            else
            {
                printf("i don't eat ice bar");
            }
        }
    }
    if (money >= 80)
    {
        printf("I'm gonna eat Chicken Fry\n");

        // you can use nested route anywhere any type of if else whatever you need
        if (money >= 30)
        {
            printf("I'm gonna buy a chocolate for my baby's\n");
        }
        else
        {
            printf("I'm gonna buy chocolate but, i'll eat that");
        }
    }
    if (money >= 70)
    {
        printf("I'm gonna eat Momo\n");
    }

    
    if (money >= 10)
    {
        printf("Hi");
    }
    printf("hello");

    return 0;
}