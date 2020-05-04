#include <iostream>
#include<string>
#include<vector>
#include<stdlib.h>

using namespace std;


void miniMaxSum(vector<int> arr) {int l{};int j{};
vector<long long int>sum(5,0);
for(int i=0;i<5;++i){cin>>l;arr.push_back(l);}
for(int k=0;k<5;++k){for(int i=0;i<5;++i){if(i!=j){sum[j]=sum[j]+arr.at(i);}
}
++j;
}
long long int great=sum[0];long long int small=sum[0];
for(int i=0;i<5;++i){if(sum[i]>great){great=sum[i];}}
for(int i=0;i<5;++i){if(sum[i]<small){small=sum[i];}}
cout<<((long long)small)<<" "<<great;
}
int main()
{
    vector<int>arr;
    // for(int i=0;i<5;++i){cin>>l;arr.push_back(l);}
    miniMaxSum(arr);
return 0;}
