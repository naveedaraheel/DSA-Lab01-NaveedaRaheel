#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <string>
using namespace std;

int findFirstOccurrence(const string& text, const string& pattern) {
    if (text.size() < pattern.size()) return -1;
    for (int i = 0; i <= text.size() - pattern.size(); ++i) {
        if (text.substr(i, pattern.size()) == pattern) {
            return (i);
        }
    }
    return -1;
}


int main() {
    cout << findFirstOccurrence("hello world", "hello") << endl;
    cout << findFirstOccurrence("hello world", "world") << endl;
    cout << findFirstOccurrence("Hello earth", "world") << endl;
    cout << findFirstOccurrence("", "world") << endl;
}
