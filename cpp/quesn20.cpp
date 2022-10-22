#include<iostream>
using namespace std;

int sOAP(int n)
{
    return n*(n+1)/2;
}
int main()
{
    int n,sum=0,ap;
    cout<<"Enter the Value of N\t";
    cin>>n;
    cout<<"Enter the n-1 values\t";
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    ap=sOAP(n);
    cout<<"The Missing integer is :  "<<ap-sum;

    return 0;
}
