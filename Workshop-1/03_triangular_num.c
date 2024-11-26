#include <stdio.h>
int main(){
    int n;
    int tri;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        tri = i*(i+1)/2;
        printf("%d\t",tri);
    }
    return 0;
}