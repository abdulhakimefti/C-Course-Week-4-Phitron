
// Problem B
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int highestValue=0;
    for(int i =0;i<n;i++){
        if( highestValue<arr[i]){
            highestValue = arr[i];
        }
    }
    int amount =0;
    for(int i =0;i<n;i++){
        int diff = highestValue - arr[i];
        amount+=diff;
    }
    printf("%d\n",amount);

    return 0;
}
