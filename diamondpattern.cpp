#include <iostream>

using namespace std;

int main()
{
    
    for(int i=1;i<=5;i++){
        for(int j=i;j<5;j++){
            cout<<" ";
            
        }
        for(int k=1;k<(i*2);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=4;i>=1;i--){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<(i*2);k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
