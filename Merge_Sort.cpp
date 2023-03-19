#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/merge-sort/
// https://leetcode.com/problems/sort-an-array
class Solution {
public:

    // Merges two subarrays of array[].
    // First subarray is arr[left..mid]
    // Second subarray is arr[mid+1..right]
    void merge(vector<int>&a,int left,int mid,int right){
        int s1=mid-left+1,s2=right-mid,i;

        int leftArray[s1],rightArray[s2];
        
        for(i=0;i<s1;i++)
            leftArray[i]=a[left+i];
        for(i=0;i<s2;i++)
            rightArray[i]=a[mid+1+i];

        int i1=0; //Initial index of first subarray    
        int i2=0; //Initial index of second subarray
        int i3=left; //Initial index of merged subarray

        while(i1<s1 && i2<s2){
            if(leftArray[i1]<=rightArray[i2]){
                a[i3]=leftArray[i1];
                i1++;
            }
            else{
                a[i3]=rightArray[i2];
                i2++;
            }
            i3++;
        }

        //copy remaining elements of leftArray
        while(i1<s1){
            a[i3]=leftArray[i1];
            i1++;
            i3++;
        }

        //copy remaining elements of rightArray
        while(i2<s2){
            a[i3]=rightArray[i2];
            i2++;
            i3++;
        }
    }

    void mergeSort(vector<int>&a,int begin,int end){
        if(begin>=end)
            return;
        int mid=begin+(end-begin)/2;
        mergeSort(a,begin,mid);
        mergeSort(a,mid+1,end);
        merge(a,begin,mid,end);
    }

    vector<int> sortArray(vector<int>& a) {
        mergeSort(a,0,a.size()-1);
        return a;
    }
};


int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v=s.sortArray(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}