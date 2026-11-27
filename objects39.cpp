#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_customtile16_3814_0_0[1];
static Direction direction_customtile16_3814_0_0 = {0, 50, 50, 0, 1, images_customtile16_3814_0_0, 1};
static Animation anim_customtile16_3814_0 = {&direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, NULL, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0, &direction_customtile16_3814_0_0};
static Animation * anim_array_customtile16_3814[1] = {&anim_customtile16_3814_0};
static Animations anim_customtile16_3814 = {1, &anim_array_customtile16_3814[0]};
static bool anim_customtile16_3814_initialized;
class CustomTile16_3814 : public Active
{
public:
    CustomTile16_3814(int x, int y) : Active(x, y, CustomTile16_3814_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile16", 12);
#endif
        this->animations = &anim_customtile16_3814;
        if (!anim_customtile16_3814_initialized) {
            anim_customtile16_3814_initialized = true;
            images_customtile16_3814_0_0[0] = get_internal_image(1955);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 16);
    }
};
FrameObject * create_customtile16_3814(int x, int y)
{
    return new (Active::pool.create()) CustomTile16_3814(x, y);
}
static Image* images_customtile17_3815_0_0[1];
static Direction direction_customtile17_3815_0_0 = {0, 50, 50, 0, 1, images_customtile17_3815_0_0, 1};
static Animation anim_customtile17_3815_0 = {&direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, NULL, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0, &direction_customtile17_3815_0_0};
static Animation * anim_array_customtile17_3815[1] = {&anim_customtile17_3815_0};
static Animations anim_customtile17_3815 = {1, &anim_array_customtile17_3815[0]};
static bool anim_customtile17_3815_initialized;
class CustomTile17_3815 : public Active
{
public:
    CustomTile17_3815(int x, int y) : Active(x, y, CustomTile17_3815_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile17", 12);
#endif
        this->animations = &anim_customtile17_3815;
        if (!anim_customtile17_3815_initialized) {
            anim_customtile17_3815_initialized = true;
            images_customtile17_3815_0_0[0] = get_internal_image(1985);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 17);
    }
};
FrameObject * create_customtile17_3815(int x, int y)
{
    return new (Active::pool.create()) CustomTile17_3815(x, y);
}
static Image* images_customtile18_3816_0_0[1];
static Direction direction_customtile18_3816_0_0 = {0, 50, 50, 0, 1, images_customtile18_3816_0_0, 1};
static Animation anim_customtile18_3816_0 = {&direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, NULL, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0, &direction_customtile18_3816_0_0};
static Animation * anim_array_customtile18_3816[1] = {&anim_customtile18_3816_0};
static Animations anim_customtile18_3816 = {1, &anim_array_customtile18_3816[0]};
static bool anim_customtile18_3816_initialized;
class CustomTile18_3816 : public Active
{
public:
    CustomTile18_3816(int x, int y) : Active(x, y, CustomTile18_3816_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile18", 12);
#endif
        this->animations = &anim_customtile18_3816;
        if (!anim_customtile18_3816_initialized) {
            anim_customtile18_3816_initialized = true;
            images_customtile18_3816_0_0[0] = get_internal_image(2826);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 18);
    }
};
FrameObject * create_customtile18_3816(int x, int y)
{
    return new (Active::pool.create()) CustomTile18_3816(x, y);
}
static Image* images_customtile19_3817_0_0[1];
static Direction direction_customtile19_3817_0_0 = {0, 50, 50, 0, 1, images_customtile19_3817_0_0, 1};
static Animation anim_customtile19_3817_0 = {&direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, NULL, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0, &direction_customtile19_3817_0_0};
static Animation * anim_array_customtile19_3817[1] = {&anim_customtile19_3817_0};
static Animations anim_customtile19_3817 = {1, &anim_array_customtile19_3817[0]};
static bool anim_customtile19_3817_initialized;
class CustomTile19_3817 : public Active
{
public:
    CustomTile19_3817(int x, int y) : Active(x, y, CustomTile19_3817_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile19", 12);
#endif
        this->animations = &anim_customtile19_3817;
        if (!anim_customtile19_3817_initialized) {
            anim_customtile19_3817_initialized = true;
            images_customtile19_3817_0_0[0] = get_internal_image(2853);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 19);
    }
};
FrameObject * create_customtile19_3817(int x, int y)
{
    return new (Active::pool.create()) CustomTile19_3817(x, y);
}
static Image* images_customtile20_3818_0_0[1];
static Direction direction_customtile20_3818_0_0 = {0, 50, 50, 0, 1, images_customtile20_3818_0_0, 1};
static Animation anim_customtile20_3818_0 = {&direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, NULL, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0, &direction_customtile20_3818_0_0};
static Animation * anim_array_customtile20_3818[1] = {&anim_customtile20_3818_0};
static Animations anim_customtile20_3818 = {1, &anim_array_customtile20_3818[0]};
static bool anim_customtile20_3818_initialized;
class CustomTile20_3818 : public Active
{
public:
    CustomTile20_3818(int x, int y) : Active(x, y, CustomTile20_3818_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile20", 12);
#endif
        this->animations = &anim_customtile20_3818;
        if (!anim_customtile20_3818_initialized) {
            anim_customtile20_3818_initialized = true;
            images_customtile20_3818_0_0[0] = get_internal_image(3636);
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
FrameObject * create_customtile20_3818(int x, int y)
{
    return new (Active::pool.create()) CustomTile20_3818(x, y);
}
static Image* images_customtile21_3819_0_0[1];
static Direction direction_customtile21_3819_0_0 = {0, 50, 50, 0, 1, images_customtile21_3819_0_0, 1};
static Animation anim_customtile21_3819_0 = {&direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, NULL, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0, &direction_customtile21_3819_0_0};
static Animation * anim_array_customtile21_3819[1] = {&anim_customtile21_3819_0};
static Animations anim_customtile21_3819 = {1, &anim_array_customtile21_3819[0]};
static bool anim_customtile21_3819_initialized;
class CustomTile21_3819 : public Active
{
public:
    CustomTile21_3819(int x, int y) : Active(x, y, CustomTile21_3819_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile21", 12);
#endif
        this->animations = &anim_customtile21_3819;
        if (!anim_customtile21_3819_initialized) {
            anim_customtile21_3819_initialized = true;
            images_customtile21_3819_0_0[0] = get_internal_image(3677);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 21);
    }
};
FrameObject * create_customtile21_3819(int x, int y)
{
    return new (Active::pool.create()) CustomTile21_3819(x, y);
}
static Image* images_customtile22_3820_0_0[1];
static Direction direction_customtile22_3820_0_0 = {0, 50, 50, 0, 1, images_customtile22_3820_0_0, 1};
static Animation anim_customtile22_3820_0 = {&direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, NULL, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0, &direction_customtile22_3820_0_0};
static Animation * anim_array_customtile22_3820[1] = {&anim_customtile22_3820_0};
static Animations anim_customtile22_3820 = {1, &anim_array_customtile22_3820[0]};
static bool anim_customtile22_3820_initialized;
class CustomTile22_3820 : public Active
{
public:
    CustomTile22_3820(int x, int y) : Active(x, y, CustomTile22_3820_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile22", 12);
#endif
        this->animations = &anim_customtile22_3820;
        if (!anim_customtile22_3820_initialized) {
            anim_customtile22_3820_initialized = true;
            images_customtile22_3820_0_0[0] = get_internal_image(3839);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 22);
    }
};
FrameObject * create_customtile22_3820(int x, int y)
{
    return new (Active::pool.create()) CustomTile22_3820(x, y);
}
static Image* images_customtile23_3821_0_0[1];
static Direction direction_customtile23_3821_0_0 = {0, 50, 50, 0, 1, images_customtile23_3821_0_0, 1};
static Animation anim_customtile23_3821_0 = {&direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, NULL, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0, &direction_customtile23_3821_0_0};
static Animation * anim_array_customtile23_3821[1] = {&anim_customtile23_3821_0};
static Animations anim_customtile23_3821 = {1, &anim_array_customtile23_3821[0]};
static bool anim_customtile23_3821_initialized;
class CustomTile23_3821 : public Active
{
public:
    CustomTile23_3821(int x, int y) : Active(x, y, CustomTile23_3821_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile23", 12);
#endif
        this->animations = &anim_customtile23_3821;
        if (!anim_customtile23_3821_initialized) {
            anim_customtile23_3821_initialized = true;
            images_customtile23_3821_0_0[0] = get_internal_image(3679);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 23);
    }
};
FrameObject * create_customtile23_3821(int x, int y)
{
    return new (Active::pool.create()) CustomTile23_3821(x, y);
}
static Image* images_customtile24_3822_0_0[1];
static Direction direction_customtile24_3822_0_0 = {0, 50, 50, 0, 1, images_customtile24_3822_0_0, 1};
static Animation anim_customtile24_3822_0 = {&direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, NULL, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0, &direction_customtile24_3822_0_0};
static Animation * anim_array_customtile24_3822[1] = {&anim_customtile24_3822_0};
static Animations anim_customtile24_3822 = {1, &anim_array_customtile24_3822[0]};
static bool anim_customtile24_3822_initialized;
class CustomTile24_3822 : public Active
{
public:
    CustomTile24_3822(int x, int y) : Active(x, y, CustomTile24_3822_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile24", 12);
#endif
        this->animations = &anim_customtile24_3822;
        if (!anim_customtile24_3822_initialized) {
            anim_customtile24_3822_initialized = true;
            images_customtile24_3822_0_0[0] = get_internal_image(4368);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 24);
    }
};
FrameObject * create_customtile24_3822(int x, int y)
{
    return new (Active::pool.create()) CustomTile24_3822(x, y);
}
static Image* images_customtile25_3823_0_0[1];
static Direction direction_customtile25_3823_0_0 = {0, 50, 50, 0, 1, images_customtile25_3823_0_0, 1};
static Animation anim_customtile25_3823_0 = {&direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, NULL, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0, &direction_customtile25_3823_0_0};
static Animation * anim_array_customtile25_3823[1] = {&anim_customtile25_3823_0};
static Animations anim_customtile25_3823 = {1, &anim_array_customtile25_3823[0]};
static bool anim_customtile25_3823_initialized;
class CustomTile25_3823 : public Active
{
public:
    CustomTile25_3823(int x, int y) : Active(x, y, CustomTile25_3823_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile25", 12);
#endif
        this->animations = &anim_customtile25_3823;
        if (!anim_customtile25_3823_initialized) {
            anim_customtile25_3823_initialized = true;
            images_customtile25_3823_0_0[0] = get_internal_image(4369);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 25);
    }
};
FrameObject * create_customtile25_3823(int x, int y)
{
    return new (Active::pool.create()) CustomTile25_3823(x, y);
}
static Image* images_customtile26_3824_0_0[1];
static Direction direction_customtile26_3824_0_0 = {0, 50, 50, 0, 1, images_customtile26_3824_0_0, 1};
static Animation anim_customtile26_3824_0 = {&direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, NULL, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0, &direction_customtile26_3824_0_0};
static Animation * anim_array_customtile26_3824[1] = {&anim_customtile26_3824_0};
static Animations anim_customtile26_3824 = {1, &anim_array_customtile26_3824[0]};
static bool anim_customtile26_3824_initialized;
class CustomTile26_3824 : public Active
{
public:
    CustomTile26_3824(int x, int y) : Active(x, y, CustomTile26_3824_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile26", 12);
#endif
        this->animations = &anim_customtile26_3824;
        if (!anim_customtile26_3824_initialized) {
            anim_customtile26_3824_initialized = true;
            images_customtile26_3824_0_0[0] = get_internal_image(4436);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 26);
    }
};
FrameObject * create_customtile26_3824(int x, int y)
{
    return new (Active::pool.create()) CustomTile26_3824(x, y);
}
static Image* images_customtile27_3825_0_0[1];
static Direction direction_customtile27_3825_0_0 = {0, 50, 50, 0, 1, images_customtile27_3825_0_0, 1};
static Animation anim_customtile27_3825_0 = {&direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, NULL, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0, &direction_customtile27_3825_0_0};
static Animation * anim_array_customtile27_3825[1] = {&anim_customtile27_3825_0};
static Animations anim_customtile27_3825 = {1, &anim_array_customtile27_3825[0]};
static bool anim_customtile27_3825_initialized;
class CustomTile27_3825 : public Active
{
public:
    CustomTile27_3825(int x, int y) : Active(x, y, CustomTile27_3825_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CustomTile27", 12);
#endif
        this->animations = &anim_customtile27_3825;
        if (!anim_customtile27_3825_initialized) {
            anim_customtile27_3825_initialized = true;
            images_customtile27_3825_0_0[0] = get_internal_image(4434);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 27);
    }
};
FrameObject * create_customtile27_3825(int x, int y)
{
    return new (Active::pool.create()) CustomTile27_3825(x, y);
}
static Image* images_customtile28_3826_0_0[1];
static Direction direction_customtile28_3826_0_0 = {0, 50, 50, 0, 1, images_customtile28_3826_0_0, 1};
static Animation anim_customtile28_3826_0 = {&direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, NULL, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0, &direction_customtile28_3826_0_0};
static Animation * anim_array_customtile28_3826[1] = {&anim_customtile28_3826_0};
static Animations anim_customtile28_3826 = {1, &anim_array_customtile28_3826[0]};
static bool anim_customtile28_3826_initialized;
class CustomTile28_3826 : public Active
{
public:
    CustomTile28_3826(int x, int y) : Active(x, y, CustomTile28_3826_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("CustomTile28", 12);
#endif
        this->animations = &anim_customtile28_3826;
        if (!anim_customtile28_3826_initialized) {
            anim_customtile28_3826_initialized = true;
            images_customtile28_3826_0_0[0] = get_internal_image(1703);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 28);
    }
};
FrameObject * create_customtile28_3826(int x, int y)
{
    return new (Active::pool.create()) CustomTile28_3826(x, y);
}
static Image* images_gimmickhangingidlebar_3827_0_0[1];
static Direction direction_gimmickhangingidlebar_3827_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidlebar_3827_0_0, 1};
static Animation anim_gimmickhangingidlebar_3827_0 = {&direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, NULL, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0, &direction_gimmickhangingidlebar_3827_0_0};
static Animation * anim_array_gimmickhangingidlebar_3827[1] = {&anim_gimmickhangingidlebar_3827_0};
static Animations anim_gimmickhangingidlebar_3827 = {1, &anim_array_gimmickhangingidlebar_3827[0]};
static bool anim_gimmickhangingidlebar_3827_initialized;
class GimmickHangingIdleBar_3827 : public Active
{
public:
    GimmickHangingIdleBar_3827(int x, int y) : Active(x, y, GimmickHangingIdleBar_3827_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Bar", 23);
#endif
        this->animations = &anim_gimmickhangingidlebar_3827;
        if (!anim_gimmickhangingidlebar_3827_initialized) {
            anim_gimmickhangingidlebar_3827_initialized = true;
            images_gimmickhangingidlebar_3827_0_0[0] = get_internal_image(3987);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 123);
    }
};
FrameObject * create_gimmickhangingidlebar_3827(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleBar_3827(x, y);
}
static Image* images_laddermaker_3828_0_0[1];
static Direction direction_laddermaker_3828_0_0 = {0, 50, 50, 0, 1, images_laddermaker_3828_0_0, 1};
static Animation anim_laddermaker_3828_0 = {&direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, NULL, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0, &direction_laddermaker_3828_0_0};
static Animation * anim_array_laddermaker_3828[1] = {&anim_laddermaker_3828_0};
static Animations anim_laddermaker_3828 = {1, &anim_array_laddermaker_3828[0]};
static bool anim_laddermaker_3828_initialized;
class LadderMaker_3828 : public Active
{
public:
    LadderMaker_3828(int x, int y) : Active(x, y, LadderMaker_3828_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Ladder_maker", 12);
#endif
        this->animations = &anim_laddermaker_3828;
        if (!anim_laddermaker_3828_initialized) {
            anim_laddermaker_3828_initialized = true;
            images_laddermaker_3828_0_0[0] = get_internal_image(1707);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 118);
    }
};
FrameObject * create_laddermaker_3828(int x, int y)
{
    return new (Active::pool.create()) LadderMaker_3828(x, y);
}
static Image* images_objecttargetmaker_3829_0_0[1];
static Direction direction_objecttargetmaker_3829_0_0 = {0, 50, 50, 0, 1, images_objecttargetmaker_3829_0_0, 1};
static Animation anim_objecttargetmaker_3829_0 = {&direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, NULL, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0, &direction_objecttargetmaker_3829_0_0};
static Animation * anim_array_objecttargetmaker_3829[1] = {&anim_objecttargetmaker_3829_0};
static Animations anim_objecttargetmaker_3829 = {1, &anim_array_objecttargetmaker_3829[0]};
static bool anim_objecttargetmaker_3829_initialized;
class ObjectTargetMaker_3829 : public Active
{
public:
    ObjectTargetMaker_3829(int x, int y) : Active(x, y, ObjectTargetMaker_3829_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_TargetMaker", 18);
#endif
        this->animations = &anim_objecttargetmaker_3829;
        if (!anim_objecttargetmaker_3829_initialized) {
            anim_objecttargetmaker_3829_initialized = true;
            images_objecttargetmaker_3829_0_0[0] = get_internal_image(4441);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 201);
    }
};
FrameObject * create_objecttargetmaker_3829(int x, int y)
{
    return new (Active::pool.create()) ObjectTargetMaker_3829(x, y);
}
static Image* images_startlocationmaker_3830_0_0[1];
static Direction direction_startlocationmaker_3830_0_0 = {0, 50, 50, 0, 1, images_startlocationmaker_3830_0_0, 1};
static Animation anim_startlocationmaker_3830_0 = {&direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, NULL, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0, &direction_startlocationmaker_3830_0_0};
static Animation * anim_array_startlocationmaker_3830[1] = {&anim_startlocationmaker_3830_0};
static Animations anim_startlocationmaker_3830 = {1, &anim_array_startlocationmaker_3830[0]};
static bool anim_startlocationmaker_3830_initialized;
class StartLocationMaker_3830 : public Active
{
public:
    StartLocationMaker_3830(int x, int y) : Active(x, y, StartLocationMaker_3830_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("StartLocation_Maker", 19);
#endif
        this->animations = &anim_startlocationmaker_3830;
        if (!anim_startlocationmaker_3830_initialized) {
            anim_startlocationmaker_3830_initialized = true;
            images_startlocationmaker_3830_0_0[0] = get_internal_image(1928);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 200);
    }
};
FrameObject * create_startlocationmaker_3830(int x, int y)
{
    return new (Active::pool.create()) StartLocationMaker_3830(x, y);
}
static Image* images_objectmonitormaker_3831_0_0[1];
static Direction direction_objectmonitormaker_3831_0_0 = {0, 50, 50, 0, 1, images_objectmonitormaker_3831_0_0, 1};
static Animation anim_objectmonitormaker_3831_0 = {&direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, NULL, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0, &direction_objectmonitormaker_3831_0_0};
static Animation * anim_array_objectmonitormaker_3831[1] = {&anim_objectmonitormaker_3831_0};
static Animations anim_objectmonitormaker_3831 = {1, &anim_array_objectmonitormaker_3831[0]};
static bool anim_objectmonitormaker_3831_initialized;
class ObjectMonitorMaker_3831 : public Active
{
public:
    ObjectMonitorMaker_3831(int x, int y) : Active(x, y, ObjectMonitorMaker_3831_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_MonitorMaker", 19);
#endif
        this->animations = &anim_objectmonitormaker_3831;
        if (!anim_objectmonitormaker_3831_initialized) {
            anim_objectmonitormaker_3831_initialized = true;
            images_objectmonitormaker_3831_0_0[0] = get_internal_image(4449);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 202);
    }
};
FrameObject * create_objectmonitormaker_3831(int x, int y)
{
    return new (Active::pool.create()) ObjectMonitorMaker_3831(x, y);
}
static Image* images_objectbombmaker_3832_0_0[1];
static Direction direction_objectbombmaker_3832_0_0 = {0, 50, 50, 0, 1, images_objectbombmaker_3832_0_0, 1};
static Animation anim_objectbombmaker_3832_0 = {&direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, NULL, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0, &direction_objectbombmaker_3832_0_0};
static Animation * anim_array_objectbombmaker_3832[1] = {&anim_objectbombmaker_3832_0};
static Animations anim_objectbombmaker_3832 = {1, &anim_array_objectbombmaker_3832[0]};
static bool anim_objectbombmaker_3832_initialized;
class ObjectBombMaker_3832 : public Active
{
public:
    ObjectBombMaker_3832(int x, int y) : Active(x, y, ObjectBombMaker_3832_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_BombMaker", 16);
#endif
        this->animations = &anim_objectbombmaker_3832;
        if (!anim_objectbombmaker_3832_initialized) {
            anim_objectbombmaker_3832_initialized = true;
            images_objectbombmaker_3832_0_0[0] = get_internal_image(4458);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 203);
    }
};
FrameObject * create_objectbombmaker_3832(int x, int y)
{
    return new (Active::pool.create()) ObjectBombMaker_3832(x, y);
}
static Image* images_objecttarget_3833_0_0[10];
static Direction direction_objecttarget_3833_0_0 = {0, 14, 14, 0, -1, images_objecttarget_3833_0_0, 10};
static Animation anim_objecttarget_3833_0 = {&direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, NULL, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0, &direction_objecttarget_3833_0_0};
static Image* images_objecttarget_3833_7_0[7];
static Direction direction_objecttarget_3833_7_0 = {0, 50, 50, 0, -1, images_objecttarget_3833_7_0, 7};
static Animation anim_objecttarget_3833_7 = {&direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, NULL, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0, &direction_objecttarget_3833_7_0};
static Animation * anim_array_objecttarget_3833[8] = {&anim_objecttarget_3833_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objecttarget_3833_7};
static Animations anim_objecttarget_3833 = {8, &anim_array_objecttarget_3833[0]};
static bool anim_objecttarget_3833_initialized;
class ObjectTarget_3833 : public Active
{
public:
    ObjectTarget_3833(int x, int y) : Active(x, y, ObjectTarget_3833_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Object_Target", 13);
#endif
        this->animations = &anim_objecttarget_3833;
        if (!anim_objecttarget_3833_initialized) {
            anim_objecttarget_3833_initialized = true;
            images_objecttarget_3833_0_0[0] = get_internal_image(563);
            images_objecttarget_3833_0_0[1] = get_internal_image(1101);
            images_objecttarget_3833_0_0[2] = get_internal_image(2588);
            images_objecttarget_3833_0_0[3] = get_internal_image(3078);
            images_objecttarget_3833_0_0[4] = get_internal_image(3149);
            images_objecttarget_3833_0_0[5] = get_internal_image(3215);
            images_objecttarget_3833_0_0[6] = get_internal_image(3383);
            images_objecttarget_3833_0_0[7] = get_internal_image(3491);
            images_objecttarget_3833_0_0[8] = get_internal_image(3492);
            images_objecttarget_3833_0_0[9] = get_internal_image(3493);
            images_objecttarget_3833_7_0[0] = get_internal_image(563);
            images_objecttarget_3833_7_0[1] = get_internal_image(3514);
            images_objecttarget_3833_7_0[2] = get_internal_image(3518);
            images_objecttarget_3833_7_0[3] = get_internal_image(3522);
            images_objecttarget_3833_7_0[4] = get_internal_image(3518);
            images_objecttarget_3833_7_0[5] = get_internal_image(3521);
            images_objecttarget_3833_7_0[6] = get_internal_image(3492);
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
FrameObject * create_objecttarget_3833(int x, int y)
{
    return new (Active::pool.create()) ObjectTarget_3833(x, y);
}
static Image* images_gimmickhangingidlesensor_3834_0_0[1];
static Direction direction_gimmickhangingidlesensor_3834_0_0 = {0, 50, 50, 0, 1, images_gimmickhangingidlesensor_3834_0_0, 1};
static Animation anim_gimmickhangingidlesensor_3834_0 = {&direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, NULL, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0, &direction_gimmickhangingidlesensor_3834_0_0};
static Animation * anim_array_gimmickhangingidlesensor_3834[1] = {&anim_gimmickhangingidlesensor_3834_0};
static Animations anim_gimmickhangingidlesensor_3834 = {1, &anim_array_gimmickhangingidlesensor_3834[0]};
static bool anim_gimmickhangingidlesensor_3834_initialized;
class GimmickHangingIdleSensor_3834 : public Active
{
public:
    GimmickHangingIdleSensor_3834(int x, int y) : Active(x, y, GimmickHangingIdleSensor_3834_type)
    {
        // qualifiers: 46
#ifndef NDEBUG
        name = std::string("Gimmick_HangingIdle_Sensor", 26);
#endif
        set_visible(false);
        this->animations = &anim_gimmickhangingidlesensor_3834;
        if (!anim_gimmickhangingidlesensor_3834_initialized) {
            anim_gimmickhangingidlesensor_3834_initialized = true;
            images_gimmickhangingidlesensor_3834_0_0[0] = get_internal_image(38);
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
FrameObject * create_gimmickhangingidlesensor_3834(int x, int y)
{
    return new (Active::pool.create()) GimmickHangingIdleSensor_3834(x, y);
}
static Image* images_objectspiketrap_3835_0_0[1];
static Direction direction_objectspiketrap_3835_0_0 = {0, 25, 25, 0, -1, images_objectspiketrap_3835_0_0, 1};
static Animation anim_objectspiketrap_3835_0 = {&direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, NULL, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0, &direction_objectspiketrap_3835_0_0};
static Animation * anim_array_objectspiketrap_3835[1] = {&anim_objectspiketrap_3835_0};
static Animations anim_objectspiketrap_3835 = {1, &anim_array_objectspiketrap_3835[0]};
static bool anim_objectspiketrap_3835_initialized;
class ObjectSpikeTrap_3835 : public Active
{
public:
    ObjectSpikeTrap_3835(int x, int y) : Active(x, y, ObjectSpikeTrap_3835_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Object_SpikeTrap", 16);
#endif
        set_visible(false);
        this->animations = &anim_objectspiketrap_3835;
        if (!anim_objectspiketrap_3835_initialized) {
            anim_objectspiketrap_3835_initialized = true;
            images_objectspiketrap_3835_0_0[0] = get_internal_image(337);
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
FrameObject * create_objectspiketrap_3835(int x, int y)
{
    return new (Active::pool.create()) ObjectSpikeTrap_3835(x, y);
}
static Image* images_objectspiketrapmask_3836_0_0[9];
static Direction direction_objectspiketrapmask_3836_0_0 = {0, 0, 0, 0, -1, images_objectspiketrapmask_3836_0_0, 9};
static Animation anim_objectspiketrapmask_3836_0 = {&direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, NULL, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0, &direction_objectspiketrapmask_3836_0_0};
static Animation * anim_array_objectspiketrapmask_3836[1] = {&anim_objectspiketrapmask_3836_0};
static Animations anim_objectspiketrapmask_3836 = {1, &anim_array_objectspiketrapmask_3836[0]};
static bool anim_objectspiketrapmask_3836_initialized;
class ObjectSpikeTrapMask_3836 : public Active
{
public:
    ObjectSpikeTrapMask_3836(int x, int y) : Active(x, y, ObjectSpikeTrapMask_3836_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_SpikeTrapMask", 20);
#endif
        this->animations = &anim_objectspiketrapmask_3836;
        if (!anim_objectspiketrapmask_3836_initialized) {
            anim_objectspiketrapmask_3836_initialized = true;
            images_objectspiketrapmask_3836_0_0[0] = get_internal_image(11783);
            images_objectspiketrapmask_3836_0_0[1] = get_internal_image(11784);
            images_objectspiketrapmask_3836_0_0[2] = get_internal_image(11785);
            images_objectspiketrapmask_3836_0_0[3] = get_internal_image(11786);
            images_objectspiketrapmask_3836_0_0[4] = get_internal_image(11787);
            images_objectspiketrapmask_3836_0_0[5] = get_internal_image(11788);
            images_objectspiketrapmask_3836_0_0[6] = get_internal_image(11789);
            images_objectspiketrapmask_3836_0_0[7] = get_internal_image(11790);
            images_objectspiketrapmask_3836_0_0[8] = get_internal_image(11813);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 119);
    }
};
FrameObject * create_objectspiketrapmask_3836(int x, int y)
{
    return new (Active::pool.create()) ObjectSpikeTrapMask_3836(x, y);
}
static Image* images_customtile29_3837_0_0[1];
static Direction direction_customtile29_3837_0_0 = {0, 50, 50, 0, 1, images_customtile29_3837_0_0, 1};
static Animation anim_customtile29_3837_0 = {&direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, NULL, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0, &direction_customtile29_3837_0_0};
static Animation * anim_array_customtile29_3837[1] = {&anim_customtile29_3837_0};
static Animations anim_customtile29_3837 = {1, &anim_array_customtile29_3837[0]};
static bool anim_customtile29_3837_initialized;
class CustomTile29_3837 : public Active
{
public:
    CustomTile29_3837(int x, int y) : Active(x, y, CustomTile29_3837_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("CustomTile29", 12);
#endif
        this->animations = &anim_customtile29_3837;
        if (!anim_customtile29_3837_initialized) {
            anim_customtile29_3837_initialized = true;
            images_customtile29_3837_0_0[0] = get_internal_image(9437);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 29);
    }
};
FrameObject * create_customtile29_3837(int x, int y)
{
    return new (Active::pool.create()) CustomTile29_3837(x, y);
}
static Image* images_objectplatformmaker1_3838_0_0[1];
static Direction direction_objectplatformmaker1_3838_0_0 = {0, 50, 50, 0, 1, images_objectplatformmaker1_3838_0_0, 1};
static Animation anim_objectplatformmaker1_3838_0 = {&direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, NULL, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0, &direction_objectplatformmaker1_3838_0_0};
static Animation * anim_array_objectplatformmaker1_3838[1] = {&anim_objectplatformmaker1_3838_0};
static Animations anim_objectplatformmaker1_3838 = {1, &anim_array_objectplatformmaker1_3838[0]};
static bool anim_objectplatformmaker1_3838_initialized;
class ObjectPlatformMaker1_3838 : public Active
{
public:
    ObjectPlatformMaker1_3838(int x, int y) : Active(x, y, ObjectPlatformMaker1_3838_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_PlatformMaker 1", 22);
#endif
        this->animations = &anim_objectplatformmaker1_3838;
        if (!anim_objectplatformmaker1_3838_initialized) {
            anim_objectplatformmaker1_3838_initialized = true;
            images_objectplatformmaker1_3838_0_0[0] = get_internal_image(1063);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 120);
    }
};
FrameObject * create_objectplatformmaker1_3838(int x, int y)
{
    return new (Active::pool.create()) ObjectPlatformMaker1_3838(x, y);
}
static Image* images_objectplatformmaker2_3839_0_0[1];
static Direction direction_objectplatformmaker2_3839_0_0 = {0, 50, 50, 0, 1, images_objectplatformmaker2_3839_0_0, 1};
static Animation anim_objectplatformmaker2_3839_0 = {&direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, NULL, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0, &direction_objectplatformmaker2_3839_0_0};
static Animation * anim_array_objectplatformmaker2_3839[1] = {&anim_objectplatformmaker2_3839_0};
static Animations anim_objectplatformmaker2_3839 = {1, &anim_array_objectplatformmaker2_3839[0]};
static bool anim_objectplatformmaker2_3839_initialized;
class ObjectPlatformMaker2_3839 : public Active
{
public:
    ObjectPlatformMaker2_3839(int x, int y) : Active(x, y, ObjectPlatformMaker2_3839_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Object_PlatformMaker 2", 22);
#endif
        this->animations = &anim_objectplatformmaker2_3839;
        if (!anim_objectplatformmaker2_3839_initialized) {
            anim_objectplatformmaker2_3839_initialized = true;
            images_objectplatformmaker2_3839_0_0[0] = get_internal_image(996);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 121);
    }
};
FrameObject * create_objectplatformmaker2_3839(int x, int y)
{
    return new (Active::pool.create()) ObjectPlatformMaker2_3839(x, y);
}
static Image* images_levelmovingplatform1_3840_0_0[1];
static Direction direction_levelmovingplatform1_3840_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform1_3840_0_0, 1};
static Animation anim_levelmovingplatform1_3840_0 = {&direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, NULL, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0, &direction_levelmovingplatform1_3840_0_0};
static Animation * anim_array_levelmovingplatform1_3840[1] = {&anim_levelmovingplatform1_3840_0};
static Animations anim_levelmovingplatform1_3840 = {1, &anim_array_levelmovingplatform1_3840[0]};
static bool anim_levelmovingplatform1_3840_initialized;
class LevelMovingPlatform1_3840 : public Active
{
public:
    LevelMovingPlatform1_3840(int x, int y) : Active(x, y, LevelMovingPlatform1_3840_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 1", 22);
#endif
        this->animations = &anim_levelmovingplatform1_3840;
        if (!anim_levelmovingplatform1_3840_initialized) {
            anim_levelmovingplatform1_3840_initialized = true;
            images_levelmovingplatform1_3840_0_0[0] = get_internal_image(1033);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform1_3840(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform1_3840(x, y);
}
static Image* images_levelmovingplatform2_3841_0_0[1];
static Direction direction_levelmovingplatform2_3841_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform2_3841_0_0, 1};
static Animation anim_levelmovingplatform2_3841_0 = {&direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, NULL, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0, &direction_levelmovingplatform2_3841_0_0};
static Animation * anim_array_levelmovingplatform2_3841[1] = {&anim_levelmovingplatform2_3841_0};
static Animations anim_levelmovingplatform2_3841 = {1, &anim_array_levelmovingplatform2_3841[0]};
static bool anim_levelmovingplatform2_3841_initialized;
class LevelMovingPlatform2_3841 : public Active
{
public:
    LevelMovingPlatform2_3841(int x, int y) : Active(x, y, LevelMovingPlatform2_3841_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 2", 22);
#endif
        this->animations = &anim_levelmovingplatform2_3841;
        if (!anim_levelmovingplatform2_3841_initialized) {
            anim_levelmovingplatform2_3841_initialized = true;
            images_levelmovingplatform2_3841_0_0[0] = get_internal_image(1033);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(4, 180);
        alterables->values.set(5, 2);
        alterables->values.set(6, 80);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform2_3841(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform2_3841(x, y);
}
static Image* images_laddertopmaker_3842_0_0[1];
static Direction direction_laddertopmaker_3842_0_0 = {0, 50, 50, 0, 1, images_laddertopmaker_3842_0_0, 1};
static Animation anim_laddertopmaker_3842_0 = {&direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, NULL, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0, &direction_laddertopmaker_3842_0_0};
static Animation * anim_array_laddertopmaker_3842[1] = {&anim_laddertopmaker_3842_0};
static Animations anim_laddertopmaker_3842 = {1, &anim_array_laddertopmaker_3842[0]};
static bool anim_laddertopmaker_3842_initialized;
class LadderTopMaker_3842 : public Active
{
public:
    LadderTopMaker_3842(int x, int y) : Active(x, y, LadderTopMaker_3842_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Ladder_top_maker", 16);
#endif
        this->animations = &anim_laddertopmaker_3842;
        if (!anim_laddertopmaker_3842_initialized) {
            anim_laddertopmaker_3842_initialized = true;
            images_laddertopmaker_3842_0_0[0] = get_internal_image(1706);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 117);
    }
};
FrameObject * create_laddertopmaker_3842(int x, int y)
{
    return new (Active::pool.create()) LadderTopMaker_3842(x, y);
}
static Image* images_gimmickspikechainmaker_3843_0_0[1];
static Direction direction_gimmickspikechainmaker_3843_0_0 = {0, 0, 0, 0, -1, images_gimmickspikechainmaker_3843_0_0, 1};
static Animation anim_gimmickspikechainmaker_3843_0 = {&direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, NULL, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0, &direction_gimmickspikechainmaker_3843_0_0};
static Animation * anim_array_gimmickspikechainmaker_3843[1] = {&anim_gimmickspikechainmaker_3843_0};
static Animations anim_gimmickspikechainmaker_3843 = {1, &anim_array_gimmickspikechainmaker_3843[0]};
static bool anim_gimmickspikechainmaker_3843_initialized;
class GimmickSpikechainMaker_3843 : public Active
{
public:
    GimmickSpikechainMaker_3843(int x, int y) : Active(x, y, GimmickSpikechainMaker_3843_type)
    {
        // qualifiers: 26
#ifndef NDEBUG
        name = std::string("Gimmick_SpikechainMaker", 23);
#endif
        this->animations = &anim_gimmickspikechainmaker_3843;
        if (!anim_gimmickspikechainmaker_3843_initialized) {
            anim_gimmickspikechainmaker_3843_initialized = true;
            images_gimmickspikechainmaker_3843_0_0[0] = get_internal_image(3924);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 122);
    }
};
FrameObject * create_gimmickspikechainmaker_3843(int x, int y)
{
    return new (Active::pool.create()) GimmickSpikechainMaker_3843(x, y);
}
static Image* images_gimmickspikechain1_3844_0_0[1];
static Direction direction_gimmickspikechain1_3844_0_0 = {0, 0, 0, 0, -1, images_gimmickspikechain1_3844_0_0, 1};
static Animation anim_gimmickspikechain1_3844_0 = {&direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, NULL, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0, &direction_gimmickspikechain1_3844_0_0};
static Animation * anim_array_gimmickspikechain1_3844[1] = {&anim_gimmickspikechain1_3844_0};
static Animations anim_gimmickspikechain1_3844 = {1, &anim_array_gimmickspikechain1_3844[0]};
static bool anim_gimmickspikechain1_3844_initialized;
class GimmickSpikechain1_3844 : public Active
{
public:
    GimmickSpikechain1_3844(int x, int y) : Active(x, y, GimmickSpikechain1_3844_type)
    {
        // qualifiers: 97
#ifndef NDEBUG
        name = std::string("Gimmick_Spikechain 1", 20);
#endif
        this->animations = &anim_gimmickspikechain1_3844;
        if (!anim_gimmickspikechain1_3844_initialized) {
            anim_gimmickspikechain1_3844_initialized = true;
            images_gimmickspikechain1_3844_0_0[0] = get_internal_image(9485);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 99);
        alterables->values.set(1, 10);
    }
};
FrameObject * create_gimmickspikechain1_3844(int x, int y)
{
    return new (Active::pool.create()) GimmickSpikechain1_3844(x, y);
}
class HouseFloor_3845 : public Backdrop
{
public:
    HouseFloor_3845(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Floor", 11);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(721);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_housefloor_3845(int x, int y)
{
    return new (Backdrop::pool.create()) HouseFloor_3845(x, y);
}
class HouseFloor2_3846 : public Backdrop
{
public:
    HouseFloor2_3846(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Floor 2", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(539);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housefloor2_3846(int x, int y)
{
    return new (Backdrop::pool.create()) HouseFloor2_3846(x, y);
}
class HouseFloor3_3847 : public Backdrop
{
public:
    HouseFloor3_3847(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("House_Floor 3", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3637);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_housefloor3_3847(int x, int y)
{
    return new (Backdrop::pool.create()) HouseFloor3_3847(x, y);
}
static Image* images_objectchair_3848_0_0[1];
static Direction direction_objectchair_3848_0_0 = {0, 50, 50, 0, 1, images_objectchair_3848_0_0, 1};
static Animation anim_objectchair_3848_0 = {&direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, NULL, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0, &direction_objectchair_3848_0_0};
static Animation * anim_array_objectchair_3848[1] = {&anim_objectchair_3848_0};
static Animations anim_objectchair_3848 = {1, &anim_array_objectchair_3848[0]};
static bool anim_objectchair_3848_initialized;
class ObjectChair_3848 : public Active
{
public:
    ObjectChair_3848(int x, int y) : Active(x, y, ObjectChair_3848_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Object_Chair", 12);
#endif
        this->animations = &anim_objectchair_3848;
        if (!anim_objectchair_3848_initialized) {
            anim_objectchair_3848_initialized = true;
            images_objectchair_3848_0_0[0] = get_internal_image(351);
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
FrameObject * create_objectchair_3848(int x, int y)
{
    return new (Active::pool.create()) ObjectChair_3848(x, y);
}
static Image* images_basketballhoop1_3849_0_0[1];
static Direction direction_basketballhoop1_3849_0_0 = {0, 50, 50, 0, 1, images_basketballhoop1_3849_0_0, 1};
static Animation anim_basketballhoop1_3849_0 = {&direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, NULL, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0, &direction_basketballhoop1_3849_0_0};
static Animation * anim_array_basketballhoop1_3849[1] = {&anim_basketballhoop1_3849_0};
static Animations anim_basketballhoop1_3849 = {1, &anim_array_basketballhoop1_3849[0]};
static bool anim_basketballhoop1_3849_initialized;
class BasketballHoop1_3849 : public Active
{
public:
    BasketballHoop1_3849(int x, int y) : Active(x, y, BasketballHoop1_3849_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basketball_Hoop 1", 17);
#endif
        this->animations = &anim_basketballhoop1_3849;
        if (!anim_basketballhoop1_3849_initialized) {
            anim_basketballhoop1_3849_initialized = true;
            images_basketballhoop1_3849_0_0[0] = get_internal_image(9468);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 28);
    }
};
FrameObject * create_basketballhoop1_3849(int x, int y)
{
    return new (Active::pool.create()) BasketballHoop1_3849(x, y);
}
static Image* images_basketballhoop2_3850_0_0[1];
static Direction direction_basketballhoop2_3850_0_0 = {0, 50, 50, 0, 1, images_basketballhoop2_3850_0_0, 1};
static Animation anim_basketballhoop2_3850_0 = {&direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, NULL, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0, &direction_basketballhoop2_3850_0_0};
static Animation * anim_array_basketballhoop2_3850[1] = {&anim_basketballhoop2_3850_0};
static Animations anim_basketballhoop2_3850 = {1, &anim_array_basketballhoop2_3850[0]};
static bool anim_basketballhoop2_3850_initialized;
class BasketballHoop2_3850 : public Active
{
public:
    BasketballHoop2_3850(int x, int y) : Active(x, y, BasketballHoop2_3850_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basketball_Hoop 2", 17);
#endif
        this->animations = &anim_basketballhoop2_3850;
        if (!anim_basketballhoop2_3850_initialized) {
            anim_basketballhoop2_3850_initialized = true;
            images_basketballhoop2_3850_0_0[0] = get_internal_image(9469);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 28);
    }
};
FrameObject * create_basketballhoop2_3850(int x, int y)
{
    return new (Active::pool.create()) BasketballHoop2_3850(x, y);
}
static Image* images_basketballhoop_3851_0_0[1];
static Direction direction_basketballhoop_3851_0_0 = {0, 50, 50, 0, 1, images_basketballhoop_3851_0_0, 1};
static Animation anim_basketballhoop_3851_0 = {&direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, NULL, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0, &direction_basketballhoop_3851_0_0};
static Animation * anim_array_basketballhoop_3851[1] = {&anim_basketballhoop_3851_0};
static Animations anim_basketballhoop_3851 = {1, &anim_array_basketballhoop_3851[0]};
static bool anim_basketballhoop_3851_initialized;
class BasketballHoop_3851 : public Active
{
public:
    BasketballHoop_3851(int x, int y) : Active(x, y, BasketballHoop_3851_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Basketball_Hoop", 15);
#endif
        this->animations = &anim_basketballhoop_3851;
        if (!anim_basketballhoop_3851_initialized) {
            anim_basketballhoop_3851_initialized = true;
            images_basketballhoop_3851_0_0[0] = get_internal_image(340);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 28);
    }
};
FrameObject * create_basketballhoop_3851(int x, int y)
{
    return new (Active::pool.create()) BasketballHoop_3851(x, y);
}
static Image* images_highlighter_3852_0_0[1];
static Direction direction_highlighter_3852_0_0 = {0, 50, 50, 0, 1, images_highlighter_3852_0_0, 1};
static Image* images_highlighter_3852_0_1[1];
static Direction direction_highlighter_3852_0_1 = {1, 50, 50, 0, 1, images_highlighter_3852_0_1, 1};
static Animation anim_highlighter_3852_0 = {&direction_highlighter_3852_0_0, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_1, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0, &direction_highlighter_3852_0_0};
static Animation * anim_array_highlighter_3852[1] = {&anim_highlighter_3852_0};
static Animations anim_highlighter_3852 = {1, &anim_array_highlighter_3852[0]};
static bool anim_highlighter_3852_initialized;
class Highlighter_3852 : public Active
{
public:
    Highlighter_3852(int x, int y) : Active(x, y, Highlighter_3852_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Highlighter", 11);
#endif
        this->animations = &anim_highlighter_3852;
        if (!anim_highlighter_3852_initialized) {
            anim_highlighter_3852_initialized = true;
            images_highlighter_3852_0_0[0] = get_internal_image(4327);
            images_highlighter_3852_0_1[0] = get_internal_image(4437);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 127);
        create_alterables();
    }
};
FrameObject * create_highlighter_3852(int x, int y)
{
    return new (Active::pool.create()) Highlighter_3852(x, y);
}
static Image* images_hand_3853_0_0[6];
static Direction direction_hand_3853_0_0 = {0, 14, 14, 0, -1, images_hand_3853_0_0, 6};
static Image* images_hand_3853_0_2[6];
static Direction direction_hand_3853_0_2 = {2, 14, 14, 0, -1, images_hand_3853_0_2, 6};
static Image* images_hand_3853_0_8[6];
static Direction direction_hand_3853_0_8 = {8, 50, 50, 0, 1, images_hand_3853_0_8, 6};
static Animation anim_hand_3853_0 = {&direction_hand_3853_0_0, NULL, &direction_hand_3853_0_2, &direction_hand_3853_0_2, &direction_hand_3853_0_2, NULL, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, &direction_hand_3853_0_8, NULL, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0, &direction_hand_3853_0_0};
static Animation * anim_array_hand_3853[1] = {&anim_hand_3853_0};
static Animations anim_hand_3853 = {1, &anim_array_hand_3853[0]};
static bool anim_hand_3853_initialized;
class Hand_3853 : public Active
{
public:
    Hand_3853(int x, int y) : Active(x, y, Hand_3853_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Hand", 4);
#endif
        set_visible(false);
        this->animations = &anim_hand_3853;
        if (!anim_hand_3853_initialized) {
            anim_hand_3853_initialized = true;
            images_hand_3853_0_0[0] = get_internal_image(1418);
            images_hand_3853_0_0[1] = get_internal_image(1418);
            images_hand_3853_0_0[2] = get_internal_image(1433);
            images_hand_3853_0_0[3] = get_internal_image(1432);
            images_hand_3853_0_0[4] = get_internal_image(1432);
            images_hand_3853_0_0[5] = get_internal_image(1433);
            images_hand_3853_0_2[0] = get_internal_image(1457);
            images_hand_3853_0_2[1] = get_internal_image(1457);
            images_hand_3853_0_2[2] = get_internal_image(5310);
            images_hand_3853_0_2[3] = get_internal_image(5311);
            images_hand_3853_0_2[4] = get_internal_image(5311);
            images_hand_3853_0_2[5] = get_internal_image(5310);
            images_hand_3853_0_8[0] = get_internal_image(128);
            images_hand_3853_0_8[1] = get_internal_image(128);
            images_hand_3853_0_8[2] = get_internal_image(128);
            images_hand_3853_0_8[3] = get_internal_image(128);
            images_hand_3853_0_8[4] = get_internal_image(128);
            images_hand_3853_0_8[5] = get_internal_image(128);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 5);
        alterables->values.set(1, 4);
        alterables->values.set(3, 1);
    }
};
FrameObject * create_hand_3853(int x, int y)
{
    return new (Active::pool.create()) Hand_3853(x, y);
}
static Image* images_objectinfo_3854_0_0[1];
static Direction direction_objectinfo_3854_0_0 = {0, 50, 50, 0, 1, images_objectinfo_3854_0_0, 1};
static Image* images_objectinfo_3854_0_1[1];
static Direction direction_objectinfo_3854_0_1 = {1, 50, 50, 0, 1, images_objectinfo_3854_0_1, 1};
static Image* images_objectinfo_3854_0_2[1];
static Direction direction_objectinfo_3854_0_2 = {2, 50, 50, 0, 1, images_objectinfo_3854_0_2, 1};
static Image* images_objectinfo_3854_0_31[1];
static Direction direction_objectinfo_3854_0_31 = {31, 50, 50, 0, 1, images_objectinfo_3854_0_31, 1};
static Animation anim_objectinfo_3854_0 = {&direction_objectinfo_3854_0_0, &direction_objectinfo_3854_0_1, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_2, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31, &direction_objectinfo_3854_0_31};
static Animation * anim_array_objectinfo_3854[1] = {&anim_objectinfo_3854_0};
static Animations anim_objectinfo_3854 = {1, &anim_array_objectinfo_3854[0]};
static bool anim_objectinfo_3854_initialized;
class ObjectInfo_3854 : public Active
{
public:
    ObjectInfo_3854(int x, int y) : Active(x, y, ObjectInfo_3854_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Info", 11);
#endif
        this->animations = &anim_objectinfo_3854;
        if (!anim_objectinfo_3854_initialized) {
            anim_objectinfo_3854_initialized = true;
            images_objectinfo_3854_0_0[0] = get_internal_image(4366);
            images_objectinfo_3854_0_1[0] = get_internal_image(4370);
            images_objectinfo_3854_0_2[0] = get_internal_image(4365);
            images_objectinfo_3854_0_31[0] = get_internal_image(3642);
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
FrameObject * create_objectinfo_3854(int x, int y)
{
    return new (Active::pool.create()) ObjectInfo_3854(x, y);
}
class Ini_3855 : public INI
{
public:
    Ini_3855(int x, int y) : INI(x, y, Ini_3855_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ini", 3);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_ini_3855(int x, int y)
{
    return new (INI::pool.create()) Ini_3855(x, y);
}
static Image* images_objectbasketball_3856_0_0[1];
static Direction direction_objectbasketball_3856_0_0 = {0, 50, 50, 0, 1, images_objectbasketball_3856_0_0, 1};
static Animation anim_objectbasketball_3856_0 = {&direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, NULL, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0, &direction_objectbasketball_3856_0_0};
static Image* images_objectbasketball_3856_7_0[6];
static Direction direction_objectbasketball_3856_7_0 = {0, 100, 100, 0, 1, images_objectbasketball_3856_7_0, 6};
static Animation anim_objectbasketball_3856_7 = {&direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, NULL, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0, &direction_objectbasketball_3856_7_0};
static Animation * anim_array_objectbasketball_3856[8] = {&anim_objectbasketball_3856_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_objectbasketball_3856_7};
static Animations anim_objectbasketball_3856 = {8, &anim_array_objectbasketball_3856[0]};
static bool anim_objectbasketball_3856_initialized;
class ObjectBasketball_3856 : public Active
{
public:
    ObjectBasketball_3856(int x, int y) : Active(x, y, ObjectBasketball_3856_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Object_Basketball", 17);
#endif
        this->animations = &anim_objectbasketball_3856;
        if (!anim_objectbasketball_3856_initialized) {
            anim_objectbasketball_3856_initialized = true;
            images_objectbasketball_3856_0_0[0] = get_internal_image(8964);
            images_objectbasketball_3856_7_0[0] = get_internal_image(5428);
            images_objectbasketball_3856_7_0[1] = get_internal_image(5432);
            images_objectbasketball_3856_7_0[2] = get_internal_image(5435);
            images_objectbasketball_3856_7_0[3] = get_internal_image(5428);
            images_objectbasketball_3856_7_0[4] = get_internal_image(5434);
            images_objectbasketball_3856_7_0[5] = get_internal_image(5431);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, -5);
    }
};
FrameObject * create_objectbasketball_3856(int x, int y)
{
    return new (Active::pool.create()) ObjectBasketball_3856(x, y);
}
static Image* images_levelcardselect_3857_0_0[1];
static Direction direction_levelcardselect_3857_0_0 = {0, 50, 50, 0, 1, images_levelcardselect_3857_0_0, 1};
static Image* images_levelcardselect_3857_0_8[1];
static Direction direction_levelcardselect_3857_0_8 = {8, 50, 50, 0, 1, images_levelcardselect_3857_0_8, 1};
static Image* images_levelcardselect_3857_0_16[1];
static Direction direction_levelcardselect_3857_0_16 = {16, 50, 50, 0, 1, images_levelcardselect_3857_0_16, 1};
static Image* images_levelcardselect_3857_0_24[1];
static Direction direction_levelcardselect_3857_0_24 = {24, 50, 50, 0, 1, images_levelcardselect_3857_0_24, 1};
static Animation anim_levelcardselect_3857_0 = {&direction_levelcardselect_3857_0_0, &direction_levelcardselect_3857_0_0, &direction_levelcardselect_3857_0_0, &direction_levelcardselect_3857_0_0, NULL, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, &direction_levelcardselect_3857_0_8, NULL, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, &direction_levelcardselect_3857_0_16, NULL, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, &direction_levelcardselect_3857_0_24, NULL, &direction_levelcardselect_3857_0_0, &direction_levelcardselect_3857_0_0, &direction_levelcardselect_3857_0_0};
static Animation * anim_array_levelcardselect_3857[1] = {&anim_levelcardselect_3857_0};
static Animations anim_levelcardselect_3857 = {1, &anim_array_levelcardselect_3857[0]};
static bool anim_levelcardselect_3857_initialized;
class LevelCardSelect_3857 : public Active
{
public:
    LevelCardSelect_3857(int x, int y) : Active(x, y, LevelCardSelect_3857_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Select", 16);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardselect_3857;
        if (!anim_levelcardselect_3857_initialized) {
            anim_levelcardselect_3857_initialized = true;
            images_levelcardselect_3857_0_0[0] = get_internal_image(4617);
            images_levelcardselect_3857_0_8[0] = get_internal_image(3325);
            images_levelcardselect_3857_0_16[0] = get_internal_image(3640);
            images_levelcardselect_3857_0_24[0] = get_internal_image(3681);
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
FrameObject * create_levelcardselect_3857(int x, int y)
{
    return new (Active::pool.create()) LevelCardSelect_3857(x, y);
}
static Image* images_inventory_3858_0_0[29];
static Direction direction_inventory_3858_0_0 = {0, 0, 0, 0, 1, images_inventory_3858_0_0, 29};
static Image* images_inventory_3858_0_1[23];
static Direction direction_inventory_3858_0_1 = {1, 0, 0, 0, 1, images_inventory_3858_0_1, 23};
static Image* images_inventory_3858_0_2[4];
static Direction direction_inventory_3858_0_2 = {2, 0, 0, 0, 1, images_inventory_3858_0_2, 4};
static Animation anim_inventory_3858_0 = {&direction_inventory_3858_0_0, &direction_inventory_3858_0_1, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, &direction_inventory_3858_0_2, NULL, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0, &direction_inventory_3858_0_0};
static Animation * anim_array_inventory_3858[1] = {&anim_inventory_3858_0};
static Animations anim_inventory_3858 = {1, &anim_array_inventory_3858[0]};
static bool anim_inventory_3858_initialized;
class Inventory_3858 : public Active
{
public:
    Inventory_3858(int x, int y) : Active(x, y, Inventory_3858_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Inventory", 9);
#endif
        set_visible(false);
        this->animations = &anim_inventory_3858;
        if (!anim_inventory_3858_initialized) {
            anim_inventory_3858_initialized = true;
            images_inventory_3858_0_0[0] = get_internal_image(4443);
            images_inventory_3858_0_0[1] = get_internal_image(4440);
            images_inventory_3858_0_0[2] = get_internal_image(4447);
            images_inventory_3858_0_0[3] = get_internal_image(4451);
            images_inventory_3858_0_0[4] = get_internal_image(4444);
            images_inventory_3858_0_0[5] = get_internal_image(4445);
            images_inventory_3858_0_0[6] = get_internal_image(4446);
            images_inventory_3858_0_0[7] = get_internal_image(4442);
            images_inventory_3858_0_0[8] = get_internal_image(4448);
            images_inventory_3858_0_0[9] = get_internal_image(3868);
            images_inventory_3858_0_0[10] = get_internal_image(3899);
            images_inventory_3858_0_0[11] = get_internal_image(1187);
            images_inventory_3858_0_0[12] = get_internal_image(1210);
            images_inventory_3858_0_0[13] = get_internal_image(1215);
            images_inventory_3858_0_0[14] = get_internal_image(4562);
            images_inventory_3858_0_0[15] = get_internal_image(3644);
            images_inventory_3858_0_0[16] = get_internal_image(3617);
            images_inventory_3858_0_0[17] = get_internal_image(3674);
            images_inventory_3858_0_0[18] = get_internal_image(3864);
            images_inventory_3858_0_0[19] = get_internal_image(4498);
            images_inventory_3858_0_0[20] = get_internal_image(4500);
            images_inventory_3858_0_0[21] = get_internal_image(4515);
            images_inventory_3858_0_0[22] = get_internal_image(4501);
            images_inventory_3858_0_0[23] = get_internal_image(4499);
            images_inventory_3858_0_0[24] = get_internal_image(4497);
            images_inventory_3858_0_0[25] = get_internal_image(4517);
            images_inventory_3858_0_0[26] = get_internal_image(4516);
            images_inventory_3858_0_0[27] = get_internal_image(3926);
            images_inventory_3858_0_0[28] = get_internal_image(3605);
            images_inventory_3858_0_1[0] = get_internal_image(4099);
            images_inventory_3858_0_1[1] = get_internal_image(4098);
            images_inventory_3858_0_1[2] = get_internal_image(4095);
            images_inventory_3858_0_1[3] = get_internal_image(4096);
            images_inventory_3858_0_1[4] = get_internal_image(4094);
            images_inventory_3858_0_1[5] = get_internal_image(4093);
            images_inventory_3858_0_1[6] = get_internal_image(4092);
            images_inventory_3858_0_1[7] = get_internal_image(4066);
            images_inventory_3858_0_1[8] = get_internal_image(4056);
            images_inventory_3858_0_1[9] = get_internal_image(4058);
            images_inventory_3858_0_1[10] = get_internal_image(4042);
            images_inventory_3858_0_1[11] = get_internal_image(3935);
            images_inventory_3858_0_1[12] = get_internal_image(9461);
            images_inventory_3858_0_1[13] = get_internal_image(9462);
            images_inventory_3858_0_1[14] = get_internal_image(9459);
            images_inventory_3858_0_1[15] = get_internal_image(9460);
            images_inventory_3858_0_1[16] = get_internal_image(1710);
            images_inventory_3858_0_1[17] = get_internal_image(1709);
            images_inventory_3858_0_1[18] = get_internal_image(4579);
            images_inventory_3858_0_1[19] = get_internal_image(1954);
            images_inventory_3858_0_1[20] = get_internal_image(3600);
            images_inventory_3858_0_1[21] = get_internal_image(1334);
            images_inventory_3858_0_1[22] = get_internal_image(3930);
            images_inventory_3858_0_2[0] = get_internal_image(3648);
            images_inventory_3858_0_2[1] = get_internal_image(4100);
            images_inventory_3858_0_2[2] = get_internal_image(3675);
            images_inventory_3858_0_2[3] = get_internal_image(3676);
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
FrameObject * create_inventory_3858(int x, int y)
{
    return new (Active::pool.create()) Inventory_3858(x, y);
}
static Image* images_levelcardready_3859_0_0[1];
static Direction direction_levelcardready_3859_0_0 = {0, 50, 50, 0, 1, images_levelcardready_3859_0_0, 1};
static Image* images_levelcardready_3859_0_1[1];
static Direction direction_levelcardready_3859_0_1 = {1, 50, 50, 0, 1, images_levelcardready_3859_0_1, 1};
static Image* images_levelcardready_3859_0_2[1];
static Direction direction_levelcardready_3859_0_2 = {2, 50, 50, 0, 1, images_levelcardready_3859_0_2, 1};
static Animation anim_levelcardready_3859_0 = {&direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_1, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, &direction_levelcardready_3859_0_2, NULL, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0, &direction_levelcardready_3859_0_0};
static Animation * anim_array_levelcardready_3859[1] = {&anim_levelcardready_3859_0};
static Animations anim_levelcardready_3859 = {1, &anim_array_levelcardready_3859[0]};
static bool anim_levelcardready_3859_initialized;
class LevelCardReady_3859 : public Active
{
public:
    LevelCardReady_3859(int x, int y) : Active(x, y, LevelCardReady_3859_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("LevelCard_Ready", 15);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardready_3859;
        if (!anim_levelcardready_3859_initialized) {
            anim_levelcardready_3859_initialized = true;
            images_levelcardready_3859_0_0[0] = get_internal_image(3650);
            images_levelcardready_3859_0_1[0] = get_internal_image(3651);
            images_levelcardready_3859_0_2[0] = get_internal_image(974);
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
FrameObject * create_levelcardready_3859(int x, int y)
{
    return new (Active::pool.create()) LevelCardReady_3859(x, y);
}
static Image* images_levelcardready2_3860_0_0[1];
static Direction direction_levelcardready2_3860_0_0 = {0, 50, 50, 0, 1, images_levelcardready2_3860_0_0, 1};
static Animation anim_levelcardready2_3860_0 = {&direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, NULL, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0, &direction_levelcardready2_3860_0_0};
static Animation * anim_array_levelcardready2_3860[1] = {&anim_levelcardready2_3860_0};
static Animations anim_levelcardready2_3860 = {1, &anim_array_levelcardready2_3860[0]};
static bool anim_levelcardready2_3860_initialized;
class LevelCardReady2_3860 : public Active
{
public:
    LevelCardReady2_3860(int x, int y) : Active(x, y, LevelCardReady2_3860_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Ready 2", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardready2_3860;
        if (!anim_levelcardready2_3860_initialized) {
            anim_levelcardready2_3860_initialized = true;
            images_levelcardready2_3860_0_0[0] = get_internal_image(3661);
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
FrameObject * create_levelcardready2_3860(int x, int y)
{
    return new (Active::pool.create()) LevelCardReady2_3860(x, y);
}
class TargetsLeft_3861 : public Counter
{
public:
    TargetsLeft_3861(int x, int y) : Counter(x, y, TargetsLeft_3861_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Targets_Left", 12);
#endif
        set_visible(false);
        width = 96;
        height = 32;
        type = ANIMATION_COUNTER;
        static Image * counter_images[17];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(4558);
            counter_images[1] = get_internal_image(4557);
            counter_images[2] = get_internal_image(4556);
            counter_images[3] = get_internal_image(4555);
            counter_images[4] = get_internal_image(4554);
            counter_images[5] = get_internal_image(4553);
            counter_images[6] = get_internal_image(4551);
            counter_images[7] = get_internal_image(4549);
            counter_images[8] = get_internal_image(4548);
            counter_images[9] = get_internal_image(4533);
            counter_images[10] = get_internal_image(4532);
            counter_images[11] = get_internal_image(4531);
            counter_images[12] = get_internal_image(4518);
            counter_images[13] = get_internal_image(4459);
            counter_images[14] = get_internal_image(4439);
            counter_images[15] = get_internal_image(4438);
            counter_images[16] = get_internal_image(3673);
        }
        images = (Image**)&counter_images;
        image_count = 17;
        minimum = 0;
        maximum = 16;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_targetsleft_3861(int x, int y)
{
    return new (Counter::pool.create()) TargetsLeft_3861(x, y);
}
class MapToLoad_3862 : public Counter
{
public:
    MapToLoad_3862(int x, int y) : Counter(x, y, MapToLoad_3862_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Map To Load", 11);
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
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(1177);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = 0;
        maximum = 99;
        set(0);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_maptoload_3862(int x, int y)
{
    return new (Counter::pool.create()) MapToLoad_3862(x, y);
}
class MapSelect_3863 : public Counter
{
public:
    MapSelect_3863(int x, int y) : Counter(x, y, MapSelect_3863_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Map_select", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 2;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(2774);
            counter_images[1] = get_internal_image(2776);
            counter_images[2] = get_internal_image(2777);
            counter_images[3] = get_internal_image(2778);
            counter_images[4] = get_internal_image(1177);
            counter_images[5] = get_internal_image(2789);
            counter_images[6] = get_internal_image(2795);
            counter_images[7] = get_internal_image(2796);
            counter_images[8] = get_internal_image(2797);
            counter_images[9] = get_internal_image(2798);
            counter_images[10] = get_internal_image(2801);
            counter_images[11] = get_internal_image(2800);
            counter_images[12] = get_internal_image(2802);
            counter_images[13] = get_internal_image(2801);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = -99;
        maximum = 99;
        if (global_data_992_map_select.init)
            set(global_data_992_map_select.value);
        else
            set(1);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
    ~MapSelect_3863()
    {
        global_data_992_map_select.init = true;
        global_data_992_map_select.value = value;
    }
    void dealloc()
    {
        this->MapSelect_3863::~MapSelect_3863();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_mapselect_3863(int x, int y)
{
    return new (Counter::pool.create()) MapSelect_3863(x, y);
}
static Image* images_newrecord_3864_0_0[1];
static Direction direction_newrecord_3864_0_0 = {0, 50, 50, 0, 1, images_newrecord_3864_0_0, 1};
static Animation anim_newrecord_3864_0 = {&direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, NULL, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0, &direction_newrecord_3864_0_0};
static Animation * anim_array_newrecord_3864[1] = {&anim_newrecord_3864_0};
static Animations anim_newrecord_3864 = {1, &anim_array_newrecord_3864[0]};
static bool anim_newrecord_3864_initialized;
class NewRecord_3864 : public Active
{
public:
    NewRecord_3864(int x, int y) : Active(x, y, NewRecord_3864_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("New Record", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_newrecord_3864;
        if (!anim_newrecord_3864_initialized) {
            anim_newrecord_3864_initialized = true;
            images_newrecord_3864_0_0[0] = get_internal_image(2156);
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
FrameObject * create_newrecord_3864(int x, int y)
{
    return new (Active::pool.create()) NewRecord_3864(x, y);
}
static Image* images_return_3865_0_0[1];
static Direction direction_return_3865_0_0 = {0, 50, 50, 0, 1, images_return_3865_0_0, 1};
static Image* images_return_3865_0_8[1];
static Direction direction_return_3865_0_8 = {8, 50, 50, 0, 1, images_return_3865_0_8, 1};
static Animation anim_return_3865_0 = {&direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, NULL, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, &direction_return_3865_0_8, NULL, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0, &direction_return_3865_0_0};
static Animation * anim_array_return_3865[1] = {&anim_return_3865_0};
static Animations anim_return_3865 = {1, &anim_array_return_3865[0]};
static bool anim_return_3865_initialized;
class Return_3865 : public Active
{
public:
    Return_3865(int x, int y) : Active(x, y, Return_3865_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Return", 6);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_return_3865;
        if (!anim_return_3865_initialized) {
            anim_return_3865_initialized = true;
            images_return_3865_0_0[0] = get_internal_image(2370);
            images_return_3865_0_8[0] = get_internal_image(2372);
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
FrameObject * create_return_3865(int x, int y)
{
    return new (Active::pool.create()) Return_3865(x, y);
}
static Image* images_mapicon_3866_0_0[19];
static Direction direction_mapicon_3866_0_0 = {0, 0, 0, 0, 1, images_mapicon_3866_0_0, 19};
static Image* images_mapicon_3866_0_1[19];
static Direction direction_mapicon_3866_0_1 = {1, 0, 0, 0, 1, images_mapicon_3866_0_1, 19};
static Image* images_mapicon_3866_0_2[1];
static Direction direction_mapicon_3866_0_2 = {2, 0, 0, 0, 1, images_mapicon_3866_0_2, 1};
static Animation anim_mapicon_3866_0 = {&direction_mapicon_3866_0_0, &direction_mapicon_3866_0_1, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, &direction_mapicon_3866_0_2, NULL, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0, &direction_mapicon_3866_0_0};
static Animation * anim_array_mapicon_3866[1] = {&anim_mapicon_3866_0};
static Animations anim_mapicon_3866 = {1, &anim_array_mapicon_3866[0]};
static bool anim_mapicon_3866_initialized;
class MapIcon_3866 : public Active
{
public:
    MapIcon_3866(int x, int y) : Active(x, y, MapIcon_3866_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Map icon", 8);
#endif
        set_visible(false);
        this->animations = &anim_mapicon_3866;
        if (!anim_mapicon_3866_initialized) {
            anim_mapicon_3866_initialized = true;
            images_mapicon_3866_0_0[0] = get_internal_image(140);
            images_mapicon_3866_0_0[1] = get_internal_image(4586);
            images_mapicon_3866_0_0[2] = get_internal_image(4587);
            images_mapicon_3866_0_0[3] = get_internal_image(4588);
            images_mapicon_3866_0_0[4] = get_internal_image(4589);
            images_mapicon_3866_0_0[5] = get_internal_image(4611);
            images_mapicon_3866_0_0[6] = get_internal_image(4592);
            images_mapicon_3866_0_0[7] = get_internal_image(4593);
            images_mapicon_3866_0_0[8] = get_internal_image(4594);
            images_mapicon_3866_0_0[9] = get_internal_image(4595);
            images_mapicon_3866_0_0[10] = get_internal_image(4596);
            images_mapicon_3866_0_0[11] = get_internal_image(4590);
            images_mapicon_3866_0_0[12] = get_internal_image(4612);
            images_mapicon_3866_0_0[13] = get_internal_image(4597);
            images_mapicon_3866_0_0[14] = get_internal_image(4608);
            images_mapicon_3866_0_0[15] = get_internal_image(4609);
            images_mapicon_3866_0_0[16] = get_internal_image(404);
            images_mapicon_3866_0_0[17] = get_internal_image(4831);
            images_mapicon_3866_0_0[18] = get_internal_image(433);
            images_mapicon_3866_0_1[0] = get_internal_image(2283);
            images_mapicon_3866_0_1[1] = get_internal_image(1339);
            images_mapicon_3866_0_1[2] = get_internal_image(1335);
            images_mapicon_3866_0_1[3] = get_internal_image(1443);
            images_mapicon_3866_0_1[4] = get_internal_image(1512);
            images_mapicon_3866_0_1[5] = get_internal_image(4610);
            images_mapicon_3866_0_1[6] = get_internal_image(1521);
            images_mapicon_3866_0_1[7] = get_internal_image(4565);
            images_mapicon_3866_0_1[8] = get_internal_image(4461);
            images_mapicon_3866_0_1[9] = get_internal_image(4585);
            images_mapicon_3866_0_1[10] = get_internal_image(4581);
            images_mapicon_3866_0_1[11] = get_internal_image(4613);
            images_mapicon_3866_0_1[12] = get_internal_image(4614);
            images_mapicon_3866_0_1[13] = get_internal_image(4583);
            images_mapicon_3866_0_1[14] = get_internal_image(4580);
            images_mapicon_3866_0_1[15] = get_internal_image(4582);
            images_mapicon_3866_0_1[16] = get_internal_image(403);
            images_mapicon_3866_0_1[17] = get_internal_image(4827);
            images_mapicon_3866_0_1[18] = get_internal_image(2492);
            images_mapicon_3866_0_2[0] = get_internal_image(140);
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
FrameObject * create_mapicon_3866(int x, int y)
{
    return new (Active::pool.create()) MapIcon_3866(x, y);
}
class LevelParallaxPiece0_3868 : public SystemBox
{
public:
    LevelParallaxPiece0_3868(int x, int y) : SystemBox(x, y, LevelParallaxPiece0_3868_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece0", 21);
#endif
        flags |= BACKGROUND;
        width = 300;
        height = 480;
        type = PATTERN_IMAGE;
        image = get_internal_image(14124);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece0_3868(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece0_3868(x, y);
}
class LevelParallaxPiece3_3869 : public SystemBox
{
public:
    LevelParallaxPiece3_3869(int x, int y) : SystemBox(x, y, LevelParallaxPiece3_3869_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece 3", 22);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(13627);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece3_3869(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece3_3869(x, y);
}
class LevelParallaxPiece1_3870 : public SystemBox
{
public:
    LevelParallaxPiece1_3870(int x, int y) : SystemBox(x, y, LevelParallaxPiece1_3870_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Level_Parallax_Piece1", 21);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 64;
        type = PATTERN_IMAGE;
        image = get_internal_image(13631);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_levelparallaxpiece1_3870(int x, int y)
{
    return new (SystemBox::pool.create()) LevelParallaxPiece1_3870(x, y);
}
class DojoTorchTop_3871 : public Backdrop
{
public:
    DojoTorchTop_3871(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dojo_TorchTop", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(13985);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dojotorchtop_3871(int x, int y)
{
    return new (Backdrop::pool.create()) DojoTorchTop_3871(x, y);
}
class DojoTorchMid_3872 : public Backdrop
{
public:
    DojoTorchMid_3872(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Dojo_TorchMid", 13);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(14123);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_dojotorchmid_3872(int x, int y)
{
    return new (Backdrop::pool.create()) DojoTorchMid_3872(x, y);
}
static Image* images_levelcardselect_3873_0_0[1];
static Direction direction_levelcardselect_3873_0_0 = {0, 50, 50, 0, 1, images_levelcardselect_3873_0_0, 1};
static Animation anim_levelcardselect_3873_0 = {&direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, NULL, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0, &direction_levelcardselect_3873_0_0};
static Animation * anim_array_levelcardselect_3873[1] = {&anim_levelcardselect_3873_0};
static Animations anim_levelcardselect_3873 = {1, &anim_array_levelcardselect_3873[0]};
static bool anim_levelcardselect_3873_initialized;
class LevelCardSelect_3873 : public Active
{
public:
    LevelCardSelect_3873(int x, int y) : Active(x, y, LevelCardSelect_3873_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LevelCard_Select", 16);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_levelcardselect_3873;
        if (!anim_levelcardselect_3873_initialized) {
            anim_levelcardselect_3873_initialized = true;
            images_levelcardselect_3873_0_0[0] = get_internal_image(14010);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 159);
        create_alterables();
    }
};
FrameObject * create_levelcardselect_3873(int x, int y)
{
    return new (Active::pool.create()) LevelCardSelect_3873(x, y);
}
static Image* images_crystal_3874_0_0[7];
static Direction direction_crystal_3874_0_0 = {0, 18, 18, 0, -1, images_crystal_3874_0_0, 7};
static Image* images_crystal_3874_0_8[7];
static Direction direction_crystal_3874_0_8 = {8, 18, 18, 0, -1, images_crystal_3874_0_8, 7};
static Animation anim_crystal_3874_0 = {&direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, NULL, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, &direction_crystal_3874_0_8, NULL, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0, &direction_crystal_3874_0_0};
static Animation * anim_array_crystal_3874[1] = {&anim_crystal_3874_0};
static Animations anim_crystal_3874 = {1, &anim_array_crystal_3874[0]};
static bool anim_crystal_3874_initialized;
class Crystal_3874 : public Active
{
public:
    Crystal_3874(int x, int y) : Active(x, y, Crystal_3874_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal", 7);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_crystal_3874;
        if (!anim_crystal_3874_initialized) {
            anim_crystal_3874_initialized = true;
            images_crystal_3874_0_0[0] = get_internal_image(5287);
            images_crystal_3874_0_0[1] = get_internal_image(5973);
            images_crystal_3874_0_0[2] = get_internal_image(6078);
            images_crystal_3874_0_0[3] = get_internal_image(6074);
            images_crystal_3874_0_0[4] = get_internal_image(6075);
            images_crystal_3874_0_0[5] = get_internal_image(6076);
            images_crystal_3874_0_0[6] = get_internal_image(6077);
            images_crystal_3874_0_8[0] = get_internal_image(11986);
            images_crystal_3874_0_8[1] = get_internal_image(11987);
            images_crystal_3874_0_8[2] = get_internal_image(6080);
            images_crystal_3874_0_8[3] = get_internal_image(6213);
            images_crystal_3874_0_8[4] = get_internal_image(9395);
            images_crystal_3874_0_8[5] = get_internal_image(11984);
            images_crystal_3874_0_8[6] = get_internal_image(11985);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_crystal_3874(int x, int y)
{
    return new (Active::pool.create()) Crystal_3874(x, y);
}
static Image* images_levelmovingplatform1_3875_0_0[1];
static Direction direction_levelmovingplatform1_3875_0_0 = {0, 50, 50, 0, 1, images_levelmovingplatform1_3875_0_0, 1};
static Animation anim_levelmovingplatform1_3875_0 = {&direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, NULL, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0, &direction_levelmovingplatform1_3875_0_0};
static Animation * anim_array_levelmovingplatform1_3875[1] = {&anim_levelmovingplatform1_3875_0};
static Animations anim_levelmovingplatform1_3875 = {1, &anim_array_levelmovingplatform1_3875[0]};
static bool anim_levelmovingplatform1_3875_initialized;
class LevelMovingPlatform1_3875 : public Active
{
public:
    LevelMovingPlatform1_3875(int x, int y) : Active(x, y, LevelMovingPlatform1_3875_type)
    {
        // qualifiers: 15, 16, 19, 20
#ifndef NDEBUG
        name = std::string("Level_MovingPlatform 1", 22);
#endif
        this->animations = &anim_levelmovingplatform1_3875;
        if (!anim_levelmovingplatform1_3875_initialized) {
            anim_levelmovingplatform1_3875_initialized = true;
            images_levelmovingplatform1_3875_0_0[0] = get_internal_image(1033);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(5, 1);
        alterables->values.set(6, 10);
        alterables->values.set(7, 1);
    }
};
FrameObject * create_levelmovingplatform1_3875(int x, int y)
{
    return new (Active::pool.create()) LevelMovingPlatform1_3875(x, y);
}
static Image* images_mapicon_3876_0_0[1];
static Direction direction_mapicon_3876_0_0 = {0, 0, 0, 0, -1, images_mapicon_3876_0_0, 1};
static Image* images_mapicon_3876_0_1[1];
static Direction direction_mapicon_3876_0_1 = {1, 0, 0, 0, -1, images_mapicon_3876_0_1, 1};
static Image* images_mapicon_3876_0_2[10];
static Direction direction_mapicon_3876_0_2 = {2, 50, 50, 0, -1, images_mapicon_3876_0_2, 10};
static Animation anim_mapicon_3876_0 = {&direction_mapicon_3876_0_0, &direction_mapicon_3876_0_1, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, &direction_mapicon_3876_0_2, NULL, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0, &direction_mapicon_3876_0_0};
static Animation * anim_array_mapicon_3876[1] = {&anim_mapicon_3876_0};
static Animations anim_mapicon_3876 = {1, &anim_array_mapicon_3876[0]};
static bool anim_mapicon_3876_initialized;
class MapIcon_3876 : public Active
{
public:
    MapIcon_3876(int x, int y) : Active(x, y, MapIcon_3876_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Map icon", 8);
#endif
        set_visible(false);
        this->animations = &anim_mapicon_3876;
        if (!anim_mapicon_3876_initialized) {
            anim_mapicon_3876_initialized = true;
            images_mapicon_3876_0_0[0] = get_internal_image(14009);
            images_mapicon_3876_0_1[0] = get_internal_image(11571);
            images_mapicon_3876_0_2[0] = get_internal_image(11571);
            images_mapicon_3876_0_2[1] = get_internal_image(11572);
            images_mapicon_3876_0_2[2] = get_internal_image(11573);
            images_mapicon_3876_0_2[3] = get_internal_image(11574);
            images_mapicon_3876_0_2[4] = get_internal_image(11575);
            images_mapicon_3876_0_2[5] = get_internal_image(11576);
            images_mapicon_3876_0_2[6] = get_internal_image(11577);
            images_mapicon_3876_0_2[7] = get_internal_image(11578);
            images_mapicon_3876_0_2[8] = get_internal_image(11579);
            images_mapicon_3876_0_2[9] = get_internal_image(11580);
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
FrameObject * create_mapicon_3876(int x, int y)
{
    return new (Active::pool.create()) MapIcon_3876(x, y);
}
class EnemyInfo_3877 : public TextBlitter
{
public:
    EnemyInfo_3877(int x, int y) : TextBlitter(x, y, EnemyInfo_3877_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy Info", 10);
#endif
        width = 120;
        height = 20;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_LEFT | ALIGN_TOP;
        static int charmap[256];
        static bool initialized = false;
        this->charmap = &charmap[0];
        charmap_str = &str_0123456789_abcdefghijklmnopqrstuvwxyz_abcdefghijklmnopqrstuvwxyz_2;
        if (!initialized) {
            initialized = true;
            initialize(*charmap_str);
        }
        transparent_color = Color(0, 0, 0);
        wrap = true;
        set_text(std::string("NAME", 4));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_enemyinfo_3877(int x, int y)
{
    return new (TextBlitter::pool.create()) EnemyInfo_3877(x, y);
}
class EnemyProfiles_3878 : public Text
{
public:
    EnemyProfiles_3878(int x, int y) : Text(x, y, EnemyProfiles_3878_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Enemy Profiles", 14);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("0Turretus", 9));
        add_line(std::string("0Dragonfly", 10));
        add_line(std::string("0Ganseki Jr.", 12));
        add_line(std::string("0Cacteon", 8));
        add_line(std::string("1Spore Pod", 10));
        add_line(std::string("0Star Flounder", 14));
        add_line(std::string("0Hunter Snake", 13));
        add_line(std::string("0Mad Hunter Snake", 17));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("1Hopper", 7));
        add_line(std::string("1Slug", 5));
        add_line(std::string("0Iris", 5));
        add_line(std::string("1Extractor", 10));
        add_line(std::string("0Golem", 6));
        add_line(std::string("1Fire Spitter", 13));
        add_line(std::string("0Claw", 5));
        add_line(std::string("1Sentinel", 9));
        add_line(std::string("1Ganseki", 8));
        add_line(std::string("0Bone Golem", 11));
        add_line(std::string("0Firefly", 8));
        add_line(std::string("0Slime", 6));
        add_line(std::string("0Iron Worm", 10));
        add_line(std::string("0Chomper", 8));
        add_line(std::string("0Big Chomper", 12));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("1Mantalith", 10));
        add_line(std::string("0Coil", 5));
        add_line(std::string("0Trafficle", 10));
        add_line(std::string("2Super Turretus", 15));
        add_line(std::string("1Flare Cannon", 13));
        add_line(std::string("2Roller", 7));
        add_line(std::string("0Duster", 7));
        add_line(std::string("1Ghetto Shell", 13));
        add_line(std::string("1S.A.M.U.", 9));
        add_line(std::string("1Serpentine", 11));
        add_line(std::string("3Robopanther", 12));
        add_line(std::string("2Drone", 6));
        add_line(std::string("1Axle Turret", 12));
        add_line(std::string("1Rotorblade", 11));
        add_line(std::string("1Hopper mkII", 12));
        add_line(std::string("0Magmeon", 8));
        add_line(std::string("3DNA Cannon", 11));
        add_line(std::string("1Pelletizer", 11));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("2Kujacker", 9));
        add_line(std::string("1Meteor Roller", 14));
        add_line(std::string("0Bamboo Turretus", 16));
        add_line(std::string("1Bullfrag", 9));
        add_line(std::string("0BuoyBuoy", 9));
        add_line(std::string("0Torpedo Shark", 14));
        add_line(std::string("1Bubblorbiter", 13));
        add_line(std::string("3Neera Li", 9));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("3Robogunship", 12));
        add_line(std::string("3Shade Trooper", 14));
        add_line(std::string("0Seeker", 7));
        add_line(std::string("1Pushup", 7));
        add_line(std::string("2Roboshrimp", 11));
        add_line(std::string("1Lava Squid", 11));
        add_line(std::string("1Keymaster Squid", 16));
        add_line(std::string("1Saucer", 7));
        add_line(std::string("1Tankbot", 8));
        add_line(std::string("1Syntax (Spider Armor)", 22));
        add_line(std::string("1Laser Iris", 11));
        add_line(std::string("0Metal Pup", 10));
        add_line(std::string("1Blade Orbiter", 14));
        add_line(std::string("0Shock Puppet", 13));
        add_line(std::string("3Rocket Puncher", 15));
        add_line(std::string("1Crystal Basher", 15));
        add_line(std::string("2Biker Ninja", 12));
        add_line(std::string("3Spade", 6));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("1Sunflora", 9));
        add_line(std::string("0Stinger", 8));
        add_line(std::string("1Stinger Nest", 13));
        add_line(std::string("4Terreon", 8));
        add_line(std::string("0Obelisk", 8));
        add_line(std::string("3Holodragon", 11));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("1Syntax (Flame Armor)", 21));
        add_line(std::string("2Sattelite", 10));
        add_line(std::string("2Grappler", 9));
        add_line(std::string("2Chopper", 8));
        add_line(std::string("0Drillsat", 9));
        add_line(std::string("3Treadnought", 12));
        add_line(std::string("3Absolution", 11));
        add_line(std::string("3Sparky", 7));
        add_line(std::string());
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font2.bold;
        italic = font2.italic;
        font = get_font(font2.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_enemyprofiles_3878(int x, int y)
{
    return new (Text::pool.create()) EnemyProfiles_3878(x, y);
}
static Image* images_guidifficulty_3879_0_0[5];
static Direction direction_guidifficulty_3879_0_0 = {0, 0, 0, 0, 1, images_guidifficulty_3879_0_0, 5};
static Animation anim_guidifficulty_3879_0 = {&direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, NULL, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0, &direction_guidifficulty_3879_0_0};
static Animation * anim_array_guidifficulty_3879[1] = {&anim_guidifficulty_3879_0};
static Animations anim_guidifficulty_3879 = {1, &anim_array_guidifficulty_3879[0]};
static bool anim_guidifficulty_3879_initialized;
class GUIDifficulty_3879 : public Active
{
public:
    GUIDifficulty_3879(int x, int y) : Active(x, y, GUIDifficulty_3879_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Difficulty", 14);
#endif
        set_visible(false);
        this->animations = &anim_guidifficulty_3879;
        if (!anim_guidifficulty_3879_initialized) {
            anim_guidifficulty_3879_initialized = true;
            images_guidifficulty_3879_0_0[0] = get_internal_image(13904);
            images_guidifficulty_3879_0_0[1] = get_internal_image(13906);
            images_guidifficulty_3879_0_0[2] = get_internal_image(13907);
            images_guidifficulty_3879_0_0[3] = get_internal_image(13666);
            images_guidifficulty_3879_0_0[4] = get_internal_image(14005);
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
FrameObject * create_guidifficulty_3879(int x, int y)
{
    return new (Active::pool.create()) GUIDifficulty_3879(x, y);
}
static Image* images_active_3880_0_0[1];
static Direction direction_active_3880_0_0 = {0, 20, 20, 0, -1, images_active_3880_0_0, 1};
static Image* images_active_3880_0_1[8];
static Direction direction_active_3880_0_1 = {1, 20, 20, 0, -1, images_active_3880_0_1, 8};
static Image* images_active_3880_0_2[15];
static Direction direction_active_3880_0_2 = {2, 50, 50, 0, -1, images_active_3880_0_2, 15};
static Image* images_active_3880_0_3[7];
static Direction direction_active_3880_0_3 = {3, 25, 25, 6, 6, images_active_3880_0_3, 7};
static Image* images_active_3880_0_4[6];
static Direction direction_active_3880_0_4 = {4, 25, 25, 0, -1, images_active_3880_0_4, 6};
static Image* images_active_3880_0_5[4];
static Direction direction_active_3880_0_5 = {5, 50, 50, 0, -1, images_active_3880_0_5, 4};
static Image* images_active_3880_0_6[24];
static Direction direction_active_3880_0_6 = {6, 100, 100, 0, -1, images_active_3880_0_6, 24};
static Image* images_active_3880_0_11[13];
static Direction direction_active_3880_0_11 = {11, 20, 20, 8, -1, images_active_3880_0_11, 13};
static Image* images_active_3880_0_12[7];
static Direction direction_active_3880_0_12 = {12, 18, 18, 0, -1, images_active_3880_0_12, 7};
static Image* images_active_3880_0_13[8];
static Direction direction_active_3880_0_13 = {13, 35, 35, 0, -1, images_active_3880_0_13, 8};
static Image* images_active_3880_0_14[12];
static Direction direction_active_3880_0_14 = {14, 25, 25, 0, -1, images_active_3880_0_14, 12};
static Image* images_active_3880_0_15[4];
static Direction direction_active_3880_0_15 = {15, 50, 50, 0, 2, images_active_3880_0_15, 4};
static Image* images_active_3880_0_16[4];
static Direction direction_active_3880_0_16 = {16, 100, 100, 0, -1, images_active_3880_0_16, 4};
static Image* images_active_3880_0_17[1];
static Direction direction_active_3880_0_17 = {17, 50, 50, 0, 1, images_active_3880_0_17, 1};
static Image* images_active_3880_0_18[8];
static Direction direction_active_3880_0_18 = {18, 20, 20, 0, -1, images_active_3880_0_18, 8};
static Image* images_active_3880_0_19[3];
static Direction direction_active_3880_0_19 = {19, 50, 50, 0, -1, images_active_3880_0_19, 3};
static Image* images_active_3880_0_20[1];
static Direction direction_active_3880_0_20 = {20, 7, 7, 0, -1, images_active_3880_0_20, 1};
static Image* images_active_3880_0_21[3];
static Direction direction_active_3880_0_21 = {21, 100, 100, 0, -1, images_active_3880_0_21, 3};
static Image* images_active_3880_0_22[10];
static Direction direction_active_3880_0_22 = {22, 50, 50, 0, -1, images_active_3880_0_22, 10};
static Image* images_active_3880_0_23[1];
static Direction direction_active_3880_0_23 = {23, 50, 50, 0, 1, images_active_3880_0_23, 1};
static Image* images_active_3880_0_24[1];
static Direction direction_active_3880_0_24 = {24, 50, 50, 0, 1, images_active_3880_0_24, 1};
static Animation anim_active_3880_0 = {&direction_active_3880_0_0, &direction_active_3880_0_1, &direction_active_3880_0_2, &direction_active_3880_0_3, &direction_active_3880_0_4, &direction_active_3880_0_5, &direction_active_3880_0_6, &direction_active_3880_0_6, &direction_active_3880_0_6, &direction_active_3880_0_11, &direction_active_3880_0_11, &direction_active_3880_0_11, &direction_active_3880_0_12, &direction_active_3880_0_13, &direction_active_3880_0_14, &direction_active_3880_0_15, &direction_active_3880_0_16, &direction_active_3880_0_17, &direction_active_3880_0_18, &direction_active_3880_0_19, &direction_active_3880_0_20, &direction_active_3880_0_21, &direction_active_3880_0_22, &direction_active_3880_0_23, &direction_active_3880_0_24, &direction_active_3880_0_24, &direction_active_3880_0_24, &direction_active_3880_0_24, NULL, &direction_active_3880_0_0, &direction_active_3880_0_0, &direction_active_3880_0_0};
static Animation * anim_array_active_3880[1] = {&anim_active_3880_0};
static Animations anim_active_3880 = {1, &anim_array_active_3880[0]};
static bool anim_active_3880_initialized;
class Active_3880 : public Active
{
public:
    Active_3880(int x, int y) : Active(x, y, Active_3880_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_3880;
        if (!anim_active_3880_initialized) {
            anim_active_3880_initialized = true;
            images_active_3880_0_0[0] = get_internal_image(14087);
            images_active_3880_0_1[0] = get_internal_image(1510);
            images_active_3880_0_1[1] = get_internal_image(1511);
            images_active_3880_0_1[2] = get_internal_image(1529);
            images_active_3880_0_1[3] = get_internal_image(1542);
            images_active_3880_0_1[4] = get_internal_image(1550);
            images_active_3880_0_1[5] = get_internal_image(1542);
            images_active_3880_0_1[6] = get_internal_image(1529);
            images_active_3880_0_1[7] = get_internal_image(1511);
            images_active_3880_0_2[0] = get_internal_image(931);
            images_active_3880_0_2[1] = get_internal_image(928);
            images_active_3880_0_2[2] = get_internal_image(948);
            images_active_3880_0_2[3] = get_internal_image(1097);
            images_active_3880_0_2[4] = get_internal_image(1125);
            images_active_3880_0_2[5] = get_internal_image(971);
            images_active_3880_0_2[6] = get_internal_image(1106);
            images_active_3880_0_2[7] = get_internal_image(1098);
            images_active_3880_0_2[8] = get_internal_image(1099);
            images_active_3880_0_2[9] = get_internal_image(1115);
            images_active_3880_0_2[10] = get_internal_image(1111);
            images_active_3880_0_2[11] = get_internal_image(1116);
            images_active_3880_0_2[12] = get_internal_image(1121);
            images_active_3880_0_2[13] = get_internal_image(1120);
            images_active_3880_0_2[14] = get_internal_image(1123);
            images_active_3880_0_3[0] = get_internal_image(4988);
            images_active_3880_0_3[1] = get_internal_image(4997);
            images_active_3880_0_3[2] = get_internal_image(4988);
            images_active_3880_0_3[3] = get_internal_image(4997);
            images_active_3880_0_3[4] = get_internal_image(4995);
            images_active_3880_0_3[5] = get_internal_image(4999);
            images_active_3880_0_3[6] = get_internal_image(4993);
            images_active_3880_0_4[0] = get_internal_image(1743);
            images_active_3880_0_4[1] = get_internal_image(1745);
            images_active_3880_0_4[2] = get_internal_image(1746);
            images_active_3880_0_4[3] = get_internal_image(1805);
            images_active_3880_0_4[4] = get_internal_image(1824);
            images_active_3880_0_4[5] = get_internal_image(1795);
            images_active_3880_0_5[0] = get_internal_image(1726);
            images_active_3880_0_5[1] = get_internal_image(1736);
            images_active_3880_0_5[2] = get_internal_image(1725);
            images_active_3880_0_5[3] = get_internal_image(1733);
            images_active_3880_0_6[0] = get_internal_image(705);
            images_active_3880_0_6[1] = get_internal_image(1759);
            images_active_3880_0_6[2] = get_internal_image(1924);
            images_active_3880_0_6[3] = get_internal_image(1926);
            images_active_3880_0_6[4] = get_internal_image(1959);
            images_active_3880_0_6[5] = get_internal_image(1960);
            images_active_3880_0_6[6] = get_internal_image(1541);
            images_active_3880_0_6[7] = get_internal_image(1996);
            images_active_3880_0_6[8] = get_internal_image(1998);
            images_active_3880_0_6[9] = get_internal_image(1999);
            images_active_3880_0_6[10] = get_internal_image(1997);
            images_active_3880_0_6[11] = get_internal_image(2000);
            images_active_3880_0_6[12] = get_internal_image(705);
            images_active_3880_0_6[13] = get_internal_image(1759);
            images_active_3880_0_6[14] = get_internal_image(1924);
            images_active_3880_0_6[15] = get_internal_image(1926);
            images_active_3880_0_6[16] = get_internal_image(1959);
            images_active_3880_0_6[17] = get_internal_image(1960);
            images_active_3880_0_6[18] = get_internal_image(2001);
            images_active_3880_0_6[19] = get_internal_image(2003);
            images_active_3880_0_6[20] = get_internal_image(2004);
            images_active_3880_0_6[21] = get_internal_image(2005);
            images_active_3880_0_6[22] = get_internal_image(2002);
            images_active_3880_0_6[23] = get_internal_image(2006);
            images_active_3880_0_11[0] = get_internal_image(873);
            images_active_3880_0_11[1] = get_internal_image(6048);
            images_active_3880_0_11[2] = get_internal_image(6126);
            images_active_3880_0_11[3] = get_internal_image(6125);
            images_active_3880_0_11[4] = get_internal_image(6039);
            images_active_3880_0_11[5] = get_internal_image(6033);
            images_active_3880_0_11[6] = get_internal_image(6040);
            images_active_3880_0_11[7] = get_internal_image(168);
            images_active_3880_0_11[8] = get_internal_image(6170);
            images_active_3880_0_11[9] = get_internal_image(6032);
            images_active_3880_0_11[10] = get_internal_image(873);
            images_active_3880_0_11[11] = get_internal_image(866);
            images_active_3880_0_11[12] = get_internal_image(876);
            images_active_3880_0_12[0] = get_internal_image(2205);
            images_active_3880_0_12[1] = get_internal_image(2425);
            images_active_3880_0_12[2] = get_internal_image(2456);
            images_active_3880_0_12[3] = get_internal_image(2457);
            images_active_3880_0_12[4] = get_internal_image(2458);
            images_active_3880_0_12[5] = get_internal_image(2459);
            images_active_3880_0_12[6] = get_internal_image(2460);
            images_active_3880_0_13[0] = get_internal_image(2785);
            images_active_3880_0_13[1] = get_internal_image(2783);
            images_active_3880_0_13[2] = get_internal_image(2784);
            images_active_3880_0_13[3] = get_internal_image(2786);
            images_active_3880_0_13[4] = get_internal_image(2784);
            images_active_3880_0_13[5] = get_internal_image(2783);
            images_active_3880_0_13[6] = get_internal_image(2785);
            images_active_3880_0_13[7] = get_internal_image(2787);
            images_active_3880_0_14[0] = get_internal_image(6023);
            images_active_3880_0_14[1] = get_internal_image(2215);
            images_active_3880_0_14[2] = get_internal_image(2199);
            images_active_3880_0_14[3] = get_internal_image(2195);
            images_active_3880_0_14[4] = get_internal_image(6023);
            images_active_3880_0_14[5] = get_internal_image(2214);
            images_active_3880_0_14[6] = get_internal_image(2208);
            images_active_3880_0_14[7] = get_internal_image(2209);
            images_active_3880_0_14[8] = get_internal_image(2207);
            images_active_3880_0_14[9] = get_internal_image(2210);
            images_active_3880_0_14[10] = get_internal_image(2211);
            images_active_3880_0_14[11] = get_internal_image(2213);
            images_active_3880_0_15[0] = get_internal_image(3229);
            images_active_3880_0_15[1] = get_internal_image(9645);
            images_active_3880_0_15[2] = get_internal_image(9680);
            images_active_3880_0_15[3] = get_internal_image(3262);
            images_active_3880_0_16[0] = get_internal_image(13090);
            images_active_3880_0_16[1] = get_internal_image(13089);
            images_active_3880_0_16[2] = get_internal_image(13091);
            images_active_3880_0_16[3] = get_internal_image(13092);
            images_active_3880_0_17[0] = get_internal_image(3335);
            images_active_3880_0_18[0] = get_internal_image(13190);
            images_active_3880_0_18[1] = get_internal_image(13191);
            images_active_3880_0_18[2] = get_internal_image(13192);
            images_active_3880_0_18[3] = get_internal_image(13193);
            images_active_3880_0_18[4] = get_internal_image(13194);
            images_active_3880_0_18[5] = get_internal_image(13195);
            images_active_3880_0_18[6] = get_internal_image(13196);
            images_active_3880_0_18[7] = get_internal_image(13197);
            images_active_3880_0_19[0] = get_internal_image(13116);
            images_active_3880_0_19[1] = get_internal_image(13117);
            images_active_3880_0_19[2] = get_internal_image(13118);
            images_active_3880_0_20[0] = get_internal_image(13176);
            images_active_3880_0_21[0] = get_internal_image(8636);
            images_active_3880_0_21[1] = get_internal_image(8638);
            images_active_3880_0_21[2] = get_internal_image(8639);
            images_active_3880_0_22[0] = get_internal_image(8493);
            images_active_3880_0_22[1] = get_internal_image(8517);
            images_active_3880_0_22[2] = get_internal_image(8518);
            images_active_3880_0_22[3] = get_internal_image(8519);
            images_active_3880_0_22[4] = get_internal_image(8520);
            images_active_3880_0_22[5] = get_internal_image(8521);
            images_active_3880_0_22[6] = get_internal_image(8522);
            images_active_3880_0_22[7] = get_internal_image(8523);
            images_active_3880_0_22[8] = get_internal_image(8524);
            images_active_3880_0_22[9] = get_internal_image(8525);
            images_active_3880_0_23[0] = get_internal_image(8681);
            images_active_3880_0_24[0] = get_internal_image(14057);
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
FrameObject * create_active_3880(int x, int y)
{
    return new (Active::pool.create()) Active_3880(x, y);
}
class Backdrop_3881 : public Backdrop
{
public:
    Backdrop_3881(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(451);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_3881(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_3881(x, y);
}
static Image* images_fallencharacter_3882_0_0[20];
static Direction direction_fallencharacter_3882_0_0 = {0, 12, 12, 0, -1, images_fallencharacter_3882_0_0, 20};
static Image* images_fallencharacter_3882_0_1[13];
static Direction direction_fallencharacter_3882_0_1 = {1, 12, 12, 0, -1, images_fallencharacter_3882_0_1, 13};
static Image* images_fallencharacter_3882_0_2[23];
static Direction direction_fallencharacter_3882_0_2 = {2, 20, 20, 0, -1, images_fallencharacter_3882_0_2, 23};
static Image* images_fallencharacter_3882_0_4[5];
static Direction direction_fallencharacter_3882_0_4 = {4, 80, 80, 0, -1, images_fallencharacter_3882_0_4, 5};
static Image* images_fallencharacter_3882_0_8[1];
static Direction direction_fallencharacter_3882_0_8 = {8, 50, 50, 0, 1, images_fallencharacter_3882_0_8, 1};
static Animation anim_fallencharacter_3882_0 = {&direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_1, &direction_fallencharacter_3882_0_2, NULL, &direction_fallencharacter_3882_0_4, &direction_fallencharacter_3882_0_4, NULL, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, &direction_fallencharacter_3882_0_8, NULL, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0, &direction_fallencharacter_3882_0_0};
static Image* images_fallencharacter_3882_8_0[7];
static Direction direction_fallencharacter_3882_8_0 = {0, 14, 14, 6, -1, images_fallencharacter_3882_8_0, 7};
static Image* images_fallencharacter_3882_8_1[6];
static Direction direction_fallencharacter_3882_8_1 = {1, 20, 20, 5, -1, images_fallencharacter_3882_8_1, 6};
static Image* images_fallencharacter_3882_8_2[6];
static Direction direction_fallencharacter_3882_8_2 = {2, 14, 14, 5, -1, images_fallencharacter_3882_8_2, 6};
static Image* images_fallencharacter_3882_8_4[3];
static Direction direction_fallencharacter_3882_8_4 = {4, 1, 14, 2, -1, images_fallencharacter_3882_8_4, 3};
static Animation anim_fallencharacter_3882_8 = {&direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_1, &direction_fallencharacter_3882_8_2, NULL, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, &direction_fallencharacter_3882_8_4, NULL, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0, &direction_fallencharacter_3882_8_0};
static Image* images_fallencharacter_3882_11_0[10];
static Direction direction_fallencharacter_3882_11_0 = {0, 25, 25, 9, 5, images_fallencharacter_3882_11_0, 10};
static Image* images_fallencharacter_3882_11_1[17];
static Direction direction_fallencharacter_3882_11_1 = {1, 20, 20, 0, 1, images_fallencharacter_3882_11_1, 17};
static Image* images_fallencharacter_3882_11_2[13];
static Direction direction_fallencharacter_3882_11_2 = {2, 25, 25, 12, 2, images_fallencharacter_3882_11_2, 13};
static Image* images_fallencharacter_3882_11_4[9];
static Direction direction_fallencharacter_3882_11_4 = {4, 15, 15, 0, 1, images_fallencharacter_3882_11_4, 9};
static Animation anim_fallencharacter_3882_11 = {&direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_1, &direction_fallencharacter_3882_11_2, NULL, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, &direction_fallencharacter_3882_11_4, NULL, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0, &direction_fallencharacter_3882_11_0};
static Animation * anim_array_fallencharacter_3882[12] = {&anim_fallencharacter_3882_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_fallencharacter_3882_8, NULL, NULL, &anim_fallencharacter_3882_11};
static Animations anim_fallencharacter_3882 = {12, &anim_array_fallencharacter_3882[0]};
static bool anim_fallencharacter_3882_initialized;
class FallenCharacter_3882 : public Active
{
public:
    FallenCharacter_3882(int x, int y) : Active(x, y, FallenCharacter_3882_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fallen character", 16);
#endif
        this->animations = &anim_fallencharacter_3882;
        if (!anim_fallencharacter_3882_initialized) {
            anim_fallencharacter_3882_initialized = true;
            images_fallencharacter_3882_0_0[0] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[1] = get_internal_image(10289);
            images_fallencharacter_3882_0_0[2] = get_internal_image(10292);
            images_fallencharacter_3882_0_0[3] = get_internal_image(10293);
            images_fallencharacter_3882_0_0[4] = get_internal_image(10294);
            images_fallencharacter_3882_0_0[5] = get_internal_image(10281);
            images_fallencharacter_3882_0_0[6] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[7] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[8] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[9] = get_internal_image(10281);
            images_fallencharacter_3882_0_0[10] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[11] = get_internal_image(10281);
            images_fallencharacter_3882_0_0[12] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[13] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[14] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[15] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[16] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[17] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[18] = get_internal_image(10285);
            images_fallencharacter_3882_0_0[19] = get_internal_image(10285);
            images_fallencharacter_3882_0_1[0] = get_internal_image(5763);
            images_fallencharacter_3882_0_1[1] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[2] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[3] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[4] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[5] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[6] = get_internal_image(5762);
            images_fallencharacter_3882_0_1[7] = get_internal_image(5764);
            images_fallencharacter_3882_0_1[8] = get_internal_image(5765);
            images_fallencharacter_3882_0_1[9] = get_internal_image(5766);
            images_fallencharacter_3882_0_1[10] = get_internal_image(5767);
            images_fallencharacter_3882_0_1[11] = get_internal_image(5768);
            images_fallencharacter_3882_0_1[12] = get_internal_image(5769);
            images_fallencharacter_3882_0_2[0] = get_internal_image(10170);
            images_fallencharacter_3882_0_2[1] = get_internal_image(10169);
            images_fallencharacter_3882_0_2[2] = get_internal_image(10170);
            images_fallencharacter_3882_0_2[3] = get_internal_image(10169);
            images_fallencharacter_3882_0_2[4] = get_internal_image(10170);
            images_fallencharacter_3882_0_2[5] = get_internal_image(10169);
            images_fallencharacter_3882_0_2[6] = get_internal_image(10171);
            images_fallencharacter_3882_0_2[7] = get_internal_image(10172);
            images_fallencharacter_3882_0_2[8] = get_internal_image(10173);
            images_fallencharacter_3882_0_2[9] = get_internal_image(10174);
            images_fallencharacter_3882_0_2[10] = get_internal_image(10175);
            images_fallencharacter_3882_0_2[11] = get_internal_image(10176);
            images_fallencharacter_3882_0_2[12] = get_internal_image(10177);
            images_fallencharacter_3882_0_2[13] = get_internal_image(10178);
            images_fallencharacter_3882_0_2[14] = get_internal_image(10179);
            images_fallencharacter_3882_0_2[15] = get_internal_image(10180);
            images_fallencharacter_3882_0_2[16] = get_internal_image(10181);
            images_fallencharacter_3882_0_2[17] = get_internal_image(10182);
            images_fallencharacter_3882_0_2[18] = get_internal_image(10172);
            images_fallencharacter_3882_0_2[19] = get_internal_image(10172);
            images_fallencharacter_3882_0_2[20] = get_internal_image(10172);
            images_fallencharacter_3882_0_2[21] = get_internal_image(10172);
            images_fallencharacter_3882_0_2[22] = get_internal_image(10171);
            images_fallencharacter_3882_0_4[0] = get_internal_image(1141);
            images_fallencharacter_3882_0_4[1] = get_internal_image(12043);
            images_fallencharacter_3882_0_4[2] = get_internal_image(3023);
            images_fallencharacter_3882_0_4[3] = get_internal_image(12041);
            images_fallencharacter_3882_0_4[4] = get_internal_image(1809);
            images_fallencharacter_3882_0_8[0] = get_internal_image(1316);
            images_fallencharacter_3882_8_0[0] = get_internal_image(10263);
            images_fallencharacter_3882_8_0[1] = get_internal_image(10286);
            images_fallencharacter_3882_8_0[2] = get_internal_image(10288);
            images_fallencharacter_3882_8_0[3] = get_internal_image(10287);
            images_fallencharacter_3882_8_0[4] = get_internal_image(9640);
            images_fallencharacter_3882_8_0[5] = get_internal_image(9641);
            images_fallencharacter_3882_8_0[6] = get_internal_image(10290);
            images_fallencharacter_3882_8_1[0] = get_internal_image(5763);
            images_fallencharacter_3882_8_1[1] = get_internal_image(868);
            images_fallencharacter_3882_8_1[2] = get_internal_image(491);
            images_fallencharacter_3882_8_1[3] = get_internal_image(325);
            images_fallencharacter_3882_8_1[4] = get_internal_image(663);
            images_fallencharacter_3882_8_1[5] = get_internal_image(664);
            images_fallencharacter_3882_8_2[0] = get_internal_image(10170);
            images_fallencharacter_3882_8_2[1] = get_internal_image(10188);
            images_fallencharacter_3882_8_2[2] = get_internal_image(10184);
            images_fallencharacter_3882_8_2[3] = get_internal_image(10186);
            images_fallencharacter_3882_8_2[4] = get_internal_image(10183);
            images_fallencharacter_3882_8_2[5] = get_internal_image(10187);
            images_fallencharacter_3882_8_4[0] = get_internal_image(1141);
            images_fallencharacter_3882_8_4[1] = get_internal_image(8041);
            images_fallencharacter_3882_8_4[2] = get_internal_image(8075);
            images_fallencharacter_3882_11_0[0] = get_internal_image(10281);
            images_fallencharacter_3882_11_0[1] = get_internal_image(10263);
            images_fallencharacter_3882_11_0[2] = get_internal_image(10281);
            images_fallencharacter_3882_11_0[3] = get_internal_image(10281);
            images_fallencharacter_3882_11_0[4] = get_internal_image(10281);
            images_fallencharacter_3882_11_0[5] = get_internal_image(10276);
            images_fallencharacter_3882_11_0[6] = get_internal_image(10277);
            images_fallencharacter_3882_11_0[7] = get_internal_image(10278);
            images_fallencharacter_3882_11_0[8] = get_internal_image(10279);
            images_fallencharacter_3882_11_0[9] = get_internal_image(10259);
            images_fallencharacter_3882_11_1[0] = get_internal_image(5763);
            images_fallencharacter_3882_11_1[1] = get_internal_image(5762);
            images_fallencharacter_3882_11_1[2] = get_internal_image(5763);
            images_fallencharacter_3882_11_1[3] = get_internal_image(5762);
            images_fallencharacter_3882_11_1[4] = get_internal_image(5775);
            images_fallencharacter_3882_11_1[5] = get_internal_image(5757);
            images_fallencharacter_3882_11_1[6] = get_internal_image(5760);
            images_fallencharacter_3882_11_1[7] = get_internal_image(5761);
            images_fallencharacter_3882_11_1[8] = get_internal_image(5774);
            images_fallencharacter_3882_11_1[9] = get_internal_image(5776);
            images_fallencharacter_3882_11_1[10] = get_internal_image(5771);
            images_fallencharacter_3882_11_1[11] = get_internal_image(5773);
            images_fallencharacter_3882_11_1[12] = get_internal_image(5776);
            images_fallencharacter_3882_11_1[13] = get_internal_image(5771);
            images_fallencharacter_3882_11_1[14] = get_internal_image(5772);
            images_fallencharacter_3882_11_1[15] = get_internal_image(5770);
            images_fallencharacter_3882_11_1[16] = get_internal_image(5012);
            images_fallencharacter_3882_11_2[0] = get_internal_image(10132);
            images_fallencharacter_3882_11_2[1] = get_internal_image(10133);
            images_fallencharacter_3882_11_2[2] = get_internal_image(10131);
            images_fallencharacter_3882_11_2[3] = get_internal_image(10135);
            images_fallencharacter_3882_11_2[4] = get_internal_image(10136);
            images_fallencharacter_3882_11_2[5] = get_internal_image(10134);
            images_fallencharacter_3882_11_2[6] = get_internal_image(10138);
            images_fallencharacter_3882_11_2[7] = get_internal_image(10139);
            images_fallencharacter_3882_11_2[8] = get_internal_image(10140);
            images_fallencharacter_3882_11_2[9] = get_internal_image(10141);
            images_fallencharacter_3882_11_2[10] = get_internal_image(10137);
            images_fallencharacter_3882_11_2[11] = get_internal_image(10143);
            images_fallencharacter_3882_11_2[12] = get_internal_image(10144);
            images_fallencharacter_3882_11_4[0] = get_internal_image(5203);
            images_fallencharacter_3882_11_4[1] = get_internal_image(5136);
            images_fallencharacter_3882_11_4[2] = get_internal_image(5203);
            images_fallencharacter_3882_11_4[3] = get_internal_image(1285);
            images_fallencharacter_3882_11_4[4] = get_internal_image(936);
            images_fallencharacter_3882_11_4[5] = get_internal_image(2514);
            images_fallencharacter_3882_11_4[6] = get_internal_image(5049);
            images_fallencharacter_3882_11_4[7] = get_internal_image(7550);
            images_fallencharacter_3882_11_4[8] = get_internal_image(7266);
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
FrameObject * create_fallencharacter_3882(int x, int y)
{
    return new (Active::pool.create()) FallenCharacter_3882(x, y);
}
static Image* images_floorlight_3883_0_0[1];
static Direction direction_floorlight_3883_0_0 = {0, 50, 50, 0, 1, images_floorlight_3883_0_0, 1};
static Animation anim_floorlight_3883_0 = {&direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, NULL, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0, &direction_floorlight_3883_0_0};
static Animation * anim_array_floorlight_3883[1] = {&anim_floorlight_3883_0};
static Animations anim_floorlight_3883 = {1, &anim_array_floorlight_3883[0]};
static bool anim_floorlight_3883_initialized;
class FloorLight_3883 : public Active
{
public:
    FloorLight_3883(int x, int y) : Active(x, y, FloorLight_3883_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Floor light", 11);
#endif
        this->animations = &anim_floorlight_3883;
        if (!anim_floorlight_3883_initialized) {
            anim_floorlight_3883_initialized = true;
            images_floorlight_3883_0_0[0] = get_internal_image(2605);
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
FrameObject * create_floorlight_3883(int x, int y)
{
    return new (Active::pool.create()) FloorLight_3883(x, y);
}
static Image* images_countdowncrystal_3884_0_24[7];
static Direction direction_countdowncrystal_3884_0_24 = {24, 15, 15, 0, -1, images_countdowncrystal_3884_0_24, 7};
static Animation anim_countdowncrystal_3884_0 = {&direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, NULL, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24, &direction_countdowncrystal_3884_0_24};
static Animation * anim_array_countdowncrystal_3884[1] = {&anim_countdowncrystal_3884_0};
static Animations anim_countdowncrystal_3884 = {1, &anim_array_countdowncrystal_3884[0]};
static bool anim_countdowncrystal_3884_initialized;
class CountdownCrystal_3884 : public Active
{
public:
    CountdownCrystal_3884(int x, int y) : Active(x, y, CountdownCrystal_3884_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Countdown Crystal", 17);
#endif
        this->animations = &anim_countdowncrystal_3884;
        if (!anim_countdowncrystal_3884_initialized) {
            anim_countdowncrystal_3884_initialized = true;
            images_countdowncrystal_3884_0_24[0] = get_internal_image(1813);
            images_countdowncrystal_3884_0_24[1] = get_internal_image(1815);
            images_countdowncrystal_3884_0_24[2] = get_internal_image(1855);
            images_countdowncrystal_3884_0_24[3] = get_internal_image(1430);
            images_countdowncrystal_3884_0_24[4] = get_internal_image(2106);
            images_countdowncrystal_3884_0_24[5] = get_internal_image(2489);
            images_countdowncrystal_3884_0_24[6] = get_internal_image(2490);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(24);
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[1] = new PinballMovement(this);
        movements[1]->index = 1;
        ((PinballMovement*)movements[1])->set_max_speed(36);
        ((PinballMovement*)movements[1])->set_deceleration(0);
        ((PinballMovement*)movements[1])->set_gravity(25);
        set_movement(0);
        create_alterables();
        alterables->values.set(1, 128);
    }
};
FrameObject * create_countdowncrystal_3884(int x, int y)
{
    return new (Active::pool.create()) CountdownCrystal_3884(x, y);
}
static Image* images_marker_3885_0_0[1];
static Direction direction_marker_3885_0_0 = {0, 50, 50, 0, 1, images_marker_3885_0_0, 1};
static Animation anim_marker_3885_0 = {&direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, NULL, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0, &direction_marker_3885_0_0};
static Animation * anim_array_marker_3885[1] = {&anim_marker_3885_0};
static Animations anim_marker_3885 = {1, &anim_array_marker_3885[0]};
static bool anim_marker_3885_initialized;
class Marker_3885 : public Active
{
public:
    Marker_3885(int x, int y) : Active(x, y, Marker_3885_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Marker", 6);
#endif
        set_visible(false);
        this->animations = &anim_marker_3885;
        if (!anim_marker_3885_initialized) {
            anim_marker_3885_initialized = true;
            images_marker_3885_0_0[0] = get_internal_image(2519);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(1, 240);
    }
};
FrameObject * create_marker_3885(int x, int y)
{
    return new (Active::pool.create()) Marker_3885(x, y);
}
static Image* images_thrusterflame_3886_0_0[5];
static Direction direction_thrusterflame_3886_0_0 = {0, 50, 50, 0, -1, images_thrusterflame_3886_0_0, 5};
static Image* images_thrusterflame_3886_0_16[5];
static Direction direction_thrusterflame_3886_0_16 = {16, 50, 50, 0, -1, images_thrusterflame_3886_0_16, 5};
static Animation anim_thrusterflame_3886_0 = {&direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, NULL, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, &direction_thrusterflame_3886_0_16, NULL, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0, &direction_thrusterflame_3886_0_0};
static Animation * anim_array_thrusterflame_3886[1] = {&anim_thrusterflame_3886_0};
static Animations anim_thrusterflame_3886 = {1, &anim_array_thrusterflame_3886[0]};
static bool anim_thrusterflame_3886_initialized;
class ThrusterFlame_3886 : public Active
{
public:
    ThrusterFlame_3886(int x, int y) : Active(x, y, ThrusterFlame_3886_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Thruster_Flame", 14);
#endif
        this->animations = &anim_thrusterflame_3886;
        if (!anim_thrusterflame_3886_initialized) {
            anim_thrusterflame_3886_initialized = true;
            images_thrusterflame_3886_0_0[0] = get_internal_image(11511);
            images_thrusterflame_3886_0_0[1] = get_internal_image(11512);
            images_thrusterflame_3886_0_0[2] = get_internal_image(11513);
            images_thrusterflame_3886_0_0[3] = get_internal_image(11514);
            images_thrusterflame_3886_0_0[4] = get_internal_image(11515);
            images_thrusterflame_3886_0_16[0] = get_internal_image(2902);
            images_thrusterflame_3886_0_16[1] = get_internal_image(2915);
            images_thrusterflame_3886_0_16[2] = get_internal_image(2932);
            images_thrusterflame_3886_0_16[3] = get_internal_image(2934);
            images_thrusterflame_3886_0_16[4] = get_internal_image(2935);
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
FrameObject * create_thrusterflame_3886(int x, int y)
{
    return new (Active::pool.create()) ThrusterFlame_3886(x, y);
}
static Image* images_levelbackgroundplane2_3887_0_0[4];
static Direction direction_levelbackgroundplane2_3887_0_0 = {0, 100, 100, 0, -1, images_levelbackgroundplane2_3887_0_0, 4};
static Image* images_levelbackgroundplane2_3887_0_1[4];
static Direction direction_levelbackgroundplane2_3887_0_1 = {1, 100, 100, 0, -1, images_levelbackgroundplane2_3887_0_1, 4};
static Image* images_levelbackgroundplane2_3887_0_2[4];
static Direction direction_levelbackgroundplane2_3887_0_2 = {2, 100, 100, 0, -1, images_levelbackgroundplane2_3887_0_2, 4};
static Animation anim_levelbackgroundplane2_3887_0 = {&direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_1, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, &direction_levelbackgroundplane2_3887_0_2, NULL, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0, &direction_levelbackgroundplane2_3887_0_0};
static Animation * anim_array_levelbackgroundplane2_3887[1] = {&anim_levelbackgroundplane2_3887_0};
static Animations anim_levelbackgroundplane2_3887 = {1, &anim_array_levelbackgroundplane2_3887[0]};
static bool anim_levelbackgroundplane2_3887_initialized;
class LevelBackgroundPlane2_3887 : public Active
{
public:
    LevelBackgroundPlane2_3887(int x, int y) : Active(x, y, LevelBackgroundPlane2_3887_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Level_BackgroundPlane 2", 23);
#endif
        this->animations = &anim_levelbackgroundplane2_3887;
        if (!anim_levelbackgroundplane2_3887_initialized) {
            anim_levelbackgroundplane2_3887_initialized = true;
            images_levelbackgroundplane2_3887_0_0[0] = get_internal_image(10747);
            images_levelbackgroundplane2_3887_0_0[1] = get_internal_image(10749);
            images_levelbackgroundplane2_3887_0_0[2] = get_internal_image(10736);
            images_levelbackgroundplane2_3887_0_0[3] = get_internal_image(10746);
            images_levelbackgroundplane2_3887_0_1[0] = get_internal_image(10748);
            images_levelbackgroundplane2_3887_0_1[1] = get_internal_image(10751);
            images_levelbackgroundplane2_3887_0_1[2] = get_internal_image(10752);
            images_levelbackgroundplane2_3887_0_1[3] = get_internal_image(10757);
            images_levelbackgroundplane2_3887_0_2[0] = get_internal_image(10758);
            images_levelbackgroundplane2_3887_0_2[1] = get_internal_image(10760);
            images_levelbackgroundplane2_3887_0_2[2] = get_internal_image(10766);
            images_levelbackgroundplane2_3887_0_2[3] = get_internal_image(10750);
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
FrameObject * create_levelbackgroundplane2_3887(int x, int y)
{
    return new (Active::pool.create()) LevelBackgroundPlane2_3887(x, y);
}
static Image* images_torqueship_3888_0_0[8];
static Direction direction_torqueship_3888_0_0 = {0, 40, 40, 0, -1, images_torqueship_3888_0_0, 8};
static Image* images_torqueship_3888_0_1[1];
static Direction direction_torqueship_3888_0_1 = {1, 50, 50, 0, 1, images_torqueship_3888_0_1, 1};
static Image* images_torqueship_3888_0_16[8];
static Direction direction_torqueship_3888_0_16 = {16, 12, 12, 0, -1, images_torqueship_3888_0_16, 8};
static Animation anim_torqueship_3888_0 = {&direction_torqueship_3888_0_0, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_1, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, &direction_torqueship_3888_0_16, NULL, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0, &direction_torqueship_3888_0_0};
static Animation * anim_array_torqueship_3888[1] = {&anim_torqueship_3888_0};
static Animations anim_torqueship_3888 = {1, &anim_array_torqueship_3888[0]};
static bool anim_torqueship_3888_initialized;
class TorqueShip_3888 : public Active
{
public:
    TorqueShip_3888(int x, int y) : Active(x, y, TorqueShip_3888_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueShip", 10);
#endif
        this->animations = &anim_torqueship_3888;
        if (!anim_torqueship_3888_initialized) {
            anim_torqueship_3888_initialized = true;
            images_torqueship_3888_0_0[0] = get_internal_image(2415);
            images_torqueship_3888_0_0[1] = get_internal_image(2839);
            images_torqueship_3888_0_0[2] = get_internal_image(2870);
            images_torqueship_3888_0_0[3] = get_internal_image(2839);
            images_torqueship_3888_0_0[4] = get_internal_image(2415);
            images_torqueship_3888_0_0[5] = get_internal_image(2937);
            images_torqueship_3888_0_0[6] = get_internal_image(3117);
            images_torqueship_3888_0_0[7] = get_internal_image(2937);
            images_torqueship_3888_0_1[0] = get_internal_image(2547);
            images_torqueship_3888_0_16[0] = get_internal_image(964);
            images_torqueship_3888_0_16[1] = get_internal_image(1481);
            images_torqueship_3888_0_16[2] = get_internal_image(1482);
            images_torqueship_3888_0_16[3] = get_internal_image(1481);
            images_torqueship_3888_0_16[4] = get_internal_image(964);
            images_torqueship_3888_0_16[5] = get_internal_image(2883);
            images_torqueship_3888_0_16[6] = get_internal_image(2901);
            images_torqueship_3888_0_16[7] = get_internal_image(2883);
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
FrameObject * create_torqueship_3888(int x, int y)
{
    return new (Active::pool.create()) TorqueShip_3888(x, y);
}
static Image* images_torqueshiptail_3889_0_0[1];
static Direction direction_torqueshiptail_3889_0_0 = {0, 100, 100, 0, -1, images_torqueshiptail_3889_0_0, 1};
static Animation anim_torqueshiptail_3889_0 = {&direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, NULL, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0, &direction_torqueshiptail_3889_0_0};
static Animation * anim_array_torqueshiptail_3889[1] = {&anim_torqueshiptail_3889_0};
static Animations anim_torqueshiptail_3889 = {1, &anim_array_torqueshiptail_3889[0]};
static bool anim_torqueshiptail_3889_initialized;
class TorqueShipTail_3889 : public Active
{
public:
    TorqueShipTail_3889(int x, int y) : Active(x, y, TorqueShipTail_3889_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TorqueShip_Tail", 15);
#endif
        set_visible(false);
        this->animations = &anim_torqueshiptail_3889;
        if (!anim_torqueshiptail_3889_initialized) {
            anim_torqueshiptail_3889_initialized = true;
            images_torqueshiptail_3889_0_0[0] = get_internal_image(3324);
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
FrameObject * create_torqueshiptail_3889(int x, int y)
{
    return new (Active::pool.create()) TorqueShipTail_3889(x, y);
}
class DVWall5_3890 : public Backdrop
{
public:
    DVWall5_3890(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("DV_Wall5", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(73);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_dvwall5_3890(int x, int y)
{
    return new (Backdrop::pool.create()) DVWall5_3890(x, y);
}
static Image* images_placeholdercharactertail_3891_0_0[12];
static Direction direction_placeholdercharactertail_3891_0_0 = {0, 18, 18, 0, -1, images_placeholdercharactertail_3891_0_0, 12};
static Image* images_placeholdercharactertail_3891_0_1[1];
static Direction direction_placeholdercharactertail_3891_0_1 = {1, 50, 50, 0, -1, images_placeholdercharactertail_3891_0_1, 1};
static Image* images_placeholdercharactertail_3891_0_17[1];
static Direction direction_placeholdercharactertail_3891_0_17 = {17, 50, 50, 0, -1, images_placeholdercharactertail_3891_0_17, 1};
static Animation anim_placeholdercharactertail_3891_0 = {&direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, &direction_placeholdercharactertail_3891_0_1, NULL, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_17, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0, &direction_placeholdercharactertail_3891_0_0};
static Animation * anim_array_placeholdercharactertail_3891[1] = {&anim_placeholdercharactertail_3891_0};
static Animations anim_placeholdercharactertail_3891 = {1, &anim_array_placeholdercharactertail_3891[0]};
static bool anim_placeholdercharactertail_3891_initialized;
class PlaceholderCharacterTail_3891 : public Active
{
public:
    PlaceholderCharacterTail_3891(int x, int y) : Active(x, y, PlaceholderCharacterTail_3891_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter_Tail", 25);
#endif
        this->animations = &anim_placeholdercharactertail_3891;
        if (!anim_placeholdercharactertail_3891_initialized) {
            anim_placeholdercharactertail_3891_initialized = true;
            images_placeholdercharactertail_3891_0_0[0] = get_internal_image(1704);
            images_placeholdercharactertail_3891_0_0[1] = get_internal_image(1705);
            images_placeholdercharactertail_3891_0_0[2] = get_internal_image(1708);
            images_placeholdercharactertail_3891_0_0[3] = get_internal_image(1712);
            images_placeholdercharactertail_3891_0_0[4] = get_internal_image(1713);
            images_placeholdercharactertail_3891_0_0[5] = get_internal_image(1715);
            images_placeholdercharactertail_3891_0_0[6] = get_internal_image(1716);
            images_placeholdercharactertail_3891_0_0[7] = get_internal_image(1883);
            images_placeholdercharactertail_3891_0_0[8] = get_internal_image(2520);
            images_placeholdercharactertail_3891_0_0[9] = get_internal_image(2531);
            images_placeholdercharactertail_3891_0_0[10] = get_internal_image(2532);
            images_placeholdercharactertail_3891_0_0[11] = get_internal_image(2534);
            images_placeholdercharactertail_3891_0_1[0] = get_internal_image(10332);
            images_placeholdercharactertail_3891_0_17[0] = get_internal_image(10301);
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
FrameObject * create_placeholdercharactertail_3891(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacterTail_3891(x, y);
}
static Image* images_placeholdercharacter_3892_0_0[1];
static Direction direction_placeholdercharacter_3892_0_0 = {0, 0, 0, 0, 1, images_placeholdercharacter_3892_0_0, 1};
static Image* images_placeholdercharacter_3892_0_1[1];
static Direction direction_placeholdercharacter_3892_0_1 = {1, 50, 50, 0, 1, images_placeholdercharacter_3892_0_1, 1};
static Image* images_placeholdercharacter_3892_0_17[1];
static Direction direction_placeholdercharacter_3892_0_17 = {17, 50, 50, 0, 1, images_placeholdercharacter_3892_0_17, 1};
static Animation anim_placeholdercharacter_3892_0 = {&direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, &direction_placeholdercharacter_3892_0_1, NULL, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_17, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0, &direction_placeholdercharacter_3892_0_0};
static Animation * anim_array_placeholdercharacter_3892[1] = {&anim_placeholdercharacter_3892_0};
static Animations anim_placeholdercharacter_3892 = {1, &anim_array_placeholdercharacter_3892[0]};
static bool anim_placeholdercharacter_3892_initialized;
class PlaceholderCharacter_3892 : public Active
{
public:
    PlaceholderCharacter_3892(int x, int y) : Active(x, y, PlaceholderCharacter_3892_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PlaceholderCharacter", 20);
#endif
        this->animations = &anim_placeholdercharacter_3892;
        if (!anim_placeholdercharacter_3892_initialized) {
            anim_placeholdercharacter_3892_initialized = true;
            images_placeholdercharacter_3892_0_0[0] = get_internal_image(5087);
            images_placeholdercharacter_3892_0_1[0] = get_internal_image(5905);
            images_placeholdercharacter_3892_0_17[0] = get_internal_image(5916);
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
FrameObject * create_placeholdercharacter_3892(int x, int y)
{
    return new (Active::pool.create()) PlaceholderCharacter_3892(x, y);
}
static Image* images_active_3893_0_0[1];
static Direction direction_active_3893_0_0 = {0, 50, 50, 0, 1, images_active_3893_0_0, 1};
static Animation anim_active_3893_0 = {&direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, NULL, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0, &direction_active_3893_0_0};
static Animation * anim_array_active_3893[1] = {&anim_active_3893_0};
static Animations anim_active_3893 = {1, &anim_array_active_3893[0]};
static bool anim_active_3893_initialized;
class Active_3893 : public Active
{
public:
    Active_3893(int x, int y) : Active(x, y, Active_3893_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_3893;
        if (!anim_active_3893_initialized) {
            anim_active_3893_initialized = true;
            images_active_3893_0_0[0] = get_internal_image(3201);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        blend_color = Color(255, 255, 255, 159);
        create_alterables();
    }
};
FrameObject * create_active_3893(int x, int y)
{
    return new (Active::pool.create()) Active_3893(x, y);
}
static Image* images_generaledge01_3894_0_0[1];
static Direction direction_generaledge01_3894_0_0 = {0, 50, 50, 0, 1, images_generaledge01_3894_0_0, 1};
static Animation anim_generaledge01_3894_0 = {&direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, NULL, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0, &direction_generaledge01_3894_0_0};
static Animation * anim_array_generaledge01_3894[1] = {&anim_generaledge01_3894_0};
static Animations anim_generaledge01_3894 = {1, &anim_array_generaledge01_3894[0]};
static bool anim_generaledge01_3894_initialized;
class GeneralEdge01_3894 : public Active
{
public:
    GeneralEdge01_3894(int x, int y) : Active(x, y, GeneralEdge01_3894_type)
    {
        // qualifiers: 16
#ifndef NDEBUG
        name = std::string("General_Edge01", 14);
#endif
        set_visible(false);
        this->animations = &anim_generaledge01_3894;
        if (!anim_generaledge01_3894_initialized) {
            anim_generaledge01_3894_initialized = true;
            images_generaledge01_3894_0_0[0] = get_internal_image(8);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_994_general_edge01.value;
        if (!global_data_994_general_edge01.init) {
            global_data_994_general_edge01.init = true;
        }
    }
};
FrameObject * create_generaledge01_3894(int x, int y)
{
    return new (Active::pool.create()) GeneralEdge01_3894(x, y);
}
static Image* images_generaledge02_3895_0_0[1];
static Direction direction_generaledge02_3895_0_0 = {0, 50, 50, 0, 1, images_generaledge02_3895_0_0, 1};
static Animation anim_generaledge02_3895_0 = {&direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, NULL, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0, &direction_generaledge02_3895_0_0};
static Animation * anim_array_generaledge02_3895[1] = {&anim_generaledge02_3895_0};
static Animations anim_generaledge02_3895 = {1, &anim_array_generaledge02_3895[0]};
static bool anim_generaledge02_3895_initialized;
class GeneralEdge02_3895 : public Active
{
public:
    GeneralEdge02_3895(int x, int y) : Active(x, y, GeneralEdge02_3895_type)
    {
        // qualifiers: 16
#ifndef NDEBUG
        name = std::string("General_Edge02", 14);
#endif
        set_visible(false);
        this->animations = &anim_generaledge02_3895;
        if (!anim_generaledge02_3895_initialized) {
            anim_generaledge02_3895_initialized = true;
            images_generaledge02_3895_0_0[0] = get_internal_image(31);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_995_general_edge02.value;
        if (!global_data_995_general_edge02.init) {
            global_data_995_general_edge02.init = true;
        }
    }
};
FrameObject * create_generaledge02_3895(int x, int y)
{
    return new (Active::pool.create()) GeneralEdge02_3895(x, y);
}
static Image* images_generaledge03_3896_0_0[1];
static Direction direction_generaledge03_3896_0_0 = {0, 50, 50, 0, 1, images_generaledge03_3896_0_0, 1};
static Animation anim_generaledge03_3896_0 = {&direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, NULL, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0, &direction_generaledge03_3896_0_0};
static Animation * anim_array_generaledge03_3896[1] = {&anim_generaledge03_3896_0};
static Animations anim_generaledge03_3896 = {1, &anim_array_generaledge03_3896[0]};
static bool anim_generaledge03_3896_initialized;
class GeneralEdge03_3896 : public Active
{
public:
    GeneralEdge03_3896(int x, int y) : Active(x, y, GeneralEdge03_3896_type)
    {
        // qualifiers: 16
#ifndef NDEBUG
        name = std::string("General_Edge03", 14);
#endif
        set_visible(false);
        this->animations = &anim_generaledge03_3896;
        if (!anim_generaledge03_3896_initialized) {
            anim_generaledge03_3896_initialized = true;
            images_generaledge03_3896_0_0[0] = get_internal_image(35);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_996_general_edge03.value;
        if (!global_data_996_general_edge03.init) {
            global_data_996_general_edge03.init = true;
        }
    }
};
FrameObject * create_generaledge03_3896(int x, int y)
{
    return new (Active::pool.create()) GeneralEdge03_3896(x, y);
}
static Image* images_generaledge04_3897_0_0[1];
static Direction direction_generaledge04_3897_0_0 = {0, 50, 50, 0, 1, images_generaledge04_3897_0_0, 1};
static Animation anim_generaledge04_3897_0 = {&direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, NULL, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0, &direction_generaledge04_3897_0_0};
static Animation * anim_array_generaledge04_3897[1] = {&anim_generaledge04_3897_0};
static Animations anim_generaledge04_3897 = {1, &anim_array_generaledge04_3897[0]};
static bool anim_generaledge04_3897_initialized;
class GeneralEdge04_3897 : public Active
{
public:
    GeneralEdge04_3897(int x, int y) : Active(x, y, GeneralEdge04_3897_type)
    {
        // qualifiers: 16
#ifndef NDEBUG
        name = std::string("General_Edge04", 14);
#endif
        set_visible(false);
        this->animations = &anim_generaledge04_3897;
        if (!anim_generaledge04_3897_initialized) {
            anim_generaledge04_3897_initialized = true;
            images_generaledge04_3897_0_0[0] = get_internal_image(39);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_997_general_edge04.value;
        if (!global_data_997_general_edge04.init) {
            global_data_997_general_edge04.init = true;
        }
    }
};
FrameObject * create_generaledge04_3897(int x, int y)
{
    return new (Active::pool.create()) GeneralEdge04_3897(x, y);
}
static Image* images_generaledge05_3898_0_0[1];
static Direction direction_generaledge05_3898_0_0 = {0, 50, 50, 0, 1, images_generaledge05_3898_0_0, 1};
static Animation anim_generaledge05_3898_0 = {&direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, NULL, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0, &direction_generaledge05_3898_0_0};
static Animation * anim_array_generaledge05_3898[1] = {&anim_generaledge05_3898_0};
static Animations anim_generaledge05_3898 = {1, &anim_array_generaledge05_3898[0]};
static bool anim_generaledge05_3898_initialized;
class GeneralEdge05_3898 : public Active
{
public:
    GeneralEdge05_3898(int x, int y) : Active(x, y, GeneralEdge05_3898_type)
    {
        // qualifiers: 16
#ifndef NDEBUG
        name = std::string("General_Edge05", 14);
#endif
        set_visible(false);
        this->animations = &anim_generaledge05_3898;
        if (!anim_generaledge05_3898_initialized) {
            anim_generaledge05_3898_initialized = true;
            images_generaledge05_3898_0_0[0] = get_internal_image(43);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_998_general_edge05.value;
        if (!global_data_998_general_edge05.init) {
            global_data_998_general_edge05.init = true;
        }
    }
};
FrameObject * create_generaledge05_3898(int x, int y)
{
    return new (Active::pool.create()) GeneralEdge05_3898(x, y);
}
static Image* images_generalanglechanger165_3899_0_0[1];
static Direction direction_generalanglechanger165_3899_0_0 = {0, 50, 50, 0, 1, images_generalanglechanger165_3899_0_0, 1};
static Animation anim_generalanglechanger165_3899_0 = {&direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, NULL, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0, &direction_generalanglechanger165_3899_0_0};
static Animation * anim_array_generalanglechanger165_3899[1] = {&anim_generalanglechanger165_3899_0};
static Animations anim_generalanglechanger165_3899 = {1, &anim_array_generalanglechanger165_3899[0]};
static bool anim_generalanglechanger165_3899_initialized;
class GeneralAngleChanger165_3899 : public Active
{
public:
    GeneralAngleChanger165_3899(int x, int y) : Active(x, y, GeneralAngleChanger165_3899_type)
    {
        // qualifiers: 10
#ifndef NDEBUG
        name = std::string("General_AngleChanger_165", 24);
#endif
        set_visible(false);
        this->animations = &anim_generalanglechanger165_3899;
        if (!anim_generalanglechanger165_3899_initialized) {
            anim_generalanglechanger165_3899_initialized = true;
            images_generalanglechanger165_3899_0_0[0] = get_internal_image(129);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_999_general_anglechanger_165.value;
        if (!global_data_999_general_anglechanger_165.init) {
            alterables->values.set(0, 150);
            alterables->values.set(1, 180);
            alterables->values.set(2, 165);
            global_data_999_general_anglechanger_165.init = true;
        }
    }
};
FrameObject * create_generalanglechanger165_3899(int x, int y)
{
    return new (Active::pool.create()) GeneralAngleChanger165_3899(x, y);
}
static Image* images_generalanglechanger255_3900_0_0[1];
static Direction direction_generalanglechanger255_3900_0_0 = {0, 50, 50, 0, 1, images_generalanglechanger255_3900_0_0, 1};
static Animation anim_generalanglechanger255_3900_0 = {&direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, NULL, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0, &direction_generalanglechanger255_3900_0_0};
static Animation * anim_array_generalanglechanger255_3900[1] = {&anim_generalanglechanger255_3900_0};
static Animations anim_generalanglechanger255_3900 = {1, &anim_array_generalanglechanger255_3900[0]};
static bool anim_generalanglechanger255_3900_initialized;
class GeneralAngleChanger255_3900 : public Active
{
public:
    GeneralAngleChanger255_3900(int x, int y) : Active(x, y, GeneralAngleChanger255_3900_type)
    {
        // qualifiers: 10
#ifndef NDEBUG
        name = std::string("General_AngleChanger_255", 24);
#endif
        set_visible(false);
        this->animations = &anim_generalanglechanger255_3900;
        if (!anim_generalanglechanger255_3900_initialized) {
            anim_generalanglechanger255_3900_initialized = true;
            images_generalanglechanger255_3900_0_0[0] = get_internal_image(248);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_1000_general_anglechanger_255.value;
        if (!global_data_1000_general_anglechanger_255.init) {
            alterables->values.set(0, 240);
            alterables->values.set(1, 270);
            alterables->values.set(2, 255);
            global_data_1000_general_anglechanger_255.init = true;
        }
    }
};
FrameObject * create_generalanglechanger255_3900(int x, int y)
{
    return new (Active::pool.create()) GeneralAngleChanger255_3900(x, y);
}
static Image* images_generalanglechanger285_3901_0_0[1];
static Direction direction_generalanglechanger285_3901_0_0 = {0, 50, 50, 0, 1, images_generalanglechanger285_3901_0_0, 1};
static Animation anim_generalanglechanger285_3901_0 = {&direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, NULL, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0, &direction_generalanglechanger285_3901_0_0};
static Animation * anim_array_generalanglechanger285_3901[1] = {&anim_generalanglechanger285_3901_0};
static Animations anim_generalanglechanger285_3901 = {1, &anim_array_generalanglechanger285_3901[0]};
static bool anim_generalanglechanger285_3901_initialized;
class GeneralAngleChanger285_3901 : public Active
{
public:
    GeneralAngleChanger285_3901(int x, int y) : Active(x, y, GeneralAngleChanger285_3901_type)
    {
        // qualifiers: 10
#ifndef NDEBUG
        name = std::string("General_AngleChanger_285", 24);
#endif
        set_visible(false);
        this->animations = &anim_generalanglechanger285_3901;
        if (!anim_generalanglechanger285_3901_initialized) {
            anim_generalanglechanger285_3901_initialized = true;
            images_generalanglechanger285_3901_0_0[0] = get_internal_image(29);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_1001_general_anglechanger_285.value;
        if (!global_data_1001_general_anglechanger_285.init) {
            alterables->values.set(0, 270);
            alterables->values.set(1, 300);
            alterables->values.set(2, 285);
            global_data_1001_general_anglechanger_285.init = true;
        }
    }
};
FrameObject * create_generalanglechanger285_3901(int x, int y)
{
    return new (Active::pool.create()) GeneralAngleChanger285_3901(x, y);
}
class DialogData_3902 : public Text
{
public:
    DialogData_3902(int x, int y) : Text(x, y, DialogData_3902_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dialog Data", 11);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("02 00 ca_01_01 Try and catch me this time!", 42));
        add_line(std::string("01 00 li_01_01 Way ahead of you!", 32));
        add_line(std::string("02 09 ca_01_02 I can't wait! This is gonna be the best Charge-Up ever!", 70));
        add_line(std::string("01 06 li_01_02 Just take from the rich, okay\?", 45));
        add_line(std::string("02 00 ca_01_03 Got it!", 22));
        add_line(std::string("01 06 li_01_03 You swear\?", 25));
        add_line(std::string("02 12 ca_01_04 Pinky swear!", 27));
        add_line(std::string("02 03 ca_01_06 Where are you going\?", 35));
        add_line(std::string("01 15 li_01_04 I have to make sure they're okay!", 48));
        add_line(std::string("02 06 ca_01_07 Can't you be Little Miss Heropants some other time\?", 66));
        add_line(std::string("01 12 li_01_05 Not a chance!", 28));
        add_line(std::string("02 00 ca_01_08 Fine, I'll go by myself. Yipee... woohoo...", 58));
        add_line(std::string("02 03 ca_01_09 Eek! I better help!", 34));
        add_line(std::string("06 06 se_01_01 How many Chasers are left\? Tell me!", 50));
        add_line(std::string("05 03 to_01_01 You didn't say Please.", 37));
        add_line(std::string("06 09 se_01_02 Don't play games with me, duckling! Tell me!", 59));
        add_line(std::string("05 03 to_01_02 Fine, be that way.", 33));
        add_line(std::string("06 15 se_01_03 TSSSHAH! Where's that blasted snake mount\?!", 58));
        add_line(std::string("06 15 se_01_04 I guess we'll have to do this the hard way!", 58));
        add_line(std::string("06 15 se_01_05 I can do this all day!", 37));
        add_line(std::string("06 12 se_01_06 What is this hideous creature\?", 45));
        add_line(std::string("01 24 li_02_01 Stay back!", 25));
        add_line(std::string("06 09 se_01_07 Oohh, no! The duck man comes with me!", 52));
        add_line(std::string("01 12 li_02_02 I'm not gonna let you eat him!", 45));
        add_line(std::string("06 03 se_01_08 What\?", 20));
        add_line(std::string("06 03 se_01_09 Tchyaa hahahahaha! Too easy!", 43));
        add_line(std::string("05 00 to_01_03 That was a close one.", 36));
        add_line(std::string("05 00 to_01_04 Thank you, Miss...\?", 34));
        add_line(std::string("01 00 li_02_03 Lilac.", 21));
        add_line(std::string("05 06 to_01_05 Miss Lilac.", 26));
        add_line(std::string("02 00 ca_02_01 Aw crap! Hold on Lilac, your buddy's comin' to save you!", 71));
        add_line(std::string("02 03 ca_02_02 Are you okay\?! I saw a huge explosion back there!", 64));
        add_line(std::string("01 27 li_02_04 You've been following me this whole time, haven't you\?", 69));
        add_line(std::string("02 15 ca_02_03 Duh\?", 19));
        add_line(std::string("05 00 to_01_06 I take it you know this guy\?", 43));
        add_line(std::string("02 15 ca_02_04 Girl.", 20));
        add_line(std::string("05 09 to_01_07 This girl\?", 25));
        add_line(std::string("01 00 li_02_05 She's like my tail! Always right behind me.", 58));
        add_line(std::string("02 00 ca_02_05 Carol the Wildcat, at your service! AaaandthisisLilac.", 69));
        add_line(std::string("05 00 to_01_08 Well I'm Torque. I'm a, uh, shell-duck.", 54));
        add_line(std::string("01 33 li_02_06 Shellduck\?", 25));
        add_line(std::string("05 12 to_01_09 It's more of a nickname. I'm not exactly from around here.", 73));
        add_line(std::string("01 12 li_01b05 CAROL YOU STUPID FURBALL GO TAKE YOUR FLEABATH SOME OTHER TIME I GOTTA GO CHECK ON THOSE CIVILIANS", 113));
        add_line(std::string("01 54 xx_xx_xx CAUSE WE WON'T BE ABLE TO GET THROUGH THE PLOT IF I DON'T!", 73));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_dialogdata_3902(int x, int y)
{
    return new (Text::pool.create()) DialogData_3902(x, y);
}
class LipSynchingData_3903 : public Text
{
public:
    LipSynchingData_3903(int x, int y) : Text(x, y, LipSynchingData_3903_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lip Synching Data", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string("01 12 li_02_02 I'm not gonna let you eat him!", 45));
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        add_line(std::string());
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font1.bold;
        italic = font1.italic;
        font = get_font(font1.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_lipsynchingdata_3903(int x, int y)
{
    return new (Text::pool.create()) LipSynchingData_3903(x, y);
}
static Image* images_breakableruinspiece_3904_0_0[5];
static Direction direction_breakableruinspiece_3904_0_0 = {0, 0, 0, 0, 1, images_breakableruinspiece_3904_0_0, 5};
static Animation anim_breakableruinspiece_3904_0 = {&direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, NULL, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0, &direction_breakableruinspiece_3904_0_0};
static Animation * anim_array_breakableruinspiece_3904[1] = {&anim_breakableruinspiece_3904_0};
static Animations anim_breakableruinspiece_3904 = {1, &anim_array_breakableruinspiece_3904[0]};
static bool anim_breakableruinspiece_3904_initialized;
class BreakableRuinsPiece_3904 : public Active
{
public:
    BreakableRuinsPiece_3904(int x, int y) : Active(x, y, BreakableRuinsPiece_3904_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRuins_piece", 20);
#endif
        this->animations = &anim_breakableruinspiece_3904;
        if (!anim_breakableruinspiece_3904_initialized) {
            anim_breakableruinspiece_3904_initialized = true;
            images_breakableruinspiece_3904_0_0[0] = get_internal_image(2734);
            images_breakableruinspiece_3904_0_0[1] = get_internal_image(2734);
            images_breakableruinspiece_3904_0_0[2] = get_internal_image(2734);
            images_breakableruinspiece_3904_0_0[3] = get_internal_image(6272);
            images_breakableruinspiece_3904_0_0[4] = get_internal_image(13210);
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
FrameObject * create_breakableruinspiece_3904(int x, int y)
{
    return new (Active::pool.create()) BreakableRuinsPiece_3904(x, y);
}
static Image* images_breakableruinspiece2_3905_0_0[1];
static Direction direction_breakableruinspiece2_3905_0_0 = {0, 50, 50, 0, 1, images_breakableruinspiece2_3905_0_0, 1};
static Animation anim_breakableruinspiece2_3905_0 = {&direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, NULL, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0, &direction_breakableruinspiece2_3905_0_0};
static Animation * anim_array_breakableruinspiece2_3905[1] = {&anim_breakableruinspiece2_3905_0};
static Animations anim_breakableruinspiece2_3905 = {1, &anim_array_breakableruinspiece2_3905[0]};
static bool anim_breakableruinspiece2_3905_initialized;
class BreakableRuinsPiece2_3905 : public Active
{
public:
    BreakableRuinsPiece2_3905(int x, int y) : Active(x, y, BreakableRuinsPiece2_3905_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BreakableRuins_piece 2", 22);
#endif
        this->animations = &anim_breakableruinspiece2_3905;
        if (!anim_breakableruinspiece2_3905_initialized) {
            anim_breakableruinspiece2_3905_initialized = true;
            images_breakableruinspiece2_3905_0_0[0] = get_internal_image(3271);
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
FrameObject * create_breakableruinspiece2_3905(int x, int y)
{
    return new (Active::pool.create()) BreakableRuinsPiece2_3905(x, y);
}
class Backdrop_3906 : public Backdrop
{
public:
    Backdrop_3906(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(922);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_3906(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_3906(x, y);
}
class CaravanTruck2_3907 : public Backdrop
{
public:
    CaravanTruck2_3907(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Truck 2", 15);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(3304);
        width = image->width;
        height = image->height;
        collision = new BackdropCollision(this, image);
    }
};
FrameObject * create_caravantruck2_3907(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanTruck2_3907(x, y);
}
class CaravanDoor_3908 : public Backdrop
{
public:
    CaravanDoor_3908(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Caravan_Door", 12);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(4026);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_caravandoor_3908(int x, int y)
{
    return new (Backdrop::pool.create()) CaravanDoor_3908(x, y);
}
static Image* images_hazardspikesup2_3909_0_0[1];
static Direction direction_hazardspikesup2_3909_0_0 = {0, 50, 50, 0, 1, images_hazardspikesup2_3909_0_0, 1};
static Animation anim_hazardspikesup2_3909_0 = {&direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, NULL, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0, &direction_hazardspikesup2_3909_0_0};
static Animation * anim_array_hazardspikesup2_3909[1] = {&anim_hazardspikesup2_3909_0};
static Animations anim_hazardspikesup2_3909 = {1, &anim_array_hazardspikesup2_3909[0]};
static bool anim_hazardspikesup2_3909_initialized;
class HazardSpikesUp2_3909 : public Active
{
public:
    HazardSpikesUp2_3909(int x, int y) : Active(x, y, HazardSpikesUp2_3909_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Up 2", 18);
#endif
        this->animations = &anim_hazardspikesup2_3909;
        if (!anim_hazardspikesup2_3909_initialized) {
            anim_hazardspikesup2_3909_initialized = true;
            images_hazardspikesup2_3909_0_0[0] = get_internal_image(7141);
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
FrameObject * create_hazardspikesup2_3909(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesUp2_3909(x, y);
}
static Image* images_hazardspikesright2_3910_0_0[1];
static Direction direction_hazardspikesright2_3910_0_0 = {0, 50, 50, 0, 1, images_hazardspikesright2_3910_0_0, 1};
static Animation anim_hazardspikesright2_3910_0 = {&direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, NULL, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0, &direction_hazardspikesright2_3910_0_0};
static Animation * anim_array_hazardspikesright2_3910[1] = {&anim_hazardspikesright2_3910_0};
static Animations anim_hazardspikesright2_3910 = {1, &anim_array_hazardspikesright2_3910[0]};
static bool anim_hazardspikesright2_3910_initialized;
class HazardSpikesRight2_3910 : public Active
{
public:
    HazardSpikesRight2_3910(int x, int y) : Active(x, y, HazardSpikesRight2_3910_type)
    {
        // qualifiers: 14, 16
#ifndef NDEBUG
        name = std::string("Hazard_Spikes_Right 2", 21);
#endif
        this->animations = &anim_hazardspikesright2_3910;
        if (!anim_hazardspikesright2_3910_initialized) {
            anim_hazardspikesright2_3910_initialized = true;
            images_hazardspikesright2_3910_0_0[0] = get_internal_image(7803);
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
FrameObject * create_hazardspikesright2_3910(int x, int y)
{
    return new (Active::pool.create()) HazardSpikesRight2_3910(x, y);
}
static Image* images_active_3911_0_0[1];
static Direction direction_active_3911_0_0 = {0, 50, 50, 0, 1, images_active_3911_0_0, 1};
static Animation anim_active_3911_0 = {&direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, NULL, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0, &direction_active_3911_0_0};
static Animation * anim_array_active_3911[1] = {&anim_active_3911_0};
static Animations anim_active_3911 = {1, &anim_array_active_3911[0]};
static bool anim_active_3911_initialized;
class Active_3911 : public Active
{
public:
    Active_3911(int x, int y) : Active(x, y, Active_3911_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_3911;
        if (!anim_active_3911_initialized) {
            anim_active_3911_initialized = true;
            images_active_3911_0_0[0] = get_internal_image(16508);
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
FrameObject * create_active_3911(int x, int y)
{
    return new (Active::pool.create()) Active_3911(x, y);
}
static Image* images_collapsingsegment1_3912_0_0[1];
static Direction direction_collapsingsegment1_3912_0_0 = {0, 50, 50, 0, 1, images_collapsingsegment1_3912_0_0, 1};
static Animation anim_collapsingsegment1_3912_0 = {&direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, NULL, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0, &direction_collapsingsegment1_3912_0_0};
static Animation * anim_array_collapsingsegment1_3912[1] = {&anim_collapsingsegment1_3912_0};
static Animations anim_collapsingsegment1_3912 = {1, &anim_array_collapsingsegment1_3912[0]};
static bool anim_collapsingsegment1_3912_initialized;
class CollapsingSegment1_3912 : public Active
{
public:
    CollapsingSegment1_3912(int x, int y) : Active(x, y, CollapsingSegment1_3912_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CollapsingSegment 1", 19);
#endif
        this->animations = &anim_collapsingsegment1_3912;
        if (!anim_collapsingsegment1_3912_initialized) {
            anim_collapsingsegment1_3912_initialized = true;
            images_collapsingsegment1_3912_0_0[0] = get_internal_image(13058);
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
FrameObject * create_collapsingsegment1_3912(int x, int y)
{
    return new (Active::pool.create()) CollapsingSegment1_3912(x, y);
}
static Image* images_mrstumpy_3913_0_0[1];
static Direction direction_mrstumpy_3913_0_0 = {0, 0, 0, 0, 1, images_mrstumpy_3913_0_0, 1};
static Animation anim_mrstumpy_3913_0 = {&direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, NULL, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0, &direction_mrstumpy_3913_0_0};
static Animation * anim_array_mrstumpy_3913[1] = {&anim_mrstumpy_3913_0};
static Animations anim_mrstumpy_3913 = {1, &anim_array_mrstumpy_3913[0]};
static bool anim_mrstumpy_3913_initialized;
class MrStumpy_3913 : public Active
{
public:
    MrStumpy_3913(int x, int y) : Active(x, y, MrStumpy_3913_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MrStumpy", 8);
#endif
        this->animations = &anim_mrstumpy_3913;
        if (!anim_mrstumpy_3913_initialized) {
            anim_mrstumpy_3913_initialized = true;
            images_mrstumpy_3913_0_0[0] = get_internal_image(10974);
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
FrameObject * create_mrstumpy_3913(int x, int y)
{
    return new (Active::pool.create()) MrStumpy_3913(x, y);
}
static Image* images_collapsingsegment2_3914_0_0[1];
static Direction direction_collapsingsegment2_3914_0_0 = {0, 50, 50, 0, 1, images_collapsingsegment2_3914_0_0, 1};
static Animation anim_collapsingsegment2_3914_0 = {&direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, NULL, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0, &direction_collapsingsegment2_3914_0_0};
static Animation * anim_array_collapsingsegment2_3914[1] = {&anim_collapsingsegment2_3914_0};
static Animations anim_collapsingsegment2_3914 = {1, &anim_array_collapsingsegment2_3914[0]};
static bool anim_collapsingsegment2_3914_initialized;
class CollapsingSegment2_3914 : public Active
{
public:
    CollapsingSegment2_3914(int x, int y) : Active(x, y, CollapsingSegment2_3914_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("CollapsingSegment 2", 19);
#endif
        this->animations = &anim_collapsingsegment2_3914;
        if (!anim_collapsingsegment2_3914_initialized) {
            anim_collapsingsegment2_3914_initialized = true;
            images_collapsingsegment2_3914_0_0[0] = get_internal_image(13253);
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
FrameObject * create_collapsingsegment2_3914(int x, int y)
{
    return new (Active::pool.create()) CollapsingSegment2_3914(x, y);
}
