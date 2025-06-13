#include<stdio.h>

int main()
{
    // compiler will ignore this
    /*
    This is a multi line comment


    int, float, char -all datatypes

     a is a container that contains 7. 
    */


    int a=7; // (4) 2 to 4 bytes depending on architecture
    unsigned int integer = 82; // (4) when we know that our integer will always be positive
    long integer1 = 6; // (4) 4 bytes
    short integer2 = 8; // 2 bytes

    float b= 8.4; // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45; // 8 bytes - 15 decimal places precision 
    long double myfloat2 = 7.238496234; // 10 bytes - 19 decimal places precision

    char c = 't';  // char datatype can only have single quote ' ' 1byte
    // must use single quotation

    // Int types

    printf("Enter your Integer number (existing %d): ", a);
    scanf("%d", &a);

    printf("Enter your unsigned integer number (existing %u): ", integer);
    scanf("%u", &integer);

    printf("Enter your long integer number (existing %d): ", integer1);
    scanf("%ld", &integer1);

    printf("Enter your Short integer number (existing %d): ", integer2);
    scanf("%d", &integer2);

    // Float types

    printf("Enter your float number (existing %f): ", b);
    scanf("%f", &b);

    printf("Enter your double float number (existing %f): ", myfloat1);
    scanf("%f", &myfloat1);

    printf("Enter your long double float number (existing %Lf): ", myfloat2); 
    // Note: On platforms like Windows with MinGW, 
    // %Lf in printf may internally behave like %f due to limited long double support, 
    // leading to inaccurate or incomplete display of long double values.
    scanf("%Lf", &myfloat2);

    printf("Enter your char (exisitng %c): ", c);
    scanf(" %c", &c); /* Jab tu terminal me Enter dabata hai. Wo Enter actually newline (\n) hota hai, jo input buffer mein bacha rehta hai.
    
    Toh jab tu turant baad mein scanf("%c", &c); karta hai, wo us bache huye \n ko read kar leta hai — isliye lagta hai input le hi nahi raha ya galat char read kar raha hai.
    */

    printf("\n The size of int is: %d", sizeof(int));
    printf("\n The size of unsigned int is: %d", sizeof(unsigned int));
    printf("\n The size of short int is: %d", sizeof(short));
    printf("\n The size of long int is: %d", sizeof(long));
    printf("\n The size of float is: %d", sizeof(float));
    printf("\n The size of double is: %d", sizeof(double));
    printf("\n The size of long double is: %d", sizeof(long double));
    printf("\n The size of char is: %d", sizeof(char));
    printf("\n The size of unsigned char is: %d", sizeof(unsigned char));

    printf("\n******Rules of creating variables******");
    // int 5harshit; <- wrong syntax
    int _harshit;
    int _harshit0;
    int harshitRaj; // This is variable Declaration
    harshitRaj = 75; // This is variable Initialization

    char five = '5'; // This is variable Declaration and Initialization

    const int i1 = 9;
    // i1 = 10; <- i1 is read only variable, it can not be changed.
    
    harshitRaj = 96;
    // harshitRaj is not a const so it can change. this will be 96 now.
    return 0;
}