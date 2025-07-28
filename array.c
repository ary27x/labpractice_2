
#include <stdio.h>
int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int sum;
    float avg;
    
    for (int i = 0 ; i < n ; i++)
        sum += arr[i];
    
    avg = (float)sum / n;
    printf("The average of the numbers which were entered are : %f" , avg);
    

    return 0;
}

