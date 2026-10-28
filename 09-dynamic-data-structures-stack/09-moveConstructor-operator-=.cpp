#include "book.h";
#include "Library.h";

void testLibrary(Library l)
{

}

int main()
{
    Book book("Smile", "Ray Breadberry", Genre::fantasy, 2000, 70);
    book.showInfo();

    Library l("andrew`s library", "kyjivska, 16");
    
    l.addBook(Book("fkjd", "ya", comedy, 2000, 67));
    l.addBook(Book("dfsd", "dfdf", comedy, 2000, 67));
    l.addBook(Book("hjhg", "fgf", comedy, 2000, 67));
    l.addBook(Book("frtytrkjd", "yareyt", comedy, 2000, 67));
    l.addBook(Book("fkmnbtryjd", "dfcf", comedy, 2000, 67));

    l.showLibrary();

    Library copy(l);
    cout << "-----------------------------------copy-----------------------------------" << endl;
    copy.showLibrary();
    
    Library newL = copy;
    cout << "-----------------------------------new library-----------------------------------" << endl;
    newL.showLibrary();

    testLibrary(l);
}