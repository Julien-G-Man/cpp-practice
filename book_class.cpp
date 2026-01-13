// Created by user on 7/25/2025.
#include<iostream>
#include<string>
using namespace std;

class Book {
    // Properties (data members)
public: // Access specifier
    string bookTitle;
    string bookAuthor;
    int bookPages;

    Book(string Title, string Author, int Pages) {
        bookTitle = Title;
        bookAuthor = Author;
        bookPages = Pages;
    }
};

int main(){

    Book myBook("Atomic Habits", "James Clear", 205);

    cout << "Book  name: " << b

}
