#include <iostream>

int count(int A[],int size, int val)
{
    if(size==0)
       return 0;
    if(A[size]==val){
       return 1+ count(A, size-1, val);
       }
  return count(A, size-1, val);
}

int main()
{
  int n=5;
  int Array[n]={1,2,3,2,1};
  int val =4;
  std::cout<<"counter "<<count(Array, n, val);
}