#include<iostream>
using namespace std;
void printArray(double* arr, int n){
     
    for (int i=0;i<n;i++){
        cout<<" "<< arr[i];
    }
    cout<<endl;


}
int main(){

    double arr[5]={1.2,1.3, 1.4, 1.5, 1.6};
    printArray(arr,5);

    return 0;
}