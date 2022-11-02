//
// Created by julian on 11/2/22.
//

#include <iostream>

using namespace std;

template<typename T>
T larger(T first, T sec) {
    return (first > sec) ? first : sec;
}

template<typename K, typename V>
void display(K key, V value) {
    cout << key << '=' << value << endl;
}

int main() {
    larger(1.1, 2.2);
    return 0;
}