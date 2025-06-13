#include<stdio.h>
int main(){
    
    // wont work
    long double ba = 612344.23897;
    printf("User initialized long double: %Lf",ba);

    // will work
    long double ab;
    printf("\n\nEnter your long double: ");
    scanf("%Lf", &ab);

    printf("Entered long double: %Lf", ab);
    return 0;
}