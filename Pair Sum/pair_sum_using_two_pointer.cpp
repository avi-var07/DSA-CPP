 
 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 
 int main() {

    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the target to be matched: "<<endl;
    int target;
    cin>>target;
    sort(arr.begin(), arr.end());
    int left =0, right =  arr.size()-1,c=0;
    while(left<right){
        int curr = arr[left]+arr[right];
            
        if(curr==target){
            c++;
            cout<<"true";
            break;
        }
            
            
        else if(curr<target)
        left++;
            
        else right--;
        }
        if(c==0) 
        cout<<"false";
 }