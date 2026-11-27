#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class CaveSoil17_1309 : public Backdrop
{
public:
    CaveSoil17_1309(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 17", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3171);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil17_1309(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil17_1309(x, y);
}
class CaveSoil1_1310 : public Backdrop
{
public:
    CaveSoil1_1310(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 1", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3168);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil1_1310(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil1_1310(x, y);
}
class GimmickRisingSwingBase_1311 : public Backdrop
{
public:
    GimmickRisingSwingBase_1311(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_RisingSwingBase", 23);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3573);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickrisingswingbase_1311(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickRisingSwingBase_1311(x, y);
}
class CaveSoil28_1312 : public Backdrop
{
public:
    CaveSoil28_1312(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 28", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12508);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil28_1312(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil28_1312(x, y);
}
class CaveSoil11_1313 : public Backdrop
{
public:
    CaveSoil11_1313(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 11", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3169);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil11_1313(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil11_1313(x, y);
}
class CaveSoil14_1314 : public Backdrop
{
public:
    CaveSoil14_1314(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 14", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10850);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil14_1314(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil14_1314(x, y);
}
class CaveSoil8_1315 : public Backdrop
{
public:
    CaveSoil8_1315(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 8", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10857);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil8_1315(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil8_1315(x, y);
}
class CaveSoil15_1316 : public Backdrop
{
public:
    CaveSoil15_1316(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 15", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3172);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil15_1316(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil15_1316(x, y);
}
class CaveSoil25_1317 : public Backdrop
{
public:
    CaveSoil25_1317(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 25", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3173);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil25_1317(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil25_1317(x, y);
}
class Column5_1318 : public Backdrop
{
public:
    Column5_1318(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Column 5", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2781);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_column5_1318(int x, int y)
{
    return new (Backdrop::pool.create()) Column5_1318(x, y);
}
class CaravanPlatform12_1319 : public Backdrop
{
public:
    CaravanPlatform12_1319(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 12", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9646);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform12_1319(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform12_1319(x, y);
}
class CaravanPlatform3_1320 : public Backdrop
{
public:
    CaravanPlatform3_1320(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 3", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2509);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform3_1320(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform3_1320(x, y);
}
class CaravanPlatform5_1321 : public Backdrop
{
public:
    CaravanPlatform5_1321(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 5", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3291);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform5_1321(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform5_1321(x, y);
}
class CaravanPlatform4_1322 : public Backdrop
{
public:
    CaravanPlatform4_1322(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 4", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2913);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform4_1322(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform4_1322(x, y);
}
class Shrine1_1323 : public Backdrop
{
public:
    Shrine1_1323(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shrine 1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9442);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_shrine1_1323(int x, int y)
{
    return new (Backdrop::pool.create()) Shrine1_1323(x, y);
}
class RMBrick10_1324 : public Backdrop
{
public:
    RMBrick10_1324(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7815);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick10_1324(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick10_1324(x, y);
}
class CaravanPlatform_1325 : public Backdrop
{
public:
    CaravanPlatform_1325(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2912);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform_1325(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform_1325(x, y);
}
class CaravanPlatform2_1326 : public Backdrop
{
public:
    CaravanPlatform2_1326(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3226);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform2_1326(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform2_1326(x, y);
}
class CaravanPlatform9_1327 : public Backdrop
{
public:
    CaravanPlatform9_1327(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 9", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2483);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform9_1327(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform9_1327(x, y);
}
class CaravanPlatform7_1328 : public Backdrop
{
public:
    CaravanPlatform7_1328(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 7", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2108);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform7_1328(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform7_1328(x, y);
}
class CaravanPlatform10_1329 : public Backdrop
{
public:
    CaravanPlatform10_1329(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 10", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2482);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform10_1329(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform10_1329(x, y);
}
class CaravanTruck_1330 : public Backdrop
{
public:
    CaravanTruck_1330(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Truck", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3575);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravantruck_1330(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanTruck_1330(x, y);
}
class CaravanTruck3_1331 : public Backdrop
{
public:
    CaravanTruck3_1331(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Truck 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3505);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_caravantruck3_1331(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanTruck3_1331(x, y);
}
class CaravanPlatform11_1332 : public Backdrop
{
public:
    CaravanPlatform11_1332(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 11", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2478);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform11_1332(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform11_1332(x, y);
}
class BossClawBaseBack_1333 : public Backdrop
{
public:
    BossClawBaseBack_1333(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Boss_ClawBaseBack", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9678);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_bossclawbaseback_1333(int x, int y)
{
    return new (Backdrop::pool.create()) BossClawBaseBack_1333(x, y);
}
class SoilToCave_1334 : public Backdrop
{
public:
    SoilToCave_1334(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil to Cave", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4390);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soiltocave_1334(int x, int y)
{
    return new (Backdrop::pool.create()) SoilToCave_1334(x, y);
}
class Soil11_1335 : public Backdrop
{
public:
    Soil11_1335(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 11", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1166);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil11_1335(int x, int y)
{
    return new (Backdrop::pool.create()) Soil11_1335(x, y);
}
class CaravanPlatform6_1336 : public Backdrop
{
public:
    CaravanPlatform6_1336(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 6", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(584);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform6_1336(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform6_1336(x, y);
}
class Shaft1_1337 : public Backdrop
{
public:
    Shaft1_1337(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Shaft 1", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9651);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_shaft1_1337(int x, int y)
{
    return new (Backdrop::pool.create()) Shaft1_1337(x, y);
}
class CaveSoil2_1338 : public Backdrop
{
public:
    CaveSoil2_1338(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7349);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil2_1338(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil2_1338(x, y);
}
class CaveSoil3_1339 : public Backdrop
{
public:
    CaveSoil3_1339(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10809);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil3_1339(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil3_1339(x, y);
}
class CaveSoil6_1340 : public Backdrop
{
public:
    CaveSoil6_1340(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 6", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10803);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil6_1340(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil6_1340(x, y);
}
class Column6_1341 : public Backdrop
{
public:
    Column6_1341(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Column 6", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2775);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_column6_1341(int x, int y)
{
    return new (Backdrop::pool.create()) Column6_1341(x, y);
}
class Column7_1342 : public Backdrop
{
public:
    Column7_1342(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Column 7", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2833);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_column7_1342(int x, int y)
{
    return new (Backdrop::pool.create()) Column7_1342(x, y);
}
class Column8_1343 : public Backdrop
{
public:
    Column8_1343(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Column 8", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2761);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_column8_1343(int x, int y)
{
    return new (Backdrop::pool.create()) Column8_1343(x, y);
}
class CaveSoil16_1344 : public Backdrop
{
public:
    CaveSoil16_1344(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 16", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10856);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil16_1344(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil16_1344(x, y);
}
class CaveSoil4_1345 : public Backdrop
{
public:
    CaveSoil4_1345(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10793);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil4_1345(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil4_1345(x, y);
}
class CaveSoil7_1346 : public Backdrop
{
public:
    CaveSoil7_1346(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 7", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10792);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil7_1346(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil7_1346(x, y);
}
class CaveSoil5_1347 : public Backdrop
{
public:
    CaveSoil5_1347(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 5", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10808);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil5_1347(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil5_1347(x, y);
}
class CaveSoil20_1348 : public Backdrop
{
public:
    CaveSoil20_1348(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 20", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10810);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil20_1348(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil20_1348(x, y);
}
class CaveSoil21_1349 : public Backdrop
{
public:
    CaveSoil21_1349(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 21", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3175);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil21_1349(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil21_1349(x, y);
}
class CaveSoil12_1350 : public Backdrop
{
public:
    CaveSoil12_1350(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 12", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12552);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_cavesoil12_1350(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil12_1350(x, y);
}
class CaveSoil23_1351 : public Backdrop
{
public:
    CaveSoil23_1351(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 23", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10855);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil23_1351(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil23_1351(x, y);
}
class CaveSoil26_1352 : public Backdrop
{
public:
    CaveSoil26_1352(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 26", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13059);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil26_1352(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil26_1352(x, y);
}
class CaveSoil24_1353 : public Backdrop
{
public:
    CaveSoil24_1353(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 24", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10851);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil24_1353(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil24_1353(x, y);
}
class CaveSoilCrater_1354 : public Backdrop
{
public:
    CaveSoilCrater_1354(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil crater", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3534);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoilcrater_1354(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoilCrater_1354(x, y);
}
class CaveSoil22_1355 : public Backdrop
{
public:
    CaveSoil22_1355(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil 22", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3184);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoil22_1355(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoil22_1355(x, y);
}
class CaveSoilCrater2_1356 : public Backdrop
{
public:
    CaveSoilCrater2_1356(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Cave Soil crater 2", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3551);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_cavesoilcrater2_1356(int x, int y)
{
    return new (Backdrop::pool.create()) CaveSoilCrater2_1356(x, y);
}
class CaravanPlatform13_1357 : public Backdrop
{
public:
    CaravanPlatform13_1357(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 13", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9464);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravanplatform13_1357(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform13_1357(x, y);
}
class CaravanTruck2_1358 : public Backdrop
{
public:
    CaravanTruck2_1358(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Truck 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3304);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravantruck2_1358(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanTruck2_1358(x, y);
}
class CaravanPlatform14_1359 : public Backdrop
{
public:
    CaravanPlatform14_1359(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Platform 14", 19);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3288);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_caravanplatform14_1359(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanPlatform14_1359(x, y);
}
class RMSoilEdgeRight_1360 : public Backdrop
{
public:
    RMSoilEdgeRight_1360(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_SoilEdgeRight", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2444);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmsoiledgeright_1360(int x, int y)
{
    return new (Backdrop::pool.create()) RMSoilEdgeRight_1360(x, y);
}
class RMMineTrack1_1361 : public Backdrop
{
public:
    RMMineTrack1_1361(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2128);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack1_1361(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack1_1361(x, y);
}
class RMMineTrack2_1362 : public Backdrop
{
public:
    RMMineTrack2_1362(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2134);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack2_1362(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack2_1362(x, y);
}
class RMMineTrack4_1363 : public Backdrop
{
public:
    RMMineTrack4_1363(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2203);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack4_1363(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack4_1363(x, y);
}
class RMMineTrack7_1364 : public Backdrop
{
public:
    RMMineTrack7_1364(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 7", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2151);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack7_1364(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack7_1364(x, y);
}
class RMMineTrack5_1365 : public Backdrop
{
public:
    RMMineTrack5_1365(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2230);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack5_1365(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack5_1365(x, y);
}
class RMMineTrack9_1366 : public Backdrop
{
public:
    RMMineTrack9_1366(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 9", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2315);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack9_1366(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack9_1366(x, y);
}
class RMMineTrack12_1367 : public Backdrop
{
public:
    RMMineTrack12_1367(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 12", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9438);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack12_1367(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack12_1367(x, y);
}
class RMMineTrack6_1368 : public Backdrop
{
public:
    RMMineTrack6_1368(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2308);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack6_1368(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack6_1368(x, y);
}
class RMMineTrack10_1369 : public Backdrop
{
public:
    RMMineTrack10_1369(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 10", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2312);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack10_1369(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack10_1369(x, y);
}
class RMMineTrack11_1370 : public Backdrop
{
public:
    RMMineTrack11_1370(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 11", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2311);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack11_1370(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack11_1370(x, y);
}
class SwitchWallBase_1371 : public Backdrop
{
public:
    SwitchWallBase_1371(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2122);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1371(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1371(x, y);
}
class SwitchWallBase2_1372 : public Backdrop
{
public:
    SwitchWallBase2_1372(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase 2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9456);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase2_1372(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase2_1372(x, y);
}
class RMSoilEdgeLeft_1373 : public Backdrop
{
public:
    RMSoilEdgeLeft_1373(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_SoilEdgeLeft", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2443);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmsoiledgeleft_1373(int x, int y)
{
    return new (Backdrop::pool.create()) RMSoilEdgeLeft_1373(x, y);
}
class RMBrickArch_1374 : public Backdrop
{
public:
    RMBrickArch_1374(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BrickArch", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7949);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrickarch_1374(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrickArch_1374(x, y);
}
class RMMineTrack13_1375 : public Backdrop
{
public:
    RMMineTrack13_1375(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_MineTrack 13", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2313);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmminetrack13_1375(int x, int y)
{
    return new (Backdrop::pool.create()) RMMineTrack13_1375(x, y);
}
class RMAlternatePathBack_1376 : public Backdrop
{
public:
    RMAlternatePathBack_1376(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_AlternatePathBack", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(523);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmalternatepathback_1376(int x, int y)
{
    return new (Backdrop::pool.create()) RMAlternatePathBack_1376(x, y);
}
class Brick30_1377 : public Backdrop
{
public:
    Brick30_1377(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick 30", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7203);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_brick30_1377(int x, int y)
{
    return new (Backdrop::pool.create()) Brick30_1377(x, y);
}
class CaravanDoor_1378 : public Backdrop
{
public:
    CaravanDoor_1378(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Door", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(16507);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravandoor_1378(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanDoor_1378(x, y);
}
static Image* images_rmalternatepath2_1379_0_0[1];
static Direction direction_rmalternatepath2_1379_0_0 = {0, 0, 0, 0, 1, images_rmalternatepath2_1379_0_0, 1};
static Animation anim_rmalternatepath2_1379_0 = {&direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, NULL, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0, &direction_rmalternatepath2_1379_0_0};
static Animation * anim_array_rmalternatepath2_1379[1] = {&anim_rmalternatepath2_1379_0};
static Animations anim_rmalternatepath2_1379 = {1, &anim_array_rmalternatepath2_1379[0]};
static bool anim_rmalternatepath2_1379_initialized;
class RMAlternatePath2_1379 : public Active
{
public:
    RMAlternatePath2_1379(int x, int y) : Active(x, y, RMAlternatePath2_1379_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("RM_AlternatePath 2", 18);
#endif
        this->animations = &anim_rmalternatepath2_1379;
        if (!anim_rmalternatepath2_1379_initialized) {
            anim_rmalternatepath2_1379_initialized = true;
            images_rmalternatepath2_1379_0_0[0] = get_internal_image(2816);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_rmalternatepath2_1379(int x, int y)
{
    return new (Active::pool.create()) RMAlternatePath2_1379(x, y);
}
static Image* images_objectjumppad_1380_0_0[1];
static Direction direction_objectjumppad_1380_0_0 = {0, 25, 25, 0, -1, images_objectjumppad_1380_0_0, 1};
static Image* images_objectjumppad_1380_0_1[4];
static Direction direction_objectjumppad_1380_0_1 = {1, 25, 25, 0, -1, images_objectjumppad_1380_0_1, 4};
static Image* images_objectjumppad_1380_0_2[1];
static Direction direction_objectjumppad_1380_0_2 = {2, 25, 25, 0, -1, images_objectjumppad_1380_0_2, 1};
static Animation anim_objectjumppad_1380_0 = {&direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_1, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, &direction_objectjumppad_1380_0_2, NULL, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0, &direction_objectjumppad_1380_0_0};
static Image* images_objectjumppad_1380_7_0[1];
static Direction direction_objectjumppad_1380_7_0 = {0, 25, 25, 0, -1, images_objectjumppad_1380_7_0, 1};
static Image* images_objectjumppad_1380_7_1[4];
static Direction direction_objectjumppad_1380_7_1 = {1, 25, 25, 0, -1, images_objectjumppad_1380_7_1, 4};
static Image* images_objectjumppad_1380_7_2[1];
static Direction direction_objectjumppad_1380_7_2 = {2, 25, 25, 0, -1, images_objectjumppad_1380_7_2, 1};
static Animation anim_objectjumppad_1380_7 = {&direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_1, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, &direction_objectjumppad_1380_7_2, NULL, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0, &direction_objectjumppad_1380_7_0};
static Animation * anim_array_objectjumppad_1380[8] = {&anim_objectjumppad_1380_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectjumppad_1380_7};
static Animations anim_objectjumppad_1380 = {8, &anim_array_objectjumppad_1380[0]};
static bool anim_objectjumppad_1380_initialized;
class ObjectJumppad_1380 : public Active
{
public:
    ObjectJumppad_1380(int x, int y) : Active(x, y, ObjectJumppad_1380_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Jumppad", 14);
#endif
        this->animations = &anim_objectjumppad_1380;
        if (!anim_objectjumppad_1380_initialized) {
            anim_objectjumppad_1380_initialized = true;
            images_objectjumppad_1380_0_0[0] = get_internal_image(4904);
            images_objectjumppad_1380_0_1[0] = get_internal_image(4914);
            images_objectjumppad_1380_0_1[1] = get_internal_image(4921);
            images_objectjumppad_1380_0_1[2] = get_internal_image(4925);
            images_objectjumppad_1380_0_1[3] = get_internal_image(4927);
            images_objectjumppad_1380_0_2[0] = get_internal_image(4904);
            images_objectjumppad_1380_7_0[0] = get_internal_image(4929);
            images_objectjumppad_1380_7_1[0] = get_internal_image(4928);
            images_objectjumppad_1380_7_1[1] = get_internal_image(4930);
            images_objectjumppad_1380_7_1[2] = get_internal_image(4933);
            images_objectjumppad_1380_7_1[3] = get_internal_image(4935);
            images_objectjumppad_1380_7_2[0] = get_internal_image(4929);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_objectjumppad_1380(int x, int y)
{
    return new (Active::pool.create()) ObjectJumppad_1380(x, y);
}
static Image* images_gimmickhangingswitch_1381_0_0[1];
static Direction direction_gimmickhangingswitch_1381_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingswitch_1381_0_0, 1};
static Animation anim_gimmickhangingswitch_1381_0 = {&direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, NULL, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0, &direction_gimmickhangingswitch_1381_0_0};
static Animation * anim_array_gimmickhangingswitch_1381[1] = {&anim_gimmickhangingswitch_1381_0};
static Animations anim_gimmickhangingswitch_1381 = {1, &anim_array_gimmickhangingswitch_1381[0]};
static bool anim_gimmickhangingswitch_1381_initialized;
class GimmickHangingSwitch_1381 : public Active
{
public:
    GimmickHangingSwitch_1381(int x, int y) : Active(x, y, GimmickHangingSwitch_1381_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingSwitch", 21);
#endif
        this->animations = &anim_gimmickhangingswitch_1381;
        if (!anim_gimmickhangingswitch_1381_initialized) {
            anim_gimmickhangingswitch_1381_initialized = true;
            images_gimmickhangingswitch_1381_0_0[0] = get_internal_image(12859);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickhangingswitch_1381(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingSwitch_1381(x, y);
}
static Image* images_breakablecolumn2_1382_0_0[1];
static Direction direction_breakablecolumn2_1382_0_0 = {0, 50, 50, 0, 1, images_breakablecolumn2_1382_0_0, 1};
static Animation anim_breakablecolumn2_1382_0 = {&direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, NULL, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0, &direction_breakablecolumn2_1382_0_0};
static Animation * anim_array_breakablecolumn2_1382[1] = {&anim_breakablecolumn2_1382_0};
static Animations anim_breakablecolumn2_1382 = {1, &anim_array_breakablecolumn2_1382[0]};
static bool anim_breakablecolumn2_1382_initialized;
class BreakableColumn2_1382 : public Active
{
public:
    BreakableColumn2_1382(int x, int y) : Active(x, y, BreakableColumn2_1382_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableColumn2", 16);
#endif
        this->animations = &anim_breakablecolumn2_1382;
        if (!anim_breakablecolumn2_1382_initialized) {
            anim_breakablecolumn2_1382_initialized = true;
            images_breakablecolumn2_1382_0_0[0] = get_internal_image(7984);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_breakablecolumn2_1382(int x, int y)
{
    return new (Active::pool.create()) BreakableColumn2_1382(x, y);
}
static Image* images_breakablecolumn1_1383_0_0[1];
static Direction direction_breakablecolumn1_1383_0_0 = {0, 50, 50, 0, 1, images_breakablecolumn1_1383_0_0, 1};
static Animation anim_breakablecolumn1_1383_0 = {&direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, NULL, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0, &direction_breakablecolumn1_1383_0_0};
static Animation * anim_array_breakablecolumn1_1383[1] = {&anim_breakablecolumn1_1383_0};
static Animations anim_breakablecolumn1_1383 = {1, &anim_array_breakablecolumn1_1383[0]};
static bool anim_breakablecolumn1_1383_initialized;
class BreakableColumn1_1383 : public Active
{
public:
    BreakableColumn1_1383(int x, int y) : Active(x, y, BreakableColumn1_1383_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableColumn1", 16);
#endif
        this->animations = &anim_breakablecolumn1_1383;
        if (!anim_breakablecolumn1_1383_initialized) {
            anim_breakablecolumn1_1383_initialized = true;
            images_breakablecolumn1_1383_0_0[0] = get_internal_image(8137);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_breakablecolumn1_1383(int x, int y)
{
    return new (Active::pool.create()) BreakableColumn1_1383(x, y);
}
static Image* images_breakablerelicwall_1384_0_0[1];
static Direction direction_breakablerelicwall_1384_0_0 = {0, 50, 50, 0, 1, images_breakablerelicwall_1384_0_0, 1};
static Animation anim_breakablerelicwall_1384_0 = {&direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, NULL, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0, &direction_breakablerelicwall_1384_0_0};
static Animation * anim_array_breakablerelicwall_1384[1] = {&anim_breakablerelicwall_1384_0};
static Animations anim_breakablerelicwall_1384 = {1, &anim_array_breakablerelicwall_1384[0]};
static bool anim_breakablerelicwall_1384_initialized;
class BreakableRelicWall_1384 : public Active
{
public:
    BreakableRelicWall_1384(int x, int y) : Active(x, y, BreakableRelicWall_1384_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRelicWall", 18);
#endif
        this->animations = &anim_breakablerelicwall_1384;
        if (!anim_breakablerelicwall_1384_initialized) {
            anim_breakablerelicwall_1384_initialized = true;
            images_breakablerelicwall_1384_0_0[0] = get_internal_image(8103);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_breakablerelicwall_1384(int x, int y)
{
    return new (Active::pool.create()) BreakableRelicWall_1384(x, y);
}
static Image* images_enemyfirespitter_1385_0_0[4];
static Direction direction_enemyfirespitter_1385_0_0 = {0, 100, 100, 0, -1, images_enemyfirespitter_1385_0_0, 4};
static Image* images_enemyfirespitter_1385_0_16[4];
static Direction direction_enemyfirespitter_1385_0_16 = {16, 100, 100, 0, -1, images_enemyfirespitter_1385_0_16, 4};
static Animation anim_enemyfirespitter_1385_0 = {&direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, NULL, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, &direction_enemyfirespitter_1385_0_16, NULL, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0, &direction_enemyfirespitter_1385_0_0};
static Image* images_enemyfirespitter_1385_7_0[4];
static Direction direction_enemyfirespitter_1385_7_0 = {0, 100, 100, 0, -1, images_enemyfirespitter_1385_7_0, 4};
static Image* images_enemyfirespitter_1385_7_16[4];
static Direction direction_enemyfirespitter_1385_7_16 = {16, 100, 100, 0, -1, images_enemyfirespitter_1385_7_16, 4};
static Animation anim_enemyfirespitter_1385_7 = {&direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, NULL, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, &direction_enemyfirespitter_1385_7_16, NULL, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0, &direction_enemyfirespitter_1385_7_0};
static Image* images_enemyfirespitter_1385_8_0[1];
static Direction direction_enemyfirespitter_1385_8_0 = {0, 50, 50, 0, -1, images_enemyfirespitter_1385_8_0, 1};
static Image* images_enemyfirespitter_1385_8_16[1];
static Direction direction_enemyfirespitter_1385_8_16 = {16, 50, 50, 0, -1, images_enemyfirespitter_1385_8_16, 1};
static Animation anim_enemyfirespitter_1385_8 = {&direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, NULL, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, &direction_enemyfirespitter_1385_8_16, NULL, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0, &direction_enemyfirespitter_1385_8_0};
static Image* images_enemyfirespitter_1385_10_0[10];
static Direction direction_enemyfirespitter_1385_10_0 = {0, 35, 35, 0, 1, images_enemyfirespitter_1385_10_0, 10};
static Image* images_enemyfirespitter_1385_10_16[10];
static Direction direction_enemyfirespitter_1385_10_16 = {16, 35, 35, 0, 1, images_enemyfirespitter_1385_10_16, 10};
static Animation anim_enemyfirespitter_1385_10 = {&direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, NULL, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, &direction_enemyfirespitter_1385_10_16, NULL, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0, &direction_enemyfirespitter_1385_10_0};
static Animation * anim_array_enemyfirespitter_1385[11] = {&anim_enemyfirespitter_1385_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyfirespitter_1385_7, &anim_enemyfirespitter_1385_8, NULL, &anim_enemyfirespitter_1385_10};
static Animations anim_enemyfirespitter_1385 = {11, &anim_array_enemyfirespitter_1385[0]};
static bool anim_enemyfirespitter_1385_initialized;
class EnemyFireSpitter_1385 : public Active
{
public:
    EnemyFireSpitter_1385(int x, int y) : Active(x, y, EnemyFireSpitter_1385_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_FireSpitter", 17);
#endif
        this->animations = &anim_enemyfirespitter_1385;
        if (!anim_enemyfirespitter_1385_initialized) {
            anim_enemyfirespitter_1385_initialized = true;
            images_enemyfirespitter_1385_0_0[0] = get_internal_image(13090);
            images_enemyfirespitter_1385_0_0[1] = get_internal_image(13089);
            images_enemyfirespitter_1385_0_0[2] = get_internal_image(13091);
            images_enemyfirespitter_1385_0_0[3] = get_internal_image(13092);
            images_enemyfirespitter_1385_0_16[0] = get_internal_image(13096);
            images_enemyfirespitter_1385_0_16[1] = get_internal_image(13102);
            images_enemyfirespitter_1385_0_16[2] = get_internal_image(13107);
            images_enemyfirespitter_1385_0_16[3] = get_internal_image(13108);
            images_enemyfirespitter_1385_7_0[0] = get_internal_image(13090);
            images_enemyfirespitter_1385_7_0[1] = get_internal_image(13089);
            images_enemyfirespitter_1385_7_0[2] = get_internal_image(13104);
            images_enemyfirespitter_1385_7_0[3] = get_internal_image(13105);
            images_enemyfirespitter_1385_7_16[0] = get_internal_image(13096);
            images_enemyfirespitter_1385_7_16[1] = get_internal_image(13102);
            images_enemyfirespitter_1385_7_16[2] = get_internal_image(13103);
            images_enemyfirespitter_1385_7_16[3] = get_internal_image(13106);
            images_enemyfirespitter_1385_8_0[0] = get_internal_image(13101);
            images_enemyfirespitter_1385_8_16[0] = get_internal_image(13100);
            images_enemyfirespitter_1385_10_0[0] = get_internal_image(13096);
            images_enemyfirespitter_1385_10_0[1] = get_internal_image(13096);
            images_enemyfirespitter_1385_10_0[2] = get_internal_image(13097);
            images_enemyfirespitter_1385_10_0[3] = get_internal_image(13097);
            images_enemyfirespitter_1385_10_0[4] = get_internal_image(13098);
            images_enemyfirespitter_1385_10_0[5] = get_internal_image(13098);
            images_enemyfirespitter_1385_10_0[6] = get_internal_image(13099);
            images_enemyfirespitter_1385_10_0[7] = get_internal_image(13099);
            images_enemyfirespitter_1385_10_0[8] = get_internal_image(13090);
            images_enemyfirespitter_1385_10_0[9] = get_internal_image(13090);
            images_enemyfirespitter_1385_10_16[0] = get_internal_image(13090);
            images_enemyfirespitter_1385_10_16[1] = get_internal_image(13090);
            images_enemyfirespitter_1385_10_16[2] = get_internal_image(13093);
            images_enemyfirespitter_1385_10_16[3] = get_internal_image(13093);
            images_enemyfirespitter_1385_10_16[4] = get_internal_image(13094);
            images_enemyfirespitter_1385_10_16[5] = get_internal_image(13094);
            images_enemyfirespitter_1385_10_16[6] = get_internal_image(13095);
            images_enemyfirespitter_1385_10_16[7] = get_internal_image(13095);
            images_enemyfirespitter_1385_10_16[8] = get_internal_image(13096);
            images_enemyfirespitter_1385_10_16[9] = get_internal_image(13096);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
        alterables->values.set(3, 1);
    }
};
FrameObject * create_enemyfirespitter_1385(int x, int y)
{
    return new (Active::pool.create()) EnemyFireSpitter_1385(x, y);
}
static Image* images_caravanwheel_1386_0_0[1];
static Direction direction_caravanwheel_1386_0_0 = {0, 50, 50, 0, 1, images_caravanwheel_1386_0_0, 1};
static Animation anim_caravanwheel_1386_0 = {&direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, NULL, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0, &direction_caravanwheel_1386_0_0};
static Animation * anim_array_caravanwheel_1386[1] = {&anim_caravanwheel_1386_0};
static Animations anim_caravanwheel_1386 = {1, &anim_array_caravanwheel_1386[0]};
static bool anim_caravanwheel_1386_initialized;
class CaravanWheel_1386 : public Active
{
public:
    CaravanWheel_1386(int x, int y) : Active(x, y, CaravanWheel_1386_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Caravan_Wheel", 13);
#endif
        this->animations = &anim_caravanwheel_1386;
        if (!anim_caravanwheel_1386_initialized) {
            anim_caravanwheel_1386_initialized = true;
            images_caravanwheel_1386_0_0[0] = get_internal_image(2494);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_caravanwheel_1386(int x, int y)
{
    return new (Active::pool.create()) CaravanWheel_1386(x, y);
}
static Image* images_levelfloatingplatform2_1387_0_0[1];
static Direction direction_levelfloatingplatform2_1387_0_0 = {0, 50, 50, 0, 1, images_levelfloatingplatform2_1387_0_0, 1};
static Animation anim_levelfloatingplatform2_1387_0 = {&direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, NULL, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0, &direction_levelfloatingplatform2_1387_0_0};
static Animation * anim_array_levelfloatingplatform2_1387[1] = {&anim_levelfloatingplatform2_1387_0};
static Animations anim_levelfloatingplatform2_1387 = {1, &anim_array_levelfloatingplatform2_1387[0]};
static bool anim_levelfloatingplatform2_1387_initialized;
class LevelFloatingPlatform2_1387 : public Active
{
public:
    LevelFloatingPlatform2_1387(int x, int y) : Active(x, y, LevelFloatingPlatform2_1387_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_FloatingPlatform 2", 24);
#endif
        set_visible(false);
        this->animations = &anim_levelfloatingplatform2_1387;
        if (!anim_levelfloatingplatform2_1387_initialized) {
            anim_levelfloatingplatform2_1387_initialized = true;
            images_levelfloatingplatform2_1387_0_0[0] = get_internal_image(4762);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_levelfloatingplatform2_1387(int x, int y)
{
    return new (Active::pool.create()) LevelFloatingPlatform2_1387(x, y);
}
static Image* images_bossclawhitbox_1388_0_0[1];
static Direction direction_bossclawhitbox_1388_0_0 = {0, 20, 20, 0, -1, images_bossclawhitbox_1388_0_0, 1};
static Animation anim_bossclawhitbox_1388_0 = {&direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, NULL, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0, &direction_bossclawhitbox_1388_0_0};
static Animation * anim_array_bossclawhitbox_1388[1] = {&anim_bossclawhitbox_1388_0};
static Animations anim_bossclawhitbox_1388 = {1, &anim_array_bossclawhitbox_1388[0]};
static bool anim_bossclawhitbox_1388_initialized;
class BossClawHitbox_1388 : public Active
{
public:
    BossClawHitbox_1388(int x, int y) : Active(x, y, BossClawHitbox_1388_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_ClawHitbox", 15);
#endif
        set_visible(false);
        this->animations = &anim_bossclawhitbox_1388;
        if (!anim_bossclawhitbox_1388_initialized) {
            anim_bossclawhitbox_1388_initialized = true;
            images_bossclawhitbox_1388_0_0[0] = get_internal_image(1188);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
        alterables->values.set(0, 18);
    }
};
FrameObject * create_bossclawhitbox_1388(int x, int y)
{
    return new (Active::pool.create()) BossClawHitbox_1388(x, y);
}
static Image* images_bossclaw_1389_0_0[1];
static Direction direction_bossclaw_1389_0_0 = {0, 50, 50, 0, 1, images_bossclaw_1389_0_0, 1};
static Image* images_bossclaw_1389_0_1[1];
static Direction direction_bossclaw_1389_0_1 = {1, 50, 50, 0, 1, images_bossclaw_1389_0_1, 1};
static Image* images_bossclaw_1389_0_2[1];
static Direction direction_bossclaw_1389_0_2 = {2, 50, 50, 0, 1, images_bossclaw_1389_0_2, 1};
static Image* images_bossclaw_1389_0_8[1];
static Direction direction_bossclaw_1389_0_8 = {8, 50, 50, 0, 1, images_bossclaw_1389_0_8, 1};
static Image* images_bossclaw_1389_0_16[1];
static Direction direction_bossclaw_1389_0_16 = {16, 50, 50, 0, 1, images_bossclaw_1389_0_16, 1};
static Image* images_bossclaw_1389_0_17[2];
static Direction direction_bossclaw_1389_0_17 = {17, 50, 50, 0, -1, images_bossclaw_1389_0_17, 2};
static Animation anim_bossclaw_1389_0 = {&direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_1, &direction_bossclaw_1389_0_2, &direction_bossclaw_1389_0_2, &direction_bossclaw_1389_0_2, NULL, &direction_bossclaw_1389_0_8, &direction_bossclaw_1389_0_8, &direction_bossclaw_1389_0_8, &direction_bossclaw_1389_0_8, &direction_bossclaw_1389_0_8, &direction_bossclaw_1389_0_8, NULL, &direction_bossclaw_1389_0_16, &direction_bossclaw_1389_0_16, &direction_bossclaw_1389_0_16, &direction_bossclaw_1389_0_16, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_17, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0, &direction_bossclaw_1389_0_0};
static Image* images_bossclaw_1389_7_16[2];
static Direction direction_bossclaw_1389_7_16 = {16, 50, 50, 0, -1, images_bossclaw_1389_7_16, 2};
static Image* images_bossclaw_1389_7_17[2];
static Direction direction_bossclaw_1389_7_17 = {17, 50, 50, 0, -1, images_bossclaw_1389_7_17, 2};
static Animation anim_bossclaw_1389_7 = {&direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_16, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17, &direction_bossclaw_1389_7_17};
static Animation * anim_array_bossclaw_1389[8] = {&anim_bossclaw_1389_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossclaw_1389_7};
static Animations anim_bossclaw_1389 = {8, &anim_array_bossclaw_1389[0]};
static bool anim_bossclaw_1389_initialized;
class BossClaw_1389 : public Active
{
public:
    BossClaw_1389(int x, int y) : Active(x, y, BossClaw_1389_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_Claw", 9);
#endif
        set_visible(false);
        this->animations = &anim_bossclaw_1389;
        if (!anim_bossclaw_1389_initialized) {
            anim_bossclaw_1389_initialized = true;
            images_bossclaw_1389_0_0[0] = get_internal_image(13113);
            images_bossclaw_1389_0_1[0] = get_internal_image(13114);
            images_bossclaw_1389_0_2[0] = get_internal_image(13115);
            images_bossclaw_1389_0_8[0] = get_internal_image(3295);
            images_bossclaw_1389_0_16[0] = get_internal_image(3335);
            images_bossclaw_1389_0_17[0] = get_internal_image(3340);
            images_bossclaw_1389_0_17[1] = get_internal_image(3346);
            images_bossclaw_1389_7_16[0] = get_internal_image(3335);
            images_bossclaw_1389_7_16[1] = get_internal_image(1227);
            images_bossclaw_1389_7_17[0] = get_internal_image(3340);
            images_bossclaw_1389_7_17[1] = get_internal_image(3102);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(8, 10);
        alterables->values.set(9, 20);
    }
};
FrameObject * create_bossclaw_1389(int x, int y)
{
    return new (Active::pool.create()) BossClaw_1389(x, y);
}
static Image* images_shrine3_1390_0_0[1];
static Direction direction_shrine3_1390_0_0 = {0, 50, 50, 0, 1, images_shrine3_1390_0_0, 1};
static Image* images_shrine3_1390_0_8[1];
static Direction direction_shrine3_1390_0_8 = {8, 50, 50, 0, -1, images_shrine3_1390_0_8, 1};
static Animation anim_shrine3_1390_0 = {&direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, NULL, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, &direction_shrine3_1390_0_8, NULL, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0, &direction_shrine3_1390_0_0};
static Animation * anim_array_shrine3_1390[1] = {&anim_shrine3_1390_0};
static Animations anim_shrine3_1390 = {1, &anim_array_shrine3_1390[0]};
static bool anim_shrine3_1390_initialized;
class Shrine3_1390 : public Active
{
public:
    Shrine3_1390(int x, int y) : Active(x, y, Shrine3_1390_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Shrine 3", 8);
#endif
        this->animations = &anim_shrine3_1390;
        if (!anim_shrine3_1390_initialized) {
            anim_shrine3_1390_initialized = true;
            images_shrine3_1390_0_0[0] = get_internal_image(13111);
            images_shrine3_1390_0_8[0] = get_internal_image(3326);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 9999);
    }
};
FrameObject * create_shrine3_1390(int x, int y)
{
    return new (Active::pool.create()) Shrine3_1390(x, y);
}
static Image* images_shrine2_1391_0_0[1];
static Direction direction_shrine2_1391_0_0 = {0, 50, 50, 0, 1, images_shrine2_1391_0_0, 1};
static Animation anim_shrine2_1391_0 = {&direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, NULL, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0, &direction_shrine2_1391_0_0};
static Animation * anim_array_shrine2_1391[1] = {&anim_shrine2_1391_0};
static Animations anim_shrine2_1391 = {1, &anim_array_shrine2_1391[0]};
static bool anim_shrine2_1391_initialized;
class Shrine2_1391 : public Active
{
public:
    Shrine2_1391(int x, int y) : Active(x, y, Shrine2_1391_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shrine 2", 8);
#endif
        this->animations = &anim_shrine2_1391;
        if (!anim_shrine2_1391_initialized) {
            anim_shrine2_1391_initialized = true;
            images_shrine2_1391_0_0[0] = get_internal_image(154);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_shrine2_1391(int x, int y)
{
    return new (Active::pool.create()) Shrine2_1391(x, y);
}
static Image* images_bossclawtalons_1392_0_0[1];
static Direction direction_bossclawtalons_1392_0_0 = {0, 50, 50, 0, 1, images_bossclawtalons_1392_0_0, 1};
static Image* images_bossclawtalons_1392_0_1[1];
static Direction direction_bossclawtalons_1392_0_1 = {1, 50, 50, 0, 1, images_bossclawtalons_1392_0_1, 1};
static Image* images_bossclawtalons_1392_0_16[1];
static Direction direction_bossclawtalons_1392_0_16 = {16, 50, 50, 0, 1, images_bossclawtalons_1392_0_16, 1};
static Image* images_bossclawtalons_1392_0_17[1];
static Direction direction_bossclawtalons_1392_0_17 = {17, 50, 50, 0, 1, images_bossclawtalons_1392_0_17, 1};
static Animation anim_bossclawtalons_1392_0 = {&direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_1, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_16, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_17, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0, &direction_bossclawtalons_1392_0_0};
static Animation * anim_array_bossclawtalons_1392[1] = {&anim_bossclawtalons_1392_0};
static Animations anim_bossclawtalons_1392 = {1, &anim_array_bossclawtalons_1392[0]};
static bool anim_bossclawtalons_1392_initialized;
class BossClawTalons_1392 : public Active
{
public:
    BossClawTalons_1392(int x, int y) : Active(x, y, BossClawTalons_1392_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_ClawTalons", 15);
#endif
        set_visible(false);
        this->animations = &anim_bossclawtalons_1392;
        if (!anim_bossclawtalons_1392_initialized) {
            anim_bossclawtalons_1392_initialized = true;
            images_bossclawtalons_1392_0_0[0] = get_internal_image(3334);
            images_bossclawtalons_1392_0_1[0] = get_internal_image(3336);
            images_bossclawtalons_1392_0_16[0] = get_internal_image(3311);
            images_bossclawtalons_1392_0_17[0] = get_internal_image(1164);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_bossclawtalons_1392(int x, int y)
{
    return new (Active::pool.create()) BossClawTalons_1392(x, y);
}
static Image* images_bossclawbase_1393_0_0[1];
static Direction direction_bossclawbase_1393_0_0 = {0, 50, 50, 0, 1, images_bossclawbase_1393_0_0, 1};
static Image* images_bossclawbase_1393_0_8[1];
static Direction direction_bossclawbase_1393_0_8 = {8, 50, 50, 0, 1, images_bossclawbase_1393_0_8, 1};
static Animation anim_bossclawbase_1393_0 = {&direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, NULL, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, &direction_bossclawbase_1393_0_8, NULL, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0, &direction_bossclawbase_1393_0_0};
static Animation * anim_array_bossclawbase_1393[1] = {&anim_bossclawbase_1393_0};
static Animations anim_bossclawbase_1393 = {1, &anim_array_bossclawbase_1393[0]};
static bool anim_bossclawbase_1393_initialized;
class BossClawBase_1393 : public Active
{
public:
    BossClawBase_1393(int x, int y) : Active(x, y, BossClawBase_1393_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Boss_ClawBase", 13);
#endif
        this->animations = &anim_bossclawbase_1393;
        if (!anim_bossclawbase_1393_initialized) {
            anim_bossclawbase_1393_initialized = true;
            images_bossclawbase_1393_0_0[0] = get_internal_image(9673);
            images_bossclawbase_1393_0_8[0] = get_internal_image(9677);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_bossclawbase_1393(int x, int y)
{
    return new (Active::pool.create()) BossClawBase_1393(x, y);
}
static Image* images_pushableblock3_1394_0_0[1];
static Direction direction_pushableblock3_1394_0_0 = {0, 100, 100, 0, 1, images_pushableblock3_1394_0_0, 1};
static Animation anim_pushableblock3_1394_0 = {&direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, NULL, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0, &direction_pushableblock3_1394_0_0};
static Animation * anim_array_pushableblock3_1394[1] = {&anim_pushableblock3_1394_0};
static Animations anim_pushableblock3_1394 = {1, &anim_array_pushableblock3_1394[0]};
static bool anim_pushableblock3_1394_initialized;
class PushableBlock3_1394 : public Active
{
public:
    PushableBlock3_1394(int x, int y) : Active(x, y, PushableBlock3_1394_type)
    {
        // qualifiers: 14, 16, 21
#ifndef NDEBUG
        name = std::string("PushableBlock 3", 15);
#endif
        this->animations = &anim_pushableblock3_1394;
        if (!anim_pushableblock3_1394_initialized) {
            anim_pushableblock3_1394_initialized = true;
            images_pushableblock3_1394_0_0[0] = get_internal_image(13112);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_pushableblock3_1394(int x, int y)
{
    return new (Active::pool.create()) PushableBlock3_1394(x, y);
}
static Image* images_caravanengine_1395_0_0[6];
static Direction direction_caravanengine_1395_0_0 = {0, 50, 50, 0, -1, images_caravanengine_1395_0_0, 6};
static Image* images_caravanengine_1395_0_8[1];
static Direction direction_caravanengine_1395_0_8 = {8, 50, 50, 0, 1, images_caravanengine_1395_0_8, 1};
static Animation anim_caravanengine_1395_0 = {&direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, NULL, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, &direction_caravanengine_1395_0_8, NULL, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0, &direction_caravanengine_1395_0_0};
static Animation * anim_array_caravanengine_1395[1] = {&anim_caravanengine_1395_0};
static Animations anim_caravanengine_1395 = {1, &anim_array_caravanengine_1395[0]};
static bool anim_caravanengine_1395_initialized;
class CaravanEngine_1395 : public Active
{
public:
    CaravanEngine_1395(int x, int y) : Active(x, y, CaravanEngine_1395_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Caravan_Engine", 14);
#endif
        this->animations = &anim_caravanengine_1395;
        if (!anim_caravanengine_1395_initialized) {
            anim_caravanengine_1395_initialized = true;
            images_caravanengine_1395_0_0[0] = get_internal_image(354);
            images_caravanengine_1395_0_0[1] = get_internal_image(645);
            images_caravanengine_1395_0_0[2] = get_internal_image(1305);
            images_caravanengine_1395_0_0[3] = get_internal_image(1590);
            images_caravanengine_1395_0_0[4] = get_internal_image(2089);
            images_caravanengine_1395_0_0[5] = get_internal_image(2102);
            images_caravanengine_1395_0_8[0] = get_internal_image(280);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 20);
    }
};
FrameObject * create_caravanengine_1395(int x, int y)
{
    return new (Active::pool.create()) CaravanEngine_1395(x, y);
}
static Image* images_active_1396_0_0[1];
static Direction direction_active_1396_0_0 = {0, 50, 50, 0, 1, images_active_1396_0_0, 1};
static Animation anim_active_1396_0 = {&direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, NULL, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0, &direction_active_1396_0_0};
static Animation * anim_array_active_1396[1] = {&anim_active_1396_0};
static Animations anim_active_1396 = {1, &anim_array_active_1396[0]};
static bool anim_active_1396_initialized;
class Active_1396 : public Active
{
public:
    Active_1396(int x, int y) : Active(x, y, Active_1396_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_1396;
        if (!anim_active_1396_initialized) {
            anim_active_1396_initialized = true;
            images_active_1396_0_0[0] = get_internal_image(4151);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_active_1396(int x, int y)
{
    return new (Active::pool.create()) Active_1396(x, y);
}
static Image* images_gimmickelevator_1397_0_0[1];
static Direction direction_gimmickelevator_1397_0_0 = {0, 50, 50, 0, 1, images_gimmickelevator_1397_0_0, 1};
static Animation anim_gimmickelevator_1397_0 = {&direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, NULL, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0, &direction_gimmickelevator_1397_0_0};
static Image* images_gimmickelevator_1397_1_0[4];
static Direction direction_gimmickelevator_1397_1_0 = {0, 50, 50, 0, -1, images_gimmickelevator_1397_1_0, 4};
static Animation anim_gimmickelevator_1397_1 = {&direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, NULL, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0, &direction_gimmickelevator_1397_1_0};
static Animation * anim_array_gimmickelevator_1397[2] = {&anim_gimmickelevator_1397_0, &anim_gimmickelevator_1397_1};
static Animations anim_gimmickelevator_1397 = {2, &anim_array_gimmickelevator_1397[0]};
static bool anim_gimmickelevator_1397_initialized;
class GimmickElevator_1397 : public Active
{
public:
    GimmickElevator_1397(int x, int y) : Active(x, y, GimmickElevator_1397_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Elevator", 16);
#endif
        this->animations = &anim_gimmickelevator_1397;
        if (!anim_gimmickelevator_1397_initialized) {
            anim_gimmickelevator_1397_initialized = true;
            images_gimmickelevator_1397_0_0[0] = get_internal_image(2544);
            images_gimmickelevator_1397_1_0[0] = get_internal_image(2544);
            images_gimmickelevator_1397_1_0[1] = get_internal_image(3574);
            images_gimmickelevator_1397_1_0[2] = get_internal_image(2583);
            images_gimmickelevator_1397_1_0[3] = get_internal_image(3576);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickelevator_1397(int x, int y)
{
    return new (Active::pool.create()) GimmickElevator_1397(x, y);
}
static Image* images_gimmickelevator2_1398_0_0[1];
static Direction direction_gimmickelevator2_1398_0_0 = {0, 50, 50, 0, 1, images_gimmickelevator2_1398_0_0, 1};
static Animation anim_gimmickelevator2_1398_0 = {&direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, NULL, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0, &direction_gimmickelevator2_1398_0_0};
static Animation * anim_array_gimmickelevator2_1398[1] = {&anim_gimmickelevator2_1398_0};
static Animations anim_gimmickelevator2_1398 = {1, &anim_array_gimmickelevator2_1398[0]};
static bool anim_gimmickelevator2_1398_initialized;
class GimmickElevator2_1398 : public Active
{
public:
    GimmickElevator2_1398(int x, int y) : Active(x, y, GimmickElevator2_1398_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Gimmick_Elevator 2", 18);
#endif
        this->animations = &anim_gimmickelevator2_1398;
        if (!anim_gimmickelevator2_1398_initialized) {
            anim_gimmickelevator2_1398_initialized = true;
            images_gimmickelevator2_1398_0_0[0] = get_internal_image(10619);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(16, 1);
        alterables->values.set(17, 2300);
    }
};
FrameObject * create_gimmickelevator2_1398(int x, int y)
{
    return new (Active::pool.create()) GimmickElevator2_1398(x, y);
}
static Image* images_gimmickspinnycup_1399_0_0[1];
static Direction direction_gimmickspinnycup_1399_0_0 = {0, 50, 50, 0, 1, images_gimmickspinnycup_1399_0_0, 1};
static Animation anim_gimmickspinnycup_1399_0 = {&direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, NULL, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0, &direction_gimmickspinnycup_1399_0_0};
static Animation * anim_array_gimmickspinnycup_1399[1] = {&anim_gimmickspinnycup_1399_0};
static Animations anim_gimmickspinnycup_1399 = {1, &anim_array_gimmickspinnycup_1399[0]};
static bool anim_gimmickspinnycup_1399_initialized;
class GimmickSpinnyCup_1399 : public Active
{
public:
    GimmickSpinnyCup_1399(int x, int y) : Active(x, y, GimmickSpinnyCup_1399_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_SpinnyCup", 17);
#endif
        this->animations = &anim_gimmickspinnycup_1399;
        if (!anim_gimmickspinnycup_1399_initialized) {
            anim_gimmickspinnycup_1399_initialized = true;
            images_gimmickspinnycup_1399_0_0[0] = get_internal_image(10914);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_gimmickspinnycup_1399(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinnyCup_1399(x, y);
}
static Image* images_gimmickpickaxehandle_1400_0_0[1];
static Direction direction_gimmickpickaxehandle_1400_0_0 = {0, 50, 50, 0, 1, images_gimmickpickaxehandle_1400_0_0, 1};
static Animation anim_gimmickpickaxehandle_1400_0 = {&direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, NULL, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0, &direction_gimmickpickaxehandle_1400_0_0};
static Animation * anim_array_gimmickpickaxehandle_1400[1] = {&anim_gimmickpickaxehandle_1400_0};
static Animations anim_gimmickpickaxehandle_1400 = {1, &anim_array_gimmickpickaxehandle_1400[0]};
static bool anim_gimmickpickaxehandle_1400_initialized;
class GimmickPickaxeHandle_1400 : public Active
{
public:
    GimmickPickaxeHandle_1400(int x, int y) : Active(x, y, GimmickPickaxeHandle_1400_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PickaxeHandle", 21);
#endif
        this->animations = &anim_gimmickpickaxehandle_1400;
        if (!anim_gimmickpickaxehandle_1400_initialized) {
            anim_gimmickpickaxehandle_1400_initialized = true;
            images_gimmickpickaxehandle_1400_0_0[0] = get_internal_image(1438);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_gimmickpickaxehandle_1400(int x, int y)
{
    return new (Active::pool.create()) GimmickPickaxeHandle_1400(x, y);
}
static Image* images_gimmickpickaxebase_1401_0_0[1];
static Direction direction_gimmickpickaxebase_1401_0_0 = {0, 50, 50, 0, 1, images_gimmickpickaxebase_1401_0_0, 1};
static Image* images_gimmickpickaxebase_1401_0_1[2];
static Direction direction_gimmickpickaxebase_1401_0_1 = {1, 40, 40, 0, -1, images_gimmickpickaxebase_1401_0_1, 2};
static Animation anim_gimmickpickaxebase_1401_0 = {&direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_1, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0, &direction_gimmickpickaxebase_1401_0_0};
static Animation * anim_array_gimmickpickaxebase_1401[1] = {&anim_gimmickpickaxebase_1401_0};
static Animations anim_gimmickpickaxebase_1401 = {1, &anim_array_gimmickpickaxebase_1401[0]};
static bool anim_gimmickpickaxebase_1401_initialized;
class GimmickPickaxeBase_1401 : public Active
{
public:
    GimmickPickaxeBase_1401(int x, int y) : Active(x, y, GimmickPickaxeBase_1401_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PickaxeBase", 19);
#endif
        this->animations = &anim_gimmickpickaxebase_1401;
        if (!anim_gimmickpickaxebase_1401_initialized) {
            anim_gimmickpickaxebase_1401_initialized = true;
            images_gimmickpickaxebase_1401_0_0[0] = get_internal_image(3990);
            images_gimmickpickaxebase_1401_0_1[0] = get_internal_image(4070);
            images_gimmickpickaxebase_1401_0_1[1] = get_internal_image(3990);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_gimmickpickaxebase_1401(int x, int y)
{
    return new (Active::pool.create()) GimmickPickaxeBase_1401(x, y);
}
static Image* images_gimmickpickaxe_1402_0_0[1];
static Direction direction_gimmickpickaxe_1402_0_0 = {0, 50, 50, 0, 1, images_gimmickpickaxe_1402_0_0, 1};
static Image* images_gimmickpickaxe_1402_0_1[2];
static Direction direction_gimmickpickaxe_1402_0_1 = {1, 50, 50, 0, -1, images_gimmickpickaxe_1402_0_1, 2};
static Animation anim_gimmickpickaxe_1402_0 = {&direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_1, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0, &direction_gimmickpickaxe_1402_0_0};
static Animation * anim_array_gimmickpickaxe_1402[1] = {&anim_gimmickpickaxe_1402_0};
static Animations anim_gimmickpickaxe_1402 = {1, &anim_array_gimmickpickaxe_1402[0]};
static bool anim_gimmickpickaxe_1402_initialized;
class GimmickPickaxe_1402 : public Active
{
public:
    GimmickPickaxe_1402(int x, int y) : Active(x, y, GimmickPickaxe_1402_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Pickaxe", 15);
#endif
        this->animations = &anim_gimmickpickaxe_1402;
        if (!anim_gimmickpickaxe_1402_initialized) {
            anim_gimmickpickaxe_1402_initialized = true;
            images_gimmickpickaxe_1402_0_0[0] = get_internal_image(3732);
            images_gimmickpickaxe_1402_0_1[0] = get_internal_image(3427);
            images_gimmickpickaxe_1402_0_1[1] = get_internal_image(3732);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_gimmickpickaxe_1402(int x, int y)
{
    return new (Active::pool.create()) GimmickPickaxe_1402(x, y);
}
static Image* images_gimmickpickaxebase2_1403_0_0[1];
static Direction direction_gimmickpickaxebase2_1403_0_0 = {0, 50, 50, 0, 1, images_gimmickpickaxebase2_1403_0_0, 1};
static Image* images_gimmickpickaxebase2_1403_0_1[2];
static Direction direction_gimmickpickaxebase2_1403_0_1 = {1, 50, 50, 0, -1, images_gimmickpickaxebase2_1403_0_1, 2};
static Animation anim_gimmickpickaxebase2_1403_0 = {&direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_1, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0, &direction_gimmickpickaxebase2_1403_0_0};
static Animation * anim_array_gimmickpickaxebase2_1403[1] = {&anim_gimmickpickaxebase2_1403_0};
static Animations anim_gimmickpickaxebase2_1403 = {1, &anim_array_gimmickpickaxebase2_1403[0]};
static bool anim_gimmickpickaxebase2_1403_initialized;
class GimmickPickaxeBase2_1403 : public Active
{
public:
    GimmickPickaxeBase2_1403(int x, int y) : Active(x, y, GimmickPickaxeBase2_1403_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_PickaxeBase 2", 21);
#endif
        this->animations = &anim_gimmickpickaxebase2_1403;
        if (!anim_gimmickpickaxebase2_1403_initialized) {
            anim_gimmickpickaxebase2_1403_initialized = true;
            images_gimmickpickaxebase2_1403_0_0[0] = get_internal_image(3550);
            images_gimmickpickaxebase2_1403_0_1[0] = get_internal_image(3558);
            images_gimmickpickaxebase2_1403_0_1[1] = get_internal_image(3550);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_gimmickpickaxebase2_1403(int x, int y)
{
    return new (Active::pool.create()) GimmickPickaxeBase2_1403(x, y);
}
static Image* images_levelmovingplatform01_1404_0_0[1];
static Direction direction_levelmovingplatform01_1404_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform01_1404_0_0, 1};
static Animation anim_levelmovingplatform01_1404_0 = {&direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, NULL, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0, &direction_levelmovingplatform01_1404_0_0};
static Animation * anim_array_levelmovingplatform01_1404[1] = {&anim_levelmovingplatform01_1404_0};
static Animations anim_levelmovingplatform01_1404 = {1, &anim_array_levelmovingplatform01_1404[0]};
static bool anim_levelmovingplatform01_1404_initialized;
class LevelMovingPlatform01_1404 : public Active
{
public:
    LevelMovingPlatform01_1404(int x, int y) : Active(x, y, LevelMovingPlatform01_1404_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform01", 22);
#endif
        this->animations = &anim_levelmovingplatform01_1404;
        if (!anim_levelmovingplatform01_1404_initialized) {
            anim_levelmovingplatform01_1404_initialized = true;
            images_levelmovingplatform01_1404_0_0[0] = get_internal_image(10900);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 2);
        alterables->values.set(2, -40);
        alterables->values.set(5, 2);
        alterables->values.set(6, 40);
    }
};
FrameObject * create_levelmovingplatform01_1404(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform01_1404(x, y);
}
static Image* images_gimmickrisingswing_1405_0_0[1];
static Direction direction_gimmickrisingswing_1405_0_0 = {0, 50, 50, 0, 1, images_gimmickrisingswing_1405_0_0, 1};
static Animation anim_gimmickrisingswing_1405_0 = {&direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, NULL, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0, &direction_gimmickrisingswing_1405_0_0};
static Animation * anim_array_gimmickrisingswing_1405[1] = {&anim_gimmickrisingswing_1405_0};
static Animations anim_gimmickrisingswing_1405 = {1, &anim_array_gimmickrisingswing_1405[0]};
static bool anim_gimmickrisingswing_1405_initialized;
class GimmickRisingSwing_1405 : public Active
{
public:
    GimmickRisingSwing_1405(int x, int y) : Active(x, y, GimmickRisingSwing_1405_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_RisingSwing", 19);
#endif
        this->animations = &anim_gimmickrisingswing_1405;
        if (!anim_gimmickrisingswing_1405_initialized) {
            anim_gimmickrisingswing_1405_initialized = true;
            images_gimmickrisingswing_1405_0_0[0] = get_internal_image(7567);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, -96);
        alterables->values.set(3, 1);
        alterables->values.set(6, 96);
    }
};
FrameObject * create_gimmickrisingswing_1405(int x, int y)
{
    return new (Active::pool.create()) GimmickRisingSwing_1405(x, y);
}
static Image* images_gimmickrisingswingpiece_1406_0_0[1];
static Direction direction_gimmickrisingswingpiece_1406_0_0 = {0, 50, 50, 0, 1, images_gimmickrisingswingpiece_1406_0_0, 1};
static Animation anim_gimmickrisingswingpiece_1406_0 = {&direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, NULL, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0, &direction_gimmickrisingswingpiece_1406_0_0};
static Animation * anim_array_gimmickrisingswingpiece_1406[1] = {&anim_gimmickrisingswingpiece_1406_0};
static Animations anim_gimmickrisingswingpiece_1406 = {1, &anim_array_gimmickrisingswingpiece_1406[0]};
static bool anim_gimmickrisingswingpiece_1406_initialized;
class GimmickRisingSwingPiece_1406 : public Active
{
public:
    GimmickRisingSwingPiece_1406(int x, int y) : Active(x, y, GimmickRisingSwingPiece_1406_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RisingSwingPiece", 24);
#endif
        this->animations = &anim_gimmickrisingswingpiece_1406;
        if (!anim_gimmickrisingswingpiece_1406_initialized) {
            anim_gimmickrisingswingpiece_1406_initialized = true;
            images_gimmickrisingswingpiece_1406_0_0[0] = get_internal_image(7409);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickrisingswingpiece_1406(int x, int y)
{
    return new (Active::pool.create()) GimmickRisingSwingPiece_1406(x, y);
}
static Image* images_gimmickmovingpillar1_1407_0_0[1];
static Direction direction_gimmickmovingpillar1_1407_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingpillar1_1407_0_0, 1};
static Animation anim_gimmickmovingpillar1_1407_0 = {&direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, NULL, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0, &direction_gimmickmovingpillar1_1407_0_0};
static Animation * anim_array_gimmickmovingpillar1_1407[1] = {&anim_gimmickmovingpillar1_1407_0};
static Animations anim_gimmickmovingpillar1_1407 = {1, &anim_array_gimmickmovingpillar1_1407[0]};
static bool anim_gimmickmovingpillar1_1407_initialized;
class GimmickMovingPillar1_1407 : public Active
{
public:
    GimmickMovingPillar1_1407(int x, int y) : Active(x, y, GimmickMovingPillar1_1407_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingPillar 1", 22);
#endif
        this->animations = &anim_gimmickmovingpillar1_1407;
        if (!anim_gimmickmovingpillar1_1407_initialized) {
            anim_gimmickmovingpillar1_1407_initialized = true;
            images_gimmickmovingpillar1_1407_0_0[0] = get_internal_image(10872);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickmovingpillar1_1407(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingPillar1_1407(x, y);
}
static Image* images_gimmickmovingpillar2_1408_0_0[1];
static Direction direction_gimmickmovingpillar2_1408_0_0 = {0, 50, 50, 0, 1, images_gimmickmovingpillar2_1408_0_0, 1};
static Animation anim_gimmickmovingpillar2_1408_0 = {&direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, NULL, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0, &direction_gimmickmovingpillar2_1408_0_0};
static Animation * anim_array_gimmickmovingpillar2_1408[1] = {&anim_gimmickmovingpillar2_1408_0};
static Animations anim_gimmickmovingpillar2_1408 = {1, &anim_array_gimmickmovingpillar2_1408[0]};
static bool anim_gimmickmovingpillar2_1408_initialized;
class GimmickMovingPillar2_1408 : public Active
{
public:
    GimmickMovingPillar2_1408(int x, int y) : Active(x, y, GimmickMovingPillar2_1408_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_MovingPillar 2", 22);
#endif
        this->animations = &anim_gimmickmovingpillar2_1408;
        if (!anim_gimmickmovingpillar2_1408_initialized) {
            anim_gimmickmovingpillar2_1408_initialized = true;
            images_gimmickmovingpillar2_1408_0_0[0] = get_internal_image(10859);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_gimmickmovingpillar2_1408(int x, int y)
{
    return new (Active::pool.create()) GimmickMovingPillar2_1408(x, y);
}
