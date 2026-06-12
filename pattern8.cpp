#include<iostream>
using namespace std;
int main(){
    //outer loop
    for(int i=1;i<=4;i++){
        //innerloop
        for(int j=1;j<=4;j++){
            if((i==1 ||i==4 && (j==1||j==2||j==3||j==4))||
            (j==1 ||j==4 &&(i==1|2||i==3||i==4))){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
} 