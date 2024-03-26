#include<iostream>
using namespace std;
int main(){
    double grade= 10.0;
    double* ptr1=&grade;
    
    cout<<*ptr1<<endl;
    return 0;
}