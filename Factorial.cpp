#include <iostream>

using namespace std;

int factRecursive(int n){
    if(n==0)
        return (1);

    return n*factRecursive(n-1);
}

int factIterative(int n){
    for(int i = n-1; i > 0; i--){
        n *= i;
    }
    return n;
}

int main(){
    // type a number
    int n;
    cin>>n;

    // print the number
    cout<<"This is the number -> "<<n<<endl;

    // print the factorial of the number recursively
    cout<<"This is the factorial -> "<<factRecursive(n)<<endl;

    // print the factorial of the number iteratively
    cout<<"This is the factorial -> "<<factIterative(n)<<endl;

    return 0;
}