#include<iostream>
#include<vector>
using namespace std;

int birthdayCakeCandles(vector<int> arr) 
{int n{},l{},m{0};
cin>>n;
for(int i=0;i<n;++i)
{
    cin>>l;arr.push_back(l);
}
int great=0;
for(int i=0;i<n;++i){ if(arr[i]>great){great=arr[i];}}

for(int i=0;i<n;++i){if(arr[i]==great){m=m+1;}}

return m;
}
int main()
{
    vector<int>arr;
    birthdayCakeCandles(arr);
}