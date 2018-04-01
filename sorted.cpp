#include <iostream>
#include <assert.h>

using namespace std;

bool is_array_sorted(int values[], int size){
    
    assert(size > 0);
    
    if(size==1)
        return true;
    else if(values[0]<values[1])
        return is_array_sorted(values+1, size-1);
       
    else return false;

}

int main(){
    
  int values[1000];
  int size;
  cout << "Enter integers. (ctr+D to exit)" << endl;
  
  for (size = 0; cin >> values[size]; size++);
  
  if (is_array_sorted(values, size))
    {cout << "The values you entered are sorted" << endl;}
  else 
    {cout << "The values you entered aren't sorted" << endl;}
}
