#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main(){
  array<int, 10> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto a: arr) cout << a << " " ;    // 1 2 3 4 5 6 7 8 9 10
  cout << "\n";

  double sum= accumulate(arr.begin(), arr.end(), 0);
  cout << sum << std::endl;               // 55

  double mean= sum / arr.size();
  cout << mean << endl;              // 5.5
  cout << (arr[0] == get<0>(arr));   // 1 (1 represents true)

  return 0;
}

//notes way to access array
//arr[n],arr.at(n),get<n>(arr)

//to initialize
//array<int, 10> arr{}