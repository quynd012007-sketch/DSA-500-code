#include <stdio.h>
int phanDoan(int a[], int left, int right, int pivot,int n);
void quickSort(int a[], int left, int right, int n);

int main(){
    int n; 
    scanf("%d",&n);
    int a[n];
    for( int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1,n);
    return 0;
}
int phanDoan(int a[], int left, int right, int pivot,int n){
    int i = left+1;
    int j = right;
    while(i <= j){
        while(i <= right && a[i]<= pivot){
            i++;
        }
        while (j > left && a[j]>= pivot){
            j--;
        }
        if (i < j){
            int k=a[i];
            a[i]=a[j];
            a[j]=k;
            i++;
            j--;
        }
    }
    if (a[left]>a[j]){
        int k=a[left];
        a[left]=a[j];
        a[j]=k;
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return j;
}
void quickSort(int a[], int left, int right, int n){
    if (left < right){
        int pivot = a[left];
        int index = phanDoan(a, left, right, pivot,n);
        quickSort(a, left, index-1,n);
        quickSort(a, index+1, right,n);
    }
}