#include<stdio.h>
int main(){
    printf("\n\n******Types of Operators in C******");

    /*

    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Misc Operators

    */

    // Arithmetic Operators
    printf("\n\nArithmetic Operators: ");
    int a=5,b=3,c=3; 
    printf("\n\nThe integers are: %d, %d, %d", a, b, c);
    printf("\n\nThe sum of all integers is: %d", a+b+c);
    printf("\nThe multiplication of all integers is: %d", a*b*c);
    printf("\nThe difference of a and b is: %d", a-b);
    printf("\nThe division (integer) of a and b is: %d", a/b);
    printf("\nThe modulo of a and b is: %d", a%b);
    printf("\nThe increment of a: %d", a++); //won't work because first it will print and then add 
    printf("\nThe increment of b: %d", ++b); //      work because first it will add and then print 
    printf("\nThe decrement of c: %d", --c); //same goes for decrement
    
    // Relational Operators

    int harshit = 234, ritik = 324;
    printf("\n\nRelational Operators:");
    printf("\n\nis harshit == ritik: %d", harshit==ritik);
    printf("\nis harshit != ritik: %d", harshit!=ritik);
    printf("\nis harshit > ritik: %d", harshit>ritik);
    printf("\nis harshit < ritik: %d", harshit<ritik);
    printf("\nis harshit <= ritik: %d", harshit<=ritik);
    printf("\nis harshit >= ritik: %d", harshit>=ritik);
     
    // Logical Operators

    int e=1, f=0;
    printf("\n\nLogical Operators:");
    printf("\n\nAND operator e and f: %d", e&&f );
    printf("\nOR operator e and f: %d", e||f );
    printf("\nThe logical operator !e returned: %d", !e);
    printf("\nThe logical operator !f returned: %d", !f);

    // Bitwise Operators

    printf("\n\nBitwise Operators: \n\n");
    int A = 60, B = 14;

    printf("Bitwise and oeprator returned %d\n", A&B);
    printf("Bitwise or operator returned %d\n", A|B);
    printf("Bitwise xor operator returned %d\n", A^B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator returned: %d\n", A<<B);
    printf("Bitwise right shift operator returned: %d\n", A>>B);
    return 0;

    // Assignment Operators
    // =, +=, -=, %=, %=, etc.
    
}

