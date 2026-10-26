#include <stdio.h>
void findLargestSubarray(int a[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    findLargestSubarray(a,n);
    return 0;
}
void findLargestSubarray(int a[], int n){
    int maxLength=0,left=0,right=0,start=0;
    while (n-start>maxLength){
        int foundDuplicate=0;
        for (int j=start+1;;j++){
            int i;
            for ( i=start;i<j;i++){
                if (a[j]==a[i]){
                    if (j-start>maxLength){
                        left=start;
                        right=j-1;
                        maxLength=j-start;
                    }
                    start=i+1;
                    foundDuplicate=1;
                    break;
                }
            }
            if (foundDuplicate) break;
        }
        if (!foundDuplicate) {
            if (n - start > maxLength) {
                left = start;
                right = n - 1;
                maxLength = n - start;
            }
            break;
    }}
    printf("The largest subarray is ");
    for (int i=left;i<=right;i++)
    printf("%d ",a[i]);
}