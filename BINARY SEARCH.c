/*
NAME:KAVYANSH MEНТА
COURSE: BCA
DATE: 25/4/24
ENROLLMENT NO-001214002023
WAP TO SEARCH AND DISPLAY THE LOCATION OF AN ELEMENT SPECIFIED BY A USER IN A GIVEN ARRAY*/
#include<stdio.h>
int bSearch(int arr[], int size, int key)
 {
    int low = 0, high = size - 1;
    while (low <= high)
        {
          int mid = low + (high - low) / 2;
          if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int key;
    int arr[9] = {1, 41, 62, 93, 54, 21, 34, 23, 53};
    printf("ENTER NUMBER TO SEARCH: ");
    scanf("%d", &key);
    int index = bSearch(arr, 9, key);
    if (index != -1)
        printf("The number %d is found at index %d.\n", key, index);
    else
        printf("The number %d is not found in the array.\n", key);
    return 0;
}
