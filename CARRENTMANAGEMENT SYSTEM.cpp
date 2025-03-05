#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    int id;
    string name;
    string regNo;
    bool available;

    Car() : id(0), name(""), regNo(""), available(true) {}

    void displayCarDetails() const {
        cout << "Car ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Availability: " << (available ? "Yes" : "No") << endl;
    }
};

class Customer {
public:
    string name;
    string contact;

    Customer() : name(""), contact("") {}

    void displayCustomerDetails() const {
        cout << "Customer Name: " << name << endl;
        cout << "Contact: " << contact << endl;
    }
};

class CarNode {
public:
    Car car;
    CarNode* next;

    CarNode(const Car& car) : car(car), next(nullptr) {}
};

class CustomerNode {
public:
    Customer customer;
    CustomerNode* next;

    CustomerNode(const Customer& customer) : customer(customer), next(nullptr) {}
};

class RentalSystem {
private:
    CarNode* carHead;
    CustomerNode* customerHead;
    int nextCarId;

public:
    RentalSystem() : carHead(nullptr), customerHead(nullptr), nextCarId(1) {}

    void addCar() {
        string name, regNo;
        cout << "Enter car name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter car registration number: ";
        getline(cin, regNo);

        Car newCar;
        newCar.id = nextCarId++;
        newCar.name = name;
        newCar.regNo = regNo;
        newCar.available = true;

        CarNode* newNode = new CarNode(newCar);
        newNode->next = carHead;
        carHead = newNode;

        cout << "Car added successfully!\n";
    }

    void viewCars() const {
        if (!carHead) {
            cout << "No cars available.\n";
            return;
        }

        cout << "\nAvailable Cars:\n";
        CarNode* current = carHead;
        while (current) {
            current->car.displayCarDetails();
            cout << "------------------------\n";
            current = current->next;
        }
    }

    void rentCar() {
        int id;
        cout << "Enter car ID to rent: ";
        cin >> id;

        CarNode* current = carHead;
        while (current) {
            if (current->car.id == id) {
                if (current->car.available) {
                    current->car.available = false;
                    cout << "Car rented successfully!\n";
                } else {
                    cout << "Car is not available.\n";
                }
                return;
            }
            current = current->next;
        }

        cout << "Car ID not found.\n";
    }

    void addCustomer() {
        string name, contact;
        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter customer contact: ";
        getline(cin, contact);

        Customer newCustomer;
        newCustomer.name = name;
        newCustomer.contact = contact;

        CustomerNode* newNode = new CustomerNode(newCustomer);
        newNode->next = customerHead;
        customerHead = newNode;

        cout << "Customer added successfully!\n";
    }

    void viewCustomers() const {
        if (!customerHead) {
            cout << "No customers available.\n";
            return;
        }

        cout << "\nCustomer List:\n";
        CustomerNode* current = customerHead;
        while (current) {
            current->customer.displayCustomerDetails();
            cout << "------------------------\n";
            current = current->next;
        }
    }

    void mainMenu() {
        char choice;
        do {
            cout << "\n--- Car Rental System ---\n";
            cout << "1. Add Car\n";
            cout << "2. View Cars\n";
            cout << "3. Rent Car\n";
            cout << "4. Add Customer\n";
            cout << "5. View Customers\n";
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case '1':
                addCar();
                break;
            case '2':
                viewCars();
                break;
            case '3':
                rentCar();
                break;
            case '4':
                addCustomer();
                break;
            case '5':
                viewCustomers();
                break;
            case '6':
                cout << "Exiting system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
            }
        } while (choice != '6');
    }

    void testData() {
        CarNode* car1 = new CarNode({nextCarId++, "Toyota", "XYZ123", true});
        CarNode* car2 = new CarNode({nextCarId++, "Honda", "ABC456", true});
        car1->next = car2;
        carHead = car1;

        CustomerNode* customer1 = new CustomerNode({"HASSAN", "1234567890"});
        CustomerNode* customer2 = new CustomerNode({"HURAIRAH", "9876543210"});
        customer1->next = customer2;
        customerHead = customer1;
    }
};

int main() {
    RentalSystem system;
    system.testData(); // Add sample data for testing.
    system.mainMenu();
    return 0;
}

