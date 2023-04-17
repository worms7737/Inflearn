#include <iostream>

using namespace std;

int main(){
    int n, sum=0, c=1, d=9, res=0;

    cin>>n;

    while(sum+d<n){
        res=res+(c*d);
        sum=sum+d;
        c++;
        d=d*10;
    }
    //몇번째 자릿수까지 있는지를 확인하는 반복문!!
    res=res+((n-sum)*c);
    //범위를 초과했을시 남는 수 x 자릿수로 숫자갯수 확인!!
    cout<<res<<endl;
    
}