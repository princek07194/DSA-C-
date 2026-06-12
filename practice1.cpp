// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         //inner loop
//         for(int j=1;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         }
//         return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=n;i>=0;i--){
//         //inner loop
//         for(int j=0;j<=n;j++){
//             if((i==0&&j==0)||
//             (i==1&&j==1)||
//             (i==2&&(j==0||j==1||j==2))||
//             (i==3&&j==3)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         //inner loop
//         for(int j=1;j<=i;j++){
            
//             cout<<j;
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=5;j++){
//             if((i==1 && (j==5||j==1||j==2||j==3||j==4))||
//             (i==4 && (j==5||j==1||j==2||j==3||j==4))||
//             (i==3&&(j==1||j==5))){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     //outer loop
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             if((i==0 && j==3)||
//             (i==1 && j==2)||
//             (i==2 && (j==1||j==2||j==3))||
//             (i==3 && j==0)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     //outer loop
//     for(int i=1;i<=n;i++){
//         //inner loop
//         for(int j=1;j<=i;j++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     char ch =e;
//     //outer loop
//     for(int i=a;i<=e;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // int n=5;
//     char ch = 'e';
//     //outer loop
//     for(char i='a';i<=ch;i++){
//         for(char j='a';j<=ch;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
       
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=n;j++){
//             char name='a'+j-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     //outer loop
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             char name='a'+i-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-(i-1);j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=5;j>=5-i+1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}