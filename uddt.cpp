#include <iostream>
#include <cstring>

using namespace std;


class Client
{
    private:
        char Name[50];
        char Id[10];
        float Credit;
        char Address[100];
    public:
        Client(const char *name, const char *id, float credit, const char *address);
        void printdata() const;
        ~Client();
};

Client::Client(const char *name, const char *id, float credit, const char *address)
{
    strncpy(Name, name, sizeof(Name) - 1);
    Name[sizeof(Name) - 1] = '\0'; // Ensure null-terminated
    
    strncpy(Id, id, sizeof(Id) - 1);
    Id[sizeof(Id) - 1] = '\0'; // Ensure null-terminated

    Credit = credit;
    
    strncpy(Address, address, sizeof(Address) - 1);
    Address[sizeof(Address) - 1] = '\0'; // Ensure null-terminated
}


void Client::printdata() const {
    cout << "The client name is: " << Name << endl;
    cout << "The client id is: " << Id << endl;
    cout << "The client credit is: " << Credit << endl;
    cout << "The client address is: " << Address << endl;
}

Client::~Client(){}


int main(int argc, char const *argv[])
{
    Client client1("José Eduardo Gómez Mora", "0000000001", 1000000, "Américo Vespucio 2807");

    client1.printdata();

    return 0;
}