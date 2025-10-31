#include<stdio.h>
#include<stdbool.h>
//bubble Shot
int bubbleSort(int arr[100], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    return arr[100];
}

void printBubbleShot(int arr[100], int n){
    printf("Shotted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//binary Search
void binarySearch(int arr[100], int n, int search){
    int st = 0;
    int end = n - 1;
    bool found = false;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] > search)
            end = mid - 1;
        else if(arr[mid] < search)
            st = mid + 1;
        else
        {
            found = true;
            printf("%d is Found in %d no index of this array", search, mid);
            break;
        }
    }
    if (!found)
    {
        printf("%d is not Found in this array", search);
    }

}

int main(){
    int search, n = 10;
    int arr[100] = {1, 4, 8, 2, 5, 3, 9, 7, 6, 0};
    arr[10] = bubbleSort(arr, n);
    printf("Enter a number you want to find: ");
    scanf("%d", &search);
    printBubbleShot(arr, n);
    binarySearch(arr, n, search);
    return 0;
}

