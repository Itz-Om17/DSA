#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool is_possible(vector<int>& nums,int n,int cows,int minlargeval){ //O(n)
    int c =1;
    int laststallpos=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]-laststallpos>=minlargeval){
            laststallpos = nums[i];
            c++;
        }
        if(c==cows) return true;
    }
    return false;

    
}

int findlargest_mindistance(vector<int>& nums,int n,int cows){
    // sort(nums.begin(),nums.end()); O(NlogN)
    int ans = -1;
    int st=1;
    int end= nums[n-1]-nums[0];
    while(st<=end){ //O(log(range) *N)
        int mid=st+(end-st)/2;
        if(is_possible(nums,n,cows,mid)){ //right side jao as we have to find max value
            st = mid+1;
            ans = mid;
        }
        else{
            end = mid-1; //if not possible sabse larget value bhi mid se choti hai
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {1,2,8,4,9};
    cout<<findlargest_mindistance(vec,5,3)<<endl;
    return 0;
}