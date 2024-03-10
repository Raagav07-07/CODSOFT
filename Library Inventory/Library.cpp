#include <bits/stdc++.h>
using namespace std;

class Library {
public:
    static vector<string> books;
    static vector<string> borrow;
    static vector<string> returned;

    Library() {
        books = {
            "Pride and Prejudice", "To Kill a Mockingbird", "1984", "The Great Gatsby", "Moby-Dick",
            "The Lord of the Rings", "Harry Potter and the Philosopher's Stone", "A Song of Ice and Fire",
            "The Chronicles of Narnia", "His Dark Materials",
            "Dune", "Neuromancer", "Foundation", "Brave New World", "The War of the Worlds",
            "The Girl with the Dragon Tattoo", "Gone Girl", "The Da Vinci Code", "The Hound of the Baskervilles", "The Girl on the Train",
            "The Book Thief", "All the Light We Cannot See", "Wolf Hall", "The Pillars of the Earth", "The Nightingale",
            "The Kite Runner", "The Fault in Our Stars", "The Underground Railroad", "Crazy Rich Asians", "Where the Crawdads Sing"
        };
    }

    void add(string a) {
        books.push_back(a);
    }

    void remove(string b) {
        auto j = find(books.begin(), books.end(), b);
        if (j != books.end()) {
            books.erase(j);
        }
    }

    void borrowbook(string g) {
        auto j = find(books.begin(), books.end(), g);
        if (j != books.end()) {
            books.erase(j);
            borrow.push_back(g);
            cout << g << " has been borrowed.\n";
        } else {
            cout << g << " not found in inventory or already borrowed.\n";
        }
    }

    void returnbook(string h) {
        auto j = find(borrow.begin(), borrow.end(), h);
        if (j != borrow.end()) {
            borrow.erase(j);
            returned.push_back(h);
            books.push_back(h);
            cout << h << " has been returned.\n";
        } else {
            cout << h << " not found in borrowed books.\n";
        }
    }

    void DisplayInventory() {
        cout << "Inventory:\n";
        for (auto i : books) {
            cout << i << endl;
        }
    }

    void displayborrow() {
        cout << "Borrowed books:\n";
        for (auto i : borrow) {
            cout << i << endl;
        }
    }

    void displayreturned() {
        cout << "Returned books:\n";
        for (auto i : returned) {
            cout << i << endl;
        }
    }
};

vector<string> Library::books;
vector<string> Library::borrow;
vector<string> Library::returned;

int main() {
    int choice;
    cout << "Welcome To The Digital Library Inventory" << endl;
    Library l;

  do {
        cout << "Welcome To The Digital Library Inventory" << endl;
        cout << "_________MENU_________" << endl;
        cout << "1. Discover books in the library" << endl;
        cout << "2. Add a new book to the inventory" << endl;
        cout << "3. Borrow a book" << endl;
        cout << "4. Return a book" << endl;
        cout << "5. Pending Borrowed Books list" << endl;
        cout << "6. Returned Books" << endl;
        cout << "7. Exit" << endl;
        cout << "Press an option" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                l.DisplayInventory();
                break;
            case 2:
               { cout << "Enter the name of the book:" << endl;
                string addBook;
                getline(cin, addBook);
                l.add(addBook);
                break;
}
            case 3:
               { cout << "Enter the name of the book to be borrowed:" << endl;
                cin.ignore(); 
                string borrowBook;
                getline(cin, borrowBook);
                l.borrowbook(borrowBook);
                l.displayborrow();
                break;
}
            case 4:
               { cout << "Enter the name of the book to be returned:" << endl;
                cin.ignore();  
                string returnBook;
                getline(cin, returnBook);
                l.returnbook(returnBook);
                l.displayreturned();
                break;}
            case 5:
                l.displayborrow();
                break;
            case 6:
                l.displayreturned();
                break;
            case 7:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}



