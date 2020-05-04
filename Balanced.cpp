#include<iostream>
#include<vector>
using namespace std;
int balanced(int a)
{int sum{},sum1{};
if(a==2||a==1||a<1){cout<<"NO"<<endl;}
else if(a>2)
{vector<int>h;
int g=2;
for(int i=0;i<a/2;++i){h.push_back(g);sum+=g;g=g+2;}   

int f=1;
for(int i=a/2;i<a-1;++i){h.push_back(f);sum1+=f;f=f+2;}
int y{};
while(y!=sum&&y<sum){y=sum1+f;f=f+2;} 
h.push_back(f-2);
if(y!=sum){cout<<"NO"<<endl;return 0;}
else if(y==sum){
cout<<"Yes\n";
for(int i=0;i<a;++i){cout<<h[i]<<" ";}cout<<endl;
}

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
        balanced(a[i]);
        
    }
}
