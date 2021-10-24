#include <iostream>
using namespace std;
int main()
{
    int low, high;
    int i,j;
    scanf("%d%d",&low,&high);
    for(i=low;i<=high;i++)
    {
       int count=0;
       for(j=2;j<=high;j++)
       {
           if(i%j==0)
           {
           count++;
           }
       }
       if(count==1)
       {
           printf("%d\n",i);
       }
    }
    return 0;
}