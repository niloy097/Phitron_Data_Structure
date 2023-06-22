#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> addressList;
    string address;

    // Read the input addresses
    while (cin >> address) {
        if (address == "end")
            break;
        addressList.push_back(address);
    }

    int Q;
    cin >> Q;

    string command, parameter;
    list<string>::iterator current = addressList.begin();

    for (int i = 0; i < Q; i++) {
        cin >> command;

        if (command == "visit") {
            cin >> parameter;

            list<string>::iterator it = addressList.begin();
            bool found = false;

            while (it != addressList.end()) {
                if (*it == parameter) {
                    found = true;
                    current = it;
                    cout << *it << endl;
                    break;
                }
                it++;
            }

            if (!found)
                cout << "Not Available" << endl;
        } else if (command == "next") {
            if (current != prev(addressList.end())) {
                current++;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != addressList.begin()) {
                current--;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
