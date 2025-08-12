//for TC watch the painter allocation question video lec22
//edit the jobs is replaced with time req so assume things accordingly
#include <iostream>
#include <vector>
#include <algorithm> // for max_element
using namespace std;
    bool isValid(vector<int> nums,int n,int m,int maxallowedjob){
        int painter=1;
        int jobs=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxallowedjob){ //agr ek painter ko itna job dediya toh max aise hi paar hojayega
                return false;
            }
            if(jobs+nums[i]<=maxallowedjob){ //agr jobs  ki curr val mai aur pages add krne se bhi voh limit exceed nahi krha toh fir allocate krdo
                jobs+=nums[i];
            }
            else{ //agr jobs jyada hoagye ek painter ke liye maxallowedjob se bhi toh simple hai new painter lao and usko current jobs se allocate krdo
                painter+=1;
                jobs=nums[i];
            }
        }
        if(painter<=m){ //agr jitne painter jobs allocate hone ke baad kum ya equal agye toh return true krdo matlab ye ek valid soln hai
            return true;
        }
        else{ //uska ulta invalid hai
            return false;
        }
    }
    int maxbooks_minpages(vector<int>& nums,int m){
        int end = 0,st= *max_element(nums.begin(),nums.end());
        int maxjob_mintime=-1;
        int n = nums.size();
        for(int val: nums){
            end+=val;
        }
        while(st<=end){ 
            int mid = st + (end-st)/2;
            if(isValid(nums,n,m,mid)){  //agr ye val pe valid hai t isse kam koi value hai kya jispe ye valid ho isiliye end ko mid se piche leke left ja rhe hai 
                end = mid-1;
                maxjob_mintime=mid;
            }
            else{ //agr ye val pe invalid hai t isse kam koi value nahi hai kya jispe ye valid ho isiliye start ko mid se aagee leke right ja rhe hai 
                st = mid+1;
            }
        }
    
        return maxjob_mintime;
    }
int main() {
    vector<int> vec = {40,30,10,20};
    int m =2;
    cout<<maxbooks_minpages(vec,m)<<endl;
    return 0;
}