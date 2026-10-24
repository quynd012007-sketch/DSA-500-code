#include <stdio.h>
void find(int nums[],int n,int target);
int main(){
    int n;
    scanf("%d",&n);
    int nums[n];
    for (int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int target;
    scanf("%d",&target);
    find(nums,n,target);
    return 0;
}
void find(int nums[], int n, int target) {
int i,j;
i=0;j=n-1;
while(i <= j){
        while(i <= n-1 && nums[i]<= target/2){
            i++;
        }
        while (j > 0 && nums[j]> target/2){
            j--;
        }
        if (i < j){
            int k=nums[i];
            nums[i]=nums[j];
            nums[j]=k;
            i++;
            j--;
        }
    }
if (j<0) printf("Pair not found");
else if (i>=n){
    int c=0;
    for (int p=0;p<n;p++){
       if (nums[p]*2==target){
            c++;
       }
       if (c>1){
        printf("Pair found (%d, %d)\n", target/2,target/2);
       }
    }
}
else {
    int c=0,d=0;
    for (int p=0; p<=j;p++){
        for (int q=n-1;q>p;q--){
            if (nums[p]+nums[q]==target){
                if (c>0) {
                    for (int k=0;k<p;k++){
                        if (nums[k]==nums[p]){
                            d++;
                            break;
                        }
                    }
                    if (d>0) break;
                    printf("or\n");
                }
                printf("Pair found (%d, %d)\n", nums[q], nums[p]);
                c++;
                break;
            }
}
}
   int e=0;
    for (int p=0;p<n;p++){
       if (nums[p]*2==target){
            e++;
            break;
       }
       if (e>1){
        if(c>0) printf("or\n");
        printf("Pair found (%d, %d)\n", target/2,target/2);
       }
        
    }
}}