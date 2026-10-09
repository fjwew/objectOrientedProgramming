#include <iostream>
using namespace std;

//struct footballPlayer
//{
//
//    string name;
//    short age;
//    int games;
//    int goals;
//
//    void printPlayer()
//    {
//        cout << "name - " << name << endl;
//        cout << "age - " << age << endl;
//        cout << "games - " << games << endl;
//        cout << "goals - " << goals << endl;
//    }
//};

/*
void initPlayer(footballPlayer& player)
{
    cout << "enter name - "; cin >> player.name; cout << endl;
    cout << "enter age - "; cin >> player.age; cout << endl;

    player.games = 0;
    player.goals = 0;
}

void addGameToPlayer(footballPlayer& player, int goals = 0)
{
    player.games++;
    player.goals = goals;
}
*/

//class footballPlayer
//{
//private:
//    string name;
//    short age;
//    int games;
//    int goals;
//
//public:
//    void printPlayer()
//    {
//        cout << "name - " << name << endl;
//        cout << "age - " << age << endl;
//        cout << "games - " << games << endl;
//        cout << "goals - " << goals << endl << endl;
//    }
//
//    void initPlayer()
//    {
//        cout << "enter name - "; cin >> name;
//        cout << "enter age - "; cin >> age; cout << endl;
//
//        games = 0;
//        goals = 0;
//    }
//
//    void addGameToPlayer(int goalss = 0)
//    {
//        games++;
//        goals = goalss;
//    }
//};
//
//class student
//{
//private:
//    string name; // data members
//    int marks[3]; // data member
//
//public:
//    // setter
//    void setName(string name)
//    {
//        this->name = name;
//    }
//    void setMark(int index, int mark)
//    {
//        marks[index] = mark;
//    }
//
//    // getter
//    string getName()
//    {
//        return name;
//    }
//    int getMark(int index)
//    {
//        return marks[index];
//    }
//
//    double getAverage() // member function, функція-член класу, метод
//    {
//        double suma = 0;
//        for (int i = 0; i < 3; i++)
//        {
//            suma += marks[i];
//        }
//        return (double)suma / 3;
//    }
//};

class Dot
{
private:
    float x;
    float y;
    float z;



public:
    // setter
    void setX(float x)
    {
        this->x = x;
    }
    void setY(float y)
      {
        this->y = y;
    }
    void setZ(float z)
    {
        this->z = z;
    }



    // getter
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    float getZ()
    {
        return z;
    }

    void setXYZ()
    {
        float x;
        float y;
        float z;

        cout << "enter x -> "; cin >> x;
        cout << "enter y -> "; cin >> y;
        cout << "enter z -> "; cin >> z; cout << endl;

        setX(x);
        setY(y);
        setZ(z);
    }

    void showXYZ()
    {
        cout << "x - " << getX() << endl;
        cout << "y - " << getY() << endl;
        cout << "z - " << getZ() << endl;
    }
};


int main()
{
    // PRACTICAL WORK
    Dot dot;
    
    dot.setXYZ();
    dot.showXYZ();

    /*footballPlayer player;

    student st;
    st.setName("ivan");
    st.setMark(0, 12);
    st.setMark(1, 9);
    st.setMark(2, 8);*/

    /*player.initPlayer();
    player.printPlayer();
    player.addGameToPlayer(23);
    player.printPlayer();*/

    /*cout << "average mark - " << st.getAverage() << endl;*/
}

