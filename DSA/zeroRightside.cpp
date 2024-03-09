// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec1;
//     vec1.push_back(0);
//     vec1.push_back(2);
//     vec1.push_back(0);
//     vec1.push_back(0);
//     vec1.push_back(5);
//     vec1.push_back(0);
//     vec1.push_back(6);
//     vec1.push_back(7);
//     vec1.push_back(1);
//     cout<<"\nBefore sorting the vector : "<<endl;
//      for(int i=0;i<vec1.size();i++){
//         cout<<vec1[i];
//     }
  // sort the array using sort() function 
//    sort(vec1.begin(),vec1.end());
//        cout<<"\n\nafter  sorting the vector : "<<endl;

//     for(int i=0;i<vec1.size();i++){
//         cout<<vec1[i];
//     }
//    int j=0;
//     for(int i=0;i<vec1.size();i++){
//         if(vec1[i]>0){
//             vec1[j]=vec1[i];
//             vec1[i]=0;
//             j++;
//         }
//     }


//     // printing the array after formulating all the zero's to the right side of the array.
//     cout<<"\n\nprinting the array after formulating all the zero's to the right side of the array."<<endl;
//     for(int i=0;i<vec1.size();i++){
//         cout<<vec1[i];
//     }
//     return 0;
// }


//--------------------------------------> Approach-2  <----------------------------------------------

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec1;
//     vec1.push_back(0);
//     vec1.push_back(2);
//     vec1.push_back(0);
//     vec1.push_back(0);
//     vec1.push_back(5);
//     vec1.push_back(0);
//     vec1.push_back(6);
//     vec1.push_back(7);
//     vec1.push_back(1);
//     cout<<"\nBefore sorting the vector : "<<endl;
//      for(int i=0;i<vec1.size();i++){
//         cout<<vec1[i];
//     }

//     // first we will take another vector
//     vector<int> vec2;

//     // now idea is very simple we will store all the non-zero elements in this new vector
    
//     for(int i=0;i<vec1.size();i++){
//         if(vec1[i]>0){
//             vec2.push_back(vec1[i]);
            
//         }
//     }

//     // calculate the total size of the original vector
//     // total_zero= total_element-vec2.size() or number of elements in vector2
//     cout<<"\n\ntotal no of element in vector 2 : "<<vec2.size()<<endl;
     

//      int zero=vec1.size()-vec2.size();
//     // fill zero's in the remaining portion of that vector2 and return it.
//     for(int i=1;i<=zero;i++){
//         vec2.push_back(0);
//     }

//     cout<<"\n\nprinting the vector after postioning zero to the right side of the vector"<<endl;
//      for(int i=0;i<vec2.size();i++){
//         cout<<vec2[i];
//     }
//     return  0;
// }


//   geeks for geeks
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int count=0,j=0;
	    int arr2[n];
	    for(int i=0;i<n;i++){
	        if(arr[i]>0){
	            arr2[j]=arr[i];
	            j++;
	            count++;
	        }
	    }
	    int zero=n-count;
	    for(int i=1;i<=zero;i++){
	        arr2[j]=0;
	        j++;
	    }
	    for(int i=0;i<n;i++){
	        arr[i]=arr2[i];
	    }
	}
};