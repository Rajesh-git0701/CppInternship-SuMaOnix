#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int year;

    void get() {
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Year: ";
        cin >> year;
        cin.ignore();
    }

    void show() {
        cout << "\n" << title << " by " << author << " (" << year << ")\n";
    }
};

int main() {
    int n;
    cout << "Number of books: ";
    cin >> n;
    cin.ignore();
    Book b[20];

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        b[i].get();
    }

    string titleSearch, authorSearch;
    cout << "\nEnter title to view: ";
    getline(cin, titleSearch);
    for (int i = 0; i < n; i++) {
        if (b[i].title == titleSearch)
            b[i].show();
    }

    cout << "\nEnter author to search: ";
    getline(cin, authorSearch);
    for (int i = 0; i < n; i++) {
        if (b[i].author == authorSearch)
            b[i].show();
    }

    return 0;
}