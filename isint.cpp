#include <iostream>
#include <assert.h>
#include <ctype.h>

using namespace std;

bool is_int(char str[]){ 
    
    if(!isdigit(str[0])||str[0]==0) return false;
    else if(str[1]==0) return true;

    return is_int(str+1);
}

int main(){
    
  char check[1000];
  cout << "Enter a string: ";
  cin >> check;

  if (is_int(check))
    {cout << "<" << check << "> is an integer." << endl;}
  else 
    {cout << "<" << check << "> is NOT an integer." << endl;}
}
