
// Q2. write a program of circumfrence of circle
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     int pi=3.14;
//     cout<<"Enter the radius of circle :";
//     cin>>r;
//     cout<<"circumfrence of circle :"<<2*pi*r;
    
// return 0;
// }
// Q3.write a program simple interest
// #include<iostream>
// using namespace std;
// int main(){
//     int si,p,r,t;
//     cout<<"Enter the amount P = :";
//     cin>>p;
//     cout<<"Enter the rate r = :";
//     cin>>r;
//     cout<<"Enter the time t = :";
//     cin>>t;
//     si=(p*r*t)/100;
//     cout<<"simple interest is = :"<<si;
//     return 0;
// }
// Q4. write a program for calculating volume of cuboid
// #include<iostream>
// using namespace std;
// int main(){
// int l,b,h,volume;
// cout<<"enter the length of cuboid l = :";
// cin>>l;
// cout<<"enter the breadth of cuboid b = :";
// cin>>b;
// cout<<"enter the height of cuboid h = :";
// cin>>h;
// volume =l*b*h;
// cout<<"volume of cuboid is = : "<<volume;
// return 0;
// }
// Q.5 Write a program to ask user about the cost price and selling
// price banana per dozen. Calculate the profit or loss earned
// upon selling 25 bananas.
// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp,profit,loss;
//     cout<<"Enter the cost price of banana per dozen cp = :";
//     cin>>cp;
//     cout<<"Enter the selling price of banana per dozen sp = :";
//     cin>>sp;
//     if(sp>cp){
//         profit=sp-cp;
//         cout<<"profit : = "<<profit<<endl;
//     }else{
//         loss=cp-sp;
//         cout<<"loss : = "<<loss<<endl;
//     }

//     return 0;
// }
// Q. 6Write a program to input a character from the user and print
// its ASCII code
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character for printing the scii code := ";
//     cin>>ch;
//     cout<<"ASCII CODE : = "<<int(ch);
//     return 0;
// }
// Q.7 Write a program to input an ASCII code from the user and
// print its corresponding character.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the ascii code for char = : ";
//     cin>>n;
//     cout<<"char of corresponding the ascii code "<<char(n)<<endl;
//     return 0;
// }
// Q.8  . Write a program to input three characters from the user and
// display characters with their corresponding ASCII codes.
// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2,n3;
//     cout<<"Enter the first number n1 : = ";
//     cin>>n1;
//     cout<<"Enter the second number n2 : = ";
//     cin>>n2;
//     cout<<"Enter the third number n3 : ";
//     cin>>n3;
    
//     cout<<"ASCII code for character is = : "<<char(n1)<<endl;
//     cout<<"ASCII code for character is = : "<<char(n2)<<endl;
//     cout<<"ASCII code for character is = : "<<char(n3)<<endl;
//     return 0;    
//}
// Q.9 . WAP to take date as an input in below given format and
// convert the date format and display the result as given
// below.
// User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format – “Day – DD , Month – MM , Year – YYYY”
// (Day – 27, Month – 07, Year – 2022)
// #include<iostream>
// using namespace std;
// int main(){
//     int dd,mm,yy;
//     cout<<"enter your date of birth  dob  dd :=";
//     cin>>dd;
//     cout<<"enter your date of birth  dob  mm :=";
//     cin>>mm;
//     cout<<"enter your date of birth  dob  yy :=";
//     cin>>yy;
//     cout<<dd<<"  Day "<<mm<<" month "<<yy<<" year ";
//     return 0;
// }
// Q.10 WAP to take time as an input in below given format and
// convert the time format and display the result as given
// below.
// User Input date format – “HH:MM”
// #include<iostream>
// using namespace std;
// int main(){
//     int HH,MM;
//     cout<<"Enter the time HH : ";
//     cin>>HH;
//     cout<<"Enter the time MM  :";
//     cin>>MM;
//     cout<<"Time is : "<<HH<<" : "<<MM<<" : ";
//     return 0;
// }
// Q .11 Write a program to input three characters from the user
// and display characters with their corresponding ASCII
// codes.
// #include<iostream>
// using namespace std;
// int main(){
//     char c1,c2,c3;
//     cout<<"Enter the first character : ";
//     cin>>c1;
//     cout<<"Enter the second character : ";
//     cin>>c2;
//     cout<<"Enter the three character : ";
//     cin>>c3;

//     if(c1>0){
//         cout<<"Character : "<<c1<<"  || ASCII CODE "<<int(c1)<<endl;
//     }
//     if(c2>0){
//         cout<<"Character : "<<c2<<" || ASCII CODE "<<int(c2)<<endl;
//     }
//     if(c3>0){
//         cout<<"Character : "<<c3<<" || ASCII CODE "<<int(c3)<<endl;
//     }
//     return 0;
// }
// Q .12 Create a program that takes a person's age as input and
// classifies them into different age groups (e.g., child,
// teenager, adult, senior).
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age : ";
//     cin>>age;
//     if(age<=12){
//         cout<<" Child "<<age<<endl;
//     }else if(age>12 && age<=19){
//         cout<<"Teenager "<<age<<endl;
//     }else if( age>=20 && age<=25){
//         cout<<" ADULT "<<age<<endl;
//     }else{
//         cout<<" SENIOR "<<age<<endl;
//     }
//     return 0;
// }
// Q.13 Develop a program that takes a student's score (0-100) as
// input and prints the corresponding grade (e.g., A, B, C, D, F)
// based on a grading scale.
// #include<iostream>
// using namespace std;
// int main(){
//     int scores;
//     cout<<"Enter your marks : = ";
//     cin>>scores;
//     if(scores>=90){
//         cout<<scores<<" A Grade "<<endl;
//     }else if(scores >=80 && scores <90){
//         cout<<scores<<" B Grade "<<endl;
//     }else if(scores >=70 && scores <80){
//         cout<<scores<<" C Grade "<<endl;
//     }else if(scores >=60 && scores <70){
//         cout<<scores<<" D Grade "<<endl;
//     }else if(scores >=50 && scores <60){
//         cout<<scores<<" E Grade "<<endl;
//     }else{
//         cout<<scores<<" FAIL "<<endl;
//     }
//     return 0;
        
    
// }
// Q.14 Write a program that reads two integers from the user
// and determines if the first integer is divisible by the second
// integer
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter the first integer : "<<endl;
//     cin>>num1;
//     cout<<"Enter the second integer : "<<endl;
//     cin>>num2;
//     if(num1%num2==0){
//         cout<<" Yes divisible "<<endl;
//     }else{
//         cout<<"No divisible "<<endl;
//     }
//     return 0;

// }
// // Q.15 Create a program that takes the lengths of three sides of a
// triangle as input and determines whether the triangle is
// equilateral, isosceles, or scalene.   
// #include<iostream>
// using namespace std;
// int main(){
//     int a ,b,c;
//     cout<<"Enter the first side of triangles : = "<<endl;
//     cin>>a;
//      cout<<"Enter the second  side of triangles : = "<<endl;
//     cin>>b;
//      cout<<"Enter the third  side of triangles : = "<<endl;
//     cin>>c;
//     if(a==b && a==c){
//         cout<<" Equiterial triangle"<<endl;
//     }else if(a==b && a!=c ||b==c && a!=c){
//         cout<<" isoscales triangle"<<endl;
//     }else{
//         cout<<" Scalene triangle "<<endl;
//     }

    //return 0;
//}
// Q.16 develop a program that converts a temperature from
// Fahrenheit to Celsius or vice versa based on user input. The
// user should specify   
// #include<iostream>
// using namespace std;
// int main(){
//     int choice;
//     int temp,converted;
//     cout<<"temperature converture  :"<<endl;
//     cout<<" 1 for fahrenheight "<<endl;
//     cout<<" 2 for celsius "<<endl;
//     cout<<"Enter your choice "<<endl;
//     cin>>choice;
//     if(choice==1){
//         cout<<"temperature in fahrenheight   "<<endl;
//         cin>>temp;
//         converted =(temp-32)*5.0/9.0;
//         cout<<"Temperature in celsius "<<converted<<char(248)<<" C "<<endl;
//     }else{
//         cout<<"temperature in celsius   "<<endl;
//         cin>>temp;
//         converted =(temp*9.0/5.0)+32;
//         cout<<"Temperature in fahrenheight  "<<converted<<char(248)<<" F "<<endl;
//     }
//     return 0;
    
// }                                                                                                                                                                                                                                                                                                                                                                                                                                         
// Q.17 Write a program that takes a start year and an end year
// from the user and prints all the leap years in that range.
// #include<iostream>
// using namespace std;
// int main(){
//     int sy,ey;
//     cout<<" Enter the start year : ";
//     cin>>sy;
//     cout<<"Enter the last year :";
//     cin>>ey;
//     for(int i=sy;i<=ey;i++){
//         if(i%4==0)
//         cout<<"Leap year "<<i<<endl;
//     }
//     return 0;
// }
// Q.18 Write a program that takes three numbers as input and
// finds the middle (second largest) number.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the three numbers : ";
//     cin>>a>>b>>c;
//     int secondlargest;
//     if((a>b && a<c)||(a<b && a>c)){
//     secondlargest=a;
    
//     }else if((b>c && b<a)||(b<c && b>a)){
//         secondlargest=b;
//     }else{
//         secondlargest=c;
//     }
//     cout<<" Secondlargest element is : "<<secondlargest;
//     return 0;
// }
// Q .19 Develop a program that takes a month (as an integer from
// 1 to 12) and a year as input, then prints the number of days
// in that month, considering leap years.
// #include<iostream>
// using namespace std;
// int main(){
//     int month,year;
//     cout<<"Enter the year :";
//     cin>>year;
//     cout<<"Enter the month :";
//     cin>>month;
//     int days;
//     switch(month){
//         case 1:case 3:case 5: case 7:case 8: case 10: case 12:
//         days=31;
//         cout<<"number of days in month : "<<days<<endl;
//         break;
//         case 4: case 6: case 9: case 11:
//         days=30;
//         cout<<" Number od days in month : "<<days;
//         break;
//         case 2:
//         if((year%400==0)||(year%4==0 )) 
//         days=29;
//     else{
//         days=28;
//         break;
//         default:
//         cout<<"Invalid number please enter the valid number :"<<endl;
//     }
//     cout<<"Number of days in month "<<month<<" is: "<<days<<" year "<<year;
//     return 0;
//     }
// }
// Q.20 Develop a program that takes four numbers as input and
// prints the largest among them.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c,d;
//     cout<<"Enter the four number is :"<<endl;
//     cin>>a>>b>>c>>d;
//     if(a>b && a>c && a>d){
//         cout<<" a  is largest number "<<a<<endl;
//     }else if(b>a && b>c && b>d){
//         cout<<" b is largest number "<<endl;
//     }else if(c>a && c>b && c>d){
//         cout<<"c is largest number "<<c<<endl;
//     }else{
//         cout<<"d is largest number :"<<d<<endl;
//     }
//     return 0;
// }
// Q.21 Create a program that takes a number (1-7) as input and
// prints the corresponding day of the week.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number correspondig the days :"<<endl;
//     cin>>num;
    
//     switch(num){
//         case 1:
//         cout<<" Monday "<<endl;
//         break;
//         case 2:
//         cout<<" Tuesday "<<endl;
//         break;
//         case 3:
//         cout<<" Wednesday "<<endl;
//         break;
//         case 4:
//         cout<<" Thursday "<<endl;
//         break;
//         case 5:
//         cout<<" Friday "<<endl;
//         break;
//         case 6:
//         cout<<" Saturday "<<endl;
//         break;
//         case 7:
//         cout<<" Sunday "<<endl;
//         break;
//         default:
//         cout<<" Invalid entered please ! enter valid number ";
//     }
//     return 0;
    
// }
// Q.22 write a program to Calculate sum of first n natural number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum +=i;
        
//     }
//     cout<<" sum is first n natural number "<<sum<<endl;
//     return 0;
// }
// Q.23 Write a program to calculate sum of first N even natural
// numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :"<<endl;
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         if(i%2==0)
//         sum+=i;
        
//     }
//     cout<<" sum of first even number :"<<sum<<endl;
    
//     return 0;
//}
// Q.24 Write a program to calculate sum of first N odd natural
// numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<" Enter the number n :"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0)
//         sum+=i;
//     }
//     cout<<" Sum of first n natural odd number is :"<<sum;
//     return 0;
// }
// Q.25 Write a program to calculate sum of squares of first N
// natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sq;
//     int sum=0;
//     cout<<"Enter the number is :"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sq=i*i;
//         sum+=i*i;
//         // cout<<i*i<<endl;
//         cout<<sq<<endl;
        
//     }
//     cout<<sum;
//     // cout<<sq<<endl;
//     // cout<<"sum of sq of first n natural number is :"<<sq<<endl;
//     return 0;
// }
// Q.26 Write a program to calculate sum of cubes of first N
// natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the number n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //cube=i*i*i;
//         sum+=i*i*i;
//         cout<<i*i*i<<endl;
        
//     }
//     cout<<"sum of first n natural cube number is "<<sum;
//     //cout<<"sum of first n cube number is "<<sum<<endl;
//     return 0;
// }
//Q.27 Write a program to calculate factorial of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     long long  factorial=1;
//     cout<<"Enter the number n :";
//     cin>>n;
//     if(n<0){
//         cout<<"Enter valid number :";
//     }else{
//         for(int i=1;i<=n;i++){
//             factorial*=i;
//         }
//         cout<<"factorial is :"<<factorial;
//     }
//     return 0;
// }
//Q.28 Write a program to count digits in a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0;
//     cout<<"Enter the number n :";
//     cin>>n;
//     if(n<0){
//         n=-n;
//     }else if(n==0){
//         count=1;
//     }else{
//         while(n>0){
//             n=n/10;
//             count++;
//         }
//     }
//     cout<<" Number of digits = "<<count;
//     return 0;
// }
// Q.29 Write a program to check whether a given number is a
// Prime number or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     bool isprime=true;
//     cout<<"Enter the number :";
//     cin>>n;
//     if(n<=1){
//         isprime=false;// 0 and 1 is not prime number 
//     }else{
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0){
//                 isprime=false;
//                 break;
//             }
//         }
//     }
//     if(isprime){
//         cout<<n<<" is  a prime number";
//     }else{
//         cout<<n<<" is not prime number "<<endl;
//     }
//     return 0;

// }
//Q.30 Write a program to calculate LCM of two numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2, lcm, hcf;
//     cout << "Enter the numbers: ";
//     cin >> n1 >> n2;

//     for (int i = 1; i <= n1 && i <= n2; i++) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             hcf = i;
//         }
//     }

//     cout << "HCF is : " << hcf << endl;
//     lcm = (n1 * n2) / hcf;
//     cout << "LCM is : " << lcm << endl;

//     return 0;
// }
//  Q .31Write a program to reverse a given number
// #include <iostream>
// using namespace std;

// int main() {
//     int num, reversedNum = 0, remainder;

//     cout << "Enter an integer: ";
//     cin >> num;

//     while (num != 0) {
//         remainder = num % 10;              // Get the last digit
//         reversedNum = reversedNum * 10 + remainder; // Append digit
//         num /= 10;                         // Remove last digit
//     }

//     cout << "Reversed number: " << reversedNum << endl;
//     return 0;
// }
// Q .32 Write a program to find the Nth term of the Fibonacci
// series.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     long long first = 0, second = 1, next;

//     if (n == 1) {
//         cout << "The " << n << "th term of Fibonacci series is: " << first << endl;
//     }
//     else if (n == 2) {
//         cout << "The " << n << "th term of Fibonacci series is: " << second << endl;
//     }
//     else {
//         for (int i = 3; i <= n; i++) {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << "The " << n << "th term of Fibonacci series is: " << second << endl;
//     }

//     return 0;
// }
// Q.33 Write a program to print first N terms of Fibonacci series.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     long long first = 0, second = 1, next;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; i++) {
//         if (i == 1) {
//             cout << first << " ";
//             continue;
//         }
//         if (i == 2) {
//             cout << second << " ";
//             continue;
//         }
//         next = first + second;
//         cout << next << " ";
//         first = second;
//         second = next;
//     }

//     cout << endl;
//     return 0;
// }
// Q.34 Write a program to check whether a given number is
// there in the Fibonacci series or not.
// #include <iostream>
// using namespace std;

// int main() {
//     long long num;
//     cout << "Enter a number: ";
//     cin >> num;

//     long long first = 0, second = 1, next;

//     if (num == 0 || num == 1) {
//         cout << num << " is in the Fibonacci series." << endl;
//         return 0;
//     }

//     next = first + second;
//     while (next <= num) {
//         if (next == num) {
//             cout << num << " is in the Fibonacci series." << endl;
//             return 0;
//         }
//         first = second;
//         second = next;
//         next = first + second;
//     }

//     cout << num << " is NOT in the Fibonacci series." << endl;
//     return 0;
// }
//  Q 35 Write a program to calculate HCF of two numbers.
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     int x = a, y = b;

//     // Euclidean algorithm
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }

//     cout << "HCF of " << x << " and " << y << " is: " << a << endl;
//     return 0;
// } 
// Q.36 Write a program to check whether two given numbers
// are co-prime numbers or not.
// #include <iostream>
// using namespace std;

// // Function to calculate HCF using Euclidean algorithm
// int hcf(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     if (hcf(num1, num2) == 1) {
//         cout << num1 << " and " << num2 << " are Co-Prime numbers." << endl;
//     } else {
//         cout << num1 << " and " << num2 << " are NOT Co-Prime numbers." << endl;
//     }

//     return 0;
// }
// Q.37 Write a program to print all Prime numbers under 100.
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Prime numbers between 1 and 100 are:\n";

//     for (int num = 2; num <= 100; num++) {
//         bool isPrime = true;

//         // check prime number or not
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << num << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }
//  Q.38 Write a program to print all Prime numbers between two
// given numbers.
// #include <iostream>
// using namespace std;

// int main() {
//     int start, end;
//     cout << "Enter two numbers (range): ";
//     cin >> start >> end;

//     cout << "Prime numbers between " << start << " and " << end << " are:\n";

//     for (int num = start; num <= end; num++) {
//         if (num < 2) continue; // skip numbers less than 2
//         bool isPrime = true;

//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
// Q.39 Write a program to find next Prime number of a given
// number
// #include <iostream>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int next = num + 1; // start checking from the next number
//     while (!isPrime(next)) {
//         next++;
//     }

//     cout << "The next prime number after " << num << " is: " << next << endl;
//     return 0;
// }
// Q/40 Write a program to check whether a given number is an
// Armstrong number or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     int num=n;
//     int dig1=num%10;
//     num/=10;
//     int dig2=num%10;
//     num/=10;
//     int dig3=num%10;
//     num/=10;
//     int cubesum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
//     if(cubesum ==n){
//         cout<<n<<" : is an Armstrong Number"<<endl;
//     }else{
//         cout<<n<<" : is not Armstrong Number"<<endl;
//     }
//     return 0;

// }
// Q.41 Write a program to print all Armstrong numbers under
// 1000
 #include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int num = 1; num < 1000; num++) {
        int sum = 0, temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + (digit * digit * digit); // cube of each digit
            temp = temp / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
