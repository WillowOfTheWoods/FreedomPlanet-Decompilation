#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_filelabel2_105_0_0[1];
static Direction direction_filelabel2_105_0_0 = {0, 50, 50, 0, 1, images_filelabel2_105_0_0, 1};
static Animation anim_filelabel2_105_0 = {&direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, NULL, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0, &direction_filelabel2_105_0_0};
static Animation * anim_array_filelabel2_105[1] = {&anim_filelabel2_105_0};
static Animations anim_filelabel2_105 = {1, &anim_array_filelabel2_105[0]};
static bool anim_filelabel2_105_initialized;
class FileLabel2_105 : public Active
{
public:
    FileLabel2_105(int x, int y) : Active(x, y, FileLabel2_105_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Label2", 11);
#endif
        this->animations = &anim_filelabel2_105;
        if (!anim_filelabel2_105_initialized) {
            anim_filelabel2_105_initialized = true;
            images_filelabel2_105_0_0[0] = get_internal_image(2326);
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
FrameObject * create_filelabel2_105(int x, int y)
{
    return new (Active::pool.create()) FileLabel2_105(x, y);
}
class FileTimeS_106 : public Counter
{
public:
    FileTimeS_106(int x, int y) : Counter(x, y, FileTimeS_106_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Time_S", 11);
#endif
        width = 96;
        height = 32;
        zero_pad = 2;
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
        maximum = 99;
        set(0);
    }
};
FrameObject * create_filetimes_106(int x, int y)
{
    return new (Counter::pool.create()) FileTimeS_106(x, y);
}
class FileTimeM_107 : public Counter
{
public:
    FileTimeM_107(int x, int y) : Counter(x, y, FileTimeM_107_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_Time_M", 11);
#endif
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
        maximum = 999;
        set(0);
    }
};
FrameObject * create_filetimem_107(int x, int y)
{
    return new (Counter::pool.create()) FileTimeM_107(x, y);
}
static Image* images_filesaveslot_108_0_0[1];
static Direction direction_filesaveslot_108_0_0 = {0, 50, 50, 0, 1, images_filesaveslot_108_0_0, 1};
static Image* images_filesaveslot_108_0_1[1];
static Direction direction_filesaveslot_108_0_1 = {1, 50, 50, 0, -1, images_filesaveslot_108_0_1, 1};
static Animation anim_filesaveslot_108_0 = {&direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_1, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0, &direction_filesaveslot_108_0_0};
static Animation * anim_array_filesaveslot_108[1] = {&anim_filesaveslot_108_0};
static Animations anim_filesaveslot_108 = {1, &anim_array_filesaveslot_108[0]};
static bool anim_filesaveslot_108_initialized;
class FileSaveSlot_108 : public Active
{
public:
    FileSaveSlot_108(int x, int y) : Active(x, y, FileSaveSlot_108_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_SaveSlot", 13);
#endif
        this->animations = &anim_filesaveslot_108;
        if (!anim_filesaveslot_108_initialized) {
            anim_filesaveslot_108_initialized = true;
            images_filesaveslot_108_0_0[0] = get_internal_image(2116);
            images_filesaveslot_108_0_1[0] = get_internal_image(10675);
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
FrameObject * create_filesaveslot_108(int x, int y)
{
    return new (Active::pool.create()) FileSaveSlot_108(x, y);
}
class FileID_109 : public Counter
{
public:
    FileID_109(int x, int y) : Counter(x, y, FileID_109_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("File_ID", 7);
#endif
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
            counter_images[4] = get_internal_image(2779);
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
        minimum = 1;
        maximum = 99;
        set(1);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(0);
        ((BallMovement*)movement)->set_deceleration(0);
    }
};
FrameObject * create_fileid_109(int x, int y)
{
    return new (Counter::pool.create()) FileID_109(x, y);
}
static Image* images_filesaveslotcharacter_110_0_0[1];
static Direction direction_filesaveslotcharacter_110_0_0 = {0, 0, 0, 0, 1, images_filesaveslotcharacter_110_0_0, 1};
static Image* images_filesaveslotcharacter_110_0_1[4];
static Direction direction_filesaveslotcharacter_110_0_1 = {1, 0, 0, 0, 1, images_filesaveslotcharacter_110_0_1, 4};
static Image* images_filesaveslotcharacter_110_0_3[4];
static Direction direction_filesaveslotcharacter_110_0_3 = {3, 0, 0, 0, 1, images_filesaveslotcharacter_110_0_3, 4};
static Image* images_filesaveslotcharacter_110_0_5[4];
static Direction direction_filesaveslotcharacter_110_0_5 = {5, 0, 0, 0, 1, images_filesaveslotcharacter_110_0_5, 4};
static Animation anim_filesaveslotcharacter_110_0 = {&direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_1, NULL, &direction_filesaveslotcharacter_110_0_3, NULL, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_5, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0, &direction_filesaveslotcharacter_110_0_0};
static Animation * anim_array_filesaveslotcharacter_110[1] = {&anim_filesaveslotcharacter_110_0};
static Animations anim_filesaveslotcharacter_110 = {1, &anim_array_filesaveslotcharacter_110[0]};
static bool anim_filesaveslotcharacter_110_initialized;
class FileSaveSlotCharacter_110 : public Active
{
public:
    FileSaveSlotCharacter_110(int x, int y) : Active(x, y, FileSaveSlotCharacter_110_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_SaveSlotCharacter", 22);
#endif
        this->animations = &anim_filesaveslotcharacter_110;
        if (!anim_filesaveslotcharacter_110_initialized) {
            anim_filesaveslotcharacter_110_initialized = true;
            images_filesaveslotcharacter_110_0_0[0] = get_internal_image(10677);
            images_filesaveslotcharacter_110_0_1[0] = get_internal_image(3756);
            images_filesaveslotcharacter_110_0_1[1] = get_internal_image(3944);
            images_filesaveslotcharacter_110_0_1[2] = get_internal_image(4397);
            images_filesaveslotcharacter_110_0_1[3] = get_internal_image(4543);
            images_filesaveslotcharacter_110_0_3[0] = get_internal_image(4634);
            images_filesaveslotcharacter_110_0_3[1] = get_internal_image(4636);
            images_filesaveslotcharacter_110_0_3[2] = get_internal_image(4541);
            images_filesaveslotcharacter_110_0_3[3] = get_internal_image(4771);
            images_filesaveslotcharacter_110_0_5[0] = get_internal_image(4772);
            images_filesaveslotcharacter_110_0_5[1] = get_internal_image(4770);
            images_filesaveslotcharacter_110_0_5[2] = get_internal_image(4774);
            images_filesaveslotcharacter_110_0_5[3] = get_internal_image(4776);
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
FrameObject * create_filesaveslotcharacter_110(int x, int y)
{
    return new (Active::pool.create()) FileSaveSlotCharacter_110(x, y);
}
static Image* images_return_111_0_0[1];
static Direction direction_return_111_0_0 = {0, 50, 50, 0, 1, images_return_111_0_0, 1};
static Image* images_return_111_0_8[1];
static Direction direction_return_111_0_8 = {8, 50, 50, 0, 1, images_return_111_0_8, 1};
static Animation anim_return_111_0 = {&direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, NULL, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, &direction_return_111_0_8, NULL, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0, &direction_return_111_0_0};
static Animation * anim_array_return_111[1] = {&anim_return_111_0};
static Animations anim_return_111 = {1, &anim_array_return_111[0]};
static bool anim_return_111_initialized;
class Return_111 : public Active
{
public:
    Return_111(int x, int y) : Active(x, y, Return_111_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Return", 6);
#endif
        this->animations = &anim_return_111;
        if (!anim_return_111_initialized) {
            anim_return_111_initialized = true;
            images_return_111_0_0[0] = get_internal_image(2370);
            images_return_111_0_8[0] = get_internal_image(2372);
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
FrameObject * create_return_111(int x, int y)
{
    return new (Active::pool.create()) Return_111(x, y);
}
static Image* images_copy_112_0_0[2];
static Direction direction_copy_112_0_0 = {0, 0, 0, 0, 1, images_copy_112_0_0, 2};
static Image* images_copy_112_0_8[1];
static Direction direction_copy_112_0_8 = {8, 50, 50, 0, 1, images_copy_112_0_8, 1};
static Animation anim_copy_112_0 = {&direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, NULL, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, &direction_copy_112_0_8, NULL, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0, &direction_copy_112_0_0};
static Animation * anim_array_copy_112[1] = {&anim_copy_112_0};
static Animations anim_copy_112 = {1, &anim_array_copy_112[0]};
static bool anim_copy_112_initialized;
class Copy_112 : public Active
{
public:
    Copy_112(int x, int y) : Active(x, y, Copy_112_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Copy", 4);
#endif
        this->animations = &anim_copy_112;
        if (!anim_copy_112_initialized) {
            anim_copy_112_initialized = true;
            images_copy_112_0_0[0] = get_internal_image(10770);
            images_copy_112_0_0[1] = get_internal_image(7858);
            images_copy_112_0_8[0] = get_internal_image(3461);
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
FrameObject * create_copy_112(int x, int y)
{
    return new (Active::pool.create()) Copy_112(x, y);
}
static Image* images_start_113_0_0[2];
static Direction direction_start_113_0_0 = {0, 0, 0, 0, 1, images_start_113_0_0, 2};
static Animation anim_start_113_0 = {&direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, NULL, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0, &direction_start_113_0_0};
static Animation * anim_array_start_113[1] = {&anim_start_113_0};
static Animations anim_start_113 = {1, &anim_array_start_113[0]};
static bool anim_start_113_initialized;
class Start_113 : public Active
{
public:
    Start_113(int x, int y) : Active(x, y, Start_113_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Start", 5);
#endif
        this->animations = &anim_start_113;
        if (!anim_start_113_initialized) {
            anim_start_113_initialized = true;
            images_start_113_0_0[0] = get_internal_image(124);
            images_start_113_0_0[1] = get_internal_image(4470);
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
FrameObject * create_start_113(int x, int y)
{
    return new (Active::pool.create()) Start_113(x, y);
}
static Image* images_filetext_114_0_0[1];
static Direction direction_filetext_114_0_0 = {0, 50, 50, 0, 1, images_filetext_114_0_0, 1};
static Image* images_filetext_114_0_8[1];
static Direction direction_filetext_114_0_8 = {8, 50, 50, 0, 1, images_filetext_114_0_8, 1};
static Animation anim_filetext_114_0 = {&direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, NULL, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, &direction_filetext_114_0_8, NULL, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0, &direction_filetext_114_0_0};
static Animation * anim_array_filetext_114[1] = {&anim_filetext_114_0};
static Animations anim_filetext_114 = {1, &anim_array_filetext_114[0]};
static bool anim_filetext_114_initialized;
class FileText_114 : public Active
{
public:
    FileText_114(int x, int y) : Active(x, y, FileText_114_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("File Text", 9);
#endif
        this->animations = &anim_filetext_114;
        if (!anim_filetext_114_initialized) {
            anim_filetext_114_initialized = true;
            images_filetext_114_0_0[0] = get_internal_image(2992);
            images_filetext_114_0_8[0] = get_internal_image(2372);
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
FrameObject * create_filetext_114(int x, int y)
{
    return new (Active::pool.create()) FileText_114(x, y);
}
static Image* images_yes_115_0_0[1];
static Direction direction_yes_115_0_0 = {0, 50, 50, 0, 1, images_yes_115_0_0, 1};
static Animation anim_yes_115_0 = {&direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, NULL, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0, &direction_yes_115_0_0};
static Animation * anim_array_yes_115[1] = {&anim_yes_115_0};
static Animations anim_yes_115 = {1, &anim_array_yes_115[0]};
static bool anim_yes_115_initialized;
class Yes_115 : public Active
{
public:
    Yes_115(int x, int y) : Active(x, y, Yes_115_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Yes", 3);
#endif
        this->animations = &anim_yes_115;
        if (!anim_yes_115_initialized) {
            anim_yes_115_initialized = true;
            images_yes_115_0_0[0] = get_internal_image(3393);
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
FrameObject * create_yes_115(int x, int y)
{
    return new (Active::pool.create()) Yes_115(x, y);
}
static Image* images_filesaveslotcopy_116_0_0[1];
static Direction direction_filesaveslotcopy_116_0_0 = {0, 50, 50, 0, -1, images_filesaveslotcopy_116_0_0, 1};
static Animation anim_filesaveslotcopy_116_0 = {&direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, NULL, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0, &direction_filesaveslotcopy_116_0_0};
static Animation * anim_array_filesaveslotcopy_116[1] = {&anim_filesaveslotcopy_116_0};
static Animations anim_filesaveslotcopy_116 = {1, &anim_array_filesaveslotcopy_116[0]};
static bool anim_filesaveslotcopy_116_initialized;
class FileSaveSlotCopy_116 : public Active
{
public:
    FileSaveSlotCopy_116(int x, int y) : Active(x, y, FileSaveSlotCopy_116_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_SaveSlotCopy", 17);
#endif
        set_visible(false);
        this->animations = &anim_filesaveslotcopy_116;
        if (!anim_filesaveslotcopy_116_initialized) {
            anim_filesaveslotcopy_116_initialized = true;
            images_filesaveslotcopy_116_0_0[0] = get_internal_image(10675);
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
FrameObject * create_filesaveslotcopy_116(int x, int y)
{
    return new (Active::pool.create()) FileSaveSlotCopy_116(x, y);
}
class FileMessage_117 : public TextBlitter
{
public:
    FileMessage_117(int x, int y) : TextBlitter(x, y, FileMessage_117_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File Message", 12);
#endif
        width = 224;
        height = 40;
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
        set_text(std::string("Press START to begin a new game.", 32));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_filemessage_117(int x, int y)
{
    return new (TextBlitter::pool.create()) FileMessage_117(x, y);
}
class WarningMessage_118 : public TextBlitter
{
public:
    WarningMessage_118(int x, int y) : TextBlitter(x, y, WarningMessage_118_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Warning Message", 15);
#endif
        width = 245;
        height = 80;
        char_width = 8;
        char_height = 20;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(5250);
        image_width = 256;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
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
        set_text(std::string("Looking for controllers...", 26));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_warningmessage_118(int x, int y)
{
    return new (TextBlitter::pool.create()) WarningMessage_118(x, y);
}
static Image* images_filesaveslotcharactercopy_119_0_0[1];
static Direction direction_filesaveslotcharactercopy_119_0_0 = {0, 0, 0, 0, 1, images_filesaveslotcharactercopy_119_0_0, 1};
static Image* images_filesaveslotcharactercopy_119_0_1[4];
static Direction direction_filesaveslotcharactercopy_119_0_1 = {1, 0, 0, 0, 1, images_filesaveslotcharactercopy_119_0_1, 4};
static Image* images_filesaveslotcharactercopy_119_0_3[4];
static Direction direction_filesaveslotcharactercopy_119_0_3 = {3, 0, 0, 0, 1, images_filesaveslotcharactercopy_119_0_3, 4};
static Image* images_filesaveslotcharactercopy_119_0_5[1];
static Direction direction_filesaveslotcharactercopy_119_0_5 = {5, 0, 0, 0, 1, images_filesaveslotcharactercopy_119_0_5, 1};
static Animation anim_filesaveslotcharactercopy_119_0 = {&direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_1, NULL, &direction_filesaveslotcharactercopy_119_0_3, NULL, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_5, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0, &direction_filesaveslotcharactercopy_119_0_0};
static Animation * anim_array_filesaveslotcharactercopy_119[1] = {&anim_filesaveslotcharactercopy_119_0};
static Animations anim_filesaveslotcharactercopy_119 = {1, &anim_array_filesaveslotcharactercopy_119[0]};
static bool anim_filesaveslotcharactercopy_119_initialized;
class FileSaveSlotCharacterCopy_119 : public Active
{
public:
    FileSaveSlotCharacterCopy_119(int x, int y) : Active(x, y, FileSaveSlotCharacterCopy_119_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File_SaveSlotCharacterCopy", 26);
#endif
        set_visible(false);
        this->animations = &anim_filesaveslotcharactercopy_119;
        if (!anim_filesaveslotcharactercopy_119_initialized) {
            anim_filesaveslotcharactercopy_119_initialized = true;
            images_filesaveslotcharactercopy_119_0_0[0] = get_internal_image(10677);
            images_filesaveslotcharactercopy_119_0_1[0] = get_internal_image(4937);
            images_filesaveslotcharactercopy_119_0_1[1] = get_internal_image(2921);
            images_filesaveslotcharactercopy_119_0_1[2] = get_internal_image(10667);
            images_filesaveslotcharactercopy_119_0_1[3] = get_internal_image(4965);
            images_filesaveslotcharactercopy_119_0_3[0] = get_internal_image(10673);
            images_filesaveslotcharactercopy_119_0_3[1] = get_internal_image(10670);
            images_filesaveslotcharactercopy_119_0_3[2] = get_internal_image(10671);
            images_filesaveslotcharactercopy_119_0_3[3] = get_internal_image(4202);
            images_filesaveslotcharactercopy_119_0_5[0] = get_internal_image(10674);
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
FrameObject * create_filesaveslotcharactercopy_119(int x, int y)
{
    return new (Active::pool.create()) FileSaveSlotCharacterCopy_119(x, y);
}
static Image* images_copyarrow_120_0_0[1];
static Direction direction_copyarrow_120_0_0 = {0, 50, 50, 0, 1, images_copyarrow_120_0_0, 1};
static Animation anim_copyarrow_120_0 = {&direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, NULL, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0, &direction_copyarrow_120_0_0};
static Animation * anim_array_copyarrow_120[1] = {&anim_copyarrow_120_0};
static Animations anim_copyarrow_120 = {1, &anim_array_copyarrow_120[0]};
static bool anim_copyarrow_120_initialized;
class CopyArrow_120 : public Active
{
public:
    CopyArrow_120(int x, int y) : Active(x, y, CopyArrow_120_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("_CopyArrow", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_copyarrow_120;
        if (!anim_copyarrow_120_initialized) {
            anim_copyarrow_120_initialized = true;
            images_copyarrow_120_0_0[0] = get_internal_image(4854);
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
FrameObject * create_copyarrow_120(int x, int y)
{
    return new (Active::pool.create()) CopyArrow_120(x, y);
}
class GUICrystal_121 : public Counter
{
public:
    GUICrystal_121(int x, int y) : Counter(x, y, GUICrystal_121_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Crystal", 11);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        zero_pad = 3;
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
        maximum = 999;
        if (global_data_10_gui_crystal.init)
            set(global_data_10_gui_crystal.value);
        else
            set(999);
    }
    ~GUICrystal_121()
    {
        global_data_10_gui_crystal.init = true;
        global_data_10_gui_crystal.value = value;
    }
    void dealloc()
    {
        this->GUICrystal_121::~GUICrystal_121();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guicrystal_121(int x, int y)
{
    return new (Counter::pool.create()) GUICrystal_121(x, y);
}
class GUIRings_122 : public Counter
{
public:
    GUIRings_122(int x, int y) : Counter(x, y, GUIRings_122_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Rings", 9);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = ANIMATION_COUNTER;
        static Image * counter_images[15];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(724);
            counter_images[1] = get_internal_image(1509);
            counter_images[2] = get_internal_image(1321);
            counter_images[3] = get_internal_image(3565);
            counter_images[4] = get_internal_image(2871);
            counter_images[5] = get_internal_image(3560);
            counter_images[6] = get_internal_image(2507);
            counter_images[7] = get_internal_image(2508);
            counter_images[8] = get_internal_image(1792);
            counter_images[9] = get_internal_image(2036);
            counter_images[10] = get_internal_image(1485);
            counter_images[11] = get_internal_image(1523);
            counter_images[12] = get_internal_image(478);
            counter_images[13] = get_internal_image(1459);
            counter_images[14] = get_internal_image(1343);
        }
        images = (Image**)&counter_images;
        image_count = 15;
        minimum = 0;
        maximum = 14;
        if (global_data_12_gui_rings.init)
            set(global_data_12_gui_rings.value);
        else
            set(14);
    }
    ~GUIRings_122()
    {
        global_data_12_gui_rings.init = true;
        global_data_12_gui_rings.value = value;
    }
    void dealloc()
    {
        this->GUIRings_122::~GUIRings_122();
        Counter::pool.destroy(this);
    }
};
FrameObject * create_guirings_122(int x, int y)
{
    return new (Counter::pool.create()) GUIRings_122(x, y);
}
static Image* images_playerothers_123_0_0[1];
static Direction direction_playerothers_123_0_0 = {0, 50, 50, 0, 1, images_playerothers_123_0_0, 1};
static Animation anim_playerothers_123_0 = {&direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, NULL, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0, &direction_playerothers_123_0_0};
static Animation * anim_array_playerothers_123[1] = {&anim_playerothers_123_0};
static Animations anim_playerothers_123 = {1, &anim_array_playerothers_123[0]};
static bool anim_playerothers_123_initialized;
class PlayerOthers_123 : public Active
{
public:
    PlayerOthers_123(int x, int y) : Active(x, y, PlayerOthers_123_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player_Others", 13);
#endif
        set_visible(false);
        this->animations = &anim_playerothers_123;
        if (!anim_playerothers_123_initialized) {
            anim_playerothers_123_initialized = true;
            images_playerothers_123_0_0[0] = get_internal_image(195);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_13_player_others.value;
        if (!global_data_13_player_others.init) {
            global_data_13_player_others.init = true;
        }
    }
};
FrameObject * create_playerothers_123(int x, int y)
{
    return new (Active::pool.create()) PlayerOthers_123(x, y);
}
static Image* images_guienergy_124_0_0[1];
static Direction direction_guienergy_124_0_0 = {0, 50, 50, 0, 1, images_guienergy_124_0_0, 1};
static Animation anim_guienergy_124_0 = {&direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, NULL, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0, &direction_guienergy_124_0_0};
static Image* images_guienergy_124_1_0[20];
static Direction direction_guienergy_124_1_0 = {0, 50, 50, 0, -1, images_guienergy_124_1_0, 20};
static Animation anim_guienergy_124_1 = {&direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, NULL, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0, &direction_guienergy_124_1_0};
static Image* images_guienergy_124_7_0[13];
static Direction direction_guienergy_124_7_0 = {0, 50, 50, 0, 1, images_guienergy_124_7_0, 13};
static Animation anim_guienergy_124_7 = {&direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, NULL, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0, &direction_guienergy_124_7_0};
static Image* images_guienergy_124_8_0[2];
static Direction direction_guienergy_124_8_0 = {0, 50, 50, 0, 1, images_guienergy_124_8_0, 2};
static Animation anim_guienergy_124_8 = {&direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, NULL, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0, &direction_guienergy_124_8_0};
static Image* images_guienergy_124_11_0[5];
static Direction direction_guienergy_124_11_0 = {0, 50, 50, 0, -1, images_guienergy_124_11_0, 5};
static Animation anim_guienergy_124_11 = {&direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, NULL, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0, &direction_guienergy_124_11_0};
static Animation * anim_array_guienergy_124[12] = {&anim_guienergy_124_0, &anim_guienergy_124_1, NULL, NULL, NULL, NULL, NULL, &anim_guienergy_124_7, &anim_guienergy_124_8, NULL, NULL, &anim_guienergy_124_11};
static Animations anim_guienergy_124 = {12, &anim_array_guienergy_124[0]};
static bool anim_guienergy_124_initialized;
class GUIEnergy_124 : public Active
{
public:
    GUIEnergy_124(int x, int y) : Active(x, y, GUIEnergy_124_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Energy", 10);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_guienergy_124;
        if (!anim_guienergy_124_initialized) {
            anim_guienergy_124_initialized = true;
            images_guienergy_124_0_0[0] = get_internal_image(7416);
            images_guienergy_124_1_0[0] = get_internal_image(7416);
            images_guienergy_124_1_0[1] = get_internal_image(7416);
            images_guienergy_124_1_0[2] = get_internal_image(7416);
            images_guienergy_124_1_0[3] = get_internal_image(7416);
            images_guienergy_124_1_0[4] = get_internal_image(7416);
            images_guienergy_124_1_0[5] = get_internal_image(7416);
            images_guienergy_124_1_0[6] = get_internal_image(7416);
            images_guienergy_124_1_0[7] = get_internal_image(7416);
            images_guienergy_124_1_0[8] = get_internal_image(7416);
            images_guienergy_124_1_0[9] = get_internal_image(7416);
            images_guienergy_124_1_0[10] = get_internal_image(7416);
            images_guienergy_124_1_0[11] = get_internal_image(7973);
            images_guienergy_124_1_0[12] = get_internal_image(7974);
            images_guienergy_124_1_0[13] = get_internal_image(7976);
            images_guienergy_124_1_0[14] = get_internal_image(7977);
            images_guienergy_124_1_0[15] = get_internal_image(7978);
            images_guienergy_124_1_0[16] = get_internal_image(7980);
            images_guienergy_124_1_0[17] = get_internal_image(7975);
            images_guienergy_124_1_0[18] = get_internal_image(7981);
            images_guienergy_124_1_0[19] = get_internal_image(7416);
            images_guienergy_124_7_0[0] = get_internal_image(391);
            images_guienergy_124_7_0[1] = get_internal_image(7416);
            images_guienergy_124_7_0[2] = get_internal_image(391);
            images_guienergy_124_7_0[3] = get_internal_image(7982);
            images_guienergy_124_7_0[4] = get_internal_image(7973);
            images_guienergy_124_7_0[5] = get_internal_image(7974);
            images_guienergy_124_7_0[6] = get_internal_image(7976);
            images_guienergy_124_7_0[7] = get_internal_image(7977);
            images_guienergy_124_7_0[8] = get_internal_image(7978);
            images_guienergy_124_7_0[9] = get_internal_image(7980);
            images_guienergy_124_7_0[10] = get_internal_image(7975);
            images_guienergy_124_7_0[11] = get_internal_image(7981);
            images_guienergy_124_7_0[12] = get_internal_image(7416);
            images_guienergy_124_8_0[0] = get_internal_image(391);
            images_guienergy_124_8_0[1] = get_internal_image(7982);
            images_guienergy_124_11_0[0] = get_internal_image(7416);
            images_guienergy_124_11_0[1] = get_internal_image(391);
            images_guienergy_124_11_0[2] = get_internal_image(7982);
            images_guienergy_124_11_0[3] = get_internal_image(7416);
            images_guienergy_124_11_0[4] = get_internal_image(12773);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_14_gui_energy.value;
        if (!global_data_14_gui_energy.init) {
            global_data_14_gui_energy.init = true;
        }
    }
};
FrameObject * create_guienergy_124(int x, int y)
{
    return new (Active::pool.create()) GUIEnergy_124(x, y);
}
static Image* images_guilifebasemeter_125_0_0[2];
static Direction direction_guilifebasemeter_125_0_0 = {0, 0, 0, 0, 1, images_guilifebasemeter_125_0_0, 2};
static Animation anim_guilifebasemeter_125_0 = {&direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, NULL, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0, &direction_guilifebasemeter_125_0_0};
static Image* images_guilifebasemeter_125_7_0[3];
static Direction direction_guilifebasemeter_125_7_0 = {0, 25, 25, 0, 1, images_guilifebasemeter_125_7_0, 3};
static Animation anim_guilifebasemeter_125_7 = {&direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, NULL, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0, &direction_guilifebasemeter_125_7_0};
static Animation * anim_array_guilifebasemeter_125[8] = {&anim_guilifebasemeter_125_0, NULL, NULL, NULL, NULL, NULL, NULL, &anim_guilifebasemeter_125_7};
static Animations anim_guilifebasemeter_125 = {8, &anim_array_guilifebasemeter_125[0]};
static bool anim_guilifebasemeter_125_initialized;
class GUILifeBaseMeter_125 : public Active
{
public:
    GUILifeBaseMeter_125(int x, int y) : Active(x, y, GUILifeBaseMeter_125_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GUI_Life_BaseMeter", 18);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_guilifebasemeter_125;
        if (!anim_guilifebasemeter_125_initialized) {
            anim_guilifebasemeter_125_initialized = true;
            images_guilifebasemeter_125_0_0[0] = get_internal_image(114);
            images_guilifebasemeter_125_0_0[1] = get_internal_image(82);
            images_guilifebasemeter_125_7_0[0] = get_internal_image(148);
            images_guilifebasemeter_125_7_0[1] = get_internal_image(82);
            images_guilifebasemeter_125_7_0[2] = get_internal_image(114);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_15_gui_life_basemeter.value;
        if (!global_data_15_gui_life_basemeter.init) {
            alterables->values.set(0, 50);
            global_data_15_gui_life_basemeter.init = true;
        }
    }
};
FrameObject * create_guilifebasemeter_125(int x, int y)
{
    return new (Active::pool.create()) GUILifeBaseMeter_125(x, y);
}
class FileMessageList_126 : public Text
{
public:
    FileMessageList_126(int x, int y) : Text(x, y, FileMessageList_126_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("File message list", 17);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("Press START to begin a new game.", 32));
        add_line(std::string("This file will be deleted when you select RETURN. Press START to cancel.", 72));
        add_line(std::string("ADVENTURE MODE mixes story and gameplay.", 40));
        add_line(std::string("CLASSIC MODE plays every stage in order.", 40));
        add_line(std::string("Select RETURN to pick another file slot.", 40));
        add_line(std::string("Select an empty file to copy to.", 32));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font4.bold;
        italic = font4.italic;
        font = get_font(font4.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_filemessagelist_126(int x, int y)
{
    return new (Text::pool.create()) FileMessageList_126(x, y);
}
class StageIDList_127 : public Text
{
public:
    StageIDList_127(int x, int y) : Text(x, y, StageIDList_127_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Stage ID List", 13);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        add_line(std::string("11", 2));
        add_line(std::string("3", 1));
        add_line(std::string("7", 1));
        add_line(std::string("16", 2));
        add_line(std::string("17", 2));
        add_line(std::string("25", 2));
        add_line(std::string("31", 2));
        add_line(std::string("37", 2));
        add_line(std::string("40", 2));
        add_line(std::string("47", 2));
        add_line(std::string("49", 2));
        add_line(std::string("51", 2));
        add_line(std::string("53", 2));
        add_line(std::string("55", 2));
        add_line(std::string("99", 2));
        width = 150;
        height = 17;
        blend_color = Color(0, 0, 0);
        bold = font4.bold;
        italic = font4.italic;
        font = get_font(font4.size);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        create_alterables();
    }
};
FrameObject * create_stageidlist_127(int x, int y)
{
    return new (Text::pool.create()) StageIDList_127(x, y);
}
static Image* images_controllermusic_128_0_0[1];
static Direction direction_controllermusic_128_0_0 = {0, 50, 50, 0, 1, images_controllermusic_128_0_0, 1};
static Animation anim_controllermusic_128_0 = {&direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, NULL, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0, &direction_controllermusic_128_0_0};
static Animation * anim_array_controllermusic_128[1] = {&anim_controllermusic_128_0};
static Animations anim_controllermusic_128 = {1, &anim_array_controllermusic_128[0]};
static bool anim_controllermusic_128_initialized;
class ControllerMusic_128 : public Active
{
public:
    ControllerMusic_128(int x, int y) : Active(x, y, ControllerMusic_128_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Controller.Music", 16);
#endif
        set_visible(false);
        this->animations = &anim_controllermusic_128;
        if (!anim_controllermusic_128_initialized) {
            anim_controllermusic_128_initialized = true;
            images_controllermusic_128_0_0[0] = get_internal_image(1025);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = false;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        flags |= GLOBAL;
        alterables = &global_data_16_controller_music.value;
        if (!global_data_16_controller_music.init) {
            alterables->values.set(3, -1);
            alterables->values.set(7, 3);
            alterables->values.set(12, 1);
            global_data_16_controller_music.init = true;
        }
    }
};
FrameObject * create_controllermusic_128(int x, int y)
{
    return new (Active::pool.create()) ControllerMusic_128(x, y);
}
class MapDataTemporary_129 : public ArrayObject
{
public:
    MapDataTemporary_129(int x, int y) : ArrayObject(x, y, MapDataTemporary_129_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapData_Temporary", 17);
#endif
        initialize(true, 0, 12, 6, 2);
    }
};
FrameObject * create_mapdatatemporary_129(int x, int y)
{
    return new (ArrayObject::pool.create()) MapDataTemporary_129(x, y);
}
class MapDataTemporary2_130 : public ArrayObject
{
public:
    MapDataTemporary2_130(int x, int y) : ArrayObject(x, y, MapDataTemporary2_130_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapData_Temporary 2", 19);
#endif
        initialize(true, 0, 12, 6, 2);
    }
};
FrameObject * create_mapdatatemporary2_130(int x, int y)
{
    return new (ArrayObject::pool.create()) MapDataTemporary2_130(x, y);
}
class QuickBackdrop_131 : public QuickBackdrop
{
public:
    QuickBackdrop_131(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 240;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_131(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_131(x, y);
}
class CheckerPattern_132 : public SystemBox
{
public:
    CheckerPattern_132(int x, int y) : SystemBox(x, y, CheckerPattern_132_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Checker pattern", 15);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(1249);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_checkerpattern_132(int x, int y)
{
    return new (SystemBox::pool.create()) CheckerPattern_132(x, y);
}
static Image* images_characterslot_133_0_0[3];
static Direction direction_characterslot_133_0_0 = {0, 50, 50, 0, 1, images_characterslot_133_0_0, 3};
static Image* images_characterslot_133_0_1[3];
static Direction direction_characterslot_133_0_1 = {1, 50, 50, 0, -1, images_characterslot_133_0_1, 3};
static Image* images_characterslot_133_0_2[2];
static Direction direction_characterslot_133_0_2 = {2, 50, 50, 0, -1, images_characterslot_133_0_2, 2};
static Animation anim_characterslot_133_0 = {&direction_characterslot_133_0_0, &direction_characterslot_133_0_1, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, &direction_characterslot_133_0_2, NULL, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0, &direction_characterslot_133_0_0};
static Image* images_characterslot_133_10_0[2];
static Direction direction_characterslot_133_10_0 = {0, 50, 50, 0, -1, images_characterslot_133_10_0, 2};
static Image* images_characterslot_133_10_1[2];
static Direction direction_characterslot_133_10_1 = {1, 50, 50, 0, -1, images_characterslot_133_10_1, 2};
static Animation anim_characterslot_133_10 = {&direction_characterslot_133_10_0, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_1, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0, &direction_characterslot_133_10_0};
static Animation * anim_array_characterslot_133[11] = {&anim_characterslot_133_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_characterslot_133_10};
static Animations anim_characterslot_133 = {11, &anim_array_characterslot_133[0]};
static bool anim_characterslot_133_initialized;
class CharacterSlot_133 : public Active
{
public:
    CharacterSlot_133(int x, int y) : Active(x, y, CharacterSlot_133_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Character slot", 14);
#endif
        this->animations = &anim_characterslot_133;
        if (!anim_characterslot_133_initialized) {
            anim_characterslot_133_initialized = true;
            images_characterslot_133_0_0[0] = get_internal_image(8602);
            images_characterslot_133_0_0[1] = get_internal_image(8602);
            images_characterslot_133_0_0[2] = get_internal_image(8602);
            images_characterslot_133_0_1[0] = get_internal_image(8599);
            images_characterslot_133_0_1[1] = get_internal_image(8603);
            images_characterslot_133_0_1[2] = get_internal_image(8601);
            images_characterslot_133_0_2[0] = get_internal_image(8595);
            images_characterslot_133_0_2[1] = get_internal_image(8598);
            images_characterslot_133_10_0[0] = get_internal_image(707);
            images_characterslot_133_10_0[1] = get_internal_image(707);
            images_characterslot_133_10_1[0] = get_internal_image(933);
            images_characterslot_133_10_1[1] = get_internal_image(667);
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
FrameObject * create_characterslot_133(int x, int y)
{
    return new (Active::pool.create()) CharacterSlot_133(x, y);
}
static Image* images_active3_134_0_0[1];
static Direction direction_active3_134_0_0 = {0, 50, 50, 0, 1, images_active3_134_0_0, 1};
static Image* images_active3_134_0_8[1];
static Direction direction_active3_134_0_8 = {8, 50, 50, 0, 1, images_active3_134_0_8, 1};
static Animation anim_active3_134_0 = {&direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, NULL, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, &direction_active3_134_0_8, NULL, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0, &direction_active3_134_0_0};
static Animation * anim_array_active3_134[1] = {&anim_active3_134_0};
static Animations anim_active3_134 = {1, &anim_array_active3_134[0]};
static bool anim_active3_134_initialized;
class Active3_134 : public Active
{
public:
    Active3_134(int x, int y) : Active(x, y, Active3_134_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_134;
        if (!anim_active3_134_initialized) {
            anim_active3_134_initialized = true;
            images_active3_134_0_0[0] = get_internal_image(4936);
            images_active3_134_0_8[0] = get_internal_image(322);
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
FrameObject * create_active3_134(int x, int y)
{
    return new (Active::pool.create()) Active3_134(x, y);
}
static Image* images_char5_135_0_0[1];
static Direction direction_char5_135_0_0 = {0, 0, 0, 0, 1, images_char5_135_0_0, 1};
static Image* images_char5_135_0_16[1];
static Direction direction_char5_135_0_16 = {16, 0, 0, 0, 1, images_char5_135_0_16, 1};
static Animation anim_char5_135_0 = {&direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, NULL, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, &direction_char5_135_0_16, NULL, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0, &direction_char5_135_0_0};
static Animation * anim_array_char5_135[1] = {&anim_char5_135_0};
static Animations anim_char5_135 = {1, &anim_array_char5_135[0]};
static bool anim_char5_135_initialized;
class Char5_135 : public Active
{
public:
    Char5_135(int x, int y) : Active(x, y, Char5_135_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Char 5", 6);
#endif
        this->animations = &anim_char5_135;
        if (!anim_char5_135_initialized) {
            anim_char5_135_initialized = true;
            images_char5_135_0_0[0] = get_internal_image(8597);
            images_char5_135_0_16[0] = get_internal_image(8608);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 4);
    }
};
FrameObject * create_char5_135(int x, int y)
{
    return new (Active::pool.create()) Char5_135(x, y);
}
static Image* images_char4_136_0_0[5];
static Direction direction_char4_136_0_0 = {0, 0, 0, 0, 1, images_char4_136_0_0, 5};
static Image* images_char4_136_0_16[5];
static Direction direction_char4_136_0_16 = {16, 0, 0, 0, 1, images_char4_136_0_16, 5};
static Animation anim_char4_136_0 = {&direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, NULL, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, &direction_char4_136_0_16, NULL, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0, &direction_char4_136_0_0};
static Animation * anim_array_char4_136[1] = {&anim_char4_136_0};
static Animations anim_char4_136 = {1, &anim_array_char4_136[0]};
static bool anim_char4_136_initialized;
class Char4_136 : public Active
{
public:
    Char4_136(int x, int y) : Active(x, y, Char4_136_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Char 4", 6);
#endif
        this->animations = &anim_char4_136;
        if (!anim_char4_136_initialized) {
            anim_char4_136_initialized = true;
            images_char4_136_0_0[0] = get_internal_image(99);
            images_char4_136_0_0[1] = get_internal_image(281);
            images_char4_136_0_0[2] = get_internal_image(343);
            images_char4_136_0_0[3] = get_internal_image(382);
            images_char4_136_0_0[4] = get_internal_image(383);
            images_char4_136_0_16[0] = get_internal_image(1034);
            images_char4_136_0_16[1] = get_internal_image(5397);
            images_char4_136_0_16[2] = get_internal_image(6277);
            images_char4_136_0_16[3] = get_internal_image(6605);
            images_char4_136_0_16[4] = get_internal_image(6701);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_char4_136(int x, int y)
{
    return new (Active::pool.create()) Char4_136(x, y);
}
static Image* images_char3_137_0_0[5];
static Direction direction_char3_137_0_0 = {0, 0, 0, 0, 1, images_char3_137_0_0, 5};
static Image* images_char3_137_0_8[5];
static Direction direction_char3_137_0_8 = {8, 0, 0, 0, 1, images_char3_137_0_8, 5};
static Image* images_char3_137_0_16[5];
static Direction direction_char3_137_0_16 = {16, 0, 0, 0, 1, images_char3_137_0_16, 5};
static Animation anim_char3_137_0 = {&direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, NULL, &direction_char3_137_0_8, &direction_char3_137_0_8, &direction_char3_137_0_8, &direction_char3_137_0_8, &direction_char3_137_0_8, &direction_char3_137_0_8, &direction_char3_137_0_8, NULL, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, &direction_char3_137_0_16, NULL, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0, &direction_char3_137_0_0};
static Animation * anim_array_char3_137[1] = {&anim_char3_137_0};
static Animations anim_char3_137 = {1, &anim_array_char3_137[0]};
static bool anim_char3_137_initialized;
class Char3_137 : public Active
{
public:
    Char3_137(int x, int y) : Active(x, y, Char3_137_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Char 3", 6);
#endif
        this->animations = &anim_char3_137;
        if (!anim_char3_137_initialized) {
            anim_char3_137_initialized = true;
            images_char3_137_0_0[0] = get_internal_image(90);
            images_char3_137_0_0[1] = get_internal_image(146);
            images_char3_137_0_0[2] = get_internal_image(7259);
            images_char3_137_0_0[3] = get_internal_image(7260);
            images_char3_137_0_0[4] = get_internal_image(7261);
            images_char3_137_0_8[0] = get_internal_image(7983);
            images_char3_137_0_8[1] = get_internal_image(8079);
            images_char3_137_0_8[2] = get_internal_image(8134);
            images_char3_137_0_8[3] = get_internal_image(8143);
            images_char3_137_0_8[4] = get_internal_image(8247);
            images_char3_137_0_16[0] = get_internal_image(7291);
            images_char3_137_0_16[1] = get_internal_image(7314);
            images_char3_137_0_16[2] = get_internal_image(7392);
            images_char3_137_0_16[3] = get_internal_image(7534);
            images_char3_137_0_16[4] = get_internal_image(7589);
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
FrameObject * create_char3_137(int x, int y)
{
    return new (Active::pool.create()) Char3_137(x, y);
}
static Image* images_char2_138_0_0[1];
static Direction direction_char2_138_0_0 = {0, 0, 0, 0, 1, images_char2_138_0_0, 1};
static Image* images_char2_138_0_16[1];
static Direction direction_char2_138_0_16 = {16, 50, 50, 0, 1, images_char2_138_0_16, 1};
static Animation anim_char2_138_0 = {&direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, NULL, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, &direction_char2_138_0_16, NULL, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0, &direction_char2_138_0_0};
static Animation * anim_array_char2_138[1] = {&anim_char2_138_0};
static Animations anim_char2_138 = {1, &anim_array_char2_138[0]};
static bool anim_char2_138_initialized;
class Char2_138 : public Active
{
public:
    Char2_138(int x, int y) : Active(x, y, Char2_138_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Char 2", 6);
#endif
        this->animations = &anim_char2_138;
        if (!anim_char2_138_initialized) {
            anim_char2_138_initialized = true;
            images_char2_138_0_0[0] = get_internal_image(759);
            images_char2_138_0_16[0] = get_internal_image(763);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_char2_138(int x, int y)
{
    return new (Active::pool.create()) Char2_138(x, y);
}
static Image* images_ringsparkle_139_4_0[7];
static Direction direction_ringsparkle_139_4_0 = {0, 25, 25, 0, 1, images_ringsparkle_139_4_0, 7};
static Animation anim_ringsparkle_139_4 = {&direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, NULL, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0, &direction_ringsparkle_139_4_0};
static Animation * anim_array_ringsparkle_139[5] = {NULL, NULL, NULL, NULL, &anim_ringsparkle_139_4};
static Animations anim_ringsparkle_139 = {5, &anim_array_ringsparkle_139[0]};
static bool anim_ringsparkle_139_initialized;
class RingSparkle_139 : public Active
{
public:
    RingSparkle_139(int x, int y) : Active(x, y, RingSparkle_139_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ring Sparkle", 12);
#endif
        this->animations = &anim_ringsparkle_139;
        if (!anim_ringsparkle_139_initialized) {
            anim_ringsparkle_139_initialized = true;
            images_ringsparkle_139_4_0[0] = get_internal_image(1042);
            images_ringsparkle_139_4_0[1] = get_internal_image(1043);
            images_ringsparkle_139_4_0[2] = get_internal_image(1044);
            images_ringsparkle_139_4_0[3] = get_internal_image(1045);
            images_ringsparkle_139_4_0[4] = get_internal_image(1046);
            images_ringsparkle_139_4_0[5] = get_internal_image(1047);
            images_ringsparkle_139_4_0[6] = get_internal_image(381);
        }
        collision_box = false;
        auto_rotate = false;
        transparent = true;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active();
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_ringsparkle_139(int x, int y)
{
    return new (Active::pool.create()) RingSparkle_139(x, y);
}
static Image* images_crystalcursor_140_0_0[7];
static Direction direction_crystalcursor_140_0_0 = {0, 18, 18, 0, -1, images_crystalcursor_140_0_0, 7};
static Image* images_crystalcursor_140_0_8[7];
static Direction direction_crystalcursor_140_0_8 = {8, 18, 18, 0, -1, images_crystalcursor_140_0_8, 7};
static Animation anim_crystalcursor_140_0 = {&direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, NULL, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, &direction_crystalcursor_140_0_8, NULL, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0, &direction_crystalcursor_140_0_0};
static Animation * anim_array_crystalcursor_140[1] = {&anim_crystalcursor_140_0};
static Animations anim_crystalcursor_140 = {1, &anim_array_crystalcursor_140[0]};
static bool anim_crystalcursor_140_initialized;
class CrystalCursor_140 : public Active
{
public:
    CrystalCursor_140(int x, int y) : Active(x, y, CrystalCursor_140_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crystal cursor", 14);
#endif
        set_visible(false);
        this->animations = &anim_crystalcursor_140;
        if (!anim_crystalcursor_140_initialized) {
            anim_crystalcursor_140_initialized = true;
            images_crystalcursor_140_0_0[0] = get_internal_image(5287);
            images_crystalcursor_140_0_0[1] = get_internal_image(5973);
            images_crystalcursor_140_0_0[2] = get_internal_image(6078);
            images_crystalcursor_140_0_0[3] = get_internal_image(6074);
            images_crystalcursor_140_0_0[4] = get_internal_image(6075);
            images_crystalcursor_140_0_0[5] = get_internal_image(6076);
            images_crystalcursor_140_0_0[6] = get_internal_image(6077);
            images_crystalcursor_140_0_8[0] = get_internal_image(11986);
            images_crystalcursor_140_0_8[1] = get_internal_image(11987);
            images_crystalcursor_140_0_8[2] = get_internal_image(6080);
            images_crystalcursor_140_0_8[3] = get_internal_image(6213);
            images_crystalcursor_140_0_8[4] = get_internal_image(9395);
            images_crystalcursor_140_0_8[5] = get_internal_image(11984);
            images_crystalcursor_140_0_8[6] = get_internal_image(11985);
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
FrameObject * create_crystalcursor_140(int x, int y)
{
    return new (Active::pool.create()) CrystalCursor_140(x, y);
}
static Image* images_char1_141_0_0[5];
static Direction direction_char1_141_0_0 = {0, 0, 0, 0, 1, images_char1_141_0_0, 5};
static Image* images_char1_141_0_8[1];
static Direction direction_char1_141_0_8 = {8, 0, 0, 0, 1, images_char1_141_0_8, 1};
static Image* images_char1_141_0_16[5];
static Direction direction_char1_141_0_16 = {16, 0, 0, 0, 1, images_char1_141_0_16, 5};
static Animation anim_char1_141_0 = {&direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, NULL, &direction_char1_141_0_8, &direction_char1_141_0_8, &direction_char1_141_0_8, &direction_char1_141_0_8, &direction_char1_141_0_8, &direction_char1_141_0_8, &direction_char1_141_0_8, NULL, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, &direction_char1_141_0_16, NULL, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0, &direction_char1_141_0_0};
static Animation * anim_array_char1_141[1] = {&anim_char1_141_0};
static Animations anim_char1_141 = {1, &anim_array_char1_141[0]};
static bool anim_char1_141_initialized;
class Char1_141 : public Active
{
public:
    Char1_141(int x, int y) : Active(x, y, Char1_141_type)
    {
        // qualifiers: 0
#ifndef NDEBUG
        name = std::string("Char 1", 6);
#endif
        this->animations = &anim_char1_141;
        if (!anim_char1_141_initialized) {
            anim_char1_141_initialized = true;
            images_char1_141_0_0[0] = get_internal_image(339);
            images_char1_141_0_0[1] = get_internal_image(1700);
            images_char1_141_0_0[2] = get_internal_image(1748);
            images_char1_141_0_0[3] = get_internal_image(2554);
            images_char1_141_0_0[4] = get_internal_image(2886);
            images_char1_141_0_8[0] = get_internal_image(5373);
            images_char1_141_0_16[0] = get_internal_image(3903);
            images_char1_141_0_16[1] = get_internal_image(4149);
            images_char1_141_0_16[2] = get_internal_image(4398);
            images_char1_141_0_16[3] = get_internal_image(4859);
            images_char1_141_0_16[4] = get_internal_image(5372);
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
FrameObject * create_char1_141(int x, int y)
{
    return new (Active::pool.create()) Char1_141(x, y);
}
static Image* images_charname1_142_0_0[5];
static Direction direction_charname1_142_0_0 = {0, 0, 0, 0, 1, images_charname1_142_0_0, 5};
static Animation anim_charname1_142_0 = {&direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, NULL, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0, &direction_charname1_142_0_0};
static Animation * anim_array_charname1_142[1] = {&anim_charname1_142_0};
static Animations anim_charname1_142 = {1, &anim_array_charname1_142[0]};
static bool anim_charname1_142_initialized;
class CharName1_142 : public Active
{
public:
    CharName1_142(int x, int y) : Active(x, y, CharName1_142_type)
    {
        // qualifiers: 1
#ifndef NDEBUG
        name = std::string("Char name 1", 11);
#endif
        this->animations = &anim_charname1_142;
        if (!anim_charname1_142_initialized) {
            anim_charname1_142_initialized = true;
            images_charname1_142_0_0[0] = get_internal_image(4939);
            images_charname1_142_0_0[1] = get_internal_image(4931);
            images_charname1_142_0_0[2] = get_internal_image(8580);
            images_charname1_142_0_0[3] = get_internal_image(136);
            images_charname1_142_0_0[4] = get_internal_image(8583);
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
FrameObject * create_charname1_142(int x, int y)
{
    return new (Active::pool.create()) CharName1_142(x, y);
}
static Image* images_colorbox1_143_0_0[5];
static Direction direction_colorbox1_143_0_0 = {0, 0, 0, 0, 1, images_colorbox1_143_0_0, 5};
static Image* images_colorbox1_143_0_1[5];
static Direction direction_colorbox1_143_0_1 = {1, 0, 0, 0, 1, images_colorbox1_143_0_1, 5};
static Animation anim_colorbox1_143_0 = {&direction_colorbox1_143_0_0, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_1, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0, &direction_colorbox1_143_0_0};
static Animation * anim_array_colorbox1_143[1] = {&anim_colorbox1_143_0};
static Animations anim_colorbox1_143 = {1, &anim_array_colorbox1_143[0]};
static bool anim_colorbox1_143_initialized;
class ColorBox1_143 : public Active
{
public:
    ColorBox1_143(int x, int y) : Active(x, y, ColorBox1_143_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ColorBox 1", 10);
#endif
        this->animations = &anim_colorbox1_143;
        if (!anim_colorbox1_143_initialized) {
            anim_colorbox1_143_initialized = true;
            images_colorbox1_143_0_0[0] = get_internal_image(4540);
            images_colorbox1_143_0_0[1] = get_internal_image(5365);
            images_colorbox1_143_0_0[2] = get_internal_image(5366);
            images_colorbox1_143_0_0[3] = get_internal_image(5367);
            images_colorbox1_143_0_0[4] = get_internal_image(7263);
            images_colorbox1_143_0_1[0] = get_internal_image(3157);
            images_colorbox1_143_0_1[1] = get_internal_image(4210);
            images_colorbox1_143_0_1[2] = get_internal_image(4211);
            images_colorbox1_143_0_1[3] = get_internal_image(4215);
            images_colorbox1_143_0_1[4] = get_internal_image(4217);
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
FrameObject * create_colorbox1_143(int x, int y)
{
    return new (Active::pool.create()) ColorBox1_143(x, y);
}
static Image* images_colorbox3_144_0_0[5];
static Direction direction_colorbox3_144_0_0 = {0, 0, 0, 0, 1, images_colorbox3_144_0_0, 5};
static Image* images_colorbox3_144_0_1[5];
static Direction direction_colorbox3_144_0_1 = {1, 0, 0, 0, 1, images_colorbox3_144_0_1, 5};
static Animation anim_colorbox3_144_0 = {&direction_colorbox3_144_0_0, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_1, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0, &direction_colorbox3_144_0_0};
static Animation * anim_array_colorbox3_144[1] = {&anim_colorbox3_144_0};
static Animations anim_colorbox3_144 = {1, &anim_array_colorbox3_144[0]};
static bool anim_colorbox3_144_initialized;
class ColorBox3_144 : public Active
{
public:
    ColorBox3_144(int x, int y) : Active(x, y, ColorBox3_144_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ColorBox 3", 10);
#endif
        this->animations = &anim_colorbox3_144;
        if (!anim_colorbox3_144_initialized) {
            anim_colorbox3_144_initialized = true;
            images_colorbox3_144_0_0[0] = get_internal_image(342);
            images_colorbox3_144_0_0[1] = get_internal_image(7125);
            images_colorbox3_144_0_0[2] = get_internal_image(7136);
            images_colorbox3_144_0_0[3] = get_internal_image(7257);
            images_colorbox3_144_0_0[4] = get_internal_image(7258);
            images_colorbox3_144_0_1[0] = get_internal_image(6754);
            images_colorbox3_144_0_1[1] = get_internal_image(6770);
            images_colorbox3_144_0_1[2] = get_internal_image(7077);
            images_colorbox3_144_0_1[3] = get_internal_image(7112);
            images_colorbox3_144_0_1[4] = get_internal_image(7116);
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
FrameObject * create_colorbox3_144(int x, int y)
{
    return new (Active::pool.create()) ColorBox3_144(x, y);
}
static Image* images_colorbox2_145_0_0[5];
static Direction direction_colorbox2_145_0_0 = {0, 0, 0, 0, 1, images_colorbox2_145_0_0, 5};
static Image* images_colorbox2_145_0_1[5];
static Direction direction_colorbox2_145_0_1 = {1, 0, 0, 0, 1, images_colorbox2_145_0_1, 5};
static Animation anim_colorbox2_145_0 = {&direction_colorbox2_145_0_0, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_1, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0, &direction_colorbox2_145_0_0};
static Animation * anim_array_colorbox2_145[1] = {&anim_colorbox2_145_0};
static Animations anim_colorbox2_145 = {1, &anim_array_colorbox2_145[0]};
static bool anim_colorbox2_145_initialized;
class ColorBox2_145 : public Active
{
public:
    ColorBox2_145(int x, int y) : Active(x, y, ColorBox2_145_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ColorBox 2", 10);
#endif
        this->animations = &anim_colorbox2_145;
        if (!anim_colorbox2_145_initialized) {
            anim_colorbox2_145_initialized = true;
            images_colorbox2_145_0_0[0] = get_internal_image(5095);
            images_colorbox2_145_0_0[1] = get_internal_image(5244);
            images_colorbox2_145_0_0[2] = get_internal_image(5286);
            images_colorbox2_145_0_0[3] = get_internal_image(5363);
            images_colorbox2_145_0_0[4] = get_internal_image(4028);
            images_colorbox2_145_0_1[0] = get_internal_image(4535);
            images_colorbox2_145_0_1[1] = get_internal_image(4536);
            images_colorbox2_145_0_1[2] = get_internal_image(4537);
            images_colorbox2_145_0_1[3] = get_internal_image(4538);
            images_colorbox2_145_0_1[4] = get_internal_image(4539);
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
FrameObject * create_colorbox2_145(int x, int y)
{
    return new (Active::pool.create()) ColorBox2_145(x, y);
}
class BackgroundSystemBox_146 : public SystemBox
{
public:
    BackgroundSystemBox_146(int x, int y) : SystemBox(x, y, BackgroundSystemBox_146_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Background System Box", 21);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 240;
        type = PATTERN_IMAGE;
        image = get_internal_image(2390);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_backgroundsystembox_146(int x, int y)
{
    return new (SystemBox::pool.create()) BackgroundSystemBox_146(x, y);
}
class Backdrop_147 : public Backdrop
{
public:
    Backdrop_147(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(1340);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_147(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_147(x, y);
}
class HelpMessage_148 : public TextBlitter
{
public:
    HelpMessage_148(int x, int y) : TextBlitter(x, y, HelpMessage_148_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Help Message", 12);
#endif
        width = 426;
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
        set_text(std::string("A: Select character    B: Return    C: Change color", 51));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_helpmessage_148(int x, int y)
{
    return new (TextBlitter::pool.create()) HelpMessage_148(x, y);
}
static Image* images_fadein_149_0_0[1];
static Direction direction_fadein_149_0_0 = {0, 100, 100, 0, 1, images_fadein_149_0_0, 1};
static Animation anim_fadein_149_0 = {&direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, NULL, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0, &direction_fadein_149_0_0};
static Image* images_fadein_149_4_0[6];
static Direction direction_fadein_149_4_0 = {0, 100, 100, 0, 1, images_fadein_149_4_0, 6};
static Animation anim_fadein_149_4 = {&direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, NULL, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0, &direction_fadein_149_4_0};
static Animation * anim_array_fadein_149[5] = {&anim_fadein_149_0, NULL, NULL, NULL, &anim_fadein_149_4};
static Animations anim_fadein_149 = {5, &anim_array_fadein_149[0]};
static bool anim_fadein_149_initialized;
class FadeIn_149 : public Active
{
public:
    FadeIn_149(int x, int y) : Active(x, y, FadeIn_149_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fade in", 7);
#endif
        this->animations = &anim_fadein_149;
        if (!anim_fadein_149_initialized) {
            anim_fadein_149_initialized = true;
            images_fadein_149_0_0[0] = get_internal_image(2390);
            images_fadein_149_4_0[0] = get_internal_image(2390);
            images_fadein_149_4_0[1] = get_internal_image(654);
            images_fadein_149_4_0[2] = get_internal_image(2710);
            images_fadein_149_4_0[3] = get_internal_image(2712);
            images_fadein_149_4_0[4] = get_internal_image(2545);
            images_fadein_149_4_0[5] = get_internal_image(2765);
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
FrameObject * create_fadein_149(int x, int y)
{
    return new (Active::pool.create()) FadeIn_149(x, y);
}
class LockedBack_150 : public Backdrop
{
public:
    LockedBack_150(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("LockedBack", 10);
#endif
        flags |= BACKGROUND;
        image = get_internal_image(10650);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_lockedback_150(int x, int y)
{
    return new (Backdrop::pool.create()) LockedBack_150(x, y);
}
class BG1Layer1_151 : public SystemBox
{
public:
    BG1Layer1_151(int x, int y) : SystemBox(x, y, BG1Layer1_151_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG1_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(4126);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg1layer1_151(int x, int y)
{
    return new (SystemBox::pool.create()) BG1Layer1_151(x, y);
}
class BG1Layer2_152 : public SystemBox
{
public:
    BG1Layer2_152(int x, int y) : SystemBox(x, y, BG1Layer2_152_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG1_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 128;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(4641);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg1layer2_152(int x, int y)
{
    return new (SystemBox::pool.create()) BG1Layer2_152(x, y);
}
class BG1Layer3_153 : public SystemBox
{
public:
    BG1Layer3_153(int x, int y) : SystemBox(x, y, BG1Layer3_153_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG1_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 256;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(4642);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg1layer3_153(int x, int y)
{
    return new (SystemBox::pool.create()) BG1Layer3_153(x, y);
}
class BG1Layer4_154 : public SystemBox
{
public:
    BG1Layer4_154(int x, int y) : SystemBox(x, y, BG1Layer4_154_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG1_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 368;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5151);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg1layer4_154(int x, int y)
{
    return new (SystemBox::pool.create()) BG1Layer4_154(x, y);
}
class BG2Layer1_155 : public SystemBox
{
public:
    BG2Layer1_155(int x, int y) : SystemBox(x, y, BG2Layer1_155_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG2_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5144);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg2layer1_155(int x, int y)
{
    return new (SystemBox::pool.create()) BG2Layer1_155(x, y);
}
class BG2Layer2_156 : public SystemBox
{
public:
    BG2Layer2_156(int x, int y) : SystemBox(x, y, BG2Layer2_156_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG2_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5148);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg2layer2_156(int x, int y)
{
    return new (SystemBox::pool.create()) BG2Layer2_156(x, y);
}
class BG2Layer3_157 : public SystemBox
{
public:
    BG2Layer3_157(int x, int y) : SystemBox(x, y, BG2Layer3_157_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG2_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5254);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg2layer3_157(int x, int y)
{
    return new (SystemBox::pool.create()) BG2Layer3_157(x, y);
}
class BG2Layer4_158 : public SystemBox
{
public:
    BG2Layer4_158(int x, int y) : SystemBox(x, y, BG2Layer4_158_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG2_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5452);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg2layer4_158(int x, int y)
{
    return new (SystemBox::pool.create()) BG2Layer4_158(x, y);
}
class BG3Layer1_159 : public SystemBox
{
public:
    BG3Layer1_159(int x, int y) : SystemBox(x, y, BG3Layer1_159_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG3_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5335);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg3layer1_159(int x, int y)
{
    return new (SystemBox::pool.create()) BG3Layer1_159(x, y);
}
class BG3Layer2_160 : public SystemBox
{
public:
    BG3Layer2_160(int x, int y) : SystemBox(x, y, BG3Layer2_160_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG3_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5714);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg3layer2_160(int x, int y)
{
    return new (SystemBox::pool.create()) BG3Layer2_160(x, y);
}
class BG3Layer3_161 : public SystemBox
{
public:
    BG3Layer3_161(int x, int y) : SystemBox(x, y, BG3Layer3_161_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG3_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5729);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg3layer3_161(int x, int y)
{
    return new (SystemBox::pool.create()) BG3Layer3_161(x, y);
}
class BG3Layer4_162 : public SystemBox
{
public:
    BG3Layer4_162(int x, int y) : SystemBox(x, y, BG3Layer4_162_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG3_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5786);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg3layer4_162(int x, int y)
{
    return new (SystemBox::pool.create()) BG3Layer4_162(x, y);
}
class BG4Layer1_163 : public SystemBox
{
public:
    BG4Layer1_163(int x, int y) : SystemBox(x, y, BG4Layer1_163_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG4_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5698);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg4layer1_163(int x, int y)
{
    return new (SystemBox::pool.create()) BG4Layer1_163(x, y);
}
class BG4Layer2_164 : public SystemBox
{
public:
    BG4Layer2_164(int x, int y) : SystemBox(x, y, BG4Layer2_164_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG4_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5796);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg4layer2_164(int x, int y)
{
    return new (SystemBox::pool.create()) BG4Layer2_164(x, y);
}
class BG4Layer3_165 : public SystemBox
{
public:
    BG4Layer3_165(int x, int y) : SystemBox(x, y, BG4Layer3_165_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG4_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5974);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg4layer3_165(int x, int y)
{
    return new (SystemBox::pool.create()) BG4Layer3_165(x, y);
}
class BG4Layer4_166 : public SystemBox
{
public:
    BG4Layer4_166(int x, int y) : SystemBox(x, y, BG4Layer4_166_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG4_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 600;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5731);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg4layer4_166(int x, int y)
{
    return new (SystemBox::pool.create()) BG4Layer4_166(x, y);
}
class BG5Layer1_167 : public SystemBox
{
public:
    BG5Layer1_167(int x, int y) : SystemBox(x, y, BG5Layer1_167_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG5_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(4964);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg5layer1_167(int x, int y)
{
    return new (SystemBox::pool.create()) BG5Layer1_167(x, y);
}
class BG5Layer2_168 : public SystemBox
{
public:
    BG5Layer2_168(int x, int y) : SystemBox(x, y, BG5Layer2_168_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG5_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(16142);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg5layer2_168(int x, int y)
{
    return new (SystemBox::pool.create()) BG5Layer2_168(x, y);
}
class BG5Layer3_169 : public SystemBox
{
public:
    BG5Layer3_169(int x, int y) : SystemBox(x, y, BG5Layer3_169_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG5_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 600;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(8445);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg5layer3_169(int x, int y)
{
    return new (SystemBox::pool.create()) BG5Layer3_169(x, y);
}
class BG5Layer4_170 : public SystemBox
{
public:
    BG5Layer4_170(int x, int y) : SystemBox(x, y, BG5Layer4_170_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG5_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(7391);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg5layer4_170(int x, int y)
{
    return new (SystemBox::pool.create()) BG5Layer4_170(x, y);
}
class BG6Layer1_171 : public SystemBox
{
public:
    BG6Layer1_171(int x, int y) : SystemBox(x, y, BG6Layer1_171_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG6_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5956);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg6layer1_171(int x, int y)
{
    return new (SystemBox::pool.create()) BG6Layer1_171(x, y);
}
class BG6Layer2_172 : public SystemBox
{
public:
    BG6Layer2_172(int x, int y) : SystemBox(x, y, BG6Layer2_172_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG6_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 454;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(6216);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg6layer2_172(int x, int y)
{
    return new (SystemBox::pool.create()) BG6Layer2_172(x, y);
}
class BG6Layer3_173 : public SystemBox
{
public:
    BG6Layer3_173(int x, int y) : SystemBox(x, y, BG6Layer3_173_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG6_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 280;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(6679);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg6layer3_173(int x, int y)
{
    return new (SystemBox::pool.create()) BG6Layer3_173(x, y);
}
class BG6Layer4_174 : public SystemBox
{
public:
    BG6Layer4_174(int x, int y) : SystemBox(x, y, BG6Layer4_174_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG6_Layer4", 10);
#endif
        flags |= BACKGROUND;
        width = 454;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5654);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg6layer4_174(int x, int y)
{
    return new (SystemBox::pool.create()) BG6Layer4_174(x, y);
}
class BG7Layer1_175 : public SystemBox
{
public:
    BG7Layer1_175(int x, int y) : SystemBox(x, y, BG7Layer1_175_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG7_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(11750);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg7layer1_175(int x, int y)
{
    return new (SystemBox::pool.create()) BG7Layer1_175(x, y);
}
class BG7Layer2_176 : public SystemBox
{
public:
    BG7Layer2_176(int x, int y) : SystemBox(x, y, BG7Layer2_176_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG7_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 384;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(12580);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg7layer2_176(int x, int y)
{
    return new (SystemBox::pool.create()) BG7Layer2_176(x, y);
}
class BG7Layer3_177 : public SystemBox
{
public:
    BG7Layer3_177(int x, int y) : SystemBox(x, y, BG7Layer3_177_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG7_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 560;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(5895);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg7layer3_177(int x, int y)
{
    return new (SystemBox::pool.create()) BG7Layer3_177(x, y);
}
class BGALayer1_178 : public SystemBox
{
public:
    BGALayer1_178(int x, int y) : SystemBox(x, y, BGALayer1_178_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BGA_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 300;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(8301);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bgalayer1_178(int x, int y)
{
    return new (SystemBox::pool.create()) BGALayer1_178(x, y);
}
class BGALayer2_179 : public SystemBox
{
public:
    BGALayer2_179(int x, int y) : SystemBox(x, y, BGALayer2_179_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BGA_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 240;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(8300);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bgalayer2_179(int x, int y)
{
    return new (SystemBox::pool.create()) BGALayer2_179(x, y);
}
class BGALayer3_180 : public SystemBox
{
public:
    BGALayer3_180(int x, int y) : SystemBox(x, y, BGALayer3_180_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BGA_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(8302);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bgalayer3_180(int x, int y)
{
    return new (SystemBox::pool.create()) BGALayer3_180(x, y);
}
class BG8Layer1_181 : public SystemBox
{
public:
    BG8Layer1_181(int x, int y) : SystemBox(x, y, BG8Layer1_181_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG8_Layer1", 10);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(13024);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg8layer1_181(int x, int y)
{
    return new (SystemBox::pool.create()) BG8Layer1_181(x, y);
}
class BG8Layer2_182 : public SystemBox
{
public:
    BG8Layer2_182(int x, int y) : SystemBox(x, y, BG8Layer2_182_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG8_Layer2", 10);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(13027);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg8layer2_182(int x, int y)
{
    return new (SystemBox::pool.create()) BG8Layer2_182(x, y);
}
class BG8Layer3_183 : public SystemBox
{
public:
    BG8Layer3_183(int x, int y) : SystemBox(x, y, BG8Layer3_183_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG8_Layer3", 10);
#endif
        flags |= BACKGROUND;
        width = 432;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(6054);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg8layer3_183(int x, int y)
{
    return new (SystemBox::pool.create()) BG8Layer3_183(x, y);
}
class BG9Layer1_184 : public SystemBox
{
public:
    BG9Layer1_184(int x, int y) : SystemBox(x, y, BG9Layer1_184_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG9_Layer 1", 11);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(2847);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg9layer1_184(int x, int y)
{
    return new (SystemBox::pool.create()) BG9Layer1_184(x, y);
}
class BG9Layer2_185 : public SystemBox
{
public:
    BG9Layer2_185(int x, int y) : SystemBox(x, y, BG9Layer2_185_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG9_Layer 2", 11);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(2884);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg9layer2_185(int x, int y)
{
    return new (SystemBox::pool.create()) BG9Layer2_185(x, y);
}
class BG9Layer3_186 : public SystemBox
{
public:
    BG9Layer3_186(int x, int y) : SystemBox(x, y, BG9Layer3_186_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG9_Layer 3", 11);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(6678);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg9layer3_186(int x, int y)
{
    return new (SystemBox::pool.create()) BG9Layer3_186(x, y);
}
class BG10Layer1_187 : public SystemBox
{
public:
    BG10Layer1_187(int x, int y) : SystemBox(x, y, BG10Layer1_187_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG10_Layer1", 11);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(6699);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg10layer1_187(int x, int y)
{
    return new (SystemBox::pool.create()) BG10Layer1_187(x, y);
}
class BG10Layer2_188 : public SystemBox
{
public:
    BG10Layer2_188(int x, int y) : SystemBox(x, y, BG10Layer2_188_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG10_Layer 2", 12);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(7198);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg10layer2_188(int x, int y)
{
    return new (SystemBox::pool.create()) BG10Layer2_188(x, y);
}
class BG10Layer3_189 : public SystemBox
{
public:
    BG10Layer3_189(int x, int y) : SystemBox(x, y, BG10Layer3_189_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG10_Layer 3", 12);
#endif
        flags |= BACKGROUND;
        width = 320;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(7654);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg10layer3_189(int x, int y)
{
    return new (SystemBox::pool.create()) BG10Layer3_189(x, y);
}
class BG10Layer4_190 : public SystemBox
{
public:
    BG10Layer4_190(int x, int y) : SystemBox(x, y, BG10Layer4_190_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG10_Layer 4", 12);
#endif
        flags |= BACKGROUND;
        width = 512;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(14156);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg10layer4_190(int x, int y)
{
    return new (SystemBox::pool.create()) BG10Layer4_190(x, y);
}
class BG11Layer1_191 : public SystemBox
{
public:
    BG11Layer1_191(int x, int y) : SystemBox(x, y, BG11Layer1_191_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG11_Layer1", 11);
#endif
        flags |= BACKGROUND;
        width = 400;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15155);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg11layer1_191(int x, int y)
{
    return new (SystemBox::pool.create()) BG11Layer1_191(x, y);
}
class BG11Layer2_192 : public SystemBox
{
public:
    BG11Layer2_192(int x, int y) : SystemBox(x, y, BG11Layer2_192_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG11_Layer 2", 12);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15197);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg11layer2_192(int x, int y)
{
    return new (SystemBox::pool.create()) BG11Layer2_192(x, y);
}
class BG11Layer3_193 : public SystemBox
{
public:
    BG11Layer3_193(int x, int y) : SystemBox(x, y, BG11Layer3_193_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG11_Layer 3", 12);
#endif
        flags |= BACKGROUND;
        width = 640;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15199);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg11layer3_193(int x, int y)
{
    return new (SystemBox::pool.create()) BG11Layer3_193(x, y);
}
class BG11Layer4_194 : public SystemBox
{
public:
    BG11Layer4_194(int x, int y) : SystemBox(x, y, BG11Layer4_194_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG11_Layer 4", 12);
#endif
        flags |= BACKGROUND;
        width = 568;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15200);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg11layer4_194(int x, int y)
{
    return new (SystemBox::pool.create()) BG11Layer4_194(x, y);
}
class BG14Layer1_195 : public SystemBox
{
public:
    BG14Layer1_195(int x, int y) : SystemBox(x, y, BG14Layer1_195_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG14_Layer1", 11);
#endif
        flags |= BACKGROUND;
        width = 272;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(4545);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg14layer1_195(int x, int y)
{
    return new (SystemBox::pool.create()) BG14Layer1_195(x, y);
}
class BG12Layer1_196 : public SystemBox
{
public:
    BG12Layer1_196(int x, int y) : SystemBox(x, y, BG12Layer1_196_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG12_Layer1", 11);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15207);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg12layer1_196(int x, int y)
{
    return new (SystemBox::pool.create()) BG12Layer1_196(x, y);
}
class BG12Layer2_197 : public SystemBox
{
public:
    BG12Layer2_197(int x, int y) : SystemBox(x, y, BG12Layer2_197_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG12_Layer 2", 12);
#endif
        flags |= BACKGROUND;
        width = 360;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(973);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg12layer2_197(int x, int y)
{
    return new (SystemBox::pool.create()) BG12Layer2_197(x, y);
}
class BG12Layer3_198 : public SystemBox
{
public:
    BG12Layer3_198(int x, int y) : SystemBox(x, y, BG12Layer3_198_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG12_Layer 3", 12);
#endif
        flags |= BACKGROUND;
        width = 480;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(1000);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg12layer3_198(int x, int y)
{
    return new (SystemBox::pool.create()) BG12Layer3_198(x, y);
}
class BG13Layer1_199 : public SystemBox
{
public:
    BG13Layer1_199(int x, int y) : SystemBox(x, y, BG13Layer1_199_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG13_Layer1", 11);
#endif
        flags |= BACKGROUND;
        width = 2048;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15202);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg13layer1_199(int x, int y)
{
    return new (SystemBox::pool.create()) BG13Layer1_199(x, y);
}
class BG13Layer2_200 : public SystemBox
{
public:
    BG13Layer2_200(int x, int y) : SystemBox(x, y, BG13Layer2_200_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG13_Layer 2", 12);
#endif
        flags |= BACKGROUND;
        width = 272;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15206);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg13layer2_200(int x, int y)
{
    return new (SystemBox::pool.create()) BG13Layer2_200(x, y);
}
class BG12Layer4_201 : public SystemBox
{
public:
    BG12Layer4_201(int x, int y) : SystemBox(x, y, BG12Layer4_201_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("BG12_Layer 4", 12);
#endif
        flags |= BACKGROUND;
        width = 448;
        height = 48;
        type = PATTERN_IMAGE;
        image = get_internal_image(15201);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_bg12layer4_201(int x, int y)
{
    return new (SystemBox::pool.create()) BG12Layer4_201(x, y);
}
class QuickBackdrop_202 : public QuickBackdrop
{
public:
    QuickBackdrop_202(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        width = 208;
        height = 128;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop_202(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_202(x, y);
}
class CheckerPattern_203 : public SystemBox
{
public:
    CheckerPattern_203(int x, int y) : SystemBox(x, y, CheckerPattern_203_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Checker pattern", 15);
#endif
        flags |= BACKGROUND;
        width = 160;
        height = 320;
        type = PATTERN_IMAGE;
        image = get_internal_image(887);
        text = std::string(std::string(), 0);
        create_alterables();
    }
};
FrameObject * create_checkerpattern_203(int x, int y)
{
    return new (SystemBox::pool.create()) CheckerPattern_203(x, y);
}
static Image* images_recordback_204_0_0[1];
static Direction direction_recordback_204_0_0 = {0, 50, 50, 0, 1, images_recordback_204_0_0, 1};
static Animation anim_recordback_204_0 = {&direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, NULL, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0, &direction_recordback_204_0_0};
static Animation * anim_array_recordback_204[1] = {&anim_recordback_204_0};
static Animations anim_recordback_204 = {1, &anim_array_recordback_204[0]};
static bool anim_recordback_204_initialized;
class RecordBack_204 : public Active
{
public:
    RecordBack_204(int x, int y) : Active(x, y, RecordBack_204_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Record Back", 11);
#endif
        set_visible(false);
        this->animations = &anim_recordback_204;
        if (!anim_recordback_204_initialized) {
            anim_recordback_204_initialized = true;
            images_recordback_204_0_0[0] = get_internal_image(3818);
        }
        collision_box = true;
        auto_rotate = false;
        transparent = true;
        animation = STOPPED;
        current_animation = animation;
        initialize_active();
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_recordback_204(int x, int y)
{
    return new (Active::pool.create()) RecordBack_204(x, y);
}
