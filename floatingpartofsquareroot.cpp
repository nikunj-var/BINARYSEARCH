//ques - find the floating part of the square root
//step1- find the integer square root of the number after that call the function which gives you the floating point digit

#include<iostream>
using namespace std;

long long binarysearch(int s,int e,int key){
     
     long long mid=s+(e-s)/2;
     long long ans=0;
    // TRAVERSE UNTIL START IS LESS THAN OR EQUAL TO END
        while(s<=e){
            // DO SQUARE
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

//function returns floating point number of the squareroot
double moreprecision(int n,int precision,int temproot){
    double factor=1;
    double ans=temproot;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<n ;j=j+factor){
            ans=j;
        }
    }
   return ans;
}

int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    //finds the integer square root of the number
    int tempsol=binarysearch(0,n,n);
    cout<<"final answer is"<<moreprecision(n,3,tempsol);
}