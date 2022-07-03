//READ QUESTION BY THE BELOW LINK
// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    
//step1: find pivot element in the array    
int pivotin(vector<int>& arr,int n){
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
    
          while(s<e){
            if(arr[mid]>=arr[0])
                s=mid+1;
            else
                e=mid;
            
            mid=s+(e-s)/2;
          }
     return s;
}
//binary search    
int binarysearch(vector<int>& arr,int s,int e,int key){
     
    int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==key)
                return mid;
            else if(arr[mid]>key)
                e=mid-1;
            else
                s=mid+1;
                
             mid=s+(e-s)/2;
        }
    return -1;
}
int search(vector<int>& arr, int target) {
    int pivot=pivotin(arr,arr.size());
    
    //step2:if element lies after pivot then search from pivot index to last index
    if(target>=arr[pivot] && target<=arr[arr.size()-1]){
        return binarysearch(arr,pivot,arr.size()-1,target);
    }
    //else search from before pivot index
    return binarysearch(arr,0,pivot-1,target);
    }
};