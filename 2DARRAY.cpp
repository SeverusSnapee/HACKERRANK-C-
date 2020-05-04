#include<iostream>
#include<vector>
using namespace std;
int main()
{int u{},k{0};
vector<vector<int>>a( 6 , vector<int> (6, 0));  
vector<int>sum(16,0);
for(int i=0;i<6;++i)
{
for(int j=0;j<6;++j){cin>>u;a[i][j]=u;}
}
for(int i=0;i<4;++i)
{int m=i,l=3,os=2,f=0;
for(int h=0;h<4;++h)    
{
for(int j=f;j<l;++j){sum[k]+=a[m][j];}
sum[k]+=a[m+1][l-os];
for(int j=f;j<l;++j){sum[k]+=a[m+2][j];}
// cout<<sum[k]<<" ";
l+=1;f+=1;
k++;
}
}
int great=0;
 for(int i=0;i<16;++i){if(sum[i]>great){great=sum[i];}}
 cout<<great;

}