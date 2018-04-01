#include <iostream>

using namespace std;

bool equal_string(const char str1[], const char str2[]){
    
    if(str1[0] == 0 && str2[0] == 0) return true;

    if(str1[0] != str2[0]) return false;
    else return equal_string(str1+1, str2+1);
}

int main(){
    
    char str1[1000], str2[1000];

    str1[0] = 0;
    str2[0] = 0;

    cout << "enter first string: ";
    cin >> str1;
    cout << "enter second string: ";
    cin >> str2;

    if (equal_string(str1, str2))
        {cout << "<" << str1 << "> is the same as <" << str2 << ">" << endl;}
    else 
        {cout << "<" << str1 << "> is not the same as <" << str2 << ">" << endl;}
}
