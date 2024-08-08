#include<stdio.h>

int odd(int arr[][3]){
    int cnt=0;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            if (arr[i][j]%2){
                cnt++;
            }
            if (j==2){
                arr[i][j]=0;
            }
        }
    }
    
    return cnt;
}

int main(){

    int arr[2][3];
    printf("Input 6 elements for the 2x3 array\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int cnt=odd(arr);
    printf("%d\n", cnt);
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }

    return 0;
}
