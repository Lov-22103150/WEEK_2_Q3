#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string paragraph;
    map<char, int> char_count;

    cout << "Enter a paragraph:" << endl;
    getline(cin, paragraph);

    for (char ch : paragraph) {
        if (ch != ' ') {
            ch = tolower(ch);
            char_count[ch]++;
        }
    }

    cout << "Character frequencies:" << endl;
    for (const auto &entry : char_count) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}