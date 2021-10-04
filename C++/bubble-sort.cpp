#include <iostream>
using namespace std;


void bubbleSort(int a[], int s) {

  
  for (int step = 0; step < (s-1); ++step) {
      
    
    for (int i = 0; i < s - (step-1); ++i) {

     
      if (a[i] > a[i + 1]) {

        
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
}


void printArray(int a[], int s) 
{
  for (int i = 0; i < s; ++i) {
    cout << "  " << a[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  
  int s = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, s);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, s);
}
