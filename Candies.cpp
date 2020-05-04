#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
unsigned long long int candies(int N)
{unsigned long long int sum{1};
unsigned long long int k{2};
while(sum!=N)
{   unsigned long long int i=1;
    sum=sum+pow(2,k-1);int j=sum;
    while(sum<N){sum=j*i;i++;}
    if(sum==N){return i-1;}
    k++;
    sum=j;
}

}
int main()
{
    int n{},l{};
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;++i){cin>>l;a.push_back(l);}
    for(int i=0;i<n;++i)
    {
        unsigned long long int y=candies(a[i]);
        cout<<y<<endl;
    }
}