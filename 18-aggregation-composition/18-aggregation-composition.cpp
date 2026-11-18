#include <iostream>
using namespace std;

enum Type
{
    none,
    standart,
    xl,
    xxl
};

class Paper
{
private:
    

public:


};

class Cartridge
{
private:
    float volume;
    string color;
    Type type;

public:
    Cartridge() : volume(0), color("none"), type(none) {}
    Cartridge(float volume, string color, Type type) : volume(volume), color(color), type(type) {}

    void print() const
    {
        cout << "cartridge" << endl;
        cout << "volume - " << volume << endl;
        cout << "color - " << color << endl;
        cout << "type - ";

        switch (type)
        {
        case none: cout << "none"; break;
        case standart: cout << "standart"; break;
        case xl: cout << "xl"; break;
        case xxl: cout << "xxl"; break;
        } cout << endl;
    }

};

class Scanner
{
private:
    float scanResolution;
    float width, height;

public:
    Scanner() : scanResolution(0), width(0), height(0) {}
    Scanner(float scanR, float width, float height) : scanResolution(scanR), width(width), height(height) {}

    void print() const
    {
        cout << "scanner" << endl;
        cout << "scan resolution - " << scanResolution << endl;
        cout << "scanning area: ";
        cout << "width - " << width << endl << "height - " << height << endl;
    }
};

class Document
{
private:
    string name;
    string format;
    int pages;

public:
    Document() : name("none"), format("none"), pages(0) {}
    Document(string name, string format, int pages) : name(name), format(format), pages(pages) {}

    void print() const
    {
        cout << "document\n";
        cout << "name - " << name << endl;
        cout << "format - " << format << endl;
        cout << "pages - " << pages << endl;
    }

};



class Printer
{
private:
    string model;
    Cartridge* cartridges;
    int countCartridges;
    Scanner scanner;
    // aggregation
    Document *document;

public:
    Printer() : model("none"), cartridges(nullptr), countCartridges(0), document(nullptr) {}
    Printer(string model, float scanRes, float width, float height) : model(model), scanner(scanRes, width, height)
    {
        countCartridges = 4;
        cartridges = new Cartridge[countCartridges];
        cartridges[0] = Cartridge(300, "red", Type::standart);
        cartridges[1] = Cartridge(300, "green", Type::standart);
        cartridges[2] = Cartridge(300, "blue", Type::standart);
        cartridges[3] = Cartridge(300, "black", Type::standart);
    }

    ~Printer()
    {
        if (cartridges != nullptr) delete[]cartridges;
    }

    void scan()
    {
        cout << "scanning..." << endl;
    }

    void printDocument()
    {
        if (document != nullptr)
        {
            cout << "printing document..." << endl;
            document->print();
        }
    }

    void addDocument(Document* document)
    {
        this->document = document;
    }

    void print()
    {
        for (int i = 0; i < countCartridges; i++)
        {
            cartridges[i].print();
            cout << endl;
        }scanner.print();
    }

};

int main()
{
    Printer printer("Canon LBP2900", 300, 25, 35);
    printer.printDocument();
    printer.scan();
    cout << endl;
    printer.print();

    Document document1("passport", "A5", 16);
    Document document2("C++ for pots", "A3", 256);

    printer.addDocument(&document1);
    printer.addDocument(&document2);
    printer.printDocument();

}