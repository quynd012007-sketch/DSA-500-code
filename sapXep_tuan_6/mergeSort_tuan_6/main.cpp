# include <stdio.h>
void mergeSort(int a[], int n);
void chiaMang(int a[], int left, int right, int n);
void tronMang(int a[], int left, int mid, int right);
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    mergeSort(a, n);
    return 0;
}
void mergeSort(int a[], int n){
    if (n<2) {
        printf("%d\n", a[0]);
        return;}
    chiaMang(a, 0, n-1, n);
}
void chiaMang(int a[], int left, int right, int n){
    if (left >= right) return;
    int mid = (left + right)/2;
    chiaMang(a, left, mid, n);
    chiaMang(a, mid+1, right, n);
    tronMang(a, left, mid, right);
      for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void tronMang(int a[], int left, int mid, int right){
    int i= left, j=mid+1;
    while (i<=mid && j<= right ){
        if (a[i]<=a[j]) i++;
        else {
            int k=a[j];
            for (int c=j;c>i;c--){
            a[c]=a[c-1];
            }    
        a[i]=k;
        i++;
        mid++;
        j++;
        }
    }
}