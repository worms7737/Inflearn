#include <iostream>

using namespace std;

int reverse(int x)
{
    int res=0;
    while(x>0){
        int tmp=x%10;
        res=res*10+tmp;
        x=x/10;
    }
    return res;
}
bool isPrime(int x)
{
    int i;
    if(x==1) return false; //1은 소수가 아니므로 예외의 상황
    bool flag=true;
    for(i=2; i<x; i++)
    {
        if(x%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n, num, i, tmp;
    
    cin>>n;
    
    for(i=1; i<=n; i++){
        cin>>num;
        tmp=reverse(num);
        if(isPrime(tmp)) cout<<tmp<<" ";
        
    }
    return 0;
}

