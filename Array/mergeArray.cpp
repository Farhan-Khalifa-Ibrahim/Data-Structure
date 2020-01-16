#include <bits/stdc++.h>
using namespace std;

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int * arr3 = new int[arr1Size+arr2Size]; // creating new array
    int i = 0, j = 0, k = 0;

    
    while (i<arr1Size && j < arr2Size) {
       
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];  
        else
            arr3[k++] = arr2[j++]; 
    }

    
    while (i < arr1Size)
        arr3[k++] = arr1[i++];

    
    while (j < arr2Size)
        arr3[k++] = arr2[j++];

    return arr3; 
}

int main() {
    int size1 = 5, size2 = 3;
    int arr[size1] = {1,12,14,17,23}; 
    int arr1[size2] = {11,19,27};  
    int * arr2 = mergeArrays(arr, arr1, size1, size2); 
    for(int i=0; i< size1+size2 ; i++) {
        cout << arr2[i] << " ";
    }
    delete arr2;  
    return 0;
}