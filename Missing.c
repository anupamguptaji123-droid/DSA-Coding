#include<stdio.h>
void findmissing(int arr[], int n){
    int i, j;

    printf("Missing elements are: ");
    for(i = 0; i < n - 1; i++){
        if(arr[i+1] - arr[i] > 1){
            for(j = arr[i] + 1; j < arr[i+1]; j++){
         printf("%d", j);

            }
        
        }
        
    }
}

int main(){
    int n, i;
    printf("Enter size of array");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    findmissing(arr, n);
    return 0;

}
