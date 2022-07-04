//a sorted array having N elements, find the indices of the first and last occurrences of an element key in the given
//array.

//SOLUTION-we can easily solve this type of question by binary search
// *after that, to search first and last occ follow below steps.
// *the very first thing we have to do is divide the problem in into subproblems and make two functions firstocc and lastocc.
// *and apply binary search

#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid] == key){
            ans=mid;
            e=mid-1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid] == key){
            ans=mid;
            s=mid+1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key";
    cin>>key;
    cout<<"first occurence"<<firstocc(arr,n,key)<<endl;
    cout<<"last occurence"<<lastocc(arr,n,key);
}