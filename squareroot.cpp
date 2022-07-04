<<<<<<< HEAD
//READ QUESTION BY THE BELOW LINK
//https://leetcode.com/problems/sqrtx/

//QUESTION CAN BE EASILY SOLVED BY BINARY SEARCH

class Solution {
public:
    long long binarysearch(int s,int e,int key){
     
     long long mid=s+(e-s)/2;
     long long ans=0;
    //STEP2: TRAVERSE UNTIL START IS LESS THAN OR EQUAL TO END
        while(s<=e){
            //STEP3: DO SQUARE
            long long square=mid*mid;
            
            //IF THE SQUARE OF MID IS EQUAL TO KEY NUMBER THEN RETURN MID
            if(square==key)
                return mid;
            
            //IF SQUARE OF MID IS GREATER THAN NUMBER THEN THE SQUARE ROOT MUST LIES IN THE LEFTSIDE
            else if(square>key)
                e=mid-1;
            
            //IF SQUARE OF MID IS LESS THAN THE NUMBER THEN IT IS THE APPROXIAMTE SQUARE ROOT THEN STORE IT IN A VARIABLE
            //OR THE SQUARE ROOT LIES AFTER THE MID 
            else
            {
                 ans=mid;
                 s=mid+1;      
            }
             
             mid=s+(e-s)/2;
        }
    return ans;
}
    int mySqrt(int x) {
        //STEP1: DO BINARY SEARCH AND FIND THE SQUARE ROOT
        return binarysearch(0,x,x);
    }
=======
//READ QUESTION BY THE BELOW LINK
//https://leetcode.com/problems/sqrtx/

//QUESTION CAN BE EASILY SOLVED BY BINARY SEARCH

class Solution {
public:
    long long binarysearch(int s,int e,int key){
     
     long long mid=s+(e-s)/2;
     long long ans=0;
    //STEP2: TRAVERSE UNTIL START IS LESS THAN OR EQUAL TO END
        while(s<=e){
            //STEP3: DO SQUARE
            long long square=mid*mid;
            
            //IF THE SQUARE OF MID IS EQUAL TO KEY NUMBER THEN RETURN MID
            if(square==key)
                return mid;
            
            //IF SQUARE OF MID IS GREATER THAN NUMBER THEN THE SQUARE ROOT MUST LIES IN THE LEFTSIDE
            else if(square>key)
                e=mid-1;
            
            //IF SQUARE OF MID IS LESS THAN THE NUMBER THEN IT IS THE APPROXIAMTE SQUARE ROOT THEN STORE IT IN A VARIABLE
            //OR THE SQUARE ROOT LIES AFTER THE MID 
            else
            {
                 ans=mid;
                 s=mid+1;      
            }
             
             mid=s+(e-s)/2;
        }
    return ans;
}
    int mySqrt(int x) {
        //STEP1: DO BINARY SEARCH AND FIND THE SQUARE ROOT
        return binarysearch(0,x,x);
    }
>>>>>>> 1cea996b1b95c9c182c43b40b1cb4d9b27c3bb86
};