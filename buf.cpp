#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    streambuf * p;
    ofstream file;
file.open("text.txt");
    p=file.rdbuf();
do{
   ch=cin.get();
   p->sputc(ch);
    
}while(ch!='.');
file.close();
return 0;
}