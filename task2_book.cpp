#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Published Year: ";
        cin >> year;
        cin.ignore();
    }

    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title        : " << title << endl;
        cout << "Author       : " << author << endl;
        cout << "Published In : " << year << endl;
    }
};

int main() {
    Book myBook;
    myBook.inputDetails();
    myBook.displayDetails();
    return 0;
}