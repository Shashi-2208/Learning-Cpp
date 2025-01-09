#include<bits/stdc++.h>
using namespace std;

/*int main(int argc, char const *argv[])
{
    int i;
    for ( i = 0; i < 4; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}*/
void pattern(int n){
    
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}
