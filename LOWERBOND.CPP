#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
vector<int>a;
int n{},l{},q{},o{};
cin>>n;
for(int i=0;i<n;++i){cin>>l;a.push_back(l);}
cin>>q;
vector<int>b;
vector<int>c;
for(int i=0;i<q;++i)
{
    cin>>l;b.push_back(l);
}
for(int i=0;i<q;++i)
{for(int j=0;i<n;++j)
{
  if(b.at(i)==a.at(j)){cout<<"Yes "<<j+1<<endl;break;} else {int k=b.at(i);
      if(k<a.at(j)){c.push_back(a.at(j));
      }
      int small=c.at(0);
      for(int g=0;g<c.size();++g)
      {  if(c.at(g)<small){small=c.at(g); o=g;}

      }
cout<<"No"<<o+1<<endl;
      }}

}


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
