// q.1
// #include<iostream>
// using namespace std;
// int main(){
//     int n,factorial=1;
//     cout<<"Enter the number :";
//     cin>>n;
//     if(n<0){
//         cout<<"Invalid number :";

//     }else if(n==0||n==1){
//         cout<<"Factorial of number is 1 :";
//     }else{
//         for(int i=1;i<=n;i++){
//             factorial *=i;
//         }
//         cout<<"factorial of number is "<<factorial;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number is :";
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<(n*i)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"Enter the number n :";
//     cin>>n;
//     int num=n;
//     int cubesum=0;
//     while(num>0){
//         int lastDig = num % 10;
//         cubesum += lastDig * lastDig  *lastDig;
//         num/= 10;
//     }
//     if(cubesum==n){
//         cout<<"yes this is armstrong number ";
//     }else{
//         cout<<" No this number is not armstrong number ";
//     }
//     return 0;
// }
//Q. For a positive n , print all the prime number 2 to n;
#include<iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number n: ";
    cin >> n;

    // loop through all numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        bool isprime = true; // assume i is prime initially

        // check divisibility
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = false; // i is not prime
                break;
            }
        }

        if (isprime) {
            cout << i << " "; // print prime number
        }
    }

    return 0;
}
