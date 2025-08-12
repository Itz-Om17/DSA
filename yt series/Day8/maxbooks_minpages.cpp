//for TC watch the book allocation question video lec21

#include <iostream>
#include <vector>
using namespace std;
    bool isValid(vector<int> nums,int n,int m,int maxallowedpages){
        int stu=1;
        int pages=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxallowedpages){ //agr ek student ko itna pages dediya toh max aise hi paar hojayega
                return false;
            }
            if(pages+nums[i]<=maxallowedpages){ //agr pages  ki curr val mai aur pages add krne se bhi voh limit exceed nahi krha toh fir allocate krdo
                pages+=nums[i];
            }
            else{ //agr pages jyada hoagye ek student ke liye maxallowedpages se bhi toh simple hai new stu lao and usko current pages se allocate krdo
                stu+=1;
                pages=nums[i];
            }
        }
        if(stu<=m){ //agr jitne stu pages allocate hone ke baad kum ya equal agye toh return true krdo matlab ye ek valid soln hai
            return true;
        }
        else{ //uska ulta invalid hai
            return false;
        }
    }
    int maxbooks_minpages(vector<int>& nums,int m){
        int end = 0,st=0;
        int maxbooks_minpg=-1;
        int n = nums.size();
        for(int val: nums){
            end+=val;
        }
        while(st<=end){ 
            int mid = st + (end-st)/2;
            if(isValid(nums,n,m,mid)){  //agr ye val pe valid hai t isse kam koi value hai kya jispe ye valid ho isiliye end ko mid se piche leke left ja rhe hai 
                end = mid-1;
                maxbooks_minpg=mid;
            }
            else{ //agr ye val pe invalid hai t isse kam koi value nahi hai kya jispe ye valid ho isiliye start ko mid se aagee leke right ja rhe hai 
                st = mid+1;
            }
        }
    
        return maxbooks_minpg;
    }
int main() {
    vector<int> vec = {15,17,20};
    int m =2;
    cout<<maxbooks_minpages(vec,m)<<endl;
    return 0;
}