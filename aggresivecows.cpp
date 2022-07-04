<<<<<<< HEAD
//Problem Statement
//Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance

//solution using binarysearch

//this function tells that we can put cows at a specific distance or not
bool ispossible(vector<int> &stalls, int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if((stalls[i]-lastpos)>=mid){
            cowcount++;
            if(cowcount==k)
                return true;
            lastpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{  //step1:sort the vector
    sort(stalls.begin(),stalls.end());
    //start points to 0 and ends points to the max value in array
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    //binary search
    while(s<=e){
       
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
=======
//Problem Statement
//Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance

//solution using binarysearch

//this function tells that we can put cows at a specific distance or not
bool ispossible(vector<int> &stalls, int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if((stalls[i]-lastpos)>=mid){
            cowcount++;
            if(cowcount==k)
                return true;
            lastpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{  //step1:sort the vector
    sort(stalls.begin(),stalls.end());
    //start points to 0 and ends points to the max value in array
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    //binary search
    while(s<=e){
       
        if(ispossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
>>>>>>> 1cea996b1b95c9c182c43b40b1cb4d9b27c3bb86
}