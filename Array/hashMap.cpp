#include <bits/stdc++.h> 
using namespace std; 
  
int findFirstUnique(int arr[], int size) 
{ 
    map<int, int> MP;  
    for (int i = 0; i < size; i++)  
       MP[arr[i]]++;     
  
    for (int i = 0; i < size; i++)  
       if (MP[arr[i]] == 1)     
            return arr[i];     
    return -1; 
} 
  
int main() 
{ 
    int size = 6;
    int arr[size] = {-2 , 5, -7, 6, 5, -2}; 
    cout << "Array: " ;
      
    for(int i=0; i<size; i++)
       cout << arr[i] << " ";
    cout << endl;
  
    int unique = findFirstUnique(arr,size);
    cout << "First Unique in an Array: " << unique << endl;
} 