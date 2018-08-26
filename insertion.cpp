#include <iostream>
#include <cstdio>
using namespace std;


template <typename T> void InsertionSort(T *arr, int len){
  int j;
  T tmp;
  for(int i = 0; i < len; ++i){
    j = i;
    while(j > 0 && arr[j] < arr[j - 1]){
      tmp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = tmp;
      --j;
    }
  }
}


template <typename T> void Print(T *arr, int len){
  for(int i = 0; i < len; ++i){
    cout << *arr << "\t";
    ++arr;
  }
  cout << endl;
}

int main(){
  int array[10];
  for(int i = 10, j = 0; i > 0, j < 10; --i, ++j) array[j] = i;
  int len = (sizeof(array)/ sizeof(array[0]));
  printf("len = %i\n", len);
  Print<int>(array, len);
  InsertionSort<int>(array, len);
  Print<int>(array, len);
  return 0;
}
