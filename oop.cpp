#include<iostream>
using namespace std;
class btech{
    public:
    int roll;
    float cgpa;
    char section;
};
int main(){
    btech rohit,aman;
    rohit.roll=77;
    rohit.cgpa=8.9;
    rohit.section='F';
    cout<<"Roll :"<<rohit.roll<<endl;
    cout<<"cgpa :"<<rohit.cgpa<<endl;
    cout<<"section:"<<rohit.section<<endl;
}