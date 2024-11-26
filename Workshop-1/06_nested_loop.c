#include <stdio.h>
int main(){
    char c;
    for (c='A'; c<='E'; c++){
        for(int i = 'A'; i<=c; i++){
            printf("%c",c); 
        }
        printf("\n");
    }
    return 0;
}