#include<iostream>
using namespace std;
int main(){
    char ch='A';
    //for outer loop 
    for(int i=1;i<=4;i++){
        //Inner loop
        for(int j=1;j<=i;j++){
            cout<< ch <<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
