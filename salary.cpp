#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the number of empoyees: "<<endl;
    cin>>size;
    int *salArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    // Apply increment formula
    for (int i = 0; i < size; i++)
    {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++)
    {
        cout << salArray[i] << " ";
    }
    cout << endl;

    delete[] salArray; // Free allocated memory
 
    return 0;
}