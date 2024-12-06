#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
    printf("Enter all the elements:");
 int arr[r][c];//r*c total elements
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&arr[i][j]);
    }
 }
 printf("\n");
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
 }
 int sum=0;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum +=arr[i][j];
    }
 }
 printf("The sum of given matrix is %d ",sum);
 return 0;   
}
// OUTPUT-
// Enter the number of rows:3
// Enter the number of columns:3
// Enter all the elements:
// 1 2 3
// 4 5 6
// 7 8 9

// 1 2 3
// 4 5 6
// 7 8 9
// The sum of given matrix is 45