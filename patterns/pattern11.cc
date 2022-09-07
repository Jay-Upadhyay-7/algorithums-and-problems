#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            
            if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0))
                cout<<"1";
            else if((i%2!=0 && j%2==0) || (i%2==0 && j%2!=0))
                cout<<"0";

        }
        cout<<endl;
    }
}
