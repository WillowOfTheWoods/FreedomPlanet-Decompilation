#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class EscalatorBack1_1911 : public Backdrop
{
public:
    EscalatorBack1_1911(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7719);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback1_1911(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack1_1911(x, y);
}
class EscalatorBack2_1912 : public Backdrop
{
public:
    EscalatorBack2_1912(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7895);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback2_1912(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack2_1912(x, y);
}
class MallFloor5_1913 : public Backdrop
{
public:
    MallFloor5_1913(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 5", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5091);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfloor5_1913(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor5_1913(x, y);
}
class EscalatorBack3_1914 : public Backdrop
{
public:
    EscalatorBack3_1914(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7896);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback3_1914(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack3_1914(x, y);
}
class EscalatorBack4_1915 : public Backdrop
{
public:
    EscalatorBack4_1915(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 4", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7892);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback4_1915(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack4_1915(x, y);
}
class EscalatorBack5_1916 : public Backdrop
{
public:
    EscalatorBack5_1916(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7894);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback5_1916(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack5_1916(x, y);
}
class EscalatorBack6_1917 : public Backdrop
{
public:
    EscalatorBack6_1917(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("EscalatorBack 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7903);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_escalatorback6_1917(int x, int y)
{
    return new (Backdrop::pool.create()) EscalatorBack6_1917(x, y);
}
class MallLogo_1918 : public Backdrop
{
public:
    MallLogo_1918(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallLogo", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11645);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_malllogo_1918(int x, int y)
{
    return new (Backdrop::pool.create()) MallLogo_1918(x, y);
}
class RedCarpet_1919 : public Backdrop
{
public:
    RedCarpet_1919(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("RedCarpet", 9);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4888);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_redcarpet_1919(int x, int y)
{
    return new (Backdrop::pool.create()) RedCarpet_1919(x, y);
}
class MallFloor6_1920 : public Backdrop
{
public:
    MallFloor6_1920(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 6", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5079);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_mallfloor6_1920(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor6_1920(x, y);
}
class SwitchWallBase_1921 : public Backdrop
{
public:
    SwitchWallBase_1921(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Switch_WallBase", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(7316);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_switchwallbase_1921(int x, int y)
{
    return new (Backdrop::pool.create()) SwitchWallBase_1921(x, y);
}
class FNCable_1922 : public Backdrop
{
public:
    FNCable_1922(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_Cable", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(2861);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fncable_1922(int x, int y)
{
    return new (Backdrop::pool.create()) FNCable_1922(x, y);
}
class HamsterTunnel1_1923 : public Backdrop
{
public:
    HamsterTunnel1_1923(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 1", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3087);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel1_1923(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel1_1923(x, y);
}
class HamsterTunnel3_1924 : public Backdrop
{
public:
    HamsterTunnel3_1924(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 3", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4055);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_hamstertunnel3_1924(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel3_1924(x, y);
}
class EdgeOverlay2_1925 : public Backdrop
{
public:
    EdgeOverlay2_1925(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Edge_Overlay 2", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1674);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_edgeoverlay2_1925(int x, int y)
{
    return new (Backdrop::pool.create()) EdgeOverlay2_1925(x, y);
}
class EdgeOverlay3_1926 : public Backdrop
{
public:
    EdgeOverlay3_1926(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Edge_Overlay 3", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1280);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        blend_color = Color(255, 255, 255, 0);
    }
};
FrameObject * create_edgeoverlay3_1926(int x, int y)
{
    return new (Backdrop::pool.create()) EdgeOverlay3_1926(x, y);
}
class StopperBack_1927 : public Backdrop
{
public:
    StopperBack_1927(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("StopperBack", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3273);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_stopperback_1927(int x, int y)
{
    return new (Backdrop::pool.create()) StopperBack_1927(x, y);
}
class MallFloor8_1928 : public Backdrop
{
public:
    MallFloor8_1928(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 8", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8727);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_mallfloor8_1928(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor8_1928(x, y);
}
class MallFloor9_1929 : public Backdrop
{
public:
    MallFloor9_1929(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 9", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5099);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfloor9_1929(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor9_1929(x, y);
}
class RestroomBack_1930 : public Backdrop
{
public:
    RestroomBack_1930(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Restroom_back", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11646);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_restroomback_1930(int x, int y)
{
    return new (Backdrop::pool.create()) RestroomBack_1930(x, y);
}
class VelvetRope_1931 : public Backdrop
{
public:
    VelvetRope_1931(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("VelvetRope", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1037);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_velvetrope_1931(int x, int y)
{
    return new (Backdrop::pool.create()) VelvetRope_1931(x, y);
}
class MallStoreBase_1932 : public Backdrop
{
public:
    MallStoreBase_1932(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_StoreBase", 14);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11613);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallstorebase_1932(int x, int y)
{
    return new (Backdrop::pool.create()) MallStoreBase_1932(x, y);
}
class MallStoreBase2_1933 : public Backdrop
{
public:
    MallStoreBase2_1933(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_StoreBase 2", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3086);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallstorebase2_1933(int x, int y)
{
    return new (Backdrop::pool.create()) MallStoreBase2_1933(x, y);
}
class MallStoreBase3_1934 : public Backdrop
{
public:
    MallStoreBase3_1934(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_StoreBase 3", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1563);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallstorebase3_1934(int x, int y)
{
    return new (Backdrop::pool.create()) MallStoreBase3_1934(x, y);
}
class MallStoreBase4_1935 : public Backdrop
{
public:
    MallStoreBase4_1935(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Mall_StoreBase 4", 16);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8074);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallstorebase4_1935(int x, int y)
{
    return new (Backdrop::pool.create()) MallStoreBase4_1935(x, y);
}
class KeyboardBack_1936 : public Backdrop
{
public:
    KeyboardBack_1936(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Keyboard_back", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1791);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_keyboardback_1936(int x, int y)
{
    return new (Backdrop::pool.create()) KeyboardBack_1936(x, y);
}
class KeyboardSharpnote_1937 : public Backdrop
{
public:
    KeyboardSharpnote_1937(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Keyboard_sharpnote", 18);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11431);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_keyboardsharpnote_1937(int x, int y)
{
    return new (Backdrop::pool.create()) KeyboardSharpnote_1937(x, y);
}
static Image* images_enemydusterarm2_1938_0_0[1];
static Direction direction_enemydusterarm2_1938_0_0 = {0, 50, 50, 0, 1, images_enemydusterarm2_1938_0_0, 1};
static Image* images_enemydusterarm2_1938_0_16[1];
static Direction direction_enemydusterarm2_1938_0_16 = {16, 50, 50, 0, 1, images_enemydusterarm2_1938_0_16, 1};
static Animation anim_enemydusterarm2_1938_0 = {&direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, NULL, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, &direction_enemydusterarm2_1938_0_16, NULL, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0, &direction_enemydusterarm2_1938_0_0};
static Animation * anim_array_enemydusterarm2_1938[1] = {&anim_enemydusterarm2_1938_0};
static Animations anim_enemydusterarm2_1938 = {1, &anim_array_enemydusterarm2_1938[0]};
static bool anim_enemydusterarm2_1938_initialized;
class EnemyDusterArm2_1938 : public Active
{
public:
    EnemyDusterArm2_1938(int x, int y) : Active(x, y, EnemyDusterArm2_1938_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DusterArm 2", 17);
#endif
        this->animations = &anim_enemydusterarm2_1938;
        if (!anim_enemydusterarm2_1938_initialized) {
            anim_enemydusterarm2_1938_initialized = true;
            images_enemydusterarm2_1938_0_0[0] = get_internal_image(13209);
            images_enemydusterarm2_1938_0_16[0] = get_internal_image(6571);
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
FrameObject * create_enemydusterarm2_1938(int x, int y)
{
    return new (Active::pool.create()) EnemyDusterArm2_1938(x, y);
}
static Image* images_enemydusterarm1_1939_0_0[1];
static Direction direction_enemydusterarm1_1939_0_0 = {0, 50, 50, 0, 1, images_enemydusterarm1_1939_0_0, 1};
static Image* images_enemydusterarm1_1939_0_16[1];
static Direction direction_enemydusterarm1_1939_0_16 = {16, 50, 50, 0, 1, images_enemydusterarm1_1939_0_16, 1};
static Animation anim_enemydusterarm1_1939_0 = {&direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, NULL, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, &direction_enemydusterarm1_1939_0_16, NULL, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0, &direction_enemydusterarm1_1939_0_0};
static Animation * anim_array_enemydusterarm1_1939[1] = {&anim_enemydusterarm1_1939_0};
static Animations anim_enemydusterarm1_1939 = {1, &anim_array_enemydusterarm1_1939[0]};
static bool anim_enemydusterarm1_1939_initialized;
class EnemyDusterArm1_1939 : public Active
{
public:
    EnemyDusterArm1_1939(int x, int y) : Active(x, y, EnemyDusterArm1_1939_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DusterArm 1", 17);
#endif
        this->animations = &anim_enemydusterarm1_1939;
        if (!anim_enemydusterarm1_1939_initialized) {
            anim_enemydusterarm1_1939_initialized = true;
            images_enemydusterarm1_1939_0_0[0] = get_internal_image(13208);
            images_enemydusterarm1_1939_0_16[0] = get_internal_image(7594);
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
FrameObject * create_enemydusterarm1_1939(int x, int y)
{
    return new (Active::pool.create()) EnemyDusterArm1_1939(x, y);
}
static Image* images_keyboard_1940_0_0[1];
static Direction direction_keyboard_1940_0_0 = {0, 50, 50, 0, 1, images_keyboard_1940_0_0, 1};
static Animation anim_keyboard_1940_0 = {&direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, NULL, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0, &direction_keyboard_1940_0_0};
static Image* images_keyboard_1940_7_0[5];
static Direction direction_keyboard_1940_7_0 = {0, 50, 50, 4, -1, images_keyboard_1940_7_0, 5};
static Animation anim_keyboard_1940_7 = {&direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, NULL, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0, &direction_keyboard_1940_7_0};
static Animation * anim_array_keyboard_1940[8] = {&anim_keyboard_1940_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_keyboard_1940_7};
static Animations anim_keyboard_1940 = {8, &anim_array_keyboard_1940[0]};
static bool anim_keyboard_1940_initialized;
class Keyboard_1940 : public Active
{
public:
    Keyboard_1940(int x, int y) : Active(x, y, Keyboard_1940_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Keyboard", 8);
#endif
        this->animations = &anim_keyboard_1940;
        if (!anim_keyboard_1940_initialized) {
            anim_keyboard_1940_initialized = true;
            images_keyboard_1940_0_0[0] = get_internal_image(11432);
            images_keyboard_1940_7_0[0] = get_internal_image(11438);
            images_keyboard_1940_7_0[1] = get_internal_image(11434);
            images_keyboard_1940_7_0[2] = get_internal_image(11435);
            images_keyboard_1940_7_0[3] = get_internal_image(11436);
            images_keyboard_1940_7_0[4] = get_internal_image(11433);
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
FrameObject * create_keyboard_1940(int x, int y)
{
    return new (Active::pool.create()) Keyboard_1940(x, y);
}
static Image* images_restroommen_1941_0_0[10];
static Direction direction_restroommen_1941_0_0 = {0, 0, 0, 0, 1, images_restroommen_1941_0_0, 10};
static Animation anim_restroommen_1941_0 = {&direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, NULL, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0, &direction_restroommen_1941_0_0};
static Animation * anim_array_restroommen_1941[1] = {&anim_restroommen_1941_0};
static Animations anim_restroommen_1941 = {1, &anim_array_restroommen_1941[0]};
static bool anim_restroommen_1941_initialized;
class RestroomMen_1941 : public Active
{
public:
    RestroomMen_1941(int x, int y) : Active(x, y, RestroomMen_1941_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Restroom_men", 12);
#endif
        this->animations = &anim_restroommen_1941;
        if (!anim_restroommen_1941_initialized) {
            anim_restroommen_1941_initialized = true;
            images_restroommen_1941_0_0[0] = get_internal_image(11518);
            images_restroommen_1941_0_0[1] = get_internal_image(581);
            images_restroommen_1941_0_0[2] = get_internal_image(1647);
            images_restroommen_1941_0_0[3] = get_internal_image(3290);
            images_restroommen_1941_0_0[4] = get_internal_image(3820);
            images_restroommen_1941_0_0[5] = get_internal_image(4125);
            images_restroommen_1941_0_0[6] = get_internal_image(4638);
            images_restroommen_1941_0_0[7] = get_internal_image(4640);
            images_restroommen_1941_0_0[8] = get_internal_image(4765);
            images_restroommen_1941_0_0[9] = get_internal_image(5100);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_512_restroom_men.value;
        if (!global_data_512_restroom_men.init) {
            global_data_512_restroom_men.init = true;
        }
    }
};
FrameObject * create_restroommen_1941(int x, int y)
{
    return new (Active::pool.create()) RestroomMen_1941(x, y);
}
static Image* images_restroomwomen_1942_0_0[10];
static Direction direction_restroomwomen_1942_0_0 = {0, 0, 0, 0, 1, images_restroomwomen_1942_0_0, 10};
static Animation anim_restroomwomen_1942_0 = {&direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, NULL, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0, &direction_restroomwomen_1942_0_0};
static Animation * anim_array_restroomwomen_1942[1] = {&anim_restroomwomen_1942_0};
static Animations anim_restroomwomen_1942 = {1, &anim_array_restroomwomen_1942[0]};
static bool anim_restroomwomen_1942_initialized;
class RestroomWomen_1942 : public Active
{
public:
    RestroomWomen_1942(int x, int y) : Active(x, y, RestroomWomen_1942_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Restroom_women", 14);
#endif
        this->animations = &anim_restroomwomen_1942;
        if (!anim_restroomwomen_1942_initialized) {
            anim_restroomwomen_1942_initialized = true;
            images_restroomwomen_1942_0_0[0] = get_internal_image(11457);
            images_restroomwomen_1942_0_0[1] = get_internal_image(5133);
            images_restroomwomen_1942_0_0[2] = get_internal_image(5135);
            images_restroomwomen_1942_0_0[3] = get_internal_image(5138);
            images_restroomwomen_1942_0_0[4] = get_internal_image(5150);
            images_restroomwomen_1942_0_0[5] = get_internal_image(5147);
            images_restroomwomen_1942_0_0[6] = get_internal_image(4638);
            images_restroomwomen_1942_0_0[7] = get_internal_image(5404);
            images_restroomwomen_1942_0_0[8] = get_internal_image(4765);
            images_restroomwomen_1942_0_0[9] = get_internal_image(7779);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_513_restroom_women.value;
        if (!global_data_513_restroom_women.init) {
            global_data_513_restroom_women.init = true;
        }
    }
};
FrameObject * create_restroomwomen_1942(int x, int y)
{
    return new (Active::pool.create()) RestroomWomen_1942(x, y);
}
static Image* images_enemyroller_1943_0_0[1];
static Direction direction_enemyroller_1943_0_0 = {0, 50, 50, 0, 1, images_enemyroller_1943_0_0, 1};
static Image* images_enemyroller_1943_0_8[1];
static Direction direction_enemyroller_1943_0_8 = {8, 50, 50, 0, 1, images_enemyroller_1943_0_8, 1};
static Image* images_enemyroller_1943_0_16[1];
static Direction direction_enemyroller_1943_0_16 = {16, 50, 50, 0, 1, images_enemyroller_1943_0_16, 1};
static Animation anim_enemyroller_1943_0 = {&direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, NULL, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, &direction_enemyroller_1943_0_8, NULL, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, &direction_enemyroller_1943_0_16, NULL, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0, &direction_enemyroller_1943_0_0};
static Image* images_enemyroller_1943_1_0[12];
static Direction direction_enemyroller_1943_1_0 = {0, 50, 50, 0, -1, images_enemyroller_1943_1_0, 12};
static Image* images_enemyroller_1943_1_4[12];
static Direction direction_enemyroller_1943_1_4 = {4, 50, 50, 0, 1, images_enemyroller_1943_1_4, 12};
static Image* images_enemyroller_1943_1_8[12];
static Direction direction_enemyroller_1943_1_8 = {8, 50, 50, 0, 1, images_enemyroller_1943_1_8, 12};
static Image* images_enemyroller_1943_1_12[12];
static Direction direction_enemyroller_1943_1_12 = {12, 50, 50, 0, 1, images_enemyroller_1943_1_12, 12};
static Image* images_enemyroller_1943_1_16[12];
static Direction direction_enemyroller_1943_1_16 = {16, 50, 50, 0, -1, images_enemyroller_1943_1_16, 12};
static Animation anim_enemyroller_1943_1 = {&direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, NULL, &direction_enemyroller_1943_1_4, &direction_enemyroller_1943_1_4, &direction_enemyroller_1943_1_4, NULL, &direction_enemyroller_1943_1_8, &direction_enemyroller_1943_1_8, &direction_enemyroller_1943_1_8, NULL, &direction_enemyroller_1943_1_12, &direction_enemyroller_1943_1_12, &direction_enemyroller_1943_1_12, NULL, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, &direction_enemyroller_1943_1_16, NULL, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0, &direction_enemyroller_1943_1_0};
static Image* images_enemyroller_1943_7_0[9];
static Direction direction_enemyroller_1943_7_0 = {0, 50, 50, 5, -1, images_enemyroller_1943_7_0, 9};
static Image* images_enemyroller_1943_7_4[9];
static Direction direction_enemyroller_1943_7_4 = {4, 50, 50, 0, 1, images_enemyroller_1943_7_4, 9};
static Image* images_enemyroller_1943_7_8[9];
static Direction direction_enemyroller_1943_7_8 = {8, 50, 50, 0, 1, images_enemyroller_1943_7_8, 9};
static Image* images_enemyroller_1943_7_16[9];
static Direction direction_enemyroller_1943_7_16 = {16, 50, 50, 5, -1, images_enemyroller_1943_7_16, 9};
static Animation anim_enemyroller_1943_7 = {&direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, NULL, &direction_enemyroller_1943_7_4, &direction_enemyroller_1943_7_4, &direction_enemyroller_1943_7_4, NULL, &direction_enemyroller_1943_7_8, &direction_enemyroller_1943_7_8, &direction_enemyroller_1943_7_8, &direction_enemyroller_1943_7_8, &direction_enemyroller_1943_7_8, NULL, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, &direction_enemyroller_1943_7_16, NULL, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0, &direction_enemyroller_1943_7_0};
static Image* images_enemyroller_1943_8_0[1];
static Direction direction_enemyroller_1943_8_0 = {0, 50, 50, 0, -1, images_enemyroller_1943_8_0, 1};
static Image* images_enemyroller_1943_8_16[1];
static Direction direction_enemyroller_1943_8_16 = {16, 50, 50, 0, -1, images_enemyroller_1943_8_16, 1};
static Animation anim_enemyroller_1943_8 = {&direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, NULL, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, &direction_enemyroller_1943_8_16, NULL, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0, &direction_enemyroller_1943_8_0};
static Image* images_enemyroller_1943_10_0[9];
static Direction direction_enemyroller_1943_10_0 = {0, 100, 100, 0, 1, images_enemyroller_1943_10_0, 9};
static Image* images_enemyroller_1943_10_4[9];
static Direction direction_enemyroller_1943_10_4 = {4, 50, 50, 0, 1, images_enemyroller_1943_10_4, 9};
static Image* images_enemyroller_1943_10_8[9];
static Direction direction_enemyroller_1943_10_8 = {8, 50, 50, 0, 1, images_enemyroller_1943_10_8, 9};
static Image* images_enemyroller_1943_10_12[9];
static Direction direction_enemyroller_1943_10_12 = {12, 50, 50, 0, 1, images_enemyroller_1943_10_12, 9};
static Image* images_enemyroller_1943_10_16[9];
static Direction direction_enemyroller_1943_10_16 = {16, 100, 100, 0, 1, images_enemyroller_1943_10_16, 9};
static Animation anim_enemyroller_1943_10 = {&direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, NULL, &direction_enemyroller_1943_10_4, &direction_enemyroller_1943_10_4, &direction_enemyroller_1943_10_4, NULL, &direction_enemyroller_1943_10_8, &direction_enemyroller_1943_10_8, &direction_enemyroller_1943_10_8, NULL, &direction_enemyroller_1943_10_12, &direction_enemyroller_1943_10_12, &direction_enemyroller_1943_10_12, NULL, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, &direction_enemyroller_1943_10_16, NULL, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0, &direction_enemyroller_1943_10_0};
static Animation * anim_array_enemyroller_1943[11] = {&anim_enemyroller_1943_0, &anim_enemyroller_1943_1, NULL, NULL, NULL, NULL, NULL, &anim_enemyroller_1943_7, &anim_enemyroller_1943_8, NULL, &anim_enemyroller_1943_10};
static Animations anim_enemyroller_1943 = {11, &anim_array_enemyroller_1943[0]};
static bool anim_enemyroller_1943_initialized;
class EnemyRoller_1943 : public Active
{
public:
    EnemyRoller_1943(int x, int y) : Active(x, y, EnemyRoller_1943_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Roller", 12);
#endif
        this->animations = &anim_enemyroller_1943;
        if (!anim_enemyroller_1943_initialized) {
            anim_enemyroller_1943_initialized = true;
            images_enemyroller_1943_0_0[0] = get_internal_image(4852);
            images_enemyroller_1943_0_8[0] = get_internal_image(84);
            images_enemyroller_1943_0_16[0] = get_internal_image(257);
            images_enemyroller_1943_1_0[0] = get_internal_image(7602);
            images_enemyroller_1943_1_0[1] = get_internal_image(7603);
            images_enemyroller_1943_1_0[2] = get_internal_image(7604);
            images_enemyroller_1943_1_0[3] = get_internal_image(7605);
            images_enemyroller_1943_1_0[4] = get_internal_image(7602);
            images_enemyroller_1943_1_0[5] = get_internal_image(7606);
            images_enemyroller_1943_1_0[6] = get_internal_image(4852);
            images_enemyroller_1943_1_0[7] = get_internal_image(7607);
            images_enemyroller_1943_1_0[8] = get_internal_image(7608);
            images_enemyroller_1943_1_0[9] = get_internal_image(7609);
            images_enemyroller_1943_1_0[10] = get_internal_image(4852);
            images_enemyroller_1943_1_0[11] = get_internal_image(7606);
            images_enemyroller_1943_1_4[0] = get_internal_image(163);
            images_enemyroller_1943_1_4[1] = get_internal_image(163);
            images_enemyroller_1943_1_4[2] = get_internal_image(163);
            images_enemyroller_1943_1_4[3] = get_internal_image(163);
            images_enemyroller_1943_1_4[4] = get_internal_image(163);
            images_enemyroller_1943_1_4[5] = get_internal_image(163);
            images_enemyroller_1943_1_4[6] = get_internal_image(163);
            images_enemyroller_1943_1_4[7] = get_internal_image(163);
            images_enemyroller_1943_1_4[8] = get_internal_image(163);
            images_enemyroller_1943_1_4[9] = get_internal_image(163);
            images_enemyroller_1943_1_4[10] = get_internal_image(163);
            images_enemyroller_1943_1_4[11] = get_internal_image(163);
            images_enemyroller_1943_1_8[0] = get_internal_image(84);
            images_enemyroller_1943_1_8[1] = get_internal_image(84);
            images_enemyroller_1943_1_8[2] = get_internal_image(84);
            images_enemyroller_1943_1_8[3] = get_internal_image(84);
            images_enemyroller_1943_1_8[4] = get_internal_image(84);
            images_enemyroller_1943_1_8[5] = get_internal_image(84);
            images_enemyroller_1943_1_8[6] = get_internal_image(84);
            images_enemyroller_1943_1_8[7] = get_internal_image(84);
            images_enemyroller_1943_1_8[8] = get_internal_image(84);
            images_enemyroller_1943_1_8[9] = get_internal_image(84);
            images_enemyroller_1943_1_8[10] = get_internal_image(84);
            images_enemyroller_1943_1_8[11] = get_internal_image(84);
            images_enemyroller_1943_1_12[0] = get_internal_image(85);
            images_enemyroller_1943_1_12[1] = get_internal_image(85);
            images_enemyroller_1943_1_12[2] = get_internal_image(85);
            images_enemyroller_1943_1_12[3] = get_internal_image(85);
            images_enemyroller_1943_1_12[4] = get_internal_image(85);
            images_enemyroller_1943_1_12[5] = get_internal_image(85);
            images_enemyroller_1943_1_12[6] = get_internal_image(85);
            images_enemyroller_1943_1_12[7] = get_internal_image(85);
            images_enemyroller_1943_1_12[8] = get_internal_image(85);
            images_enemyroller_1943_1_12[9] = get_internal_image(85);
            images_enemyroller_1943_1_12[10] = get_internal_image(85);
            images_enemyroller_1943_1_12[11] = get_internal_image(85);
            images_enemyroller_1943_1_16[0] = get_internal_image(7600);
            images_enemyroller_1943_1_16[1] = get_internal_image(7597);
            images_enemyroller_1943_1_16[2] = get_internal_image(7580);
            images_enemyroller_1943_1_16[3] = get_internal_image(7599);
            images_enemyroller_1943_1_16[4] = get_internal_image(7600);
            images_enemyroller_1943_1_16[5] = get_internal_image(7575);
            images_enemyroller_1943_1_16[6] = get_internal_image(257);
            images_enemyroller_1943_1_16[7] = get_internal_image(7598);
            images_enemyroller_1943_1_16[8] = get_internal_image(7601);
            images_enemyroller_1943_1_16[9] = get_internal_image(7569);
            images_enemyroller_1943_1_16[10] = get_internal_image(257);
            images_enemyroller_1943_1_16[11] = get_internal_image(7575);
            images_enemyroller_1943_7_0[0] = get_internal_image(7608);
            images_enemyroller_1943_7_0[1] = get_internal_image(7611);
            images_enemyroller_1943_7_0[2] = get_internal_image(7612);
            images_enemyroller_1943_7_0[3] = get_internal_image(4852);
            images_enemyroller_1943_7_0[4] = get_internal_image(7610);
            images_enemyroller_1943_7_0[5] = get_internal_image(7625);
            images_enemyroller_1943_7_0[6] = get_internal_image(7626);
            images_enemyroller_1943_7_0[7] = get_internal_image(7627);
            images_enemyroller_1943_7_0[8] = get_internal_image(7628);
            images_enemyroller_1943_7_4[0] = get_internal_image(163);
            images_enemyroller_1943_7_4[1] = get_internal_image(163);
            images_enemyroller_1943_7_4[2] = get_internal_image(163);
            images_enemyroller_1943_7_4[3] = get_internal_image(163);
            images_enemyroller_1943_7_4[4] = get_internal_image(163);
            images_enemyroller_1943_7_4[5] = get_internal_image(163);
            images_enemyroller_1943_7_4[6] = get_internal_image(163);
            images_enemyroller_1943_7_4[7] = get_internal_image(163);
            images_enemyroller_1943_7_4[8] = get_internal_image(163);
            images_enemyroller_1943_7_8[0] = get_internal_image(84);
            images_enemyroller_1943_7_8[1] = get_internal_image(84);
            images_enemyroller_1943_7_8[2] = get_internal_image(84);
            images_enemyroller_1943_7_8[3] = get_internal_image(84);
            images_enemyroller_1943_7_8[4] = get_internal_image(84);
            images_enemyroller_1943_7_8[5] = get_internal_image(84);
            images_enemyroller_1943_7_8[6] = get_internal_image(84);
            images_enemyroller_1943_7_8[7] = get_internal_image(84);
            images_enemyroller_1943_7_8[8] = get_internal_image(84);
            images_enemyroller_1943_7_16[0] = get_internal_image(7601);
            images_enemyroller_1943_7_16[1] = get_internal_image(7615);
            images_enemyroller_1943_7_16[2] = get_internal_image(7619);
            images_enemyroller_1943_7_16[3] = get_internal_image(257);
            images_enemyroller_1943_7_16[4] = get_internal_image(7620);
            images_enemyroller_1943_7_16[5] = get_internal_image(7629);
            images_enemyroller_1943_7_16[6] = get_internal_image(7630);
            images_enemyroller_1943_7_16[7] = get_internal_image(7631);
            images_enemyroller_1943_7_16[8] = get_internal_image(7632);
            images_enemyroller_1943_8_0[0] = get_internal_image(7634);
            images_enemyroller_1943_8_16[0] = get_internal_image(7633);
            images_enemyroller_1943_10_0[0] = get_internal_image(7608);
            images_enemyroller_1943_10_0[1] = get_internal_image(7611);
            images_enemyroller_1943_10_0[2] = get_internal_image(7612);
            images_enemyroller_1943_10_0[3] = get_internal_image(7618);
            images_enemyroller_1943_10_0[4] = get_internal_image(7608);
            images_enemyroller_1943_10_0[5] = get_internal_image(7611);
            images_enemyroller_1943_10_0[6] = get_internal_image(7612);
            images_enemyroller_1943_10_0[7] = get_internal_image(7618);
            images_enemyroller_1943_10_0[8] = get_internal_image(4852);
            images_enemyroller_1943_10_4[0] = get_internal_image(163);
            images_enemyroller_1943_10_4[1] = get_internal_image(163);
            images_enemyroller_1943_10_4[2] = get_internal_image(163);
            images_enemyroller_1943_10_4[3] = get_internal_image(163);
            images_enemyroller_1943_10_4[4] = get_internal_image(163);
            images_enemyroller_1943_10_4[5] = get_internal_image(163);
            images_enemyroller_1943_10_4[6] = get_internal_image(163);
            images_enemyroller_1943_10_4[7] = get_internal_image(163);
            images_enemyroller_1943_10_4[8] = get_internal_image(163);
            images_enemyroller_1943_10_8[0] = get_internal_image(84);
            images_enemyroller_1943_10_8[1] = get_internal_image(84);
            images_enemyroller_1943_10_8[2] = get_internal_image(84);
            images_enemyroller_1943_10_8[3] = get_internal_image(84);
            images_enemyroller_1943_10_8[4] = get_internal_image(84);
            images_enemyroller_1943_10_8[5] = get_internal_image(84);
            images_enemyroller_1943_10_8[6] = get_internal_image(84);
            images_enemyroller_1943_10_8[7] = get_internal_image(84);
            images_enemyroller_1943_10_8[8] = get_internal_image(84);
            images_enemyroller_1943_10_12[0] = get_internal_image(85);
            images_enemyroller_1943_10_12[1] = get_internal_image(85);
            images_enemyroller_1943_10_12[2] = get_internal_image(85);
            images_enemyroller_1943_10_12[3] = get_internal_image(85);
            images_enemyroller_1943_10_12[4] = get_internal_image(85);
            images_enemyroller_1943_10_12[5] = get_internal_image(85);
            images_enemyroller_1943_10_12[6] = get_internal_image(85);
            images_enemyroller_1943_10_12[7] = get_internal_image(85);
            images_enemyroller_1943_10_12[8] = get_internal_image(85);
            images_enemyroller_1943_10_16[0] = get_internal_image(7601);
            images_enemyroller_1943_10_16[1] = get_internal_image(7615);
            images_enemyroller_1943_10_16[2] = get_internal_image(7619);
            images_enemyroller_1943_10_16[3] = get_internal_image(164);
            images_enemyroller_1943_10_16[4] = get_internal_image(7601);
            images_enemyroller_1943_10_16[5] = get_internal_image(7615);
            images_enemyroller_1943_10_16[6] = get_internal_image(7619);
            images_enemyroller_1943_10_16[7] = get_internal_image(164);
            images_enemyroller_1943_10_16[8] = get_internal_image(257);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(11, -1);
    }
};
FrameObject * create_enemyroller_1943(int x, int y)
{
    return new (Active::pool.create()) EnemyRoller_1943(x, y);
}
static Image* images_discolight_1944_0_0[1];
static Direction direction_discolight_1944_0_0 = {0, 50, 50, 0, 1, images_discolight_1944_0_0, 1};
static Animation anim_discolight_1944_0 = {&direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, NULL, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0, &direction_discolight_1944_0_0};
static Animation * anim_array_discolight_1944[1] = {&anim_discolight_1944_0};
static Animations anim_discolight_1944 = {1, &anim_array_discolight_1944[0]};
static bool anim_discolight_1944_initialized;
class DiscoLight_1944 : public Active
{
public:
    DiscoLight_1944(int x, int y) : Active(x, y, DiscoLight_1944_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DiscoLight", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_discolight_1944;
        if (!anim_discolight_1944_initialized) {
            anim_discolight_1944_initialized = true;
            images_discolight_1944_0_0[0] = get_internal_image(7336);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_discolight_1944(int x, int y)
{
    return new (Active::pool.create()) DiscoLight_1944(x, y);
}
static Image* images_layer0loop4_1945_0_0[1];
static Direction direction_layer0loop4_1945_0_0 = {0, 50, 50, 0, 1, images_layer0loop4_1945_0_0, 1};
static Animation anim_layer0loop4_1945_0 = {&direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, NULL, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0, &direction_layer0loop4_1945_0_0};
static Animation * anim_array_layer0loop4_1945[1] = {&anim_layer0loop4_1945_0};
static Animations anim_layer0loop4_1945 = {1, &anim_array_layer0loop4_1945[0]};
static bool anim_layer0loop4_1945_initialized;
class Layer0Loop4_1945 : public Active
{
public:
    Layer0Loop4_1945(int x, int y) : Active(x, y, Layer0Loop4_1945_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop 4", 13);
#endif
        this->animations = &anim_layer0loop4_1945;
        if (!anim_layer0loop4_1945_initialized) {
            anim_layer0loop4_1945_initialized = true;
            images_layer0loop4_1945_0_0[0] = get_internal_image(7173);
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
FrameObject * create_layer0loop4_1945(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop4_1945(x, y);
}
static Image* images_layer0loop5_1946_0_0[1];
static Direction direction_layer0loop5_1946_0_0 = {0, 50, 50, 0, 1, images_layer0loop5_1946_0_0, 1};
static Animation anim_layer0loop5_1946_0 = {&direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, NULL, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0, &direction_layer0loop5_1946_0_0};
static Animation * anim_array_layer0loop5_1946[1] = {&anim_layer0loop5_1946_0};
static Animations anim_layer0loop5_1946 = {1, &anim_array_layer0loop5_1946[0]};
static bool anim_layer0loop5_1946_initialized;
class Layer0Loop5_1946 : public Active
{
public:
    Layer0Loop5_1946(int x, int y) : Active(x, y, Layer0Loop5_1946_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop 5", 13);
#endif
        this->animations = &anim_layer0loop5_1946;
        if (!anim_layer0loop5_1946_initialized) {
            anim_layer0loop5_1946_initialized = true;
            images_layer0loop5_1946_0_0[0] = get_internal_image(7106);
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
FrameObject * create_layer0loop5_1946(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop5_1946(x, y);
}
static Image* images_enemyballoon_1947_0_0[3];
static Direction direction_enemyballoon_1947_0_0 = {0, 50, 50, 0, -1, images_enemyballoon_1947_0_0, 3};
static Animation anim_enemyballoon_1947_0 = {&direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, NULL, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0, &direction_enemyballoon_1947_0_0};
static Image* images_enemyballoon_1947_8_0[3];
static Direction direction_enemyballoon_1947_8_0 = {0, 50, 50, 0, -1, images_enemyballoon_1947_8_0, 3};
static Animation anim_enemyballoon_1947_8 = {&direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, NULL, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0, &direction_enemyballoon_1947_8_0};
static Animation * anim_array_enemyballoon_1947[9] = {&anim_enemyballoon_1947_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyballoon_1947_8};
static Animations anim_enemyballoon_1947 = {9, &anim_array_enemyballoon_1947[0]};
static bool anim_enemyballoon_1947_initialized;
class EnemyBalloon_1947 : public Active
{
public:
    EnemyBalloon_1947(int x, int y) : Active(x, y, EnemyBalloon_1947_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Balloon", 13);
#endif
        this->animations = &anim_enemyballoon_1947;
        if (!anim_enemyballoon_1947_initialized) {
            anim_enemyballoon_1947_initialized = true;
            images_enemyballoon_1947_0_0[0] = get_internal_image(1444);
            images_enemyballoon_1947_0_0[1] = get_internal_image(1119);
            images_enemyballoon_1947_0_0[2] = get_internal_image(1231);
            images_enemyballoon_1947_8_0[0] = get_internal_image(2976);
            images_enemyballoon_1947_8_0[1] = get_internal_image(3221);
            images_enemyballoon_1947_8_0[2] = get_internal_image(2304);
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
FrameObject * create_enemyballoon_1947(int x, int y)
{
    return new (Active::pool.create()) EnemyBalloon_1947(x, y);
}
static Image* images_objectwastebin_1948_0_0[1];
static Direction direction_objectwastebin_1948_0_0 = {0, 50, 50, 0, 1, images_objectwastebin_1948_0_0, 1};
static Image* images_objectwastebin_1948_0_8[1];
static Direction direction_objectwastebin_1948_0_8 = {8, 50, 50, 0, 1, images_objectwastebin_1948_0_8, 1};
static Animation anim_objectwastebin_1948_0 = {&direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, NULL, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, &direction_objectwastebin_1948_0_8, NULL, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0, &direction_objectwastebin_1948_0_0};
static Animation * anim_array_objectwastebin_1948[1] = {&anim_objectwastebin_1948_0};
static Animations anim_objectwastebin_1948 = {1, &anim_array_objectwastebin_1948[0]};
static bool anim_objectwastebin_1948_initialized;
class ObjectWasteBin_1948 : public Active
{
public:
    ObjectWasteBin_1948(int x, int y) : Active(x, y, ObjectWasteBin_1948_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Object_WasteBin", 15);
#endif
        this->animations = &anim_objectwastebin_1948;
        if (!anim_objectwastebin_1948_initialized) {
            anim_objectwastebin_1948_initialized = true;
            images_objectwastebin_1948_0_0[0] = get_internal_image(5172);
            images_objectwastebin_1948_0_8[0] = get_internal_image(11442);
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
FrameObject * create_objectwastebin_1948(int x, int y)
{
    return new (Active::pool.create()) ObjectWasteBin_1948(x, y);
}
static Image* images_escalatorfront1_1949_0_0[8];
static Direction direction_escalatorfront1_1949_0_0 = {0, 100, 100, 0, -1, images_escalatorfront1_1949_0_0, 8};
static Image* images_escalatorfront1_1949_0_16[8];
static Direction direction_escalatorfront1_1949_0_16 = {16, 100, 100, 0, -1, images_escalatorfront1_1949_0_16, 8};
static Animation anim_escalatorfront1_1949_0 = {&direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, NULL, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, &direction_escalatorfront1_1949_0_16, NULL, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0, &direction_escalatorfront1_1949_0_0};
static Animation * anim_array_escalatorfront1_1949[1] = {&anim_escalatorfront1_1949_0};
static Animations anim_escalatorfront1_1949 = {1, &anim_array_escalatorfront1_1949[0]};
static bool anim_escalatorfront1_1949_initialized;
class EscalatorFront1_1949 : public Active
{
public:
    EscalatorFront1_1949(int x, int y) : Active(x, y, EscalatorFront1_1949_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("EscalatorFront 1", 16);
#endif
        this->animations = &anim_escalatorfront1_1949;
        if (!anim_escalatorfront1_1949_initialized) {
            anim_escalatorfront1_1949_initialized = true;
            images_escalatorfront1_1949_0_0[0] = get_internal_image(7904);
            images_escalatorfront1_1949_0_0[1] = get_internal_image(7906);
            images_escalatorfront1_1949_0_0[2] = get_internal_image(8391);
            images_escalatorfront1_1949_0_0[3] = get_internal_image(8392);
            images_escalatorfront1_1949_0_0[4] = get_internal_image(8393);
            images_escalatorfront1_1949_0_0[5] = get_internal_image(8394);
            images_escalatorfront1_1949_0_0[6] = get_internal_image(8395);
            images_escalatorfront1_1949_0_0[7] = get_internal_image(8390);
            images_escalatorfront1_1949_0_16[0] = get_internal_image(8390);
            images_escalatorfront1_1949_0_16[1] = get_internal_image(8395);
            images_escalatorfront1_1949_0_16[2] = get_internal_image(8394);
            images_escalatorfront1_1949_0_16[3] = get_internal_image(8393);
            images_escalatorfront1_1949_0_16[4] = get_internal_image(8392);
            images_escalatorfront1_1949_0_16[5] = get_internal_image(8391);
            images_escalatorfront1_1949_0_16[6] = get_internal_image(7906);
            images_escalatorfront1_1949_0_16[7] = get_internal_image(7904);
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
FrameObject * create_escalatorfront1_1949(int x, int y)
{
    return new (Active::pool.create()) EscalatorFront1_1949(x, y);
}
static Image* images_escalatorfront2_1950_0_0[8];
static Direction direction_escalatorfront2_1950_0_0 = {0, 100, 100, 0, -1, images_escalatorfront2_1950_0_0, 8};
static Image* images_escalatorfront2_1950_0_16[8];
static Direction direction_escalatorfront2_1950_0_16 = {16, 100, 100, 0, -1, images_escalatorfront2_1950_0_16, 8};
static Animation anim_escalatorfront2_1950_0 = {&direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, NULL, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, &direction_escalatorfront2_1950_0_16, NULL, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0, &direction_escalatorfront2_1950_0_0};
static Animation * anim_array_escalatorfront2_1950[1] = {&anim_escalatorfront2_1950_0};
static Animations anim_escalatorfront2_1950 = {1, &anim_array_escalatorfront2_1950[0]};
static bool anim_escalatorfront2_1950_initialized;
class EscalatorFront2_1950 : public Active
{
public:
    EscalatorFront2_1950(int x, int y) : Active(x, y, EscalatorFront2_1950_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("EscalatorFront 2", 16);
#endif
        this->animations = &anim_escalatorfront2_1950;
        if (!anim_escalatorfront2_1950_initialized) {
            anim_escalatorfront2_1950_initialized = true;
            images_escalatorfront2_1950_0_0[0] = get_internal_image(7905);
            images_escalatorfront2_1950_0_0[1] = get_internal_image(8397);
            images_escalatorfront2_1950_0_0[2] = get_internal_image(8970);
            images_escalatorfront2_1950_0_0[3] = get_internal_image(8971);
            images_escalatorfront2_1950_0_0[4] = get_internal_image(8972);
            images_escalatorfront2_1950_0_0[5] = get_internal_image(10257);
            images_escalatorfront2_1950_0_0[6] = get_internal_image(10258);
            images_escalatorfront2_1950_0_0[7] = get_internal_image(11609);
            images_escalatorfront2_1950_0_16[0] = get_internal_image(11609);
            images_escalatorfront2_1950_0_16[1] = get_internal_image(10258);
            images_escalatorfront2_1950_0_16[2] = get_internal_image(10257);
            images_escalatorfront2_1950_0_16[3] = get_internal_image(8972);
            images_escalatorfront2_1950_0_16[4] = get_internal_image(8971);
            images_escalatorfront2_1950_0_16[5] = get_internal_image(8970);
            images_escalatorfront2_1950_0_16[6] = get_internal_image(8397);
            images_escalatorfront2_1950_0_16[7] = get_internal_image(7905);
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
FrameObject * create_escalatorfront2_1950(int x, int y)
{
    return new (Active::pool.create()) EscalatorFront2_1950(x, y);
}
static Image* images_escalatorleft_1951_0_0[1];
static Direction direction_escalatorleft_1951_0_0 = {0, 50, 50, 0, 1, images_escalatorleft_1951_0_0, 1};
static Animation anim_escalatorleft_1951_0 = {&direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, NULL, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0, &direction_escalatorleft_1951_0_0};
static Animation * anim_array_escalatorleft_1951[1] = {&anim_escalatorleft_1951_0};
static Animations anim_escalatorleft_1951 = {1, &anim_array_escalatorleft_1951[0]};
static bool anim_escalatorleft_1951_initialized;
class EscalatorLeft_1951 : public Active
{
public:
    EscalatorLeft_1951(int x, int y) : Active(x, y, EscalatorLeft_1951_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Escalator_Left", 14);
#endif
        set_visible(false);
        this->animations = &anim_escalatorleft_1951;
        if (!anim_escalatorleft_1951_initialized) {
            anim_escalatorleft_1951_initialized = true;
            images_escalatorleft_1951_0_0[0] = get_internal_image(1467);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, 1);
    }
};
FrameObject * create_escalatorleft_1951(int x, int y)
{
    return new (Active::pool.create()) EscalatorLeft_1951(x, y);
}
static Image* images_fountainfront_1952_0_0[16];
static Direction direction_fountainfront_1952_0_0 = {0, 14, 14, 0, -1, images_fountainfront_1952_0_0, 16};
static Animation anim_fountainfront_1952_0 = {&direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, NULL, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0, &direction_fountainfront_1952_0_0};
static Animation * anim_array_fountainfront_1952[1] = {&anim_fountainfront_1952_0};
static Animations anim_fountainfront_1952 = {1, &anim_array_fountainfront_1952[0]};
static bool anim_fountainfront_1952_initialized;
class FountainFront_1952 : public Active
{
public:
    FountainFront_1952(int x, int y) : Active(x, y, FountainFront_1952_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fountain_front", 14);
#endif
        this->animations = &anim_fountainfront_1952;
        if (!anim_fountainfront_1952_initialized) {
            anim_fountainfront_1952_initialized = true;
            images_fountainfront_1952_0_0[0] = get_internal_image(7267);
            images_fountainfront_1952_0_0[1] = get_internal_image(7295);
            images_fountainfront_1952_0_0[2] = get_internal_image(7313);
            images_fountainfront_1952_0_0[3] = get_internal_image(7296);
            images_fountainfront_1952_0_0[4] = get_internal_image(7318);
            images_fountainfront_1952_0_0[5] = get_internal_image(7300);
            images_fountainfront_1952_0_0[6] = get_internal_image(7317);
            images_fountainfront_1952_0_0[7] = get_internal_image(7302);
            images_fountainfront_1952_0_0[8] = get_internal_image(7320);
            images_fountainfront_1952_0_0[9] = get_internal_image(7303);
            images_fountainfront_1952_0_0[10] = get_internal_image(7304);
            images_fountainfront_1952_0_0[11] = get_internal_image(7274);
            images_fountainfront_1952_0_0[12] = get_internal_image(7321);
            images_fountainfront_1952_0_0[13] = get_internal_image(7306);
            images_fountainfront_1952_0_0[14] = get_internal_image(7335);
            images_fountainfront_1952_0_0[15] = get_internal_image(7307);
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
FrameObject * create_fountainfront_1952(int x, int y)
{
    return new (Active::pool.create()) FountainFront_1952(x, y);
}
static Image* images_fountainfront2_1953_0_0[16];
static Direction direction_fountainfront2_1953_0_0 = {0, 14, 14, 0, -1, images_fountainfront2_1953_0_0, 16};
static Animation anim_fountainfront2_1953_0 = {&direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, NULL, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0, &direction_fountainfront2_1953_0_0};
static Animation * anim_array_fountainfront2_1953[1] = {&anim_fountainfront2_1953_0};
static Animations anim_fountainfront2_1953 = {1, &anim_array_fountainfront2_1953[0]};
static bool anim_fountainfront2_1953_initialized;
class FountainFront2_1953 : public Active
{
public:
    FountainFront2_1953(int x, int y) : Active(x, y, FountainFront2_1953_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fountain_front 2", 16);
#endif
        this->animations = &anim_fountainfront2_1953;
        if (!anim_fountainfront2_1953_initialized) {
            anim_fountainfront2_1953_initialized = true;
            images_fountainfront2_1953_0_0[0] = get_internal_image(7351);
            images_fountainfront2_1953_0_0[1] = get_internal_image(7352);
            images_fountainfront2_1953_0_0[2] = get_internal_image(7353);
            images_fountainfront2_1953_0_0[3] = get_internal_image(7354);
            images_fountainfront2_1953_0_0[4] = get_internal_image(7355);
            images_fountainfront2_1953_0_0[5] = get_internal_image(7356);
            images_fountainfront2_1953_0_0[6] = get_internal_image(7357);
            images_fountainfront2_1953_0_0[7] = get_internal_image(7358);
            images_fountainfront2_1953_0_0[8] = get_internal_image(7359);
            images_fountainfront2_1953_0_0[9] = get_internal_image(7360);
            images_fountainfront2_1953_0_0[10] = get_internal_image(7361);
            images_fountainfront2_1953_0_0[11] = get_internal_image(7362);
            images_fountainfront2_1953_0_0[12] = get_internal_image(7363);
            images_fountainfront2_1953_0_0[13] = get_internal_image(7364);
            images_fountainfront2_1953_0_0[14] = get_internal_image(7365);
            images_fountainfront2_1953_0_0[15] = get_internal_image(7366);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 191);
        create_alterables();
    }
};
FrameObject * create_fountainfront2_1953(int x, int y)
{
    return new (Active::pool.create()) FountainFront2_1953(x, y);
}
static Image* images_levelwaterplatform_1954_0_0[1];
static Direction direction_levelwaterplatform_1954_0_0 = {0, 50, 50, 0, 1, images_levelwaterplatform_1954_0_0, 1};
static Animation anim_levelwaterplatform_1954_0 = {&direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, NULL, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0, &direction_levelwaterplatform_1954_0_0};
static Animation * anim_array_levelwaterplatform_1954[1] = {&anim_levelwaterplatform_1954_0};
static Animations anim_levelwaterplatform_1954 = {1, &anim_array_levelwaterplatform_1954[0]};
static bool anim_levelwaterplatform_1954_initialized;
class LevelWaterPlatform_1954 : public Active
{
public:
    LevelWaterPlatform_1954(int x, int y) : Active(x, y, LevelWaterPlatform_1954_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Level_WaterPlatform", 19);
#endif
        set_visible(false);
        this->animations = &anim_levelwaterplatform_1954;
        if (!anim_levelwaterplatform_1954_initialized) {
            anim_levelwaterplatform_1954_initialized = true;
            images_levelwaterplatform_1954_0_0[0] = get_internal_image(7310);
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
FrameObject * create_levelwaterplatform_1954(int x, int y)
{
    return new (Active::pool.create()) LevelWaterPlatform_1954(x, y);
}
static Image* images_objectdiscoball_1955_0_0[8];
static Direction direction_objectdiscoball_1955_0_0 = {0, 25, 25, 0, -1, images_objectdiscoball_1955_0_0, 8};
static Image* images_objectdiscoball_1955_0_16[8];
static Direction direction_objectdiscoball_1955_0_16 = {16, 25, 25, 0, -1, images_objectdiscoball_1955_0_16, 8};
static Animation anim_objectdiscoball_1955_0 = {&direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, NULL, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, &direction_objectdiscoball_1955_0_16, NULL, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0, &direction_objectdiscoball_1955_0_0};
static Animation * anim_array_objectdiscoball_1955[1] = {&anim_objectdiscoball_1955_0};
static Animations anim_objectdiscoball_1955 = {1, &anim_array_objectdiscoball_1955[0]};
static bool anim_objectdiscoball_1955_initialized;
class ObjectDiscoBall_1955 : public Active
{
public:
    ObjectDiscoBall_1955(int x, int y) : Active(x, y, ObjectDiscoBall_1955_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_DiscoBall", 16);
#endif
        this->animations = &anim_objectdiscoball_1955;
        if (!anim_objectdiscoball_1955_initialized) {
            anim_objectdiscoball_1955_initialized = true;
            images_objectdiscoball_1955_0_0[0] = get_internal_image(7418);
            images_objectdiscoball_1955_0_0[1] = get_internal_image(7419);
            images_objectdiscoball_1955_0_0[2] = get_internal_image(7420);
            images_objectdiscoball_1955_0_0[3] = get_internal_image(7421);
            images_objectdiscoball_1955_0_0[4] = get_internal_image(7422);
            images_objectdiscoball_1955_0_0[5] = get_internal_image(7423);
            images_objectdiscoball_1955_0_0[6] = get_internal_image(7424);
            images_objectdiscoball_1955_0_0[7] = get_internal_image(7425);
            images_objectdiscoball_1955_0_16[0] = get_internal_image(7438);
            images_objectdiscoball_1955_0_16[1] = get_internal_image(7264);
            images_objectdiscoball_1955_0_16[2] = get_internal_image(7447);
            images_objectdiscoball_1955_0_16[3] = get_internal_image(7446);
            images_objectdiscoball_1955_0_16[4] = get_internal_image(7443);
            images_objectdiscoball_1955_0_16[5] = get_internal_image(7448);
            images_objectdiscoball_1955_0_16[6] = get_internal_image(7449);
            images_objectdiscoball_1955_0_16[7] = get_internal_image(7450);
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
FrameObject * create_objectdiscoball_1955(int x, int y)
{
    return new (Active::pool.create()) ObjectDiscoBall_1955(x, y);
}
static Image* images_objectdiscoball2_1956_0_0[12];
static Direction direction_objectdiscoball2_1956_0_0 = {0, 25, 25, 0, -1, images_objectdiscoball2_1956_0_0, 12};
static Animation anim_objectdiscoball2_1956_0 = {&direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, NULL, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0, &direction_objectdiscoball2_1956_0_0};
static Animation * anim_array_objectdiscoball2_1956[1] = {&anim_objectdiscoball2_1956_0};
static Animations anim_objectdiscoball2_1956 = {1, &anim_array_objectdiscoball2_1956[0]};
static bool anim_objectdiscoball2_1956_initialized;
class ObjectDiscoBall2_1956 : public Active
{
public:
    ObjectDiscoBall2_1956(int x, int y) : Active(x, y, ObjectDiscoBall2_1956_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_DiscoBall 2", 18);
#endif
        this->animations = &anim_objectdiscoball2_1956;
        if (!anim_objectdiscoball2_1956_initialized) {
            anim_objectdiscoball2_1956_initialized = true;
            images_objectdiscoball2_1956_0_0[0] = get_internal_image(1892);
            images_objectdiscoball2_1956_0_0[1] = get_internal_image(1933);
            images_objectdiscoball2_1956_0_0[2] = get_internal_image(1152);
            images_objectdiscoball2_1956_0_0[3] = get_internal_image(3570);
            images_objectdiscoball2_1956_0_0[4] = get_internal_image(3222);
            images_objectdiscoball2_1956_0_0[5] = get_internal_image(3603);
            images_objectdiscoball2_1956_0_0[6] = get_internal_image(1154);
            images_objectdiscoball2_1956_0_0[7] = get_internal_image(3967);
            images_objectdiscoball2_1956_0_0[8] = get_internal_image(1896);
            images_objectdiscoball2_1956_0_0[9] = get_internal_image(8726);
            images_objectdiscoball2_1956_0_0[10] = get_internal_image(1900);
            images_objectdiscoball2_1956_0_0[11] = get_internal_image(11428);
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
FrameObject * create_objectdiscoball2_1956(int x, int y)
{
    return new (Active::pool.create()) ObjectDiscoBall2_1956(x, y);
}
static Image* images_enemydustermouth_1957_0_0[1];
static Direction direction_enemydustermouth_1957_0_0 = {0, 50, 50, 0, 1, images_enemydustermouth_1957_0_0, 1};
static Animation anim_enemydustermouth_1957_0 = {&direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, NULL, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0, &direction_enemydustermouth_1957_0_0};
static Animation * anim_array_enemydustermouth_1957[1] = {&anim_enemydustermouth_1957_0};
static Animations anim_enemydustermouth_1957 = {1, &anim_array_enemydustermouth_1957[0]};
static bool anim_enemydustermouth_1957_initialized;
class EnemyDusterMouth_1957 : public Active
{
public:
    EnemyDusterMouth_1957(int x, int y) : Active(x, y, EnemyDusterMouth_1957_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy_DusterMouth", 17);
#endif
        this->animations = &anim_enemydustermouth_1957;
        if (!anim_enemydustermouth_1957_initialized) {
            anim_enemydustermouth_1957_initialized = true;
            images_enemydustermouth_1957_0_0[0] = get_internal_image(13207);
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
FrameObject * create_enemydustermouth_1957(int x, int y)
{
    return new (Active::pool.create()) EnemyDusterMouth_1957(x, y);
}
static Image* images_enemyduster_1958_0_0[6];
static Direction direction_enemyduster_1958_0_0 = {0, 100, 100, 0, -1, images_enemyduster_1958_0_0, 6};
static Image* images_enemyduster_1958_0_1[1];
static Direction direction_enemyduster_1958_0_1 = {1, 50, 50, 0, -1, images_enemyduster_1958_0_1, 1};
static Image* images_enemyduster_1958_0_16[6];
static Direction direction_enemyduster_1958_0_16 = {16, 100, 100, 0, -1, images_enemyduster_1958_0_16, 6};
static Animation anim_enemyduster_1958_0 = {&direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_1, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, &direction_enemyduster_1958_0_16, NULL, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0, &direction_enemyduster_1958_0_0};
static Animation * anim_array_enemyduster_1958[1] = {&anim_enemyduster_1958_0};
static Animations anim_enemyduster_1958 = {1, &anim_array_enemyduster_1958[0]};
static bool anim_enemyduster_1958_initialized;
class EnemyDuster_1958 : public Active
{
public:
    EnemyDuster_1958(int x, int y) : Active(x, y, EnemyDuster_1958_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_Duster", 12);
#endif
        this->animations = &anim_enemyduster_1958;
        if (!anim_enemyduster_1958_initialized) {
            anim_enemyduster_1958_initialized = true;
            images_enemyduster_1958_0_0[0] = get_internal_image(13217);
            images_enemyduster_1958_0_0[1] = get_internal_image(13218);
            images_enemyduster_1958_0_0[2] = get_internal_image(13219);
            images_enemyduster_1958_0_0[3] = get_internal_image(13220);
            images_enemyduster_1958_0_0[4] = get_internal_image(13221);
            images_enemyduster_1958_0_0[5] = get_internal_image(13222);
            images_enemyduster_1958_0_1[0] = get_internal_image(13211);
            images_enemyduster_1958_0_16[0] = get_internal_image(13212);
            images_enemyduster_1958_0_16[1] = get_internal_image(13213);
            images_enemyduster_1958_0_16[2] = get_internal_image(13214);
            images_enemyduster_1958_0_16[3] = get_internal_image(13215);
            images_enemyduster_1958_0_16[4] = get_internal_image(13216);
            images_enemyduster_1958_0_16[5] = get_internal_image(13223);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 30);
        alterables->values.set(5, 1);
    }
};
FrameObject * create_enemyduster_1958(int x, int y)
{
    return new (Active::pool.create()) EnemyDuster_1958(x, y);
}
static Image* images_objectparasol_1959_0_0[1];
static Direction direction_objectparasol_1959_0_0 = {0, 50, 50, 0, 1, images_objectparasol_1959_0_0, 1};
static Animation anim_objectparasol_1959_0 = {&direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, NULL, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0, &direction_objectparasol_1959_0_0};
static Image* images_objectparasol_1959_7_0[7];
static Direction direction_objectparasol_1959_7_0 = {0, 50, 50, 0, 1, images_objectparasol_1959_7_0, 7};
static Animation anim_objectparasol_1959_7 = {&direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, NULL, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0, &direction_objectparasol_1959_7_0};
static Animation * anim_array_objectparasol_1959[8] = {&anim_objectparasol_1959_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectparasol_1959_7};
static Animations anim_objectparasol_1959 = {8, &anim_array_objectparasol_1959[0]};
static bool anim_objectparasol_1959_initialized;
class ObjectParasol_1959 : public Active
{
public:
    ObjectParasol_1959(int x, int y) : Active(x, y, ObjectParasol_1959_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Parasol", 14);
#endif
        this->animations = &anim_objectparasol_1959;
        if (!anim_objectparasol_1959_initialized) {
            anim_objectparasol_1959_initialized = true;
            images_objectparasol_1959_0_0[0] = get_internal_image(11437);
            images_objectparasol_1959_7_0[0] = get_internal_image(11445);
            images_objectparasol_1959_7_0[1] = get_internal_image(11446);
            images_objectparasol_1959_7_0[2] = get_internal_image(11445);
            images_objectparasol_1959_7_0[3] = get_internal_image(11446);
            images_objectparasol_1959_7_0[4] = get_internal_image(11437);
            images_objectparasol_1959_7_0[5] = get_internal_image(11444);
            images_objectparasol_1959_7_0[6] = get_internal_image(11437);
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
FrameObject * create_objectparasol_1959(int x, int y)
{
    return new (Active::pool.create()) ObjectParasol_1959(x, y);
}
static Image* images_turningspring_1960_0_0[1];
static Direction direction_turningspring_1960_0_0 = {0, 50, 50, 0, -1, images_turningspring_1960_0_0, 1};
static Animation anim_turningspring_1960_0 = {&direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, NULL, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0, &direction_turningspring_1960_0_0};
static Image* images_turningspring_1960_5_0[2];
static Direction direction_turningspring_1960_5_0 = {0, 40, 40, 0, 1, images_turningspring_1960_5_0, 2};
static Animation anim_turningspring_1960_5 = {&direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, NULL, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0, &direction_turningspring_1960_5_0};
static Image* images_turningspring_1960_8_0[2];
static Direction direction_turningspring_1960_8_0 = {0, 25, 25, 0, -1, images_turningspring_1960_8_0, 2};
static Animation anim_turningspring_1960_8 = {&direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, NULL, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0, &direction_turningspring_1960_8_0};
static Image* images_turningspring_1960_10_0[3];
static Direction direction_turningspring_1960_10_0 = {0, 50, 50, 2, -1, images_turningspring_1960_10_0, 3};
static Animation anim_turningspring_1960_10 = {&direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, NULL, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0, &direction_turningspring_1960_10_0};
static Image* images_turningspring_1960_11_0[5];
static Direction direction_turningspring_1960_11_0 = {0, 50, 50, 0, 1, images_turningspring_1960_11_0, 5};
static Animation anim_turningspring_1960_11 = {&direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, NULL, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0, &direction_turningspring_1960_11_0};
static Animation * anim_array_turningspring_1960[12] = {&anim_turningspring_1960_0, NULL, NULL, NULL, NULL, &anim_turningspring_1960_5, NULL, NULL, &anim_turningspring_1960_8, NULL, &anim_turningspring_1960_10, &anim_turningspring_1960_11};
static Animations anim_turningspring_1960 = {12, &anim_array_turningspring_1960[0]};
static bool anim_turningspring_1960_initialized;
class TurningSpring_1960 : public Active
{
public:
    TurningSpring_1960(int x, int y) : Active(x, y, TurningSpring_1960_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("TurningSpring", 13);
#endif
        this->animations = &anim_turningspring_1960;
        if (!anim_turningspring_1960_initialized) {
            anim_turningspring_1960_initialized = true;
            images_turningspring_1960_0_0[0] = get_internal_image(7350);
            images_turningspring_1960_5_0[0] = get_internal_image(7623);
            images_turningspring_1960_5_0[1] = get_internal_image(7622);
            images_turningspring_1960_8_0[0] = get_internal_image(7624);
            images_turningspring_1960_8_0[1] = get_internal_image(7350);
            images_turningspring_1960_10_0[0] = get_internal_image(239);
            images_turningspring_1960_10_0[1] = get_internal_image(5051);
            images_turningspring_1960_10_0[2] = get_internal_image(7371);
            images_turningspring_1960_11_0[0] = get_internal_image(7614);
            images_turningspring_1960_11_0[1] = get_internal_image(7350);
            images_turningspring_1960_11_0[2] = get_internal_image(7616);
            images_turningspring_1960_11_0[3] = get_internal_image(7350);
            images_turningspring_1960_11_0[4] = get_internal_image(7621);
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
FrameObject * create_turningspring_1960(int x, int y)
{
    return new (Active::pool.create()) TurningSpring_1960(x, y);
}
static Image* images_gimmickhangingmovingstopper_1961_0_0[1];
static Direction direction_gimmickhangingmovingstopper_1961_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingstopper_1961_0_0, 1};
static Animation anim_gimmickhangingmovingstopper_1961_0 = {&direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, NULL, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0, &direction_gimmickhangingmovingstopper_1961_0_0};
static Animation * anim_array_gimmickhangingmovingstopper_1961[1] = {&anim_gimmickhangingmovingstopper_1961_0};
static Animations anim_gimmickhangingmovingstopper_1961 = {1, &anim_array_gimmickhangingmovingstopper_1961[0]};
static bool anim_gimmickhangingmovingstopper_1961_initialized;
class GimmickHangingMovingStopper_1961 : public Active
{
public:
    GimmickHangingMovingStopper_1961(int x, int y) : Active(x, y, GimmickHangingMovingStopper_1961_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Stopper", 29);
#endif
        this->animations = &anim_gimmickhangingmovingstopper_1961;
        if (!anim_gimmickhangingmovingstopper_1961_initialized) {
            anim_gimmickhangingmovingstopper_1961_initialized = true;
            images_gimmickhangingmovingstopper_1961_0_0[0] = get_internal_image(3273);
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
FrameObject * create_gimmickhangingmovingstopper_1961(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingStopper_1961(x, y);
}
static Image* images_gimmickhangingmovingsensor_1962_0_0[1];
static Direction direction_gimmickhangingmovingsensor_1962_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingmovingsensor_1962_0_0, 1};
static Animation anim_gimmickhangingmovingsensor_1962_0 = {&direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, NULL, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0, &direction_gimmickhangingmovingsensor_1962_0_0};
static Animation * anim_array_gimmickhangingmovingsensor_1962[1] = {&anim_gimmickhangingmovingsensor_1962_0};
static Animations anim_gimmickhangingmovingsensor_1962 = {1, &anim_array_gimmickhangingmovingsensor_1962[0]};
static bool anim_gimmickhangingmovingsensor_1962_initialized;
class GimmickHangingMovingSensor_1962 : public Active
{
public:
    GimmickHangingMovingSensor_1962(int x, int y) : Active(x, y, GimmickHangingMovingSensor_1962_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Sensor", 28);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingmovingsensor_1962;
        if (!anim_gimmickhangingmovingsensor_1962_initialized) {
            anim_gimmickhangingmovingsensor_1962_initialized = true;
            images_gimmickhangingmovingsensor_1962_0_0[0] = get_internal_image(846);
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
FrameObject * create_gimmickhangingmovingsensor_1962(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingSensor_1962(x, y);
}
static Image* images_gimmickhangingmovingbar_1963_0_0[2];
static Direction direction_gimmickhangingmovingbar_1963_0_0 = {0, 8, 8, 0, -1, images_gimmickhangingmovingbar_1963_0_0, 2};
static Image* images_gimmickhangingmovingbar_1963_0_8[1];
static Direction direction_gimmickhangingmovingbar_1963_0_8 = {8, 50, 50, 0, 1, images_gimmickhangingmovingbar_1963_0_8, 1};
static Animation anim_gimmickhangingmovingbar_1963_0 = {&direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, NULL, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, &direction_gimmickhangingmovingbar_1963_0_8, NULL, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0, &direction_gimmickhangingmovingbar_1963_0_0};
static Animation * anim_array_gimmickhangingmovingbar_1963[1] = {&anim_gimmickhangingmovingbar_1963_0};
static Animations anim_gimmickhangingmovingbar_1963 = {1, &anim_array_gimmickhangingmovingbar_1963[0]};
static bool anim_gimmickhangingmovingbar_1963_initialized;
class GimmickHangingMovingBar_1963 : public Active
{
public:
    GimmickHangingMovingBar_1963(int x, int y) : Active(x, y, GimmickHangingMovingBar_1963_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Bar", 25);
#endif
        this->animations = &anim_gimmickhangingmovingbar_1963;
        if (!anim_gimmickhangingmovingbar_1963_initialized) {
            anim_gimmickhangingmovingbar_1963_initialized = true;
            images_gimmickhangingmovingbar_1963_0_0[0] = get_internal_image(7176);
            images_gimmickhangingmovingbar_1963_0_0[1] = get_internal_image(3159);
            images_gimmickhangingmovingbar_1963_0_8[0] = get_internal_image(7180);
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
FrameObject * create_gimmickhangingmovingbar_1963(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingBar_1963(x, y);
}
static Image* images_gimmickhangingmovingwheel_1964_0_0[1];
static Direction direction_gimmickhangingmovingwheel_1964_0_0 = {0, 100, 100, 0, -1, images_gimmickhangingmovingwheel_1964_0_0, 1};
static Animation anim_gimmickhangingmovingwheel_1964_0 = {&direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, NULL, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0, &direction_gimmickhangingmovingwheel_1964_0_0};
static Animation * anim_array_gimmickhangingmovingwheel_1964[1] = {&anim_gimmickhangingmovingwheel_1964_0};
static Animations anim_gimmickhangingmovingwheel_1964 = {1, &anim_array_gimmickhangingmovingwheel_1964[0]};
static bool anim_gimmickhangingmovingwheel_1964_initialized;
class GimmickHangingMovingWheel_1964 : public Active
{
public:
    GimmickHangingMovingWheel_1964(int x, int y) : Active(x, y, GimmickHangingMovingWheel_1964_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_HangingMoving_Wheel", 27);
#endif
        this->animations = &anim_gimmickhangingmovingwheel_1964;
        if (!anim_gimmickhangingmovingwheel_1964_initialized) {
            anim_gimmickhangingmovingwheel_1964_initialized = true;
            images_gimmickhangingmovingwheel_1964_0_0[0] = get_internal_image(3269);
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
FrameObject * create_gimmickhangingmovingwheel_1964(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingMovingWheel_1964(x, y);
}
static Image* images_levelmovingplatform1_1965_0_0[1];
static Direction direction_levelmovingplatform1_1965_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform1_1965_0_0, 1};
static Animation anim_levelmovingplatform1_1965_0 = {&direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, NULL, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0, &direction_levelmovingplatform1_1965_0_0};
static Animation * anim_array_levelmovingplatform1_1965[1] = {&anim_levelmovingplatform1_1965_0};
static Animations anim_levelmovingplatform1_1965 = {1, &anim_array_levelmovingplatform1_1965[0]};
static bool anim_levelmovingplatform1_1965_initialized;
class LevelMovingPlatform1_1965 : public Active
{
public:
    LevelMovingPlatform1_1965(int x, int y) : Active(x, y, LevelMovingPlatform1_1965_type)
    {
        // qualifiers: 15, 16, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 1", 22);
#endif
        this->animations = &anim_levelmovingplatform1_1965;
        if (!anim_levelmovingplatform1_1965_initialized) {
            anim_levelmovingplatform1_1965_initialized = true;
            images_levelmovingplatform1_1965_0_0[0] = get_internal_image(8728);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(6, -224);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform1_1965(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform1_1965(x, y);
}
static Image* images_escalatorright_1966_0_0[1];
static Direction direction_escalatorright_1966_0_0 = {0, 50, 50, 0, 1, images_escalatorright_1966_0_0, 1};
static Animation anim_escalatorright_1966_0 = {&direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, NULL, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0, &direction_escalatorright_1966_0_0};
static Animation * anim_array_escalatorright_1966[1] = {&anim_escalatorright_1966_0};
static Animations anim_escalatorright_1966 = {1, &anim_array_escalatorright_1966[0]};
static bool anim_escalatorright_1966_initialized;
class EscalatorRight_1966 : public Active
{
public:
    EscalatorRight_1966(int x, int y) : Active(x, y, EscalatorRight_1966_type)
    {
        // qualifiers: 15, 16
#ifndef NDEBUG
        name = std::string("Escalator_Right", 15);
#endif
        set_visible(false);
        this->animations = &anim_escalatorright_1966;
        if (!anim_escalatorright_1966_initialized) {
            anim_escalatorright_1966_initialized = true;
            images_escalatorright_1966_0_0[0] = get_internal_image(1729);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(3, -1);
    }
};
FrameObject * create_escalatorright_1966(int x, int y)
{
    return new (Active::pool.create()) EscalatorRight_1966(x, y);
}
static Image* images_levelmovingplatform2_1967_0_0[1];
static Direction direction_levelmovingplatform2_1967_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform2_1967_0_0, 1};
static Animation anim_levelmovingplatform2_1967_0 = {&direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, NULL, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0, &direction_levelmovingplatform2_1967_0_0};
static Animation * anim_array_levelmovingplatform2_1967[1] = {&anim_levelmovingplatform2_1967_0};
static Animations anim_levelmovingplatform2_1967 = {1, &anim_array_levelmovingplatform2_1967[0]};
static bool anim_levelmovingplatform2_1967_initialized;
class LevelMovingPlatform2_1967 : public Active
{
public:
    LevelMovingPlatform2_1967(int x, int y) : Active(x, y, LevelMovingPlatform2_1967_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 2", 22);
#endif
        this->animations = &anim_levelmovingplatform2_1967;
        if (!anim_levelmovingplatform2_1967_initialized) {
            anim_levelmovingplatform2_1967_initialized = true;
            images_levelmovingplatform2_1967_0_0[0] = get_internal_image(4473);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 8);
    }
};
FrameObject * create_levelmovingplatform2_1967(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform2_1967(x, y);
}
static Image* images_effectdust_1968_4_0[3];
static Direction direction_effectdust_1968_4_0 = {0, 15, 15, 0, 1, images_effectdust_1968_4_0, 3};
static Animation anim_effectdust_1968_4 = {&direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, NULL, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0, &direction_effectdust_1968_4_0};
static Animation * anim_array_effectdust_1968[5] = {NULL, NULL, NULL, NULL, &anim_effectdust_1968_4};
static Animations anim_effectdust_1968 = {5, &anim_array_effectdust_1968[0]};
static bool anim_effectdust_1968_initialized;
class EffectDust_1968 : public Active
{
public:
    EffectDust_1968(int x, int y) : Active(x, y, EffectDust_1968_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Effect_Dust", 11);
#endif
        this->animations = &anim_effectdust_1968;
        if (!anim_effectdust_1968_initialized) {
            anim_effectdust_1968_initialized = true;
            images_effectdust_1968_4_0[0] = get_internal_image(2549);
            images_effectdust_1968_4_0[1] = get_internal_image(7613);
            images_effectdust_1968_4_0[2] = get_internal_image(7596);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(30);
        ((BallMovement*)movement)->set_deceleration(0);
        movement->start();
        create_alterables();
    }
};
FrameObject * create_effectdust_1968(int x, int y)
{
    return new (Active::pool.create()) EffectDust_1968(x, y);
}
static Image* images_layer0loop6_1969_0_0[1];
static Direction direction_layer0loop6_1969_0_0 = {0, 50, 50, 0, 1, images_layer0loop6_1969_0_0, 1};
static Animation anim_layer0loop6_1969_0 = {&direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, NULL, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0, &direction_layer0loop6_1969_0_0};
static Animation * anim_array_layer0loop6_1969[1] = {&anim_layer0loop6_1969_0};
static Animations anim_layer0loop6_1969 = {1, &anim_array_layer0loop6_1969[0]};
static bool anim_layer0loop6_1969_initialized;
class Layer0Loop6_1969 : public Active
{
public:
    Layer0Loop6_1969(int x, int y) : Active(x, y, Layer0Loop6_1969_type)
    {
        // qualifiers: 14, 17
#ifndef NDEBUG
        name = std::string("Layer0_Loop 6", 13);
#endif
        this->animations = &anim_layer0loop6_1969;
        if (!anim_layer0loop6_1969_initialized) {
            anim_layer0loop6_1969_initialized = true;
            images_layer0loop6_1969_0_0[0] = get_internal_image(7338);
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
FrameObject * create_layer0loop6_1969(int x, int y)
{
    return new (Active::pool.create()) Layer0Loop6_1969(x, y);
}
static Image* images_gimmickclothesline_1970_0_0[1];
static Direction direction_gimmickclothesline_1970_0_0 = {0, 50, 50, 0, 1, images_gimmickclothesline_1970_0_0, 1};
static Animation anim_gimmickclothesline_1970_0 = {&direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, NULL, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0, &direction_gimmickclothesline_1970_0_0};
static Animation * anim_array_gimmickclothesline_1970[1] = {&anim_gimmickclothesline_1970_0};
static Animations anim_gimmickclothesline_1970 = {1, &anim_array_gimmickclothesline_1970[0]};
static bool anim_gimmickclothesline_1970_initialized;
class GimmickClothesline_1970 : public Active
{
public:
    GimmickClothesline_1970(int x, int y) : Active(x, y, GimmickClothesline_1970_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_Clothesline", 19);
#endif
        set_visible(false);
        this->animations = &anim_gimmickclothesline_1970;
        if (!anim_gimmickclothesline_1970_initialized) {
            anim_gimmickclothesline_1970_initialized = true;
            images_gimmickclothesline_1970_0_0[0] = get_internal_image(6362);
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
FrameObject * create_gimmickclothesline_1970(int x, int y)
{
    return new (Active::pool.create()) GimmickClothesline_1970(x, y);
}
static Image* images_enemyghettoshell_1971_0_0[8];
static Direction direction_enemyghettoshell_1971_0_0 = {0, 25, 25, 0, -1, images_enemyghettoshell_1971_0_0, 8};
static Image* images_enemyghettoshell_1971_0_16[8];
static Direction direction_enemyghettoshell_1971_0_16 = {16, 25, 25, 0, -1, images_enemyghettoshell_1971_0_16, 8};
static Animation anim_enemyghettoshell_1971_0 = {&direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, NULL, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, &direction_enemyghettoshell_1971_0_16, NULL, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0, &direction_enemyghettoshell_1971_0_0};
static Image* images_enemyghettoshell_1971_8_0[2];
static Direction direction_enemyghettoshell_1971_8_0 = {0, 50, 50, 0, -1, images_enemyghettoshell_1971_8_0, 2};
static Image* images_enemyghettoshell_1971_8_16[2];
static Direction direction_enemyghettoshell_1971_8_16 = {16, 50, 50, 0, -1, images_enemyghettoshell_1971_8_16, 2};
static Animation anim_enemyghettoshell_1971_8 = {&direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, NULL, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, &direction_enemyghettoshell_1971_8_16, NULL, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0, &direction_enemyghettoshell_1971_8_0};
static Image* images_enemyghettoshell_1971_10_0[13];
static Direction direction_enemyghettoshell_1971_10_0 = {0, 30, 30, 0, 1, images_enemyghettoshell_1971_10_0, 13};
static Image* images_enemyghettoshell_1971_10_8[6];
static Direction direction_enemyghettoshell_1971_10_8 = {8, 50, 50, 0, 1, images_enemyghettoshell_1971_10_8, 6};
static Image* images_enemyghettoshell_1971_10_16[13];
static Direction direction_enemyghettoshell_1971_10_16 = {16, 30, 30, 0, 1, images_enemyghettoshell_1971_10_16, 13};
static Animation anim_enemyghettoshell_1971_10 = {&direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, NULL, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, &direction_enemyghettoshell_1971_10_8, NULL, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, &direction_enemyghettoshell_1971_10_16, NULL, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0, &direction_enemyghettoshell_1971_10_0};
static Animation * anim_array_enemyghettoshell_1971[11] = {&anim_enemyghettoshell_1971_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_enemyghettoshell_1971_8, NULL, &anim_enemyghettoshell_1971_10};
static Animations anim_enemyghettoshell_1971 = {11, &anim_array_enemyghettoshell_1971[0]};
static bool anim_enemyghettoshell_1971_initialized;
class EnemyGhettoShell_1971 : public Active
{
public:
    EnemyGhettoShell_1971(int x, int y) : Active(x, y, EnemyGhettoShell_1971_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Enemy_GhettoShell", 17);
#endif
        this->animations = &anim_enemyghettoshell_1971;
        if (!anim_enemyghettoshell_1971_initialized) {
            anim_enemyghettoshell_1971_initialized = true;
            images_enemyghettoshell_1971_0_0[0] = get_internal_image(12515);
            images_enemyghettoshell_1971_0_0[1] = get_internal_image(12513);
            images_enemyghettoshell_1971_0_0[2] = get_internal_image(12516);
            images_enemyghettoshell_1971_0_0[3] = get_internal_image(12517);
            images_enemyghettoshell_1971_0_0[4] = get_internal_image(12518);
            images_enemyghettoshell_1971_0_0[5] = get_internal_image(12519);
            images_enemyghettoshell_1971_0_0[6] = get_internal_image(12520);
            images_enemyghettoshell_1971_0_0[7] = get_internal_image(12521);
            images_enemyghettoshell_1971_0_16[0] = get_internal_image(12532);
            images_enemyghettoshell_1971_0_16[1] = get_internal_image(12545);
            images_enemyghettoshell_1971_0_16[2] = get_internal_image(12546);
            images_enemyghettoshell_1971_0_16[3] = get_internal_image(12547);
            images_enemyghettoshell_1971_0_16[4] = get_internal_image(12548);
            images_enemyghettoshell_1971_0_16[5] = get_internal_image(12549);
            images_enemyghettoshell_1971_0_16[6] = get_internal_image(12550);
            images_enemyghettoshell_1971_0_16[7] = get_internal_image(12551);
            images_enemyghettoshell_1971_8_0[0] = get_internal_image(12543);
            images_enemyghettoshell_1971_8_0[1] = get_internal_image(12522);
            images_enemyghettoshell_1971_8_16[0] = get_internal_image(12542);
            images_enemyghettoshell_1971_8_16[1] = get_internal_image(12544);
            images_enemyghettoshell_1971_10_0[0] = get_internal_image(12515);
            images_enemyghettoshell_1971_10_0[1] = get_internal_image(12523);
            images_enemyghettoshell_1971_10_0[2] = get_internal_image(12524);
            images_enemyghettoshell_1971_10_0[3] = get_internal_image(12525);
            images_enemyghettoshell_1971_10_0[4] = get_internal_image(12526);
            images_enemyghettoshell_1971_10_0[5] = get_internal_image(12527);
            images_enemyghettoshell_1971_10_0[6] = get_internal_image(12527);
            images_enemyghettoshell_1971_10_0[7] = get_internal_image(12527);
            images_enemyghettoshell_1971_10_0[8] = get_internal_image(12528);
            images_enemyghettoshell_1971_10_0[9] = get_internal_image(12529);
            images_enemyghettoshell_1971_10_0[10] = get_internal_image(12530);
            images_enemyghettoshell_1971_10_0[11] = get_internal_image(12531);
            images_enemyghettoshell_1971_10_0[12] = get_internal_image(12515);
            images_enemyghettoshell_1971_10_8[0] = get_internal_image(5313);
            images_enemyghettoshell_1971_10_8[1] = get_internal_image(5325);
            images_enemyghettoshell_1971_10_8[2] = get_internal_image(5331);
            images_enemyghettoshell_1971_10_8[3] = get_internal_image(5329);
            images_enemyghettoshell_1971_10_8[4] = get_internal_image(5326);
            images_enemyghettoshell_1971_10_8[5] = get_internal_image(1799);
            images_enemyghettoshell_1971_10_16[0] = get_internal_image(12532);
            images_enemyghettoshell_1971_10_16[1] = get_internal_image(12533);
            images_enemyghettoshell_1971_10_16[2] = get_internal_image(12534);
            images_enemyghettoshell_1971_10_16[3] = get_internal_image(12535);
            images_enemyghettoshell_1971_10_16[4] = get_internal_image(12536);
            images_enemyghettoshell_1971_10_16[5] = get_internal_image(12537);
            images_enemyghettoshell_1971_10_16[6] = get_internal_image(12537);
            images_enemyghettoshell_1971_10_16[7] = get_internal_image(12537);
            images_enemyghettoshell_1971_10_16[8] = get_internal_image(12538);
            images_enemyghettoshell_1971_10_16[9] = get_internal_image(12539);
            images_enemyghettoshell_1971_10_16[10] = get_internal_image(12540);
            images_enemyghettoshell_1971_10_16[11] = get_internal_image(12541);
            images_enemyghettoshell_1971_10_16[12] = get_internal_image(12532);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(16);
        create_alterables();
        alterables->values.set(0, 25);
        alterables->values.set(8, -1);
    }
};
FrameObject * create_enemyghettoshell_1971(int x, int y)
{
    return new (Active::pool.create()) EnemyGhettoShell_1971(x, y);
}
static Image* images_gimmickairballoon_1972_0_0[3];
static Direction direction_gimmickairballoon_1972_0_0 = {0, 50, 50, 0, -1, images_gimmickairballoon_1972_0_0, 3};
static Animation anim_gimmickairballoon_1972_0 = {&direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, NULL, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0, &direction_gimmickairballoon_1972_0_0};
static Animation * anim_array_gimmickairballoon_1972[1] = {&anim_gimmickairballoon_1972_0};
static Animations anim_gimmickairballoon_1972 = {1, &anim_array_gimmickairballoon_1972[0]};
static bool anim_gimmickairballoon_1972_initialized;
class GimmickAirBalloon_1972 : public Active
{
public:
    GimmickAirBalloon_1972(int x, int y) : Active(x, y, GimmickAirBalloon_1972_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Gimmick_AirBalloon", 18);
#endif
        this->animations = &anim_gimmickairballoon_1972;
        if (!anim_gimmickairballoon_1972_initialized) {
            anim_gimmickairballoon_1972_initialized = true;
            images_gimmickairballoon_1972_0_0[0] = get_internal_image(13203);
            images_gimmickairballoon_1972_0_0[1] = get_internal_image(13205);
            images_gimmickairballoon_1972_0_0[2] = get_internal_image(13204);
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
FrameObject * create_gimmickairballoon_1972(int x, int y)
{
    return new (Active::pool.create()) GimmickAirBalloon_1972(x, y);
}
static Image* images_gimmickhangingidleballoon_1973_0_0[1];
static Direction direction_gimmickhangingidleballoon_1973_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidleballoon_1973_0_0, 1};
static Animation anim_gimmickhangingidleballoon_1973_0 = {&direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, NULL, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0, &direction_gimmickhangingidleballoon_1973_0_0};
static Animation * anim_array_gimmickhangingidleballoon_1973[1] = {&anim_gimmickhangingidleballoon_1973_0};
static Animations anim_gimmickhangingidleballoon_1973 = {1, &anim_array_gimmickhangingidleballoon_1973[0]};
static bool anim_gimmickhangingidleballoon_1973_initialized;
class GimmickHangingIdleBalloon_1973 : public Active
{
public:
    GimmickHangingIdleBalloon_1973(int x, int y) : Active(x, y, GimmickHangingIdleBalloon_1973_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Balloon", 27);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingidleballoon_1973;
        if (!anim_gimmickhangingidleballoon_1973_initialized) {
            anim_gimmickhangingidleballoon_1973_initialized = true;
            images_gimmickhangingidleballoon_1973_0_0[0] = get_internal_image(1150);
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
FrameObject * create_gimmickhangingidleballoon_1973(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleBalloon_1973(x, y);
}
class HamsterTunnel2_1974 : public Backdrop
{
public:
    HamsterTunnel2_1974(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1232);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel2_1974(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel2_1974(x, y);
}
class HamsterTunnel6_1975 : public Backdrop
{
public:
    HamsterTunnel6_1975(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 6", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6680);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel6_1975(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel6_1975(x, y);
}
class HamsterTunnel5_1976 : public Backdrop
{
public:
    HamsterTunnel5_1976(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 5", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(5237);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel5_1976(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel5_1976(x, y);
}
class HamsterTunnel7_1977 : public Backdrop
{
public:
    HamsterTunnel7_1977(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("HamsterTunnel 7", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(6732);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_hamstertunnel7_1977(int x, int y)
{
    return new (Backdrop::pool.create()) HamsterTunnel7_1977(x, y);
}
class KnightStatue_1978 : public Backdrop
{
public:
    KnightStatue_1978(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("KnightStatue", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1272);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_knightstatue_1978(int x, int y)
{
    return new (Backdrop::pool.create()) KnightStatue_1978(x, y);
}
static Image* images_shipcable2_1979_0_0[6];
static Direction direction_shipcable2_1979_0_0 = {0, 25, 25, 0, -1, images_shipcable2_1979_0_0, 6};
static Animation anim_shipcable2_1979_0 = {&direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, NULL, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0, &direction_shipcable2_1979_0_0};
static Animation * anim_array_shipcable2_1979[1] = {&anim_shipcable2_1979_0};
static Animations anim_shipcable2_1979 = {1, &anim_array_shipcable2_1979[0]};
static bool anim_shipcable2_1979_initialized;
class ShipCable2_1979 : public Active
{
public:
    ShipCable2_1979(int x, int y) : Active(x, y, ShipCable2_1979_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ship_cable 2", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_shipcable2_1979;
        if (!anim_shipcable2_1979_initialized) {
            anim_shipcable2_1979_initialized = true;
            images_shipcable2_1979_0_0[0] = get_internal_image(6340);
            images_shipcable2_1979_0_0[1] = get_internal_image(137);
            images_shipcable2_1979_0_0[2] = get_internal_image(3196);
            images_shipcable2_1979_0_0[3] = get_internal_image(3806);
            images_shipcable2_1979_0_0[4] = get_internal_image(3196);
            images_shipcable2_1979_0_0[5] = get_internal_image(137);
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
FrameObject * create_shipcable2_1979(int x, int y)
{
    return new (Active::pool.create()) ShipCable2_1979(x, y);
}
static Image* images_breakablefloorpiece_1980_0_0[1];
static Direction direction_breakablefloorpiece_1980_0_0 = {0, 50, 50, 0, 1, images_breakablefloorpiece_1980_0_0, 1};
static Animation anim_breakablefloorpiece_1980_0 = {&direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, NULL, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0, &direction_breakablefloorpiece_1980_0_0};
static Animation * anim_array_breakablefloorpiece_1980[1] = {&anim_breakablefloorpiece_1980_0};
static Animations anim_breakablefloorpiece_1980 = {1, &anim_array_breakablefloorpiece_1980[0]};
static bool anim_breakablefloorpiece_1980_initialized;
class BreakableFloorPiece_1980 : public Active
{
public:
    BreakableFloorPiece_1980(int x, int y) : Active(x, y, BreakableFloorPiece_1980_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableFloor_piece", 20);
#endif
        this->animations = &anim_breakablefloorpiece_1980;
        if (!anim_breakablefloorpiece_1980_initialized) {
            anim_breakablefloorpiece_1980_initialized = true;
            images_breakablefloorpiece_1980_0_0[0] = get_internal_image(8735);
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
FrameObject * create_breakablefloorpiece_1980(int x, int y)
{
    return new (Active::pool.create()) BreakableFloorPiece_1980(x, y);
}
static Image* images_ship1_1982_0_0[2];
static Direction direction_ship1_1982_0_0 = {0, 60, 60, 0, -1, images_ship1_1982_0_0, 2};
static Animation anim_ship1_1982_0 = {&direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, NULL, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0, &direction_ship1_1982_0_0};
static Animation * anim_array_ship1_1982[1] = {&anim_ship1_1982_0};
static Animations anim_ship1_1982 = {1, &anim_array_ship1_1982[0]};
static bool anim_ship1_1982_initialized;
class Ship1_1982 : public Active
{
public:
    Ship1_1982(int x, int y) : Active(x, y, Ship1_1982_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ship 1", 6);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_ship1_1982;
        if (!anim_ship1_1982_initialized) {
            anim_ship1_1982_initialized = true;
            images_ship1_1982_0_0[0] = get_internal_image(5477);
            images_ship1_1982_0_0[1] = get_internal_image(9413);
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
FrameObject * create_ship1_1982(int x, int y)
{
    return new (Active::pool.create()) Ship1_1982(x, y);
}
static Image* images_shipcable_1983_0_0[4];
static Direction direction_shipcable_1983_0_0 = {0, 20, 20, 0, -1, images_shipcable_1983_0_0, 4};
static Animation anim_shipcable_1983_0 = {&direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, NULL, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0, &direction_shipcable_1983_0_0};
static Animation * anim_array_shipcable_1983[1] = {&anim_shipcable_1983_0};
static Animations anim_shipcable_1983 = {1, &anim_array_shipcable_1983[0]};
static bool anim_shipcable_1983_initialized;
class ShipCable_1983 : public Active
{
public:
    ShipCable_1983(int x, int y) : Active(x, y, ShipCable_1983_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ship_cable", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_shipcable_1983;
        if (!anim_shipcable_1983_initialized) {
            anim_shipcable_1983_initialized = true;
            images_shipcable_1983_0_0[0] = get_internal_image(6347);
            images_shipcable_1983_0_0[1] = get_internal_image(5231);
            images_shipcable_1983_0_0[2] = get_internal_image(1001);
            images_shipcable_1983_0_0[3] = get_internal_image(2052);
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
FrameObject * create_shipcable_1983(int x, int y)
{
    return new (Active::pool.create()) ShipCable_1983(x, y);
}
static Image* images_shipbullet_1984_0_0[2];
static Direction direction_shipbullet_1984_0_0 = {0, 50, 50, 1, -1, images_shipbullet_1984_0_0, 2};
static Image* images_shipbullet_1984_0_1[2];
static Direction direction_shipbullet_1984_0_1 = {1, 50, 50, 1, -1, images_shipbullet_1984_0_1, 2};
static Animation anim_shipbullet_1984_0 = {&direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_1, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0, &direction_shipbullet_1984_0_0};
static Animation * anim_array_shipbullet_1984[1] = {&anim_shipbullet_1984_0};
static Animations anim_shipbullet_1984 = {1, &anim_array_shipbullet_1984[0]};
static bool anim_shipbullet_1984_initialized;
class ShipBullet_1984 : public Active
{
public:
    ShipBullet_1984(int x, int y) : Active(x, y, ShipBullet_1984_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ship_bullet", 11);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_shipbullet_1984;
        if (!anim_shipbullet_1984_initialized) {
            anim_shipbullet_1984_initialized = true;
            images_shipbullet_1984_0_0[0] = get_internal_image(9408);
            images_shipbullet_1984_0_0[1] = get_internal_image(9411);
            images_shipbullet_1984_0_1[0] = get_internal_image(6346);
            images_shipbullet_1984_0_1[1] = get_internal_image(5233);
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
FrameObject * create_shipbullet_1984(int x, int y)
{
    return new (Active::pool.create()) ShipBullet_1984(x, y);
}
static Image* images_ship2_1985_0_0[2];
static Direction direction_ship2_1985_0_0 = {0, 60, 60, 0, -1, images_ship2_1985_0_0, 2};
static Animation anim_ship2_1985_0 = {&direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, NULL, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0, &direction_ship2_1985_0_0};
static Animation * anim_array_ship2_1985[1] = {&anim_ship2_1985_0};
static Animations anim_ship2_1985 = {1, &anim_array_ship2_1985[0]};
static bool anim_ship2_1985_initialized;
class Ship2_1985 : public Active
{
public:
    Ship2_1985(int x, int y) : Active(x, y, Ship2_1985_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ship 2", 6);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_ship2_1985;
        if (!anim_ship2_1985_initialized) {
            anim_ship2_1985_initialized = true;
            images_ship2_1985_0_0[0] = get_internal_image(536);
            images_ship2_1985_0_0[1] = get_internal_image(5235);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 68);
    }
};
FrameObject * create_ship2_1985(int x, int y)
{
    return new (Active::pool.create()) Ship2_1985(x, y);
}
class CarouselBase_1986 : public Backdrop
{
public:
    CarouselBase_1986(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Carousel_Base", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11650);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_carouselbase_1986(int x, int y)
{
    return new (Backdrop::pool.create()) CarouselBase_1986(x, y);
}
class FNMallGlass_1987 : public Backdrop
{
public:
    FNMallGlass_1987(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("FN_MallGlass", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11623);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_fnmallglass_1987(int x, int y)
{
    return new (Backdrop::pool.create()) FNMallGlass_1987(x, y);
}
static Image* images_carousel_1988_0_0[15];
static Direction direction_carousel_1988_0_0 = {0, 0, 0, 0, 1, images_carousel_1988_0_0, 15};
static Animation anim_carousel_1988_0 = {&direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, NULL, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0, &direction_carousel_1988_0_0};
static Animation * anim_array_carousel_1988[1] = {&anim_carousel_1988_0};
static Animations anim_carousel_1988 = {1, &anim_array_carousel_1988[0]};
static bool anim_carousel_1988_initialized;
class Carousel_1988 : public Active
{
public:
    Carousel_1988(int x, int y) : Active(x, y, Carousel_1988_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Carousel", 8);
#endif
        this->animations = &anim_carousel_1988;
        if (!anim_carousel_1988_initialized) {
            anim_carousel_1988_initialized = true;
            images_carousel_1988_0_0[0] = get_internal_image(11630);
            images_carousel_1988_0_0[1] = get_internal_image(11637);
            images_carousel_1988_0_0[2] = get_internal_image(11636);
            images_carousel_1988_0_0[3] = get_internal_image(11635);
            images_carousel_1988_0_0[4] = get_internal_image(11634);
            images_carousel_1988_0_0[5] = get_internal_image(11633);
            images_carousel_1988_0_0[6] = get_internal_image(11631);
            images_carousel_1988_0_0[7] = get_internal_image(11631);
            images_carousel_1988_0_0[8] = get_internal_image(11631);
            images_carousel_1988_0_0[9] = get_internal_image(11632);
            images_carousel_1988_0_0[10] = get_internal_image(11639);
            images_carousel_1988_0_0[11] = get_internal_image(11640);
            images_carousel_1988_0_0[12] = get_internal_image(11641);
            images_carousel_1988_0_0[13] = get_internal_image(11642);
            images_carousel_1988_0_0[14] = get_internal_image(11643);
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
FrameObject * create_carousel_1988(int x, int y)
{
    return new (Active::pool.create()) Carousel_1988(x, y);
}
static Image* images_bosspantherrider_1989_0_0[1];
static Direction direction_bosspantherrider_1989_0_0 = {0, 50, 50, 0, 1, images_bosspantherrider_1989_0_0, 1};
static Image* images_bosspantherrider_1989_0_1[1];
static Direction direction_bosspantherrider_1989_0_1 = {1, 50, 50, 0, 1, images_bosspantherrider_1989_0_1, 1};
static Image* images_bosspantherrider_1989_0_2[2];
static Direction direction_bosspantherrider_1989_0_2 = {2, 30, 30, 0, -1, images_bosspantherrider_1989_0_2, 2};
static Animation anim_bosspantherrider_1989_0 = {&direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_1, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, &direction_bosspantherrider_1989_0_2, NULL, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0, &direction_bosspantherrider_1989_0_0};
static Image* images_bosspantherrider_1989_7_0[5];
static Direction direction_bosspantherrider_1989_7_0 = {0, 9, 9, 4, -1, images_bosspantherrider_1989_7_0, 5};
static Animation anim_bosspantherrider_1989_7 = {&direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, NULL, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0, &direction_bosspantherrider_1989_7_0};
static Image* images_bosspantherrider_1989_9_0[8];
static Direction direction_bosspantherrider_1989_9_0 = {0, 50, 50, 4, -1, images_bosspantherrider_1989_9_0, 8};
static Animation anim_bosspantherrider_1989_9 = {&direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, NULL, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0, &direction_bosspantherrider_1989_9_0};
static Image* images_bosspantherrider_1989_12_0[1];
static Direction direction_bosspantherrider_1989_12_0 = {0, 100, 100, 0, 8, images_bosspantherrider_1989_12_0, 1};
static Animation anim_bosspantherrider_1989_12 = {&direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, NULL, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0, &direction_bosspantherrider_1989_12_0};
static Image* images_bosspantherrider_1989_13_0[11];
static Direction direction_bosspantherrider_1989_13_0 = {0, 100, 100, 5, 15, images_bosspantherrider_1989_13_0, 11};
static Animation anim_bosspantherrider_1989_13 = {&direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, NULL, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0, &direction_bosspantherrider_1989_13_0};
static Animation * anim_array_bosspantherrider_1989[14] = {&anim_bosspantherrider_1989_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosspantherrider_1989_7, NULL, &anim_bosspantherrider_1989_9, NULL, NULL, &anim_bosspantherrider_1989_12, &anim_bosspantherrider_1989_13};
static Animations anim_bosspantherrider_1989 = {14, &anim_array_bosspantherrider_1989[0]};
static bool anim_bosspantherrider_1989_initialized;
class BossPantherRider_1989 : public Active
{
public:
    BossPantherRider_1989(int x, int y) : Active(x, y, BossPantherRider_1989_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherRider", 17);
#endif
        this->animations = &anim_bosspantherrider_1989;
        if (!anim_bosspantherrider_1989_initialized) {
            anim_bosspantherrider_1989_initialized = true;
            images_bosspantherrider_1989_0_0[0] = get_internal_image(7147);
            images_bosspantherrider_1989_0_1[0] = get_internal_image(288);
            images_bosspantherrider_1989_0_2[0] = get_internal_image(9324);
            images_bosspantherrider_1989_0_2[1] = get_internal_image(5262);
            images_bosspantherrider_1989_7_0[0] = get_internal_image(7702);
            images_bosspantherrider_1989_7_0[1] = get_internal_image(7702);
            images_bosspantherrider_1989_7_0[2] = get_internal_image(7704);
            images_bosspantherrider_1989_7_0[3] = get_internal_image(7704);
            images_bosspantherrider_1989_7_0[4] = get_internal_image(7703);
            images_bosspantherrider_1989_9_0[0] = get_internal_image(7702);
            images_bosspantherrider_1989_9_0[1] = get_internal_image(7702);
            images_bosspantherrider_1989_9_0[2] = get_internal_image(7702);
            images_bosspantherrider_1989_9_0[3] = get_internal_image(7702);
            images_bosspantherrider_1989_9_0[4] = get_internal_image(7732);
            images_bosspantherrider_1989_9_0[5] = get_internal_image(7733);
            images_bosspantherrider_1989_9_0[6] = get_internal_image(7734);
            images_bosspantherrider_1989_9_0[7] = get_internal_image(7735);
            images_bosspantherrider_1989_12_0[0] = get_internal_image(7213);
            images_bosspantherrider_1989_13_0[0] = get_internal_image(7214);
            images_bosspantherrider_1989_13_0[1] = get_internal_image(7214);
            images_bosspantherrider_1989_13_0[2] = get_internal_image(7214);
            images_bosspantherrider_1989_13_0[3] = get_internal_image(7214);
            images_bosspantherrider_1989_13_0[4] = get_internal_image(7215);
            images_bosspantherrider_1989_13_0[5] = get_internal_image(7216);
            images_bosspantherrider_1989_13_0[6] = get_internal_image(7217);
            images_bosspantherrider_1989_13_0[7] = get_internal_image(7218);
            images_bosspantherrider_1989_13_0[8] = get_internal_image(7219);
            images_bosspantherrider_1989_13_0[9] = get_internal_image(7220);
            images_bosspantherrider_1989_13_0[10] = get_internal_image(7221);
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
FrameObject * create_bosspantherrider_1989(int x, int y)
{
    return new (Active::pool.create()) BossPantherRider_1989(x, y);
}
static Image* images_bosspantherribs_1990_0_0[1];
static Direction direction_bosspantherribs_1990_0_0 = {0, 50, 50, 0, 1, images_bosspantherribs_1990_0_0, 1};
static Image* images_bosspantherribs_1990_0_1[1];
static Direction direction_bosspantherribs_1990_0_1 = {1, 50, 50, 0, 1, images_bosspantherribs_1990_0_1, 1};
static Image* images_bosspantherribs_1990_0_8[1];
static Direction direction_bosspantherribs_1990_0_8 = {8, 50, 50, 0, 1, images_bosspantherribs_1990_0_8, 1};
static Animation anim_bosspantherribs_1990_0 = {&direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_1, &direction_bosspantherribs_1990_0_1, &direction_bosspantherribs_1990_0_1, &direction_bosspantherribs_1990_0_1, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, &direction_bosspantherribs_1990_0_8, NULL, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0, &direction_bosspantherribs_1990_0_0};
static Animation * anim_array_bosspantherribs_1990[1] = {&anim_bosspantherribs_1990_0};
static Animations anim_bosspantherribs_1990 = {1, &anim_array_bosspantherribs_1990[0]};
static bool anim_bosspantherribs_1990_initialized;
class BossPantherRibs_1990 : public Active
{
public:
    BossPantherRibs_1990(int x, int y) : Active(x, y, BossPantherRibs_1990_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherRibs", 16);
#endif
        this->animations = &anim_bosspantherribs_1990;
        if (!anim_bosspantherribs_1990_initialized) {
            anim_bosspantherribs_1990_initialized = true;
            images_bosspantherribs_1990_0_0[0] = get_internal_image(11356);
            images_bosspantherribs_1990_0_1[0] = get_internal_image(11359);
            images_bosspantherribs_1990_0_8[0] = get_internal_image(7172);
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
FrameObject * create_bosspantherribs_1990(int x, int y)
{
    return new (Active::pool.create()) BossPantherRibs_1990(x, y);
}
static Image* images_bosspantherfootfl_1991_0_0[1];
static Direction direction_bosspantherfootfl_1991_0_0 = {0, 50, 50, 0, 1, images_bosspantherfootfl_1991_0_0, 1};
static Image* images_bosspantherfootfl_1991_0_1[1];
static Direction direction_bosspantherfootfl_1991_0_1 = {1, 50, 50, 0, 1, images_bosspantherfootfl_1991_0_1, 1};
static Animation anim_bosspantherfootfl_1991_0 = {&direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_1, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0, &direction_bosspantherfootfl_1991_0_0};
static Animation * anim_array_bosspantherfootfl_1991[1] = {&anim_bosspantherfootfl_1991_0};
static Animations anim_bosspantherfootfl_1991 = {1, &anim_array_bosspantherfootfl_1991[0]};
static bool anim_bosspantherfootfl_1991_initialized;
class BossPantherFootFL_1991 : public Active
{
public:
    BossPantherFootFL_1991(int x, int y) : Active(x, y, BossPantherFootFL_1991_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherFootFL", 18);
#endif
        this->animations = &anim_bosspantherfootfl_1991;
        if (!anim_bosspantherfootfl_1991_initialized) {
            anim_bosspantherfootfl_1991_initialized = true;
            images_bosspantherfootfl_1991_0_0[0] = get_internal_image(11366);
            images_bosspantherfootfl_1991_0_1[0] = get_internal_image(11369);
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
FrameObject * create_bosspantherfootfl_1991(int x, int y)
{
    return new (Active::pool.create()) BossPantherFootFL_1991(x, y);
}
static Image* images_bosspantherhead_1992_0_0[2];
static Direction direction_bosspantherhead_1992_0_0 = {0, 15, 15, 0, -1, images_bosspantherhead_1992_0_0, 2};
static Image* images_bosspantherhead_1992_0_1[2];
static Direction direction_bosspantherhead_1992_0_1 = {1, 15, 15, 0, -1, images_bosspantherhead_1992_0_1, 2};
static Animation anim_bosspantherhead_1992_0 = {&direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_1, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0, &direction_bosspantherhead_1992_0_0};
static Animation * anim_array_bosspantherhead_1992[1] = {&anim_bosspantherhead_1992_0};
static Animations anim_bosspantherhead_1992 = {1, &anim_array_bosspantherhead_1992[0]};
static bool anim_bosspantherhead_1992_initialized;
class BossPantherHead_1992 : public Active
{
public:
    BossPantherHead_1992(int x, int y) : Active(x, y, BossPantherHead_1992_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherHead", 16);
#endif
        this->animations = &anim_bosspantherhead_1992;
        if (!anim_bosspantherhead_1992_initialized) {
            anim_bosspantherhead_1992_initialized = true;
            images_bosspantherhead_1992_0_0[0] = get_internal_image(11375);
            images_bosspantherhead_1992_0_0[1] = get_internal_image(11377);
            images_bosspantherhead_1992_0_1[0] = get_internal_image(11378);
            images_bosspantherhead_1992_0_1[1] = get_internal_image(11379);
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
FrameObject * create_bosspantherhead_1992(int x, int y)
{
    return new (Active::pool.create()) BossPantherHead_1992(x, y);
}
static Image* images_bosspantherjaw_1993_0_0[1];
static Direction direction_bosspantherjaw_1993_0_0 = {0, 50, 50, 0, 1, images_bosspantherjaw_1993_0_0, 1};
static Animation anim_bosspantherjaw_1993_0 = {&direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, NULL, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0, &direction_bosspantherjaw_1993_0_0};
static Image* images_bosspantherjaw_1993_7_0[1];
static Direction direction_bosspantherjaw_1993_7_0 = {0, 0, 0, 0, -1, images_bosspantherjaw_1993_7_0, 1};
static Animation anim_bosspantherjaw_1993_7 = {&direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, NULL, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0, &direction_bosspantherjaw_1993_7_0};
static Animation * anim_array_bosspantherjaw_1993[8] = {&anim_bosspantherjaw_1993_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosspantherjaw_1993_7};
static Animations anim_bosspantherjaw_1993 = {8, &anim_array_bosspantherjaw_1993[0]};
static bool anim_bosspantherjaw_1993_initialized;
class BossPantherJaw_1993 : public Active
{
public:
    BossPantherJaw_1993(int x, int y) : Active(x, y, BossPantherJaw_1993_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherJaw", 15);
#endif
        this->animations = &anim_bosspantherjaw_1993;
        if (!anim_bosspantherjaw_1993_initialized) {
            anim_bosspantherjaw_1993_initialized = true;
            images_bosspantherjaw_1993_0_0[0] = get_internal_image(11374);
            images_bosspantherjaw_1993_7_0[0] = get_internal_image(11373);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 71);
        alterables->values.set(2, 21);
    }
};
FrameObject * create_bosspantherjaw_1993(int x, int y)
{
    return new (Active::pool.create()) BossPantherJaw_1993(x, y);
}
static Image* images_bosspantherfrontcannon_1994_0_0[1];
static Direction direction_bosspantherfrontcannon_1994_0_0 = {0, 50, 50, 0, 1, images_bosspantherfrontcannon_1994_0_0, 1};
static Image* images_bosspantherfrontcannon_1994_0_1[1];
static Direction direction_bosspantherfrontcannon_1994_0_1 = {1, 50, 50, 0, 1, images_bosspantherfrontcannon_1994_0_1, 1};
static Animation anim_bosspantherfrontcannon_1994_0 = {&direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_1, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0, &direction_bosspantherfrontcannon_1994_0_0};
static Animation * anim_array_bosspantherfrontcannon_1994[1] = {&anim_bosspantherfrontcannon_1994_0};
static Animations anim_bosspantherfrontcannon_1994 = {1, &anim_array_bosspantherfrontcannon_1994[0]};
static bool anim_bosspantherfrontcannon_1994_initialized;
class BossPantherFrontCannon_1994 : public Active
{
public:
    BossPantherFrontCannon_1994(int x, int y) : Active(x, y, BossPantherFrontCannon_1994_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherFrontCannon", 23);
#endif
        this->animations = &anim_bosspantherfrontcannon_1994;
        if (!anim_bosspantherfrontcannon_1994_initialized) {
            anim_bosspantherfrontcannon_1994_initialized = true;
            images_bosspantherfrontcannon_1994_0_0[0] = get_internal_image(11363);
            images_bosspantherfrontcannon_1994_0_1[0] = get_internal_image(11367);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 56);
        alterables->values.set(2, 48);
        alterables->values.set(3, -1);
        alterables->values.set(4, 30);
    }
};
FrameObject * create_bosspantherfrontcannon_1994(int x, int y)
{
    return new (Active::pool.create()) BossPantherFrontCannon_1994(x, y);
}
static Image* images_bosspantherhipf_1995_0_0[1];
static Direction direction_bosspantherhipf_1995_0_0 = {0, 50, 50, 0, 1, images_bosspantherhipf_1995_0_0, 1};
static Image* images_bosspantherhipf_1995_0_1[1];
static Direction direction_bosspantherhipf_1995_0_1 = {1, 50, 50, 0, 1, images_bosspantherhipf_1995_0_1, 1};
static Image* images_bosspantherhipf_1995_0_8[1];
static Direction direction_bosspantherhipf_1995_0_8 = {8, 50, 50, 0, 1, images_bosspantherhipf_1995_0_8, 1};
static Animation anim_bosspantherhipf_1995_0 = {&direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_1, &direction_bosspantherhipf_1995_0_1, &direction_bosspantherhipf_1995_0_1, &direction_bosspantherhipf_1995_0_1, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, &direction_bosspantherhipf_1995_0_8, NULL, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0, &direction_bosspantherhipf_1995_0_0};
static Animation * anim_array_bosspantherhipf_1995[1] = {&anim_bosspantherhipf_1995_0};
static Animations anim_bosspantherhipf_1995 = {1, &anim_array_bosspantherhipf_1995[0]};
static bool anim_bosspantherhipf_1995_initialized;
class BossPantherHipF_1995 : public Active
{
public:
    BossPantherHipF_1995(int x, int y) : Active(x, y, BossPantherHipF_1995_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherHipF", 16);
#endif
        this->animations = &anim_bosspantherhipf_1995;
        if (!anim_bosspantherhipf_1995_initialized) {
            anim_bosspantherhipf_1995_initialized = true;
            images_bosspantherhipf_1995_0_0[0] = get_internal_image(11345);
            images_bosspantherhipf_1995_0_1[0] = get_internal_image(11344);
            images_bosspantherhipf_1995_0_8[0] = get_internal_image(8889);
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
FrameObject * create_bosspantherhipf_1995(int x, int y)
{
    return new (Active::pool.create()) BossPantherHipF_1995(x, y);
}
static Image* images_bosspantherkneef_1996_0_0[1];
static Direction direction_bosspantherkneef_1996_0_0 = {0, 50, 50, 0, 1, images_bosspantherkneef_1996_0_0, 1};
static Image* images_bosspantherkneef_1996_0_1[1];
static Direction direction_bosspantherkneef_1996_0_1 = {1, 50, 50, 0, 1, images_bosspantherkneef_1996_0_1, 1};
static Image* images_bosspantherkneef_1996_0_8[1];
static Direction direction_bosspantherkneef_1996_0_8 = {8, 50, 50, 0, 1, images_bosspantherkneef_1996_0_8, 1};
static Animation anim_bosspantherkneef_1996_0 = {&direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_1, &direction_bosspantherkneef_1996_0_1, &direction_bosspantherkneef_1996_0_1, &direction_bosspantherkneef_1996_0_1, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, &direction_bosspantherkneef_1996_0_8, NULL, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0, &direction_bosspantherkneef_1996_0_0};
static Animation * anim_array_bosspantherkneef_1996[1] = {&anim_bosspantherkneef_1996_0};
static Animations anim_bosspantherkneef_1996 = {1, &anim_array_bosspantherkneef_1996[0]};
static bool anim_bosspantherkneef_1996_initialized;
class BossPantherKneeF_1996 : public Active
{
public:
    BossPantherKneeF_1996(int x, int y) : Active(x, y, BossPantherKneeF_1996_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherKneeF", 17);
#endif
        this->animations = &anim_bosspantherkneef_1996;
        if (!anim_bosspantherkneef_1996_initialized) {
            anim_bosspantherkneef_1996_initialized = true;
            images_bosspantherkneef_1996_0_0[0] = get_internal_image(11346);
            images_bosspantherkneef_1996_0_1[0] = get_internal_image(11348);
            images_bosspantherkneef_1996_0_8[0] = get_internal_image(8893);
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
FrameObject * create_bosspantherkneef_1996(int x, int y)
{
    return new (Active::pool.create()) BossPantherKneeF_1996(x, y);
}
static Image* images_bosspantherlegfl_1997_0_0[1];
static Direction direction_bosspantherlegfl_1997_0_0 = {0, 50, 50, 0, 1, images_bosspantherlegfl_1997_0_0, 1};
static Image* images_bosspantherlegfl_1997_0_1[1];
static Direction direction_bosspantherlegfl_1997_0_1 = {1, 50, 50, 0, 1, images_bosspantherlegfl_1997_0_1, 1};
static Image* images_bosspantherlegfl_1997_0_8[1];
static Direction direction_bosspantherlegfl_1997_0_8 = {8, 50, 50, 0, 1, images_bosspantherlegfl_1997_0_8, 1};
static Animation anim_bosspantherlegfl_1997_0 = {&direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_1, &direction_bosspantherlegfl_1997_0_1, &direction_bosspantherlegfl_1997_0_1, &direction_bosspantherlegfl_1997_0_1, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, &direction_bosspantherlegfl_1997_0_8, NULL, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0, &direction_bosspantherlegfl_1997_0_0};
static Animation * anim_array_bosspantherlegfl_1997[1] = {&anim_bosspantherlegfl_1997_0};
static Animations anim_bosspantherlegfl_1997 = {1, &anim_array_bosspantherlegfl_1997[0]};
static bool anim_bosspantherlegfl_1997_initialized;
class BossPantherLegFL_1997 : public Active
{
public:
    BossPantherLegFL_1997(int x, int y) : Active(x, y, BossPantherLegFL_1997_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherLegFL", 17);
#endif
        this->animations = &anim_bosspantherlegfl_1997;
        if (!anim_bosspantherlegfl_1997_initialized) {
            anim_bosspantherlegfl_1997_initialized = true;
            images_bosspantherlegfl_1997_0_0[0] = get_internal_image(11349);
            images_bosspantherlegfl_1997_0_1[0] = get_internal_image(11350);
            images_bosspantherlegfl_1997_0_8[0] = get_internal_image(8895);
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
FrameObject * create_bosspantherlegfl_1997(int x, int y)
{
    return new (Active::pool.create()) BossPantherLegFL_1997(x, y);
}
static Image* images_bosspanthershoulderf_1998_0_0[1];
static Direction direction_bosspanthershoulderf_1998_0_0 = {0, 50, 50, 0, 1, images_bosspanthershoulderf_1998_0_0, 1};
static Image* images_bosspanthershoulderf_1998_0_1[1];
static Direction direction_bosspanthershoulderf_1998_0_1 = {1, 50, 50, 0, 1, images_bosspanthershoulderf_1998_0_1, 1};
static Image* images_bosspanthershoulderf_1998_0_8[1];
static Direction direction_bosspanthershoulderf_1998_0_8 = {8, 50, 50, 0, 1, images_bosspanthershoulderf_1998_0_8, 1};
static Animation anim_bosspanthershoulderf_1998_0 = {&direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_1, &direction_bosspanthershoulderf_1998_0_1, &direction_bosspanthershoulderf_1998_0_1, &direction_bosspanthershoulderf_1998_0_1, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, &direction_bosspanthershoulderf_1998_0_8, NULL, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0, &direction_bosspanthershoulderf_1998_0_0};
static Animation * anim_array_bosspanthershoulderf_1998[1] = {&anim_bosspanthershoulderf_1998_0};
static Animations anim_bosspanthershoulderf_1998 = {1, &anim_array_bosspanthershoulderf_1998[0]};
static bool anim_bosspanthershoulderf_1998_initialized;
class BossPantherShoulderF_1998 : public Active
{
public:
    BossPantherShoulderF_1998(int x, int y) : Active(x, y, BossPantherShoulderF_1998_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherShoulderF", 21);
#endif
        this->animations = &anim_bosspanthershoulderf_1998;
        if (!anim_bosspanthershoulderf_1998_initialized) {
            anim_bosspanthershoulderf_1998_initialized = true;
            images_bosspanthershoulderf_1998_0_0[0] = get_internal_image(11330);
            images_bosspanthershoulderf_1998_0_1[0] = get_internal_image(11336);
            images_bosspanthershoulderf_1998_0_8[0] = get_internal_image(8886);
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
FrameObject * create_bosspanthershoulderf_1998(int x, int y)
{
    return new (Active::pool.create()) BossPantherShoulderF_1998(x, y);
}
static Image* images_bosspanthershoulderf2_1999_0_0[1];
static Direction direction_bosspanthershoulderf2_1999_0_0 = {0, 50, 50, 0, 1, images_bosspanthershoulderf2_1999_0_0, 1};
static Image* images_bosspanthershoulderf2_1999_0_1[1];
static Direction direction_bosspanthershoulderf2_1999_0_1 = {1, 50, 50, 0, 1, images_bosspanthershoulderf2_1999_0_1, 1};
static Animation anim_bosspanthershoulderf2_1999_0 = {&direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_1, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0, &direction_bosspanthershoulderf2_1999_0_0};
static Animation * anim_array_bosspanthershoulderf2_1999[1] = {&anim_bosspanthershoulderf2_1999_0};
static Animations anim_bosspanthershoulderf2_1999 = {1, &anim_array_bosspanthershoulderf2_1999[0]};
static bool anim_bosspanthershoulderf2_1999_initialized;
class BossPantherShoulderF2_1999 : public Active
{
public:
    BossPantherShoulderF2_1999(int x, int y) : Active(x, y, BossPantherShoulderF2_1999_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherShoulderF 2", 23);
#endif
        this->animations = &anim_bosspanthershoulderf2_1999;
        if (!anim_bosspanthershoulderf2_1999_initialized) {
            anim_bosspanthershoulderf2_1999_initialized = true;
            images_bosspanthershoulderf2_1999_0_0[0] = get_internal_image(11337);
            images_bosspanthershoulderf2_1999_0_1[0] = get_internal_image(11338);
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
FrameObject * create_bosspanthershoulderf2_1999(int x, int y)
{
    return new (Active::pool.create()) BossPantherShoulderF2_1999(x, y);
}
static Image* images_bosspantherfootfr_2000_0_0[1];
static Direction direction_bosspantherfootfr_2000_0_0 = {0, 50, 50, 0, 1, images_bosspantherfootfr_2000_0_0, 1};
static Image* images_bosspantherfootfr_2000_0_1[1];
static Direction direction_bosspantherfootfr_2000_0_1 = {1, 50, 50, 0, 1, images_bosspantherfootfr_2000_0_1, 1};
static Animation anim_bosspantherfootfr_2000_0 = {&direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_1, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0, &direction_bosspantherfootfr_2000_0_0};
static Image* images_bosspantherfootfr_2000_7_0[11];
static Direction direction_bosspantherfootfr_2000_7_0 = {0, 100, 100, 10, -1, images_bosspantherfootfr_2000_7_0, 11};
static Animation anim_bosspantherfootfr_2000_7 = {&direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, NULL, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0, &direction_bosspantherfootfr_2000_7_0};
static Image* images_bosspantherfootfr_2000_8_0[11];
static Direction direction_bosspantherfootfr_2000_8_0 = {0, 100, 100, 10, 1, images_bosspantherfootfr_2000_8_0, 11};
static Animation anim_bosspantherfootfr_2000_8 = {&direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, NULL, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0, &direction_bosspantherfootfr_2000_8_0};
static Animation * anim_array_bosspantherfootfr_2000[9] = {&anim_bosspantherfootfr_2000_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_bosspantherfootfr_2000_7, &anim_bosspantherfootfr_2000_8};
static Animations anim_bosspantherfootfr_2000 = {9, &anim_array_bosspantherfootfr_2000[0]};
static bool anim_bosspantherfootfr_2000_initialized;
class BossPantherFootFR_2000 : public Active
{
public:
    BossPantherFootFR_2000(int x, int y) : Active(x, y, BossPantherFootFR_2000_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherFootFR", 18);
#endif
        this->animations = &anim_bosspantherfootfr_2000;
        if (!anim_bosspantherfootfr_2000_initialized) {
            anim_bosspantherfootfr_2000_initialized = true;
            images_bosspantherfootfr_2000_0_0[0] = get_internal_image(11366);
            images_bosspantherfootfr_2000_0_1[0] = get_internal_image(11369);
            images_bosspantherfootfr_2000_7_0[0] = get_internal_image(11368);
            images_bosspantherfootfr_2000_7_0[1] = get_internal_image(11370);
            images_bosspantherfootfr_2000_7_0[2] = get_internal_image(11371);
            images_bosspantherfootfr_2000_7_0[3] = get_internal_image(11372);
            images_bosspantherfootfr_2000_7_0[4] = get_internal_image(606);
            images_bosspantherfootfr_2000_7_0[5] = get_internal_image(647);
            images_bosspantherfootfr_2000_7_0[6] = get_internal_image(988);
            images_bosspantherfootfr_2000_7_0[7] = get_internal_image(11341);
            images_bosspantherfootfr_2000_7_0[8] = get_internal_image(11342);
            images_bosspantherfootfr_2000_7_0[9] = get_internal_image(11343);
            images_bosspantherfootfr_2000_7_0[10] = get_internal_image(11339);
            images_bosspantherfootfr_2000_8_0[0] = get_internal_image(11339);
            images_bosspantherfootfr_2000_8_0[1] = get_internal_image(11343);
            images_bosspantherfootfr_2000_8_0[2] = get_internal_image(11342);
            images_bosspantherfootfr_2000_8_0[3] = get_internal_image(11341);
            images_bosspantherfootfr_2000_8_0[4] = get_internal_image(988);
            images_bosspantherfootfr_2000_8_0[5] = get_internal_image(647);
            images_bosspantherfootfr_2000_8_0[6] = get_internal_image(606);
            images_bosspantherfootfr_2000_8_0[7] = get_internal_image(11372);
            images_bosspantherfootfr_2000_8_0[8] = get_internal_image(11371);
            images_bosspantherfootfr_2000_8_0[9] = get_internal_image(11370);
            images_bosspantherfootfr_2000_8_0[10] = get_internal_image(11368);
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
FrameObject * create_bosspantherfootfr_2000(int x, int y)
{
    return new (Active::pool.create()) BossPantherFootFR_2000(x, y);
}
static Image* images_bosspantherlegfr_2001_0_0[1];
static Direction direction_bosspantherlegfr_2001_0_0 = {0, 50, 50, 0, 1, images_bosspantherlegfr_2001_0_0, 1};
static Image* images_bosspantherlegfr_2001_0_1[1];
static Direction direction_bosspantherlegfr_2001_0_1 = {1, 50, 50, 0, 1, images_bosspantherlegfr_2001_0_1, 1};
static Image* images_bosspantherlegfr_2001_0_8[1];
static Direction direction_bosspantherlegfr_2001_0_8 = {8, 50, 50, 0, 1, images_bosspantherlegfr_2001_0_8, 1};
static Animation anim_bosspantherlegfr_2001_0 = {&direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_1, &direction_bosspantherlegfr_2001_0_1, &direction_bosspantherlegfr_2001_0_1, &direction_bosspantherlegfr_2001_0_1, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, &direction_bosspantherlegfr_2001_0_8, NULL, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0, &direction_bosspantherlegfr_2001_0_0};
static Animation * anim_array_bosspantherlegfr_2001[1] = {&anim_bosspantherlegfr_2001_0};
static Animations anim_bosspantherlegfr_2001 = {1, &anim_array_bosspantherlegfr_2001[0]};
static bool anim_bosspantherlegfr_2001_initialized;
class BossPantherLegFR_2001 : public Active
{
public:
    BossPantherLegFR_2001(int x, int y) : Active(x, y, BossPantherLegFR_2001_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherLegFR", 17);
#endif
        this->animations = &anim_bosspantherlegfr_2001;
        if (!anim_bosspantherlegfr_2001_initialized) {
            anim_bosspantherlegfr_2001_initialized = true;
            images_bosspantherlegfr_2001_0_0[0] = get_internal_image(11334);
            images_bosspantherlegfr_2001_0_1[0] = get_internal_image(11333);
            images_bosspantherlegfr_2001_0_8[0] = get_internal_image(8891);
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
FrameObject * create_bosspantherlegfr_2001(int x, int y)
{
    return new (Active::pool.create()) BossPantherLegFR_2001(x, y);
}
static Image* images_bosspanthertail_2002_0_0[1];
static Direction direction_bosspanthertail_2002_0_0 = {0, 50, 50, 0, 1, images_bosspanthertail_2002_0_0, 1};
static Image* images_bosspanthertail_2002_0_1[1];
static Direction direction_bosspanthertail_2002_0_1 = {1, 50, 50, 0, 1, images_bosspanthertail_2002_0_1, 1};
static Animation anim_bosspanthertail_2002_0 = {&direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_1, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0, &direction_bosspanthertail_2002_0_0};
static Animation * anim_array_bosspanthertail_2002[1] = {&anim_bosspanthertail_2002_0};
static Animations anim_bosspanthertail_2002 = {1, &anim_array_bosspanthertail_2002[0]};
static bool anim_bosspanthertail_2002_initialized;
class BossPantherTail_2002 : public Active
{
public:
    BossPantherTail_2002(int x, int y) : Active(x, y, BossPantherTail_2002_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherTail", 16);
#endif
        this->animations = &anim_bosspanthertail_2002;
        if (!anim_bosspanthertail_2002_initialized) {
            anim_bosspanthertail_2002_initialized = true;
            images_bosspanthertail_2002_0_0[0] = get_internal_image(11335);
            images_bosspanthertail_2002_0_1[0] = get_internal_image(11340);
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
FrameObject * create_bosspanthertail_2002(int x, int y)
{
    return new (Active::pool.create()) BossPantherTail_2002(x, y);
}
static Image* images_bosspanthervalues_2003_0_0[1];
static Direction direction_bosspanthervalues_2003_0_0 = {0, 50, 50, 0, 1, images_bosspanthervalues_2003_0_0, 1};
static Animation anim_bosspanthervalues_2003_0 = {&direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, NULL, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0, &direction_bosspanthervalues_2003_0_0};
static Animation * anim_array_bosspanthervalues_2003[1] = {&anim_bosspanthervalues_2003_0};
static Animations anim_bosspanthervalues_2003 = {1, &anim_array_bosspanthervalues_2003[0]};
static bool anim_bosspanthervalues_2003_initialized;
class BossPantherValues_2003 : public Active
{
public:
    BossPantherValues_2003(int x, int y) : Active(x, y, BossPantherValues_2003_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Boss_PantherValues", 18);
#endif
        this->animations = &anim_bosspanthervalues_2003;
        if (!anim_bosspanthervalues_2003_initialized) {
            anim_bosspanthervalues_2003_initialized = true;
            images_bosspanthervalues_2003_0_0[0] = get_internal_image(371);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 20);
        alterables->values.set(4, -10);
    }
};
FrameObject * create_bosspanthervalues_2003(int x, int y)
{
    return new (Active::pool.create()) BossPantherValues_2003(x, y);
}
class Backdrop_2004 : public Backdrop
{
public:
    Backdrop_2004(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(8396);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_2004(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_2004(x, y);
}
class QuickBackdrop_2005 : public QuickBackdrop
{
public:
    QuickBackdrop_2005(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 3328;
        height = 288;
        image = get_internal_image(1289);
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_quickbackdrop_2005(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_2005(x, y);
}
class GimmickElevatorPoleFlat_2006 : public Backdrop
{
public:
    GimmickElevatorPoleFlat_2006(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_ElevatorPole_Flat", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11614);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickelevatorpoleflat_2006(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickElevatorPoleFlat_2006(x, y);
}
class MallFloor10_2007 : public Backdrop
{
public:
    MallFloor10_2007(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 10", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11519);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfloor10_2007(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor10_2007(x, y);
}
class GimmickElevatorPoleBend_2008 : public Backdrop
{
public:
    GimmickElevatorPoleBend_2008(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Gimmick_ElevatorPole_Bend", 25);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11610);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_gimmickelevatorpolebend_2008(int x, int y)
{
    return new (Backdrop::pool.create()) GimmickElevatorPoleBend_2008(x, y);
}
class MallFloor13_2009 : public Backdrop
{
public:
    MallFloor13_2009(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 13", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11521);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_mallfloor13_2009(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor13_2009(x, y);
}
class MallFloor11_2010 : public Backdrop
{
public:
    MallFloor11_2010(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 11", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11441);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_mallfloor11_2010(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor11_2010(x, y);
}
class MallFloor12_2011 : public Backdrop
{
public:
    MallFloor12_2011(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("MallFloor 12", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(11523);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_mallfloor12_2011(int x, int y)
{
    return new (Backdrop::pool.create()) MallFloor12_2011(x, y);
}
