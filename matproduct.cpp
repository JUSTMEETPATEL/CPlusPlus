#include <iostream>
using namespace std;

// void product(int arr1[2][2],int arr2[2][2],int* ptr){
//     //Product of the two arrays
//     for(int i = 0;i < 2;i++){
//         for(int j = 0;j < 2 ;j++){
//             *ptr = 0;
//             for(int k = 0;k < 2;k++){
//                 *ptr += arr1[i][k] * arr2[k][j];
//                 *ptr += arr1[i+1][k] * arr2[k][j+1];
//                 ptr++;
//             }
//         }
//     }
// }

int main(){
    int arr1[2][2],arr2[2][2],rarr[2][2];
    // int* ptr;
    // ptr = &rarr[0][0];

    //Reading array 1
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2 ;j++){
            printf("Enter the element %d %d of the matrix 1: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    
    //Reading array 2
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2 ;j++){
            printf("Enter the element %d %d of the matrix 2: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    //Product of the two arrays
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2 ;j++){
            rarr[i][j] = 0;
            for(int k = 0;k < 2;k++){
                rarr[i][j] += arr1[i][k] * arr2[k][j];
                rarr[i][j] += arr1[i+1][k] * arr2[k][j+1];
            }
        }
    }
    // product(arr1,arr2,ptr);

    //Printing the resulting array
    for(int i = 0; i< 2 ;i++){
        for(int j = 0; j< 2;j++){
            printf("%d ",rarr[i][j]);
        }
        printf("\n");
    }
}