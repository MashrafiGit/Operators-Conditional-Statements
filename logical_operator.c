#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 20;

    // Logical AND (&&)
    if (a > b && c > a) {
        printf("AND: Both conditions are true\n");
    } else {
        printf("AND: One or both conditions are false\n");
    }

    // Logical OR (||)
    if (a < b || c > a) {
        printf("OR: At least one condition is true\n");
    } else {
        printf("OR: Both conditions are false\n");
    }

    // Logical NOT (!)
    if (!(a < b)) {
        printf("NOT: a is not less than b\n");
    } else {
        printf("NOT: a is less than b\n");
    }

    return 0;
}
