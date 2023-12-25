#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a=1;
    cout<<"Enter number of rows";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;

        while(j<=n)
        {
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        
        i++;
    }
    return 0;
}