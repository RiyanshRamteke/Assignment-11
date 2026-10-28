#include <iostream>
#include <list>
#include <vector>
#include <algorithm>        // for sort() used with vector
using namespace std;

// Function to display a list using an iterator
void showList(list<int> &l) {
    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to display a vector using index
void showVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // ================= PART A : LIST =================
    cout << endl << "--- Part A: list ---" << endl;
    list<int> l;

    l.push_back(a);             // add at the end
    l.push_back(b);
    l.push_back(c);
    l.push_front(0);            // add at the beginning
    l.push_back(99);
    cout << "List after adding : ";
    showList(l);
    cout << "Size of list      = " << l.size() << endl;

    l.pop_front();              // remove first element
    l.pop_back();               // remove last element
    cout << "After pop_front and pop_back : ";
    showList(l);

    l.sort();                   // sort in increasing order
    cout << "After sort        : ";
    showList(l);

    l.reverse();                // reverse the order
    cout << "After reverse     : ";
    showList(l);

    l.remove(b);                // remove the value b from the list
    cout << "After remove(" << b << ")  : ";
    showList(l);

    // ================= PART B : VECTOR =================
    cout << endl << "--- Part B: vector ---" << endl;
    vector<int> v;

    v.push_back(a);             // add at the end
    v.push_back(b);
    v.push_back(c);
    cout << "Vector after adding : ";
    showVector(v);
    cout << "Size  = " << v.size() << endl;
    cout << "First = " << v.front() << ", Last = " << v.back() << endl;

    v.insert(v.begin(), 50);    // insert 50 at the beginning
    cout << "After insert 50 at start : ";
    showVector(v);

    v.erase(v.begin() + 1);     // remove the element at index 1
    cout << "After erase index 1      : ";
    showVector(v);

    sort(v.begin(), v.end());   // sort in increasing order
    cout << "After sort               : ";
    showVector(v);

    v.pop_back();               // remove the last element
    cout << "After pop_back           : ";
    showVector(v);
    cout << "Element at index 1 = " << v.at(1) << endl;

    v.clear();                  // remove all elements
    cout << "After clear, size = " << v.size() << endl;

    return 0;
}