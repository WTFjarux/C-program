#include <stdio.h>
int main(){
int mul=1;
int n;
printf("Enter a number to find its factorial: ");
scanf("%d",&n);
for (n; n>=1; n--){
    mul *= n;
}
printf("The factorial of %d is ", mul);
    return 0;
}
