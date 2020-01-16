#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>

int * findSum(int arr[], int sum, int size) { 
    unordered_set<int> US; 
    int * result = new int[2]; 
    for (int i = 0; i < size; i++) { 
        int temp = sum - arr[i];
        US.insert(arr[i]);  

        if ( US.find(temp) != US.end()) {
            result[0] = arr[i];
            result[1] = temp;
            return result;
        }
    } 
    return arr;
} 
  
int main() { 
  
  int size = 6, value = 8;
  int arr[size] = {-1, -5, 45, 6, 10, 9};

  if(size > 0){
    int * arr2 = findSum(arr, value, size);
    int num1 = arr2[0];
    int num2 = arr2[1];

      if((num1 + num2) != value)
        cout << "Not Found" << endl;
      else {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
        cout << "Sum = " << num1+num2 << endl;

      }
    } else {
      cout << "Input Array is Empty!" << endl;
    }
} 