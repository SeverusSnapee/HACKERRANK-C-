#include<iostream>
using namespace std;
int main()
{
    int n[5];
    int min,temp{};
    for(int i=0;i<5;++i)
    {cin>>n[i];}
    for(int j=0;j<3;++j)
    {
        min=j;
        for(int i=j+1;i<5;++i)
    {
    
        if(n[i]<n[min]){min=i;}

    }
    if(min!=j)
    {temp=n[j];
    n[j]=n[min];
    n[min]=temp;
    }
    
    }

   for(int i=0;i<5;++i)
    {cout<<n[i]<<" ";}   
}