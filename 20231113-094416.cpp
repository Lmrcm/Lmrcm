#include <iostream>
using namespace std;

const int maxNameLength = 50;
const int maxAddressLength = 100;
const int maxEmailLength = 100;
const int maxNationalityLength = 50;

struct BioData {
    char name[maxNameLength];
    char address[maxAddressLength];
    int age;
    char gender;
    char email[maxEmailLength];
    int weight;
    int height;
    char nationality[maxNationalityLength];
};

void getInput(BioData &data) {
    cout << "Enter Name: ";
    cin.getline(data.name, maxNameLength);

    cout << "Enter Address: ";
    cin.getline(data.address, maxAddressLength);

    cout << "Enter Age: ";
    cin >> data.age;
    cin.ignore();

    cout << "Enter Gender (M/F): ";
    cin >> data.gender;
    cin.ignore();

    cout << "Enter Email: ";
    cin.getline(data.email, maxEmailLength);
    
    cout << "Enter Weight: ";
    cin >> data.weight;
    
    cout << "Enter Height: ";
    cin >> data.height;
    cin.ignore();
    
    cout << "Enter Nationality: ";
    cin.getline(data.nationality, maxNationalityLength);
    
}

void displayBioData(const BioData &data) {
    cout << "\nBio Data Entered:\n";
    cout << "Name: " << data.name << "\n";
    cout << "Address: " << data.address << "\n";
    cout << "Age: " << data.age << "\n";
    cout << "Gender: " << data.gender << "\n";
    cout << "Email: " << data.email << "\n";
    cout << "Weight: " << data.weight << "\n";
    cout << "Height: " << data.height << "\n";
    cout << "Nationality: " << data.nationality << "\n";
}

int main() {
    BioData bio;
    cout << "Bio Data Form\n";
    getInput(bio);
    displayBioData(bio);
    return 0;
}
    