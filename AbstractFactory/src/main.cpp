#include "AbstractFactory.h"
#include "PositiveMineralFactory.h"
#include "NegativeMineralFactory.h"

int main()
{
    srand(time(nullptr));

    AbstractFactoryPtr factory{new PositiveMineralFactory};

    MineralPtr gold{factory->createLowLevel()};
    gold->show();

    MineralPtr diamond{factory->createMidLevel()};
    diamond->show();

    MineralPtr pigWithDiamond{factory->createHighLevel()};
    pigWithDiamond->show();

    factory.reset(new NegativeMineralFactory);

    MineralPtr sack = factory->createLowLevel();
    sack->show();

    MineralPtr stone = factory->createMidLevel();
    stone->show();

    MineralPtr bomb = factory->createHighLevel();
    bomb->show();

    return 0;
}
