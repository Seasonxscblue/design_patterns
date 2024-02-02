#include "BlackPen.h"
#include "CircleRuler.h"
#include "SquareRuler.h"
#include "TriangleRuler.h"
#include "WhitePen.h"

int main()
{
    std::make_unique<WhitePen>(std::make_unique<CircleRuler>())->Draw();
    std::make_unique<WhitePen>(std::make_unique<SquareRuler>())->Draw();
    std::make_unique<WhitePen>(std::make_unique<TriangleRuler>())->Draw();

    std::make_unique<BlackPen>(std::make_unique<CircleRuler>())->Draw();
    std::make_unique<BlackPen>(std::make_unique<SquareRuler>())->Draw();
    std::make_unique<BlackPen>(std::make_unique<TriangleRuler>())->Draw();
    return 0;
}