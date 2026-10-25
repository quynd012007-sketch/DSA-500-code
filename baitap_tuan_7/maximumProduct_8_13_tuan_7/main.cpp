#include <stdio.h>
void maximumProduct(int a[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    maximumProduct(a,n);
    return 0;
}
void maximumProduct(int a[],int n){
    int min1=a[0],min2=a[1],max1=a[1],max2=a[0];
    for (int i=2;i<n;i++){
        if (a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if (a[i]<min2){
            min2=a[i];
        }
        if (a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if (a[i]>max2){
            max2=a[i];
        }
    }
    if (min1*min2>max1*max2){
        printf("Pair has Maximum product is: (%d, %d)", min1, min2);
    }
    else if (min1*min2<max1*max2){
        printf("Pair has Maximum product is: (%d, %d)", max1, max2);
    }
    else{
        printf("Pair has Maximum product is: (%d, %d) or (%d, %d)", min1, min2, max1, max2);
    }
}