#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a;
    cout<<"Enter number of rows";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        a=i;
        while(j<=i)
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