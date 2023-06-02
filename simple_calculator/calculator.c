#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, res;
    char opt;

    printf("Enter the operator you want to use: ");
    scanf("%c", &opt);

    printf("Enter the first number you want to add: ");
    scanf("%d", &n1);

    printf("Enter the second number you want to add: ");
    scanf("%d", &n2);
    

    switch (opt){
        case'+':
            res = n1 + n2;
            printf("the result of addition of %d and %d is %d", n1, n2, res);
            break;
        case'-':
            res = n1 - n2;
            printf("The result of the subtraction of %d and %d is %d", n1, n2, res);
            break;
        case'*':
            res = n1 * n2;
            printf("The result of the multiplication of %d and %d is %d", n1, n2, res);
            break;
        case'/':
            if (n2 == 0){
                printf("the value of the second intiger shouldnt be 0, please enter a valid value: ");
                scanf("%d", &n2);
            }
            res = n1 / n2;
            printf("The result of the division of %d and %d is %d", n1, n2, res);
            break;
        default:
            printf("canot do multiplcation.");
    }
}