// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the number "<<endl;
//     cin>>a>>b;
//     int sum=a+b;
//     cout<<"sum is "<<sum <<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int physics,chemistry,math;
//     cout<<"Enter the marks each subject :"<<endl;
//     cin>>physics>>chemistry>>math;
//     int avg=(physics+chemistry+math)/3;
//     cout<<"average marks of three subject is :"<<avg<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int side,area;
//     cout<<"Enter the side of square "<<endl;
//     cin>>side;
//     area=side*side;
//     cout<<"Area of square is : "<<area<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int item1,item2,item3,GST ,total,Bill;
//     cout<<"Enter the price of pencil : "<<endl;
//     cin>>item1;
//     cout<<"Enter the price of eraser : "<<endl;
//     cin>>item2;
//     cout<<"Enter the price of pen    : "<<endl;
//     cin>>item3;
//     total=item1+item2+item3;
//     GST=(total)*18/100;
//     Bill=GST+total;
//     cout<<"Bill of product is :"<<Bill<<endl;
    
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int p,r,t,si;
//     cout<<"Enter the Amount P :  "<<endl;
//     cin>>p;
//     cout<<"Enter the Rate % : "<<endl;
//     cin>>r;
//     cout<<"Enter the time :  "<<endl;
//     cin>>t;
//     si=(p*r*t)/100;
//     cout<<"Enter Simple interest of that Amout is :  "<<si<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int radius,area;
//     cout<<"Enter the radius of circle :"<<endl;
//     cin>>radius;
//     area=3.14*radius*radius;
//     cout<<"Area of circle is : "<<area<<endl;
//     return 0;
// }
// #include<iostream>
// #define ll long long
// using namespace std;
// int main(){
//     const int x=5;
//     cout<<"x:"<<x<<endl;
//     ll z=50;
//     ll y=65;
//     cout<<"ll :"<<y <<"ll :"<<endl <<z<<endl;
   
    
//     return 0;
// }
// inplicit conversion
// #include<iostream>
// using namespace std;
// int main(){
// float  PI=3.14;
//     cout<<(10/3.)<<endl;
//     cout<<'a'+9<<endl;
//     cout<<(int)'A'<<endl;
//     cout<<(int)PI<<endl;
//     cout<<((float)10/3)<<endl;
//     cout<<((bool)3+2)<<endl;
//     cout<<(23.5+2+'A');
//     int a=5;
//     a++;
//     cout<<"a :"<<a<<endl;
//     a--;
//     cout<<"a :"<<a<<endl;

//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     // // int x=2,y=5;
//     // // int exp1=(x*y/x);
//     // // int exp2=(x*(y/x));
//     // // cout<<exp1 <<","<<endl;
//     // //  cout<<exp2 <<","<<endl;
//     // int x=10,y=5;
//     // int exp1= (y * (x / y + x / y)); 
//     // int exp2= (y * x / y + y * x / y);
//     // cout<<exp1<<endl;
//     // cout<<exp2<<endl;
//     int x=200,y=50,z=100;
//     if(x>y&& y>z){
//     cout<<"Hello\n"<<endl;
//  }if(z>y && z<x){
//         cout<<"c++ \n";
//     }if((y+200)>x && (y+150)<z){
//         cout<<"Hello c++ \n";
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter the num1 :"<<endl;
//     cin>>num1;
//     cout<<"Enter the num2 :"<<endl;
//     cin>>num2;

//     if(num1>num2){
//         cout<<num1<<endl;
//     }
//    else if(num1=num2){
//         cout<<"Equal number entered"<<endl;
//     }
//      else {
//         cout<<num2<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// // int main(){
// //     int income;
// //     cout<<"Enter the  income "<<endl;
// //     cin>>income;
// //     if(income<5L){
// //         cout<<"Tax :"<<(income*0)/100<<endl;
// //     }
// //     else if(income >5L && income<10L){
// //         cout<<"Tax:"<<(income*20)/100<<endl;
// //     }else{
// //         cout<<(income*30)/100<<endl;
// //     }
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     float marks;
//     cout<<"Enter the marks :"<<endl;
//     cin>>marks;
//     if(marks>=33){
//         cout<<"PASS :"<<marks<<endl;
//     }else{
//         cout<<"FAIL : "<<marks<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter the num1"<<endl;
//     cin>>num1;
//     cout<<"Enter the num2 :"<<endl;
//     cin>>num2;
//     if(num1>num2){
//         cout<<"num1 is largest number :"<<num1<<endl;
//     }else{
//         cout<<"num2 is largest number :"<<num2<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int income;
//     cout<<"Enter the income in lakhs:"<<endl;
//     cin>>income;
//     if(income <5){
//         cout<<income<<":  0% TAX :"<<endl;
//     } else if(income >=5 && income <10){
//         cout<<0.2*income<<"  :20% TAX :"<<endl;
//     }else{
//         cout<< 0.3*income<<"  :30% TAX"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,num3;
//     cout<<"Enter the first number :"<<endl;
//     cin>>num1;
//     cout<<"Enter the second number :"<<endl;
//     cin>>num2;
//     cout<<"Enter the third number :"<<endl;
//     cin>>num3;
//     if(num1>num2 && num1>num3){
//         cout<<num1<<" :First number is the largest number :"<<endl;
//     }else if(num2>num3){
//         cout<<num2<<" :second number is largest number"<<endl;
//     }else{
//         cout<<num3<<" : Third number is largest number :"<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter the day number 1-7 :"<<endl;
//     cin>>day;
//     switch(day){
//         case 1:cout<<"Monday :"<<endl;
//         break;
//          case 2:cout<<"Tuesday :"<<endl;
//          break;
//           case 3:cout<<"Wednesday :"<<endl;
//           break;
//            case 4:cout<<"Thursday :"<<endl;
//            break;
//             case 5:cout<<"Friday :"<<endl;
//             break;
//              case 6:cout<<"Saturday :"<<endl;
//              break;
//               case 7:cout<<"Sunday :"<<endl;
//               break;
//               default:cout<<"Invalid :"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter the year :"<<endl;
//     cin>>year;
//     if(year%4==0){
//         cout<<year<<" :Leap year :"<<endl;
//     }else{
//         cout<<year<<" : Not leap year :"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
// int a = 5;
// if (++a*5 <= 25) {
// cout<<"Hello\n";
// } else {
// cout<<"Bye\n";
// }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the 3 digit number :"<<endl;
    cin>>n;
    int num=n;
    int dig1=num%10;
    num/=10;
    int dig2=num%10;
    num/=10;
    int dig3=num%10;
    num/=10;
    int cubesum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(cubesum ==n){
        cout<<n<<" : is an Armstrong Number"<<endl;
    }else{
        cout<<n<<" : is not Armstrong Number"<<endl;
    }
    return 0;
}