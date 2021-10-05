#include <iostream>
using namespace std;
int main(){
    int t,i,j,n;
    int count=0;
    int flag=true;
    cin >> t;
    while(t--)
    {
        flag = true;
         cin>>n;
         for(j=2;j<=n/2;j++)
         {
             if(n % j==0)
                flag=false;
         }
        if(flag==true)
        {
            cout<<"prime\n";
        } 
        else{
            cout<<"not prime\n";
        }
    
    }
    return 0;   
}