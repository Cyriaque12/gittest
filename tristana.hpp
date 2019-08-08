#pragma once
#include <iostream>
#include <vector>
#include "OrbWalker.hpp"


void testTristana() {
    cout << "test tristana" << endl;
}

class Tristana {

public:
    int health;
    OrbWalker* orb;


    Tristana() {
        health = 100;
    }

    static void onPostAttack() {
        cout << "Tristana post attack" << endl;
    }

    void onUpdate() {
        cout << "Tristana update" << endl;
        //orb->fonctions.push_back(onPostAttack);
        //orb->fonctions.push_back(*onPostAttack);
        orb->fonctions.push_back(&onPostAttack);
        //orb->fonctions.push_back(this->onPostAttack);
        //orb->fonctions.push_back(*this->onPostAttack);
        //orb->fonctions.push_back(&this->onPostAttack);
        orb->fonctions.push_back(*testTristana);
    }





};
