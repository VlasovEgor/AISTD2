#include <iostream>
#include "AiSTD2.h"

void QuickSort(int* arr, int left, int right,int size)
{

    int left = 0, right = size - 1;//finding the extreme elements
    int i = left, j = right;
    int mid = arr[(left + right) / 2];//finding the middle element
    while (i <= j) //until the left index is larger than the right index
    {
        while (arr[left] < mid) 
            left++;
        while (arr[right] > mid) 
            right--;
        if (i <= j) //moving to the center and change the items in places
        {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++, right--;
        }
    }
    if (i < right) //if there is something to sort
        QuickSort(arr, i, right, size);
    if (j > left)
        QuickSort(arr, left, j,size);
}
void BinarySearch(int* arr, int size, int key)
{
    int mid;
    bool flag = false;
    QuickSort(arr, size);
    while ((left <= right) && (flag != true))
    {
       mid = (left + right) / 2; //finding the middle element

        if (arr[mid] == key) flag = true; //checking the key with the middle element
        if (arr[mid] > key) right = mid - 1; // checking which part to discard
        else left = mid + 1;
    }

}
void InsertionSort(int* arr, int size)
{
    int temp, item; 
    for (int i = 1; i < size; i++)
    {
        temp = arr[i]; 
        item = i - 1; // storing the index of the previous array element
        while (item >= 0 && arr[item] > temp) // until the index is 0 and the previous array element is greater than the current one
        {
            arr[item + 1] = arr[item]; //permutation of array elements
            arr[item] = temp;
            item--;
        }
    }
}
void BogoSort(int* arr, int size) //like bubble sorting only when two adjacent elements are unsorted we return to the beginning
{

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                i = 0;
                j = 0;
            }
        }
    }

}
void CountingSort(char* arr, int size) {
    int min = arr[0] , max = arr[0];
    int size2 = max - min; //size of the new array
    int* arr2 = new int[size2 + 1]; //new array
    int count = 0;
    for (int i = 0; i < size; i++) { //finding the largest and smallest elements of the array
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min) 
            min = arr[i];
    }
    for (int i = 0; i < size2 + 1; i++) { //zeroing the new array
        arr2[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        arr2[(int)arr[i] - min] ++;
    }
    //we go through the first array and write in each cell of the second array how many times we meet the same elements
    if (arr2) {
        for (int i = 0; i < size2 + 1; i++) {
            for (int j = 0; j < arr2[i]; j++) {
                arr[count] = (char)i + min;
                count++;
            }
        }
    }
}
