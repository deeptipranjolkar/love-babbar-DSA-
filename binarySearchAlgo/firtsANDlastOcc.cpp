#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = 0;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;

        }
        else if(key>arr[mid]){
            start = mid +1;

        }
        else if(arr[mid]>key){
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lasttocc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = 0;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;

        }
        else if(key>arr[mid]){
            start = mid +1;

        }
        else if(arr[mid]>key){
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}


int main()
{
    int arr1[9] ={1,2,3,3,3,3,3,3,5};
    cout<<"first occurence of 3 is "<<firstocc(arr1,9,3)<<endl;
    cout<<"last occurence of 3 is "<<lasttocc(arr1,9,3)<<endl;

 return 0;
}