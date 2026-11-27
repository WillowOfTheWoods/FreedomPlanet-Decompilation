#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class RMColumn2_1109 : public Backdrop
{
public:
    RMColumn2_1109(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Column2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6327);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcolumn2_1109(int x, int y)
{
    return new (Backdrop::pool.create()) RMColumn2_1109(x, y);
}
class RMUpSign_1110 : public Backdrop
{
public:
    RMUpSign_1110(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_UpSign", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7804);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmupsign_1110(int x, int y)
{
    return new (Backdrop::pool.create()) RMUpSign_1110(x, y);
}
class RMEntrywayRight_1111 : public Backdrop
{
public:
    RMEntrywayRight_1111(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayRight", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8596);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrywayright_1111(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayRight_1111(x, y);
}
class RMEntrywayRight2_1112 : public Backdrop
{
public:
    RMEntrywayRight2_1112(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayRight2", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9643);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmentrywayright2_1112(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayRight2_1112(x, y);
}
class RMColumn1_1113 : public Backdrop
{
public:
    RMColumn1_1113(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Column1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2100);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcolumn1_1113(int x, int y)
{
    return new (Backdrop::pool.create()) RMColumn1_1113(x, y);
}
class RMColumn3_1114 : public Backdrop
{
public:
    RMColumn3_1114(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Column3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2098);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcolumn3_1114(int x, int y)
{
    return new (Backdrop::pool.create()) RMColumn3_1114(x, y);
}
class RMBush3_1115 : public Backdrop
{
public:
    RMBush3_1115(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bush3", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12412);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbush3_1115(int x, int y)
{
    return new (Backdrop::pool.create()) RMBush3_1115(x, y);
}
class RMBrick13_1116 : public Backdrop
{
public:
    RMBrick13_1116(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick13", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6959);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick13_1116(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick13_1116(x, y);
}
class RMColumn4_1117 : public Backdrop
{
public:
    RMColumn4_1117(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Column4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7797);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcolumn4_1117(int x, int y)
{
    return new (Backdrop::pool.create()) RMColumn4_1117(x, y);
}
class RMBush2_1118 : public Backdrop
{
public:
    RMBush2_1118(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bush2", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12410);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbush2_1118(int x, int y)
{
    return new (Backdrop::pool.create()) RMBush2_1118(x, y);
}
class RMBush1_1119 : public Backdrop
{
public:
    RMBush1_1119(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Bush1", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12411);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbush1_1119(int x, int y)
{
    return new (Backdrop::pool.create()) RMBush1_1119(x, y);
}
class Soil1_1120 : public Backdrop
{
public:
    Soil1_1120(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 1", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2430);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil1_1120(int x, int y)
{
    return new (Backdrop::pool.create()) Soil1_1120(x, y);
}
class RMBrick1_1121 : public Backdrop
{
public:
    RMBrick1_1121(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7192);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick1_1121(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick1_1121(x, y);
}
class RMBrick16_1122 : public Backdrop
{
public:
    RMBrick16_1122(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick16", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12400);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick16_1122(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick16_1122(x, y);
}
class RMBrick17_1123 : public Backdrop
{
public:
    RMBrick17_1123(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick17", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12401);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick17_1123(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick17_1123(x, y);
}
class RMBrickArch_1124 : public Backdrop
{
public:
    RMBrickArch_1124(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BrickArch", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12408);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrickarch_1124(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrickArch_1124(x, y);
}
class RMBrick4_1125 : public Backdrop
{
public:
    RMBrick4_1125(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6709);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick4_1125(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick4_1125(x, y);
}
class Soil5_1126 : public Backdrop
{
public:
    Soil5_1126(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 5", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3163);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil5_1126(int x, int y)
{
    return new (Backdrop::pool.create()) Soil5_1126(x, y);
}
class RMBrick18_1127 : public Backdrop
{
public:
    RMBrick18_1127(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick18", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12402);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrick18_1127(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick18_1127(x, y);
}
class RMBrick14_1128 : public Backdrop
{
public:
    RMBrick14_1128(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick14", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6772);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick14_1128(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick14_1128(x, y);
}
class RMBrick6_1129 : public Backdrop
{
public:
    RMBrick6_1129(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6391);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick6_1129(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick6_1129(x, y);
}
class RMBrick7_1130 : public Backdrop
{
public:
    RMBrick7_1130(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6568);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick7_1130(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick7_1130(x, y);
}
class RMBrick3_1131 : public Backdrop
{
public:
    RMBrick3_1131(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6771);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick3_1131(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick3_1131(x, y);
}
class RMGrass1_1132 : public Backdrop
{
public:
    RMGrass1_1132(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4039);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass1_1132(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass1_1132(x, y);
}
class Soil6_1133 : public Backdrop
{
public:
    Soil6_1133(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 6", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2444);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_soil6_1133(int x, int y)
{
    return new (Backdrop::pool.create()) Soil6_1133(x, y);
}
class RMBrickArch2_1134 : public Backdrop
{
public:
    RMBrickArch2_1134(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_BrickArch2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12409);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmbrickarch2_1134(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrickArch2_1134(x, y);
}
class RMBrick8_1135 : public Backdrop
{
public:
    RMBrick8_1135(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3244);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick8_1135(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick8_1135(x, y);
}
class RMBrick5_1136 : public Backdrop
{
public:
    RMBrick5_1136(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1953);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick5_1136(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick5_1136(x, y);
}
class RMBrick10_1137 : public Backdrop
{
public:
    RMBrick10_1137(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7202);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick10_1137(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick10_1137(x, y);
}
class RMBrick9_1138 : public Backdrop
{
public:
    RMBrick9_1138(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7203);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick9_1138(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick9_1138(x, y);
}
class RMPlant1_1139 : public Backdrop
{
public:
    RMPlant1_1139(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Plant1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2101);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmplant1_1139(int x, int y)
{
    return new (Backdrop::pool.create()) RMPlant1_1139(x, y);
}
class Soil2_1140 : public Backdrop
{
public:
    Soil2_1140(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 2", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12385);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil2_1140(int x, int y)
{
    return new (Backdrop::pool.create()) Soil2_1140(x, y);
}
class Soil3_1141 : public Backdrop
{
public:
    Soil3_1141(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 3", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2445);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil3_1141(int x, int y)
{
    return new (Backdrop::pool.create()) Soil3_1141(x, y);
}
class RMGrass4_1142 : public Backdrop
{
public:
    RMGrass4_1142(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass4", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4151);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass4_1142(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass4_1142(x, y);
}
class Soil8_1143 : public Backdrop
{
public:
    Soil8_1143(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 8", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3165);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil8_1143(int x, int y)
{
    return new (Backdrop::pool.create()) Soil8_1143(x, y);
}
class RMGrass3_1144 : public Backdrop
{
public:
    RMGrass3_1144(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass3", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4081);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass3_1144(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass3_1144(x, y);
}
class RMGrass2_1145 : public Backdrop
{
public:
    RMGrass2_1145(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4040);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass2_1145(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass2_1145(x, y);
}
class RMGrass5_1146 : public Backdrop
{
public:
    RMGrass5_1146(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass5", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4152);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmgrass5_1146(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass5_1146(x, y);
}
class RMGrass6_1147 : public Backdrop
{
public:
    RMGrass6_1147(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass6", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5163);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass6_1147(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass6_1147(x, y);
}
class Soil4_1148 : public Backdrop
{
public:
    Soil4_1148(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 4", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2443);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_soil4_1148(int x, int y)
{
    return new (Backdrop::pool.create()) Soil4_1148(x, y);
}
class RMGrass7_1149 : public Backdrop
{
public:
    RMGrass7_1149(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5183);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass7_1149(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass7_1149(x, y);
}
class RMGrass8_1150 : public Backdrop
{
public:
    RMGrass8_1150(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass8", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5190);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass8_1150(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass8_1150(x, y);
}
class RMGrass9_1151 : public Backdrop
{
public:
    RMGrass9_1151(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Grass9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5945);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmgrass9_1151(int x, int y)
{
    return new (Backdrop::pool.create()) RMGrass9_1151(x, y);
}
class RMLadder_1152 : public Backdrop
{
public:
    RMLadder_1152(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2115);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_rmladder_1152(int x, int y)
{
    return new (Backdrop::pool.create()) RMLadder_1152(x, y);
}
class SwitchBase_1153 : public Backdrop
{
public:
    SwitchBase_1153(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_Base", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2495);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchbase_1153(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchBase_1153(x, y);
}
class RMBrick15_1154 : public Backdrop
{
public:
    RMBrick15_1154(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick15", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6952);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmbrick15_1154(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick15_1154(x, y);
}
class SwitchWallBase_1155 : public Backdrop
{
public:
    SwitchWallBase_1155(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2105);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1155(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1155(x, y);
}
class Soil9_1156 : public Backdrop
{
public:
    Soil9_1156(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 9", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2121);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil9_1156(int x, int y)
{
    return new (Backdrop::pool.create()) Soil9_1156(x, y);
}
class Soil11_1157 : public Backdrop
{
public:
    Soil11_1157(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 11", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12383);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_soil11_1157(int x, int y)
{
    return new (Backdrop::pool.create()) Soil11_1157(x, y);
}
class RMUCurve_1158 : public Backdrop
{
public:
    RMUCurve_1158(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_UCurve", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(621);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmucurve_1158(int x, int y)
{
    return new (Backdrop::pool.create()) RMUCurve_1158(x, y);
}
class Soil10_1159 : public Backdrop
{
public:
    Soil10_1159(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 10", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3167);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil10_1159(int x, int y)
{
    return new (Backdrop::pool.create()) Soil10_1159(x, y);
}
class Soil12_1160 : public Backdrop
{
public:
    Soil12_1160(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Soil 12", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3161);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_soil12_1160(int x, int y)
{
    return new (Backdrop::pool.create()) Soil12_1160(x, y);
}
class RMBrick19_1161 : public Backdrop
{
public:
    RMBrick19_1161(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Brick19", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7199);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_rmbrick19_1161(int x, int y)
{
    return new (Backdrop::pool.create()) RMBrick19_1161(x, y);
}
class RMGateSign_1162 : public Backdrop
{
public:
    RMGateSign_1162(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_GateSign", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7805);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmgatesign_1162(int x, int y)
{
    return new (Backdrop::pool.create()) RMGateSign_1162(x, y);
}
class RMColumn9_1163 : public Backdrop
{
public:
    RMColumn9_1163(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Column9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2097);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmcolumn9_1163(int x, int y)
{
    return new (Backdrop::pool.create()) RMColumn9_1163(x, y);
}
class RMHandlebar_1164 : public Backdrop
{
public:
    RMHandlebar_1164(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5110);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmhandlebar_1164(int x, int y)
{
    return new (Backdrop::pool.create()) RMHandlebar_1164(x, y);
}
static Image* images_minibossrailing2_1165_0_0[1];
static Direction direction_minibossrailing2_1165_0_0 = {0, 50, 50, 0, 1, images_minibossrailing2_1165_0_0, 1};
static Animation anim_minibossrailing2_1165_0 = {&direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, NULL, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0, &direction_minibossrailing2_1165_0_0};
static Image* images_minibossrailing2_1165_4_0[6];
static Direction direction_minibossrailing2_1165_4_0 = {0, 50, 50, 0, 1, images_minibossrailing2_1165_4_0, 6};
static Animation anim_minibossrailing2_1165_4 = {&direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, NULL, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0, &direction_minibossrailing2_1165_4_0};
static Animation * anim_array_minibossrailing2_1165[5] = {&anim_minibossrailing2_1165_0, NULL, NULL, NULL, &anim_minibossrailing2_1165_4};
static Animations anim_minibossrailing2_1165 = {5, &anim_array_minibossrailing2_1165[0]};
static bool anim_minibossrailing2_1165_initialized;
class MinibossRailing2_1165 : public Active
{
public:
    MinibossRailing2_1165(int x, int y) : Active(x, y, MinibossRailing2_1165_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Railing 2", 18);
#endif
        this->animations = &anim_minibossrailing2_1165;
        if (!anim_minibossrailing2_1165_initialized) {
            anim_minibossrailing2_1165_initialized = true;
            images_minibossrailing2_1165_0_0[0] = get_internal_image(1471);
            images_minibossrailing2_1165_4_0[0] = get_internal_image(215);
            images_minibossrailing2_1165_4_0[1] = get_internal_image(2040);
            images_minibossrailing2_1165_4_0[2] = get_internal_image(215);
            images_minibossrailing2_1165_4_0[3] = get_internal_image(269);
            images_minibossrailing2_1165_4_0[4] = get_internal_image(270);
            images_minibossrailing2_1165_4_0[5] = get_internal_image(274);
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
FrameObject * create_minibossrailing2_1165(int x, int y)
{
    return new (Active::pool.create()) MinibossRailing2_1165(x, y);
}
static Image* images_gimmickfireballturretback_1166_0_0[1];
static Direction direction_gimmickfireballturretback_1166_0_0 = {0, 50, 50, 0, 1, images_gimmickfireballturretback_1166_0_0, 1};
static Animation anim_gimmickfireballturretback_1166_0 = {&direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, NULL, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0, &direction_gimmickfireballturretback_1166_0_0};
static Image* images_gimmickfireballturretback_1166_6_0[4];
static Direction direction_gimmickfireballturretback_1166_6_0 = {0, 25, 25, 0, 1, images_gimmickfireballturretback_1166_6_0, 4};
static Image* images_gimmickfireballturretback_1166_6_16[4];
static Direction direction_gimmickfireballturretback_1166_6_16 = {16, 25, 25, 0, 1, images_gimmickfireballturretback_1166_6_16, 4};
static Animation anim_gimmickfireballturretback_1166_6 = {&direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, NULL, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, &direction_gimmickfireballturretback_1166_6_16, NULL, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0, &direction_gimmickfireballturretback_1166_6_0};
static Image* images_gimmickfireballturretback_1166_10_0[5];
static Direction direction_gimmickfireballturretback_1166_10_0 = {0, 25, 25, 4, 3, images_gimmickfireballturretback_1166_10_0, 5};
static Image* images_gimmickfireballturretback_1166_10_16[5];
static Direction direction_gimmickfireballturretback_1166_10_16 = {16, 25, 25, 4, 3, images_gimmickfireballturretback_1166_10_16, 5};
static Animation anim_gimmickfireballturretback_1166_10 = {&direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, NULL, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, &direction_gimmickfireballturretback_1166_10_16, NULL, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0, &direction_gimmickfireballturretback_1166_10_0};
static Image* images_gimmickfireballturretback_1166_11_0[5];
static Direction direction_gimmickfireballturretback_1166_11_0 = {0, 25, 25, 4, 1, images_gimmickfireballturretback_1166_11_0, 5};
static Animation anim_gimmickfireballturretback_1166_11 = {&direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, NULL, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0, &direction_gimmickfireballturretback_1166_11_0};
static Animation * anim_array_gimmickfireballturretback_1166[12] = {&anim_gimmickfireballturretback_1166_0, NULL, NULL, NULL, NULL, NULL, &anim_gimmickfireballturretback_1166_6, NULL, NULL, NULL, &anim_gimmickfireballturretback_1166_10, &anim_gimmickfireballturretback_1166_11};
static Animations anim_gimmickfireballturretback_1166 = {12, &anim_array_gimmickfireballturretback_1166[0]};
static bool anim_gimmickfireballturretback_1166_initialized;
class GimmickFireballTurretBack_1166 : public Active
{
public:
    GimmickFireballTurretBack_1166(int x, int y) : Active(x, y, GimmickFireballTurretBack_1166_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FireballTurretBack", 26);
#endif
        this->animations = &anim_gimmickfireballturretback_1166;
        if (!anim_gimmickfireballturretback_1166_initialized) {
            anim_gimmickfireballturretback_1166_initialized = true;
            images_gimmickfireballturretback_1166_0_0[0] = get_internal_image(9178);
            images_gimmickfireballturretback_1166_6_0[0] = get_internal_image(9406);
            images_gimmickfireballturretback_1166_6_0[1] = get_internal_image(9431);
            images_gimmickfireballturretback_1166_6_0[2] = get_internal_image(9432);
            images_gimmickfireballturretback_1166_6_0[3] = get_internal_image(9434);
            images_gimmickfireballturretback_1166_6_16[0] = get_internal_image(9436);
            images_gimmickfireballturretback_1166_6_16[1] = get_internal_image(9439);
            images_gimmickfireballturretback_1166_6_16[2] = get_internal_image(9440);
            images_gimmickfireballturretback_1166_6_16[3] = get_internal_image(9441);
            images_gimmickfireballturretback_1166_10_0[0] = get_internal_image(9178);
            images_gimmickfireballturretback_1166_10_0[1] = get_internal_image(9179);
            images_gimmickfireballturretback_1166_10_0[2] = get_internal_image(9028);
            images_gimmickfireballturretback_1166_10_0[3] = get_internal_image(9181);
            images_gimmickfireballturretback_1166_10_0[4] = get_internal_image(9180);
            images_gimmickfireballturretback_1166_10_16[0] = get_internal_image(9182);
            images_gimmickfireballturretback_1166_10_16[1] = get_internal_image(9183);
            images_gimmickfireballturretback_1166_10_16[2] = get_internal_image(9184);
            images_gimmickfireballturretback_1166_10_16[3] = get_internal_image(9185);
            images_gimmickfireballturretback_1166_10_16[4] = get_internal_image(9248);
            images_gimmickfireballturretback_1166_11_0[0] = get_internal_image(9180);
            images_gimmickfireballturretback_1166_11_0[1] = get_internal_image(9181);
            images_gimmickfireballturretback_1166_11_0[2] = get_internal_image(9028);
            images_gimmickfireballturretback_1166_11_0[3] = get_internal_image(9179);
            images_gimmickfireballturretback_1166_11_0[4] = get_internal_image(9178);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
    }
};
FrameObject * create_gimmickfireballturretback_1166(int x, int y)
{
    return new (Active::pool.create()) GimmickFireballTurretBack_1166(x, y);
}
static Image* images_switchwallplate_1167_0_0[1];
static Direction direction_switchwallplate_1167_0_0 = {0, 50, 50, 0, 1, images_switchwallplate_1167_0_0, 1};
static Animation anim_switchwallplate_1167_0 = {&direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, NULL, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0, &direction_switchwallplate_1167_0_0};
static Animation * anim_array_switchwallplate_1167[1] = {&anim_switchwallplate_1167_0};
static Animations anim_switchwallplate_1167 = {1, &anim_array_switchwallplate_1167[0]};
static bool anim_switchwallplate_1167_initialized;
class SwitchWallPlate_1167 : public Active
{
public:
    SwitchWallPlate_1167(int x, int y) : Active(x, y, SwitchWallPlate_1167_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Switch_WallPlate", 16);
#endif
        this->animations = &anim_switchwallplate_1167;
        if (!anim_switchwallplate_1167_initialized) {
            anim_switchwallplate_1167_initialized = true;
            images_switchwallplate_1167_0_0[0] = get_internal_image(2120);
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
FrameObject * create_switchwallplate_1167(int x, int y)
{
    return new (Active::pool.create()) SwitchWallPlate_1167(x, y);
}
static Image* images_enemyhopper_1168_0_0[13];
static Direction direction_enemyhopper_1168_0_0 = {0, 20, 20, 8, -1, images_enemyhopper_1168_0_0, 13};
static Image* images_enemyhopper_1168_0_7[13];
static Direction direction_enemyhopper_1168_0_7 = {7, 35, 35, 0, 1, images_enemyhopper_1168_0_7, 13};
static Image* images_enemyhopper_1168_0_8[13];
static Direction direction_enemyhopper_1168_0_8 = {8, 50, 50, 0, 1, images_enemyhopper_1168_0_8, 13};
static Image* images_enemyhopper_1168_0_9[13];
static Direction direction_enemyhopper_1168_0_9 = {9, 35, 35, 0, 1, images_enemyhopper_1168_0_9, 13};
static Image* images_enemyhopper_1168_0_10[13];
static Direction direction_enemyhopper_1168_0_10 = {10, 50, 50, 0, 1, images_enemyhopper_1168_0_10, 13};
static Image* images_enemyhopper_1168_0_16[13];
static Direction direction_enemyhopper_1168_0_16 = {16, 20, 20, 8, -1, images_enemyhopper_1168_0_16, 13};
static Animation anim_enemyhopper_1168_0 = {&direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_7, &direction_enemyhopper_1168_0_7, &direction_enemyhopper_1168_0_7, &direction_enemyhopper_1168_0_7, &direction_enemyhopper_1168_0_8, &direction_enemyhopper_1168_0_9, &direction_enemyhopper_1168_0_10, &direction_enemyhopper_1168_0_10, &direction_enemyhopper_1168_0_10, NULL, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, &direction_enemyhopper_1168_0_16, NULL, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0, &direction_enemyhopper_1168_0_0};
static Image* images_enemyhopper_1168_7_0[10];
static Direction direction_enemyhopper_1168_7_0 = {0, 40, 40, 9, 1, images_enemyhopper_1168_7_0, 10};
static Image* images_enemyhopper_1168_7_7[10];
static Direction direction_enemyhopper_1168_7_7 = {7, 35, 35, 0, 1, images_enemyhopper_1168_7_7, 10};
static Image* images_enemyhopper_1168_7_8[10];
static Direction direction_enemyhopper_1168_7_8 = {8, 50, 50, 0, 1, images_enemyhopper_1168_7_8, 10};
static Image* images_enemyhopper_1168_7_9[10];
static Direction direction_enemyhopper_1168_7_9 = {9, 35, 35, 0, 1, images_enemyhopper_1168_7_9, 10};
static Image* images_enemyhopper_1168_7_16[10];
static Direction direction_enemyhopper_1168_7_16 = {16, 40, 40, 9, 1, images_enemyhopper_1168_7_16, 10};
static Animation anim_enemyhopper_1168_7 = {&direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_7, &direction_enemyhopper_1168_7_7, &direction_enemyhopper_1168_7_7, &direction_enemyhopper_1168_7_7, &direction_enemyhopper_1168_7_8, &direction_enemyhopper_1168_7_9, &direction_enemyhopper_1168_7_9, &direction_enemyhopper_1168_7_9, &direction_enemyhopper_1168_7_9, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, &direction_enemyhopper_1168_7_16, NULL, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0, &direction_enemyhopper_1168_7_0};
static Image* images_enemyhopper_1168_8_0[13];
static Direction direction_enemyhopper_1168_8_0 = {0, 30, 30, 12, -1, images_enemyhopper_1168_8_0, 13};
static Image* images_enemyhopper_1168_8_7[13];
static Direction direction_enemyhopper_1168_8_7 = {7, 35, 35, 0, 1, images_enemyhopper_1168_8_7, 13};
static Image* images_enemyhopper_1168_8_8[13];
static Direction direction_enemyhopper_1168_8_8 = {8, 50, 50, 0, 1, images_enemyhopper_1168_8_8, 13};
static Image* images_enemyhopper_1168_8_9[13];
static Direction direction_enemyhopper_1168_8_9 = {9, 35, 35, 0, 1, images_enemyhopper_1168_8_9, 13};
static Image* images_enemyhopper_1168_8_16[13];
static Direction direction_enemyhopper_1168_8_16 = {16, 30, 30, 12, -1, images_enemyhopper_1168_8_16, 13};
static Animation anim_enemyhopper_1168_8 = {&direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_7, &direction_enemyhopper_1168_8_7, &direction_enemyhopper_1168_8_7, &direction_enemyhopper_1168_8_7, &direction_enemyhopper_1168_8_8, &direction_enemyhopper_1168_8_9, &direction_enemyhopper_1168_8_9, &direction_enemyhopper_1168_8_9, &direction_enemyhopper_1168_8_9, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, &direction_enemyhopper_1168_8_16, NULL, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0, &direction_enemyhopper_1168_8_0};
static Image* images_enemyhopper_1168_9_0[1];
static Direction direction_enemyhopper_1168_9_0 = {0, 50, 50, 0, -1, images_enemyhopper_1168_9_0, 1};
static Image* images_enemyhopper_1168_9_16[1];
static Direction direction_enemyhopper_1168_9_16 = {16, 50, 50, 0, -1, images_enemyhopper_1168_9_16, 1};
static Animation anim_enemyhopper_1168_9 = {&direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, NULL, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, &direction_enemyhopper_1168_9_16, NULL, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0, &direction_enemyhopper_1168_9_0};
static Image* images_enemyhopper_1168_10_0[7];
static Direction direction_enemyhopper_1168_10_0 = {0, 40, 40, 6, 1, images_enemyhopper_1168_10_0, 7};
static Image* images_enemyhopper_1168_10_7[7];
static Direction direction_enemyhopper_1168_10_7 = {7, 50, 50, 0, 1, images_enemyhopper_1168_10_7, 7};
static Image* images_enemyhopper_1168_10_8[7];
static Direction direction_enemyhopper_1168_10_8 = {8, 50, 50, 0, 1, images_enemyhopper_1168_10_8, 7};
static Image* images_enemyhopper_1168_10_9[7];
static Direction direction_enemyhopper_1168_10_9 = {9, 35, 35, 0, -1, images_enemyhopper_1168_10_9, 7};
static Image* images_enemyhopper_1168_10_16[7];
static Direction direction_enemyhopper_1168_10_16 = {16, 40, 40, 6, 1, images_enemyhopper_1168_10_16, 7};
static Animation anim_enemyhopper_1168_10 = {&direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_7, &direction_enemyhopper_1168_10_7, &direction_enemyhopper_1168_10_7, &direction_enemyhopper_1168_10_7, &direction_enemyhopper_1168_10_8, &direction_enemyhopper_1168_10_9, &direction_enemyhopper_1168_10_9, &direction_enemyhopper_1168_10_9, &direction_enemyhopper_1168_10_9, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, &direction_enemyhopper_1168_10_16, NULL, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0, &direction_enemyhopper_1168_10_0};
static Animation * anim_array_enemyhopper_1168[11] = {&anim_enemyhopper_1168_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyhopper_1168_7, &anim_enemyhopper_1168_8, &anim_enemyhopper_1168_9, &anim_enemyhopper_1168_10};
static Animations anim_enemyhopper_1168 = {11, &anim_array_enemyhopper_1168[0]};
static bool anim_enemyhopper_1168_initialized;
class EnemyHopper_1168 : public Active
{
public:
    EnemyHopper_1168(int x, int y) : Active(x, y, EnemyHopper_1168_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Hopper", 12);
#endif
        this->animations = &anim_enemyhopper_1168;
        if (!anim_enemyhopper_1168_initialized) {
            anim_enemyhopper_1168_initialized = true;
            images_enemyhopper_1168_0_0[0] = get_internal_image(873);
            images_enemyhopper_1168_0_0[1] = get_internal_image(6048);
            images_enemyhopper_1168_0_0[2] = get_internal_image(6126);
            images_enemyhopper_1168_0_0[3] = get_internal_image(6125);
            images_enemyhopper_1168_0_0[4] = get_internal_image(6039);
            images_enemyhopper_1168_0_0[5] = get_internal_image(6033);
            images_enemyhopper_1168_0_0[6] = get_internal_image(6040);
            images_enemyhopper_1168_0_0[7] = get_internal_image(168);
            images_enemyhopper_1168_0_0[8] = get_internal_image(6170);
            images_enemyhopper_1168_0_0[9] = get_internal_image(6032);
            images_enemyhopper_1168_0_0[10] = get_internal_image(873);
            images_enemyhopper_1168_0_0[11] = get_internal_image(866);
            images_enemyhopper_1168_0_0[12] = get_internal_image(876);
            images_enemyhopper_1168_0_7[0] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[1] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[2] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[3] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[4] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[5] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[6] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[7] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[8] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[9] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[10] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[11] = get_internal_image(2133);
            images_enemyhopper_1168_0_7[12] = get_internal_image(2133);
            images_enemyhopper_1168_0_8[0] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[1] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[2] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[3] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[4] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[5] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[6] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[7] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[8] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[9] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[10] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[11] = get_internal_image(2124);
            images_enemyhopper_1168_0_8[12] = get_internal_image(2124);
            images_enemyhopper_1168_0_9[0] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[1] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[2] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[3] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[4] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[5] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[6] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[7] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[8] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[9] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[10] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[11] = get_internal_image(2130);
            images_enemyhopper_1168_0_9[12] = get_internal_image(2130);
            images_enemyhopper_1168_0_10[0] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[1] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[2] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[3] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[4] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[5] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[6] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[7] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[8] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[9] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[10] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[11] = get_internal_image(2135);
            images_enemyhopper_1168_0_10[12] = get_internal_image(2135);
            images_enemyhopper_1168_0_16[0] = get_internal_image(6047);
            images_enemyhopper_1168_0_16[1] = get_internal_image(6171);
            images_enemyhopper_1168_0_16[2] = get_internal_image(6172);
            images_enemyhopper_1168_0_16[3] = get_internal_image(6173);
            images_enemyhopper_1168_0_16[4] = get_internal_image(6175);
            images_enemyhopper_1168_0_16[5] = get_internal_image(6176);
            images_enemyhopper_1168_0_16[6] = get_internal_image(6177);
            images_enemyhopper_1168_0_16[7] = get_internal_image(6178);
            images_enemyhopper_1168_0_16[8] = get_internal_image(6179);
            images_enemyhopper_1168_0_16[9] = get_internal_image(6180);
            images_enemyhopper_1168_0_16[10] = get_internal_image(6047);
            images_enemyhopper_1168_0_16[11] = get_internal_image(6181);
            images_enemyhopper_1168_0_16[12] = get_internal_image(6182);
            images_enemyhopper_1168_7_0[0] = get_internal_image(6185);
            images_enemyhopper_1168_7_0[1] = get_internal_image(6186);
            images_enemyhopper_1168_7_0[2] = get_internal_image(6188);
            images_enemyhopper_1168_7_0[3] = get_internal_image(6193);
            images_enemyhopper_1168_7_0[4] = get_internal_image(6192);
            images_enemyhopper_1168_7_0[5] = get_internal_image(6194);
            images_enemyhopper_1168_7_0[6] = get_internal_image(6190);
            images_enemyhopper_1168_7_0[7] = get_internal_image(6194);
            images_enemyhopper_1168_7_0[8] = get_internal_image(6193);
            images_enemyhopper_1168_7_0[9] = get_internal_image(6185);
            images_enemyhopper_1168_7_7[0] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[1] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[2] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[3] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[4] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[5] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[6] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[7] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[8] = get_internal_image(2133);
            images_enemyhopper_1168_7_7[9] = get_internal_image(2133);
            images_enemyhopper_1168_7_8[0] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[1] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[2] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[3] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[4] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[5] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[6] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[7] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[8] = get_internal_image(2124);
            images_enemyhopper_1168_7_8[9] = get_internal_image(2124);
            images_enemyhopper_1168_7_9[0] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[1] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[2] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[3] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[4] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[5] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[6] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[7] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[8] = get_internal_image(2130);
            images_enemyhopper_1168_7_9[9] = get_internal_image(2130);
            images_enemyhopper_1168_7_16[0] = get_internal_image(6202);
            images_enemyhopper_1168_7_16[1] = get_internal_image(6201);
            images_enemyhopper_1168_7_16[2] = get_internal_image(6198);
            images_enemyhopper_1168_7_16[3] = get_internal_image(6199);
            images_enemyhopper_1168_7_16[4] = get_internal_image(6200);
            images_enemyhopper_1168_7_16[5] = get_internal_image(6209);
            images_enemyhopper_1168_7_16[6] = get_internal_image(6210);
            images_enemyhopper_1168_7_16[7] = get_internal_image(6209);
            images_enemyhopper_1168_7_16[8] = get_internal_image(6199);
            images_enemyhopper_1168_7_16[9] = get_internal_image(6202);
            images_enemyhopper_1168_8_0[0] = get_internal_image(6185);
            images_enemyhopper_1168_8_0[1] = get_internal_image(6187);
            images_enemyhopper_1168_8_0[2] = get_internal_image(6189);
            images_enemyhopper_1168_8_0[3] = get_internal_image(6191);
            images_enemyhopper_1168_8_0[4] = get_internal_image(6195);
            images_enemyhopper_1168_8_0[5] = get_internal_image(6196);
            images_enemyhopper_1168_8_0[6] = get_internal_image(6197);
            images_enemyhopper_1168_8_0[7] = get_internal_image(6196);
            images_enemyhopper_1168_8_0[8] = get_internal_image(6195);
            images_enemyhopper_1168_8_0[9] = get_internal_image(6191);
            images_enemyhopper_1168_8_0[10] = get_internal_image(6189);
            images_enemyhopper_1168_8_0[11] = get_internal_image(6187);
            images_enemyhopper_1168_8_0[12] = get_internal_image(6185);
            images_enemyhopper_1168_8_7[0] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[1] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[2] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[3] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[4] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[5] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[6] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[7] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[8] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[9] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[10] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[11] = get_internal_image(2133);
            images_enemyhopper_1168_8_7[12] = get_internal_image(2133);
            images_enemyhopper_1168_8_8[0] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[1] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[2] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[3] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[4] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[5] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[6] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[7] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[8] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[9] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[10] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[11] = get_internal_image(2124);
            images_enemyhopper_1168_8_8[12] = get_internal_image(2124);
            images_enemyhopper_1168_8_9[0] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[1] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[2] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[3] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[4] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[5] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[6] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[7] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[8] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[9] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[10] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[11] = get_internal_image(2130);
            images_enemyhopper_1168_8_9[12] = get_internal_image(2130);
            images_enemyhopper_1168_8_16[0] = get_internal_image(6202);
            images_enemyhopper_1168_8_16[1] = get_internal_image(6203);
            images_enemyhopper_1168_8_16[2] = get_internal_image(6204);
            images_enemyhopper_1168_8_16[3] = get_internal_image(6205);
            images_enemyhopper_1168_8_16[4] = get_internal_image(6206);
            images_enemyhopper_1168_8_16[5] = get_internal_image(6207);
            images_enemyhopper_1168_8_16[6] = get_internal_image(6208);
            images_enemyhopper_1168_8_16[7] = get_internal_image(6207);
            images_enemyhopper_1168_8_16[8] = get_internal_image(6206);
            images_enemyhopper_1168_8_16[9] = get_internal_image(6205);
            images_enemyhopper_1168_8_16[10] = get_internal_image(6204);
            images_enemyhopper_1168_8_16[11] = get_internal_image(6203);
            images_enemyhopper_1168_8_16[12] = get_internal_image(6202);
            images_enemyhopper_1168_9_0[0] = get_internal_image(6183);
            images_enemyhopper_1168_9_16[0] = get_internal_image(6184);
            images_enemyhopper_1168_10_0[0] = get_internal_image(6188);
            images_enemyhopper_1168_10_0[1] = get_internal_image(6193);
            images_enemyhopper_1168_10_0[2] = get_internal_image(6192);
            images_enemyhopper_1168_10_0[3] = get_internal_image(6193);
            images_enemyhopper_1168_10_0[4] = get_internal_image(6188);
            images_enemyhopper_1168_10_0[5] = get_internal_image(6186);
            images_enemyhopper_1168_10_0[6] = get_internal_image(6185);
            images_enemyhopper_1168_10_7[0] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[1] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[2] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[3] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[4] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[5] = get_internal_image(2133);
            images_enemyhopper_1168_10_7[6] = get_internal_image(2133);
            images_enemyhopper_1168_10_8[0] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[1] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[2] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[3] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[4] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[5] = get_internal_image(2124);
            images_enemyhopper_1168_10_8[6] = get_internal_image(2124);
            images_enemyhopper_1168_10_9[0] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[1] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[2] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[3] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[4] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[5] = get_internal_image(2130);
            images_enemyhopper_1168_10_9[6] = get_internal_image(2130);
            images_enemyhopper_1168_10_16[0] = get_internal_image(6198);
            images_enemyhopper_1168_10_16[1] = get_internal_image(6199);
            images_enemyhopper_1168_10_16[2] = get_internal_image(6200);
            images_enemyhopper_1168_10_16[3] = get_internal_image(6199);
            images_enemyhopper_1168_10_16[4] = get_internal_image(6198);
            images_enemyhopper_1168_10_16[5] = get_internal_image(6201);
            images_enemyhopper_1168_10_16[6] = get_internal_image(6202);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(14);
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_enemyhopper_1168(int x, int y)
{
    return new (Active::pool.create()) EnemyHopper_1168(x, y);
}
static Image* images_switchcolumnfront1_1169_0_0[1];
static Direction direction_switchcolumnfront1_1169_0_0 = {0, 50, 50, 0, 1, images_switchcolumnfront1_1169_0_0, 1};
static Animation anim_switchcolumnfront1_1169_0 = {&direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, NULL, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0, &direction_switchcolumnfront1_1169_0_0};
static Animation * anim_array_switchcolumnfront1_1169[1] = {&anim_switchcolumnfront1_1169_0};
static Animations anim_switchcolumnfront1_1169 = {1, &anim_array_switchcolumnfront1_1169[0]};
static bool anim_switchcolumnfront1_1169_initialized;
class SwitchColumnFront1_1169 : public Active
{
public:
    SwitchColumnFront1_1169(int x, int y) : Active(x, y, SwitchColumnFront1_1169_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Switch_ColumnFront 1", 20);
#endif
        set_visible(false);
        this->animations = &anim_switchcolumnfront1_1169;
        if (!anim_switchcolumnfront1_1169_initialized) {
            anim_switchcolumnfront1_1169_initialized = true;
            images_switchcolumnfront1_1169_0_0[0] = get_internal_image(42);
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
FrameObject * create_switchcolumnfront1_1169(int x, int y)
{
    return new (Active::pool.create()) SwitchColumnFront1_1169(x, y);
}
static Image* images_gimmickrollingplatform2_1170_0_0[1];
static Direction direction_gimmickrollingplatform2_1170_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingplatform2_1170_0_0, 1};
static Animation anim_gimmickrollingplatform2_1170_0 = {&direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, NULL, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0, &direction_gimmickrollingplatform2_1170_0_0};
static Animation * anim_array_gimmickrollingplatform2_1170[1] = {&anim_gimmickrollingplatform2_1170_0};
static Animations anim_gimmickrollingplatform2_1170 = {1, &anim_array_gimmickrollingplatform2_1170[0]};
static bool anim_gimmickrollingplatform2_1170_initialized;
class GimmickRollingPlatform2_1170 : public Active
{
public:
    GimmickRollingPlatform2_1170(int x, int y) : Active(x, y, GimmickRollingPlatform2_1170_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_RollingPlatform 2", 25);
#endif
        this->animations = &anim_gimmickrollingplatform2_1170;
        if (!anim_gimmickrollingplatform2_1170_initialized) {
            anim_gimmickrollingplatform2_1170_initialized = true;
            images_gimmickrollingplatform2_1170_0_0[0] = get_internal_image(7784);
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
FrameObject * create_gimmickrollingplatform2_1170(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingPlatform2_1170(x, y);
}
static Image* images_gimmickrollingplatform_1171_0_0[1];
static Direction direction_gimmickrollingplatform_1171_0_0 = {0, 50, 50, 0, 1, images_gimmickrollingplatform_1171_0_0, 1};
static Animation anim_gimmickrollingplatform_1171_0 = {&direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, NULL, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0, &direction_gimmickrollingplatform_1171_0_0};
static Animation * anim_array_gimmickrollingplatform_1171[1] = {&anim_gimmickrollingplatform_1171_0};
static Animations anim_gimmickrollingplatform_1171 = {1, &anim_array_gimmickrollingplatform_1171[0]};
static bool anim_gimmickrollingplatform_1171_initialized;
class GimmickRollingPlatform_1171 : public Active
{
public:
    GimmickRollingPlatform_1171(int x, int y) : Active(x, y, GimmickRollingPlatform_1171_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Gimmick_RollingPlatform", 23);
#endif
        this->animations = &anim_gimmickrollingplatform_1171;
        if (!anim_gimmickrollingplatform_1171_initialized) {
            anim_gimmickrollingplatform_1171_initialized = true;
            images_gimmickrollingplatform_1171_0_0[0] = get_internal_image(7206);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 180);
        alterables->values.set(2, 192);
        alterables->values.set(4, 180);
        alterables->values.set(6, -192);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickrollingplatform_1171(int x, int y)
{
    return new (Active::pool.create()) GimmickRollingPlatform_1171(x, y);
}
static Image* images_hazardspikesup_1172_0_0[1];
static Direction direction_hazardspikesup_1172_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_1172_0_0, 1};
static Animation anim_hazardspikesup_1172_0 = {&direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, NULL, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0, &direction_hazardspikesup_1172_0_0};
static Animation * anim_array_hazardspikesup_1172[1] = {&anim_hazardspikesup_1172_0};
static Animations anim_hazardspikesup_1172 = {1, &anim_array_hazardspikesup_1172[0]};
static bool anim_hazardspikesup_1172_initialized;
class HazardSpikesUp_1172 : public Active
{
public:
    HazardSpikesUp_1172(int x, int y) : Active(x, y, HazardSpikesUp_1172_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_1172;
        if (!anim_hazardspikesup_1172_initialized) {
            anim_hazardspikesup_1172_initialized = true;
            images_hazardspikesup_1172_0_0[0] = get_internal_image(7141);
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
FrameObject * create_hazardspikesup_1172(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_1172(x, y);
}
static Image* images_gimmickhangingmovingbar_1173_0_0[4];
static Direction direction_gimmickhangingmovingbar_1173_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingbar_1173_0_0, 4};
static Animation anim_gimmickhangingmovingbar_1173_0 = {&direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, NULL, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0, &direction_gimmickhangingmovingbar_1173_0_0};
static Animation * anim_array_gimmickhangingmovingbar_1173[1] = {&anim_gimmickhangingmovingbar_1173_0};
static Animations anim_gimmickhangingmovingbar_1173 = {1, &anim_array_gimmickhangingmovingbar_1173[0]};
static bool anim_gimmickhangingmovingbar_1173_initialized;
class GimmickHangingMovingBar_1173 : public Active
{
public:
    GimmickHangingMovingBar_1173(int x, int y) : Active(x, y, GimmickHangingMovingBar_1173_type)
    {
        // qualifiers: 20
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar", 25);
#endif
        this->animations = &anim_gimmickhangingmovingbar_1173;
        if (!anim_gimmickhangingmovingbar_1173_initialized) {
            anim_gimmickhangingmovingbar_1173_initialized = true;
            images_gimmickhangingmovingbar_1173_0_0[0] = get_internal_image(2091);
            images_gimmickhangingmovingbar_1173_0_0[1] = get_internal_image(3235);
            images_gimmickhangingmovingbar_1173_0_0[2] = get_internal_image(12419);
            images_gimmickhangingmovingbar_1173_0_0[3] = get_internal_image(12429);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 100);
        alterables->values.set(5, 1);
        alterables->values.set(6, 150);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingbar_1173(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar_1173(x, y);
}
static Image* images_gimmickhangingmovingsensor_1174_0_0[1];
static Direction direction_gimmickhangingmovingsensor_1174_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_1174_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_1174_0 = {&direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, NULL, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0, &direction_gimmickhangingmovingsensor_1174_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_1174[1] = {&anim_gimmickhangingmovingsensor_1174_0};
static Animations anim_gimmickhangingmovingsensor_1174 = {1, &anim_array_gimmickhangingmovingsensor_1174[0]};
static bool anim_gimmickhangingmovingsensor_1174_initialized;
class GimmickHangingMovingSensor_1174 : public Active
{
public:
    GimmickHangingMovingSensor_1174(int x, int y) : Active(x, y, GimmickHangingMovingSensor_1174_type)
    {
        // qualifiers: 20, 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_1174;
        if (!anim_gimmickhangingmovingsensor_1174_initialized) {
            anim_gimmickhangingmovingsensor_1174_initialized = true;
            images_gimmickhangingmovingsensor_1174_0_0[0] = get_internal_image(614);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 100);
        alterables->values.set(5, 1);
        alterables->values.set(6, 150);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_gimmickhangingmovingsensor_1174(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_1174(x, y);
}
static Image* images_gimmickspinball_1175_0_0[1];
static Direction direction_gimmickspinball_1175_0_0 = {0, 50, 50, 0, 1, images_gimmickspinball_1175_0_0, 1};
static Animation anim_gimmickspinball_1175_0 = {&direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, NULL, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0, &direction_gimmickspinball_1175_0_0};
static Animation * anim_array_gimmickspinball_1175[1] = {&anim_gimmickspinball_1175_0};
static Animations anim_gimmickspinball_1175 = {1, &anim_array_gimmickspinball_1175[0]};
static bool anim_gimmickspinball_1175_initialized;
class GimmickSpinball_1175 : public Active
{
public:
    GimmickSpinball_1175(int x, int y) : Active(x, y, GimmickSpinball_1175_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Spinball", 16);
#endif
        this->animations = &anim_gimmickspinball_1175;
        if (!anim_gimmickspinball_1175_initialized) {
            anim_gimmickspinball_1175_initialized = true;
            images_gimmickspinball_1175_0_0[0] = get_internal_image(13084);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 100);
    }
};
FrameObject * create_gimmickspinball_1175(int x, int y)
{
    return new (Active::pool.create()) GimmickSpinball_1175(x, y);
}
static Image* images_enemyextractorbase_1176_0_0[12];
static Direction direction_enemyextractorbase_1176_0_0 = {0, 25, 25, 0, -1, images_enemyextractorbase_1176_0_0, 12};
static Animation anim_enemyextractorbase_1176_0 = {&direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, NULL, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0, &direction_enemyextractorbase_1176_0_0};
static Image* images_enemyextractorbase_1176_6_0[4];
static Direction direction_enemyextractorbase_1176_6_0 = {0, 50, 50, 3, 4, images_enemyextractorbase_1176_6_0, 4};
static Image* images_enemyextractorbase_1176_6_16[7];
static Direction direction_enemyextractorbase_1176_6_16 = {16, 50, 50, 0, 1, images_enemyextractorbase_1176_6_16, 7};
static Animation anim_enemyextractorbase_1176_6 = {&direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, NULL, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, &direction_enemyextractorbase_1176_6_16, NULL, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0, &direction_enemyextractorbase_1176_6_0};
static Image* images_enemyextractorbase_1176_7_0[3];
static Direction direction_enemyextractorbase_1176_7_0 = {0, 100, 100, 0, -1, images_enemyextractorbase_1176_7_0, 3};
static Image* images_enemyextractorbase_1176_7_16[7];
static Direction direction_enemyextractorbase_1176_7_16 = {16, 50, 50, 5, -1, images_enemyextractorbase_1176_7_16, 7};
static Animation anim_enemyextractorbase_1176_7 = {&direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, NULL, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, &direction_enemyextractorbase_1176_7_16, NULL, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0, &direction_enemyextractorbase_1176_7_0};
static Image* images_enemyextractorbase_1176_8_0[7];
static Direction direction_enemyextractorbase_1176_8_0 = {0, 25, 25, 6, -1, images_enemyextractorbase_1176_8_0, 7};
static Animation anim_enemyextractorbase_1176_8 = {&direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, NULL, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0, &direction_enemyextractorbase_1176_8_0};
static Image* images_enemyextractorbase_1176_9_0[3];
static Direction direction_enemyextractorbase_1176_9_0 = {0, 50, 50, 0, 1, images_enemyextractorbase_1176_9_0, 3};
static Animation anim_enemyextractorbase_1176_9 = {&direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, NULL, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0, &direction_enemyextractorbase_1176_9_0};
static Image* images_enemyextractorbase_1176_10_0[21];
static Direction direction_enemyextractorbase_1176_10_0 = {0, 50, 50, 17, -1, images_enemyextractorbase_1176_10_0, 21};
static Animation anim_enemyextractorbase_1176_10 = {&direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, NULL, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0, &direction_enemyextractorbase_1176_10_0};
static Image* images_enemyextractorbase_1176_11_0[5];
static Direction direction_enemyextractorbase_1176_11_0 = {0, 25, 25, 0, 1, images_enemyextractorbase_1176_11_0, 5};
static Animation anim_enemyextractorbase_1176_11 = {&direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, NULL, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0, &direction_enemyextractorbase_1176_11_0};
static Animation * anim_array_enemyextractorbase_1176[12] = {&anim_enemyextractorbase_1176_0, NULL, NULL, NULL, NULL, NULL, &anim_enemyextractorbase_1176_6, &anim_enemyextractorbase_1176_7, &anim_enemyextractorbase_1176_8, &anim_enemyextractorbase_1176_9, &anim_enemyextractorbase_1176_10, &anim_enemyextractorbase_1176_11};
static Animations anim_enemyextractorbase_1176 = {12, &anim_array_enemyextractorbase_1176[0]};
static bool anim_enemyextractorbase_1176_initialized;
class EnemyExtractorBase_1176 : public Active
{
public:
    EnemyExtractorBase_1176(int x, int y) : Active(x, y, EnemyExtractorBase_1176_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_ExtractorBase", 19);
#endif
        this->animations = &anim_enemyextractorbase_1176;
        if (!anim_enemyextractorbase_1176_initialized) {
            anim_enemyextractorbase_1176_initialized = true;
            images_enemyextractorbase_1176_0_0[0] = get_internal_image(6023);
            images_enemyextractorbase_1176_0_0[1] = get_internal_image(2215);
            images_enemyextractorbase_1176_0_0[2] = get_internal_image(2199);
            images_enemyextractorbase_1176_0_0[3] = get_internal_image(2195);
            images_enemyextractorbase_1176_0_0[4] = get_internal_image(6023);
            images_enemyextractorbase_1176_0_0[5] = get_internal_image(2214);
            images_enemyextractorbase_1176_0_0[6] = get_internal_image(2208);
            images_enemyextractorbase_1176_0_0[7] = get_internal_image(2209);
            images_enemyextractorbase_1176_0_0[8] = get_internal_image(2207);
            images_enemyextractorbase_1176_0_0[9] = get_internal_image(2210);
            images_enemyextractorbase_1176_0_0[10] = get_internal_image(2211);
            images_enemyextractorbase_1176_0_0[11] = get_internal_image(2213);
            images_enemyextractorbase_1176_6_0[0] = get_internal_image(2206);
            images_enemyextractorbase_1176_6_0[1] = get_internal_image(2206);
            images_enemyextractorbase_1176_6_0[2] = get_internal_image(2196);
            images_enemyextractorbase_1176_6_0[3] = get_internal_image(6023);
            images_enemyextractorbase_1176_6_16[0] = get_internal_image(2221);
            images_enemyextractorbase_1176_6_16[1] = get_internal_image(2221);
            images_enemyextractorbase_1176_6_16[2] = get_internal_image(2220);
            images_enemyextractorbase_1176_6_16[3] = get_internal_image(2219);
            images_enemyextractorbase_1176_6_16[4] = get_internal_image(2218);
            images_enemyextractorbase_1176_6_16[5] = get_internal_image(2198);
            images_enemyextractorbase_1176_6_16[6] = get_internal_image(2222);
            images_enemyextractorbase_1176_7_0[0] = get_internal_image(2242);
            images_enemyextractorbase_1176_7_0[1] = get_internal_image(2217);
            images_enemyextractorbase_1176_7_0[2] = get_internal_image(2216);
            images_enemyextractorbase_1176_7_16[0] = get_internal_image(2223);
            images_enemyextractorbase_1176_7_16[1] = get_internal_image(2222);
            images_enemyextractorbase_1176_7_16[2] = get_internal_image(2198);
            images_enemyextractorbase_1176_7_16[3] = get_internal_image(2218);
            images_enemyextractorbase_1176_7_16[4] = get_internal_image(2226);
            images_enemyextractorbase_1176_7_16[5] = get_internal_image(2224);
            images_enemyextractorbase_1176_7_16[6] = get_internal_image(2219);
            images_enemyextractorbase_1176_8_0[0] = get_internal_image(12498);
            images_enemyextractorbase_1176_8_0[1] = get_internal_image(12498);
            images_enemyextractorbase_1176_8_0[2] = get_internal_image(3186);
            images_enemyextractorbase_1176_8_0[3] = get_internal_image(3180);
            images_enemyextractorbase_1176_8_0[4] = get_internal_image(2251);
            images_enemyextractorbase_1176_8_0[5] = get_internal_image(2252);
            images_enemyextractorbase_1176_8_0[6] = get_internal_image(2251);
            images_enemyextractorbase_1176_9_0[0] = get_internal_image(2270);
            images_enemyextractorbase_1176_9_0[1] = get_internal_image(5327);
            images_enemyextractorbase_1176_9_0[2] = get_internal_image(6023);
            images_enemyextractorbase_1176_10_0[0] = get_internal_image(6023);
            images_enemyextractorbase_1176_10_0[1] = get_internal_image(6023);
            images_enemyextractorbase_1176_10_0[2] = get_internal_image(2212);
            images_enemyextractorbase_1176_10_0[3] = get_internal_image(12502);
            images_enemyextractorbase_1176_10_0[4] = get_internal_image(3186);
            images_enemyextractorbase_1176_10_0[5] = get_internal_image(12503);
            images_enemyextractorbase_1176_10_0[6] = get_internal_image(12498);
            images_enemyextractorbase_1176_10_0[7] = get_internal_image(12504);
            images_enemyextractorbase_1176_10_0[8] = get_internal_image(12499);
            images_enemyextractorbase_1176_10_0[9] = get_internal_image(12499);
            images_enemyextractorbase_1176_10_0[10] = get_internal_image(12499);
            images_enemyextractorbase_1176_10_0[11] = get_internal_image(12499);
            images_enemyextractorbase_1176_10_0[12] = get_internal_image(12498);
            images_enemyextractorbase_1176_10_0[13] = get_internal_image(3186);
            images_enemyextractorbase_1176_10_0[14] = get_internal_image(2212);
            images_enemyextractorbase_1176_10_0[15] = get_internal_image(2248);
            images_enemyextractorbase_1176_10_0[16] = get_internal_image(2244);
            images_enemyextractorbase_1176_10_0[17] = get_internal_image(2249);
            images_enemyextractorbase_1176_10_0[18] = get_internal_image(2243);
            images_enemyextractorbase_1176_10_0[19] = get_internal_image(2246);
            images_enemyextractorbase_1176_10_0[20] = get_internal_image(2243);
            images_enemyextractorbase_1176_11_0[0] = get_internal_image(2251);
            images_enemyextractorbase_1176_11_0[1] = get_internal_image(2252);
            images_enemyextractorbase_1176_11_0[2] = get_internal_image(12506);
            images_enemyextractorbase_1176_11_0[3] = get_internal_image(3180);
            images_enemyextractorbase_1176_11_0[4] = get_internal_image(2212);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 40);
    }
};
FrameObject * create_enemyextractorbase_1176(int x, int y)
{
    return new (Active::pool.create()) EnemyExtractorBase_1176(x, y);
}
static Image* images_enemyextractorhead_1177_0_0[12];
static Direction direction_enemyextractorhead_1177_0_0 = {0, 25, 25, 0, -1, images_enemyextractorhead_1177_0_0, 12};
static Animation anim_enemyextractorhead_1177_0 = {&direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, NULL, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0, &direction_enemyextractorhead_1177_0_0};
static Image* images_enemyextractorhead_1177_6_0[4];
static Direction direction_enemyextractorhead_1177_6_0 = {0, 50, 50, 3, 4, images_enemyextractorhead_1177_6_0, 4};
static Image* images_enemyextractorhead_1177_6_16[7];
static Direction direction_enemyextractorhead_1177_6_16 = {16, 50, 50, 0, 1, images_enemyextractorhead_1177_6_16, 7};
static Animation anim_enemyextractorhead_1177_6 = {&direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, NULL, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, &direction_enemyextractorhead_1177_6_16, NULL, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0, &direction_enemyextractorhead_1177_6_0};
static Image* images_enemyextractorhead_1177_7_0[3];
static Direction direction_enemyextractorhead_1177_7_0 = {0, 100, 100, 0, -1, images_enemyextractorhead_1177_7_0, 3};
static Image* images_enemyextractorhead_1177_7_16[7];
static Direction direction_enemyextractorhead_1177_7_16 = {16, 50, 50, 5, -1, images_enemyextractorhead_1177_7_16, 7};
static Animation anim_enemyextractorhead_1177_7 = {&direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, NULL, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, &direction_enemyextractorhead_1177_7_16, NULL, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0, &direction_enemyextractorhead_1177_7_0};
static Image* images_enemyextractorhead_1177_8_0[7];
static Direction direction_enemyextractorhead_1177_8_0 = {0, 25, 25, 6, -1, images_enemyextractorhead_1177_8_0, 7};
static Animation anim_enemyextractorhead_1177_8 = {&direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, NULL, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0, &direction_enemyextractorhead_1177_8_0};
static Image* images_enemyextractorhead_1177_10_0[21];
static Direction direction_enemyextractorhead_1177_10_0 = {0, 50, 50, 17, -1, images_enemyextractorhead_1177_10_0, 21};
static Animation anim_enemyextractorhead_1177_10 = {&direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, NULL, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0, &direction_enemyextractorhead_1177_10_0};
static Image* images_enemyextractorhead_1177_11_0[5];
static Direction direction_enemyextractorhead_1177_11_0 = {0, 25, 25, 0, 1, images_enemyextractorhead_1177_11_0, 5};
static Animation anim_enemyextractorhead_1177_11 = {&direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, NULL, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0, &direction_enemyextractorhead_1177_11_0};
static Animation * anim_array_enemyextractorhead_1177[12] = {&anim_enemyextractorhead_1177_0, NULL, NULL, NULL, NULL, NULL, &anim_enemyextractorhead_1177_6, &anim_enemyextractorhead_1177_7, &anim_enemyextractorhead_1177_8, NULL, &anim_enemyextractorhead_1177_10, &anim_enemyextractorhead_1177_11};
static Animations anim_enemyextractorhead_1177 = {12, &anim_array_enemyextractorhead_1177[0]};
static bool anim_enemyextractorhead_1177_initialized;
class EnemyExtractorHead_1177 : public Active
{
public:
    EnemyExtractorHead_1177(int x, int y) : Active(x, y, EnemyExtractorHead_1177_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_ExtractorHead", 19);
#endif
        this->animations = &anim_enemyextractorhead_1177;
        if (!anim_enemyextractorhead_1177_initialized) {
            anim_enemyextractorhead_1177_initialized = true;
            images_enemyextractorhead_1177_0_0[0] = get_internal_image(3397);
            images_enemyextractorhead_1177_0_0[1] = get_internal_image(8020);
            images_enemyextractorhead_1177_0_0[2] = get_internal_image(8021);
            images_enemyextractorhead_1177_0_0[3] = get_internal_image(8022);
            images_enemyextractorhead_1177_0_0[4] = get_internal_image(8021);
            images_enemyextractorhead_1177_0_0[5] = get_internal_image(8020);
            images_enemyextractorhead_1177_0_0[6] = get_internal_image(3397);
            images_enemyextractorhead_1177_0_0[7] = get_internal_image(8020);
            images_enemyextractorhead_1177_0_0[8] = get_internal_image(8021);
            images_enemyextractorhead_1177_0_0[9] = get_internal_image(8022);
            images_enemyextractorhead_1177_0_0[10] = get_internal_image(8021);
            images_enemyextractorhead_1177_0_0[11] = get_internal_image(8020);
            images_enemyextractorhead_1177_6_0[0] = get_internal_image(8023);
            images_enemyextractorhead_1177_6_0[1] = get_internal_image(8023);
            images_enemyextractorhead_1177_6_0[2] = get_internal_image(8024);
            images_enemyextractorhead_1177_6_0[3] = get_internal_image(8025);
            images_enemyextractorhead_1177_6_16[0] = get_internal_image(5674);
            images_enemyextractorhead_1177_6_16[1] = get_internal_image(5674);
            images_enemyextractorhead_1177_6_16[2] = get_internal_image(6639);
            images_enemyextractorhead_1177_6_16[3] = get_internal_image(12622);
            images_enemyextractorhead_1177_6_16[4] = get_internal_image(12622);
            images_enemyextractorhead_1177_6_16[5] = get_internal_image(12622);
            images_enemyextractorhead_1177_6_16[6] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_0[0] = get_internal_image(8025);
            images_enemyextractorhead_1177_7_0[1] = get_internal_image(8025);
            images_enemyextractorhead_1177_7_0[2] = get_internal_image(8025);
            images_enemyextractorhead_1177_7_16[0] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[1] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[2] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[3] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[4] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[5] = get_internal_image(12622);
            images_enemyextractorhead_1177_7_16[6] = get_internal_image(12622);
            images_enemyextractorhead_1177_8_0[0] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[1] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[2] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[3] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[4] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[5] = get_internal_image(3397);
            images_enemyextractorhead_1177_8_0[6] = get_internal_image(3397);
            images_enemyextractorhead_1177_10_0[0] = get_internal_image(3397);
            images_enemyextractorhead_1177_10_0[1] = get_internal_image(3397);
            images_enemyextractorhead_1177_10_0[2] = get_internal_image(8026);
            images_enemyextractorhead_1177_10_0[3] = get_internal_image(8028);
            images_enemyextractorhead_1177_10_0[4] = get_internal_image(8043);
            images_enemyextractorhead_1177_10_0[5] = get_internal_image(11526);
            images_enemyextractorhead_1177_10_0[6] = get_internal_image(12440);
            images_enemyextractorhead_1177_10_0[7] = get_internal_image(12457);
            images_enemyextractorhead_1177_10_0[8] = get_internal_image(12482);
            images_enemyextractorhead_1177_10_0[9] = get_internal_image(12484);
            images_enemyextractorhead_1177_10_0[10] = get_internal_image(12487);
            images_enemyextractorhead_1177_10_0[11] = get_internal_image(12484);
            images_enemyextractorhead_1177_10_0[12] = get_internal_image(12488);
            images_enemyextractorhead_1177_10_0[13] = get_internal_image(11526);
            images_enemyextractorhead_1177_10_0[14] = get_internal_image(12491);
            images_enemyextractorhead_1177_10_0[15] = get_internal_image(12486);
            images_enemyextractorhead_1177_10_0[16] = get_internal_image(12492);
            images_enemyextractorhead_1177_10_0[17] = get_internal_image(12494);
            images_enemyextractorhead_1177_10_0[18] = get_internal_image(12493);
            images_enemyextractorhead_1177_10_0[19] = get_internal_image(12494);
            images_enemyextractorhead_1177_10_0[20] = get_internal_image(12493);
            images_enemyextractorhead_1177_11_0[0] = get_internal_image(12495);
            images_enemyextractorhead_1177_11_0[1] = get_internal_image(12497);
            images_enemyextractorhead_1177_11_0[2] = get_internal_image(12496);
            images_enemyextractorhead_1177_11_0[3] = get_internal_image(12486);
            images_enemyextractorhead_1177_11_0[4] = get_internal_image(12491);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 25);
        alterables->values.set(18, 10);
    }
};
FrameObject * create_enemyextractorhead_1177(int x, int y)
{
    return new (Active::pool.create()) EnemyExtractorHead_1177(x, y);
}
static Image* images_gimmickrelicpanel_1178_0_0[5];
static Direction direction_gimmickrelicpanel_1178_0_0 = {0, 0, 0, 0, -1, images_gimmickrelicpanel_1178_0_0, 5};
static Image* images_gimmickrelicpanel_1178_0_1[5];
static Direction direction_gimmickrelicpanel_1178_0_1 = {1, 0, 0, 0, -1, images_gimmickrelicpanel_1178_0_1, 5};
static Image* images_gimmickrelicpanel_1178_0_2[5];
static Direction direction_gimmickrelicpanel_1178_0_2 = {2, 0, 0, 0, -1, images_gimmickrelicpanel_1178_0_2, 5};
static Image* images_gimmickrelicpanel_1178_0_3[5];
static Direction direction_gimmickrelicpanel_1178_0_3 = {3, 0, 0, 0, -1, images_gimmickrelicpanel_1178_0_3, 5};
static Animation anim_gimmickrelicpanel_1178_0 = {&direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_1, &direction_gimmickrelicpanel_1178_0_2, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_3, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0, &direction_gimmickrelicpanel_1178_0_0};
static Animation * anim_array_gimmickrelicpanel_1178[1] = {&anim_gimmickrelicpanel_1178_0};
static Animations anim_gimmickrelicpanel_1178 = {1, &anim_array_gimmickrelicpanel_1178[0]};
static bool anim_gimmickrelicpanel_1178_initialized;
class GimmickRelicPanel_1178 : public Active
{
public:
    GimmickRelicPanel_1178(int x, int y) : Active(x, y, GimmickRelicPanel_1178_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Gimmick_RelicPanel", 18);
#endif
        this->animations = &anim_gimmickrelicpanel_1178;
        if (!anim_gimmickrelicpanel_1178_initialized) {
            anim_gimmickrelicpanel_1178_initialized = true;
            images_gimmickrelicpanel_1178_0_0[0] = get_internal_image(576);
            images_gimmickrelicpanel_1178_0_0[1] = get_internal_image(1225);
            images_gimmickrelicpanel_1178_0_0[2] = get_internal_image(2200);
            images_gimmickrelicpanel_1178_0_0[3] = get_internal_image(3225);
            images_gimmickrelicpanel_1178_0_0[4] = get_internal_image(3227);
            images_gimmickrelicpanel_1178_0_1[0] = get_internal_image(3270);
            images_gimmickrelicpanel_1178_0_1[1] = get_internal_image(7187);
            images_gimmickrelicpanel_1178_0_1[2] = get_internal_image(7786);
            images_gimmickrelicpanel_1178_0_1[3] = get_internal_image(7799);
            images_gimmickrelicpanel_1178_0_1[4] = get_internal_image(7787);
            images_gimmickrelicpanel_1178_0_2[0] = get_internal_image(3319);
            images_gimmickrelicpanel_1178_0_2[1] = get_internal_image(7785);
            images_gimmickrelicpanel_1178_0_2[2] = get_internal_image(7790);
            images_gimmickrelicpanel_1178_0_2[3] = get_internal_image(7812);
            images_gimmickrelicpanel_1178_0_2[4] = get_internal_image(8115);
            images_gimmickrelicpanel_1178_0_3[0] = get_internal_image(7191);
            images_gimmickrelicpanel_1178_0_3[1] = get_internal_image(8283);
            images_gimmickrelicpanel_1178_0_3[2] = get_internal_image(8144);
            images_gimmickrelicpanel_1178_0_3[3] = get_internal_image(8160);
            images_gimmickrelicpanel_1178_0_3[4] = get_internal_image(8288);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(3);
        create_alterables();
    }
};
FrameObject * create_gimmickrelicpanel_1178(int x, int y)
{
    return new (Active::pool.create()) GimmickRelicPanel_1178(x, y);
}
static Image* images_gimmickfireballspawner_1179_0_0[1];
static Direction direction_gimmickfireballspawner_1179_0_0 = {0, 50, 50, 0, 1, images_gimmickfireballspawner_1179_0_0, 1};
static Animation anim_gimmickfireballspawner_1179_0 = {&direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, NULL, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0, &direction_gimmickfireballspawner_1179_0_0};
static Image* images_gimmickfireballspawner_1179_6_0[9];
static Direction direction_gimmickfireballspawner_1179_6_0 = {0, 25, 25, 0, 1, images_gimmickfireballspawner_1179_6_0, 9};
static Animation anim_gimmickfireballspawner_1179_6 = {&direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, NULL, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0, &direction_gimmickfireballspawner_1179_6_0};
static Animation * anim_array_gimmickfireballspawner_1179[7] = {&anim_gimmickfireballspawner_1179_0, NULL, NULL, NULL, NULL, NULL, &anim_gimmickfireballspawner_1179_6};
static Animations anim_gimmickfireballspawner_1179 = {7, &anim_array_gimmickfireballspawner_1179[0]};
static bool anim_gimmickfireballspawner_1179_initialized;
class GimmickFireballSpawner_1179 : public Active
{
public:
    GimmickFireballSpawner_1179(int x, int y) : Active(x, y, GimmickFireballSpawner_1179_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FireballSpawner", 23);
#endif
        this->animations = &anim_gimmickfireballspawner_1179;
        if (!anim_gimmickfireballspawner_1179_initialized) {
            anim_gimmickfireballspawner_1179_initialized = true;
            images_gimmickfireballspawner_1179_0_0[0] = get_internal_image(8977);
            images_gimmickfireballspawner_1179_6_0[0] = get_internal_image(8978);
            images_gimmickfireballspawner_1179_6_0[1] = get_internal_image(8980);
            images_gimmickfireballspawner_1179_6_0[2] = get_internal_image(8982);
            images_gimmickfireballspawner_1179_6_0[3] = get_internal_image(9002);
            images_gimmickfireballspawner_1179_6_0[4] = get_internal_image(8982);
            images_gimmickfireballspawner_1179_6_0[5] = get_internal_image(9013);
            images_gimmickfireballspawner_1179_6_0[6] = get_internal_image(9005);
            images_gimmickfireballspawner_1179_6_0[7] = get_internal_image(9003);
            images_gimmickfireballspawner_1179_6_0[8] = get_internal_image(8981);
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
FrameObject * create_gimmickfireballspawner_1179(int x, int y)
{
    return new (Active::pool.create()) GimmickFireballSpawner_1179(x, y);
}
static Image* images_gimmickfireballturret1_1180_0_0[1];
static Direction direction_gimmickfireballturret1_1180_0_0 = {0, 50, 50, 0, 1, images_gimmickfireballturret1_1180_0_0, 1};
static Animation anim_gimmickfireballturret1_1180_0 = {&direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, NULL, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0, &direction_gimmickfireballturret1_1180_0_0};
static Animation * anim_array_gimmickfireballturret1_1180[1] = {&anim_gimmickfireballturret1_1180_0};
static Animations anim_gimmickfireballturret1_1180 = {1, &anim_array_gimmickfireballturret1_1180[0]};
static bool anim_gimmickfireballturret1_1180_initialized;
class GimmickFireballTurret1_1180 : public Active
{
public:
    GimmickFireballTurret1_1180(int x, int y) : Active(x, y, GimmickFireballTurret1_1180_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FireballTurret 1", 24);
#endif
        this->animations = &anim_gimmickfireballturret1_1180;
        if (!anim_gimmickfireballturret1_1180_initialized) {
            anim_gimmickfireballturret1_1180_initialized = true;
            images_gimmickfireballturret1_1180_0_0[0] = get_internal_image(9018);
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
FrameObject * create_gimmickfireballturret1_1180(int x, int y)
{
    return new (Active::pool.create()) GimmickFireballTurret1_1180(x, y);
}
static Image* images_gimmickfireballturret2_1181_0_0[1];
static Direction direction_gimmickfireballturret2_1181_0_0 = {0, 50, 50, 0, 1, images_gimmickfireballturret2_1181_0_0, 1};
static Animation anim_gimmickfireballturret2_1181_0 = {&direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, NULL, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0, &direction_gimmickfireballturret2_1181_0_0};
static Animation * anim_array_gimmickfireballturret2_1181[1] = {&anim_gimmickfireballturret2_1181_0};
static Animations anim_gimmickfireballturret2_1181 = {1, &anim_array_gimmickfireballturret2_1181[0]};
static bool anim_gimmickfireballturret2_1181_initialized;
class GimmickFireballTurret2_1181 : public Active
{
public:
    GimmickFireballTurret2_1181(int x, int y) : Active(x, y, GimmickFireballTurret2_1181_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_FireballTurret 2", 24);
#endif
        this->animations = &anim_gimmickfireballturret2_1181;
        if (!anim_gimmickfireballturret2_1181_initialized) {
            anim_gimmickfireballturret2_1181_initialized = true;
            images_gimmickfireballturret2_1181_0_0[0] = get_internal_image(9004);
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
FrameObject * create_gimmickfireballturret2_1181(int x, int y)
{
    return new (Active::pool.create()) GimmickFireballTurret2_1181(x, y);
}
static Image* images_enemyslug_1182_0_0[1];
static Direction direction_enemyslug_1182_0_0 = {0, 50, 50, 0, 1, images_enemyslug_1182_0_0, 1};
static Image* images_enemyslug_1182_0_8[1];
static Direction direction_enemyslug_1182_0_8 = {8, 50, 50, 0, 1, images_enemyslug_1182_0_8, 1};
static Image* images_enemyslug_1182_0_16[1];
static Direction direction_enemyslug_1182_0_16 = {16, 50, 50, 0, 1, images_enemyslug_1182_0_16, 1};
static Animation anim_enemyslug_1182_0 = {&direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, NULL, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, &direction_enemyslug_1182_0_8, NULL, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, &direction_enemyslug_1182_0_16, NULL, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0, &direction_enemyslug_1182_0_0};
static Image* images_enemyslug_1182_1_0[7];
static Direction direction_enemyslug_1182_1_0 = {0, 18, 18, 0, -1, images_enemyslug_1182_1_0, 7};
static Image* images_enemyslug_1182_1_8[7];
static Direction direction_enemyslug_1182_1_8 = {8, 50, 50, 0, 1, images_enemyslug_1182_1_8, 7};
static Image* images_enemyslug_1182_1_16[7];
static Direction direction_enemyslug_1182_1_16 = {16, 18, 18, 0, -1, images_enemyslug_1182_1_16, 7};
static Animation anim_enemyslug_1182_1 = {&direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, NULL, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, &direction_enemyslug_1182_1_8, NULL, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, &direction_enemyslug_1182_1_16, NULL, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0, &direction_enemyslug_1182_1_0};
static Image* images_enemyslug_1182_8_0[1];
static Direction direction_enemyslug_1182_8_0 = {0, 50, 50, 0, -1, images_enemyslug_1182_8_0, 1};
static Image* images_enemyslug_1182_8_16[1];
static Direction direction_enemyslug_1182_8_16 = {16, 50, 50, 0, -1, images_enemyslug_1182_8_16, 1};
static Animation anim_enemyslug_1182_8 = {&direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, NULL, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, &direction_enemyslug_1182_8_16, NULL, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0, &direction_enemyslug_1182_8_0};
static Image* images_enemyslug_1182_10_0[16];
static Direction direction_enemyslug_1182_10_0 = {0, 40, 40, 2, 1, images_enemyslug_1182_10_0, 16};
static Image* images_enemyslug_1182_10_8[16];
static Direction direction_enemyslug_1182_10_8 = {8, 50, 50, 0, 1, images_enemyslug_1182_10_8, 16};
static Image* images_enemyslug_1182_10_16[16];
static Direction direction_enemyslug_1182_10_16 = {16, 40, 40, 2, 1, images_enemyslug_1182_10_16, 16};
static Animation anim_enemyslug_1182_10 = {&direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, NULL, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, &direction_enemyslug_1182_10_8, NULL, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, &direction_enemyslug_1182_10_16, NULL, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0, &direction_enemyslug_1182_10_0};
static Animation * anim_array_enemyslug_1182[11] = {&anim_enemyslug_1182_0, &anim_enemyslug_1182_1, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyslug_1182_8, NULL, &anim_enemyslug_1182_10};
static Animations anim_enemyslug_1182 = {11, &anim_array_enemyslug_1182[0]};
static bool anim_enemyslug_1182_initialized;
class EnemySlug_1182 : public Active
{
public:
    EnemySlug_1182(int x, int y) : Active(x, y, EnemySlug_1182_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Slug", 10);
#endif
        this->animations = &anim_enemyslug_1182;
        if (!anim_enemyslug_1182_initialized) {
            anim_enemyslug_1182_initialized = true;
            images_enemyslug_1182_0_0[0] = get_internal_image(2205);
            images_enemyslug_1182_0_8[0] = get_internal_image(2480);
            images_enemyslug_1182_0_16[0] = get_internal_image(2421);
            images_enemyslug_1182_1_0[0] = get_internal_image(2205);
            images_enemyslug_1182_1_0[1] = get_internal_image(2425);
            images_enemyslug_1182_1_0[2] = get_internal_image(2456);
            images_enemyslug_1182_1_0[3] = get_internal_image(2457);
            images_enemyslug_1182_1_0[4] = get_internal_image(2458);
            images_enemyslug_1182_1_0[5] = get_internal_image(2459);
            images_enemyslug_1182_1_0[6] = get_internal_image(2460);
            images_enemyslug_1182_1_8[0] = get_internal_image(2480);
            images_enemyslug_1182_1_8[1] = get_internal_image(2480);
            images_enemyslug_1182_1_8[2] = get_internal_image(2480);
            images_enemyslug_1182_1_8[3] = get_internal_image(2480);
            images_enemyslug_1182_1_8[4] = get_internal_image(2480);
            images_enemyslug_1182_1_8[5] = get_internal_image(2480);
            images_enemyslug_1182_1_8[6] = get_internal_image(2480);
            images_enemyslug_1182_1_16[0] = get_internal_image(2421);
            images_enemyslug_1182_1_16[1] = get_internal_image(2461);
            images_enemyslug_1182_1_16[2] = get_internal_image(2462);
            images_enemyslug_1182_1_16[3] = get_internal_image(2463);
            images_enemyslug_1182_1_16[4] = get_internal_image(2464);
            images_enemyslug_1182_1_16[5] = get_internal_image(2465);
            images_enemyslug_1182_1_16[6] = get_internal_image(2466);
            images_enemyslug_1182_8_0[0] = get_internal_image(2479);
            images_enemyslug_1182_8_16[0] = get_internal_image(2481);
            images_enemyslug_1182_10_0[0] = get_internal_image(2205);
            images_enemyslug_1182_10_0[1] = get_internal_image(2205);
            images_enemyslug_1182_10_0[2] = get_internal_image(2467);
            images_enemyslug_1182_10_0[3] = get_internal_image(2467);
            images_enemyslug_1182_10_0[4] = get_internal_image(2468);
            images_enemyslug_1182_10_0[5] = get_internal_image(2469);
            images_enemyslug_1182_10_0[6] = get_internal_image(2470);
            images_enemyslug_1182_10_0[7] = get_internal_image(2471);
            images_enemyslug_1182_10_0[8] = get_internal_image(2468);
            images_enemyslug_1182_10_0[9] = get_internal_image(2469);
            images_enemyslug_1182_10_0[10] = get_internal_image(2470);
            images_enemyslug_1182_10_0[11] = get_internal_image(2471);
            images_enemyslug_1182_10_0[12] = get_internal_image(2467);
            images_enemyslug_1182_10_0[13] = get_internal_image(2467);
            images_enemyslug_1182_10_0[14] = get_internal_image(2205);
            images_enemyslug_1182_10_0[15] = get_internal_image(2205);
            images_enemyslug_1182_10_8[0] = get_internal_image(2480);
            images_enemyslug_1182_10_8[1] = get_internal_image(2480);
            images_enemyslug_1182_10_8[2] = get_internal_image(2480);
            images_enemyslug_1182_10_8[3] = get_internal_image(2480);
            images_enemyslug_1182_10_8[4] = get_internal_image(2480);
            images_enemyslug_1182_10_8[5] = get_internal_image(2480);
            images_enemyslug_1182_10_8[6] = get_internal_image(2480);
            images_enemyslug_1182_10_8[7] = get_internal_image(2480);
            images_enemyslug_1182_10_8[8] = get_internal_image(2480);
            images_enemyslug_1182_10_8[9] = get_internal_image(2480);
            images_enemyslug_1182_10_8[10] = get_internal_image(2480);
            images_enemyslug_1182_10_8[11] = get_internal_image(2480);
            images_enemyslug_1182_10_8[12] = get_internal_image(2480);
            images_enemyslug_1182_10_8[13] = get_internal_image(2480);
            images_enemyslug_1182_10_8[14] = get_internal_image(2480);
            images_enemyslug_1182_10_8[15] = get_internal_image(2480);
            images_enemyslug_1182_10_16[0] = get_internal_image(2421);
            images_enemyslug_1182_10_16[1] = get_internal_image(2421);
            images_enemyslug_1182_10_16[2] = get_internal_image(2472);
            images_enemyslug_1182_10_16[3] = get_internal_image(2472);
            images_enemyslug_1182_10_16[4] = get_internal_image(2473);
            images_enemyslug_1182_10_16[5] = get_internal_image(2474);
            images_enemyslug_1182_10_16[6] = get_internal_image(2475);
            images_enemyslug_1182_10_16[7] = get_internal_image(2476);
            images_enemyslug_1182_10_16[8] = get_internal_image(2473);
            images_enemyslug_1182_10_16[9] = get_internal_image(2474);
            images_enemyslug_1182_10_16[10] = get_internal_image(2475);
            images_enemyslug_1182_10_16[11] = get_internal_image(2476);
            images_enemyslug_1182_10_16[12] = get_internal_image(2472);
            images_enemyslug_1182_10_16[13] = get_internal_image(2472);
            images_enemyslug_1182_10_16[14] = get_internal_image(2421);
            images_enemyslug_1182_10_16[15] = get_internal_image(2421);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_enemyslug_1182(int x, int y)
{
    return new (Active::pool.create()) EnemySlug_1182(x, y);
}
static Image* images_enemyiris_1183_0_0[1];
static Direction direction_enemyiris_1183_0_0 = {0, 50, 50, 0, 1, images_enemyiris_1183_0_0, 1};
static Animation anim_enemyiris_1183_0 = {&direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, NULL, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0, &direction_enemyiris_1183_0_0};
static Image* images_enemyiris_1183_1_0[8];
static Direction direction_enemyiris_1183_1_0 = {0, 35, 35, 0, -1, images_enemyiris_1183_1_0, 8};
static Animation anim_enemyiris_1183_1 = {&direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, NULL, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0, &direction_enemyiris_1183_1_0};
static Image* images_enemyiris_1183_8_0[1];
static Direction direction_enemyiris_1183_8_0 = {0, 50, 50, 0, -1, images_enemyiris_1183_8_0, 1};
static Animation anim_enemyiris_1183_8 = {&direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, NULL, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0, &direction_enemyiris_1183_8_0};
static Image* images_enemyiris_1183_9_0[4];
static Direction direction_enemyiris_1183_9_0 = {0, 40, 40, 0, 2, images_enemyiris_1183_9_0, 4};
static Animation anim_enemyiris_1183_9 = {&direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, NULL, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0, &direction_enemyiris_1183_9_0};
static Image* images_enemyiris_1183_10_0[7];
static Direction direction_enemyiris_1183_10_0 = {0, 25, 25, 6, -1, images_enemyiris_1183_10_0, 7};
static Animation anim_enemyiris_1183_10 = {&direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, NULL, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0, &direction_enemyiris_1183_10_0};
static Image* images_enemyiris_1183_11_0[7];
static Direction direction_enemyiris_1183_11_0 = {0, 25, 25, 0, 1, images_enemyiris_1183_11_0, 7};
static Animation anim_enemyiris_1183_11 = {&direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, NULL, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0, &direction_enemyiris_1183_11_0};
static Animation * anim_array_enemyiris_1183[12] = {&anim_enemyiris_1183_0, &anim_enemyiris_1183_1, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyiris_1183_8, &anim_enemyiris_1183_9, &anim_enemyiris_1183_10, &anim_enemyiris_1183_11};
static Animations anim_enemyiris_1183 = {12, &anim_array_enemyiris_1183[0]};
static bool anim_enemyiris_1183_initialized;
class EnemyIris_1183 : public Active
{
public:
    EnemyIris_1183(int x, int y) : Active(x, y, EnemyIris_1183_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Iris", 10);
#endif
        this->animations = &anim_enemyiris_1183;
        if (!anim_enemyiris_1183_initialized) {
            anim_enemyiris_1183_initialized = true;
            images_enemyiris_1183_0_0[0] = get_internal_image(2782);
            images_enemyiris_1183_1_0[0] = get_internal_image(2785);
            images_enemyiris_1183_1_0[1] = get_internal_image(2783);
            images_enemyiris_1183_1_0[2] = get_internal_image(2784);
            images_enemyiris_1183_1_0[3] = get_internal_image(2786);
            images_enemyiris_1183_1_0[4] = get_internal_image(2784);
            images_enemyiris_1183_1_0[5] = get_internal_image(2783);
            images_enemyiris_1183_1_0[6] = get_internal_image(2785);
            images_enemyiris_1183_1_0[7] = get_internal_image(2787);
            images_enemyiris_1183_8_0[0] = get_internal_image(3391);
            images_enemyiris_1183_9_0[0] = get_internal_image(2782);
            images_enemyiris_1183_9_0[1] = get_internal_image(517);
            images_enemyiris_1183_9_0[2] = get_internal_image(2484);
            images_enemyiris_1183_9_0[3] = get_internal_image(2485);
            images_enemyiris_1183_10_0[0] = get_internal_image(2787);
            images_enemyiris_1183_10_0[1] = get_internal_image(2785);
            images_enemyiris_1183_10_0[2] = get_internal_image(2787);
            images_enemyiris_1183_10_0[3] = get_internal_image(2785);
            images_enemyiris_1183_10_0[4] = get_internal_image(2788);
            images_enemyiris_1183_10_0[5] = get_internal_image(2790);
            images_enemyiris_1183_10_0[6] = get_internal_image(2791);
            images_enemyiris_1183_11_0[0] = get_internal_image(2791);
            images_enemyiris_1183_11_0[1] = get_internal_image(2790);
            images_enemyiris_1183_11_0[2] = get_internal_image(2788);
            images_enemyiris_1183_11_0[3] = get_internal_image(2785);
            images_enemyiris_1183_11_0[4] = get_internal_image(2787);
            images_enemyiris_1183_11_0[5] = get_internal_image(2785);
            images_enemyiris_1183_11_0[6] = get_internal_image(2787);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_enemyiris_1183(int x, int y)
{
    return new (Active::pool.create()) EnemyIris_1183(x, y);
}
static Image* images_breakableruins_1184_0_0[1];
static Direction direction_breakableruins_1184_0_0 = {0, 50, 50, 0, 1, images_breakableruins_1184_0_0, 1};
static Animation anim_breakableruins_1184_0 = {&direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, NULL, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0, &direction_breakableruins_1184_0_0};
static Animation * anim_array_breakableruins_1184[1] = {&anim_breakableruins_1184_0};
static Animations anim_breakableruins_1184 = {1, &anim_array_breakableruins_1184[0]};
static bool anim_breakableruins_1184_initialized;
class BreakableRuins_1184 : public Active
{
public:
    BreakableRuins_1184(int x, int y) : Active(x, y, BreakableRuins_1184_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakableRuins", 14);
#endif
        this->animations = &anim_breakableruins_1184;
        if (!anim_breakableruins_1184_initialized) {
            anim_breakableruins_1184_initialized = true;
            images_breakableruins_1184_0_0[0] = get_internal_image(2234);
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
FrameObject * create_breakableruins_1184(int x, int y)
{
    return new (Active::pool.create()) BreakableRuins_1184(x, y);
}
static Image* images_objectpot_1185_0_0[1];
static Direction direction_objectpot_1185_0_0 = {0, 50, 50, 0, -1, images_objectpot_1185_0_0, 1};
static Image* images_objectpot_1185_0_8[1];
static Direction direction_objectpot_1185_0_8 = {8, 50, 50, 0, -1, images_objectpot_1185_0_8, 1};
static Animation anim_objectpot_1185_0 = {&direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, NULL, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, &direction_objectpot_1185_0_8, NULL, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0, &direction_objectpot_1185_0_0};
static Animation * anim_array_objectpot_1185[1] = {&anim_objectpot_1185_0};
static Animations anim_objectpot_1185 = {1, &anim_array_objectpot_1185[0]};
static bool anim_objectpot_1185_initialized;
class ObjectPot_1185 : public Active
{
public:
    ObjectPot_1185(int x, int y) : Active(x, y, ObjectPot_1185_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Object_Pot", 10);
#endif
        this->animations = &anim_objectpot_1185;
        if (!anim_objectpot_1185_initialized) {
            anim_objectpot_1185_initialized = true;
            images_objectpot_1185_0_0[0] = get_internal_image(2821);
            images_objectpot_1185_0_8[0] = get_internal_image(2831);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_objectpot_1185(int x, int y)
{
    return new (Active::pool.create()) ObjectPot_1185(x, y);
}
static Image* images_digspothole_1186_0_0[1];
static Direction direction_digspothole_1186_0_0 = {0, 50, 50, 0, 1, images_digspothole_1186_0_0, 1};
static Image* images_digspothole_1186_0_8[1];
static Direction direction_digspothole_1186_0_8 = {8, 50, 50, 0, 1, images_digspothole_1186_0_8, 1};
static Animation anim_digspothole_1186_0 = {&direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, NULL, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, &direction_digspothole_1186_0_8, NULL, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0, &direction_digspothole_1186_0_0};
static Animation * anim_array_digspothole_1186[1] = {&anim_digspothole_1186_0};
static Animations anim_digspothole_1186 = {1, &anim_array_digspothole_1186[0]};
static bool anim_digspothole_1186_initialized;
class DigSpotHole_1186 : public Active
{
public:
    DigSpotHole_1186(int x, int y) : Active(x, y, DigSpotHole_1186_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("DigSpot_Hole", 12);
#endif
        this->animations = &anim_digspothole_1186;
        if (!anim_digspothole_1186_initialized) {
            anim_digspothole_1186_initialized = true;
            images_digspothole_1186_0_0[0] = get_internal_image(4039);
            images_digspothole_1186_0_8[0] = get_internal_image(5952);
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
FrameObject * create_digspothole_1186(int x, int y)
{
    return new (Active::pool.create()) DigSpotHole_1186(x, y);
}
class RMEntrywayRight3_1187 : public Backdrop
{
public:
    RMEntrywayRight3_1187(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayRight3", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9644);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrywayright3_1187(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayRight3_1187(x, y);
}
class RMEntryPurple_1188 : public Backdrop
{
public:
    RMEntryPurple_1188(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntryPurple", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7204);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrypurple_1188(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntryPurple_1188(x, y);
}
class RMEntryYellow_1189 : public Backdrop
{
public:
    RMEntryYellow_1189(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntryYellow", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7205);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentryyellow_1189(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntryYellow_1189(x, y);
}
class RMPlant2_1190 : public Backdrop
{
public:
    RMPlant2_1190(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_Plant2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2233);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmplant2_1190(int x, int y)
{
    return new (Backdrop::pool.create()) RMPlant2_1190(x, y);
}
class RMSoilCeiling_1191 : public Backdrop
{
public:
    RMSoilCeiling_1191(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_SoilCeiling", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3166);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_rmsoilceiling_1191(int x, int y)
{
    return new (Backdrop::pool.create()) RMSoilCeiling_1191(x, y);
}
static Image* images_hazardspikesdown_1192_0_0[1];
static Direction direction_hazardspikesdown_1192_0_0 = {0, 50, 50, 0, 1, images_hazardspikesdown_1192_0_0, 1};
static Animation anim_hazardspikesdown_1192_0 = {&direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, NULL, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0, &direction_hazardspikesdown_1192_0_0};
static Animation * anim_array_hazardspikesdown_1192[1] = {&anim_hazardspikesdown_1192_0};
static Animations anim_hazardspikesdown_1192 = {1, &anim_array_hazardspikesdown_1192[0]};
static bool anim_hazardspikesdown_1192_initialized;
class HazardSpikesDown_1192 : public Active
{
public:
    HazardSpikesDown_1192(int x, int y) : Active(x, y, HazardSpikesDown_1192_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Down", 18);
#endif
        this->animations = &anim_hazardspikesdown_1192;
        if (!anim_hazardspikesdown_1192_initialized) {
            anim_hazardspikesdown_1192_initialized = true;
            images_hazardspikesdown_1192_0_0[0] = get_internal_image(7801);
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
FrameObject * create_hazardspikesdown_1192(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesDown_1192(x, y);
}
static Image* images_hazardspikesleft_1193_0_0[1];
static Direction direction_hazardspikesleft_1193_0_0 = {0, 50, 50, 0, 1, images_hazardspikesleft_1193_0_0, 1};
static Animation anim_hazardspikesleft_1193_0 = {&direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, NULL, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0, &direction_hazardspikesleft_1193_0_0};
static Animation * anim_array_hazardspikesleft_1193[1] = {&anim_hazardspikesleft_1193_0};
static Animations anim_hazardspikesleft_1193 = {1, &anim_array_hazardspikesleft_1193[0]};
static bool anim_hazardspikesleft_1193_initialized;
class HazardSpikesLeft_1193 : public Active
{
public:
    HazardSpikesLeft_1193(int x, int y) : Active(x, y, HazardSpikesLeft_1193_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Left", 18);
#endif
        this->animations = &anim_hazardspikesleft_1193;
        if (!anim_hazardspikesleft_1193_initialized) {
            anim_hazardspikesleft_1193_initialized = true;
            images_hazardspikesleft_1193_0_0[0] = get_internal_image(7802);
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
FrameObject * create_hazardspikesleft_1193(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesLeft_1193(x, y);
}
static Image* images_hazardspikesright_1194_0_0[1];
static Direction direction_hazardspikesright_1194_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright_1194_0_0, 1};
static Animation anim_hazardspikesright_1194_0 = {&direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, NULL, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0, &direction_hazardspikesright_1194_0_0};
static Animation * anim_array_hazardspikesright_1194[1] = {&anim_hazardspikesright_1194_0};
static Animations anim_hazardspikesright_1194 = {1, &anim_array_hazardspikesright_1194[0]};
static bool anim_hazardspikesright_1194_initialized;
class HazardSpikesRight_1194 : public Active
{
public:
    HazardSpikesRight_1194(int x, int y) : Active(x, y, HazardSpikesRight_1194_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right", 19);
#endif
        this->animations = &anim_hazardspikesright_1194;
        if (!anim_hazardspikesright_1194_initialized) {
            anim_hazardspikesright_1194_initialized = true;
            images_hazardspikesright_1194_0_0[0] = get_internal_image(7803);
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
FrameObject * create_hazardspikesright_1194(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight_1194(x, y);
}
class LevelParallaxPiece3r_1195 : public SystemBox
{
public:
    LevelParallaxPiece3r_1195(int x, int y) : SystemBox(x, y, LevelParallaxPiece3r_1195_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3r", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 446;
        type = PATTERN_IMAGE;
        image = get_internal_image(2229);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3r_1195(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3r_1195(x, y);
}
class LevelParallaxPiece4r_1196 : public SystemBox
{
public:
    LevelParallaxPiece4r_1196(int x, int y) : SystemBox(x, y, LevelParallaxPiece4r_1196_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 4r", 23);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 175;
        type = PATTERN_IMAGE;
        image = get_internal_image(3316);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece4r_1196(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece4r_1196(x, y);
}
static Image* images_badnikgolemshot_1197_0_0[1];
static Direction direction_badnikgolemshot_1197_0_0 = {0, 50, 50, 0, -1, images_badnikgolemshot_1197_0_0, 1};
static Animation anim_badnikgolemshot_1197_0 = {&direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, NULL, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0, &direction_badnikgolemshot_1197_0_0};
static Image* images_badnikgolemshot_1197_4_0[5];
static Direction direction_badnikgolemshot_1197_4_0 = {0, 50, 50, 0, 1, images_badnikgolemshot_1197_4_0, 5};
static Animation anim_badnikgolemshot_1197_4 = {&direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, NULL, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0, &direction_badnikgolemshot_1197_4_0};
static Animation * anim_array_badnikgolemshot_1197[5] = {&anim_badnikgolemshot_1197_0, NULL, NULL, NULL, &anim_badnikgolemshot_1197_4};
static Animations anim_badnikgolemshot_1197 = {5, &anim_array_badnikgolemshot_1197[0]};
static bool anim_badnikgolemshot_1197_initialized;
class BadnikGolemShot_1197 : public Active
{
public:
    BadnikGolemShot_1197(int x, int y) : Active(x, y, BadnikGolemShot_1197_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Badnik_GolemShot", 16);
#endif
        this->animations = &anim_badnikgolemshot_1197;
        if (!anim_badnikgolemshot_1197_initialized) {
            anim_badnikgolemshot_1197_initialized = true;
            images_badnikgolemshot_1197_0_0[0] = get_internal_image(1062);
            images_badnikgolemshot_1197_4_0[0] = get_internal_image(3243);
            images_badnikgolemshot_1197_4_0[1] = get_internal_image(1064);
            images_badnikgolemshot_1197_4_0[2] = get_internal_image(1052);
            images_badnikgolemshot_1197_4_0[3] = get_internal_image(1079);
            images_badnikgolemshot_1197_4_0[4] = get_internal_image(3245);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_badnikgolemshot_1197(int x, int y)
{
    return new (Active::pool.create()) BadnikGolemShot_1197(x, y);
}
static Image* images_badnikgolemshot2_1198_0_0[1];
static Direction direction_badnikgolemshot2_1198_0_0 = {0, 50, 50, 0, -1, images_badnikgolemshot2_1198_0_0, 1};
static Animation anim_badnikgolemshot2_1198_0 = {&direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, NULL, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0, &direction_badnikgolemshot2_1198_0_0};
static Animation * anim_array_badnikgolemshot2_1198[1] = {&anim_badnikgolemshot2_1198_0};
static Animations anim_badnikgolemshot2_1198 = {1, &anim_array_badnikgolemshot2_1198[0]};
static bool anim_badnikgolemshot2_1198_initialized;
class BadnikGolemShot2_1198 : public Active
{
public:
    BadnikGolemShot2_1198(int x, int y) : Active(x, y, BadnikGolemShot2_1198_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Badnik_GolemShot 2", 18);
#endif
        this->animations = &anim_badnikgolemshot2_1198;
        if (!anim_badnikgolemshot2_1198_initialized) {
            anim_badnikgolemshot2_1198_initialized = true;
            images_badnikgolemshot2_1198_0_0[0] = get_internal_image(250);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(pick_random(12, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14));
        set_direction(pick_random(12, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14));
        movements[0] = new PinballMovement(this);
        movements[0]->index = 0;
        ((PinballMovement*)movements[0])->set_max_speed(50);
        ((PinballMovement*)movements[0])->set_deceleration(0);
        ((PinballMovement*)movements[0])->set_gravity(25);
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_badnikgolemshot2_1198(int x, int y)
{
    return new (Active::pool.create()) BadnikGolemShot2_1198(x, y);
}
static Image* images_minibossflame_1199_4_0[10];
static Direction direction_minibossflame_1199_4_0 = {0, 50, 50, 0, 1, images_minibossflame_1199_4_0, 10};
static Animation anim_minibossflame_1199_4 = {&direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, NULL, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0, &direction_minibossflame_1199_4_0};
static Animation * anim_array_minibossflame_1199[5] = {NULL, NULL, NULL, NULL, &anim_minibossflame_1199_4};
static Animations anim_minibossflame_1199 = {5, &anim_array_minibossflame_1199[0]};
static bool anim_minibossflame_1199_initialized;
class MinibossFlame_1199 : public Active
{
public:
    MinibossFlame_1199(int x, int y) : Active(x, y, MinibossFlame_1199_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Miniboss_Flame", 14);
#endif
        this->animations = &anim_minibossflame_1199;
        if (!anim_minibossflame_1199_initialized) {
            anim_minibossflame_1199_initialized = true;
            images_minibossflame_1199_4_0[0] = get_internal_image(3256);
            images_minibossflame_1199_4_0[1] = get_internal_image(3249);
            images_minibossflame_1199_4_0[2] = get_internal_image(3250);
            images_minibossflame_1199_4_0[3] = get_internal_image(3251);
            images_minibossflame_1199_4_0[4] = get_internal_image(3247);
            images_minibossflame_1199_4_0[5] = get_internal_image(3252);
            images_minibossflame_1199_4_0[6] = get_internal_image(3257);
            images_minibossflame_1199_4_0[7] = get_internal_image(3253);
            images_minibossflame_1199_4_0[8] = get_internal_image(3258);
            images_minibossflame_1199_4_0[9] = get_internal_image(3259);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        create_alterables();
    }
};
FrameObject * create_minibossflame_1199(int x, int y)
{
    return new (Active::pool.create()) MinibossFlame_1199(x, y);
}
class RMDungeonBG_1200 : public QuickBackdrop
{
public:
    RMDungeonBG_1200(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_DungeonBG", 12);
#endif
        flags |= BACKGROUND;
        width = 2112;
        height = 1536;
        image = get_internal_image(12399);
        outline = 0;
    }
};
FrameObject * create_rmdungeonbg_1200(int x, int y)
{
    return new (QuickBackdrop::pool.create()) RMDungeonBG_1200(x, y);
}
class RMUpLeftSign_1201 : public Backdrop
{
public:
    RMUpLeftSign_1201(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_UpLeftSign", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3272);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmupleftsign_1201(int x, int y)
{
    return new (Backdrop::pool.create()) RMUpLeftSign_1201(x, y);
}
class LevelLayer116Back_1202 : public Backdrop
{
public:
    LevelLayer116Back_1202(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Level_Layer1_16 back", 20);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10617);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_levellayer116back_1202(int x, int y)
{
    return new (Backdrop::pool.create()) LevelLayer116Back_1202(x, y);
}
class Loop1_1203 : public Backdrop
{
public:
    Loop1_1203(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 1", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9676);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_loop1_1203(int x, int y)
{
    return new (Backdrop::pool.create()) Loop1_1203(x, y);
}
class BrickCurve1Back_1204 : public Backdrop
{
public:
    BrickCurve1Back_1204(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Brick curve 1 back", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2819);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_brickcurve1back_1204(int x, int y)
{
    return new (Backdrop::pool.create()) BrickCurve1Back_1204(x, y);
}
class Loop5Back_1205 : public Backdrop
{
public:
    Loop5Back_1205(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 5 back", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(9671);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_loop5back_1205(int x, int y)
{
    return new (Backdrop::pool.create()) Loop5Back_1205(x, y);
}
class ClockBack_1206 : public Backdrop
{
public:
    ClockBack_1206(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Clock back", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(25);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_clockback_1206(int x, int y)
{
    return new (Backdrop::pool.create()) ClockBack_1206(x, y);
}
class Loop7Back_1207 : public Backdrop
{
public:
    Loop7Back_1207(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Loop 7 back", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3248);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_loop7back_1207(int x, int y)
{
    return new (Backdrop::pool.create()) Loop7Back_1207(x, y);
}
class RMEntrywayLeft_1208 : public Backdrop
{
public:
    RMEntrywayLeft_1208(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RM_EntrywayLeft", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2455);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_rmentrywayleft_1208(int x, int y)
{
    return new (Backdrop::pool.create()) RMEntrywayLeft_1208(x, y);
}
