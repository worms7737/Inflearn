#include <iostream>
using namespace std;

int main(){

    int cnt=0;

    char a[30];
    cin>>a;
    for(int i=0; a[i]!='\0'; i++){
        
        if(a[i]=='(')
            cnt++;
        else if(a[i]==')'){
            cnt--;
        }
        if(cnt<0) break;


    }

    if(cnt==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}