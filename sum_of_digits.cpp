//prashant bajpai 
//23070123102
 /**  #include<iostream>
using namespace std;
int main()
{
    int i=0,s=0,num;
    cout<<"Enter end value: ";
    cin>>num;
    while(i<=num)
    {
        s=s+i;
       i=i+1;
    }
    cout<<"The sum of first natural numbers is: "<<s;
    return 0;
}**/
//end value using while 
#include<iostream>
using namespace std;
int main()
{
  int i=1,n;
  cout<<"Enter end value: ";
  cin>>n;
  while(i<=n)
  {
    cout<<i<<" ";
    i=i+1;
  }
}