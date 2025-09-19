#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Address of the pointer is: " << &ptr << endl;
    cout << "The value of the integer stored at the pointer is: " << *ptr << endl;
} 

int main() {
    int iValue;
    iValue = 23;
    cout<<"For the int stored in stack: "<<endl;
    analyze_pointer(&iValue);
    int* pValue = new int;
    *pValue = 21;
    cout<<"For the int stored in heap: "<<endl;
    analyze_pointer(pValue);
    return 0;
}
