#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class TBSyntaxPanel2_2612 : public Backdrop
{
public:
    TBSyntaxPanel2_2612(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SyntaxPanel 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3321);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbsyntaxpanel2_2612(int x, int y)
{
    return new (Backdrop::pool.create()) TBSyntaxPanel2_2612(x, y);
}
class TBFloor19_2613 : public Backdrop
{
public:
    TBFloor19_2613(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 19", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11329);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor19_2613(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor19_2613(x, y);
}
class TBFloor1_2614 : public Backdrop
{
public:
    TBFloor1_2614(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 1", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11332);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor1_2614(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor1_2614(x, y);
}
class TBFloor20_2615 : public Backdrop
{
public:
    TBFloor20_2615(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 20", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8890);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor20_2615(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor20_2615(x, y);
}
class TBFloor17_2616 : public Backdrop
{
public:
    TBFloor17_2616(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 17", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8894);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor17_2616(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor17_2616(x, y);
}
class TBFloor16_2617 : public Backdrop
{
public:
    TBFloor16_2617(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 16", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8885);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor16_2617(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor16_2617(x, y);
}
class TBFloor8_2618 : public Backdrop
{
public:
    TBFloor8_2618(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 8", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8916);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor8_2618(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor8_2618(x, y);
}
class TBFloor11_2619 : public Backdrop
{
public:
    TBFloor11_2619(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 11", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8914);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor11_2619(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor11_2619(x, y);
}
class TBFloor2_2620 : public Backdrop
{
public:
    TBFloor2_2620(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 2", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11347);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor2_2620(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor2_2620(x, y);
}
class TBFloor4_2621 : public Backdrop
{
public:
    TBFloor4_2621(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 4", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10920);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor4_2621(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor4_2621(x, y);
}
class TBFloor10_2622 : public Backdrop
{
public:
    TBFloor10_2622(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 10", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10738);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor10_2622(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor10_2622(x, y);
}
class TBFloor7_2623 : public Backdrop
{
public:
    TBFloor7_2623(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 7", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11002);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor7_2623(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor7_2623(x, y);
}
class TBFloor15_2624 : public Backdrop
{
public:
    TBFloor15_2624(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 15", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10990);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor15_2624(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor15_2624(x, y);
}
class TBFloor5_2625 : public Backdrop
{
public:
    TBFloor5_2625(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 5", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11351);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor5_2625(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor5_2625(x, y);
}
class TBFloor12_2626 : public Backdrop
{
public:
    TBFloor12_2626(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 12", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10922);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor12_2626(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor12_2626(x, y);
}
class TBFloor6_2627 : public Backdrop
{
public:
    TBFloor6_2627(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 6", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11011);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor6_2627(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor6_2627(x, y);
}
class TBFloor13_2628 : public Backdrop
{
public:
    TBFloor13_2628(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 13", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11007);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor13_2628(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor13_2628(x, y);
}
class TBFloor9_2629 : public Backdrop
{
public:
    TBFloor9_2629(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 9", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10726);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor9_2629(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor9_2629(x, y);
}
class TBFloor14_2630 : public Backdrop
{
public:
    TBFloor14_2630(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 14", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8927);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbfloor14_2630(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor14_2630(x, y);
}
class TBFloor18_2631 : public Backdrop
{
public:
    TBFloor18_2631(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 18", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8892);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor18_2631(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor18_2631(x, y);
}
class TBFloor21_2632 : public Backdrop
{
public:
    TBFloor21_2632(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 21", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8888);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor21_2632(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor21_2632(x, y);
}
class Backdrop33_2633 : public Backdrop
{
public:
    Backdrop33_2633(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 33", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10926);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop33_2633(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop33_2633(x, y);
}
class TBFloor3_2634 : public Backdrop
{
public:
    TBFloor3_2634(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 3", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7150);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor3_2634(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor3_2634(x, y);
}
class TBFloor22_2635 : public Backdrop
{
public:
    TBFloor22_2635(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Floor 22", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8896);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbfloor22_2635(int x, int y)
{
    return new (Backdrop::pool.create()) TBFloor22_2635(x, y);
}
class TBLadder_2636 : public Backdrop
{
public:
    TBLadder_2636(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Ladder", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11112);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        collision->flags |= LADDER_OBSTACLE;
    }
};
FrameObject * create_tbladder_2636(int x, int y)
{
    return new (Backdrop::pool.create()) TBLadder_2636(x, y);
}
class TBCornerCurve1_2637 : public Backdrop
{
public:
    TBCornerCurve1_2637(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_CornerCurve 1", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6446);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbcornercurve1_2637(int x, int y)
{
    return new (Backdrop::pool.create()) TBCornerCurve1_2637(x, y);
}
class TBWall7_2638 : public Backdrop
{
public:
    TBWall7_2638(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 7", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3276);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall7_2638(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall7_2638(x, y);
}
class TBWall9_2639 : public Backdrop
{
public:
    TBWall9_2639(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6675);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall9_2639(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall9_2639(x, y);
}
class TBEdgeOverlay_2640 : public Backdrop
{
public:
    TBEdgeOverlay_2640(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_EdgeOverlay", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1281);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_tbedgeoverlay_2640(int x, int y)
{
    return new (Backdrop::pool.create()) TBEdgeOverlay_2640(x, y);
}
class TBHandlebar_2641 : public Backdrop
{
public:
    TBHandlebar_2641(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Handlebar", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5666);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbhandlebar_2641(int x, int y)
{
    return new (Backdrop::pool.create()) TBHandlebar_2641(x, y);
}
static Image* images_bossroboshrimpblocker_2642_0_0[1];
static Direction direction_bossroboshrimpblocker_2642_0_0 = {0, 50, 50, 0, 1, images_bossroboshrimpblocker_2642_0_0, 1};
static Animation anim_bossroboshrimpblocker_2642_0 = {&direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, NULL, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0, &direction_bossroboshrimpblocker_2642_0_0};
static Animation * anim_array_bossroboshrimpblocker_2642[1] = {&anim_bossroboshrimpblocker_2642_0};
static Animations anim_bossroboshrimpblocker_2642 = {1, &anim_array_bossroboshrimpblocker_2642[0]};
static bool anim_bossroboshrimpblocker_2642_initialized;
class BossRoboShrimpBlocker_2642 : public Active
{
public:
    BossRoboShrimpBlocker_2642(int x, int y) : Active(x, y, BossRoboShrimpBlocker_2642_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RoboShrimp Blocker", 23);
#endif
        set_visible(false);
        this->animations = &anim_bossroboshrimpblocker_2642;
        if (!anim_bossroboshrimpblocker_2642_initialized) {
            anim_bossroboshrimpblocker_2642_initialized = true;
            images_bossroboshrimpblocker_2642_0_0[0] = get_internal_image(6688);
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
FrameObject * create_bossroboshrimpblocker_2642(int x, int y)
{
    return new (Active::pool.create()) BossRoboShrimpBlocker_2642(x, y);
}
static Image* images_objectkeycard_2643_0_0[2];
static Direction direction_objectkeycard_2643_0_0 = {0, 14, 14, 0, -1, images_objectkeycard_2643_0_0, 2};
static Animation anim_objectkeycard_2643_0 = {&direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, NULL, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0, &direction_objectkeycard_2643_0_0};
static Animation * anim_array_objectkeycard_2643[1] = {&anim_objectkeycard_2643_0};
static Animations anim_objectkeycard_2643 = {1, &anim_array_objectkeycard_2643[0]};
static bool anim_objectkeycard_2643_initialized;
class ObjectKeycard_2643 : public Active
{
public:
    ObjectKeycard_2643(int x, int y) : Active(x, y, ObjectKeycard_2643_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Keycard", 14);
#endif
        this->animations = &anim_objectkeycard_2643;
        if (!anim_objectkeycard_2643_initialized) {
            anim_objectkeycard_2643_initialized = true;
            images_objectkeycard_2643_0_0[0] = get_internal_image(11172);
            images_objectkeycard_2643_0_0[1] = get_internal_image(10981);
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
    }
};
FrameObject * create_objectkeycard_2643(int x, int y)
{
    return new (Active::pool.create()) ObjectKeycard_2643(x, y);
}
static Image* images_levelfireplatformflame1_2644_0_0[5];
static Direction direction_levelfireplatformflame1_2644_0_0 = {0, 50, 50, 0, -1, images_levelfireplatformflame1_2644_0_0, 5};
static Image* images_levelfireplatformflame1_2644_0_1[3];
static Direction direction_levelfireplatformflame1_2644_0_1 = {1, 50, 50, 0, -1, images_levelfireplatformflame1_2644_0_1, 3};
static Image* images_levelfireplatformflame1_2644_0_16[5];
static Direction direction_levelfireplatformflame1_2644_0_16 = {16, 50, 50, 0, -1, images_levelfireplatformflame1_2644_0_16, 5};
static Image* images_levelfireplatformflame1_2644_0_17[3];
static Direction direction_levelfireplatformflame1_2644_0_17 = {17, 50, 50, 0, -1, images_levelfireplatformflame1_2644_0_17, 3};
static Animation anim_levelfireplatformflame1_2644_0 = {&direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_1, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_16, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_17, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0, &direction_levelfireplatformflame1_2644_0_0};
static Animation * anim_array_levelfireplatformflame1_2644[1] = {&anim_levelfireplatformflame1_2644_0};
static Animations anim_levelfireplatformflame1_2644 = {1, &anim_array_levelfireplatformflame1_2644[0]};
static bool anim_levelfireplatformflame1_2644_initialized;
class LevelFirePlatformFlame1_2644 : public Active
{
public:
    LevelFirePlatformFlame1_2644(int x, int y) : Active(x, y, LevelFirePlatformFlame1_2644_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FirePlatformFlame 1", 25);
#endif
        this->animations = &anim_levelfireplatformflame1_2644;
        if (!anim_levelfireplatformflame1_2644_initialized) {
            anim_levelfireplatformflame1_2644_initialized = true;
            images_levelfireplatformflame1_2644_0_0[0] = get_internal_image(8619);
            images_levelfireplatformflame1_2644_0_0[1] = get_internal_image(8621);
            images_levelfireplatformflame1_2644_0_0[2] = get_internal_image(8622);
            images_levelfireplatformflame1_2644_0_0[3] = get_internal_image(8630);
            images_levelfireplatformflame1_2644_0_0[4] = get_internal_image(8631);
            images_levelfireplatformflame1_2644_0_1[0] = get_internal_image(11236);
            images_levelfireplatformflame1_2644_0_1[1] = get_internal_image(11240);
            images_levelfireplatformflame1_2644_0_1[2] = get_internal_image(11241);
            images_levelfireplatformflame1_2644_0_16[0] = get_internal_image(11242);
            images_levelfireplatformflame1_2644_0_16[1] = get_internal_image(11243);
            images_levelfireplatformflame1_2644_0_16[2] = get_internal_image(11245);
            images_levelfireplatformflame1_2644_0_16[3] = get_internal_image(11246);
            images_levelfireplatformflame1_2644_0_16[4] = get_internal_image(11247);
            images_levelfireplatformflame1_2644_0_17[0] = get_internal_image(11248);
            images_levelfireplatformflame1_2644_0_17[1] = get_internal_image(11249);
            images_levelfireplatformflame1_2644_0_17[2] = get_internal_image(11250);
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
FrameObject * create_levelfireplatformflame1_2644(int x, int y)
{
    return new (Active::pool.create()) LevelFirePlatformFlame1_2644(x, y);
}
static Image* images_levelfireplatformflame2_2645_0_0[5];
static Direction direction_levelfireplatformflame2_2645_0_0 = {0, 50, 50, 0, -1, images_levelfireplatformflame2_2645_0_0, 5};
static Image* images_levelfireplatformflame2_2645_0_1[3];
static Direction direction_levelfireplatformflame2_2645_0_1 = {1, 50, 50, 0, -1, images_levelfireplatformflame2_2645_0_1, 3};
static Image* images_levelfireplatformflame2_2645_0_16[5];
static Direction direction_levelfireplatformflame2_2645_0_16 = {16, 50, 50, 0, -1, images_levelfireplatformflame2_2645_0_16, 5};
static Image* images_levelfireplatformflame2_2645_0_17[3];
static Direction direction_levelfireplatformflame2_2645_0_17 = {17, 50, 50, 0, -1, images_levelfireplatformflame2_2645_0_17, 3};
static Animation anim_levelfireplatformflame2_2645_0 = {&direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_1, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_16, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_17, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0, &direction_levelfireplatformflame2_2645_0_0};
static Animation * anim_array_levelfireplatformflame2_2645[1] = {&anim_levelfireplatformflame2_2645_0};
static Animations anim_levelfireplatformflame2_2645 = {1, &anim_array_levelfireplatformflame2_2645[0]};
static bool anim_levelfireplatformflame2_2645_initialized;
class LevelFirePlatformFlame2_2645 : public Active
{
public:
    LevelFirePlatformFlame2_2645(int x, int y) : Active(x, y, LevelFirePlatformFlame2_2645_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_FirePlatformFlame 2", 25);
#endif
        this->animations = &anim_levelfireplatformflame2_2645;
        if (!anim_levelfireplatformflame2_2645_initialized) {
            anim_levelfireplatformflame2_2645_initialized = true;
            images_levelfireplatformflame2_2645_0_0[0] = get_internal_image(8619);
            images_levelfireplatformflame2_2645_0_0[1] = get_internal_image(8621);
            images_levelfireplatformflame2_2645_0_0[2] = get_internal_image(8622);
            images_levelfireplatformflame2_2645_0_0[3] = get_internal_image(8630);
            images_levelfireplatformflame2_2645_0_0[4] = get_internal_image(8631);
            images_levelfireplatformflame2_2645_0_1[0] = get_internal_image(11236);
            images_levelfireplatformflame2_2645_0_1[1] = get_internal_image(11240);
            images_levelfireplatformflame2_2645_0_1[2] = get_internal_image(11241);
            images_levelfireplatformflame2_2645_0_16[0] = get_internal_image(11242);
            images_levelfireplatformflame2_2645_0_16[1] = get_internal_image(11243);
            images_levelfireplatformflame2_2645_0_16[2] = get_internal_image(11245);
            images_levelfireplatformflame2_2645_0_16[3] = get_internal_image(11246);
            images_levelfireplatformflame2_2645_0_16[4] = get_internal_image(11247);
            images_levelfireplatformflame2_2645_0_17[0] = get_internal_image(11248);
            images_levelfireplatformflame2_2645_0_17[1] = get_internal_image(11249);
            images_levelfireplatformflame2_2645_0_17[2] = get_internal_image(11250);
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
FrameObject * create_levelfireplatformflame2_2645(int x, int y)
{
    return new (Active::pool.create()) LevelFirePlatformFlame2_2645(x, y);
}
static Image* images_levelfireplatform1_2646_0_0[2];
static Direction direction_levelfireplatform1_2646_0_0 = {0, 0, 0, 0, 1, images_levelfireplatform1_2646_0_0, 2};
static Animation anim_levelfireplatform1_2646_0 = {&direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, NULL, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0, &direction_levelfireplatform1_2646_0_0};
static Animation * anim_array_levelfireplatform1_2646[1] = {&anim_levelfireplatform1_2646_0};
static Animations anim_levelfireplatform1_2646 = {1, &anim_array_levelfireplatform1_2646[0]};
static bool anim_levelfireplatform1_2646_initialized;
class LevelFirePlatform1_2646 : public Active
{
public:
    LevelFirePlatform1_2646(int x, int y) : Active(x, y, LevelFirePlatform1_2646_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_FirePlatform 1", 20);
#endif
        this->animations = &anim_levelfireplatform1_2646;
        if (!anim_levelfireplatform1_2646_initialized) {
            anim_levelfireplatform1_2646_initialized = true;
            images_levelfireplatform1_2646_0_0[0] = get_internal_image(11258);
            images_levelfireplatform1_2646_0_0[1] = get_internal_image(10956);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
    }
};
FrameObject * create_levelfireplatform1_2646(int x, int y)
{
    return new (Active::pool.create()) LevelFirePlatform1_2646(x, y);
}
static Image* images_levellift_2647_0_0[8];
static Direction direction_levellift_2647_0_0 = {0, 50, 50, 0, -1, images_levellift_2647_0_0, 8};
static Animation anim_levellift_2647_0 = {&direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, NULL, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0, &direction_levellift_2647_0_0};
static Animation * anim_array_levellift_2647[1] = {&anim_levellift_2647_0};
static Animations anim_levellift_2647 = {1, &anim_array_levellift_2647[0]};
static bool anim_levellift_2647_initialized;
class LevelLift_2647 : public Active
{
public:
    LevelLift_2647(int x, int y) : Active(x, y, LevelLift_2647_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Level_Lift", 10);
#endif
        this->animations = &anim_levellift_2647;
        if (!anim_levellift_2647_initialized) {
            anim_levellift_2647_initialized = true;
            images_levellift_2647_0_0[0] = get_internal_image(6643);
            images_levellift_2647_0_0[1] = get_internal_image(6668);
            images_levellift_2647_0_0[2] = get_internal_image(6674);
            images_levellift_2647_0_0[3] = get_internal_image(5294);
            images_levellift_2647_0_0[4] = get_internal_image(5590);
            images_levellift_2647_0_0[5] = get_internal_image(6406);
            images_levellift_2647_0_0[6] = get_internal_image(6582);
            images_levellift_2647_0_0[7] = get_internal_image(6583);
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
FrameObject * create_levellift_2647(int x, int y)
{
    return new (Active::pool.create()) LevelLift_2647(x, y);
}
static Image* images_enemyseeker_2648_0_0[6];
static Direction direction_enemyseeker_2648_0_0 = {0, 16, 16, 0, -1, images_enemyseeker_2648_0_0, 6};
static Image* images_enemyseeker_2648_0_16[6];
static Direction direction_enemyseeker_2648_0_16 = {16, 16, 16, 0, -1, images_enemyseeker_2648_0_16, 6};
static Animation anim_enemyseeker_2648_0 = {&direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, NULL, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, &direction_enemyseeker_2648_0_16, NULL, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0, &direction_enemyseeker_2648_0_0};
static Image* images_enemyseeker_2648_7_0[8];
static Direction direction_enemyseeker_2648_7_0 = {0, 25, 25, 5, -1, images_enemyseeker_2648_7_0, 8};
static Image* images_enemyseeker_2648_7_16[8];
static Direction direction_enemyseeker_2648_7_16 = {16, 25, 25, 5, -1, images_enemyseeker_2648_7_16, 8};
static Animation anim_enemyseeker_2648_7 = {&direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, NULL, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, &direction_enemyseeker_2648_7_16, NULL, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0, &direction_enemyseeker_2648_7_0};
static Image* images_enemyseeker_2648_8_0[6];
static Direction direction_enemyseeker_2648_8_0 = {0, 25, 25, 0, 1, images_enemyseeker_2648_8_0, 6};
static Image* images_enemyseeker_2648_8_16[6];
static Direction direction_enemyseeker_2648_8_16 = {16, 25, 25, 0, 1, images_enemyseeker_2648_8_16, 6};
static Animation anim_enemyseeker_2648_8 = {&direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, NULL, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, &direction_enemyseeker_2648_8_16, NULL, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0, &direction_enemyseeker_2648_8_0};
static Animation * anim_array_enemyseeker_2648[9] = {&anim_enemyseeker_2648_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyseeker_2648_7, &anim_enemyseeker_2648_8};
static Animations anim_enemyseeker_2648 = {9, &anim_array_enemyseeker_2648[0]};
static bool anim_enemyseeker_2648_initialized;
class EnemySeeker_2648 : public Active
{
public:
    EnemySeeker_2648(int x, int y) : Active(x, y, EnemySeeker_2648_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Seeker", 12);
#endif
        this->animations = &anim_enemyseeker_2648;
        if (!anim_enemyseeker_2648_initialized) {
            anim_enemyseeker_2648_initialized = true;
            images_enemyseeker_2648_0_0[0] = get_internal_image(6335);
            images_enemyseeker_2648_0_0[1] = get_internal_image(6335);
            images_enemyseeker_2648_0_0[2] = get_internal_image(11020);
            images_enemyseeker_2648_0_0[3] = get_internal_image(11021);
            images_enemyseeker_2648_0_0[4] = get_internal_image(11021);
            images_enemyseeker_2648_0_0[5] = get_internal_image(11020);
            images_enemyseeker_2648_0_16[0] = get_internal_image(4406);
            images_enemyseeker_2648_0_16[1] = get_internal_image(4406);
            images_enemyseeker_2648_0_16[2] = get_internal_image(11019);
            images_enemyseeker_2648_0_16[3] = get_internal_image(11066);
            images_enemyseeker_2648_0_16[4] = get_internal_image(11066);
            images_enemyseeker_2648_0_16[5] = get_internal_image(11019);
            images_enemyseeker_2648_7_0[0] = get_internal_image(6335);
            images_enemyseeker_2648_7_0[1] = get_internal_image(6297);
            images_enemyseeker_2648_7_0[2] = get_internal_image(5592);
            images_enemyseeker_2648_7_0[3] = get_internal_image(2970);
            images_enemyseeker_2648_7_0[4] = get_internal_image(3499);
            images_enemyseeker_2648_7_0[5] = get_internal_image(2970);
            images_enemyseeker_2648_7_0[6] = get_internal_image(11003);
            images_enemyseeker_2648_7_0[7] = get_internal_image(11015);
            images_enemyseeker_2648_7_16[0] = get_internal_image(4406);
            images_enemyseeker_2648_7_16[1] = get_internal_image(3597);
            images_enemyseeker_2648_7_16[2] = get_internal_image(2972);
            images_enemyseeker_2648_7_16[3] = get_internal_image(2969);
            images_enemyseeker_2648_7_16[4] = get_internal_image(2543);
            images_enemyseeker_2648_7_16[5] = get_internal_image(2969);
            images_enemyseeker_2648_7_16[6] = get_internal_image(11014);
            images_enemyseeker_2648_7_16[7] = get_internal_image(11016);
            images_enemyseeker_2648_8_0[0] = get_internal_image(2970);
            images_enemyseeker_2648_8_0[1] = get_internal_image(3499);
            images_enemyseeker_2648_8_0[2] = get_internal_image(2970);
            images_enemyseeker_2648_8_0[3] = get_internal_image(5592);
            images_enemyseeker_2648_8_0[4] = get_internal_image(6297);
            images_enemyseeker_2648_8_0[5] = get_internal_image(6335);
            images_enemyseeker_2648_8_16[0] = get_internal_image(2969);
            images_enemyseeker_2648_8_16[1] = get_internal_image(2543);
            images_enemyseeker_2648_8_16[2] = get_internal_image(2969);
            images_enemyseeker_2648_8_16[3] = get_internal_image(2972);
            images_enemyseeker_2648_8_16[4] = get_internal_image(3597);
            images_enemyseeker_2648_8_16[5] = get_internal_image(4406);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(7, 5);
    }
};
FrameObject * create_enemyseeker_2648(int x, int y)
{
    return new (Active::pool.create()) EnemySeeker_2648(x, y);
}
static Image* images_levellifttop_2650_0_0[1];
static Direction direction_levellifttop_2650_0_0 = {0, 50, 50, 0, 1, images_levellifttop_2650_0_0, 1};
static Animation anim_levellifttop_2650_0 = {&direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, NULL, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0, &direction_levellifttop_2650_0_0};
static Animation * anim_array_levellifttop_2650[1] = {&anim_levellifttop_2650_0};
static Animations anim_levellifttop_2650 = {1, &anim_array_levellifttop_2650[0]};
static bool anim_levellifttop_2650_initialized;
class LevelLiftTop_2650 : public Active
{
public:
    LevelLiftTop_2650(int x, int y) : Active(x, y, LevelLiftTop_2650_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Lift_Top", 14);
#endif
        set_visible(false);
        this->animations = &anim_levellifttop_2650;
        if (!anim_levellifttop_2650_initialized) {
            anim_levellifttop_2650_initialized = true;
            images_levellifttop_2650_0_0[0] = get_internal_image(3857);
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
FrameObject * create_levellifttop_2650(int x, int y)
{
    return new (Active::pool.create()) LevelLiftTop_2650(x, y);
}
static Image* images_levelliftbottom_2651_0_0[1];
static Direction direction_levelliftbottom_2651_0_0 = {0, 50, 50, 0, 1, images_levelliftbottom_2651_0_0, 1};
static Animation anim_levelliftbottom_2651_0 = {&direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, NULL, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0, &direction_levelliftbottom_2651_0_0};
static Animation * anim_array_levelliftbottom_2651[1] = {&anim_levelliftbottom_2651_0};
static Animations anim_levelliftbottom_2651 = {1, &anim_array_levelliftbottom_2651[0]};
static bool anim_levelliftbottom_2651_initialized;
class LevelLiftBottom_2651 : public Active
{
public:
    LevelLiftBottom_2651(int x, int y) : Active(x, y, LevelLiftBottom_2651_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_Lift_Bottom", 17);
#endif
        set_visible(false);
        this->animations = &anim_levelliftbottom_2651;
        if (!anim_levelliftbottom_2651_initialized) {
            anim_levelliftbottom_2651_initialized = true;
            images_levelliftbottom_2651_0_0[0] = get_internal_image(3857);
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
FrameObject * create_levelliftbottom_2651(int x, int y)
{
    return new (Active::pool.create()) LevelLiftBottom_2651(x, y);
}
static Image* images_active5_2652_0_0[1];
static Direction direction_active5_2652_0_0 = {0, 50, 50, 0, 1, images_active5_2652_0_0, 1};
static Animation anim_active5_2652_0 = {&direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, NULL, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0, &direction_active5_2652_0_0};
static Animation * anim_array_active5_2652[1] = {&anim_active5_2652_0};
static Animations anim_active5_2652 = {1, &anim_array_active5_2652[0]};
static bool anim_active5_2652_initialized;
class Active5_2652 : public Active
{
public:
    Active5_2652(int x, int y) : Active(x, y, Active5_2652_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        this->animations = &anim_active5_2652;
        if (!anim_active5_2652_initialized) {
            anim_active5_2652_initialized = true;
            images_active5_2652_0_0[0] = get_internal_image(6909);
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
FrameObject * create_active5_2652(int x, int y)
{
    return new (Active::pool.create()) Active5_2652(x, y);
}
static Image* images_enemypushuphitbox_2653_0_0[1];
static Direction direction_enemypushuphitbox_2653_0_0 = {0, 50, 50, 0, 1, images_enemypushuphitbox_2653_0_0, 1};
static Animation anim_enemypushuphitbox_2653_0 = {&direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, NULL, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0, &direction_enemypushuphitbox_2653_0_0};
static Image* images_enemypushuphitbox_2653_8_0[1];
static Direction direction_enemypushuphitbox_2653_8_0 = {0, 50, 50, 0, -1, images_enemypushuphitbox_2653_8_0, 1};
static Animation anim_enemypushuphitbox_2653_8 = {&direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, NULL, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0, &direction_enemypushuphitbox_2653_8_0};
static Animation * anim_array_enemypushuphitbox_2653[9] = {&anim_enemypushuphitbox_2653_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemypushuphitbox_2653_8};
static Animations anim_enemypushuphitbox_2653 = {9, &anim_array_enemypushuphitbox_2653[0]};
static bool anim_enemypushuphitbox_2653_initialized;
class EnemyPushupHitbox_2653 : public Active
{
public:
    EnemyPushupHitbox_2653(int x, int y) : Active(x, y, EnemyPushupHitbox_2653_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Pushup_hitbox", 19);
#endif
        set_visible(false);
        this->animations = &anim_enemypushuphitbox_2653;
        if (!anim_enemypushuphitbox_2653_initialized) {
            anim_enemypushuphitbox_2653_initialized = true;
            images_enemypushuphitbox_2653_0_0[0] = get_internal_image(8624);
            images_enemypushuphitbox_2653_8_0[0] = get_internal_image(11017);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 16);
    }
};
FrameObject * create_enemypushuphitbox_2653(int x, int y)
{
    return new (Active::pool.create()) EnemyPushupHitbox_2653(x, y);
}
static Image* images_levelscrollingplatformflame1_2654_0_0[5];
static Direction direction_levelscrollingplatformflame1_2654_0_0 = {0, 50, 50, 0, -1, images_levelscrollingplatformflame1_2654_0_0, 5};
static Image* images_levelscrollingplatformflame1_2654_0_1[3];
static Direction direction_levelscrollingplatformflame1_2654_0_1 = {1, 50, 50, 0, -1, images_levelscrollingplatformflame1_2654_0_1, 3};
static Image* images_levelscrollingplatformflame1_2654_0_16[5];
static Direction direction_levelscrollingplatformflame1_2654_0_16 = {16, 50, 50, 0, -1, images_levelscrollingplatformflame1_2654_0_16, 5};
static Image* images_levelscrollingplatformflame1_2654_0_17[3];
static Direction direction_levelscrollingplatformflame1_2654_0_17 = {17, 50, 50, 0, -1, images_levelscrollingplatformflame1_2654_0_17, 3};
static Animation anim_levelscrollingplatformflame1_2654_0 = {&direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_1, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_16, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_17, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0, &direction_levelscrollingplatformflame1_2654_0_0};
static Animation * anim_array_levelscrollingplatformflame1_2654[1] = {&anim_levelscrollingplatformflame1_2654_0};
static Animations anim_levelscrollingplatformflame1_2654 = {1, &anim_array_levelscrollingplatformflame1_2654[0]};
static bool anim_levelscrollingplatformflame1_2654_initialized;
class LevelScrollingPlatformFlame1_2654 : public Active
{
public:
    LevelScrollingPlatformFlame1_2654(int x, int y) : Active(x, y, LevelScrollingPlatformFlame1_2654_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformFlame 1", 30);
#endif
        this->animations = &anim_levelscrollingplatformflame1_2654;
        if (!anim_levelscrollingplatformflame1_2654_initialized) {
            anim_levelscrollingplatformflame1_2654_initialized = true;
            images_levelscrollingplatformflame1_2654_0_0[0] = get_internal_image(11263);
            images_levelscrollingplatformflame1_2654_0_0[1] = get_internal_image(11264);
            images_levelscrollingplatformflame1_2654_0_0[2] = get_internal_image(11265);
            images_levelscrollingplatformflame1_2654_0_0[3] = get_internal_image(11266);
            images_levelscrollingplatformflame1_2654_0_0[4] = get_internal_image(11267);
            images_levelscrollingplatformflame1_2654_0_1[0] = get_internal_image(11268);
            images_levelscrollingplatformflame1_2654_0_1[1] = get_internal_image(11269);
            images_levelscrollingplatformflame1_2654_0_1[2] = get_internal_image(11270);
            images_levelscrollingplatformflame1_2654_0_16[0] = get_internal_image(11271);
            images_levelscrollingplatformflame1_2654_0_16[1] = get_internal_image(11272);
            images_levelscrollingplatformflame1_2654_0_16[2] = get_internal_image(11273);
            images_levelscrollingplatformflame1_2654_0_16[3] = get_internal_image(11274);
            images_levelscrollingplatformflame1_2654_0_16[4] = get_internal_image(11275);
            images_levelscrollingplatformflame1_2654_0_17[0] = get_internal_image(11276);
            images_levelscrollingplatformflame1_2654_0_17[1] = get_internal_image(11277);
            images_levelscrollingplatformflame1_2654_0_17[2] = get_internal_image(11278);
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
FrameObject * create_levelscrollingplatformflame1_2654(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformFlame1_2654(x, y);
}
static Image* images_levelscrollingplatformflame2_2655_0_0[5];
static Direction direction_levelscrollingplatformflame2_2655_0_0 = {0, 50, 50, 0, -1, images_levelscrollingplatformflame2_2655_0_0, 5};
static Image* images_levelscrollingplatformflame2_2655_0_1[3];
static Direction direction_levelscrollingplatformflame2_2655_0_1 = {1, 50, 50, 0, -1, images_levelscrollingplatformflame2_2655_0_1, 3};
static Image* images_levelscrollingplatformflame2_2655_0_16[5];
static Direction direction_levelscrollingplatformflame2_2655_0_16 = {16, 50, 50, 0, -1, images_levelscrollingplatformflame2_2655_0_16, 5};
static Image* images_levelscrollingplatformflame2_2655_0_17[3];
static Direction direction_levelscrollingplatformflame2_2655_0_17 = {17, 50, 50, 0, -1, images_levelscrollingplatformflame2_2655_0_17, 3};
static Animation anim_levelscrollingplatformflame2_2655_0 = {&direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_1, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_16, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_17, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0, &direction_levelscrollingplatformflame2_2655_0_0};
static Animation * anim_array_levelscrollingplatformflame2_2655[1] = {&anim_levelscrollingplatformflame2_2655_0};
static Animations anim_levelscrollingplatformflame2_2655 = {1, &anim_array_levelscrollingplatformflame2_2655[0]};
static bool anim_levelscrollingplatformflame2_2655_initialized;
class LevelScrollingPlatformFlame2_2655 : public Active
{
public:
    LevelScrollingPlatformFlame2_2655(int x, int y) : Active(x, y, LevelScrollingPlatformFlame2_2655_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformFlame 2", 30);
#endif
        this->animations = &anim_levelscrollingplatformflame2_2655;
        if (!anim_levelscrollingplatformflame2_2655_initialized) {
            anim_levelscrollingplatformflame2_2655_initialized = true;
            images_levelscrollingplatformflame2_2655_0_0[0] = get_internal_image(11263);
            images_levelscrollingplatformflame2_2655_0_0[1] = get_internal_image(11264);
            images_levelscrollingplatformflame2_2655_0_0[2] = get_internal_image(11265);
            images_levelscrollingplatformflame2_2655_0_0[3] = get_internal_image(11266);
            images_levelscrollingplatformflame2_2655_0_0[4] = get_internal_image(11267);
            images_levelscrollingplatformflame2_2655_0_1[0] = get_internal_image(11268);
            images_levelscrollingplatformflame2_2655_0_1[1] = get_internal_image(11269);
            images_levelscrollingplatformflame2_2655_0_1[2] = get_internal_image(11270);
            images_levelscrollingplatformflame2_2655_0_16[0] = get_internal_image(11271);
            images_levelscrollingplatformflame2_2655_0_16[1] = get_internal_image(11272);
            images_levelscrollingplatformflame2_2655_0_16[2] = get_internal_image(11273);
            images_levelscrollingplatformflame2_2655_0_16[3] = get_internal_image(11274);
            images_levelscrollingplatformflame2_2655_0_16[4] = get_internal_image(11275);
            images_levelscrollingplatformflame2_2655_0_17[0] = get_internal_image(11276);
            images_levelscrollingplatformflame2_2655_0_17[1] = get_internal_image(11277);
            images_levelscrollingplatformflame2_2655_0_17[2] = get_internal_image(11278);
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
FrameObject * create_levelscrollingplatformflame2_2655(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformFlame2_2655(x, y);
}
static Image* images_enemypushup_2656_0_0[8];
static Direction direction_enemypushup_2656_0_0 = {0, 100, 100, 0, 1, images_enemypushup_2656_0_0, 8};
static Image* images_enemypushup_2656_0_1[8];
static Direction direction_enemypushup_2656_0_1 = {1, 100, 100, 0, 1, images_enemypushup_2656_0_1, 8};
static Image* images_enemypushup_2656_0_8[1];
static Direction direction_enemypushup_2656_0_8 = {8, 50, 50, 0, 1, images_enemypushup_2656_0_8, 1};
static Animation anim_enemypushup_2656_0 = {&direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_1, &direction_enemypushup_2656_0_1, &direction_enemypushup_2656_0_1, &direction_enemypushup_2656_0_1, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, &direction_enemypushup_2656_0_8, NULL, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0, &direction_enemypushup_2656_0_0};
static Image* images_enemypushup_2656_5_0[4];
static Direction direction_enemypushup_2656_5_0 = {0, 50, 50, 0, 3, images_enemypushup_2656_5_0, 4};
static Image* images_enemypushup_2656_5_1[4];
static Direction direction_enemypushup_2656_5_1 = {1, 50, 50, 0, 3, images_enemypushup_2656_5_1, 4};
static Animation anim_enemypushup_2656_5 = {&direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_1, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0, &direction_enemypushup_2656_5_0};
static Animation * anim_array_enemypushup_2656[6] = {&anim_enemypushup_2656_0, NULL, NULL, NULL, NULL, &anim_enemypushup_2656_5};
static Animations anim_enemypushup_2656 = {6, &anim_array_enemypushup_2656[0]};
static bool anim_enemypushup_2656_initialized;
class EnemyPushup_2656 : public Active
{
public:
    EnemyPushup_2656(int x, int y) : Active(x, y, EnemyPushup_2656_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_Pushup", 12);
#endif
        this->animations = &anim_enemypushup_2656;
        if (!anim_enemypushup_2656_initialized) {
            anim_enemypushup_2656_initialized = true;
            images_enemypushup_2656_0_0[0] = get_internal_image(8187);
            images_enemypushup_2656_0_0[1] = get_internal_image(8192);
            images_enemypushup_2656_0_0[2] = get_internal_image(8187);
            images_enemypushup_2656_0_0[3] = get_internal_image(8208);
            images_enemypushup_2656_0_0[4] = get_internal_image(8244);
            images_enemypushup_2656_0_0[5] = get_internal_image(8432);
            images_enemypushup_2656_0_0[6] = get_internal_image(8617);
            images_enemypushup_2656_0_0[7] = get_internal_image(8432);
            images_enemypushup_2656_0_1[0] = get_internal_image(8432);
            images_enemypushup_2656_0_1[1] = get_internal_image(8617);
            images_enemypushup_2656_0_1[2] = get_internal_image(8432);
            images_enemypushup_2656_0_1[3] = get_internal_image(8244);
            images_enemypushup_2656_0_1[4] = get_internal_image(8208);
            images_enemypushup_2656_0_1[5] = get_internal_image(8187);
            images_enemypushup_2656_0_1[6] = get_internal_image(8192);
            images_enemypushup_2656_0_1[7] = get_internal_image(8187);
            images_enemypushup_2656_0_8[0] = get_internal_image(8618);
            images_enemypushup_2656_5_0[0] = get_internal_image(8625);
            images_enemypushup_2656_5_0[1] = get_internal_image(8629);
            images_enemypushup_2656_5_0[2] = get_internal_image(11244);
            images_enemypushup_2656_5_0[3] = get_internal_image(11252);
            images_enemypushup_2656_5_1[0] = get_internal_image(11254);
            images_enemypushup_2656_5_1[1] = get_internal_image(11254);
            images_enemypushup_2656_5_1[2] = get_internal_image(11255);
            images_enemypushup_2656_5_1[3] = get_internal_image(8192);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(1);
        create_alterables();
        alterables->values.set(3, 55);
    }
};
FrameObject * create_enemypushup_2656(int x, int y)
{
    return new (Active::pool.create()) EnemyPushup_2656(x, y);
}
static Image* images_bossroboshrimpsegment_2657_0_0[5];
static Direction direction_bossroboshrimpsegment_2657_0_0 = {0, 0, 0, 0, -1, images_bossroboshrimpsegment_2657_0_0, 5};
static Animation anim_bossroboshrimpsegment_2657_0 = {&direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, NULL, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0, &direction_bossroboshrimpsegment_2657_0_0};
static Image* images_bossroboshrimpsegment_2657_8_0[1];
static Direction direction_bossroboshrimpsegment_2657_8_0 = {0, 50, 50, 0, -1, images_bossroboshrimpsegment_2657_8_0, 1};
static Animation anim_bossroboshrimpsegment_2657_8 = {&direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, NULL, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0, &direction_bossroboshrimpsegment_2657_8_0};
static Image* images_bossroboshrimpsegment_2657_9_0[2];
static Direction direction_bossroboshrimpsegment_2657_9_0 = {0, 50, 50, 0, -1, images_bossroboshrimpsegment_2657_9_0, 2};
static Animation anim_bossroboshrimpsegment_2657_9 = {&direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, NULL, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0, &direction_bossroboshrimpsegment_2657_9_0};
static Animation * anim_array_bossroboshrimpsegment_2657[10] = {&anim_bossroboshrimpsegment_2657_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossroboshrimpsegment_2657_8, &anim_bossroboshrimpsegment_2657_9};
static Animations anim_bossroboshrimpsegment_2657 = {10, &anim_array_bossroboshrimpsegment_2657[0]};
static bool anim_bossroboshrimpsegment_2657_initialized;
class BossRoboShrimpSegment_2657 : public Active
{
public:
    BossRoboShrimpSegment_2657(int x, int y) : Active(x, y, BossRoboShrimpSegment_2657_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_RoboShrimpSegment", 22);
#endif
        this->animations = &anim_bossroboshrimpsegment_2657;
        if (!anim_bossroboshrimpsegment_2657_initialized) {
            anim_bossroboshrimpsegment_2657_initialized = true;
            images_bossroboshrimpsegment_2657_0_0[0] = get_internal_image(358);
            images_bossroboshrimpsegment_2657_0_0[1] = get_internal_image(7029);
            images_bossroboshrimpsegment_2657_0_0[2] = get_internal_image(7027);
            images_bossroboshrimpsegment_2657_0_0[3] = get_internal_image(7026);
            images_bossroboshrimpsegment_2657_0_0[4] = get_internal_image(7028);
            images_bossroboshrimpsegment_2657_8_0[0] = get_internal_image(600);
            images_bossroboshrimpsegment_2657_9_0[0] = get_internal_image(600);
            images_bossroboshrimpsegment_2657_9_0[1] = get_internal_image(11308);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 10);
    }
};
FrameObject * create_bossroboshrimpsegment_2657(int x, int y)
{
    return new (Active::pool.create()) BossRoboShrimpSegment_2657(x, y);
}
static Image* images_bossroboshrimp_2658_0_0[2];
static Direction direction_bossroboshrimp_2658_0_0 = {0, 0, 0, 0, -1, images_bossroboshrimp_2658_0_0, 2};
static Animation anim_bossroboshrimp_2658_0 = {&direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, NULL, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0, &direction_bossroboshrimp_2658_0_0};
static Image* images_bossroboshrimp_2658_8_0[2];
static Direction direction_bossroboshrimp_2658_8_0 = {0, 50, 50, 0, -1, images_bossroboshrimp_2658_8_0, 2};
static Animation anim_bossroboshrimp_2658_8 = {&direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, NULL, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0, &direction_bossroboshrimp_2658_8_0};
static Animation * anim_array_bossroboshrimp_2658[9] = {&anim_bossroboshrimp_2658_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossroboshrimp_2658_8};
static Animations anim_bossroboshrimp_2658 = {9, &anim_array_bossroboshrimp_2658[0]};
static bool anim_bossroboshrimp_2658_initialized;
class BossRoboShrimp_2658 : public Active
{
public:
    BossRoboShrimp_2658(int x, int y) : Active(x, y, BossRoboShrimp_2658_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Boss_RoboShrimp", 15);
#endif
        this->animations = &anim_bossroboshrimp_2658;
        if (!anim_bossroboshrimp_2658_initialized) {
            anim_bossroboshrimp_2658_initialized = true;
            images_bossroboshrimp_2658_0_0[0] = get_internal_image(11310);
            images_bossroboshrimp_2658_0_0[1] = get_internal_image(7031);
            images_bossroboshrimp_2658_8_0[0] = get_internal_image(11312);
            images_bossroboshrimp_2658_8_0[1] = get_internal_image(11313);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 1);
        alterables->values.set(7, 90);
    }
};
FrameObject * create_bossroboshrimp_2658(int x, int y)
{
    return new (Active::pool.create()) BossRoboShrimp_2658(x, y);
}
static Image* images_bossroboshrimplightning_2659_0_0[1];
static Direction direction_bossroboshrimplightning_2659_0_0 = {0, 100, 100, 0, -1, images_bossroboshrimplightning_2659_0_0, 1};
static Image* images_bossroboshrimplightning_2659_0_1[4];
static Direction direction_bossroboshrimplightning_2659_0_1 = {1, 70, 70, 0, -1, images_bossroboshrimplightning_2659_0_1, 4};
static Animation anim_bossroboshrimplightning_2659_0 = {&direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_1, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0, &direction_bossroboshrimplightning_2659_0_0};
static Animation * anim_array_bossroboshrimplightning_2659[1] = {&anim_bossroboshrimplightning_2659_0};
static Animations anim_bossroboshrimplightning_2659 = {1, &anim_array_bossroboshrimplightning_2659[0]};
static bool anim_bossroboshrimplightning_2659_initialized;
class BossRoboShrimpLightning_2659 : public Active
{
public:
    BossRoboShrimpLightning_2659(int x, int y) : Active(x, y, BossRoboShrimpLightning_2659_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RoboShrimpLightning", 24);
#endif
        this->animations = &anim_bossroboshrimplightning_2659;
        if (!anim_bossroboshrimplightning_2659_initialized) {
            anim_bossroboshrimplightning_2659_initialized = true;
            images_bossroboshrimplightning_2659_0_0[0] = get_internal_image(11315);
            images_bossroboshrimplightning_2659_0_1[0] = get_internal_image(11317);
            images_bossroboshrimplightning_2659_0_1[1] = get_internal_image(7034);
            images_bossroboshrimplightning_2659_0_1[2] = get_internal_image(7035);
            images_bossroboshrimplightning_2659_0_1[3] = get_internal_image(11316);
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
FrameObject * create_bossroboshrimplightning_2659(int x, int y)
{
    return new (Active::pool.create()) BossRoboShrimpLightning_2659(x, y);
}
static Image* images_bossroboshrimptail_2660_0_0[5];
static Direction direction_bossroboshrimptail_2660_0_0 = {0, 50, 50, 0, -1, images_bossroboshrimptail_2660_0_0, 5};
static Animation anim_bossroboshrimptail_2660_0 = {&direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, NULL, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0, &direction_bossroboshrimptail_2660_0_0};
static Image* images_bossroboshrimptail_2660_9_0[2];
static Direction direction_bossroboshrimptail_2660_9_0 = {0, 50, 50, 0, -1, images_bossroboshrimptail_2660_9_0, 2};
static Animation anim_bossroboshrimptail_2660_9 = {&direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, NULL, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0, &direction_bossroboshrimptail_2660_9_0};
static Animation * anim_array_bossroboshrimptail_2660[10] = {&anim_bossroboshrimptail_2660_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bossroboshrimptail_2660_9};
static Animations anim_bossroboshrimptail_2660 = {10, &anim_array_bossroboshrimptail_2660[0]};
static bool anim_bossroboshrimptail_2660_initialized;
class BossRoboShrimpTail_2660 : public Active
{
public:
    BossRoboShrimpTail_2660(int x, int y) : Active(x, y, BossRoboShrimpTail_2660_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_RoboShrimpTail", 19);
#endif
        this->animations = &anim_bossroboshrimptail_2660;
        if (!anim_bossroboshrimptail_2660_initialized) {
            anim_bossroboshrimptail_2660_initialized = true;
            images_bossroboshrimptail_2660_0_0[0] = get_internal_image(7032);
            images_bossroboshrimptail_2660_0_0[1] = get_internal_image(11294);
            images_bossroboshrimptail_2660_0_0[2] = get_internal_image(7853);
            images_bossroboshrimptail_2660_0_0[3] = get_internal_image(11309);
            images_bossroboshrimptail_2660_0_0[4] = get_internal_image(11318);
            images_bossroboshrimptail_2660_9_0[0] = get_internal_image(6677);
            images_bossroboshrimptail_2660_9_0[1] = get_internal_image(11307);
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
FrameObject * create_bossroboshrimptail_2660(int x, int y)
{
    return new (Active::pool.create()) BossRoboShrimpTail_2660(x, y);
}
static Image* images_magmaflow_2661_0_0[4];
static Direction direction_magmaflow_2661_0_0 = {0, 50, 50, 0, -1, images_magmaflow_2661_0_0, 4};
static Animation anim_magmaflow_2661_0 = {&direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, NULL, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0, &direction_magmaflow_2661_0_0};
static Animation * anim_array_magmaflow_2661[1] = {&anim_magmaflow_2661_0};
static Animations anim_magmaflow_2661 = {1, &anim_array_magmaflow_2661[0]};
static bool anim_magmaflow_2661_initialized;
class MagmaFlow_2661 : public Active
{
public:
    MagmaFlow_2661(int x, int y) : Active(x, y, MagmaFlow_2661_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MagmaFlow", 9);
#endif
        this->animations = &anim_magmaflow_2661;
        if (!anim_magmaflow_2661_initialized) {
            anim_magmaflow_2661_initialized = true;
            images_magmaflow_2661_0_0[0] = get_internal_image(6682);
            images_magmaflow_2661_0_0[1] = get_internal_image(7130);
            images_magmaflow_2661_0_0[2] = get_internal_image(6924);
            images_magmaflow_2661_0_0[3] = get_internal_image(7155);
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
FrameObject * create_magmaflow_2661(int x, int y)
{
    return new (Active::pool.create()) MagmaFlow_2661(x, y);
}
static Image* images_levelscrollingplatform1_2662_0_0[1];
static Direction direction_levelscrollingplatform1_2662_0_0 = {0, 0, 0, 0, 1, images_levelscrollingplatform1_2662_0_0, 1};
static Image* images_levelscrollingplatform1_2662_0_8[2];
static Direction direction_levelscrollingplatform1_2662_0_8 = {8, 50, 50, 0, 1, images_levelscrollingplatform1_2662_0_8, 2};
static Animation anim_levelscrollingplatform1_2662_0 = {&direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, NULL, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, &direction_levelscrollingplatform1_2662_0_8, NULL, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0, &direction_levelscrollingplatform1_2662_0_0};
static Animation * anim_array_levelscrollingplatform1_2662[1] = {&anim_levelscrollingplatform1_2662_0};
static Animations anim_levelscrollingplatform1_2662 = {1, &anim_array_levelscrollingplatform1_2662[0]};
static bool anim_levelscrollingplatform1_2662_initialized;
class LevelScrollingPlatform1_2662 : public Active
{
public:
    LevelScrollingPlatform1_2662(int x, int y) : Active(x, y, LevelScrollingPlatform1_2662_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatform 1", 25);
#endif
        set_visible(false);
        this->animations = &anim_levelscrollingplatform1_2662;
        if (!anim_levelscrollingplatform1_2662_initialized) {
            anim_levelscrollingplatform1_2662_initialized = true;
            images_levelscrollingplatform1_2662_0_0[0] = get_internal_image(11177);
            images_levelscrollingplatform1_2662_0_8[0] = get_internal_image(6927);
            images_levelscrollingplatform1_2662_0_8[1] = get_internal_image(6904);
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
FrameObject * create_levelscrollingplatform1_2662(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatform1_2662(x, y);
}
static Image* images_levelscrollingplatform2_2663_0_0[1];
static Direction direction_levelscrollingplatform2_2663_0_0 = {0, 0, 0, 0, 1, images_levelscrollingplatform2_2663_0_0, 1};
static Animation anim_levelscrollingplatform2_2663_0 = {&direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, NULL, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0, &direction_levelscrollingplatform2_2663_0_0};
static Animation * anim_array_levelscrollingplatform2_2663[1] = {&anim_levelscrollingplatform2_2663_0};
static Animations anim_levelscrollingplatform2_2663 = {1, &anim_array_levelscrollingplatform2_2663[0]};
static bool anim_levelscrollingplatform2_2663_initialized;
class LevelScrollingPlatform2_2663 : public Active
{
public:
    LevelScrollingPlatform2_2663(int x, int y) : Active(x, y, LevelScrollingPlatform2_2663_type)
    {
        // qualifiers: 14, 20
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatform 2", 25);
#endif
        set_visible(false);
        this->animations = &anim_levelscrollingplatform2_2663;
        if (!anim_levelscrollingplatform2_2663_initialized) {
            anim_levelscrollingplatform2_2663_initialized = true;
            images_levelscrollingplatform2_2663_0_0[0] = get_internal_image(6926);
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
FrameObject * create_levelscrollingplatform2_2663(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatform2_2663(x, y);
}
static Image* images_levelscrollingplatformend_2664_0_0[1];
static Direction direction_levelscrollingplatformend_2664_0_0 = {0, 50, 50, 0, 1, images_levelscrollingplatformend_2664_0_0, 1};
static Animation anim_levelscrollingplatformend_2664_0 = {&direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, NULL, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0, &direction_levelscrollingplatformend_2664_0_0};
static Animation * anim_array_levelscrollingplatformend_2664[1] = {&anim_levelscrollingplatformend_2664_0};
static Animations anim_levelscrollingplatformend_2664 = {1, &anim_array_levelscrollingplatformend_2664[0]};
static bool anim_levelscrollingplatformend_2664_initialized;
class LevelScrollingPlatformEnd_2664 : public Active
{
public:
    LevelScrollingPlatformEnd_2664(int x, int y) : Active(x, y, LevelScrollingPlatformEnd_2664_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformEnd", 26);
#endif
        set_visible(false);
        this->animations = &anim_levelscrollingplatformend_2664;
        if (!anim_levelscrollingplatformend_2664_initialized) {
            anim_levelscrollingplatformend_2664_initialized = true;
            images_levelscrollingplatformend_2664_0_0[0] = get_internal_image(6940);
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
FrameObject * create_levelscrollingplatformend_2664(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformEnd_2664(x, y);
}
static Image* images_levelscrollingplatformstart_2665_0_0[1];
static Direction direction_levelscrollingplatformstart_2665_0_0 = {0, 50, 50, 0, 1, images_levelscrollingplatformstart_2665_0_0, 1};
static Animation anim_levelscrollingplatformstart_2665_0 = {&direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, NULL, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0, &direction_levelscrollingplatformstart_2665_0_0};
static Animation * anim_array_levelscrollingplatformstart_2665[1] = {&anim_levelscrollingplatformstart_2665_0};
static Animations anim_levelscrollingplatformstart_2665 = {1, &anim_array_levelscrollingplatformstart_2665[0]};
static bool anim_levelscrollingplatformstart_2665_initialized;
class LevelScrollingPlatformStart_2665 : public Active
{
public:
    LevelScrollingPlatformStart_2665(int x, int y) : Active(x, y, LevelScrollingPlatformStart_2665_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformStart", 28);
#endif
        set_visible(false);
        this->animations = &anim_levelscrollingplatformstart_2665;
        if (!anim_levelscrollingplatformstart_2665_initialized) {
            anim_levelscrollingplatformstart_2665_initialized = true;
            images_levelscrollingplatformstart_2665_0_0[0] = get_internal_image(6925);
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
FrameObject * create_levelscrollingplatformstart_2665(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformStart_2665(x, y);
}
static Image* images_levelscrollingplatformplayerpush_2666_0_0[1];
static Direction direction_levelscrollingplatformplayerpush_2666_0_0 = {0, 50, 50, 0, 1, images_levelscrollingplatformplayerpush_2666_0_0, 1};
static Animation anim_levelscrollingplatformplayerpush_2666_0 = {&direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, NULL, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0, &direction_levelscrollingplatformplayerpush_2666_0_0};
static Animation * anim_array_levelscrollingplatformplayerpush_2666[1] = {&anim_levelscrollingplatformplayerpush_2666_0};
static Animations anim_levelscrollingplatformplayerpush_2666 = {1, &anim_array_levelscrollingplatformplayerpush_2666[0]};
static bool anim_levelscrollingplatformplayerpush_2666_initialized;
class LevelScrollingPlatformPlayerPush_2666 : public Active
{
public:
    LevelScrollingPlatformPlayerPush_2666(int x, int y) : Active(x, y, LevelScrollingPlatformPlayerPush_2666_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_ScrollingPlatformPlayerPush", 33);
#endif
        set_visible(false);
        this->animations = &anim_levelscrollingplatformplayerpush_2666;
        if (!anim_levelscrollingplatformplayerpush_2666_initialized) {
            anim_levelscrollingplatformplayerpush_2666_initialized = true;
            images_levelscrollingplatformplayerpush_2666_0_0[0] = get_internal_image(4932);
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
FrameObject * create_levelscrollingplatformplayerpush_2666(int x, int y)
{
    return new (Active::pool.create()) LevelScrollingPlatformPlayerPush_2666(x, y);
}
static Image* images_lockeddoorbarrier_2667_0_0[1];
static Direction direction_lockeddoorbarrier_2667_0_0 = {0, 50, 50, 0, 1, images_lockeddoorbarrier_2667_0_0, 1};
static Animation anim_lockeddoorbarrier_2667_0 = {&direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, NULL, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0, &direction_lockeddoorbarrier_2667_0_0};
static Animation * anim_array_lockeddoorbarrier_2667[1] = {&anim_lockeddoorbarrier_2667_0};
static Animations anim_lockeddoorbarrier_2667 = {1, &anim_array_lockeddoorbarrier_2667[0]};
static bool anim_lockeddoorbarrier_2667_initialized;
class LockedDoorBarrier_2667 : public Active
{
public:
    LockedDoorBarrier_2667(int x, int y) : Active(x, y, LockedDoorBarrier_2667_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("LockedDoor_Barrier", 18);
#endif
        set_visible(false);
        this->animations = &anim_lockeddoorbarrier_2667;
        if (!anim_lockeddoorbarrier_2667_initialized) {
            anim_lockeddoorbarrier_2667_initialized = true;
            images_lockeddoorbarrier_2667_0_0[0] = get_internal_image(11222);
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
FrameObject * create_lockeddoorbarrier_2667(int x, int y)
{
    return new (Active::pool.create()) LockedDoorBarrier_2667(x, y);
}
static Image* images_airventplatform_2668_0_0[1];
static Direction direction_airventplatform_2668_0_0 = {0, 50, 50, 0, 1, images_airventplatform_2668_0_0, 1};
static Animation anim_airventplatform_2668_0 = {&direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, NULL, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0, &direction_airventplatform_2668_0_0};
static Animation * anim_array_airventplatform_2668[1] = {&anim_airventplatform_2668_0};
static Animations anim_airventplatform_2668 = {1, &anim_array_airventplatform_2668[0]};
static bool anim_airventplatform_2668_initialized;
class AirVentPlatform_2668 : public Active
{
public:
    AirVentPlatform_2668(int x, int y) : Active(x, y, AirVentPlatform_2668_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("AirVent_Platform", 16);
#endif
        this->animations = &anim_airventplatform_2668;
        if (!anim_airventplatform_2668_initialized) {
            anim_airventplatform_2668_initialized = true;
            images_airventplatform_2668_0_0[0] = get_internal_image(4838);
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
FrameObject * create_airventplatform_2668(int x, int y)
{
    return new (Active::pool.create()) AirVentPlatform_2668(x, y);
}
static Image* images_hazardspikesup_2669_0_0[1];
static Direction direction_hazardspikesup_2669_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup_2669_0_0, 1};
static Animation anim_hazardspikesup_2669_0 = {&direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, NULL, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0, &direction_hazardspikesup_2669_0_0};
static Animation * anim_array_hazardspikesup_2669[1] = {&anim_hazardspikesup_2669_0};
static Animations anim_hazardspikesup_2669 = {1, &anim_array_hazardspikesup_2669[0]};
static bool anim_hazardspikesup_2669_initialized;
class HazardSpikesUp_2669 : public Active
{
public:
    HazardSpikesUp_2669(int x, int y) : Active(x, y, HazardSpikesUp_2669_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up", 16);
#endif
        this->animations = &anim_hazardspikesup_2669;
        if (!anim_hazardspikesup_2669_initialized) {
            anim_hazardspikesup_2669_initialized = true;
            images_hazardspikesup_2669_0_0[0] = get_internal_image(7135);
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
FrameObject * create_hazardspikesup_2669(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp_2669(x, y);
}
static Image* images_metaldoorfront_2670_0_0[10];
static Direction direction_metaldoorfront_2670_0_0 = {0, 0, 0, 0, 1, images_metaldoorfront_2670_0_0, 10};
static Animation anim_metaldoorfront_2670_0 = {&direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, NULL, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0, &direction_metaldoorfront_2670_0_0};
static Animation * anim_array_metaldoorfront_2670[1] = {&anim_metaldoorfront_2670_0};
static Animations anim_metaldoorfront_2670 = {1, &anim_array_metaldoorfront_2670[0]};
static bool anim_metaldoorfront_2670_initialized;
class MetalDoorFront_2670 : public Active
{
public:
    MetalDoorFront_2670(int x, int y) : Active(x, y, MetalDoorFront_2670_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MetalDoor_front", 15);
#endif
        this->animations = &anim_metaldoorfront_2670;
        if (!anim_metaldoorfront_2670_initialized) {
            anim_metaldoorfront_2670_initialized = true;
            images_metaldoorfront_2670_0_0[0] = get_internal_image(13260);
            images_metaldoorfront_2670_0_0[1] = get_internal_image(13264);
            images_metaldoorfront_2670_0_0[2] = get_internal_image(13260);
            images_metaldoorfront_2670_0_0[3] = get_internal_image(13266);
            images_metaldoorfront_2670_0_0[4] = get_internal_image(13262);
            images_metaldoorfront_2670_0_0[5] = get_internal_image(13261);
            images_metaldoorfront_2670_0_0[6] = get_internal_image(13268);
            images_metaldoorfront_2670_0_0[7] = get_internal_image(13261);
            images_metaldoorfront_2670_0_0[8] = get_internal_image(13263);
            images_metaldoorfront_2670_0_0[9] = get_internal_image(13261);
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
FrameObject * create_metaldoorfront_2670(int x, int y)
{
    return new (Active::pool.create()) MetalDoorFront_2670(x, y);
}
static Image* images_lockeddoorfront_2671_0_0[10];
static Direction direction_lockeddoorfront_2671_0_0 = {0, 0, 0, 0, 1, images_lockeddoorfront_2671_0_0, 10};
static Animation anim_lockeddoorfront_2671_0 = {&direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, NULL, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0, &direction_lockeddoorfront_2671_0_0};
static Animation * anim_array_lockeddoorfront_2671[1] = {&anim_lockeddoorfront_2671_0};
static Animations anim_lockeddoorfront_2671 = {1, &anim_array_lockeddoorfront_2671[0]};
static bool anim_lockeddoorfront_2671_initialized;
class LockedDoorFront_2671 : public Active
{
public:
    LockedDoorFront_2671(int x, int y) : Active(x, y, LockedDoorFront_2671_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedDoor_front", 16);
#endif
        this->animations = &anim_lockeddoorfront_2671;
        if (!anim_lockeddoorfront_2671_initialized) {
            anim_lockeddoorfront_2671_initialized = true;
            images_lockeddoorfront_2671_0_0[0] = get_internal_image(13267);
            images_lockeddoorfront_2671_0_0[1] = get_internal_image(13272);
            images_lockeddoorfront_2671_0_0[2] = get_internal_image(13267);
            images_lockeddoorfront_2671_0_0[3] = get_internal_image(13273);
            images_lockeddoorfront_2671_0_0[4] = get_internal_image(13262);
            images_lockeddoorfront_2671_0_0[5] = get_internal_image(13261);
            images_lockeddoorfront_2671_0_0[6] = get_internal_image(13268);
            images_lockeddoorfront_2671_0_0[7] = get_internal_image(13261);
            images_lockeddoorfront_2671_0_0[8] = get_internal_image(13263);
            images_lockeddoorfront_2671_0_0[9] = get_internal_image(13261);
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
FrameObject * create_lockeddoorfront_2671(int x, int y)
{
    return new (Active::pool.create()) LockedDoorFront_2671(x, y);
}
static Image* images_lockeddoorseal_2672_0_0[5];
static Direction direction_lockeddoorseal_2672_0_0 = {0, 50, 50, 0, -1, images_lockeddoorseal_2672_0_0, 5};
static Animation anim_lockeddoorseal_2672_0 = {&direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, NULL, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0, &direction_lockeddoorseal_2672_0_0};
static Animation * anim_array_lockeddoorseal_2672[1] = {&anim_lockeddoorseal_2672_0};
static Animations anim_lockeddoorseal_2672 = {1, &anim_array_lockeddoorseal_2672[0]};
static bool anim_lockeddoorseal_2672_initialized;
class LockedDoorSeal_2672 : public Active
{
public:
    LockedDoorSeal_2672(int x, int y) : Active(x, y, LockedDoorSeal_2672_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LockedDoor_Seal", 15);
#endif
        this->animations = &anim_lockeddoorseal_2672;
        if (!anim_lockeddoorseal_2672_initialized) {
            anim_lockeddoorseal_2672_initialized = true;
            images_lockeddoorseal_2672_0_0[0] = get_internal_image(13278);
            images_lockeddoorseal_2672_0_0[1] = get_internal_image(13279);
            images_lockeddoorseal_2672_0_0[2] = get_internal_image(13280);
            images_lockeddoorseal_2672_0_0[3] = get_internal_image(13281);
            images_lockeddoorseal_2672_0_0[4] = get_internal_image(13282);
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
FrameObject * create_lockeddoorseal_2672(int x, int y)
{
    return new (Active::pool.create()) LockedDoorSeal_2672(x, y);
}
class GUIKeycards_2673 : public Counter
{
public:
    GUIKeycards_2673(int x, int y) : Counter(x, y, GUIKeycards_2673_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Keycards", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(507);
            counter_images[1] = get_internal_image(393);
            counter_images[2] = get_internal_image(389);
            counter_images[3] = get_internal_image(418);
            counter_images[4] = get_internal_image(504);
            counter_images[5] = get_internal_image(518);
            counter_images[6] = get_internal_image(2027);
            counter_images[7] = get_internal_image(2029);
            counter_images[8] = get_internal_image(2864);
            counter_images[9] = get_internal_image(2868);
            counter_images[10] = get_internal_image(3564);
            counter_images[11] = get_internal_image(1528);
            counter_images[12] = get_internal_image(3937);
            counter_images[13] = get_internal_image(210);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 9;
        set(0);
    }
};
FrameObject * create_guikeycards_2673(int x, int y)
{
    return new (Counter::pool.create()) GUIKeycards_2673(x, y);
}
static Image* images_guikeycardicon_2674_0_0[1];
static Direction direction_guikeycardicon_2674_0_0 = {0, 50, 50, 0, 1, images_guikeycardicon_2674_0_0, 1};
static Animation anim_guikeycardicon_2674_0 = {&direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, NULL, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0, &direction_guikeycardicon_2674_0_0};
static Image* images_guikeycardicon_2674_7_0[13];
static Direction direction_guikeycardicon_2674_7_0 = {0, 50, 50, 0, 1, images_guikeycardicon_2674_7_0, 13};
static Animation anim_guikeycardicon_2674_7 = {&direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, NULL, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0, &direction_guikeycardicon_2674_7_0};
static Animation * anim_array_guikeycardicon_2674[8] = {&anim_guikeycardicon_2674_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_guikeycardicon_2674_7};
static Animations anim_guikeycardicon_2674 = {8, &anim_array_guikeycardicon_2674[0]};
static bool anim_guikeycardicon_2674_initialized;
class GUIKeycardIcon_2674 : public Active
{
public:
    GUIKeycardIcon_2674(int x, int y) : Active(x, y, GUIKeycardIcon_2674_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_KeycardIcon", 15);
#endif
        set_visible(false);
        this->animations = &anim_guikeycardicon_2674;
        if (!anim_guikeycardicon_2674_initialized) {
            anim_guikeycardicon_2674_initialized = true;
            images_guikeycardicon_2674_0_0[0] = get_internal_image(7143);
            images_guikeycardicon_2674_7_0[0] = get_internal_image(7143);
            images_guikeycardicon_2674_7_0[1] = get_internal_image(7254);
            images_guikeycardicon_2674_7_0[2] = get_internal_image(7143);
            images_guikeycardicon_2674_7_0[3] = get_internal_image(7254);
            images_guikeycardicon_2674_7_0[4] = get_internal_image(7127);
            images_guikeycardicon_2674_7_0[5] = get_internal_image(7145);
            images_guikeycardicon_2674_7_0[6] = get_internal_image(7148);
            images_guikeycardicon_2674_7_0[7] = get_internal_image(7146);
            images_guikeycardicon_2674_7_0[8] = get_internal_image(7149);
            images_guikeycardicon_2674_7_0[9] = get_internal_image(7152);
            images_guikeycardicon_2674_7_0[10] = get_internal_image(7153);
            images_guikeycardicon_2674_7_0[11] = get_internal_image(7253);
            images_guikeycardicon_2674_7_0[12] = get_internal_image(7143);
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
FrameObject * create_guikeycardicon_2674(int x, int y)
{
    return new (Active::pool.create()) GUIKeycardIcon_2674(x, y);
}
class LevelParallaxPiece7_2675 : public SystemBox
{
public:
    LevelParallaxPiece7_2675(int x, int y) : SystemBox(x, y, LevelParallaxPiece7_2675_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 7", 22);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 640;
        type = PATTERN_IMAGE;
        image = get_internal_image(1587);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece7_2675(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece7_2675(x, y);
}
static Image* images_enemylavasquidlaser_2676_0_0[3];
static Direction direction_enemylavasquidlaser_2676_0_0 = {0, 25, 25, 0, -1, images_enemylavasquidlaser_2676_0_0, 3};
static Animation anim_enemylavasquidlaser_2676_0 = {&direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, NULL, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0, &direction_enemylavasquidlaser_2676_0_0};
static Animation * anim_array_enemylavasquidlaser_2676[1] = {&anim_enemylavasquidlaser_2676_0};
static Animations anim_enemylavasquidlaser_2676 = {1, &anim_array_enemylavasquidlaser_2676[0]};
static bool anim_enemylavasquidlaser_2676_initialized;
class EnemyLavaSquidLaser_2676 : public Active
{
public:
    EnemyLavaSquidLaser_2676(int x, int y) : Active(x, y, EnemyLavaSquidLaser_2676_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_LavaSquidLaser", 20);
#endif
        this->animations = &anim_enemylavasquidlaser_2676;
        if (!anim_enemylavasquidlaser_2676_initialized) {
            anim_enemylavasquidlaser_2676_initialized = true;
            images_enemylavasquidlaser_2676_0_0[0] = get_internal_image(12175);
            images_enemylavasquidlaser_2676_0_0[1] = get_internal_image(12176);
            images_enemylavasquidlaser_2676_0_0[2] = get_internal_image(12177);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 6);
    }
};
FrameObject * create_enemylavasquidlaser_2676(int x, int y)
{
    return new (Active::pool.create()) EnemyLavaSquidLaser_2676(x, y);
}
static Image* images_enemylavasquiddebris_2677_0_0[2];
static Direction direction_enemylavasquiddebris_2677_0_0 = {0, 0, 0, 0, 1, images_enemylavasquiddebris_2677_0_0, 2};
static Image* images_enemylavasquiddebris_2677_0_16[2];
static Direction direction_enemylavasquiddebris_2677_0_16 = {16, 0, 0, 0, 1, images_enemylavasquiddebris_2677_0_16, 2};
static Animation anim_enemylavasquiddebris_2677_0 = {&direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, NULL, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, &direction_enemylavasquiddebris_2677_0_16, NULL, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0, &direction_enemylavasquiddebris_2677_0_0};
static Animation * anim_array_enemylavasquiddebris_2677[1] = {&anim_enemylavasquiddebris_2677_0};
static Animations anim_enemylavasquiddebris_2677 = {1, &anim_array_enemylavasquiddebris_2677[0]};
static bool anim_enemylavasquiddebris_2677_initialized;
class EnemyLavaSquidDebris_2677 : public Active
{
public:
    EnemyLavaSquidDebris_2677(int x, int y) : Active(x, y, EnemyLavaSquidDebris_2677_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_LavaSquidDebris", 21);
#endif
        this->animations = &anim_enemylavasquiddebris_2677;
        if (!anim_enemylavasquiddebris_2677_initialized) {
            anim_enemylavasquiddebris_2677_initialized = true;
            images_enemylavasquiddebris_2677_0_0[0] = get_internal_image(12178);
            images_enemylavasquiddebris_2677_0_0[1] = get_internal_image(12179);
            images_enemylavasquiddebris_2677_0_16[0] = get_internal_image(12180);
            images_enemylavasquiddebris_2677_0_16[1] = get_internal_image(12181);
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
FrameObject * create_enemylavasquiddebris_2677(int x, int y)
{
    return new (Active::pool.create()) EnemyLavaSquidDebris_2677(x, y);
}
static Image* images_objectexplosiveblockdestroyer_2678_0_0[1];
static Direction direction_objectexplosiveblockdestroyer_2678_0_0 = {0, 50, 50, 0, 1, images_objectexplosiveblockdestroyer_2678_0_0, 1};
static Animation anim_objectexplosiveblockdestroyer_2678_0 = {&direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, NULL, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0, &direction_objectexplosiveblockdestroyer_2678_0_0};
static Animation * anim_array_objectexplosiveblockdestroyer_2678[1] = {&anim_objectexplosiveblockdestroyer_2678_0};
static Animations anim_objectexplosiveblockdestroyer_2678 = {1, &anim_array_objectexplosiveblockdestroyer_2678[0]};
static bool anim_objectexplosiveblockdestroyer_2678_initialized;
class ObjectExplosiveBlockDestroyer_2678 : public Active
{
public:
    ObjectExplosiveBlockDestroyer_2678(int x, int y) : Active(x, y, ObjectExplosiveBlockDestroyer_2678_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_ExplosiveBlockDestroyer", 30);
#endif
        set_visible(false);
        this->animations = &anim_objectexplosiveblockdestroyer_2678;
        if (!anim_objectexplosiveblockdestroyer_2678_initialized) {
            anim_objectexplosiveblockdestroyer_2678_initialized = true;
            images_objectexplosiveblockdestroyer_2678_0_0[0] = get_internal_image(12186);
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
FrameObject * create_objectexplosiveblockdestroyer_2678(int x, int y)
{
    return new (Active::pool.create()) ObjectExplosiveBlockDestroyer_2678(x, y);
}
class TBWall14_2679 : public Backdrop
{
public:
    TBWall14_2679(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 14", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7850);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall14_2679(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall14_2679(x, y);
}
class TBWall18_2680 : public Backdrop
{
public:
    TBWall18_2680(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 18", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11328);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbwall18_2680(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall18_2680(x, y);
}
class TBSpinningPlatformRing1_2681 : public Backdrop
{
public:
    TBSpinningPlatformRing1_2681(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SpinningPlatformRing 1", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1757);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbspinningplatformring1_2681(int x, int y)
{
    return new (Backdrop::pool.create()) TBSpinningPlatformRing1_2681(x, y);
}
class TBSpinningPlatformRing2_2682 : public Backdrop
{
public:
    TBSpinningPlatformRing2_2682(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SpinningPlatformRing 2", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6816);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbspinningplatformring2_2682(int x, int y)
{
    return new (Backdrop::pool.create()) TBSpinningPlatformRing2_2682(x, y);
}
class TBCautionLine_2683 : public Backdrop
{
public:
    TBCautionLine_2683(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_CautionLine", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12185);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbcautionline_2683(int x, int y)
{
    return new (Backdrop::pool.create()) TBCautionLine_2683(x, y);
}
class TBSpinningPlatformRing3_2684 : public Backdrop
{
public:
    TBSpinningPlatformRing3_2684(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SpinningPlatformRing 3", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12182);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tbspinningplatformring3_2684(int x, int y)
{
    return new (Backdrop::pool.create()) TBSpinningPlatformRing3_2684(x, y);
}
static Image* images_levelpistonplatformmask_2685_0_0[1];
static Direction direction_levelpistonplatformmask_2685_0_0 = {0, 50, 50, 0, 1, images_levelpistonplatformmask_2685_0_0, 1};
static Animation anim_levelpistonplatformmask_2685_0 = {&direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, NULL, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0, &direction_levelpistonplatformmask_2685_0_0};
static Animation * anim_array_levelpistonplatformmask_2685[1] = {&anim_levelpistonplatformmask_2685_0};
static Animations anim_levelpistonplatformmask_2685 = {1, &anim_array_levelpistonplatformmask_2685[0]};
static bool anim_levelpistonplatformmask_2685_initialized;
class LevelPistonPlatformMask_2685 : public Active
{
public:
    LevelPistonPlatformMask_2685(int x, int y) : Active(x, y, LevelPistonPlatformMask_2685_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_PistonPlatformMask", 24);
#endif
        this->animations = &anim_levelpistonplatformmask_2685;
        if (!anim_levelpistonplatformmask_2685_initialized) {
            anim_levelpistonplatformmask_2685_initialized = true;
            images_levelpistonplatformmask_2685_0_0[0] = get_internal_image(11287);
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
FrameObject * create_levelpistonplatformmask_2685(int x, int y)
{
    return new (Active::pool.create()) LevelPistonPlatformMask_2685(x, y);
}
static Image* images_levelspinplaformsupport_2686_0_0[1];
static Direction direction_levelspinplaformsupport_2686_0_0 = {0, 50, 50, 0, 1, images_levelspinplaformsupport_2686_0_0, 1};
static Animation anim_levelspinplaformsupport_2686_0 = {&direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, NULL, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0, &direction_levelspinplaformsupport_2686_0_0};
static Animation * anim_array_levelspinplaformsupport_2686[1] = {&anim_levelspinplaformsupport_2686_0};
static Animations anim_levelspinplaformsupport_2686 = {1, &anim_array_levelspinplaformsupport_2686[0]};
static bool anim_levelspinplaformsupport_2686_initialized;
class LevelSpinPlaformSupport_2686 : public Active
{
public:
    LevelSpinPlaformSupport_2686(int x, int y) : Active(x, y, LevelSpinPlaformSupport_2686_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_SpinPlaformSupport", 24);
#endif
        this->animations = &anim_levelspinplaformsupport_2686;
        if (!anim_levelspinplaformsupport_2686_initialized) {
            anim_levelspinplaformsupport_2686_initialized = true;
            images_levelspinplaformsupport_2686_0_0[0] = get_internal_image(8913);
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
FrameObject * create_levelspinplaformsupport_2686(int x, int y)
{
    return new (Active::pool.create()) LevelSpinPlaformSupport_2686(x, y);
}
static Image* images_levelspinplatformmask_2687_0_0[1];
static Direction direction_levelspinplatformmask_2687_0_0 = {0, 50, 50, 0, 1, images_levelspinplatformmask_2687_0_0, 1};
static Animation anim_levelspinplatformmask_2687_0 = {&direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, NULL, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0, &direction_levelspinplatformmask_2687_0_0};
static Animation * anim_array_levelspinplatformmask_2687[1] = {&anim_levelspinplatformmask_2687_0};
static Animations anim_levelspinplatformmask_2687 = {1, &anim_array_levelspinplatformmask_2687[0]};
static bool anim_levelspinplatformmask_2687_initialized;
class LevelSpinPlatformMask_2687 : public Active
{
public:
    LevelSpinPlatformMask_2687(int x, int y) : Active(x, y, LevelSpinPlatformMask_2687_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_SpinPlatformMask", 22);
#endif
        this->animations = &anim_levelspinplatformmask_2687;
        if (!anim_levelspinplatformmask_2687_initialized) {
            anim_levelspinplatformmask_2687_initialized = true;
            images_levelspinplatformmask_2687_0_0[0] = get_internal_image(1574);
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
FrameObject * create_levelspinplatformmask_2687(int x, int y)
{
    return new (Active::pool.create()) LevelSpinPlatformMask_2687(x, y);
}
class TBSolidBlack_2688 : public QuickBackdrop
{
public:
    TBSolidBlack_2688(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SolidBlack", 13);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 128;
        color = Color(8, 0, 0, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbsolidblack_2688(int x, int y)
{
    return new (QuickBackdrop::pool.create()) TBSolidBlack_2688(x, y);
}
class TBLongRailing2_2689 : public Backdrop
{
public:
    TBLongRailing2_2689(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_LongRailing 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11326);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tblongrailing2_2689(int x, int y)
{
    return new (Backdrop::pool.create()) TBLongRailing2_2689(x, y);
}
class TBLongRailing3_2690 : public Backdrop
{
public:
    TBLongRailing3_2690(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_LongRailing 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11327);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tblongrailing3_2690(int x, int y)
{
    return new (Backdrop::pool.create()) TBLongRailing3_2690(x, y);
}
class TBSwitchpadRight_2691 : public Backdrop
{
public:
    TBSwitchpadRight_2691(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SwitchpadRight", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4085);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbswitchpadright_2691(int x, int y)
{
    return new (Backdrop::pool.create()) TBSwitchpadRight_2691(x, y);
}
class TBSwitchpadFloor_2692 : public Backdrop
{
public:
    TBSwitchpadFloor_2692(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SwitchpadFloor", 17);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(12184);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbswitchpadfloor_2692(int x, int y)
{
    return new (Backdrop::pool.create()) TBSwitchpadFloor_2692(x, y);
}
class TBSwitchpadLeft_2693 : public Backdrop
{
public:
    TBSwitchpadLeft_2693(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_SwitchpadLeft", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4934);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_tbswitchpadleft_2693(int x, int y)
{
    return new (Backdrop::pool.create()) TBSwitchpadLeft_2693(x, y);
}
class TBWall9_2694 : public Backdrop
{
public:
    TBWall9_2694(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 9", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1148);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall9_2694(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall9_2694(x, y);
}
class TBWall10_2695 : public Backdrop
{
public:
    TBWall10_2695(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 10", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1169);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall10_2695(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall10_2695(x, y);
}
class TBWall13_2696 : public Backdrop
{
public:
    TBWall13_2696(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 13", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11323);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall13_2696(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall13_2696(x, y);
}
class TBWall11_2697 : public Backdrop
{
public:
    TBWall11_2697(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 11", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1182);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall11_2697(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall11_2697(x, y);
}
class TBWall15_2698 : public Backdrop
{
public:
    TBWall15_2698(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 15", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11289);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall15_2698(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall15_2698(x, y);
}
class TBWall12_2699 : public Backdrop
{
public:
    TBWall12_2699(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 12", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11322);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall12_2699(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall12_2699(x, y);
}
class TBWall16_2700 : public Backdrop
{
public:
    TBWall16_2700(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 16", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11325);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall16_2700(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall16_2700(x, y);
}
class TBWall19_2701 : public Backdrop
{
public:
    TBWall19_2701(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 19", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6776);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall19_2701(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall19_2701(x, y);
}
class TBWall22_2702 : public Backdrop
{
public:
    TBWall22_2702(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 22", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11324);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall22_2702(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall22_2702(x, y);
}
class TBWall20_2703 : public Backdrop
{
public:
    TBWall20_2703(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 20", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11293);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall20_2703(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall20_2703(x, y);
}
class TBWall21_2704 : public Backdrop
{
public:
    TBWall21_2704(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 21", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11320);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall21_2704(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall21_2704(x, y);
}
class TBWall17_2705 : public Backdrop
{
public:
    TBWall17_2705(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 17", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(550);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall17_2705(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall17_2705(x, y);
}
class TBWall23_2706 : public Backdrop
{
public:
    TBWall23_2706(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_Wall 23", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11331);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_tbwall23_2706(int x, int y)
{
    return new (Backdrop::pool.create()) TBWall23_2706(x, y);
}
class TBLongRailing_2707 : public Backdrop
{
public:
    TBLongRailing_2707(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("TB_LongRailing", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1167);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_tblongrailing_2707(int x, int y)
{
    return new (Backdrop::pool.create()) TBLongRailing_2707(x, y);
}
static Image* images_objectexplosiveblock_2708_0_0[1];
static Direction direction_objectexplosiveblock_2708_0_0 = {0, 100, 100, 0, 1, images_objectexplosiveblock_2708_0_0, 1};
static Animation anim_objectexplosiveblock_2708_0 = {&direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, NULL, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0, &direction_objectexplosiveblock_2708_0_0};
static Animation * anim_array_objectexplosiveblock_2708[1] = {&anim_objectexplosiveblock_2708_0};
static Animations anim_objectexplosiveblock_2708 = {1, &anim_array_objectexplosiveblock_2708[0]};
static bool anim_objectexplosiveblock_2708_initialized;
class ObjectExplosiveBlock_2708 : public Active
{
public:
    ObjectExplosiveBlock_2708(int x, int y) : Active(x, y, ObjectExplosiveBlock_2708_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_ExplosiveBlock", 21);
#endif
        this->animations = &anim_objectexplosiveblock_2708;
        if (!anim_objectexplosiveblock_2708_initialized) {
            anim_objectexplosiveblock_2708_initialized = true;
            images_objectexplosiveblock_2708_0_0[0] = get_internal_image(10999);
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
FrameObject * create_objectexplosiveblock_2708(int x, int y)
{
    return new (Active::pool.create()) ObjectExplosiveBlock_2708(x, y);
}
static Image* images_hazardlavafallwarning_2709_0_0[1];
static Direction direction_hazardlavafallwarning_2709_0_0 = {0, 50, 50, 0, 1, images_hazardlavafallwarning_2709_0_0, 1};
static Image* images_hazardlavafallwarning_2709_0_1[4];
static Direction direction_hazardlavafallwarning_2709_0_1 = {1, 25, 25, 0, -1, images_hazardlavafallwarning_2709_0_1, 4};
static Animation anim_hazardlavafallwarning_2709_0 = {&direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_1, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0, &direction_hazardlavafallwarning_2709_0_0};
static Animation * anim_array_hazardlavafallwarning_2709[1] = {&anim_hazardlavafallwarning_2709_0};
static Animations anim_hazardlavafallwarning_2709 = {1, &anim_array_hazardlavafallwarning_2709[0]};
static bool anim_hazardlavafallwarning_2709_initialized;
class HazardLavaFallWarning_2709 : public Active
{
public:
    HazardLavaFallWarning_2709(int x, int y) : Active(x, y, HazardLavaFallWarning_2709_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hazard_LavaFallWarning", 22);
#endif
        this->animations = &anim_hazardlavafallwarning_2709;
        if (!anim_hazardlavafallwarning_2709_initialized) {
            anim_hazardlavafallwarning_2709_initialized = true;
            images_hazardlavafallwarning_2709_0_0[0] = get_internal_image(12081);
            images_hazardlavafallwarning_2709_0_1[0] = get_internal_image(12080);
            images_hazardlavafallwarning_2709_0_1[1] = get_internal_image(12109);
            images_hazardlavafallwarning_2709_0_1[2] = get_internal_image(12083);
            images_hazardlavafallwarning_2709_0_1[3] = get_internal_image(12079);
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
FrameObject * create_hazardlavafallwarning_2709(int x, int y)
{
    return new (Active::pool.create()) HazardLavaFallWarning_2709(x, y);
}
static Image* images_enemyseeker3_2710_0_0[1];
static Direction direction_enemyseeker3_2710_0_0 = {0, 50, 50, 0, 1, images_enemyseeker3_2710_0_0, 1};
static Animation anim_enemyseeker3_2710_0 = {&direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, NULL, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0, &direction_enemyseeker3_2710_0_0};
static Animation * anim_array_enemyseeker3_2710[1] = {&anim_enemyseeker3_2710_0};
static Animations anim_enemyseeker3_2710 = {1, &anim_array_enemyseeker3_2710[0]};
static bool anim_enemyseeker3_2710_initialized;
class EnemySeeker3_2710 : public Active
{
public:
    EnemySeeker3_2710(int x, int y) : Active(x, y, EnemySeeker3_2710_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Seeker 3", 14);
#endif
        this->animations = &anim_enemyseeker3_2710;
        if (!anim_enemyseeker3_2710_initialized) {
            anim_enemyseeker3_2710_initialized = true;
            images_enemyseeker3_2710_0_0[0] = get_internal_image(6538);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
    }
};
FrameObject * create_enemyseeker3_2710(int x, int y)
{
    return new (Active::pool.create()) EnemySeeker3_2710(x, y);
}
static Image* images_enemyseeker2_2711_0_0[1];
static Direction direction_enemyseeker2_2711_0_0 = {0, 50, 50, 0, 1, images_enemyseeker2_2711_0_0, 1};
static Animation anim_enemyseeker2_2711_0 = {&direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, NULL, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0, &direction_enemyseeker2_2711_0_0};
static Animation * anim_array_enemyseeker2_2711[1] = {&anim_enemyseeker2_2711_0};
static Animations anim_enemyseeker2_2711 = {1, &anim_array_enemyseeker2_2711[0]};
static bool anim_enemyseeker2_2711_initialized;
class EnemySeeker2_2711 : public Active
{
public:
    EnemySeeker2_2711(int x, int y) : Active(x, y, EnemySeeker2_2711_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Seeker 2", 14);
#endif
        this->animations = &anim_enemyseeker2_2711;
        if (!anim_enemyseeker2_2711_initialized) {
            anim_enemyseeker2_2711_initialized = true;
            images_enemyseeker2_2711_0_0[0] = get_internal_image(24);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
    }
};
FrameObject * create_enemyseeker2_2711(int x, int y)
{
    return new (Active::pool.create()) EnemySeeker2_2711(x, y);
}
static Image* images_active2_2712_0_0[3];
static Direction direction_active2_2712_0_0 = {0, 50, 50, 0, 1, images_active2_2712_0_0, 3};
static Animation anim_active2_2712_0 = {&direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, NULL, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0, &direction_active2_2712_0_0};
static Animation * anim_array_active2_2712[1] = {&anim_active2_2712_0};
static Animations anim_active2_2712 = {1, &anim_array_active2_2712[0]};
static bool anim_active2_2712_initialized;
class Active2_2712 : public Active
{
public:
    Active2_2712(int x, int y) : Active(x, y, Active2_2712_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_2712;
        if (!anim_active2_2712_initialized) {
            anim_active2_2712_initialized = true;
            images_active2_2712_0_0[0] = get_internal_image(767);
            images_active2_2712_0_0[1] = get_internal_image(765);
            images_active2_2712_0_0[2] = get_internal_image(782);
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
FrameObject * create_active2_2712(int x, int y)
{
    return new (Active::pool.create()) Active2_2712(x, y);
}
