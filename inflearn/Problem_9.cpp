#include <iostream>

using namespace std;
/*
int main(){

    int a=0;
    int cnt=0;

    cin>>a;
    for(int i=1; i<=a; i++){
        
        for(int j=1; j<=i; j++ ){

            if(i%j==0){
                cnt++;
            }
            
        }
        cout<<cnt<<" ";
        cnt=0;
    }
    return 0;
}
시간 복잡도가 n^2이므로 이런 코딩을 하면 만 단위가 넘는 코드는
속도가 너무 느려짐
*/

int main(){
    int cnt[50001];

    int n,i,j;
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=i; j<=n; j=j+i){
            cnt[j]++;
        }
    }

    for(i=1; i<=n; i++){
        cout<<cnt[i]<<" ";
    }

    return 0;
}

