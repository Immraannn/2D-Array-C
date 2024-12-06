#include<stdio.h>
int main(){
    //1st matrix order
    int m;
    printf("Enter no of rows of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1st matrix:");
    scanf("%d",&n);
    printf("Enter elements of 1st matrix:");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //2nd matrix order
    int p;
    printf("Enter no of rows of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter no of columns of 2nd matrix:");
    scanf("%d",&q);
    printf("Enter elements of 2nd matrix:");
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //check
    if(n!=p){
        printf("The matrices cannot be multiplied");
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] +=a[i][k]*b[k][j];
                }
            }
        }
printf("The resultant matrix is:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
// OUTPUT-
// Enter no of rows of 1st matrix:2
// Enter no of columns of 1st matrix:2
// Enter elements of 1st matrix:
// 1 0
// 0 1
// Enter no of rows of 2nd matrix:2
// Enter no of columns of 2nd matrix:2
// Enter elements of 2nd matrix:
// 1 0
// 0 1
// The resultant matrix is:
// 1 0
// 0 1