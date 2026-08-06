//Towers of Hanoi implementation in Cusing Recursion
/*
 * C program for Tower of Hanoi using Recursion
 */

#include <stdio.h>

void towers(int, char, char, char);
int main()
{
    int num;
    char source, aux, dest;

    printf("Enter the number of disks : ");
    scanf("%d", &num);

    printf("Enter source peg : ");
    scanf(" %c", &source);
    printf("Enter auxiliary peg : ");
    scanf(" %c", &aux);
    printf("Enter destination peg : ");
    scanf(" %c", &dest);

    printf("Minimum number of moves required : %lld\n", (1LL << num) - 1);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, source, dest, aux);
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
