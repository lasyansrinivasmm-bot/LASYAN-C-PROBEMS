#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,temp,sum=0,r,q;
    printf("enter tour number");
    scanf ("%d",&q);
    temp=q;
    while (q!=0){
        r=q%10;
        sum=sum*10+r;
        q=q/10;

    }
    if(temp==sum){
        printf("palindrome");
    }
    else{
        printf("not a paLINDROME");
    }

    
    return 0;
}