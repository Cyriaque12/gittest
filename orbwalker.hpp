#pragma once
#include <vector>

using namespace std;

class OrbWalker {

public:
    vector<void (*)()> fonctions;

    OrbWalker() {
    }

    void onUpdate() {
        cout << "Orb updating" << endl;
        int len = (int)fonctions.size();
        for (int i = 0; i<len; i++) {
            (this->fonctions[i])();
        }
    }


};
