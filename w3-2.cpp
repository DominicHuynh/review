#include<iostream>
using namespace std;
void changeValue(double* number){
    *number= 42;
}
int main(){
    double a=1000;
    

    changeValue(&a);
    cout<< a <<endl;
}