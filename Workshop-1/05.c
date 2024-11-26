
#include <stdio.h>
int main(){
char ch;
//declaring the variable ch char ch;
//while Loop if ch values if not equal to 13 the program keeps getting executed
printf("Enter the characters ( Press space to exit! ): \n");
while(ch !=32 && ch != 9 ){
ch= getchar();
if(ch >= 'a' && ch <= 'z'){
    printf("The lowercase is %c. \n ",ch);
}
//takes characters value from A to Z
else if (ch >= 'A' && ch <= 'Z'){
ch=ch+32;
printf("The lowercase is %c \n", ch);
}
}
//asks the user to enter the character again if the ch value is not equal to 13
ch= getchar();
return 0;
}