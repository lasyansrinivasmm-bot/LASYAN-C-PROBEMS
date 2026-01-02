#include <stdio.h>
int main() {
    //Your Code goes here!
    int num,i, flag=0;
    scanf("%d",&num);
    if(num<=1){
        printf("%d is not a prime number ", num);

    }else{
     for(i=2;i<num/2;i++){
     if(num%i==0){
        flag=1;
        break;
        }
     }
        if(flag==0)
        printf("%dis a prim number",num);
        else
        printf("%d is not a primr number ");
    }
    return 0;
}