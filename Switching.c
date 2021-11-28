#include <stdio.h>
int main()
{
    char item;
    printf("pick up which item you want:\n");

    printf("A.ice cream\nB.biscuit\nC.food\nD.mobile\n");
    scanf("%c",&item);
    switch(item)
    {
    case 'A':
    printf("you picked ice cream.");
    break;
    case 'B':
    printf("you picked biscuit.");
    break;
    case 'C':
    printf("you picked food.");
    break;
    case 'D':
    printf("you picked mobile.");
    default:printf("Numbers and small alphabets are not allowed,only A,B,C,D.....");
    }
    return 0;
}
