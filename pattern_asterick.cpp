//prashant bajpai 
//23070123102
  #include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number of rows for your pattern: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}