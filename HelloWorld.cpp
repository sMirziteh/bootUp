#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Hello World!" << endl;
    cout << "How old are you?";
    cin >> age;
    if (age < 29){
        cout << "You are younger than me!" << endl;
    } else {
        cout << "Hello World!" << endl;
    }
    return 0;
}