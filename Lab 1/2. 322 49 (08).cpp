//Codeforce problem no :71A
//Problem name : Way to long words
#include<iostream>
#include<string>
using namespace std;

int main()
{
int len,n,i;
char word[100];
cin>>n;
for(i=0;i<n;i++)
{
cin>>word;
len= strlen(word);
if(len>10)
cout<<word[0]<<len-2<<word[len-1]<<endl;
else
cout<<word<<endl;

}
    return 0;
}
