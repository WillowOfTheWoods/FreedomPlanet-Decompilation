#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class PLStonewall1_2913 : public Backdrop
{
public:
    PLStonewall1_2913(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12623);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall1_2913(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall1_2913(x, y);
}
class PLStonewall12_2914 : public Backdrop
{
public:
    PLStonewall12_2914(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 12", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1186);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall12_2914(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall12_2914(x, y);
}
class PLStonewall13_2915 : public Backdrop
{
public:
    PLStonewall13_2915(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 13", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6637);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall13_2915(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall13_2915(x, y);
}
class PLSignUp_2916 : public Backdrop
{
public:
    PLSignUp_2916(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_SignUp", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12772);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plsignup_2916(int x, int y)
{
    return new (Backdrop::pool.create()) PLSignUp_2916(x, y);
}
class PLSignUp2_2917 : public Backdrop
{
public:
    PLSignUp2_2917(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_SignUp 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12762);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plsignup2_2917(int x, int y)
{
    return new (Backdrop::pool.create()) PLSignUp2_2917(x, y);
}
class PLBrickWall1_2918 : public Backdrop
{
public:
    PLBrickWall1_2918(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 1", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(102);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall1_2918(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall1_2918(x, y);
}
class PLBrickWall2_2919 : public Backdrop
{
public:
    PLBrickWall2_2919(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12765);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall2_2919(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall2_2919(x, y);
}
class PLPinwheelStalk_2920 : public Backdrop
{
public:
    PLPinwheelStalk_2920(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_PinwheelStalk", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13559);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plpinwheelstalk_2920(int x, int y)
{
    return new (Backdrop::pool.create()) PLPinwheelStalk_2920(x, y);
}
class PLBrickWall5_2921 : public Backdrop
{
public:
    PLBrickWall5_2921(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12769);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall5_2921(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall5_2921(x, y);
}
class PLPlant3_2922 : public Backdrop
{
public:
    PLPlant3_2922(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Plant 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12688);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plplant3_2922(int x, int y)
{
    return new (Backdrop::pool.create()) PLPlant3_2922(x, y);
}
class PLBrickWall3_2923 : public Backdrop
{
public:
    PLBrickWall3_2923(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12764);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall3_2923(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall3_2923(x, y);
}
class PLStonewall11_2924 : public Backdrop
{
public:
    PLStonewall11_2924(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 11", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12705);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall11_2924(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall11_2924(x, y);
}
class PLGround8_2925 : public Backdrop
{
public:
    PLGround8_2925(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 8", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13583);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground8_2925(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround8_2925(x, y);
}
class PLStonewall3_2926 : public Backdrop
{
public:
    PLStonewall3_2926(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12656);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall3_2926(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall3_2926(x, y);
}
class PLStonewall8_2927 : public Backdrop
{
public:
    PLStonewall8_2927(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 8", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12314);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall8_2927(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall8_2927(x, y);
}
class PLStonewall9_2928 : public Backdrop
{
public:
    PLStonewall9_2928(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 9", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12316);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall9_2928(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall9_2928(x, y);
}
class PLStonewall22_2929 : public Backdrop
{
public:
    PLStonewall22_2929(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 22", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12757);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall22_2929(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall22_2929(x, y);
}
class PLStonewall20_2930 : public Backdrop
{
public:
    PLStonewall20_2930(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 20", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12754);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall20_2930(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall20_2930(x, y);
}
class PLGround4_2931 : public Backdrop
{
public:
    PLGround4_2931(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 4", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13555);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plground4_2931(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround4_2931(x, y);
}
class PLStonewall5_2932 : public Backdrop
{
public:
    PLStonewall5_2932(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 5", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12658);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall5_2932(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall5_2932(x, y);
}
class PLStonewall16_2933 : public Backdrop
{
public:
    PLStonewall16_2933(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 16", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12751);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall16_2933(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall16_2933(x, y);
}
class PLStonewall14_2934 : public Backdrop
{
public:
    PLStonewall14_2934(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 14", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12739);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall14_2934(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall14_2934(x, y);
}
class PLGround9_2935 : public Backdrop
{
public:
    PLGround9_2935(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 9", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13581);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground9_2935(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround9_2935(x, y);
}
class PLGround13_2936 : public Backdrop
{
public:
    PLGround13_2936(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 13", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13582);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground13_2936(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround13_2936(x, y);
}
class PLStonewall4_2937 : public Backdrop
{
public:
    PLStonewall4_2937(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12655);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall4_2937(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall4_2937(x, y);
}
class PLVine1_2938 : public Backdrop
{
public:
    PLVine1_2938(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Vine 1", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12871);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_plvine1_2938(int x, int y)
{
    return new (Backdrop::pool.create()) PLVine1_2938(x, y);
}
class PLGround3_2939 : public Backdrop
{
public:
    PLGround3_2939(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 3", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13553);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plground3_2939(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround3_2939(x, y);
}
class PLStonewall10_2940 : public Backdrop
{
public:
    PLStonewall10_2940(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 10", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12716);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall10_2940(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall10_2940(x, y);
}
class PLVine2_2941 : public Backdrop
{
public:
    PLVine2_2941(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Vine 2", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12872);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_plvine2_2941(int x, int y)
{
    return new (Backdrop::pool.create()) PLVine2_2941(x, y);
}
class PLStonewall15_2942 : public Backdrop
{
public:
    PLStonewall15_2942(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 15", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12738);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall15_2942(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall15_2942(x, y);
}
class PLGround1_2943 : public Backdrop
{
public:
    PLGround1_2943(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13548);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground1_2943(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround1_2943(x, y);
}
class PLGround2_2944 : public Backdrop
{
public:
    PLGround2_2944(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 2", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13552);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground2_2944(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround2_2944(x, y);
}
class PLGround5_2945 : public Backdrop
{
public:
    PLGround5_2945(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 5", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13558);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plground5_2945(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround5_2945(x, y);
}
class PLGround6_2946 : public Backdrop
{
public:
    PLGround6_2946(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 6", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13557);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plground6_2946(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround6_2946(x, y);
}
class PLStonewall7_2947 : public Backdrop
{
public:
    PLStonewall7_2947(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 7", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13556);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall7_2947(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall7_2947(x, y);
}
class PLGround10_2948 : public Backdrop
{
public:
    PLGround10_2948(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 10", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13585);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground10_2948(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround10_2948(x, y);
}
class PLGround12_2949 : public Backdrop
{
public:
    PLGround12_2949(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 12", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13580);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground12_2949(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround12_2949(x, y);
}
class PLGround11_2950 : public Backdrop
{
public:
    PLGround11_2950(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 11", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13586);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground11_2950(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround11_2950(x, y);
}
class PLGround7_2951 : public Backdrop
{
public:
    PLGround7_2951(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Ground 7", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13584);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plground7_2951(int x, int y)
{
    return new (Backdrop::pool.create()) PLGround7_2951(x, y);
}
class PLStonewall21_2952 : public Backdrop
{
public:
    PLStonewall21_2952(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 21", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12755);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall21_2952(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall21_2952(x, y);
}
class PLBrickWall4_2953 : public Backdrop
{
public:
    PLBrickWall4_2953(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 4", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12766);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall4_2953(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall4_2953(x, y);
}
class PLBrickWall6_2954 : public Backdrop
{
public:
    PLBrickWall6_2954(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_BrickWall 6", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12767);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plbrickwall6_2954(int x, int y)
{
    return new (Backdrop::pool.create()) PLBrickWall6_2954(x, y);
}
class PLStonewall19_2955 : public Backdrop
{
public:
    PLStonewall19_2955(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 19", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12752);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall19_2955(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall19_2955(x, y);
}
static Image* images_objectpinwheel_2956_0_0[1];
static Direction direction_objectpinwheel_2956_0_0 = {0, 50, 50, 0, 1, images_objectpinwheel_2956_0_0, 1};
static Animation anim_objectpinwheel_2956_0 = {&direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, NULL, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0, &direction_objectpinwheel_2956_0_0};
static Animation * anim_array_objectpinwheel_2956[1] = {&anim_objectpinwheel_2956_0};
static Animations anim_objectpinwheel_2956 = {1, &anim_array_objectpinwheel_2956[0]};
static bool anim_objectpinwheel_2956_initialized;
class ObjectPinwheel_2956 : public Active
{
public:
    ObjectPinwheel_2956(int x, int y) : Active(x, y, ObjectPinwheel_2956_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Pinwheel", 15);
#endif
        this->animations = &anim_objectpinwheel_2956;
        if (!anim_objectpinwheel_2956_initialized) {
            anim_objectpinwheel_2956_initialized = true;
            images_objectpinwheel_2956_0_0[0] = get_internal_image(13560);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 3);
    }
};
FrameObject * create_objectpinwheel_2956(int x, int y)
{
    return new (Active::pool.create()) ObjectPinwheel_2956(x, y);
}
static Image* images_pllayer11_2957_0_0[1];
static Direction direction_pllayer11_2957_0_0 = {0, 50, 50, 0, 1, images_pllayer11_2957_0_0, 1};
static Animation anim_pllayer11_2957_0 = {&direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, NULL, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0, &direction_pllayer11_2957_0_0};
static Animation * anim_array_pllayer11_2957[1] = {&anim_pllayer11_2957_0};
static Animations anim_pllayer11_2957 = {1, &anim_array_pllayer11_2957[0]};
static bool anim_pllayer11_2957_initialized;
class PLLayer11_2957 : public Active
{
public:
    PLLayer11_2957(int x, int y) : Active(x, y, PLLayer11_2957_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("PL_Layer1 1", 11);
#endif
        this->animations = &anim_pllayer11_2957;
        if (!anim_pllayer11_2957_initialized) {
            anim_pllayer11_2957_initialized = true;
            images_pllayer11_2957_0_0[0] = get_internal_image(13580);
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
FrameObject * create_pllayer11_2957(int x, int y)
{
    return new (Active::pool.create()) PLLayer11_2957(x, y);
}
static Image* images_pllayer01_2958_0_0[1];
static Direction direction_pllayer01_2958_0_0 = {0, 50, 50, 0, 1, images_pllayer01_2958_0_0, 1};
static Animation anim_pllayer01_2958_0 = {&direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, NULL, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0, &direction_pllayer01_2958_0_0};
static Animation * anim_array_pllayer01_2958[1] = {&anim_pllayer01_2958_0};
static Animations anim_pllayer01_2958 = {1, &anim_array_pllayer01_2958[0]};
static bool anim_pllayer01_2958_initialized;
class PLLayer01_2958 : public Active
{
public:
    PLLayer01_2958(int x, int y) : Active(x, y, PLLayer01_2958_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("PL_Layer0 1", 11);
#endif
        this->animations = &anim_pllayer01_2958;
        if (!anim_pllayer01_2958_initialized) {
            anim_pllayer01_2958_initialized = true;
            images_pllayer01_2958_0_0[0] = get_internal_image(13581);
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
FrameObject * create_pllayer01_2958(int x, int y)
{
    return new (Active::pool.create()) PLLayer01_2958(x, y);
}
static Image* images_pllayer02_2959_0_0[1];
static Direction direction_pllayer02_2959_0_0 = {0, 50, 50, 0, 1, images_pllayer02_2959_0_0, 1};
static Animation anim_pllayer02_2959_0 = {&direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, NULL, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0, &direction_pllayer02_2959_0_0};
static Animation * anim_array_pllayer02_2959[1] = {&anim_pllayer02_2959_0};
static Animations anim_pllayer02_2959 = {1, &anim_array_pllayer02_2959[0]};
static bool anim_pllayer02_2959_initialized;
class PLLayer02_2959 : public Active
{
public:
    PLLayer02_2959(int x, int y) : Active(x, y, PLLayer02_2959_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("PL_Layer0 2", 11);
#endif
        this->animations = &anim_pllayer02_2959;
        if (!anim_pllayer02_2959_initialized) {
            anim_pllayer02_2959_initialized = true;
            images_pllayer02_2959_0_0[0] = get_internal_image(13585);
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
FrameObject * create_pllayer02_2959(int x, int y)
{
    return new (Active::pool.create()) PLLayer02_2959(x, y);
}
static Image* images_enemysunflora_2960_0_0[7];
static Direction direction_enemysunflora_2960_0_0 = {0, 0, 0, 0, -1, images_enemysunflora_2960_0_0, 7};
static Animation anim_enemysunflora_2960_0 = {&direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, NULL, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0, &direction_enemysunflora_2960_0_0};
static Image* images_enemysunflora_2960_5_0[1];
static Direction direction_enemysunflora_2960_5_0 = {0, 50, 50, 0, 1, images_enemysunflora_2960_5_0, 1};
static Animation anim_enemysunflora_2960_5 = {&direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, NULL, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0, &direction_enemysunflora_2960_5_0};
static Image* images_enemysunflora_2960_10_0[6];
static Direction direction_enemysunflora_2960_10_0 = {0, 50, 50, 2, -1, images_enemysunflora_2960_10_0, 6};
static Image* images_enemysunflora_2960_10_16[6];
static Direction direction_enemysunflora_2960_10_16 = {16, 50, 50, 2, -1, images_enemysunflora_2960_10_16, 6};
static Animation anim_enemysunflora_2960_10 = {&direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, NULL, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, &direction_enemysunflora_2960_10_16, NULL, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0, &direction_enemysunflora_2960_10_0};
static Image* images_enemysunflora_2960_11_0[1];
static Direction direction_enemysunflora_2960_11_0 = {0, 50, 50, 0, -1, images_enemysunflora_2960_11_0, 1};
static Image* images_enemysunflora_2960_11_16[1];
static Direction direction_enemysunflora_2960_11_16 = {16, 50, 50, 0, -1, images_enemysunflora_2960_11_16, 1};
static Animation anim_enemysunflora_2960_11 = {&direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, NULL, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, &direction_enemysunflora_2960_11_16, NULL, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0, &direction_enemysunflora_2960_11_0};
static Animation * anim_array_enemysunflora_2960[12] = {&anim_enemysunflora_2960_0, NULL, NULL, NULL, NULL, &anim_enemysunflora_2960_5, NULL, NULL, NULL, NULL, &anim_enemysunflora_2960_10, &anim_enemysunflora_2960_11};
static Animations anim_enemysunflora_2960 = {12, &anim_array_enemysunflora_2960[0]};
static bool anim_enemysunflora_2960_initialized;
class EnemySunflora_2960 : public Active
{
public:
    EnemySunflora_2960(int x, int y) : Active(x, y, EnemySunflora_2960_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Sunflora", 14);
#endif
        this->animations = &anim_enemysunflora_2960;
        if (!anim_enemysunflora_2960_initialized) {
            anim_enemysunflora_2960_initialized = true;
            images_enemysunflora_2960_0_0[0] = get_internal_image(12678);
            images_enemysunflora_2960_0_0[1] = get_internal_image(12679);
            images_enemysunflora_2960_0_0[2] = get_internal_image(12691);
            images_enemysunflora_2960_0_0[3] = get_internal_image(12692);
            images_enemysunflora_2960_0_0[4] = get_internal_image(12690);
            images_enemysunflora_2960_0_0[5] = get_internal_image(12689);
            images_enemysunflora_2960_0_0[6] = get_internal_image(6635);
            images_enemysunflora_2960_5_0[0] = get_internal_image(12680);
            images_enemysunflora_2960_10_0[0] = get_internal_image(12695);
            images_enemysunflora_2960_10_0[1] = get_internal_image(12697);
            images_enemysunflora_2960_10_0[2] = get_internal_image(12698);
            images_enemysunflora_2960_10_0[3] = get_internal_image(12693);
            images_enemysunflora_2960_10_0[4] = get_internal_image(12687);
            images_enemysunflora_2960_10_0[5] = get_internal_image(12694);
            images_enemysunflora_2960_10_16[0] = get_internal_image(12678);
            images_enemysunflora_2960_10_16[1] = get_internal_image(12696);
            images_enemysunflora_2960_10_16[2] = get_internal_image(12699);
            images_enemysunflora_2960_10_16[3] = get_internal_image(12700);
            images_enemysunflora_2960_10_16[4] = get_internal_image(12701);
            images_enemysunflora_2960_10_16[5] = get_internal_image(12702);
            images_enemysunflora_2960_11_0[0] = get_internal_image(12698);
            images_enemysunflora_2960_11_16[0] = get_internal_image(12699);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 12);
        alterables->values.set(5, 1);
    }
};
FrameObject * create_enemysunflora_2960(int x, int y)
{
    return new (Active::pool.create()) EnemySunflora_2960(x, y);
}
static Image* images_enemystingernest_2961_0_0[1];
static Direction direction_enemystingernest_2961_0_0 = {0, 50, 50, 0, 1, images_enemystingernest_2961_0_0, 1};
static Image* images_enemystingernest_2961_0_8[1];
static Direction direction_enemystingernest_2961_0_8 = {8, 50, 50, 0, 1, images_enemystingernest_2961_0_8, 1};
static Animation anim_enemystingernest_2961_0 = {&direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, NULL, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, &direction_enemystingernest_2961_0_8, NULL, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0, &direction_enemystingernest_2961_0_0};
static Image* images_enemystingernest_2961_8_0[2];
static Direction direction_enemystingernest_2961_8_0 = {0, 50, 50, 0, -1, images_enemystingernest_2961_8_0, 2};
static Animation anim_enemystingernest_2961_8 = {&direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, NULL, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0, &direction_enemystingernest_2961_8_0};
static Animation * anim_array_enemystingernest_2961[9] = {&anim_enemystingernest_2961_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemystingernest_2961_8};
static Animations anim_enemystingernest_2961 = {9, &anim_array_enemystingernest_2961[0]};
static bool anim_enemystingernest_2961_initialized;
class EnemyStingerNest_2961 : public Active
{
public:
    EnemyStingerNest_2961(int x, int y) : Active(x, y, EnemyStingerNest_2961_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_StingerNest", 17);
#endif
        this->animations = &anim_enemystingernest_2961;
        if (!anim_enemystingernest_2961_initialized) {
            anim_enemystingernest_2961_initialized = true;
            images_enemystingernest_2961_0_0[0] = get_internal_image(13578);
            images_enemystingernest_2961_0_8[0] = get_internal_image(6633);
            images_enemystingernest_2961_8_0[0] = get_internal_image(13579);
            images_enemystingernest_2961_8_0[1] = get_internal_image(13578);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 25);
        alterables->values.set(6, 15);
    }
};
FrameObject * create_enemystingernest_2961(int x, int y)
{
    return new (Active::pool.create()) EnemyStingerNest_2961(x, y);
}
static Image* images_active_2962_0_0[1];
static Direction direction_active_2962_0_0 = {0, 50, 50, 0, 1, images_active_2962_0_0, 1};
static Animation anim_active_2962_0 = {&direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, NULL, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0, &direction_active_2962_0_0};
static Animation * anim_array_active_2962[1] = {&anim_active_2962_0};
static Animations anim_active_2962 = {1, &anim_array_active_2962[0]};
static bool anim_active_2962_initialized;
class Active_2962 : public Active
{
public:
    Active_2962(int x, int y) : Active(x, y, Active_2962_type)
    {
        // qualifiers: 15
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_2962;
        if (!anim_active_2962_initialized) {
            anim_active_2962_initialized = true;
            images_active_2962_0_0[0] = get_internal_image(12605);
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
FrameObject * create_active_2962(int x, int y)
{
    return new (Active::pool.create()) Active_2962(x, y);
}
static Image* images_objectcyclonetop_2963_0_0[2];
static Direction direction_objectcyclonetop_2963_0_0 = {0, 10, 10, 0, -1, images_objectcyclonetop_2963_0_0, 2};
static Image* images_objectcyclonetop_2963_0_1[6];
static Direction direction_objectcyclonetop_2963_0_1 = {1, 70, 70, 0, -1, images_objectcyclonetop_2963_0_1, 6};
static Image* images_objectcyclonetop_2963_0_2[12];
static Direction direction_objectcyclonetop_2963_0_2 = {2, 70, 70, 0, -1, images_objectcyclonetop_2963_0_2, 12};
static Animation anim_objectcyclonetop_2963_0 = {&direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_1, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, &direction_objectcyclonetop_2963_0_2, NULL, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0, &direction_objectcyclonetop_2963_0_0};
static Image* images_objectcyclonetop_2963_7_0[7];
static Direction direction_objectcyclonetop_2963_7_0 = {0, 50, 50, 0, 1, images_objectcyclonetop_2963_7_0, 7};
static Animation anim_objectcyclonetop_2963_7 = {&direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, NULL, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0, &direction_objectcyclonetop_2963_7_0};
static Animation * anim_array_objectcyclonetop_2963[8] = {&anim_objectcyclonetop_2963_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectcyclonetop_2963_7};
static Animations anim_objectcyclonetop_2963 = {8, &anim_array_objectcyclonetop_2963[0]};
static bool anim_objectcyclonetop_2963_initialized;
class ObjectCycloneTop_2963 : public Active
{
public:
    ObjectCycloneTop_2963(int x, int y) : Active(x, y, ObjectCycloneTop_2963_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_CycloneTop", 17);
#endif
        this->animations = &anim_objectcyclonetop_2963;
        if (!anim_objectcyclonetop_2963_initialized) {
            anim_objectcyclonetop_2963_initialized = true;
            images_objectcyclonetop_2963_0_0[0] = get_internal_image(12718);
            images_objectcyclonetop_2963_0_0[1] = get_internal_image(12756);
            images_objectcyclonetop_2963_0_1[0] = get_internal_image(12718);
            images_objectcyclonetop_2963_0_1[1] = get_internal_image(12583);
            images_objectcyclonetop_2963_0_1[2] = get_internal_image(12683);
            images_objectcyclonetop_2963_0_1[3] = get_internal_image(12703);
            images_objectcyclonetop_2963_0_1[4] = get_internal_image(12682);
            images_objectcyclonetop_2963_0_1[5] = get_internal_image(12732);
            images_objectcyclonetop_2963_0_2[0] = get_internal_image(12718);
            images_objectcyclonetop_2963_0_2[1] = get_internal_image(12583);
            images_objectcyclonetop_2963_0_2[2] = get_internal_image(12683);
            images_objectcyclonetop_2963_0_2[3] = get_internal_image(12703);
            images_objectcyclonetop_2963_0_2[4] = get_internal_image(12682);
            images_objectcyclonetop_2963_0_2[5] = get_internal_image(12732);
            images_objectcyclonetop_2963_0_2[6] = get_internal_image(12744);
            images_objectcyclonetop_2963_0_2[7] = get_internal_image(12746);
            images_objectcyclonetop_2963_0_2[8] = get_internal_image(12747);
            images_objectcyclonetop_2963_0_2[9] = get_internal_image(12748);
            images_objectcyclonetop_2963_0_2[10] = get_internal_image(12749);
            images_objectcyclonetop_2963_0_2[11] = get_internal_image(12750);
            images_objectcyclonetop_2963_7_0[0] = get_internal_image(11445);
            images_objectcyclonetop_2963_7_0[1] = get_internal_image(11446);
            images_objectcyclonetop_2963_7_0[2] = get_internal_image(11445);
            images_objectcyclonetop_2963_7_0[3] = get_internal_image(11446);
            images_objectcyclonetop_2963_7_0[4] = get_internal_image(11437);
            images_objectcyclonetop_2963_7_0[5] = get_internal_image(11444);
            images_objectcyclonetop_2963_7_0[6] = get_internal_image(11437);
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
FrameObject * create_objectcyclonetop_2963(int x, int y)
{
    return new (Active::pool.create()) ObjectCycloneTop_2963(x, y);
}
static Image* images_pllayer12_2964_0_0[1];
static Direction direction_pllayer12_2964_0_0 = {0, 50, 50, 0, 1, images_pllayer12_2964_0_0, 1};
static Animation anim_pllayer12_2964_0 = {&direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, NULL, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0, &direction_pllayer12_2964_0_0};
static Animation * anim_array_pllayer12_2964[1] = {&anim_pllayer12_2964_0};
static Animations anim_pllayer12_2964 = {1, &anim_array_pllayer12_2964[0]};
static bool anim_pllayer12_2964_initialized;
class PLLayer12_2964 : public Active
{
public:
    PLLayer12_2964(int x, int y) : Active(x, y, PLLayer12_2964_type)
    {
        // qualifiers: 14, 18
#ifndef NDEBUG
        name = std::string("PL_Layer1 2", 11);
#endif
        this->animations = &anim_pllayer12_2964;
        if (!anim_pllayer12_2964_initialized) {
            anim_pllayer12_2964_initialized = true;
            images_pllayer12_2964_0_0[0] = get_internal_image(10763);
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
FrameObject * create_pllayer12_2964(int x, int y)
{
    return new (Active::pool.create()) PLLayer12_2964(x, y);
}
static Image* images_objecttimegate_2965_0_0[1];
static Direction direction_objecttimegate_2965_0_0 = {0, 16, 16, 0, -1, images_objecttimegate_2965_0_0, 1};
static Animation anim_objecttimegate_2965_0 = {&direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, NULL, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0, &direction_objecttimegate_2965_0_0};
static Animation * anim_array_objecttimegate_2965[1] = {&anim_objecttimegate_2965_0};
static Animations anim_objecttimegate_2965 = {1, &anim_array_objecttimegate_2965[0]};
static bool anim_objecttimegate_2965_initialized;
class ObjectTimeGate_2965 : public Active
{
public:
    ObjectTimeGate_2965(int x, int y) : Active(x, y, ObjectTimeGate_2965_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_TimeGate", 15);
#endif
        set_visible(false);
        this->animations = &anim_objecttimegate_2965;
        if (!anim_objecttimegate_2965_initialized) {
            anim_objecttimegate_2965_initialized = true;
            images_objecttimegate_2965_0_0[0] = get_internal_image(12598);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_objecttimegate_2965(int x, int y)
{
    return new (Active::pool.create()) ObjectTimeGate_2965(x, y);
}
static Image* images_objecttimegatepiece_2966_0_0[2];
static Direction direction_objecttimegatepiece_2966_0_0 = {0, 17, 17, 0, -1, images_objecttimegatepiece_2966_0_0, 2};
static Animation anim_objecttimegatepiece_2966_0 = {&direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, NULL, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0, &direction_objecttimegatepiece_2966_0_0};
static Image* images_objecttimegatepiece_2966_7_0[2];
static Direction direction_objecttimegatepiece_2966_7_0 = {0, 50, 50, 0, -1, images_objecttimegatepiece_2966_7_0, 2};
static Animation anim_objecttimegatepiece_2966_7 = {&direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, NULL, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0, &direction_objecttimegatepiece_2966_7_0};
static Animation * anim_array_objecttimegatepiece_2966[8] = {&anim_objecttimegatepiece_2966_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objecttimegatepiece_2966_7};
static Animations anim_objecttimegatepiece_2966 = {8, &anim_array_objecttimegatepiece_2966[0]};
static bool anim_objecttimegatepiece_2966_initialized;
class ObjectTimeGatePiece_2966 : public Active
{
public:
    ObjectTimeGatePiece_2966(int x, int y) : Active(x, y, ObjectTimeGatePiece_2966_type)
    {
        // qualifiers: 29
#ifndef NDEBUG
        name = std::string("Object_TimeGatePiece", 20);
#endif
        this->animations = &anim_objecttimegatepiece_2966;
        if (!anim_objecttimegatepiece_2966_initialized) {
            anim_objecttimegatepiece_2966_initialized = true;
            images_objecttimegatepiece_2966_0_0[0] = get_internal_image(493);
            images_objecttimegatepiece_2966_0_0[1] = get_internal_image(1778);
            images_objecttimegatepiece_2966_7_0[0] = get_internal_image(447);
            images_objecttimegatepiece_2966_7_0[1] = get_internal_image(494);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(24);
        create_alterables();
        alterables->values.set(2, 50);
    }
};
FrameObject * create_objecttimegatepiece_2966(int x, int y)
{
    return new (Active::pool.create()) ObjectTimeGatePiece_2966(x, y);
}
static Image* images_levellagoonplatform1_2967_0_0[1];
static Direction direction_levellagoonplatform1_2967_0_0 = {0, 100, 100, 0, 1, images_levellagoonplatform1_2967_0_0, 1};
static Animation anim_levellagoonplatform1_2967_0 = {&direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, NULL, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0, &direction_levellagoonplatform1_2967_0_0};
static Animation * anim_array_levellagoonplatform1_2967[1] = {&anim_levellagoonplatform1_2967_0};
static Animations anim_levellagoonplatform1_2967 = {1, &anim_array_levellagoonplatform1_2967[0]};
static bool anim_levellagoonplatform1_2967_initialized;
class LevelLagoonPlatform1_2967 : public Active
{
public:
    LevelLagoonPlatform1_2967(int x, int y) : Active(x, y, LevelLagoonPlatform1_2967_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_LagoonPlatform1", 21);
#endif
        this->animations = &anim_levellagoonplatform1_2967;
        if (!anim_levellagoonplatform1_2967_initialized) {
            anim_levellagoonplatform1_2967_initialized = true;
            images_levellagoonplatform1_2967_0_0[0] = get_internal_image(12778);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 50);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levellagoonplatform1_2967(int x, int y)
{
    return new (Active::pool.create()) LevelLagoonPlatform1_2967(x, y);
}
class PLStonewall18_2968 : public Backdrop
{
public:
    PLStonewall18_2968(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 18", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12758);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall18_2968(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall18_2968(x, y);
}
class PLStonewall17_2969 : public Backdrop
{
public:
    PLStonewall17_2969(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 17", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12753);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall17_2969(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall17_2969(x, y);
}
static Image* images_gimmickbowarrowplatform_2970_0_0[1];
static Direction direction_gimmickbowarrowplatform_2970_0_0 = {0, 50, 50, 0, 1, images_gimmickbowarrowplatform_2970_0_0, 1};
static Animation anim_gimmickbowarrowplatform_2970_0 = {&direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, NULL, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0, &direction_gimmickbowarrowplatform_2970_0_0};
static Animation * anim_array_gimmickbowarrowplatform_2970[1] = {&anim_gimmickbowarrowplatform_2970_0};
static Animations anim_gimmickbowarrowplatform_2970 = {1, &anim_array_gimmickbowarrowplatform_2970[0]};
static bool anim_gimmickbowarrowplatform_2970_initialized;
class GimmickBowArrowPlatform_2970 : public Active
{
public:
    GimmickBowArrowPlatform_2970(int x, int y) : Active(x, y, GimmickBowArrowPlatform_2970_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Gimmick_BowArrowPlatform", 24);
#endif
        set_visible(false);
        this->animations = &anim_gimmickbowarrowplatform_2970;
        if (!anim_gimmickbowarrowplatform_2970_initialized) {
            anim_gimmickbowarrowplatform_2970_initialized = true;
            images_gimmickbowarrowplatform_2970_0_0[0] = get_internal_image(12782);
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
FrameObject * create_gimmickbowarrowplatform_2970(int x, int y)
{
    return new (Active::pool.create()) GimmickBowArrowPlatform_2970(x, y);
}
static Image* images_breakableplrockpiece_2971_0_0[1];
static Direction direction_breakableplrockpiece_2971_0_0 = {0, 100, 100, 0, 1, images_breakableplrockpiece_2971_0_0, 1};
static Animation anim_breakableplrockpiece_2971_0 = {&direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, NULL, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0, &direction_breakableplrockpiece_2971_0_0};
static Animation * anim_array_breakableplrockpiece_2971[1] = {&anim_breakableplrockpiece_2971_0};
static Animations anim_breakableplrockpiece_2971 = {1, &anim_array_breakableplrockpiece_2971[0]};
static bool anim_breakableplrockpiece_2971_initialized;
class BreakablePLRockPiece_2971 : public Active
{
public:
    BreakablePLRockPiece_2971(int x, int y) : Active(x, y, BreakablePLRockPiece_2971_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakablePLRock_piece", 21);
#endif
        this->animations = &anim_breakableplrockpiece_2971;
        if (!anim_breakableplrockpiece_2971_initialized) {
            anim_breakableplrockpiece_2971_initialized = true;
            images_breakableplrockpiece_2971_0_0[0] = get_internal_image(12805);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_breakableplrockpiece_2971(int x, int y)
{
    return new (Active::pool.create()) BreakablePLRockPiece_2971(x, y);
}
static Image* images_enemyterreondebris_2972_0_0[6];
static Direction direction_enemyterreondebris_2972_0_0 = {0, 0, 0, 0, 1, images_enemyterreondebris_2972_0_0, 6};
static Animation anim_enemyterreondebris_2972_0 = {&direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, NULL, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0, &direction_enemyterreondebris_2972_0_0};
static Animation * anim_array_enemyterreondebris_2972[1] = {&anim_enemyterreondebris_2972_0};
static Animations anim_enemyterreondebris_2972 = {1, &anim_array_enemyterreondebris_2972[0]};
static bool anim_enemyterreondebris_2972_initialized;
class EnemyTerreondebris_2972 : public Active
{
public:
    EnemyTerreondebris_2972(int x, int y) : Active(x, y, EnemyTerreondebris_2972_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Terreondebris", 19);
#endif
        this->animations = &anim_enemyterreondebris_2972;
        if (!anim_enemyterreondebris_2972_initialized) {
            anim_enemyterreondebris_2972_initialized = true;
            images_enemyterreondebris_2972_0_0[0] = get_internal_image(12797);
            images_enemyterreondebris_2972_0_0[1] = get_internal_image(12798);
            images_enemyterreondebris_2972_0_0[2] = get_internal_image(12799);
            images_enemyterreondebris_2972_0_0[3] = get_internal_image(12800);
            images_enemyterreondebris_2972_0_0[4] = get_internal_image(12780);
            images_enemyterreondebris_2972_0_0[5] = get_internal_image(12801);
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
FrameObject * create_enemyterreondebris_2972(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreondebris_2972(x, y);
}
class PLMask_2973 : public Backdrop
{
public:
    PLMask_2973(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Mask", 7);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13587);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plmask_2973(int x, int y)
{
    return new (Backdrop::pool.create()) PLMask_2973(x, y);
}
static Image* images_gimmickbowstring_2974_0_0[1];
static Direction direction_gimmickbowstring_2974_0_0 = {0, 50, 50, 0, 1, images_gimmickbowstring_2974_0_0, 1};
static Animation anim_gimmickbowstring_2974_0 = {&direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, NULL, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0, &direction_gimmickbowstring_2974_0_0};
static Animation * anim_array_gimmickbowstring_2974[1] = {&anim_gimmickbowstring_2974_0};
static Animations anim_gimmickbowstring_2974 = {1, &anim_array_gimmickbowstring_2974[0]};
static bool anim_gimmickbowstring_2974_initialized;
class GimmickBowString_2974 : public Active
{
public:
    GimmickBowString_2974(int x, int y) : Active(x, y, GimmickBowString_2974_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BowString", 17);
#endif
        this->animations = &anim_gimmickbowstring_2974;
        if (!anim_gimmickbowstring_2974_initialized) {
            anim_gimmickbowstring_2974_initialized = true;
            images_gimmickbowstring_2974_0_0[0] = get_internal_image(13593);
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
FrameObject * create_gimmickbowstring_2974(int x, int y)
{
    return new (Active::pool.create()) GimmickBowString_2974(x, y);
}
class PLBow_2975 : public Backdrop
{
public:
    PLBow_2975(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Bow", 6);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13590);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plbow_2975(int x, int y)
{
    return new (Backdrop::pool.create()) PLBow_2975(x, y);
}
class PLStonewall22_2976 : public Backdrop
{
public:
    PLStonewall22_2976(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 22", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12804);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall22_2976(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall22_2976(x, y);
}
class PLStonewall23_2977 : public Backdrop
{
public:
    PLStonewall23_2977(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 23", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12803);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_plstonewall23_2977(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall23_2977(x, y);
}
class PLStonewall24_2978 : public Backdrop
{
public:
    PLStonewall24_2978(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 24", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12757);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall24_2978(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall24_2978(x, y);
}
static Image* images_gimmickbowarrow_2979_0_0[1];
static Direction direction_gimmickbowarrow_2979_0_0 = {0, 50, 50, 0, 1, images_gimmickbowarrow_2979_0_0, 1};
static Animation anim_gimmickbowarrow_2979_0 = {&direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, NULL, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0, &direction_gimmickbowarrow_2979_0_0};
static Animation * anim_array_gimmickbowarrow_2979[1] = {&anim_gimmickbowarrow_2979_0};
static Animations anim_gimmickbowarrow_2979 = {1, &anim_array_gimmickbowarrow_2979[0]};
static bool anim_gimmickbowarrow_2979_initialized;
class GimmickBowArrow_2979 : public Active
{
public:
    GimmickBowArrow_2979(int x, int y) : Active(x, y, GimmickBowArrow_2979_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_BowArrow", 16);
#endif
        this->animations = &anim_gimmickbowarrow_2979;
        if (!anim_gimmickbowarrow_2979_initialized) {
            anim_gimmickbowarrow_2979_initialized = true;
            images_gimmickbowarrow_2979_0_0[0] = get_internal_image(13589);
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
FrameObject * create_gimmickbowarrow_2979(int x, int y)
{
    return new (Active::pool.create()) GimmickBowArrow_2979(x, y);
}
static Image* images_levellagoonplatform2_2980_0_0[1];
static Direction direction_levellagoonplatform2_2980_0_0 = {0, 100, 100, 0, 1, images_levellagoonplatform2_2980_0_0, 1};
static Animation anim_levellagoonplatform2_2980_0 = {&direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, NULL, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0, &direction_levellagoonplatform2_2980_0_0};
static Animation * anim_array_levellagoonplatform2_2980[1] = {&anim_levellagoonplatform2_2980_0};
static Animations anim_levellagoonplatform2_2980 = {1, &anim_array_levellagoonplatform2_2980[0]};
static bool anim_levellagoonplatform2_2980_initialized;
class LevelLagoonPlatform2_2980 : public Active
{
public:
    LevelLagoonPlatform2_2980(int x, int y) : Active(x, y, LevelLagoonPlatform2_2980_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_LagoonPlatform 2", 22);
#endif
        this->animations = &anim_levellagoonplatform2_2980;
        if (!anim_levellagoonplatform2_2980_initialized) {
            anim_levellagoonplatform2_2980_initialized = true;
            images_levellagoonplatform2_2980_0_0[0] = get_internal_image(12778);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 90);
        alterables->values.set(5, 2);
        alterables->values.set(6, 128);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levellagoonplatform2_2980(int x, int y)
{
    return new (Active::pool.create()) LevelLagoonPlatform2_2980(x, y);
}
static Image* images_enemyterreonleftshoulder_2981_0_0[1];
static Direction direction_enemyterreonleftshoulder_2981_0_0 = {0, 50, 50, 0, -1, images_enemyterreonleftshoulder_2981_0_0, 1};
static Animation anim_enemyterreonleftshoulder_2981_0 = {&direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, NULL, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0, &direction_enemyterreonleftshoulder_2981_0_0};
static Image* images_enemyterreonleftshoulder_2981_8_0[2];
static Direction direction_enemyterreonleftshoulder_2981_8_0 = {0, 50, 50, 0, -1, images_enemyterreonleftshoulder_2981_8_0, 2};
static Animation anim_enemyterreonleftshoulder_2981_8 = {&direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, NULL, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0, &direction_enemyterreonleftshoulder_2981_8_0};
static Animation * anim_array_enemyterreonleftshoulder_2981[9] = {&anim_enemyterreonleftshoulder_2981_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyterreonleftshoulder_2981_8};
static Animations anim_enemyterreonleftshoulder_2981 = {9, &anim_array_enemyterreonleftshoulder_2981[0]};
static bool anim_enemyterreonleftshoulder_2981_initialized;
class EnemyTerreonLeftShoulder_2981 : public Active
{
public:
    EnemyTerreonLeftShoulder_2981(int x, int y) : Active(x, y, EnemyTerreonLeftShoulder_2981_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TerreonLeftShoulder", 25);
#endif
        this->animations = &anim_enemyterreonleftshoulder_2981;
        if (!anim_enemyterreonleftshoulder_2981_initialized) {
            anim_enemyterreonleftshoulder_2981_initialized = true;
            images_enemyterreonleftshoulder_2981_0_0[0] = get_internal_image(12780);
            images_enemyterreonleftshoulder_2981_8_0[0] = get_internal_image(12781);
            images_enemyterreonleftshoulder_2981_8_0[1] = get_internal_image(12780);
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
FrameObject * create_enemyterreonleftshoulder_2981(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreonLeftShoulder_2981(x, y);
}
static Image* images_enemyterreonrightshoulder_2982_0_0[1];
static Direction direction_enemyterreonrightshoulder_2982_0_0 = {0, 50, 50, 0, -1, images_enemyterreonrightshoulder_2982_0_0, 1};
static Animation anim_enemyterreonrightshoulder_2982_0 = {&direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, NULL, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0, &direction_enemyterreonrightshoulder_2982_0_0};
static Image* images_enemyterreonrightshoulder_2982_8_0[2];
static Direction direction_enemyterreonrightshoulder_2982_8_0 = {0, 50, 50, 0, -1, images_enemyterreonrightshoulder_2982_8_0, 2};
static Animation anim_enemyterreonrightshoulder_2982_8 = {&direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, NULL, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0, &direction_enemyterreonrightshoulder_2982_8_0};
static Animation * anim_array_enemyterreonrightshoulder_2982[9] = {&anim_enemyterreonrightshoulder_2982_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyterreonrightshoulder_2982_8};
static Animations anim_enemyterreonrightshoulder_2982 = {9, &anim_array_enemyterreonrightshoulder_2982[0]};
static bool anim_enemyterreonrightshoulder_2982_initialized;
class EnemyTerreonRightShoulder_2982 : public Active
{
public:
    EnemyTerreonRightShoulder_2982(int x, int y) : Active(x, y, EnemyTerreonRightShoulder_2982_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_TerreonRightShoulder", 26);
#endif
        this->animations = &anim_enemyterreonrightshoulder_2982;
        if (!anim_enemyterreonrightshoulder_2982_initialized) {
            anim_enemyterreonrightshoulder_2982_initialized = true;
            images_enemyterreonrightshoulder_2982_0_0[0] = get_internal_image(12783);
            images_enemyterreonrightshoulder_2982_8_0[0] = get_internal_image(12784);
            images_enemyterreonrightshoulder_2982_8_0[1] = get_internal_image(12783);
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
FrameObject * create_enemyterreonrightshoulder_2982(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreonRightShoulder_2982(x, y);
}
static Image* images_enemyterreonleftleg_2983_0_16[1];
static Direction direction_enemyterreonleftleg_2983_0_16 = {16, 50, 50, 0, -1, images_enemyterreonleftleg_2983_0_16, 1};
static Animation anim_enemyterreonleftleg_2983_0 = {NULL, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16, &direction_enemyterreonleftleg_2983_0_16};
static Image* images_enemyterreonleftleg_2983_8_0[2];
static Direction direction_enemyterreonleftleg_2983_8_0 = {0, 50, 50, 0, -1, images_enemyterreonleftleg_2983_8_0, 2};
static Animation anim_enemyterreonleftleg_2983_8 = {&direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, NULL, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0, &direction_enemyterreonleftleg_2983_8_0};
static Animation * anim_array_enemyterreonleftleg_2983[9] = {&anim_enemyterreonleftleg_2983_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyterreonleftleg_2983_8};
static Animations anim_enemyterreonleftleg_2983 = {9, &anim_array_enemyterreonleftleg_2983[0]};
static bool anim_enemyterreonleftleg_2983_initialized;
class EnemyTerreonLeftLeg_2983 : public Active
{
public:
    EnemyTerreonLeftLeg_2983(int x, int y) : Active(x, y, EnemyTerreonLeftLeg_2983_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_TerreonLeftLeg", 20);
#endif
        this->animations = &anim_enemyterreonleftleg_2983;
        if (!anim_enemyterreonleftleg_2983_initialized) {
            anim_enemyterreonleftleg_2983_initialized = true;
            images_enemyterreonleftleg_2983_0_16[0] = get_internal_image(12786);
            images_enemyterreonleftleg_2983_8_0[0] = get_internal_image(12787);
            images_enemyterreonleftleg_2983_8_0[1] = get_internal_image(12786);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
    }
};
FrameObject * create_enemyterreonleftleg_2983(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreonLeftLeg_2983(x, y);
}
static Image* images_enemyterreonrightleg_2984_0_16[1];
static Direction direction_enemyterreonrightleg_2984_0_16 = {16, 50, 50, 0, -1, images_enemyterreonrightleg_2984_0_16, 1};
static Animation anim_enemyterreonrightleg_2984_0 = {NULL, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16, &direction_enemyterreonrightleg_2984_0_16};
static Image* images_enemyterreonrightleg_2984_8_0[2];
static Direction direction_enemyterreonrightleg_2984_8_0 = {0, 50, 50, 0, -1, images_enemyterreonrightleg_2984_8_0, 2};
static Animation anim_enemyterreonrightleg_2984_8 = {&direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, NULL, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0, &direction_enemyterreonrightleg_2984_8_0};
static Animation * anim_array_enemyterreonrightleg_2984[9] = {&anim_enemyterreonrightleg_2984_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyterreonrightleg_2984_8};
static Animations anim_enemyterreonrightleg_2984 = {9, &anim_array_enemyterreonrightleg_2984[0]};
static bool anim_enemyterreonrightleg_2984_initialized;
class EnemyTerreonRightLeg_2984 : public Active
{
public:
    EnemyTerreonRightLeg_2984(int x, int y) : Active(x, y, EnemyTerreonRightLeg_2984_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_TerreonRightLeg", 21);
#endif
        this->animations = &anim_enemyterreonrightleg_2984;
        if (!anim_enemyterreonrightleg_2984_initialized) {
            anim_enemyterreonrightleg_2984_initialized = true;
            images_enemyterreonrightleg_2984_0_16[0] = get_internal_image(12789);
            images_enemyterreonrightleg_2984_8_0[0] = get_internal_image(12790);
            images_enemyterreonrightleg_2984_8_0[1] = get_internal_image(12789);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 50);
    }
};
FrameObject * create_enemyterreonrightleg_2984(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreonRightLeg_2984(x, y);
}
static Image* images_enemyterreon_2985_0_0[1];
static Direction direction_enemyterreon_2985_0_0 = {0, 50, 50, 0, -1, images_enemyterreon_2985_0_0, 1};
static Animation anim_enemyterreon_2985_0 = {&direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, NULL, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0, &direction_enemyterreon_2985_0_0};
static Image* images_enemyterreon_2985_5_0[4];
static Direction direction_enemyterreon_2985_5_0 = {0, 60, 60, 0, 2, images_enemyterreon_2985_5_0, 4};
static Animation anim_enemyterreon_2985_5 = {&direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, NULL, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0, &direction_enemyterreon_2985_5_0};
static Image* images_enemyterreon_2985_8_0[2];
static Direction direction_enemyterreon_2985_8_0 = {0, 50, 50, 0, -1, images_enemyterreon_2985_8_0, 2};
static Animation anim_enemyterreon_2985_8 = {&direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, NULL, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0, &direction_enemyterreon_2985_8_0};
static Animation * anim_array_enemyterreon_2985[9] = {&anim_enemyterreon_2985_0, NULL, NULL, NULL, NULL, &anim_enemyterreon_2985_5, NULL, NULL, &anim_enemyterreon_2985_8};
static Animations anim_enemyterreon_2985 = {9, &anim_array_enemyterreon_2985[0]};
static bool anim_enemyterreon_2985_initialized;
class EnemyTerreon_2985 : public Active
{
public:
    EnemyTerreon_2985(int x, int y) : Active(x, y, EnemyTerreon_2985_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Terreon", 13);
#endif
        this->animations = &anim_enemyterreon_2985;
        if (!anim_enemyterreon_2985_initialized) {
            anim_enemyterreon_2985_initialized = true;
            images_enemyterreon_2985_0_0[0] = get_internal_image(12791);
            images_enemyterreon_2985_5_0[0] = get_internal_image(12791);
            images_enemyterreon_2985_5_0[1] = get_internal_image(12792);
            images_enemyterreon_2985_5_0[2] = get_internal_image(12793);
            images_enemyterreon_2985_5_0[3] = get_internal_image(12794);
            images_enemyterreon_2985_8_0[0] = get_internal_image(12795);
            images_enemyterreon_2985_8_0[1] = get_internal_image(12796);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 40);
        alterables->values.set(9, 300);
    }
};
FrameObject * create_enemyterreon_2985(int x, int y)
{
    return new (Active::pool.create()) EnemyTerreon_2985(x, y);
}
static Image* images_effectterreonwarning_2986_0_0[3];
static Direction direction_effectterreonwarning_2986_0_0 = {0, 50, 50, 0, -1, images_effectterreonwarning_2986_0_0, 3};
static Animation anim_effectterreonwarning_2986_0 = {&direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, NULL, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0, &direction_effectterreonwarning_2986_0_0};
static Animation * anim_array_effectterreonwarning_2986[1] = {&anim_effectterreonwarning_2986_0};
static Animations anim_effectterreonwarning_2986 = {1, &anim_array_effectterreonwarning_2986[0]};
static bool anim_effectterreonwarning_2986_initialized;
class EffectTerreonWarning_2986 : public Active
{
public:
    EffectTerreonWarning_2986(int x, int y) : Active(x, y, EffectTerreonWarning_2986_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_TerreonWarning", 21);
#endif
        set_visible(false);
        this->animations = &anim_effectterreonwarning_2986;
        if (!anim_effectterreonwarning_2986_initialized) {
            anim_effectterreonwarning_2986_initialized = true;
            images_effectterreonwarning_2986_0_0[0] = get_internal_image(11988);
            images_effectterreonwarning_2986_0_0[1] = get_internal_image(11989);
            images_effectterreonwarning_2986_0_0[2] = get_internal_image(11990);
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
FrameObject * create_effectterreonwarning_2986(int x, int y)
{
    return new (Active::pool.create()) EffectTerreonWarning_2986(x, y);
}
static Image* images_breakableplrock_2987_0_0[1];
static Direction direction_breakableplrock_2987_0_0 = {0, 50, 50, 0, 1, images_breakableplrock_2987_0_0, 1};
static Animation anim_breakableplrock_2987_0 = {&direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, NULL, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0, &direction_breakableplrock_2987_0_0};
static Animation * anim_array_breakableplrock_2987[1] = {&anim_breakableplrock_2987_0};
static Animations anim_breakableplrock_2987 = {1, &anim_array_breakableplrock_2987[0]};
static bool anim_breakableplrock_2987_initialized;
class BreakablePLRock_2987 : public Active
{
public:
    BreakablePLRock_2987(int x, int y) : Active(x, y, BreakablePLRock_2987_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("BreakablePLRock", 15);
#endif
        this->animations = &anim_breakableplrock_2987;
        if (!anim_breakableplrock_2987_initialized) {
            anim_breakableplrock_2987_initialized = true;
            images_breakableplrock_2987_0_0[0] = get_internal_image(12806);
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
FrameObject * create_breakableplrock_2987(int x, int y)
{
    return new (Active::pool.create()) BreakablePLRock_2987(x, y);
}
class QuickBackdrop_2988 : public QuickBackdrop
{
public:
    QuickBackdrop_2988(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 1536;
        height = 384;
        image = get_internal_image(12838);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_2988(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_2988(x, y);
}
class PLRuinsEntrace_2989 : public Backdrop
{
public:
    PLRuinsEntrace_2989(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_RuinsEntrace", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12890);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plruinsentrace_2989(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuinsEntrace_2989(x, y);
}
static Image* images_gimmickhangingplswitch_2990_0_0[1];
static Direction direction_gimmickhangingplswitch_2990_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingplswitch_2990_0_0, 1};
static Animation anim_gimmickhangingplswitch_2990_0 = {&direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, NULL, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0, &direction_gimmickhangingplswitch_2990_0_0};
static Animation * anim_array_gimmickhangingplswitch_2990[1] = {&anim_gimmickhangingplswitch_2990_0};
static Animations anim_gimmickhangingplswitch_2990 = {1, &anim_array_gimmickhangingplswitch_2990[0]};
static bool anim_gimmickhangingplswitch_2990_initialized;
class GimmickHangingPLSwitch_2990 : public Active
{
public:
    GimmickHangingPLSwitch_2990(int x, int y) : Active(x, y, GimmickHangingPLSwitch_2990_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingPLSwitch", 23);
#endif
        this->animations = &anim_gimmickhangingplswitch_2990;
        if (!anim_gimmickhangingplswitch_2990_initialized) {
            anim_gimmickhangingplswitch_2990_initialized = true;
            images_gimmickhangingplswitch_2990_0_0[0] = get_internal_image(12861);
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
FrameObject * create_gimmickhangingplswitch_2990(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingPLSwitch_2990(x, y);
}
class PLDoorBack_2991 : public Backdrop
{
public:
    PLDoorBack_2991(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_DoorBack", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8761);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_pldoorback_2991(int x, int y)
{
    return new (Backdrop::pool.create()) PLDoorBack_2991(x, y);
}
class PLRuneStone_2992 : public Backdrop
{
public:
    PLRuneStone_2992(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_RuneStone", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12863);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plrunestone_2992(int x, int y)
{
    return new (Backdrop::pool.create()) PLRuneStone_2992(x, y);
}
static Image* images_objectstonedoor1_2993_0_0[1];
static Direction direction_objectstonedoor1_2993_0_0 = {0, 50, 50, 0, 1, images_objectstonedoor1_2993_0_0, 1};
static Animation anim_objectstonedoor1_2993_0 = {&direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, NULL, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0, &direction_objectstonedoor1_2993_0_0};
static Animation * anim_array_objectstonedoor1_2993[1] = {&anim_objectstonedoor1_2993_0};
static Animations anim_objectstonedoor1_2993 = {1, &anim_array_objectstonedoor1_2993[0]};
static bool anim_objectstonedoor1_2993_initialized;
class ObjectStoneDoor1_2993 : public Active
{
public:
    ObjectStoneDoor1_2993(int x, int y) : Active(x, y, ObjectStoneDoor1_2993_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_StoneDoor 1", 18);
#endif
        this->animations = &anim_objectstonedoor1_2993;
        if (!anim_objectstonedoor1_2993_initialized) {
            anim_objectstonedoor1_2993_initialized = true;
            images_objectstonedoor1_2993_0_0[0] = get_internal_image(12900);
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
FrameObject * create_objectstonedoor1_2993(int x, int y)
{
    return new (Active::pool.create()) ObjectStoneDoor1_2993(x, y);
}
static Image* images_objectstonedoor3_2994_0_0[1];
static Direction direction_objectstonedoor3_2994_0_0 = {0, 50, 50, 0, 1, images_objectstonedoor3_2994_0_0, 1};
static Animation anim_objectstonedoor3_2994_0 = {&direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, NULL, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0, &direction_objectstonedoor3_2994_0_0};
static Animation * anim_array_objectstonedoor3_2994[1] = {&anim_objectstonedoor3_2994_0};
static Animations anim_objectstonedoor3_2994 = {1, &anim_array_objectstonedoor3_2994[0]};
static bool anim_objectstonedoor3_2994_initialized;
class ObjectStoneDoor3_2994 : public Active
{
public:
    ObjectStoneDoor3_2994(int x, int y) : Active(x, y, ObjectStoneDoor3_2994_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_StoneDoor 3", 18);
#endif
        this->animations = &anim_objectstonedoor3_2994;
        if (!anim_objectstonedoor3_2994_initialized) {
            anim_objectstonedoor3_2994_initialized = true;
            images_objectstonedoor3_2994_0_0[0] = get_internal_image(12891);
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
FrameObject * create_objectstonedoor3_2994(int x, int y)
{
    return new (Active::pool.create()) ObjectStoneDoor3_2994(x, y);
}
static Image* images_objectstonedoor4_2995_0_0[1];
static Direction direction_objectstonedoor4_2995_0_0 = {0, 50, 50, 0, 1, images_objectstonedoor4_2995_0_0, 1};
static Animation anim_objectstonedoor4_2995_0 = {&direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, NULL, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0, &direction_objectstonedoor4_2995_0_0};
static Animation * anim_array_objectstonedoor4_2995[1] = {&anim_objectstonedoor4_2995_0};
static Animations anim_objectstonedoor4_2995 = {1, &anim_array_objectstonedoor4_2995[0]};
static bool anim_objectstonedoor4_2995_initialized;
class ObjectStoneDoor4_2995 : public Active
{
public:
    ObjectStoneDoor4_2995(int x, int y) : Active(x, y, ObjectStoneDoor4_2995_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_StoneDoor 4", 18);
#endif
        this->animations = &anim_objectstonedoor4_2995;
        if (!anim_objectstonedoor4_2995_initialized) {
            anim_objectstonedoor4_2995_initialized = true;
            images_objectstonedoor4_2995_0_0[0] = get_internal_image(12894);
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
FrameObject * create_objectstonedoor4_2995(int x, int y)
{
    return new (Active::pool.create()) ObjectStoneDoor4_2995(x, y);
}
static Image* images_objectstonedoor2_2996_0_0[1];
static Direction direction_objectstonedoor2_2996_0_0 = {0, 50, 50, 0, 1, images_objectstonedoor2_2996_0_0, 1};
static Animation anim_objectstonedoor2_2996_0 = {&direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, NULL, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0, &direction_objectstonedoor2_2996_0_0};
static Animation * anim_array_objectstonedoor2_2996[1] = {&anim_objectstonedoor2_2996_0};
static Animations anim_objectstonedoor2_2996 = {1, &anim_array_objectstonedoor2_2996[0]};
static bool anim_objectstonedoor2_2996_initialized;
class ObjectStoneDoor2_2996 : public Active
{
public:
    ObjectStoneDoor2_2996(int x, int y) : Active(x, y, ObjectStoneDoor2_2996_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_StoneDoor 2", 18);
#endif
        this->animations = &anim_objectstonedoor2_2996;
        if (!anim_objectstonedoor2_2996_initialized) {
            anim_objectstonedoor2_2996_initialized = true;
            images_objectstonedoor2_2996_0_0[0] = get_internal_image(12902);
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
FrameObject * create_objectstonedoor2_2996(int x, int y)
{
    return new (Active::pool.create()) ObjectStoneDoor2_2996(x, y);
}
class PLStonewall2_2997 : public Backdrop
{
public:
    PLStonewall2_2997(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_Stonewall 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8577);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_plstonewall2_2997(int x, int y)
{
    return new (Backdrop::pool.create()) PLStonewall2_2997(x, y);
}
class LevelParallaxPiece0_2998 : public SystemBox
{
public:
    LevelParallaxPiece0_2998(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_2998_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(12922);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_2998(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_2998(x, y);
}
class LevelParallaxPiece1_2999 : public SystemBox
{
public:
    LevelParallaxPiece1_2999(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_2999_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 1", 22);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 640;
        type = PATTERN_IMAGE;
        image = get_internal_image(5489);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_2999(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_2999(x, y);
}
class LevelParallaxPiece2_3000 : public SystemBox
{
public:
    LevelParallaxPiece2_3000(int x, int y) : SystemBox(x, y, LevelParallaxPiece2_3000_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 2", 22);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 154;
        type = PATTERN_IMAGE;
        image = get_internal_image(8581);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece2_3000(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece2_3000(x, y);
}
class LevelParallaxPiece3_3001 : public SystemBox
{
public:
    LevelParallaxPiece3_3001(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_3001_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 308;
        type = PATTERN_IMAGE;
        image = get_internal_image(12821);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_3001(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_3001(x, y);
}
static Image* images_enemyobelisklaser_3002_0_0[10];
static Direction direction_enemyobelisklaser_3002_0_0 = {0, 100, 100, 6, -1, images_enemyobelisklaser_3002_0_0, 10};
static Image* images_enemyobelisklaser_3002_0_16[10];
static Direction direction_enemyobelisklaser_3002_0_16 = {16, 100, 100, 6, -1, images_enemyobelisklaser_3002_0_16, 10};
static Animation anim_enemyobelisklaser_3002_0 = {&direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, NULL, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, &direction_enemyobelisklaser_3002_0_16, NULL, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0, &direction_enemyobelisklaser_3002_0_0};
static Animation * anim_array_enemyobelisklaser_3002[1] = {&anim_enemyobelisklaser_3002_0};
static Animations anim_enemyobelisklaser_3002 = {1, &anim_array_enemyobelisklaser_3002[0]};
static bool anim_enemyobelisklaser_3002_initialized;
class EnemyObeliskLaser_3002 : public Active
{
public:
    EnemyObeliskLaser_3002(int x, int y) : Active(x, y, EnemyObeliskLaser_3002_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_ObeliskLaser", 18);
#endif
        this->animations = &anim_enemyobelisklaser_3002;
        if (!anim_enemyobelisklaser_3002_initialized) {
            anim_enemyobelisklaser_3002_initialized = true;
            images_enemyobelisklaser_3002_0_0[0] = get_internal_image(12907);
            images_enemyobelisklaser_3002_0_0[1] = get_internal_image(12913);
            images_enemyobelisklaser_3002_0_0[2] = get_internal_image(12908);
            images_enemyobelisklaser_3002_0_0[3] = get_internal_image(12914);
            images_enemyobelisklaser_3002_0_0[4] = get_internal_image(12906);
            images_enemyobelisklaser_3002_0_0[5] = get_internal_image(12915);
            images_enemyobelisklaser_3002_0_0[6] = get_internal_image(12905);
            images_enemyobelisklaser_3002_0_0[7] = get_internal_image(12905);
            images_enemyobelisklaser_3002_0_0[8] = get_internal_image(12870);
            images_enemyobelisklaser_3002_0_0[9] = get_internal_image(12870);
            images_enemyobelisklaser_3002_0_16[0] = get_internal_image(12909);
            images_enemyobelisklaser_3002_0_16[1] = get_internal_image(12910);
            images_enemyobelisklaser_3002_0_16[2] = get_internal_image(12911);
            images_enemyobelisklaser_3002_0_16[3] = get_internal_image(12912);
            images_enemyobelisklaser_3002_0_16[4] = get_internal_image(12916);
            images_enemyobelisklaser_3002_0_16[5] = get_internal_image(12917);
            images_enemyobelisklaser_3002_0_16[6] = get_internal_image(12918);
            images_enemyobelisklaser_3002_0_16[7] = get_internal_image(12918);
            images_enemyobelisklaser_3002_0_16[8] = get_internal_image(12869);
            images_enemyobelisklaser_3002_0_16[9] = get_internal_image(12869);
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
FrameObject * create_enemyobelisklaser_3002(int x, int y)
{
    return new (Active::pool.create()) EnemyObeliskLaser_3002(x, y);
}
static Image* images_effectrebound_3003_0_0[1];
static Direction direction_effectrebound_3003_0_0 = {0, 50, 50, 0, 1, images_effectrebound_3003_0_0, 1};
static Animation anim_effectrebound_3003_0 = {&direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, NULL, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0, &direction_effectrebound_3003_0_0};
static Animation * anim_array_effectrebound_3003[1] = {&anim_effectrebound_3003_0};
static Animations anim_effectrebound_3003 = {1, &anim_array_effectrebound_3003[0]};
static bool anim_effectrebound_3003_initialized;
class EffectRebound_3003 : public Active
{
public:
    EffectRebound_3003(int x, int y) : Active(x, y, EffectRebound_3003_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Rebound", 14);
#endif
        this->animations = &anim_effectrebound_3003;
        if (!anim_effectrebound_3003_initialized) {
            anim_effectrebound_3003_initialized = true;
            images_effectrebound_3003_0_0[0] = get_internal_image(12880);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_effectrebound_3003(int x, int y)
{
    return new (Active::pool.create()) EffectRebound_3003(x, y);
}
static Image* images_effectrebound2_3004_0_0[1];
static Direction direction_effectrebound2_3004_0_0 = {0, 50, 50, 0, 1, images_effectrebound2_3004_0_0, 1};
static Animation anim_effectrebound2_3004_0 = {&direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, NULL, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0, &direction_effectrebound2_3004_0_0};
static Animation * anim_array_effectrebound2_3004[1] = {&anim_effectrebound2_3004_0};
static Animations anim_effectrebound2_3004 = {1, &anim_array_effectrebound2_3004[0]};
static bool anim_effectrebound2_3004_initialized;
class EffectRebound2_3004 : public Active
{
public:
    EffectRebound2_3004(int x, int y) : Active(x, y, EffectRebound2_3004_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Rebound 2", 16);
#endif
        this->animations = &anim_effectrebound2_3004;
        if (!anim_effectrebound2_3004_initialized) {
            anim_effectrebound2_3004_initialized = true;
            images_effectrebound2_3004_0_0[0] = get_internal_image(12879);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_effectrebound2_3004(int x, int y)
{
    return new (Active::pool.create()) EffectRebound2_3004(x, y);
}
static Image* images_enemywallstingerspawn_3005_0_0[1];
static Direction direction_enemywallstingerspawn_3005_0_0 = {0, 50, 50, 0, 1, images_enemywallstingerspawn_3005_0_0, 1};
static Animation anim_enemywallstingerspawn_3005_0 = {&direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, NULL, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0, &direction_enemywallstingerspawn_3005_0_0};
static Animation * anim_array_enemywallstingerspawn_3005[1] = {&anim_enemywallstingerspawn_3005_0};
static Animations anim_enemywallstingerspawn_3005 = {1, &anim_array_enemywallstingerspawn_3005[0]};
static bool anim_enemywallstingerspawn_3005_initialized;
class EnemyWallStingerSpawn_3005 : public Active
{
public:
    EnemyWallStingerSpawn_3005(int x, int y) : Active(x, y, EnemyWallStingerSpawn_3005_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_WallStingerSpawn", 22);
#endif
        set_visible(false);
        this->animations = &anim_enemywallstingerspawn_3005;
        if (!anim_enemywallstingerspawn_3005_initialized) {
            anim_enemywallstingerspawn_3005_initialized = true;
            images_enemywallstingerspawn_3005_0_0[0] = get_internal_image(12924);
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
FrameObject * create_enemywallstingerspawn_3005(int x, int y)
{
    return new (Active::pool.create()) EnemyWallStingerSpawn_3005(x, y);
}
static Image* images_enemywallstinger_3006_0_0[4];
static Direction direction_enemywallstinger_3006_0_0 = {0, 50, 50, 0, -1, images_enemywallstinger_3006_0_0, 4};
static Animation anim_enemywallstinger_3006_0 = {&direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, NULL, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0, &direction_enemywallstinger_3006_0_0};
static Animation * anim_array_enemywallstinger_3006[1] = {&anim_enemywallstinger_3006_0};
static Animations anim_enemywallstinger_3006 = {1, &anim_array_enemywallstinger_3006[0]};
static bool anim_enemywallstinger_3006_initialized;
class EnemyWallStinger_3006 : public Active
{
public:
    EnemyWallStinger_3006(int x, int y) : Active(x, y, EnemyWallStinger_3006_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_WallStinger", 17);
#endif
        this->animations = &anim_enemywallstinger_3006;
        if (!anim_enemywallstinger_3006_initialized) {
            anim_enemywallstinger_3006_initialized = true;
            images_enemywallstinger_3006_0_0[0] = get_internal_image(285);
            images_enemywallstinger_3006_0_0[1] = get_internal_image(12886);
            images_enemywallstinger_3006_0_0[2] = get_internal_image(12887);
            images_enemywallstinger_3006_0_0[3] = get_internal_image(12888);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(4, 2);
    }
};
FrameObject * create_enemywallstinger_3006(int x, int y)
{
    return new (Active::pool.create()) EnemyWallStinger_3006(x, y);
}
class QuickBackdrop_3007 : public QuickBackdrop
{
public:
    QuickBackdrop_3007(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 9184;
        height = 368;
        image = get_internal_image(12946);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_3007(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_3007(x, y);
}
class QuickBackdrop2_3008 : public QuickBackdrop
{
public:
    QuickBackdrop2_3008(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        width = 9184;
        height = 184;
        image = get_internal_image(12903);
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_3008(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_3008(x, y);
}
static Image* images_enemywallstingerback_3009_0_0[4];
static Direction direction_enemywallstingerback_3009_0_0 = {0, 50, 50, 0, -1, images_enemywallstingerback_3009_0_0, 4};
static Image* images_enemywallstingerback_3009_0_16[4];
static Direction direction_enemywallstingerback_3009_0_16 = {16, 50, 50, 0, -1, images_enemywallstingerback_3009_0_16, 4};
static Animation anim_enemywallstingerback_3009_0 = {&direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, NULL, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, &direction_enemywallstingerback_3009_0_16, NULL, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0, &direction_enemywallstingerback_3009_0_0};
static Animation * anim_array_enemywallstingerback_3009[1] = {&anim_enemywallstingerback_3009_0};
static Animations anim_enemywallstingerback_3009 = {1, &anim_array_enemywallstingerback_3009[0]};
static bool anim_enemywallstingerback_3009_initialized;
class EnemyWallStingerBack_3009 : public Active
{
public:
    EnemyWallStingerBack_3009(int x, int y) : Active(x, y, EnemyWallStingerBack_3009_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_WallStingerBack", 21);
#endif
        this->animations = &anim_enemywallstingerback_3009;
        if (!anim_enemywallstingerback_3009_initialized) {
            anim_enemywallstingerback_3009_initialized = true;
            images_enemywallstingerback_3009_0_0[0] = get_internal_image(12925);
            images_enemywallstingerback_3009_0_0[1] = get_internal_image(12926);
            images_enemywallstingerback_3009_0_0[2] = get_internal_image(12935);
            images_enemywallstingerback_3009_0_0[3] = get_internal_image(12936);
            images_enemywallstingerback_3009_0_16[0] = get_internal_image(12927);
            images_enemywallstingerback_3009_0_16[1] = get_internal_image(12928);
            images_enemywallstingerback_3009_0_16[2] = get_internal_image(12929);
            images_enemywallstingerback_3009_0_16[3] = get_internal_image(12930);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
        alterables->values.set(4, 2);
    }
};
FrameObject * create_enemywallstingerback_3009(int x, int y)
{
    return new (Active::pool.create()) EnemyWallStingerBack_3009(x, y);
}
static Image* images_wallstingerlimittop_3010_0_0[1];
static Direction direction_wallstingerlimittop_3010_0_0 = {0, 50, 50, 0, 1, images_wallstingerlimittop_3010_0_0, 1};
static Animation anim_wallstingerlimittop_3010_0 = {&direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, NULL, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0, &direction_wallstingerlimittop_3010_0_0};
static Animation * anim_array_wallstingerlimittop_3010[1] = {&anim_wallstingerlimittop_3010_0};
static Animations anim_wallstingerlimittop_3010 = {1, &anim_array_wallstingerlimittop_3010[0]};
static bool anim_wallstingerlimittop_3010_initialized;
class WallStingerLimitTop_3010 : public Active
{
public:
    WallStingerLimitTop_3010(int x, int y) : Active(x, y, WallStingerLimitTop_3010_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WallStingerLimit_Top", 20);
#endif
        this->animations = &anim_wallstingerlimittop_3010;
        if (!anim_wallstingerlimittop_3010_initialized) {
            anim_wallstingerlimittop_3010_initialized = true;
            images_wallstingerlimittop_3010_0_0[0] = get_internal_image(12901);
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
FrameObject * create_wallstingerlimittop_3010(int x, int y)
{
    return new (Active::pool.create()) WallStingerLimitTop_3010(x, y);
}
static Image* images_wallstingerlimitbottom_3011_0_0[1];
static Direction direction_wallstingerlimitbottom_3011_0_0 = {0, 50, 50, 0, 1, images_wallstingerlimitbottom_3011_0_0, 1};
static Animation anim_wallstingerlimitbottom_3011_0 = {&direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, NULL, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0, &direction_wallstingerlimitbottom_3011_0_0};
static Animation * anim_array_wallstingerlimitbottom_3011[1] = {&anim_wallstingerlimitbottom_3011_0};
static Animations anim_wallstingerlimitbottom_3011 = {1, &anim_array_wallstingerlimitbottom_3011[0]};
static bool anim_wallstingerlimitbottom_3011_initialized;
class WallStingerLimitBottom_3011 : public Active
{
public:
    WallStingerLimitBottom_3011(int x, int y) : Active(x, y, WallStingerLimitBottom_3011_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WallStingerLimit_Bottom", 23);
#endif
        this->animations = &anim_wallstingerlimitbottom_3011;
        if (!anim_wallstingerlimitbottom_3011_initialized) {
            anim_wallstingerlimitbottom_3011_initialized = true;
            images_wallstingerlimitbottom_3011_0_0[0] = get_internal_image(12919);
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
FrameObject * create_wallstingerlimitbottom_3011(int x, int y)
{
    return new (Active::pool.create()) WallStingerLimitBottom_3011(x, y);
}
class PLIndoorRuins1_3012 : public Backdrop
{
public:
    PLIndoorRuins1_3012(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("PL_IndoorRuins 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12838);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_plindoorruins1_3012(int x, int y)
{
    return new (Backdrop::pool.create()) PLIndoorRuins1_3012(x, y);
}
