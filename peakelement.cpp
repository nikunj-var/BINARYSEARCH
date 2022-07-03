//READ THE QUES BY COPYING BELOW LINK
// https://leetcode.com/problems/peak-index-in-a-mountain-array/


//SOLUTION USING BINARY SEARCH

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //initialize start and end variable with 0 ans size-1
        int low = 0;
        int high = arr.size()-1;
       
        //find mid
        int mid=low+(high-low)/2;
        
        //traverse the array until start < end
        while(low<high)
        { 
           //if the mid element is less than the mid+1 element, peak must be lie in rightmost part 
           if(arr[mid]<arr[mid+1])
           {
                low=mid + 1;
           }
            //else peak lies in left part
           else
           {
               high = mid ;
           }
            mid=low+(high-low)/2;
        }
        
        //return ans
        return low;
    }
};