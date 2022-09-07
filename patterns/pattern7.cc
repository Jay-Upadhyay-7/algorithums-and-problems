#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a-1;j++)
            cout<<" ";
        for(int k=1;k<=2*i-1;k++)
            cout<<"*";
        a--;
        cout<<endl;
    }
}
