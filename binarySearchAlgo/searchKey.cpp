#include<iostream>
using namespace std;
int serachKey(int arr[], int n, int key)
{
     int start = 0;
     int end = n-1;
    //  int mid = (start + end)/2;
     int mid = start + (end - start)/2;
     while(start<=end){
        if(arr[mid]==key){
            return mid;        
            }
          if(arr[mid]<key)  {
            start = mid +1;
          }
          else{
            end = mid -1;
          }
        //   mid = (start + end)/2;
        mid = start + (end - start)/2;
     }
     return -1;
}
int main()
{
    int arr1[6] = {2,4,6,8,12,18};
   int  arr2[5] = {3,8,11,14,16};
   

    int evenKey = serachKey(arr1, 6,18);
     cout << evenKey << endl;
    int oddKey = serachKey(arr2, 5, 16);
   
    cout << oddKey << endl;

    return 0;
}