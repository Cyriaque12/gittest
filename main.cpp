#include <iostream>
#include "tristana.hpp"
#include "OrbWalker.hpp"


using namespace std;

int main()
{
    OrbWalker orb;
    orb = OrbWalker();

    Tristana* trist;
    trist = new Tristana(&orb);

    trist->onUpdate();
    orb.onUpdate();

    return 0;
}
