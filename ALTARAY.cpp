#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
      int n ;
      cin >> n;
      int * A = new int[n];
      for(int i=0;i<n;i++)
        cin >> A[i];
      
      int * count = new int[n];
      
       for(int i= 0;i<n;i++)
        count[i] = 0;
        
       count[n-1] =1;
        
       for(int i=n-2;i>=0;i--)
        {
          if((A[i]>0 && A[i+1]>0) || (A[i]<0 && A[i+1]<0))
            {
                count[i] = 1;
            }
            else
            {
               count[i] = count[i+1]+1;
            }  
        }
        
         for(int i=0;i<n;i++)
           cout << count[i] << " " ;
        cout<<endl;
        
        
        
    }
     
}