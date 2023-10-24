#include <iostream>
using namespace std;


int findMax(int arr[], int n) {

    if (n == 1) {
        return arr[0];
    }
    
    
    int maxInRest = findMax(arr, n - 1);
    
   
    return (maxInRest > arr[n - 1]) ? maxInRest : arr[n - 1];
}


int findMin(int arr[], int n) {
    
    if (n == 1) {
        return arr[0];
    }
    
    
    int minInRest = findMin(arr, n - 1);
    
  
    return (minInRest < arr[n - 1]) ? minInRest : arr[n - 1];
}

int main() {
    cout<<"Enter Array Size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements"<<endl;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int maxElement = findMax(arr, n);
    int minElement = findMin(arr, n);
    
    cout << "Maximum element in the array: " << maxElement << endl;
    cout << "Minimum element in the array: " << minElement << endl;
    
    return 0;
}
