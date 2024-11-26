#include <stdio.h>
int main(){
    char c;
    printf("Enter a charcter: ");
    scanf("%c",&c);
    // ASCII value of a is 97 and z is 122
    if (c>96 && c<123) {
    printf("The lowercase of the provided character is: %c\n", c);
    }
    // ASCII value of A is 65 and z is 90
    else if (c>64 && c<91){
    printf("The lowercase of the provided character is: %c\n", c+32);
    }
    else{
    printf("Enter the alphabets");
    }
    return 0;
}
