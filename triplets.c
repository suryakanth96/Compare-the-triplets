#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a=0,b=0;
void cmp(int x,int y){
    if(x>y)
        a++;
    else if(x==y)
    {}
    else
        b++;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    cmp(a0,b0);
    cmp(a1,b1);
    cmp(a2,b2);
    printf("%d %d",a,b);
    
    

    return 0;
}