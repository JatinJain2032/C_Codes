#include <iostream>

 using namespace std;


int main()
{
     int n=3;
    int a[3][3]={{1,2,3}, {4,5,6},{7,8,9}};



    for(int i=0;i<3;i++)
    {
        for(int j=i;i<3;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }

    }

         for(int i=0;i<3;i++)
         {

        for(int j=0;i<3;j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<"\n";

    }
     return 0;
}
