#include <iostream>
#include <cstring>
using namespace std;
int main() {

    int size=0;
    cout << "size of string ";
    cin >> size;

    
    char* str = new char[size + 1];

    cout << "Enter string: ";
    cin.ignore();
    cin.getline(str, size + 1);

    
    int length = strlen(str);

    
    for (int i = 0; i < length / 2; i++) {
        char temp = *(str + i);
        *(str + i) = *(str + length - 1 - i);
        *(str + length - 1 - i) = temp;
    }

    cout << "Reversed string: " << str << endl;

   
    
    delete[] str;

    return 0;
}