#include <iostream>
#include <assert.h>

using namespace std;

int largest(int num1, int num2){
    
    if(num1 > num2) return num1;
    else return num2;
}

int largest_in_array(int values[], int size){
    
    if(size == 1) return values[0];
    else return largest(values[0], largest_in_array(values+1, size-1));
}

int main(){
    
    int values[1000];
    int size;
    cout << "Enter integers.(ctr+D to exit)" << endl;
    
    for (size = 0; cin >> values[size]; size++);
    
    cout << "The largest in the array is " << largest_in_array(values, size) << endl;
}
