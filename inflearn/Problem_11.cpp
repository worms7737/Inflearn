#include <iostream>

using namespace std;

int main()
{
    int n;
    int tmp=0;
    cin>>n;
    int cnt=0;
    
    for(int i=1; i<=n; i++){
        tmp=i;
        while(tmp>0){
            tmp=tmp/10;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}