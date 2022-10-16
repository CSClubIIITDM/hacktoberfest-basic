#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n,x;
    cout<<"Enter a number::";
    cin>>n;
    x=n;
    int rem=0,sum=0;
    while(x>0)
    {
        rem=x%10;
        sum=sum+pow(rem,3);
        x=x/10;
    }
    if(sum==n)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    cout<<"not an armstrong number"<<endl;
    return 0;
}
