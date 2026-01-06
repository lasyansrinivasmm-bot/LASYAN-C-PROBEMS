#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i, sum;
    int arr[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        sum-=arr[i];
    }
    printf("%d",sum);
    return 0;
}