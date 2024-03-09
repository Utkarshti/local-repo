#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumElement(vector<int> vec,int n){
    
    int maximum=vec[0];
for(int i=0;i<n;i++){
    if(vec[i]>maximum){
        maximum=vec[i];
    }
}
return maximum;
}

int checkPeakElementIndex(vector<int> vec,int n,int target){
   
    // int start=0;
    // int end=vec.size()-1;
    // int mid=(start+(end-start))/2;

    // cout<<"\n\n we are about to go inside the while loop"<<endl;
    // while(start<=end){
    //     if(vec[mid]==target){
    //         cout<<"Mid is equals to :"<<mid;
    //         return mid;
    //     }
    //     else if(vec[mid]<target){
    //         start=mid+1;
    //     }
    //     else if(vec[mid]>target){
    //         end=mid-1;
    //     }
    // }
    // cout<<"Target not found.....!";

    for(int i=0;i<n;i++){
        if(vec[i]==target){
            return i;
        }
    }
    return (-1);
    
}
int main(){
    int size;
    vector<int> vec1;
    vec1.push_back(0);
    vec1.push_back(1);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(8);
    vec1.push_back(0);
    vec1.push_back(0);
    vec1.push_back(0);
    vec1.push_back(6);
    vec1.push_back(1);
    vec1.push_back(1);
    size=vec1.size();
    int max=maximumElement(vec1,size);
    cout<<"Max is : "<<max;
    cout<<"\nentering in the loop";
    int index=checkPeakElementIndex(vec1,size,max);
    cout<<"Index number of peak Element in the vector: "<<index;
    return 0;
}

//   leetcode solution ques:- 852  Peak Index in a Mountain Array
 int peakIndexInMountainArray(vector<int>& arr) {
         int  left = 0;
        int right = arr.size() - 1;
        while(left <= right){
            int cur = left + (right - left) / 2;
            if(arr[cur] > arr[cur + 1] && arr[cur] > arr[cur - 1]) return cur;
            if(arr[cur] > arr[cur + 1])
                right = cur -1;
            else 
                left = cur + 1;
        }
        return -1;
    }