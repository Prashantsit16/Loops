//prashant bajpai 
//23070123102
//  #include<iostream>
//using namespace std;
//int main()
//{
  //  int i,j,n,k;
    //cout<<" Enter the end value: ";
    //cin>>n;
    //for (i=1;i<=n;i++)
    //{
      //  for(j=1;j<=(n-i);j++)
        //{
          //  cout<<" ";
        //}
       //for(k=0;k<=(i-1);k++)
       //{  
        //cout<<"* ";
       //}
       //cout<<endl;
    //}
    //return 0;
//}
//priti 103
//pyramid 2
 #include<iostream>
using namespace std;
int main()
{
   int i,j,k,rows;
cout<<"Enter number of rows: ";
cin>>rows;
   for(i=0;i<rows;i++)
   {
    for(j=rows-1;j>i;j--)
    {
        cout<<" ";
    }
    for(k=0;k<(2*i+1);k++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}