#include<stdio.h>
int main(){
    int arr[100], n, d, i, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);
     
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations: ");
    scanf("%d", &d);
    d = d % n;
    for(i = 0; i < n; i++){
        temp[i] = arr[(i + d) % n];
        }
        printf("Array after rotation:\n");
        for(i = 0; i < n; i++){
            printf("%d", temp[i]);
        }
        return 0;
}
