#include "common.hpp"

class Book {
    private:
        string bookID;
        string bookTitle;
        string bookISBN;
        string bookAuthor;
        string bookPublishedDate;
    public:
        Book (string id, string title, string isbn, string author, string publishedDate) {
            bookID = id;
            bookTitle = title;
            bookAuthor = author;
            bookISBN = isbn;
            bookPublishedDate = publishedDate;
        }

        void getInfo() {
            cout << bookID << " " << bookAuthor << " " << bookTitle << " " << bookISBN << " " << bookPublishedDate << endl;
        }
};