#include <iostream>

const int MAX_LENGTH = 100;

struct Address {
    char city[MAX_LENGTH];          
    char street[MAX_LENGTH];        
    int houseNumber;                
    int apartmentNumber;            
    char postalCode[MAX_LENGTH];    
};

void inputAddress(Address& address) {
    std::cout << "Enter city: ";
    std::cin.getline(address.city, MAX_LENGTH);
    std::cout << "Enter street: ";
    std::cin.getline(address.street, MAX_LENGTH);
    std::cout << "Enter house number: ";
    std::cin >> address.houseNumber;
    std::cout << "Enter apartment number: ";
    std::cin >> address.apartmentNumber;
    std::cin.ignore();
    std::cout << "Enter postalCode: ";
    std::cin.getline(address.postalCode, MAX_LENGTH);
}

void printAddress(const Address& address) {
    std::cout << "City: " << address.city << std::endl;
    std::cout << "Street: " << address.street << std::endl;
    std::cout << "House number: " << address.houseNumber << std::endl;
    std::cout << "Apartment number: " << address.apartmentNumber << std::endl;
    std::cout << "PostalCode: " << address.postalCode << std::endl;
    std::cout << std::endl;
}

int main() {
    Address address1;
    Address address2;

    std::cout << "Enter information for the first address:" << std::endl;
    inputAddress(address1);

    std::cout << "\nEnter information for the second address:" << std::endl;
    inputAddress(address2);

    std::cout << "\nDisplaying information about entered addresses:" << std::endl;
    printAddress(address1);
    printAddress(address2);

    return 0;
}