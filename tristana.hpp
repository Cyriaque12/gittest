#pragma once
#include <iostream>
#include <vector>
#include "OrbWalker.hpp"

class Tristana {

public:
    OrbWalker* orb;

    Tristana(OrbWalker * orb) {
        this->orb = orb;
        orb->fonctions.push_back(&onPostAttack);
    }

    static void onPostAttack() {
        cout << "Tristana post attack" << endl;
    }

    void onUpdate() {
        cout << "Tristana update" << endl;
    }
};
