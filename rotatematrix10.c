#include<stdio.h>
int main(){
int n;
printf("Enter the number of rows/columns :");
scanf("%d",&n);
int arr[n][n];
//Input
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}  
//Transpose
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        //swap arr[i][j] and arr[j][i]
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
} 
printf("\n");
printf("The given below matrix is transpose\n");
//Output
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
//Rotate
printf("The given below matrix is 90 deg rotated clocwise\n");
for(int i=0;i<n;i++){
    int j=0;
    int k=n-1;
    while(j<k){
        //swap arr[i][j] and arr[i][k]
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=temp;
        j++;
        k--;

    }
}
printf("\n");
//Output
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
// OUTPUT-
// Enter the number of rows/columns :3
// 1 2 3
// 4 5 6
// 7 8 9

// The given below matrix is transpose
// 1 4 7
// 2 5 8
// 3 6 9
// The given below matrix is 90 deg rotated clocwise

// 7 4 1
// 8 5 2
// 9 6 3