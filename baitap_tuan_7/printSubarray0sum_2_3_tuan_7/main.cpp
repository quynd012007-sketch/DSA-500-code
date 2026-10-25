#include <stdio.h>
void printSubarray0sum(int a[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printSubarray0sum(a,n);
    return 0;
}
void printSubarray0sum(int a[],int n){
    int sum[n];
    sum[0]=a[0];
    for (int i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
    }
    int c=0;
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (sum[i]==sum[j]){
                if (c==0){
                printf("Subarrays with zero-sum are:\n");
                c++;
                }
                for (int k=j+1;k<=i;k++){
                    printf("%d ",a[k]);
                }
                printf("\n");
            }
        }
    }
    if (sum[n-1]==0){
        if (c==0){
            printf("Subarrays with zero-sum are:\n");
            c++;
        }
        for (int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
    }
}
