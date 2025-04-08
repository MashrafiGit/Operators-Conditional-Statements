#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;

    // Let's do the operation. First of all, we have to know that relational operations return just true/false (0/1).

    // less than <
    int lessThan = a < b;
    printf("a is less than b = %d\n", lessThan);

    // less than or equal <=
    int lessThanEqual = a <= b;
    printf("a is less than or equal to b = %d\n", lessThanEqual);

    // greater than >
    int greaterThan = a > b;
    printf("a is greater than b = %d\n", greaterThan);

    // greater than or equal >=
    int greaterThanEqual = a >= b;
    printf("a is greater than or equal to b = %d\n", greaterThanEqual);

    // equal ==
    int equal = a == b;
    printf("a is equal to b = %d\n", equal);

    // not equal !=
    int notEqual = a != b;
    printf("a is not equal to b = %d\n", notEqual);

    return 0;
}
