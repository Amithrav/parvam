#include<iostream>
using namespace std;
class book {
public:
    string title;
    string author;
    void display() 
    {
        cout<<"Title:"<<title<<",author"<<author<<endl;
    }

};
     int main()
{
    book b1;
    b1.author = "amith";
    b1.title ="c++";
    b1.display();
    return 0;
}