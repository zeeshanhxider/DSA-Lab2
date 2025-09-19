#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout<<"Enter the maximum size of the string: "<<endl;
    cin>>size;

    char *str = new char[size];
    cout<<"Enter the string: "<<endl;
    cin.ignore();
    cin.getline(str, size + 1);

    int len = strlen(str);

    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout<<"Reversed string is: "<<str<<endl;

    delete[] str; 

    return 0;
}
