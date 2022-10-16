#include<iostream>
using namespace std;
int main()
{
    string x;
    cout<<"Enter string::";
    getline(cin, x);
    cout<<"Entered string is::"<<x<<endl;
    int size=x.length();
    int count=0,ch=0;
    for(int i=0;i<size;i++)
    {
        if(isdigit(x[i]))
        count++;
        else if(isspace(x[i]))
        continue;
        else
        ch++;
    }
    cout<<"no of digits::"<<count<<endl;
    cout<<"no of characters::"<<ch<<endl;
}
