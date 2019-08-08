#pragma once
#include <vector>

using namespace std;

class OrbWalker {

public:
    vector<void (*)()> fonctions;
    int test;
    OrbWalker() {
        test = 5;
    }

    void onUpdate() {
        int len = (int)fonctions.size();
        for (int i = 0; i<len; i++) {
            cout << "compteur :" << i << endl;
            (this->fonctions[i])();
        }
    }


};
