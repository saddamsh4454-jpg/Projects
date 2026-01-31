#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isBorrowed;
    Book* next;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isBorrowed = false;
        this->next = nullptr;
    }
};

class Library {
private:
    Book* head;

public:
    Library() { head = nullptr; }

    // Add Book
    void addBook(int id, string title, string author) {
        // Check for duplicate ID
        Book* temp = head;
        while (temp != nullptr) {
            if (temp->id == id) {
                cout << "Error: Book ID already exists!\n";
                return;
            }
            temp = temp->next;
        }

        Book* newBook = new Book(id, title, author);
        newBook->next = head;
        head = newBook;
        cout << "Book added successfully!\n";
    }

    // Remove Book
    void removeBook(int id) {
        if (head == nullptr) {
            cout << "Library is empty!\n";
            return;
        }

        Book* temp = head;
        Book* prev = nullptr;

        while (temp != nullptr && temp->id != id) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Error: Book not found!\n";
            return;
        }

        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
        cout << "Book removed successfully!\n";
    }

    // Search Book
    void searchBook(int id) {
        Book* temp = head;
        while (temp != nullptr) {
            if (temp->id == id) {
                cout << "Book Found:\n";
                cout << "ID: " << temp->id << ", Title: " << temp->title
                     << ", Author: " << temp->author
                     << ", Borrowed: " << (temp->isBorrowed ? "Yes" : "No") << "\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found!\n";
    }

    // Borrow Book
    void borrowBook(int id) {
        Book* temp = head;
        while (temp != nullptr) {
            if (temp->id == id) {
                if (temp->isBorrowed) {
                    cout << "Error: Book already borrowed!\n";
                } else {
                    temp->isBorrowed = true;
                    cout << "Book borrowed successfully!\n";
                }
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found!\n";
    }

    // Return Book
    void returnBook(int id) {
        Book* temp = head;
        while (temp != nullptr) {
            if (temp->id == id) {
                if (!temp->isBorrowed) {
                    cout << "Error: Book was not borrowed!\n";
                } else {
                    temp->isBorrowed = false;
                    cout << "Book returned successfully!\n";
                }
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found!\n";
    }

    // Display All Books
    void displayBooks() {
        if (head == nullptr) {
            cout << "Library is empty!\n";
            return;
        }

        Book* temp = head;
        cout << "========= Library Books =========\n";
        while (temp != nullptr) {
            cout << "ID: " << temp->id << ", Title: " << temp->title
                 << ", Author: " << temp->author
                 << ", Borrowed: " << (temp->isBorrowed ? "Yes" : "No") << "\n";
            temp = temp->next;
        }
    }

    // Destructor
    ~Library() {
        Book* temp = head;
        while (temp != nullptr) {
            Book* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

// Main Menu
int main() {
    Library lib;
    int choice, id;
    string title, author;

    do {
        cout << "\n========= Library Menu =========\n";
        cout << "1. Add Book\n2. Remove Book\n3. Search Book\n4. Borrow Book\n5. Return Book\n6. Display All Books\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            lib.addBook(id, title, author);
            break;
        case 2:
            cout << "Enter Book ID to remove: ";
            cin >> id;
            lib.removeBook(id);
            break;
        case 3:
            cout << "Enter Book ID to search: ";
            cin >> id;
            lib.searchBook(id);
            break;
        case 4:
            cout << "Enter Book ID to borrow: ";
            cin >> id;
            lib.borrowBook(id);
            break;
        case 5:
            cout << "Enter Book ID to return: ";
            cin >> id;
            lib.returnBook(id);
            break;
        case 6:
            lib.displayBooks();
            break;
        case 7:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
