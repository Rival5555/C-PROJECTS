#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    Contact* next;
};

Contact* head = NULL;

// Function to insert a contact
void insertContact(string name, string phoneNumber) {
    Contact* newContact = new Contact;
    newContact->name = name;
    newContact->phoneNumber = phoneNumber;
    newContact->next = NULL;

    if (head == NULL) {
        head = newContact;
    } else {
        Contact* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newContact;
    }
}

// Function to delete a contact
void deleteContact(string name) {
    if (head == NULL) {
        cout << "==> Phone book is empty." << endl;
        return;
    }

    if (head->name == name) {
        Contact* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Contact* prev = head;
    Contact* curr = head->next;
    while (curr != NULL) {
        if (curr->name == name) {
            prev->next = curr->next;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "==> Contact not found." << endl;
}

// Function to update a contact
void updateContact(string name, string newPhoneNumber) {
    Contact* temp = head;
    while (temp != NULL) {
        if (temp->name == name) {
            temp->phoneNumber = newPhoneNumber;
            return;
        }
        temp = temp->next;
    }

    cout << "==> Contact not found." << endl;
}

// Function to display all contacts
void displayContacts() {
    if (head == NULL) {
        cout << "==> Phone book is empty." << endl;
        return;
    }

    Contact* temp = head;
    while (temp != NULL) {
    	cout<<"\n\t\t\t\t\t=============================";
    	cout<<"\n\t\t\t\t\t\tYour Record";
    	cout<<"\n\t\t\t\t\t=============================";
        cout << "\n\n\t\t\t\t\t==> Name: " << temp->name << " \n\t\t\t\t\t==> Phone: " << temp->phoneNumber << endl;
        temp = temp->next;
    }
}

// Function to save contacts to a file
void saveContactsToFile() {
    ofstream file("contacts.txt");
    if (!file) {
        cout << "===> Error opening file." << endl;
        return;
    }

    Contact* temp = head;
    while (temp != NULL) {
        file << temp->name << "," << temp->phoneNumber << endl;
        temp = temp->next;
    }

    file.close();
}

// Function to load contacts from a file
void loadContactsFromFile() {
    ifstream file("contacts.txt");
    if (!file) {
        cout << "===> Error opening file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t pos = line.find(",");
        if (pos != string::npos) {
            string name = line.substr(0, pos);
            string phoneNumber = line.substr(pos + 1);
            insertContact(name, phoneNumber);
        }
    }

    file.close();
}

int main() {
    // Load contacts from file (if any)
    loadContactsFromFile();

    int choice;
    string name, phoneNumber;
    
    cout << "\n\n\t\t\t Date : ";
	       cout<<__DATE__<<"\n";                       
	       cout << "\n\t\t\t Time : ";
	       cout<<__TIME__<<endl;
	 

    while (true) {
    	
    	cout<<"\n\t\t\t===================================================";
		cout<<"\n\n\t\t\t\t Phone Book Management System";
		cout<<"\n\n\t\t\t===================================================";
    	cout<<"\n\n\t\t\t\t   MAIN MENU ";
		cout<<"\n\n\t\t\t\t\t1. INSERT A CONTACT ";
		cout<<"\n\n\t\t\t\t\t2. DELETE A CONTACT ";
		cout<<"\n\n\t\t\t\t\t3. UPDATE A CONTACT ";
		cout<<"\n\n\t\t\t\t\t4. DISPLAY ALL CONTACTS";
		cout<<"\n\n\t\t\t\t\t5. EXIT "<<endl;

        cout << "\n\t\t\t==> Enter your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "==> Enter Name: ";
                cin >> name;
                cout << "==> Enter Phone Number: ";
                cin >> phoneNumber;
                insertContact(name, phoneNumber);
                saveContactsToFile();
                cout << "==> Contact inserted successfully!" << endl;
                break;
            case 2:
                cout << "==> Enter Name: ";
                cin >> name;
                deleteContact(name);
                saveContactsToFile();
                break;
            case 3:
                cout << "==> Enter Name: ";
                cin >> name;
                cout << "==> Enter New Phone Number: ";
                cin >> phoneNumber;
                updateContact(name, phoneNumber);
                saveContactsToFile();
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                saveContactsToFile();
                exit(0);
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;
        
    }
    return 0;
}

