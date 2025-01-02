#include <iostream>
using namespace std;

struct Book{
    string title;
    string writer;
    int publication_year;
};

int main(){
    Book* ptrBook; //mendeklarasikan pointer ptrBook yang akan menyimpan alamat memori dari objek Book.
    ptrBook = new Book; //mengalokasikan memori dinamis untuk sebuah objek Book dan pointer ptrBook akan menunjuk ke memori tersebut

    ptrBook->title = "belajar c++";
    ptrBook->writer = "tere liye";
    ptrBook->publication_year = 1997;

    cout << "title = " << ptrBook->title << endl;
    cout << "writer = " << ptrBook->writer << endl;
    cout << "publication year = " << ptrBook->publication_year << endl;

    delete ptrBook;

    return 0;

    }