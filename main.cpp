#include <iostream>
#include "tristana.hpp"
#include "OrbWalker.hpp"


using namespace std;


void fonctionTest() {
    cout << "test" << endl;

}


int main()
{
    cout << "Hello world!" << endl;

    OrbWalker orb;
    orb = OrbWalker();

    Tristana* trist;
    trist = new Tristana();

    trist->orb = &orb;
    //orb->fonctions.push_back(trist->onPostAttack);

    orb.fonctions.push_back(fonctionTest);
    trist->onUpdate();

    orb.onUpdate();


    return 0;
}
