#include<iostream>
using namespace std;
double arrayMax(double* arr, int n){
    double max= arr[0];
    for (int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }



    return max;
}
int main(){
    double arr[5]={1,2,3,4,5};
    cout<< "The maximum value in the arr is: "<<arrayMax(arr,5)<<endl;

    return 0;
}