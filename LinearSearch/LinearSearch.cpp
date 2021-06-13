// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<iostream>
using namespace std;
int linearSearch(int A[],int size,int target)
{
    for (int index = 0; index < size; index++)
    {
        if (A[index]==target)
          {
            return index;
          }
      }
    return -1;
          
}
void main()
{
   int size;
   int target;
   int  A[] = { 2,3,1,4,6,5,7,8,0,9 };
   cout << "Enter the target element you want to search"<<endl;
   cin >> target;
   size = sizeof(A) / sizeof(A[0]);

  int result= linearSearch(A, size, target);
  (result == -1) ?
      cout << "The target value in note present in given Array" << endl : cout << "The target value present at Index:" << result;
   
       
}
