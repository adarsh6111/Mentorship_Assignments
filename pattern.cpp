#include <iostream>

using namespace std;

int main()
{
    int n;
    int flag=0;
    cout<<"enter number of row";
    cin>>n;
    for(int i=1;i<=n;i++){              //for row
        for(int j=1;j<=i;j++)  {           // as digits are equal to number of row
            
            flag++;
            cout<<flag;
        }  
        cout<<"\n";
    }

return 0;
}
