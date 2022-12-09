#include <iostream> 
#include <time.h> 
#include <stdlib.h> 
using namespace std; 

  int main() { 
  int element=-1; 
  int arr[8]; 
  int min = 0; 
  int max = 30; 

    srand(time(NULL)); 

    for (int i = 0; i < 8; i++) { 
    arr[i] = min + rand() % (max - min + 1); 
  } 
    for (int i = 0; i < 7; i++) { 
    if (arr[i] == 0) 
    element = i; 
  } 
    for (int i = 0; i < 8; i++) { 
    cout << arr[i] << ' '; 
  } 
    if (element == -1) 
    cout << "No zero" << endl; 
    else 
    cout << "Index of element with zero : " << element << endl; 
    system("pause"); 
    } 