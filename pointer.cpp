#include <iostream>
using namespace std;

void analyze_pointer(int* ptr);
int main(){

    int ivalue=2;
    int* ptri=&ivalue;

    analyze_pointer(ptri);

    int* x = new int;
    *x= 3;

    analyze_pointer(x);
    return 0;
}
void analyze_pointer (int* ptr){
    cout<<ptr<<endl;
    cout<< *ptr<<endl;

}