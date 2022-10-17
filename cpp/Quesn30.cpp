#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter size::";
    cin>>n;
    int x;
    cout<<"Enter the value of x::";
    cin>>x;
    int a[n];
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                if(a[i]==a[j])
                 break;
                else
                 count++;
            }
        }
    }
    cout<<"The total no of combinations for the given number x is::"<<count<<endl;
}
