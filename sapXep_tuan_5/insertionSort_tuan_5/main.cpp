#include <stdio.h>
void insertionSort(int a[],int n);
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
    insertionSort(a,n);
    return 0;
}
void insertionSort(int a[],int n){
    for (int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]>key){
        int k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
            j--;
        }
        for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    }
}