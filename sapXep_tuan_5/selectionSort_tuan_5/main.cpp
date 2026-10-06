#include <stdio.h>
void selectionSort(int a[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    selectionSort(a,n);
    return 0;
}
void selectionSort(int a[],int n){
    for (int i=0;i<n-1;i++){
        int minIndex=i;
        for (int j=i+1;j<n;j++){
            if (a[minIndex]>a[j]){
                minIndex=j;
            }
        }
        if (minIndex!=i){
            int k=a[i];
            a[i]=a[minIndex];
            a[minIndex]=k;
        }
        for (int h=0;h<n;h++){
        printf("%d ",a[h]);
    }
    printf("\n");
    }
}