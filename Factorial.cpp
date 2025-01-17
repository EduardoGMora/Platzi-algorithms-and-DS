#include <iostream>
#include <limits>

using namespace std;

unsigned long long factRecursive(int n){
    return (n == 0 || n == 1) ? 1 : n * factRecursive(n - 1);
}

int main(){
    // type a number
    int n;
    while (true)
    {
        cout << "Type a number: ";
        cin >> n;

        if(cin.fail() || n < 0 || n > 60){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
        else
            break;
    }
    
    // print the number
    cout << "This is the number -> " << n << endl;
    cout << "This is the factorial -> " << factRecursive(n) << endl;
    // cout << "This is the factorial -> " << factIterative(n) << endl;

    return 0;
}