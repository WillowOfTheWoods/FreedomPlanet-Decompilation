#include "common.h"
#include "frame1.h"
#include "frame2.h"
#include "frame3.h"
#include "frame4.h"
#include "frame5.h"
#include "frame6.h"
#include "frame7.h"
#include "frame8.h"
#include "frame9.h"
#include "frame10.h"
#include "frame11.h"
#include "frame12.h"
#include "frame13.h"
#include "frame14.h"
#include "frame15.h"
#include "frame16.h"
#include "frame17.h"
#include "frame18.h"
#include "frame19.h"
#include "frame20.h"
#include "frame21.h"
#include "frame22.h"
#include "frame23.h"
#include "frame24.h"
#include "frame25.h"
#include "frame26.h"
#include "frame27.h"
#include "frame28.h"
#include "frame29.h"
#include "frame30.h"
#include "frame31.h"
#include "frame32.h"
#include "frame33.h"
#include "frame34.h"
#include "frame35.h"
#include "frame36.h"
#include "frame37.h"
#include "frame38.h"
#include "frame39.h"
#include "frame40.h"
#include "frame41.h"
#include "frame42.h"
#include "frame43.h"
#include "frame44.h"
#include "frame45.h"
#include "frame46.h"
#include "frame47.h"
#include "frame48.h"
#include "frame49.h"
#include "frame50.h"
#include "frame51.h"
#include "frame52.h"
#include "frame53.h"
#include "frame54.h"
#include "frame55.h"
#include "frame56.h"
#include "frame57.h"
#include "frame58.h"
#include "frame59.h"
#include "frame60.h"
#include "frame61.h"
#include "frame62.h"
#include "frame63.h"
#include "frame64.h"
#include "frame65.h"
#include "frame66.h"
#include "frame67.h"
#include "frame68.h"
#include "frame69.h"
#include "frame70.h"
#include "frame71.h"
#include "frame72.h"
#include "frame73.h"
#include "frame74.h"
#include "frame75.h"
#include "frame76.h"
#include "frame77.h"
#include "frame78.h"
#include "frame79.h"
#include "frame80.h"
#include "frame81.h"
#include "frame82.h"
#include "frame83.h"
#include "frame84.h"
#include "frame85.h"
#include "frame86.h"
#include "frame87.h"
#include "frame88.h"
#include "frame89.h"

inline void setup_globals(GlobalValues * values, GlobalStrings * strings)
{
    values->set(0, 0);
    values->set(1, 0);
    values->set(2, 0);
    values->set(3, 0);
    values->set(4, 0);
    values->set(5, 0);
    values->set(6, 0);
    values->set(7, 1);
    values->set(8, 5);
    values->set(9, 3);
    values->set(10, 1);
    values->set(11, 0);
    values->set(12, 1);
    values->set(13, 0);
    values->set(14, 0);
    values->set(15, 0);
    values->set(16, 426);
    values->set(17, 240);
    values->set(18, 200);
    values->set(19, 2);
    values->set(20, 0);
    values->set(21, 0);
    values->set(22, 0);
    values->set(23, 1);
    values->set(24, 0);
    values->set(25, 100);
    values->set(26, 0);
    values->set(27, 0);
    values->set(28, 0);
    values->set(29, 0);
    values->set(30, 0);
    values->set(31, 0);
    strings->set(0, std::string("0", 1));
    strings->set(1, std::string("1", 1));
    strings->set(2, std::string("2", 1));
    strings->set(3, std::string("3", 1));
    strings->set(4, std::string("4", 1));
    strings->set(5, std::string("5", 1));
    strings->set(6, std::string("6", 1));
    strings->set(7, std::string("7", 1));
    strings->set(8, std::string("8", 1));
    strings->set(9, std::string("9", 1));
    strings->set(10, std::string("NewSlot", 7));
    strings->set(11, std::string("eng", 3));
}
inline void setup_keys(GameManager * manager)
{
    manager->control_type = CONTROL_KEYBOARD;
    manager->up = SDLK_UP;
    manager->down = SDLK_DOWN;
    manager->left = SDLK_LEFT;
    manager->right = SDLK_RIGHT;
    manager->button1 = SDLK_z;
    manager->button2 = SDLK_x;
    manager->button3 = SDLK_c;
    manager->button4 = SDLK_RETURN;
}
