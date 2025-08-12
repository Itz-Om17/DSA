//brute force approach
// #include <iostream>
// #include <vector>
// using namespace std;

// int maxWater(vector<int>& height){
//     int maxWater=0;
//     for(int i=0;i<height.size();i++){
//         for(int j=i+1;j<height.size();j++){
//             int h= min(height[j],height[i]);
//             int w =  j-i;
//             int currMaxWater=h*w;
//             maxWater = max(maxWater,currMaxWater);
//         }
//     }
//     return maxWater;
// }

// int main() {
//     vector<int> vec= {1,8,6,2,5,4,8,3,7};
//     cout<<maxWater(vec)<<endl;
//     return 0;
// }



// optimal approach O(n)
#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& height){
    int maxWater=0;
        int size = height.size();
        int i=0,j=size-1;
        while(i<j){ 
            int w = j-i;
            int h = min(height[i],height[j]);
            int area = w*h;
            maxWater = max(maxWater,area);
            height[i]<height[j]?i++:j--;
        }
        return maxWater;
}

int main() {
    vector<int> vec= {1,8,6,2,5,4,8,3,7};
    cout<<maxWater(vec)<<endl;
    return 0;
}

