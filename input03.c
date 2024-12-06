#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);
 int arr[r][c];//r*c total elements
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&arr[i][j]);
    }
 }
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
 }
 return 0;   
}
// OUTPUT-
// Enter the number of rows:2
// Enter the number of columns:4
// 4 3 2 1 
// 3 4 5 6 
 
// 4 3 2 1
// 3 4 5 6