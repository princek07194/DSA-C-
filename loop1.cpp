// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     for(num=1;num<=5;num++){
//         cout<<num;
//     }
//     cout<<endl;
//     cout<<" : Last num value "<<num<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<"apna college"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter your n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
       
//     }
//      cout<<sum<<" ";
//     cout<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number n:";
//     cin>>n;
//     int i=1;
//     while(i<=5){
//         cout<<"prince"<<endl;
//         i++;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num=10;
//     for(int i=0;i<num;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;c
//     }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num=10;
//     for(int i=0;i<num;i++){
        
//         for(int j=0;j<=num;j++){
//             if(i==0 || j==0 ||i==num-1 ||j==num-1 || i==j || i+j==num-1 )
//             cout<<" * ";
        
//         else
//          cout<<"   ";
//     }
//     cout<<endl;
// }
//     return 0;
// }
//question 22.
// #include<iostream>
// using namespace std;
// int main(){
//     int num=10;
//     int sum=0;
//     for(int i=1;i<=num;i++){
//         sum+=i;
//     }
//     cout<<"Sum of n natural number is :"<<sum<<endl;
//     return 0;
// }
//question 23.
// #include<iostream>
// using namespace std;
// int main(){
//     int num=50;
//     int sum=0;
    
//     for(int i=1;i<=50;i++){
//         if(i%2==0)
//         sum+=i;
    
//     }
//     // int i=1;
//     // cout<<"Even number between 1 to 50"<<i<<endl;
//     cout<<sum;
//     return 0;
// }
// //question 24.
// #include<iostream>
// using namespace std;
// int main(){
//     int num=50;
//     int sum=0;
    
//     for(int i=1;i<=50;i++){
//         if(i%2!=0)
//         sum+=i;
    
//     }
//     // int i=1;
//     // cout<<"Even number between 1 to 50"<<i<<endl;
//     cout<<"Odd number sum : "<<sum;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num=10;
//     for(int i=1;i<=10;i++){
//         cout<<"square of first n natural : "<<i*i<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=12345;
//     int digsum=0;
//     while(n>0){
//         int lastdig =n%10;
//         digsum+=lastdig;
//         n=n/10;
//     }
//     cout<<"sum of digits :"<<digsum<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=12345;
//     int digsum=0;
//     while(n>0){
//         int lastdig=n%10;
//         if(lastdig %2!=0){
//            digsum+=lastdig;
//         }
//         n=n/10;
//     }
//     cout<<"sum of odd number is :"<<digsum<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     do{
//         cout<<"Enter the number :";
//         cin>>n;8888
//         if(n%10==0){
//             break;
//         }
//         cout<<"you entered number : "<<n<<endl;
//     }
//     while(true);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}