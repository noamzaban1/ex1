/******************
Name:noam zaban
ID:212052674
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    char c1;
    printf("pleaes enter a char\n");
    scanf("%c", &c1);
    printf("the numerical value is:%d\n",c1);
    printf("%d\n",c1 & 1);
    
    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    int n2;
    printf("enter a negetive integer:\n");
    scanf("%d", &n2);
    printf("1 s complement: %d\n", n2 - 1);
    printf("unsigned value: %u\n", n2);

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    int a3,b3,c3;
    printf("enter 3 numbers:\n");
    scanf("%d %d %d", &a3, &b3, &c3);
    int d3 = (a3 >> b3) << c3;
    printf("result: %d\n", d3);
    

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    int a4,b4,c4;
    printf("enter 3 numbers:\n");
    scanf("%d %d %d", &a4, &b4, &c4);
    int a44 = a4 & 1;
    int b44 = b4 & 1;
    int c44 = c4 & 1;

    int result = (a44 & b44) | (b44 & c44) | (c44 & a44);
    printf("0 for even, 1 for odd: %d", result);
        

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    int octVal, hexVal;
    printf("Enter Octal number and Hex number:\n");
    scanf("%o %x", &octVal, &hexVal);
    printf("LSBs: %d %d\n", octVal & 1, hexVal & 1);
    printf("MSBs: %d %d\n", (octVal >> 31) & 1, (hexVal >> 31) & 1);
   
    printf("Bye!\n");

    return 0;
}
