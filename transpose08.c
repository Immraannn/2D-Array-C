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
 for(int i=0;i<c;i++){// c=3 
    for(int j=0;j<r;j++){//r=2
        printf("%d ",arr[j][i]);
    }
    printf("\n");
 }
 return 0;   
}
// OUTPUT-
// Enter the number of rows:2
// Enter the number of columns:3
// 1 2 3
// 4 5 6
// 1 4
// 2 5
// 3 6