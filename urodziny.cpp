#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    string dadName = "Tato";

    string text[] = {
        "Zyczenia dla " + dadName,
        "Drogi " + dadName + "!",
        "Wszystkiego najlepszego z okazji urodzin! Zycze zdrowia, szczescia i sukcesow :)",
        "Niech kazdy dzien przynosi radosc i usmiech :)",
        "Dziekuje za Twoje wsparcie i milosc :)",
        "Z miloscia, Twoja corka Veronika! :)",
        "Niech ten dzien bedzie wyjatkowy!"
    };


    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < text[i].size(); j++) {
            cout << text[i][j];
            Sleep(20);
        }
        cout << endl;
    }


    string heart[] = {
        "  **   **  ",
        " *  * *  * ",
        "*    *    *",
        " *       * ",
        "  *     *  ",
        "   *   *   ",
        "    * *    ",
        "     *     "
    };


    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    for (int i = 0; i < 8; i++) {
        cout << heart[i] << endl;
        Sleep(50);
    }


    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    return 0;
}
