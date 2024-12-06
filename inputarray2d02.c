#include<stdio.h>
int main(){
 int arr[3][3];//9 total elements
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    scanf("%d",&arr[i][j]);
    }
 }
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
 }
 return 0;   
}
// OUTPUT-
// 1 2 3
// 4 5 6
// 7 8 9