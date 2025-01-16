#include <iostream>

using namespace std;

int fact(int n){
    if(n==0)
        return (1);

    return n*fact(n-1);
}

int main(){
    // type a number
    int n;
    cin>>n;

    // print the number
    cout<<"This is the number -> "<<n<<endl;

    // print the factorial of the number
    cout<<"This is the factorial -> "<<fact(n)<<endl;

    return 0;
}