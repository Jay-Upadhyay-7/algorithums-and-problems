#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=5;j>i;j--)
            cout<<" ";
        for(int k=1;k<=i;k++)
        {
            cout<<char(a++);
        }
        a--;
        for(int  l=1;l<i;l++)
        {
            cout<<char(--a);
        }
        cout<<endl;
        a=65;
    }
}
