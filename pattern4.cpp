#include<iostream>
using namespace std;
int main(){
    //for outer loop 
    for(int i=1;i<=4;i++){
        //Inner loop
        for(int j=1;j<=i;j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}