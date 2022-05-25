#ifndef RENTAL
#define RENTAL

using namespace std;

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

class customer { // customer class;
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
    // variables defined in this class in public mode.
};

class rent : public customer { // inhereted class from customer class
public:
    int days = 0, rentalfee = 0; // additional int vatiables defined

    // -----------------------
    void data();
    void calculate();
    void showrent();
};

class welcome { // welcome class
public:
    void welcum()
    {
        ifstream in("welcome.txt"); // displaying welcome ASCII image text on output screen fn1353

        if (!in)
        {
            cout << "Cannot open input file.\n";
        }
        char str[1000];
        while (in)
        {
            in.getline(str, 1000); // delim defaults to '\n' cp
            if (in)
                cout << str << endl;
        }
        in.close();
        sleep(1);
        cout << "\nStarting the program please wait....." << endl;
        sleep(1);
        cout << "\nloading up files....." << endl;
        sleep(1);      // function which waits for (n) seconds
        system("CLS"); // cleares screen
    }
};

#endif
