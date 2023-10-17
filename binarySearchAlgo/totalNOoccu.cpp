#include<iostream>
using namespace std;
int firstOccc(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = start +(end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==k){
            ans = mid;
            end = mid -1;

        }
        else if(k>arr[mid]){
            start = mid +1;
        }
        else if(arr[mid]>=k){
            end = mid -1;
        }
        mid = start +(end - start)/2;
    }
    return ans;
    
}

int lastOccc(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = start +(end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==k){
            ans = mid;
            start = mid +1;

        }
        else if(k>arr[mid]){
            start = mid +1;
        }
        else if(arr[mid]>=k){
            end = mid -1;
        }
        mid = start +(end - start)/2;
    }
    return ans;
    
}
int main()
{
    int arr[9]={1,2,3,3,3,3,3,4,5};
  int first = firstOccc(arr,9,3);
  int second = lastOccc(arr,9,3);

 int totalNOofocc = (first != -1 && second!= -1) ? ((second - first )+1) :0;
  cout << "Total number of occurrences of " << 3 << " is " << totalNOofocc << endl;
        
 return 0;
}