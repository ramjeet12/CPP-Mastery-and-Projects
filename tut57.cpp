#include <iostream>
#include <string>
using namespace std;

class RM
{
protected:
    string tittel;
    float rating;

public:
    RM(string s, float r)
    {
        tittel = s;
        rating = r;
    }

    virtual void display() {}
};

class RMVideo : public RM
{
    float videoLength;

public:
    RMVideo(string s, float r, float vl) : RM(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with tittel " << tittel << endl;
        cout << "rating: " << rating << " out of 5" << endl;
        cout << "this video length is " << videoLength << " minutes" << endl;
    }
};

class RMtext : public RM
{
    int word;

public:
    RMtext(string s, float r, int tw) : RM(s, r)
    {
        word = tw;
    }

    void display()
    {
        cout << "This is an amazing text with tittel " << tittel << endl;
        cout << "text rating: " << rating << " out of 5" << endl;
        cout << "the word in this text: " << word << " words" << endl;
    }
};

int main()
{
    string tittel;
    float rating, vlen;
    int word;

    // video
    tittel = "Djram";
    vlen = 4.56;
    rating = 4.99;

    RMVideo Djram(tittel, rating, vlen);

    // text
    tittel = "Djtext";
    word = 433;
    rating = 3.99;

    RMtext Djtext(tittel, rating, word);

    RM* tuts[2];

    tuts[0] = &Djram;
    tuts[1] = &Djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it
//    in the derived class