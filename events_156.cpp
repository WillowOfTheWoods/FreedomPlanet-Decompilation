#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_12331()
{
    // event 1829_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1829_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1829_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (20))) goto event_1829_55_end;
        if (once_condition_1829_55) goto event_1829_55_end;
        once_condition_1829_55 = true;
        playerskinsashhair_417_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinsashhair_417(6000, 1770), 3);
            playerskinsashhair_417_instances.add_back();
        }
        playerskinsash_418_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinsash_418(6000, 1770), 3);
            playerskinsash_418_instances.add_back();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1) {
            group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1 = true;
        }
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(6200);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, 1700);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(21);
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(2);
        }
    }
    event_1829_55_end: ;
}
void Frames::event_func_12332()
{
    // event 1830_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1830_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1830_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (100))) goto event_1830_55_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -60);
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(2-(((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)-100)*0.01);
        }
    }
    event_1830_55_end: ;
}
void Frames::event_func_12333()
{
    // event 1831_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1831_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1831_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (164))) goto event_1831_55_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1831_55_end: ;
}
void Frames::event_func_12334()
{
    // event 1832_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1832_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1832_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (180))) goto event_1832_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) < (210))) goto event_1832_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->alterables->values.add(0, 1);
    }
    event_1832_55_end: ;
}
void Frames::event_func_12335()
{
    // event 1833_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1833_55_end;
        if (!((((Active*)get_instance(npchologram2_3074_instances))->alterables->values.get(0)) > (2))) goto event_1833_55_end;
        if (!(((Active*)get_instance(npchologram2_3074_instances))->flags & VISIBLE)) goto event_1833_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1833_55_end: ;
}
void Frames::event_func_12336()
{
    // event 1834_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1834_55_end;
        if (!((((Active*)get_instance(npchologram2_3074_instances))->alterables->values.get(0)) > (2))) goto event_1834_55_end;
        if (((Active*)get_instance(npchologram2_3074_instances))->flags & VISIBLE) goto event_1834_55_end;
        ((Active*)get_instance(npchologram2_3074_instances))->alterables->values.set(0, 0);
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
    }
    event_1834_55_end: ;
}
void Frames::event_func_12337()
{
    // event 1835_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1835_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1835_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (210))) goto event_1835_55_end;
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
    }
    event_1835_55_end: ;
}
void Frames::event_func_12338()
{
    // event 1836_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1836_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1836_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (260))) goto event_1836_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, get_min(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)+15, 1765));
    }
    event_1836_55_end: ;
}
void Frames::event_func_12339()
{
    // event 1837_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1837_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1837_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (260))) goto event_1837_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)) >= (1765))) goto event_1837_55_end;
        if (!(((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.is_off(1))) goto event_1837_55_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1837_55_end: ;
}
void Frames::event_func_12340()
{
    // event 1838_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1838_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1838_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (310))) goto event_1838_55_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1838_55_0; single_instance_1838_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + -13, parent->y + -15), parent->layer);
                if (single_instance_1838_55_0 == NULL)
                    single_instance_1838_55_0 = new_obj;
            }
        }
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -13, parent->y + -15), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -13, parent->y + -15), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
    }
    event_1838_55_end: ;
}
void Frames::event_func_12341()
{
    // event 1839_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1839_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1839_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (330))) goto event_1839_55_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1839_55_0; single_instance_1839_55_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 6, parent->y + 8), parent->layer);
                if (single_instance_1839_55_0 == NULL)
                    single_instance_1839_55_0 = new_obj;
            }
        }
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 6, parent->y + 8), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 6, parent->y + 8), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
    }
    event_1839_55_end: ;
}
void Frames::event_func_12342()
{
    // event 1840_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1840_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1840_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (390))) goto event_1840_55_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1840_55_end: ;
}
void Frames::event_func_12343()
{
    // event 1841_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1)) goto event_1841_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (7))) goto event_1841_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) > (420))) goto event_1841_55_end;
        if (once_condition_1841_55) goto event_1841_55_end;
        once_condition_1841_55 = true;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
    }
    event_1841_55_end: ;
}
void Frames::event_func_12344()
{
    // event 1842_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1842_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_y(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(9))*8);
        {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            if (parent == NULL) goto pos_end_1842_55_0;
            ((Active*)get_instance(npchologram2_3074_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1842_55_0: ;
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npchologram2_3074_instances));
            if (parent == NULL) goto pos_end_1842_55_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1842_55_1: ;
        }
    }
    event_1842_55_end: ;
}
void Frames::event_func_12345()
{
    // event 1843_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1843_55_end;
        if (!(((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.is_off(1))) goto event_1843_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 2);
    }
    event_1843_55_end: ;
}
void Frames::event_func_12346()
{
    // event 1844_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1844_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1844_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_y(get_min(((Active*)get_instance(npcpangu_3073_instances))->get_y(), 1765));
    }
    event_1844_55_end: ;
}
void Frames::event_func_12347()
{
    // event 1845_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1845_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1845_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (1))) goto event_1845_55_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(0);
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1845_55_end: ;
}
void Frames::event_func_12348()
{
    // event 1846_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1846_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1846_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (-1))) goto event_1846_55_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(16);
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1846_55_end: ;
}
void Frames::event_func_12349()
{
    // event 1847_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1847_55_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpanguleftarm_3075_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpanguleftarm_3075_instances.has_selection()) goto event_1847_55_end;
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1847_55_end: ;
}
void Frames::event_func_12350()
{
    // event 1848_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1848_55_end;
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpangurightarm_3076_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpangurightarm_3076_instances.has_selection()) goto event_1848_55_end;
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1848_55_end: ;
}
void Frames::event_func_12351()
{
    // event 1849_55
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_1 && group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1)) goto event_1849_55_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1849_55_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), 1784));
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), 1784));
        }
    }
    event_1849_55_end: ;
}
void Frames::event_func_12352()
{
    // event 1854_55
    {
        if (!(group_main_engine_1)) goto event_1854_55_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1854_55_end;
        if (once_condition_1854_55) goto event_1854_55_end;
        once_condition_1854_55 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 51)) == (0))) goto event_1854_55_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (480000))) goto event_1854_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 51);
    }
    event_1854_55_end: ;
}
void Frames::event_func_12353()
{
    // event 1855_55
    {
        if (!(group_main_engine_1)) goto event_1855_55_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1855_55_end;
        if (once_condition_1855_55) goto event_1855_55_end;
        once_condition_1855_55 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 31)) == (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 81)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 82)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 83)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 84)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 85)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 86)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 87)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 88)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 89)) > (0))) goto event_1855_55_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 90)) > (0))) goto event_1855_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 31);
    }
    event_1855_55_end: ;
}
void Frames::event_func_12354()
{
    // event 1856_55
    {
        if (!(group_main_engine_1)) goto event_1856_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1856_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1856_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1856_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1856_55_end: ;
}
void Frames::event_func_12355()
{
    // event 1857_55
    {
        if (!(group_main_engine_1)) goto event_1857_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1857_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1857_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1857_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1857_55_end: ;
}
void Frames::event_func_12356()
{
    // event 1858_55
    {
        if (!(group_main_engine_1)) goto event_1858_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1858_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1858_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1858_55_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1858_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1858_55_end: ;
}
void Frames::event_func_12357()
{
    // event 1859_55
    {
        if (!(group_main_engine_1)) goto event_1859_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1859_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1859_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1859_55_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1859_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1859_55_end: ;
}
void Frames::event_func_12358()
{
    // event 1860_55
    {
        if (!(group_main_engine_1)) goto event_1860_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1860_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1860_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1860_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1860_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1860_55_end: ;
}
void Frames::event_func_12359()
{
    // event 1861_55
    {
        if (!(group_main_engine_1)) goto event_1861_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1861_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1861_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1861_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1861_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1861_55_end: ;
}
void Frames::event_func_12360()
{
    // event 1862_55
    {
        if (!(group_main_engine_1)) goto event_1862_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1862_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1862_55_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1862_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1862_55_end: ;
}
void Frames::event_func_12361()
{
    // event 1863_55
    {
        if (!(group_main_engine_1)) goto event_1863_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1863_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1863_55_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1863_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1863_55_end: ;
}
void Frames::event_func_12362()
{
    // event 1864_55
    {
        if (!(group_main_engine_1)) goto event_1864_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(10)) == (6))) goto event_1864_55_end;
        if (!((((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.get(12)) == (1))) goto event_1864_55_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1864_55_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1864_55_end: ;
}
void Frames::event_func_12363()
{
    // event 1955_55
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1955_55_end;
        if (once_condition_1955_55) goto event_1955_55_end;
        once_condition_1955_55 = true;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1955_55_end;
        if (!((global_values->get(4)) < (10))) goto event_1955_55_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1955_55_end: ;
}
void Frames::event_func_12364()
{
    // event 1956_55
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1956_55_end;
        if (once_condition_1956_55) goto event_1956_55_end;
        once_condition_1956_55 = true;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1956_55_end;
        if (!((global_values->get(4)) >= (10))) goto event_1956_55_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1956_55_end: ;
}
void Frames::event_func_12365()
{
    // event 2069_55
    {
        if (!(group_pause_1)) goto event_2069_55_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2069_55_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2069_55_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2069_55_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2069_55_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(enemysleepgas_2889_instances))->stop_animation();
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyobelisklaser_3002_instances.clear_selection();
        for (ObjectIterator it(enemyobelisklaser_3002_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectplasmaburst_3047_instances.clear_selection();
        for (ObjectIterator it(effectplasmaburst_3047_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_2069_55_end: ;
}
void Frames::event_func_12366()
{
    // event 2070_55
    bool or_result_2070_55 = false;
    bool or_temp_result_2070_55_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2070_55_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2070_55_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2070_55_0_end;
        or_result_2070_55 = true;
        or_temp_result_2070_55_0 = true;
    }
    or_event_2070_55_0_end: ;
    // event 2070_55
    bool or_temp_result_2070_55_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2070_55_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2070_55_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2070_55_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2070_55_1_end;
        or_result_2070_55 = true;
        or_temp_result_2070_55_1 = true;
        or_event_2070_55_1_end: ;
        if (!or_result_2070_55) goto or_final_or_event_2070_55_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(enemysleepgas_2889_instances))->start_animation();
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyobelisklaser_3002_instances.clear_selection();
        for (ObjectIterator it(enemyobelisklaser_3002_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossholodragonflame_3046_instances.clear_selection();
        for (ObjectIterator it(bossholodragonflame_3046_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectplasmaburst_3047_instances.clear_selection();
        for (ObjectIterator it(effectplasmaburst_3047_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2070_55_1_end: ;
}
void Frames::handle_frame_56_events()
{
    test_collisions_55();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_12051();
    event_func_4203();
    event_func_4205();
    event_func_2650();
    event_func_4187();
    event_func_4188();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_11864();
    event_func_11954();
    event_func_11955();
    event_func_11956();
    event_func_12132();
    event_func_11958();
    event_func_11959();
    event_func_11960();
    event_func_11961();
    event_func_11962();
    event_func_11963();
    event_func_11964();
    event_func_11965();
    event_func_11966();
    event_func_11967();
    event_func_11968();
    event_func_11969();
    event_func_11970();
    event_func_11971();
    event_func_11972();
    event_func_11973();
    event_func_11974();
    event_func_11975();
    event_func_11976();
    event_func_11977();
    event_func_11978();
    event_func_11979();
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_2735();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_5410();
    event_func_5411();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_2744();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_2752();
    event_func_2753();
    event_func_2754();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_10049();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_2755();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_10050();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_10051();
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
    event_func_10052();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_2766();
    event_func_1694();
    event_func_10053();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_10054();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_2776();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_1777();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_2823();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_1909();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_2824();
    event_func_1973();
    event_func_2825();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_10058();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_10059();
    event_func_10060();
    event_func_10061();
    event_func_10062();
    event_func_2004();
    event_func_10063();
    event_func_10064();
    event_func_10065();
    event_func_10066();
    event_func_10067();
    event_func_2010();
    event_func_10068();
    event_func_10069();
    event_func_10070();
    event_func_10071();
    event_func_10072();
    event_func_10073();
    event_func_10074();
    event_func_10075();
    event_func_10076();
    event_func_10077();
    event_func_10078();
    event_func_10079();
    event_func_10080();
    event_func_2834();
    event_func_10081();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_10082();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_10083();
    event_func_10084();
    event_func_10085();
    event_func_10086();
    event_func_10087();
    event_func_10088();
    event_func_10089();
    event_func_10090();
    event_func_10091();
    event_func_10092();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_10093();
    event_func_10094();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2939();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_10095();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_10096();
    event_func_10097();
    event_func_10098();
    event_func_10099();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_12133();
    event_func_11760();
    event_func_11761();
    event_func_11762();
    event_func_11763();
    event_func_11764();
    event_func_11765();
    event_func_11766();
    event_func_11767();
    event_func_11768();
    event_func_11769();
    event_func_2981();
    event_func_11980();
    event_func_11981();
    event_func_11982();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_11770();
    event_func_11771();
    event_func_11772();
    event_func_11773();
    event_func_11774();
    event_func_11775();
    event_func_11776();
    event_func_11777();
    event_func_11884();
    event_func_11885();
    event_func_11886();
    event_func_11887();
    event_func_11888();
    event_func_11889();
    event_func_11890();
    event_func_11891();
    event_func_12134();
    event_func_12135();
    event_func_12136();
    event_func_12137();
    event_func_12138();
    event_func_12139();
    event_func_12140();
    event_func_12141();
    event_func_12142();
    event_func_12018();
    event_func_12107();
    event_func_12108();
    event_func_12109();
    event_func_12110();
    event_func_12111();
    event_func_12112();
    event_func_12113();
    event_func_12114();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_11892();
    event_func_11893();
    event_func_11894();
    event_func_11895();
    event_func_11896();
    event_func_11897();
    event_func_11898();
    event_func_11899();
    event_func_11900();
    event_func_11901();
    event_func_11902();
    event_func_11903();
    event_func_11904();
    event_func_11905();
    event_func_11906();
    event_func_11907();
    event_func_11908();
    event_func_11909();
    event_func_11910();
    event_func_11911();
    event_func_11912();
    event_func_11913();
    event_func_11914();
    event_func_11915();
    event_func_11916();
    event_func_11917();
    event_func_11918();
    event_func_11919();
    event_func_11920();
    event_func_11921();
    event_func_11922();
    event_func_11923();
    event_func_11924();
    event_func_11925();
    event_func_11926();
    event_func_11927();
    event_func_11928();
    event_func_11929();
    event_func_11930();
    event_func_11931();
    event_func_11932();
    event_func_11933();
    event_func_11934();
    event_func_11935();
    event_func_11936();
    event_func_11937();
    event_func_11938();
    event_func_11939();
    event_func_11940();
    event_func_12044();
    event_func_12045();
    event_func_12046();
    event_func_12047();
    event_func_12048();
    event_func_12049();
    event_func_12050();
    event_func_12052();
    event_func_12053();
    event_func_12054();
    event_func_12055();
    event_func_12056();
    event_func_12057();
    event_func_12058();
    event_func_12059();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_10115();
    event_func_10116();
    event_func_4202();
    event_func_4204();
    event_func_4206();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_12143();
    event_func_12144();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_frame_transition_boss_defeated_1) goto group_main_engine_level_specific_methods_frame_transition_boss_defeated_1_end;
    event_func_12145();
    event_func_12146();
    event_func_12147();
    group_main_engine_level_specific_methods_frame_transition_boss_defeated_1_end: ;
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_11984();
    event_func_12148();
    event_func_12149();
    event_func_12150();
    event_func_12151();
    event_func_11989();
    event_func_12152();
    event_func_11991();
    event_func_12153();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_6082();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_1) goto group_main_engine_level_specific_methods_cutscenes_scene_pangu_1_end;
    event_func_12154();
    event_func_12155();
    event_func_12156();
    event_func_12157();
    event_func_12158();
    event_func_12159();
    event_func_12160();
    event_func_12161();
    event_func_12162();
    event_func_12163();
    event_func_12164();
    event_func_12165();
    event_func_12166();
    event_func_12167();
    event_func_12168();
    event_func_12169();
    event_func_12170();
    event_func_12171();
    if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_12172();
    event_func_12173();
    event_func_12174();
    event_func_12175();
    event_func_12176();
    event_func_12177();
    event_func_12178();
    event_func_12179();
    event_func_12180();
    event_func_12181();
    event_func_12182();
    event_func_12183();
    event_func_12184();
    event_func_12185();
    event_func_12186();
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_12187();
    if (!group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1_end;
    event_func_12188();
    event_func_12189();
    event_func_12190();
    event_func_12191();
    event_func_12192();
    event_func_12193();
    event_func_12194();
    event_func_12195();
    event_func_12196();
    event_func_12197();
    event_func_12198();
    event_func_12199();
    event_func_12200();
    event_func_12201();
    event_func_12202();
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1_end: ;
    event_func_12203();
    event_func_12204();
    event_func_12205();
    event_func_12206();
    event_func_12207();
    event_func_12208();
    event_func_12209();
    event_func_12210();
    event_func_12211();
    event_func_12212();
    event_func_12213();
    event_func_12214();
    event_func_12215();
    event_func_12216();
    event_func_12217();
    event_func_12218();
    event_func_12219();
    event_func_12220();
    event_func_12221();
    event_func_12222();
    event_func_12223();
    event_func_12224();
    event_func_12225();
    event_func_12226();
    event_func_12227();
    event_func_12228();
    event_func_12229();
    event_func_12230();
    event_func_12231();
    event_func_12232();
    event_func_12233();
    event_func_12234();
    event_func_12235();
    event_func_12236();
    event_func_12237();
    event_func_12238();
    event_func_12239();
    event_func_12240();
    event_func_12241();
    event_func_12242();
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_1_end: ;
    event_func_12243();
    event_func_12244();
    if (!group_main_engine_level_specific_methods_big_door_1) goto group_main_engine_level_specific_methods_big_door_1_end;
    event_func_12245();
    event_func_11994();
    event_func_12246();
    group_main_engine_level_specific_methods_big_door_1_end: ;
    if (!group_main_engine_level_specific_methods_boss_arena_1) goto group_main_engine_level_specific_methods_boss_arena_1_end;
    event_func_12247();
    event_func_12248();
    group_main_engine_level_specific_methods_boss_arena_1_end: ;
    event_func_12249();
    event_func_12250();
    event_func_12251();
    event_func_12252();
    event_func_12253();
    if (!group_main_engine_level_specific_methods_bosses_boss_holodragon_1) goto group_main_engine_level_specific_methods_bosses_boss_holodragon_1_end;
    event_func_12254();
    event_func_12255();
    event_func_12256();
    event_func_12257();
    event_func_12258();
    event_func_12259();
    event_func_12260();
    event_func_12261();
    event_func_12262();
    event_func_12263();
    event_func_12264();
    event_func_12265();
    event_func_12266();
    event_func_12267();
    event_func_12268();
    event_func_12269();
    event_func_12270();
    event_func_12271();
    event_func_12272();
    event_func_12273();
    event_func_12274();
    event_func_12275();
    event_func_12276();
    event_func_12277();
    event_func_12278();
    event_func_12279();
    event_func_12280();
    event_func_12281();
    event_func_12282();
    event_func_12283();
    event_func_12284();
    event_func_12285();
    event_func_12286();
    event_func_12287();
    event_func_12288();
    event_func_12289();
    event_func_12290();
    event_func_12291();
    event_func_12292();
    event_func_12293();
    event_func_12294();
    event_func_12295();
    event_func_12296();
    event_func_12297();
    event_func_12298();
    event_func_12299();
    event_func_12300();
    event_func_12301();
    event_func_12302();
    event_func_12303();
    event_func_12304();
    event_func_12305();
    event_func_12306();
    event_func_12307();
    event_func_12308();
    event_func_12309();
    event_func_12310();
    event_func_12311();
    event_func_12312();
    event_func_12313();
    event_func_12314();
    event_func_12315();
    event_func_12316();
    event_func_12317();
    event_func_12318();
    event_func_12319();
    if (!group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1_end;
    event_func_12320();
    event_func_12321();
    event_func_12322();
    event_func_12323();
    event_func_12324();
    event_func_12325();
    event_func_12326();
    event_func_12327();
    event_func_12328();
    event_func_12329();
    event_func_12330();
    event_func_12331();
    event_func_12332();
    event_func_12333();
    event_func_12334();
    event_func_12335();
    event_func_12336();
    event_func_12337();
    event_func_12338();
    event_func_12339();
    event_func_12340();
    event_func_12341();
    event_func_12342();
    event_func_12343();
    group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1) goto group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1_end;
    event_func_12344();
    event_func_12345();
    event_func_12346();
    event_func_12347();
    event_func_12348();
    event_func_12349();
    event_func_12350();
    event_func_12351();
    group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_holodragon_1_end: ;
    event_func_11837();
    event_func_11838();
    event_func_11839();
    event_func_12352();
    event_func_12353();
    event_func_12354();
    event_func_12355();
    event_func_12356();
    event_func_12357();
    event_func_12358();
    event_func_12359();
    event_func_12360();
    event_func_12361();
    event_func_12362();
    event_func_2519();
    event_func_3234();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_12363();
    event_func_12364();
    event_func_3243();
    event_func_3244();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_12365();
    event_func_12366();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_56_pre_events()
{
}
void Frames::event_func_12367()
{
    // event 2_55
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 10);
#endif
    }
    event_2_55_end: ;
}
void Frames::event_func_12368()
{
    // event 40_55
    {
        if (!(group_main_engine_1)) goto event_40_55_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 37);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_40_55_end: ;
}
void Frames::event_func_12369()
{
    // event 57_55
    {
        if (!(group_main_engine_1)) goto event_57_55_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 1);
    }
    event_57_55_end: ;
}
void Frames::event_func_12370()
{
    // event 1491_55
    {
        if (!(group_main_engine_1)) goto event_1491_55_end;
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->flags.enable(0);
        objectvanishingblock_3034_instances.clear_selection();
        spread_value(objectvanishingblock_3034_instances, 0, 0);
        ((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.set(0, (((Active*)get_instance(objectvanishingblock_3034_instances))->alterables->values.get(0)*6)%math_helper%210);
        ((Active*)get_instance(objectvanishingblock_3034_instances))->move_back();
    }
    event_1491_55_end: ;
}
void Frames::event_func_12371()
{
    // event 1743_55
    {
        if (!(group_main_engine_1)) goto event_1743_55_end;
        qualifier_32.clear_selection();
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x()-((Active*)get_instance(bossholodragonneck_3057_instances))->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y()-((Active*)get_instance(bossholodragonneck_3057_instances))->get_y());
        }
        spread_value(bossholodragonscale2_3052_instances, 0, 0);
        spread_value(bossholodragonscale3_3053_instances, 0, 0);
        spread_value(bossholodragonscale4_3054_instances, 0, 0);
        spread_value(bossholodragontoptooth_3049_instances, 0, 0);
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1-(((Active*)*it)->alterables->values.get(0)*0.05));
        }
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(3, ((Active*)get_instance(bossholodragonneck_3057_instances))->get_x());
        ((Active*)get_instance(bossholodragonneck_3057_instances))->alterables->values.set(4, ((Active*)get_instance(bossholodragonneck_3057_instances))->get_y());
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_instance(bossholodragonneck_3057_instances))->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()-((Active*)get_instance(bossholodragonneck_3057_instances))->get_y());
        }
        bossholodragonclaw_3068_instances.clear_selection();
        spread_value(bossholodragonclaw_3068_instances, 3, 0);
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        bossholodragonflame_3046_instances.clear_selection();
        spread_value(bossholodragonflame_3046_instances, 0, 0);
        bossholodragonlaser_3045_instances.clear_selection();
        for (ObjectIterator it(bossholodragonlaser_3045_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(50);
        }
        for (ObjectIterator it(bossholodragonclaw_3068_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(height);
        }
        bossholodragoneye2_3072_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye2_3072_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        for (QualifierIterator it(qualifier_32); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
        }
    }
    event_1743_55_end: ;
}
void Frames::event_func_12372()
{
    // event 1744_55
    {
        if (!(group_main_engine_1)) goto event_1744_55_end;
        npcpanguleftarm_3075_instances.clear_selection();
        spread_value(npcpanguleftarm_3075_instances, 0, 0);
        npcpangurightarm_3076_instances.clear_selection();
        spread_value(npcpangurightarm_3076_instances, 0, 0);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, ((Active*)get_instance(npcpangu_3073_instances))->get_y());
    }
    event_1744_55_end: ;
}
void Frames::on_frame_56_start_events()
{
    event_func_11842();
    event_func_12367();
    event_func_11997();
    event_func_11998();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_12368();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_12369();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_10705();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_11845();
    event_func_12000();
    event_func_3275();
    event_func_11846();
    event_func_12370();
    event_func_5381();
    event_func_12123();
    event_func_11947();
    event_func_12084();
    event_func_2686();
    event_func_2687();
    event_func_12371();
    event_func_12372();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_11948();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_56_init()
{
    index = 55;
    width = 11520;
    height = 2144;
    virtual_width = 11520;
    virtual_height = 2144;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &gimmickbowarrowplatform_2970_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &hazardspikesdown_559_instances, &gimmickbowarrowplatform_2970_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemystinger_2891_instances, &enemyterreonleftleg_2983_instances, &enemyterreonrightleg_2984_instances, &enemyterreon_2985_instances, &enemywallstinger_3006_instances, &enemyobelisk_3035_instances, &hazardgiantsword_3043_instances, &bossholodragonclaw_3068_instances, &bossholodragonhitspot1_3069_instances, &bossholodragonhitspot2_3070_instances, &bossholodragonhitspot3_3071_instances, &bossholodragoneye2_3072_instances, NULL};
    qualifier_20.set(12, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, NULL};
    qualifier_0.set(1, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &hazardspikesdown_559_instances, &breakableplrock_2987_instances, &objectvanishingblock_3034_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &objecttimegatepiece_2966_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_32_instances[] = {&bossholodragonbreath_3048_instances, &bossholodragontoptooth_3049_instances, &bossholodragonbottomtooth_3050_instances, &bossholodragonscale_3051_instances, &bossholodragonscale2_3052_instances, &bossholodragonscale3_3053_instances, &bossholodragonscale4_3054_instances, &bossholodragoneye_3055_instances, &bossholodragonpupil_3056_instances, &bossholodragonear_3058_instances, &bossholodragonbrow_3059_instances, NULL};
    qualifier_32.set(11, &qualifier_32_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingidleswitch_1257_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3044(0, 0), 0);
    add_background_object(create_plcaveback1_3014(432, 1224), 1);
    add_background_object(create_plcaveback1_3014(792, 1224), 1);
    add_background_object(create_plcaveback1_3014(496, 1064), 1);
    add_background_object(create_plcaveback1_3014(856, 1064), 1);
    add_background_object(create_plcaveback2_3013(792, 1384), 1);
    add_background_object(create_plcaveback1_3014(1216, 1384), 1);
    add_background_object(create_plcaveback2_3013(1216, 1224), 1);
    add_background_object(create_plcaveback1_3014(1216, 1064), 1);
    add_background_object(create_plcaveback1_3014(1592, 1384), 1);
    add_background_object(create_plcaveback2_3013(1592, 1224), 1);
    add_background_object(create_plcaveback1_3014(1592, 1064), 1);
    add_background_object(create_plcaveback1_3014(560, 904), 1);
    add_background_object(create_plcaveback1_3014(920, 904), 1);
    add_background_object(create_plcaveback1_3014(1280, 904), 1);
    add_background_object(create_plcaveback1_3014(1656, 904), 1);
    add_background_object(create_plcaveback1_3014(368, 1384), 1);
    add_background_object(create_plcaveback1_3014(1952, 1224), 1);
    add_background_object(create_plcaveback1_3014(2312, 1224), 1);
    add_background_object(create_plcaveback1_3014(2016, 1064), 1);
    add_background_object(create_plcaveback1_3014(2376, 1064), 1);
    add_background_object(create_plcaveback2_3013(2312, 1384), 1);
    add_background_object(create_plcaveback1_3014(2736, 1384), 1);
    add_background_object(create_plcaveback2_3013(2736, 1224), 1);
    add_background_object(create_plcaveback1_3014(2736, 1064), 1);
    add_background_object(create_plcaveback1_3014(3112, 1384), 1);
    add_background_object(create_plcaveback2_3013(3112, 1224), 1);
    add_background_object(create_plcaveback1_3014(3112, 1064), 1);
    add_background_object(create_plcaveback1_3014(2080, 904), 1);
    add_background_object(create_plcaveback1_3014(2440, 904), 1);
    add_background_object(create_plcaveback1_3014(2800, 904), 1);
    add_background_object(create_plcaveback1_3014(3176, 904), 1);
    add_background_object(create_plcaveback1_3014(1888, 1384), 1);
    add_background_object(create_plcaveback2_3013(-96, 264), 1);
    add_background_object(create_plcaveback2_3013(-32, 424), 1);
    add_background_object(create_plcaveback2_3013(32, 584), 1);
    add_background_object(create_plcaveback1_3014(32, 744), 1);
    add_background_object(create_plcaveback2_3013(32, 904), 1);
    add_background_object(create_plcaveback2_3013(96, 1064), 1);
    add_background_object(create_plcaveback1_3014(96, 1224), 1);
    add_background_object(create_plcaveback1_3014(32, 1384), 1);
    add_background_object(create_plindoorruins1_3012(816, 1432), 2);
    add_background_object(create_plindoorruins1_3012(1488, 1528), 2);
    add_background_object(create_plindoorruins1_3012(1488, 1400), 2);
    add_background_object(create_plindoorruins1_3012(1744, 1464), 2);
    add_background_object(create_plindoorruins1_3012(1744, 1592), 2);
    add_background_object(create_plindoorruins1_3012(2000, 1528), 2);
    add_background_object(create_plindoorruins1_3012(2000, 1400), 2);
    add_background_object(create_plruinsentrace_2989(4408, 1400), 2);
    add_background_object(create_plindoorruins1_3012(2640, 1208), 2);
    add_background_object(create_plindoorruins1_3012(2640, 1080), 2);
    add_background_object(create_plindoorruins1_3012(4288, 1432), 2);
    add_background_object(create_plindoorruins1_3012(4576, 1432), 2);
    add_background_object(create_plindoorruins1_3012(4288, 1304), 2);
    add_background_object(create_plindoorruins1_3012(4576, 1304), 2);
    add_background_object(create_plindoorruins1_3012(4288, 1176), 2);
    add_background_object(create_plindoorruins1_3012(4576, 1176), 2);
    add_background_object(create_plindoorruins1_3012(4288, 1048), 2);
    add_background_object(create_plindoorruins1_3012(4576, 1048), 2);
    add_background_object(create_plsignup_2916(4312, 1480), 2);
    add_background_object(create_plsignup_2916(4600, 1480), 2);
    add_background_object(create_plindoorruins1_3012(3152, 1432), 2);
    add_background_object(create_plindoorruins1_3012(648, 1432), 2);
    add_background_object(create_plindoorruins1_3012(648, 1304), 2);
    add_background_object(create_plindoorruins1_3012(648, 1176), 2);
    add_background_object(create_pldoorback_2991(4432, 1464), 2);
    add_background_object(create_plindoorruins1_3012(2928, 1448), 2);
    add_background_object(create_plindoorruins1_3012(2928, 1320), 2);
    add_background_object(create_plindoorruins1_3012(816, 1304), 2);
    add_background_object(create_plindoorruins1_3012(2512, 1336), 2);
    add_background_object(create_plindoorruins1_3012(2512, 1208), 2);
    add_background_object(create_plindoorruins1_3012(2512, 1464), 2);
    add_background_object(create_plindoorruins1_3012(2512, 1080), 2);
    add_background_object(create_plsignup_2916(2536, 1416), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(11520, -35), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 551), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_hazardgiantswordmask_3041(112, 872), 2);
    add_object(create_gimmickbowstring_2974(2534, -338), 2);
    add_object(create_gimmickbowstring_2974(2534, -322), 2);
    add_object(create_gimmickbowstring_2974(2534, -306), 2);
    add_object(create_gimmickbowstring_2974(2534, -290), 2);
    add_object(create_gimmickbowstring_2974(2534, -274), 2);
    add_object(create_gimmickbowstring_2974(2534, -258), 2);
    add_object(create_gimmickbowstring_2974(2534, -242), 2);
    add_object(create_gimmickbowstring_2974(2534, -226), 2);
    add_object(create_gimmickbowstring_2974(2534, -210), 2);
    add_object(create_gimmickbowstring_2974(2534, -194), 2);
    add_object(create_gimmickhangingplswitch_2990(4480, 208), 2);
    add_object(create_hazardgiantswordmask_3041(400, 552), 2);
    add_object(create_bossholodragonbreath_3048(6056, 1880), 2);
    add_object(create_bossholodragontoptooth_3049(6117, 1822), 2);
    add_object(create_bossholodragontoptooth_3049(6085, 1838), 2);
    add_object(create_bossholodragontoptooth_3049(6053, 1854), 2);
    add_object(create_bossholodragontoptooth_3049(6021, 1870), 2);
    add_object(create_bossholodragontoptooth_3049(5989, 1886), 2);
    add_object(create_bossholodragontoptooth_3049(5957, 1902), 2);
    add_object(create_bossholodragontoptooth_3049(5925, 1918), 2);
    add_object(create_bossholodragontoptooth_3049(5893, 1934), 2);
    add_object(create_bossholodragonbottomtooth_3050(6155, 1885), 2);
    add_object(create_bossholodragonbottomtooth_3050(6123, 1901), 2);
    add_object(create_bossholodragonbottomtooth_3050(6091, 1917), 2);
    add_object(create_bossholodragonbottomtooth_3050(6059, 1933), 2);
    add_object(create_bossholodragonbottomtooth_3050(6027, 1949), 2);
    add_object(create_bossholodragonbottomtooth_3050(5995, 1965), 2);
    add_object(create_bossholodragonbottomtooth_3050(5963, 1981), 2);
    add_object(create_bossholodragonscale_3051(5939, 1907), 2);
    add_object(create_bossholodragonscale_3051(6003, 1875), 2);
    add_object(create_bossholodragonscale_3051(6067, 1843), 2);
    add_object(create_bossholodragonscale2_3052(6320, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6400, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6480, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6560, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6640, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6720, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6800, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6880, 1643), 2);
    add_object(create_bossholodragonscale2_3052(6960, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7040, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7120, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7200, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7280, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7360, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7440, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7520, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7600, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7680, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7760, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7840, 1643), 2);
    add_object(create_bossholodragonscale2_3052(7928, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8016, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8120, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8224, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8328, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8432, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8536, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8640, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8744, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8848, 1643), 2);
    add_object(create_bossholodragonscale2_3052(8952, 1643), 2);
    add_object(create_bossholodragonscale2_3052(9056, 1643), 2);
    add_object(create_bossholodragonscale3_3053(6360, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6440, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6520, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6600, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6680, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6760, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6840, 1667), 2);
    add_object(create_bossholodragonscale3_3053(6920, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7000, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7080, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7160, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7240, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7320, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7400, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7480, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7560, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7640, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7720, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7800, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7880, 1667), 2);
    add_object(create_bossholodragonscale3_3053(7968, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8064, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8168, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8272, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8376, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8480, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8584, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8688, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8792, 1667), 2);
    add_object(create_bossholodragonscale3_3053(8896, 1667), 2);
    add_object(create_bossholodragonscale3_3053(9000, 1667), 2);
    add_object(create_bossholodragonscale4_3054(6400, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6480, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6560, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6640, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6720, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6800, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6880, 1707), 2);
    add_object(create_bossholodragonscale4_3054(6960, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7040, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7120, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7200, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7280, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7360, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7440, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7520, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7600, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7680, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7760, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7840, 1707), 2);
    add_object(create_bossholodragonscale4_3054(7920, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8008, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8112, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8216, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8320, 1707), 2);
    add_object(create_bossholodragoneye_3055(6096, 1672), 2);
    add_object(create_bossholodragonscale4_3054(8424, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8528, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8632, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8736, 1707), 2);
    add_object(create_bossholodragonpupil_3056(6096, 1672), 2);
    add_object(create_bossholodragonscale4_3054(8840, 1707), 2);
    add_object(create_bossholodragonscale4_3054(8944, 1707), 2);
    add_object(create_bossholodragonneck_3057(6216, 1736), 2);
    add_object(create_bossholodragonear_3058(6304, 1568), 2);
    add_object(create_bossholodragonbrow_3059(6096, 1672), 2);
    add_object(create_npchologram1_3060(5947, 2278), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plindoorruins1_3012(10880, 1784), 3);
    add_background_object(create_plindoorruins1_3012(11072, 1784), 3);
    add_background_object(create_plindoorruins1_3012(10880, 1912), 3);
    add_background_object(create_plindoorruins1_3012(11072, 1912), 3);
    add_background_object(create_plindoorruins1_3012(10880, 2040), 3);
    add_background_object(create_plindoorruins1_3012(11072, 2040), 3);
    add_background_object(create_plindoorruins1_3012(11264, 1784), 3);
    add_background_object(create_plindoorruins1_3012(11264, 1912), 3);
    add_background_object(create_plindoorruins1_3012(11264, 2040), 3);
    add_background_object(create_plindoorruins1_3012(9344, 1784), 3);
    add_background_object(create_plindoorruins1_3012(9536, 1784), 3);
    add_background_object(create_plindoorruins1_3012(9344, 1912), 3);
    add_background_object(create_plindoorruins1_3012(9536, 1912), 3);
    add_background_object(create_plindoorruins1_3012(9344, 2040), 3);
    add_background_object(create_plindoorruins1_3012(9536, 2040), 3);
    add_background_object(create_plindoorruins1_3012(9728, 1784), 3);
    add_background_object(create_plindoorruins1_3012(9920, 1784), 3);
    add_background_object(create_plindoorruins1_3012(9728, 1912), 3);
    add_background_object(create_plindoorruins1_3012(9920, 1912), 3);
    add_background_object(create_plindoorruins1_3012(9728, 2040), 3);
    add_background_object(create_plindoorruins1_3012(9920, 2040), 3);
    add_background_object(create_plindoorruins1_3012(10112, 1784), 3);
    add_background_object(create_plindoorruins1_3012(10304, 1784), 3);
    add_background_object(create_plindoorruins1_3012(10112, 1912), 3);
    add_background_object(create_plindoorruins1_3012(10304, 1912), 3);
    add_background_object(create_plindoorruins1_3012(10112, 2040), 3);
    add_background_object(create_plindoorruins1_3012(10304, 2040), 3);
    add_background_object(create_plindoorruins1_3012(10496, 1784), 3);
    add_background_object(create_plindoorruins1_3012(10688, 1784), 3);
    add_background_object(create_plindoorruins1_3012(10496, 1912), 3);
    add_background_object(create_plindoorruins1_3012(10688, 1912), 3);
    add_background_object(create_plindoorruins1_3012(10496, 2040), 3);
    add_background_object(create_plindoorruins1_3012(10688, 2040), 3);
    add_background_object(create_plindoorruins1_3012(7232, 1784), 3);
    add_background_object(create_plindoorruins1_3012(7232, 1912), 3);
    add_background_object(create_plindoorruins1_3012(7232, 2040), 3);
    add_background_object(create_plindoorruins1_3012(7424, 1784), 3);
    add_background_object(create_plindoorruins1_3012(7616, 1784), 3);
    add_background_object(create_plindoorruins1_3012(7424, 1912), 3);
    add_background_object(create_plindoorruins1_3012(7616, 1912), 3);
    add_background_object(create_plindoorruins1_3012(7424, 2040), 3);
    add_background_object(create_plindoorruins1_3012(7616, 2040), 3);
    add_background_object(create_plindoorruins1_3012(7808, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8000, 1784), 3);
    add_background_object(create_plindoorruins1_3012(7808, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8000, 1912), 3);
    add_background_object(create_plindoorruins1_3012(7808, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8000, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8192, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8384, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8192, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8384, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8192, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8384, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8576, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8768, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8576, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8768, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8576, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8768, 2040), 3);
    add_background_object(create_plindoorruins1_3012(8960, 1784), 3);
    add_background_object(create_plindoorruins1_3012(9152, 1784), 3);
    add_background_object(create_plindoorruins1_3012(8960, 1912), 3);
    add_background_object(create_plindoorruins1_3012(9152, 1912), 3);
    add_background_object(create_plindoorruins1_3012(8960, 2040), 3);
    add_background_object(create_plindoorruins1_3012(9152, 2040), 3);
    add_background_object(create_plindoorruins1_3012(6272, 1784), 3);
    add_background_object(create_plindoorruins1_3012(6464, 1784), 3);
    add_background_object(create_plindoorruins1_3012(6272, 1912), 3);
    add_background_object(create_plindoorruins1_3012(6464, 1912), 3);
    add_background_object(create_plindoorruins1_3012(6272, 2040), 3);
    add_background_object(create_plindoorruins1_3012(6464, 2040), 3);
    add_background_object(create_plindoorruins1_3012(6656, 1784), 3);
    add_background_object(create_plindoorruins1_3012(6848, 1784), 3);
    add_background_object(create_plindoorruins1_3012(6656, 1912), 3);
    add_background_object(create_plindoorruins1_3012(6848, 1912), 3);
    add_background_object(create_plindoorruins1_3012(6656, 2040), 3);
    add_background_object(create_plindoorruins1_3012(6848, 2040), 3);
    add_background_object(create_plindoorruins1_3012(7040, 1784), 3);
    add_background_object(create_plindoorruins1_3012(7040, 1912), 3);
    add_background_object(create_plindoorruins1_3012(7040, 2040), 3);
    add_background_object(create_plindoorruins1_3012(5120, 1784), 3);
    add_background_object(create_plindoorruins1_3012(5312, 1784), 3);
    add_background_object(create_plindoorruins1_3012(5120, 1912), 3);
    add_background_object(create_plindoorruins1_3012(5312, 1912), 3);
    add_background_object(create_plindoorruins1_3012(5120, 2040), 3);
    add_background_object(create_plindoorruins1_3012(5312, 2040), 3);
    add_background_object(create_plindoorruins1_3012(5504, 1784), 3);
    add_background_object(create_plindoorruins1_3012(5696, 1784), 3);
    add_background_object(create_plindoorruins1_3012(5504, 1912), 3);
    add_background_object(create_plindoorruins1_3012(5696, 1912), 3);
    add_background_object(create_plindoorruins1_3012(5504, 2040), 3);
    add_background_object(create_plindoorruins1_3012(5696, 2040), 3);
    add_background_object(create_plindoorruins1_3012(5888, 1784), 3);
    add_background_object(create_plindoorruins1_3012(6080, 1784), 3);
    add_background_object(create_plindoorruins1_3012(5888, 1912), 3);
    add_background_object(create_plindoorruins1_3012(6080, 1912), 3);
    add_background_object(create_plindoorruins1_3012(5888, 2040), 3);
    add_background_object(create_plindoorruins1_3012(6080, 2040), 3);
    add_background_object(create_plcavebrick1_3020(4288, 920), 3);
    add_background_object(create_plcavebrick1_3020(4544, 920), 3);
    add_background_object(create_plcavebrick1_3020(4160, 920), 3);
    add_background_object(create_plcavebrick1_3020(4672, 920), 3);
    add_background_object(create_plcavebrick1_3020(4672, 152), 3);
    add_background_object(create_plcavebrick1_3020(4160, 152), 3);
    add_background_object(create_plcavebrick5_3017(416, 1368), 3);
    add_background_object(create_plcavebrick1_3020(2880, 1144), 3);
    add_background_object(create_plcavebrick5_3017(32, 824), 3);
    add_background_object(create_plcavebrick5_3017(32, 760), 3);
    add_background_object(create_plcavebrick5_3017(64, 792), 3);
    add_background_object(create_plcavebrick5_3017(64, 728), 3);
    add_background_object(create_plcavebrick5_3017(96, 760), 3);
    add_background_object(create_plfadebrick4_3061(0, 1496), 3);
    add_background_object(create_plcavebrick5_3017(416, 1304), 3);
    add_background_object(create_plcavebrick3_3018(64, 1112), 3);
    add_background_object(create_plbow_2975(2528, -360), 3);
    add_background_object(create_plcavebrick10_3029(-408, 1232), 3);
    add_background_object(create_lightray1_659(-464, 1056), 3);
    add_background_object(create_lightray2_666(-464, 1056), 3);
    add_background_object(create_plcaveback1_3014(-584, 992), 3);
    add_background_object(create_plcaveback2_3013(-568, 984), 3);
    add_background_object(create_plcavebrick1_3020(-488, 1016), 3);
    add_background_object(create_plcavebrick10_3029(-496, 1024), 3);
    add_background_object(create_plcavebrick11_3025(-472, 1048), 3);
    add_background_object(create_plcavebrick12_3026(-464, 1040), 3);
    add_background_object(create_plcavebrick2_3019(-464, 1024), 3);
    add_background_object(create_plcavebrick3_3018(-440, 1024), 3);
    add_background_object(create_plcavebrick4_3023(-456, 1024), 3);
    add_background_object(create_plcavebrick5_3017(-440, 1064), 3);
    add_background_object(create_plcavebrick6_3022(-488, 1072), 3);
    add_background_object(create_plcavebrick7_3021(-496, 1008), 3);
    add_background_object(create_plcavebrick8_3024(-496, 1056), 3);
    add_background_object(create_plcavebrick9_3028(-456, 1048), 3);
    add_background_object(create_plindoorruins1_3012(-472, 1016), 3);
    add_background_object(create_plindoorruins2_3015(-496, 1016), 3);
    add_background_object(create_plindoorruins3_3016(-464, 1000), 3);
    add_background_object(create_plmask_2973(-448, 1048), 3);
    add_background_object(create_plruins8_2911(-480, 1056), 3);
    add_background_object(create_plrunestone_2992(-464, 1048), 3);
    add_background_object(create_plsignup_2916(-424, 1064), 3);
    add_background_object(create_plvine1_2938(-392, 1096), 3);
    add_background_object(create_plvine2_2941(-496, 1080), 3);
    add_background_object(create_signwarning_1028(-520, 1176), 3);
    add_background_object(create_plfadebrick1_3062(448, 1560), 3);
    add_background_object(create_plcavebrick4_3023(2680, -296), 3);
    add_background_object(create_plcavebrick6_3022(2712, -296), 3);
    add_background_object(create_plspinballchain_3027(2696, -296), 3);
    add_background_object(create_plcavebrick3_3018(448, 1304), 3);
    add_background_object(create_plfadebrick1_3062(576, 1560), 3);
    add_background_object(create_plfadebrick1_3062(832, 1560), 3);
    add_background_object(create_plfadebrick2_3063(832, 1240), 3);
    add_background_object(create_plcavebrick5_3017(896, 1304), 3);
    add_background_object(create_plfadebrick1_3062(960, 1560), 3);
    add_background_object(create_plfadebrick2_3063(960, 1240), 3);
    add_background_object(create_plcavebrick5_3017(960, 1304), 3);
    add_background_object(create_plcavebrick5_3017(1024, 1304), 3);
    add_background_object(create_plfadebrick2_3063(1088, 1240), 3);
    add_background_object(create_plcavebrick5_3017(1088, 1304), 3);
    add_background_object(create_plcavebrick5_3017(1152, 1304), 3);
    add_background_object(create_plfadebrick2_3063(1216, 1240), 3);
    add_background_object(create_plcavebrick5_3017(1216, 1304), 3);
    add_background_object(create_plcavebrick5_3017(1280, 1304), 3);
    add_background_object(create_plfadebrick1_3062(1088, 1560), 3);
    add_background_object(create_plfadebrick2_3063(1344, 1240), 3);
    add_background_object(create_plcavebrick5_3017(1344, 1304), 3);
    add_background_object(create_plcavebrick5_3017(1408, 1304), 3);
    add_background_object(create_plfadebrick2_3063(1472, 1240), 3);
    add_background_object(create_plfadebrick1_3062(1344, 1688), 3);
    add_background_object(create_plfadebrick1_3062(1472, 1688), 3);
    add_background_object(create_plcavebrick5_3017(1504, 1656), 3);
    add_background_object(create_plcavebrick4_3023(1472, 1656), 3);
    add_background_object(create_plcavebrick6_3022(1568, 1656), 3);
    add_background_object(create_plfadebrick1_3062(1216, 1688), 3);
    add_background_object(create_plcavebrick1_3020(1216, 1560), 3);
    add_background_object(create_plcavebrick2_3019(1216, 1560), 3);
    add_background_object(create_plcavebrick3_3018(1312, 1560), 3);
    add_background_object(create_plcavebrick1_3020(1472, 1336), 3);
    add_background_object(create_plcavebrick2_3019(1472, 1336), 3);
    add_background_object(create_plcavebrick3_3018(1568, 1336), 3);
    add_background_object(create_plcavebrick5_3017(1472, 1304), 3);
    add_background_object(create_plcavebrick5_3017(1536, 1304), 3);
    add_background_object(create_plfadebrick2_3063(1600, 1400), 3);
    add_background_object(create_plfadebrick1_3062(1600, 1688), 3);
    add_background_object(create_plfadebrick1_3062(1728, 1688), 3);
    add_background_object(create_plcavebrick5_3017(1760, 1656), 3);
    add_background_object(create_plcavebrick4_3023(1728, 1656), 3);
    add_background_object(create_plcavebrick6_3022(1824, 1656), 3);
    add_background_object(create_plfadebrick2_3063(1728, 1400), 3);
    add_background_object(create_plfadebrick2_3063(1856, 1400), 3);
    add_background_object(create_plfadebrick1_3062(1856, 1688), 3);
    add_background_object(create_plfadebrick2_3063(1984, 1240), 3);
    add_background_object(create_plfadebrick1_3062(1984, 1688), 3);
    add_background_object(create_plcavebrick5_3017(2016, 1656), 3);
    add_background_object(create_plcavebrick4_3023(1984, 1656), 3);
    add_background_object(create_plcavebrick6_3022(2080, 1656), 3);
    add_background_object(create_plcavebrick1_3020(1984, 1336), 3);
    add_background_object(create_plcavebrick2_3019(1984, 1336), 3);
    add_background_object(create_plcavebrick3_3018(2080, 1336), 3);
    add_background_object(create_plcavebrick5_3017(1984, 1304), 3);
    add_background_object(create_plcavebrick5_3017(2048, 1304), 3);
    add_background_object(create_plfadebrick2_3063(2112, 1240), 3);
    add_background_object(create_plcavebrick5_3017(2112, 1304), 3);
    add_background_object(create_plcavebrick5_3017(2176, 1304), 3);
    add_background_object(create_plfadebrick1_3062(2112, 1688), 3);
    add_background_object(create_plfadebrick2_3063(2240, 1240), 3);
    add_background_object(create_plcavebrick5_3017(2240, 1304), 3);
    add_background_object(create_plcavebrick5_3017(2304, 1304), 3);
    add_background_object(create_plfadebrick1_3062(2240, 1688), 3);
    add_background_object(create_plcavebrick1_3020(2240, 1560), 3);
    add_background_object(create_plcavebrick2_3019(2240, 1560), 3);
    add_background_object(create_plcavebrick3_3018(2336, 1560), 3);
    add_background_object(create_plfadebrick1_3062(2368, 1560), 3);
    add_background_object(create_plfadebrick1_3062(2496, 1560), 3);
    add_background_object(create_plfadebrick1_3062(1088, 1688), 3);
    add_background_object(create_plfadebrick1_3062(960, 1688), 3);
    add_background_object(create_plfadebrick2_3063(960, 1624), 3);
    add_background_object(create_plfadebrick2_3063(1088, 1624), 3);
    add_background_object(create_plfadebrick1_3062(832, 1688), 3);
    add_background_object(create_plfadebrick1_3062(576, 1688), 3);
    add_background_object(create_plfadebrick4_3061(0, 728), 3);
    add_background_object(create_plfadebrick2_3063(576, 1624), 3);
    add_background_object(create_plfadebrick2_3063(832, 1624), 3);
    add_background_object(create_plfadebrick1_3062(448, 1688), 3);
    add_background_object(create_plfadebrick2_3063(448, 1624), 3);
    add_background_object(create_plfadebrick1_3062(2624, 1560), 3);
    add_background_object(create_plcavebrick1_3020(2624, 1304), 3);
    add_background_object(create_plcavebrick2_3019(2624, 1304), 3);
    add_background_object(create_plcavebrick3_3018(2720, 1304), 3);
    add_background_object(create_plfadebrick1_3062(2752, 1560), 3);
    add_background_object(create_plcavebrick1_3020(2624, 1432), 3);
    add_background_object(create_plcavebrick2_3019(2624, 1432), 3);
    add_background_object(create_plcavebrick3_3018(2720, 1432), 3);
    add_background_object(create_plcavebrick1_3020(2368, 1208), 3);
    add_background_object(create_plcavebrick2_3019(2368, 1208), 3);
    add_background_object(create_plcavebrick3_3018(2464, 1208), 3);
    add_background_object(create_plcavebrick1_3020(2368, 1144), 3);
    add_background_object(create_plcavebrick2_3019(2368, 1144), 3);
    add_background_object(create_plcavebrick3_3018(2464, 1144), 3);
    add_background_object(create_plfadebrick2_3063(2368, 1048), 3);
    add_background_object(create_plcavebrick5_3017(2368, 1112), 3);
    add_background_object(create_plcavebrick5_3017(2432, 1112), 3);
    add_background_object(create_plfadebrick2_3063(2496, 1048), 3);
    add_background_object(create_plcavebrick5_3017(2496, 1112), 3);
    add_background_object(create_plcavebrick5_3017(2560, 1112), 3);
    add_background_object(create_plfadebrick2_3063(2624, 1048), 3);
    add_background_object(create_plcavebrick5_3017(2624, 1112), 3);
    add_background_object(create_plcavebrick5_3017(2688, 1112), 3);
    add_background_object(create_plfadebrick2_3063(2752, 1048), 3);
    add_background_object(create_plcavebrick5_3017(2752, 1112), 3);
    add_background_object(create_plcavebrick5_3017(2816, 1112), 3);
    add_background_object(create_plfadebrick2_3063(0, 344), 3);
    add_background_object(create_plfadebrick2_3063(128, 344), 3);
    add_background_object(create_plfadebrick2_3063(256, 344), 3);
    add_background_object(create_plfadebrick2_3063(384, 344), 3);
    add_background_object(create_plcavebrick11_3025(0, 472), 3);
    add_background_object(create_plcavebrick5_3017(-64, 472), 3);
    add_background_object(create_plcavebrick11_3025(64, 536), 3);
    add_background_object(create_plcavebrick11_3025(128, 600), 3);
    add_background_object(create_plcavebrick11_3025(192, 664), 3);
    add_background_object(create_plcavebrick1_3020(0, 600), 3);
    add_background_object(create_plcavebrick5_3017(0, 536), 3);
    add_background_object(create_plcavebrick5_3017(0, 568), 3);
    add_background_object(create_plcavebrick5_3017(128, 664), 3);
    add_background_object(create_plcavebrick5_3017(128, 696), 3);
    add_background_object(create_plcavebrick2_3019(416, 536), 3);
    add_background_object(create_plcavebrick2_3019(416, 664), 3);
    add_background_object(create_plcavebrick12_3026(384, 728), 3);
    add_background_object(create_plcavebrick12_3026(320, 792), 3);
    add_background_object(create_plcavebrick12_3026(256, 856), 3);
    add_background_object(create_plcavebrick1_3020(320, 856), 3);
    add_background_object(create_plcavebrick12_3026(192, 920), 3);
    add_background_object(create_plcavebrick1_3020(320, 1016), 3);
    add_background_object(create_plcavebrick5_3017(384, 792), 3);
    add_background_object(create_plcavebrick5_3017(384, 824), 3);
    add_background_object(create_plcavebrick5_3017(256, 920), 3);
    add_background_object(create_plcavebrick5_3017(256, 952), 3);
    add_background_object(create_plcavebrick3_3018(64, 856), 3);
    add_background_object(create_plcavebrick3_3018(64, 984), 3);
    add_background_object(create_plcavebrick11_3025(320, 1432), 3);
    add_background_object(create_plcavebrick11_3025(384, 1496), 3);
    add_background_object(create_plcavebrick5_3017(320, 1496), 3);
    add_background_object(create_plcavebrick5_3017(320, 1528), 3);
    add_background_object(create_plcavebrick11_3025(192, 1304), 3);
    add_background_object(create_plcavebrick11_3025(256, 1368), 3);
    add_background_object(create_plcavebrick5_3017(192, 1368), 3);
    add_background_object(create_plcavebrick5_3017(192, 1400), 3);
    add_background_object(create_plcavebrick11_3025(64, 1176), 3);
    add_background_object(create_plcavebrick11_3025(128, 1240), 3);
    add_background_object(create_plcavebrick5_3017(64, 1240), 3);
    add_background_object(create_plcavebrick5_3017(64, 1272), 3);
    add_background_object(create_plcavebrick1_3020(64, 1304), 3);
    add_background_object(create_plcavebrick1_3020(192, 1432), 3);
    add_background_object(create_plfadebrick1_3062(320, 1560), 3);
    add_background_object(create_plfadebrick1_3062(320, 1688), 3);
    add_background_object(create_plfadebrick2_3063(320, 1624), 3);
    add_background_object(create_plfadebrick1_3062(192, 1560), 3);
    add_background_object(create_plfadebrick1_3062(192, 1688), 3);
    add_background_object(create_plfadebrick2_3063(192, 1624), 3);
    add_background_object(create_plfadebrick1_3062(64, 1560), 3);
    add_background_object(create_plfadebrick1_3062(64, 1688), 3);
    add_background_object(create_plfadebrick2_3063(64, 1624), 3);
    add_background_object(create_plfadebrick1_3062(-64, 1560), 3);
    add_background_object(create_plfadebrick1_3062(-64, 1688), 3);
    add_background_object(create_plfadebrick2_3063(-64, 1624), 3);
    add_background_object(create_plcavebrick1_3020(64, 1432), 3);
    add_background_object(create_plcavebrick1_3020(320, 1176), 3);
    add_background_object(create_plcavebrick5_3017(384, 1336), 3);
    add_background_object(create_plcavebrick5_3017(352, 1304), 3);
    add_background_object(create_plcavebrick5_3017(320, 1144), 3);
    add_background_object(create_plcavebrick5_3017(384, 1144), 3);
    add_background_object(create_plcavebrick5_3017(384, 984), 3);
    add_background_object(create_plcavebrick2_3019(288, 1112), 3);
    add_background_object(create_plcavebrick4_3023(288, 1240), 3);
    add_background_object(create_plcavebrick4_3023(288, 1272), 3);
    add_background_object(create_plcavebrick4_3023(320, 1304), 3);
    add_background_object(create_plcavebrick4_3023(352, 1336), 3);
    add_background_object(create_plcavebrick4_3023(384, 1368), 3);
    add_background_object(create_plcavebrick4_3023(416, 1400), 3);
    add_background_object(create_plfadebrick4_3061(0, 856), 3);
    add_background_object(create_plfadebrick4_3061(0, 984), 3);
    add_background_object(create_plfadebrick4_3061(0, 1112), 3);
    add_background_object(create_plfadebrick4_3061(0, 1240), 3);
    add_background_object(create_plfadebrick4_3061(0, 1368), 3);
    add_background_object(create_plfadebrick3_3064(448, 1048), 3);
    add_background_object(create_plfadebrick3_3064(448, 920), 3);
    add_background_object(create_plfadebrick3_3064(448, 792), 3);
    add_background_object(create_plfadebrick3_3064(448, 664), 3);
    add_background_object(create_plfadebrick3_3064(448, 536), 3);
    add_background_object(create_plfadebrick3_3064(448, 408), 3);
    add_background_object(create_plfadebrick5_3065(512, 472), 3);
    add_background_object(create_plfadebrick5_3065(512, 344), 3);
    add_background_object(create_plfadebrick5_3065(512, 728), 3);
    add_background_object(create_plfadebrick5_3065(512, 600), 3);
    add_background_object(create_plfadebrick5_3065(512, 984), 3);
    add_background_object(create_plfadebrick5_3065(512, 856), 3);
    add_background_object(create_plfadebrick5_3065(896, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1024, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1152, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1280, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1408, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1536, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1600, 1272), 3);
    add_background_object(create_plfadebrick5_3065(1600, 1144), 3);
    add_background_object(create_plfadebrick5_3065(1728, 1272), 3);
    add_background_object(create_plfadebrick5_3065(1728, 1144), 3);
    add_background_object(create_plfadebrick5_3065(1856, 1272), 3);
    add_background_object(create_plfadebrick5_3065(1856, 1144), 3);
    add_background_object(create_plfadebrick5_3065(1984, 1112), 3);
    add_background_object(create_plfadebrick5_3065(2112, 1112), 3);
    add_background_object(create_plfadebrick5_3065(2240, 1112), 3);
    add_background_object(create_plfadebrick5_3065(2240, 984), 3);
    add_background_object(create_plfadebrick5_3065(2368, 920), 3);
    add_background_object(create_plfadebrick5_3065(2496, 920), 3);
    add_background_object(create_plfadebrick5_3065(2624, 920), 3);
    add_background_object(create_plfadebrick5_3065(2752, 920), 3);
    add_background_object(create_plcavebrick1_3020(320, 408), 3);
    add_background_object(create_plcavebrick5_3017(128, 728), 3);
    add_background_object(create_plcavebrick6_3022(192, 728), 3);
    add_background_object(create_plcavebrick6_3022(160, 760), 3);
    add_background_object(create_plcavebrick6_3022(128, 792), 3);
    add_background_object(create_plcavebrick6_3022(96, 824), 3);
    add_background_object(create_plcavebrick5_3017(256, 984), 3);
    add_background_object(create_plcavebrick5_3017(288, 1016), 3);
    add_background_object(create_plcavebrick5_3017(320, 984), 3);
    add_background_object(create_plcavebrick4_3023(288, 1080), 3);
    add_background_object(create_plcavebrick4_3023(288, 1048), 3);
    add_background_object(create_plcavebrick4_3023(256, 1016), 3);
    add_background_object(create_plcavebrick4_3023(224, 984), 3);
    add_background_object(create_plfadebrick5_3065(2240, 856), 3);
    add_background_object(create_plfadebrick5_3065(2112, 984), 3);
    add_background_object(create_plfadebrick5_3065(2752, 1624), 3);
    add_background_object(create_plfadebrick5_3065(2752, 1752), 3);
    add_background_object(create_plfadebrick5_3065(2496, 1624), 3);
    add_background_object(create_plfadebrick5_3065(2624, 1624), 3);
    add_background_object(create_plfadebrick5_3065(2496, 1752), 3);
    add_background_object(create_plfadebrick5_3065(2624, 1752), 3);
    add_background_object(create_plfadebrick5_3065(2368, 1624), 3);
    add_background_object(create_plfadebrick5_3065(2368, 1752), 3);
    add_background_object(create_plfadebrick5_3065(2240, 1752), 3);
    add_background_object(create_plfadebrick5_3065(2112, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1984, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1856, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1728, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1600, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1472, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1344, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1216, 1752), 3);
    add_background_object(create_plfadebrick5_3065(1088, 1752), 3);
    add_background_object(create_plfadebrick5_3065(960, 1752), 3);
    add_background_object(create_plfadebrick5_3065(832, 1752), 3);
    add_background_object(create_plfadebrick5_3065(576, 1752), 3);
    add_background_object(create_plfadebrick5_3065(448, 1752), 3);
    add_background_object(create_plfadebrick5_3065(320, 1752), 3);
    add_background_object(create_plfadebrick5_3065(192, 1752), 3);
    add_background_object(create_plfadebrick5_3065(64, 1752), 3);
    add_background_object(create_plfadebrick5_3065(-64, 1752), 3);
    add_background_object(create_plcavebrick1_3020(2880, 1208), 3);
    add_background_object(create_plcavebrick2_3019(2880, 1208), 3);
    add_background_object(create_plcavebrick3_3018(2976, 1208), 3);
    add_background_object(create_plcavebrick2_3019(2880, 1144), 3);
    add_background_object(create_plcavebrick3_3018(2976, 1144), 3);
    add_background_object(create_plfadebrick2_3063(2880, 1048), 3);
    add_background_object(create_plcavebrick5_3017(2880, 1112), 3);
    add_background_object(create_plcavebrick5_3017(2944, 1112), 3);
    add_background_object(create_plfadebrick5_3065(2880, 920), 3);
    add_background_object(create_plfadebrick5_3065(3008, 984), 3);
    add_background_object(create_plfadebrick5_3065(3008, 856), 3);
    add_background_object(create_plfadebrick2_3063(3008, 1240), 3);
    add_background_object(create_plcavebrick5_3017(3008, 1304), 3);
    add_background_object(create_plcavebrick5_3017(3072, 1304), 3);
    add_background_object(create_plfadebrick5_3065(3008, 1112), 3);
    add_background_object(create_plfadebrick5_3065(3136, 984), 3);
    add_background_object(create_plfadebrick1_3062(2880, 1560), 3);
    add_background_object(create_plfadebrick5_3065(2880, 1624), 3);
    add_background_object(create_plfadebrick5_3065(2880, 1752), 3);
    add_background_object(create_plfadebrick1_3062(3008, 1560), 3);
    add_background_object(create_plfadebrick5_3065(3008, 1624), 3);
    add_background_object(create_plfadebrick5_3065(3008, 1752), 3);
    add_background_object(create_plfadebrick1_3062(3136, 1560), 3);
    add_background_object(create_plfadebrick5_3065(3136, 1624), 3);
    add_background_object(create_plfadebrick5_3065(3136, 1752), 3);
    add_background_object(create_plfadebrick5_3065(3136, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3136, 1080), 3);
    add_background_object(create_plcavebrick1_3020(4160, 1304), 3);
    add_background_object(create_plcavebrick2_3019(4160, 1272), 3);
    add_background_object(create_plcavebrick3_3018(4256, 1304), 3);
    add_background_object(create_plfadebrick5_3065(4160, -8), 3);
    add_background_object(create_plfadebrick1_3062(4160, 1560), 3);
    add_background_object(create_plfadebrick5_3065(4160, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4160, 1752), 3);
    add_background_object(create_plfadebrick1_3062(4288, 1560), 3);
    add_background_object(create_plfadebrick5_3065(4288, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4288, 1752), 3);
    add_background_object(create_plfadebrick1_3062(4416, 1560), 3);
    add_background_object(create_plfadebrick5_3065(4416, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4416, 1752), 3);
    add_background_object(create_plfadebrick1_3062(4544, 1560), 3);
    add_background_object(create_plfadebrick5_3065(4544, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4544, 1752), 3);
    add_background_object(create_plcavebrick1_3020(4160, 1176), 3);
    add_background_object(create_plcavebrick2_3019(4160, 1176), 3);
    add_background_object(create_plcavebrick3_3018(4256, 1176), 3);
    add_background_object(create_plcavebrick1_3020(4288, 152), 3);
    add_background_object(create_plcavebrick2_3019(4160, 152), 3);
    add_background_object(create_plcavebrick3_3018(4384, 152), 3);
    add_background_object(create_plfadebrick5_3065(4288, -8), 3);
    add_background_object(create_plfadebrick5_3065(4416, -8), 3);
    add_background_object(create_plfadebrick5_3065(4544, -8), 3);
    add_background_object(create_plcavebrick1_3020(4672, 1304), 3);
    add_background_object(create_plcavebrick2_3019(4672, 1304), 3);
    add_background_object(create_plcavebrick3_3018(4768, 1304), 3);
    add_background_object(create_plfadebrick5_3065(4672, -8), 3);
    add_background_object(create_plcavebrick1_3020(4672, 1176), 3);
    add_background_object(create_plcavebrick2_3019(4672, 1176), 3);
    add_background_object(create_plcavebrick3_3018(4768, 1176), 3);
    add_background_object(create_plcavebrick1_3020(4544, 152), 3);
    add_background_object(create_plcavebrick2_3019(4544, 152), 3);
    add_background_object(create_plcavebrick3_3018(4768, 152), 3);
    add_background_object(create_plfadebrick1_3062(4672, 1560), 3);
    add_background_object(create_plfadebrick5_3065(4672, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4672, 1752), 3);
    add_background_object(create_plcavebrick1_3020(4672, 1432), 3);
    add_background_object(create_plcavebrick2_3019(4672, 1432), 3);
    add_background_object(create_plcavebrick3_3018(4768, 1432), 3);
    add_background_object(create_plcavebrick1_3020(4160, 1048), 3);
    add_background_object(create_plcavebrick2_3019(4160, 1048), 3);
    add_background_object(create_plcavebrick3_3018(4256, 1048), 3);
    add_background_object(create_plcavebrick2_3019(4160, 920), 3);
    add_background_object(create_plcavebrick3_3018(4384, 920), 3);
    add_background_object(create_plcavebrick1_3020(4672, 1048), 3);
    add_background_object(create_plcavebrick2_3019(4672, 1048), 3);
    add_background_object(create_plcavebrick3_3018(4768, 1048), 3);
    add_background_object(create_plcavebrick2_3019(4544, 920), 3);
    add_background_object(create_plcavebrick3_3018(4768, 920), 3);
    add_background_object(create_plcavebrick2_3019(288, 408), 3);
    add_background_object(create_plcavebrick5_3017(832, 1528), 3);
    add_background_object(create_plcavebrick6_3022(896, 1528), 3);
    add_background_object(create_plrunestone_2992(2240, 1480), 3);
    add_background_object(create_plrunestone_2992(4552, 1480), 3);
    add_background_object(create_plrunestone_2992(4384, 1480), 3);
    add_background_object(create_plfadebrick2_3063(3264, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3264, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3264, 1080), 3);
    add_background_object(create_plfadebrick2_3063(3392, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3392, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3392, 1080), 3);
    add_background_object(create_plfadebrick2_3063(3520, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3520, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3520, 1080), 3);
    add_background_object(create_plfadebrick2_3063(3904, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3904, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3904, 1080), 3);
    add_background_object(create_plfadebrick2_3063(4032, 1336), 3);
    add_background_object(create_plfadebrick5_3065(4032, 1208), 3);
    add_background_object(create_plfadebrick5_3065(4032, 1080), 3);
    add_background_object(create_plfadebrick2_3063(3648, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3648, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3648, 1080), 3);
    add_background_object(create_plfadebrick2_3063(3776, 1336), 3);
    add_background_object(create_plfadebrick5_3065(3776, 1208), 3);
    add_background_object(create_plfadebrick5_3065(3776, 1080), 3);
    add_background_object(create_plfadebrick5_3065(3904, 952), 3);
    add_background_object(create_plfadebrick5_3065(3904, 824), 3);
    add_background_object(create_plfadebrick5_3065(4032, 952), 3);
    add_background_object(create_plfadebrick5_3065(4032, 824), 3);
    add_background_object(create_plfadebrick5_3065(3904, 696), 3);
    add_background_object(create_plfadebrick5_3065(4032, 696), 3);
    add_background_object(create_plfadebrick5_3065(3904, 568), 3);
    add_background_object(create_plfadebrick5_3065(4032, 568), 3);
    add_background_object(create_plfadebrick1_3062(3264, 1592), 3);
    add_background_object(create_plcavebrick6_3022(3264, 1560), 3);
    add_background_object(create_plfadebrick5_3065(3264, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3264, 1784), 3);
    add_background_object(create_plfadebrick1_3062(3392, 1592), 3);
    add_background_object(create_plfadebrick5_3065(3392, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3392, 1784), 3);
    add_background_object(create_plfadebrick1_3062(3520, 1592), 3);
    add_background_object(create_plfadebrick5_3065(3520, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3520, 1784), 3);
    add_background_object(create_plfadebrick1_3062(3648, 1592), 3);
    add_background_object(create_plfadebrick5_3065(3648, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3648, 1784), 3);
    add_background_object(create_plfadebrick1_3062(3776, 1592), 3);
    add_background_object(create_plfadebrick5_3065(3776, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3776, 1784), 3);
    add_background_object(create_plfadebrick1_3062(3904, 1592), 3);
    add_background_object(create_plfadebrick5_3065(3904, 1656), 3);
    add_background_object(create_plfadebrick5_3065(3904, 1784), 3);
    add_background_object(create_plfadebrick1_3062(4032, 1592), 3);
    add_background_object(create_plfadebrick5_3065(4032, 1656), 3);
    add_background_object(create_plfadebrick5_3065(4032, 1784), 3);
    add_background_object(create_plcavebrick4_3023(4128, 1560), 3);
    add_background_object(create_plcavebrick4_3023(4128, 1400), 3);
    add_background_object(create_plcavebrick6_3022(3264, 1400), 3);
    add_background_object(create_plcavebrick5_3017(560, 1496), 3);
    add_background_object(create_plcavebrick6_3022(592, 1496), 3);
    add_background_object(create_plcavebrick5_3017(528, 1528), 3);
    add_background_object(create_plcavebrick6_3022(592, 1528), 3);
    add_background_object(create_plcavebrick1_3020(800, 1176), 3);
    add_background_object(create_plcavebrick2_3019(800, 1176), 3);
    add_background_object(create_plcavebrick3_3018(896, 1176), 3);
    add_background_object(create_plcavebrick3_3018(448, 1176), 3);
    add_background_object(create_plfadebrick5_3065(896, 984), 3);
    add_background_object(create_plfadebrick5_3065(768, 984), 3);
    add_background_object(create_plcavebrick5_3017(448, 1144), 3);
    add_background_object(create_plcavebrick5_3017(448, 1112), 3);
    add_background_object(create_plcavebrick5_3017(512, 1144), 3);
    add_background_object(create_plcavebrick5_3017(512, 1112), 3);
    add_background_object(create_plcavebrick5_3017(576, 1144), 3);
    add_background_object(create_plcavebrick5_3017(576, 1112), 3);
    add_background_object(create_plcavebrick5_3017(768, 1144), 3);
    add_background_object(create_plcavebrick5_3017(768, 1112), 3);
    add_background_object(create_plcavebrick5_3017(832, 1144), 3);
    add_background_object(create_plcavebrick5_3017(832, 1112), 3);
    add_background_object(create_plcavebrick6_3022(896, 1144), 3);
    add_background_object(create_plcavebrick6_3022(896, 1112), 3);
    add_background_object(create_plfadebrick5_3065(1024, 984), 3);
    add_background_object(create_plfadebrick5_3065(896, 856), 3);
    add_background_object(create_plfadebrick5_3065(768, 856), 3);
    add_background_object(create_plfadebrick5_3065(1024, 856), 3);
    add_background_object(create_plcavebrick4_3023(528, 1496), 3);
    add_background_object(create_plcavebrick4_3023(528, 1528), 3);
    add_background_object(create_plfadebrick5_3065(640, 984), 3);
    add_background_object(create_plcavebrick5_3017(640, 1144), 3);
    add_background_object(create_plcavebrick5_3017(640, 1112), 3);
    add_background_object(create_plcavebrick5_3017(704, 1144), 3);
    add_background_object(create_plcavebrick5_3017(704, 1112), 3);
    add_background_object(create_plfadebrick5_3065(640, 856), 3);
    add_background_object(create_plfadebrick1_3062(704, 1560), 3);
    add_background_object(create_plfadebrick1_3062(704, 1688), 3);
    add_background_object(create_plfadebrick2_3063(704, 1624), 3);
    add_background_object(create_plfadebrick5_3065(704, 1752), 3);
    add_background_object(create_plcavebrick5_3017(800, 1176), 3);
    add_background_object(create_plcavebrick4_3023(768, 1176), 3);
    add_background_object(create_plcavebrick5_3017(416, 1176), 3);
    add_background_object(create_plcavebrick6_3022(480, 1176), 3);
    add_background_object(create_plfadebrick5_3065(4800, 600), 3);
    add_background_object(create_plfadebrick5_3065(4800, 728), 3);
    add_background_object(create_plfadebrick5_3065(4800, 856), 3);
    add_background_object(create_plfadebrick5_3065(4800, 984), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1112), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1240), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1368), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1496), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1624), 3);
    add_background_object(create_plfadebrick5_3065(4800, 1752), 3);
    add_background_object(create_plcavebrick5_3017(560, 1368), 3);
    add_background_object(create_plcavebrick6_3022(592, 1368), 3);
    add_background_object(create_plcavebrick5_3017(528, 1400), 3);
    add_background_object(create_plcavebrick6_3022(592, 1400), 3);
    add_background_object(create_plcavebrick4_3023(528, 1368), 3);
    add_background_object(create_plcavebrick4_3023(528, 1400), 3);
    add_background_object(create_plcavebrick4_3023(800, 1528), 3);
    add_background_object(create_plcavebrick5_3017(560, 1432), 3);
    add_background_object(create_plcavebrick6_3022(592, 1432), 3);
    add_background_object(create_plcavebrick5_3017(528, 1464), 3);
    add_background_object(create_plcavebrick6_3022(592, 1464), 3);
    add_background_object(create_plcavebrick4_3023(528, 1432), 3);
    add_background_object(create_plcavebrick4_3023(528, 1464), 3);
    add_background_object(create_plcavebrick1_3020(3136, 1304), 3);
    add_background_object(create_plcavebrick2_3019(3136, 1304), 3);
    add_background_object(create_plcavebrick6_3022(3232, 1368), 3);
    add_background_object(create_plcavebrick6_3022(3232, 1336), 3);
    add_background_object(create_plfadebrick2_3063(3136, 1240), 3);
    add_background_object(create_plcavebrick5_3017(3136, 1304), 3);
    add_background_object(create_plcavebrick5_3017(3200, 1304), 3);
    add_background_object(create_plcavebrick1_3020(4288, 792), 3);
    add_background_object(create_plcavebrick1_3020(4544, 792), 3);
    add_background_object(create_plcavebrick1_3020(4160, 792), 3);
    add_background_object(create_plcavebrick1_3020(4672, 792), 3);
    add_background_object(create_plcavebrick2_3019(4160, 792), 3);
    add_background_object(create_plcavebrick3_3018(4384, 792), 3);
    add_background_object(create_plcavebrick2_3019(4544, 792), 3);
    add_background_object(create_plcavebrick3_3018(4768, 792), 3);
    add_background_object(create_plcavebrick1_3020(4288, 664), 3);
    add_background_object(create_plcavebrick1_3020(4544, 664), 3);
    add_background_object(create_plcavebrick1_3020(4160, 664), 3);
    add_background_object(create_plcavebrick1_3020(4672, 664), 3);
    add_background_object(create_plcavebrick2_3019(4160, 664), 3);
    add_background_object(create_plcavebrick3_3018(4384, 664), 3);
    add_background_object(create_plcavebrick2_3019(4544, 664), 3);
    add_background_object(create_plcavebrick3_3018(4768, 664), 3);
    add_background_object(create_plcavebrick1_3020(4288, 536), 3);
    add_background_object(create_plcavebrick1_3020(4544, 536), 3);
    add_background_object(create_plcavebrick1_3020(4160, 536), 3);
    add_background_object(create_plcavebrick1_3020(4672, 536), 3);
    add_background_object(create_plcavebrick2_3019(4160, 536), 3);
    add_background_object(create_plcavebrick3_3018(4384, 536), 3);
    add_background_object(create_plcavebrick2_3019(4544, 536), 3);
    add_background_object(create_plcavebrick3_3018(4768, 536), 3);
    add_background_object(create_plcavebrick1_3020(4288, 408), 3);
    add_background_object(create_plcavebrick1_3020(4544, 408), 3);
    add_background_object(create_plcavebrick1_3020(4160, 408), 3);
    add_background_object(create_plcavebrick1_3020(4672, 408), 3);
    add_background_object(create_plcavebrick2_3019(4160, 408), 3);
    add_background_object(create_plcavebrick3_3018(4384, 408), 3);
    add_background_object(create_plcavebrick2_3019(4544, 408), 3);
    add_background_object(create_plcavebrick3_3018(4768, 408), 3);
    add_background_object(create_plcavebrick1_3020(4288, 280), 3);
    add_background_object(create_plcavebrick1_3020(4544, 280), 3);
    add_background_object(create_plcavebrick1_3020(4160, 280), 3);
    add_background_object(create_plcavebrick1_3020(4672, 280), 3);
    add_background_object(create_plcavebrick2_3019(4160, 280), 3);
    add_background_object(create_plcavebrick3_3018(4384, 280), 3);
    add_background_object(create_plcavebrick2_3019(4544, 280), 3);
    add_background_object(create_plcavebrick3_3018(4768, 280), 3);
    add_background_object(create_plfadebrick5_3065(4800, 472), 3);
    add_background_object(create_plfadebrick5_3065(4800, 216), 3);
    add_background_object(create_plfadebrick5_3065(4800, 344), 3);
    add_background_object(create_plfadebrick5_3065(4800, 88), 3);
    add_background_object(create_plfadebrick5_3065(4800, -8), 3);
    add_background_object(create_plfadebrick5_3065(3904, 440), 3);
    add_background_object(create_plfadebrick5_3065(4032, 440), 3);
    add_background_object(create_plfadebrick5_3065(3904, 312), 3);
    add_background_object(create_plfadebrick5_3065(4032, 312), 3);
    add_background_object(create_plfadebrick5_3065(3904, 176), 3);
    add_background_object(create_plfadebrick5_3065(4032, 176), 3);
    add_background_object(create_plfadebrick5_3065(3904, 48), 3);
    add_background_object(create_plfadebrick5_3065(4032, 48), 3);
    add_background_object(create_plfadebrick5_3065(3904, -8), 3);
    add_background_object(create_plfadebrick5_3065(4032, -8), 3);
    add_background_object(create_plcavebrick5_3017(2912, 1448), 3);
    add_background_object(create_plcavebrick5_3017(2976, 1448), 3);
    add_background_object(create_plcavebrick6_3022(3040, 1448), 3);
    add_background_object(create_plcavebrick4_3023(2880, 1448), 3);
    add_background_object(create_plcavebrick5_3017(832, 1304), 3);
    add_background_object(create_plcavebrick4_3023(800, 1304), 3);
    add_background_object(create_plrunestone_2992(2344, 1480), 3);
    add_background_object(create_plfadebrick2_3063(4672, 120), 3);
    add_background_object(create_plfadebrick2_3063(4544, 120), 3);
    add_background_object(create_plfadebrick2_3063(4416, 120), 3);
    add_background_object(create_plfadebrick2_3063(4288, 120), 3);
    add_background_object(create_plfadebrick2_3063(4160, 120), 3);
    add_background_object(create_plfadebrick4_3061(5184, -8), 3);
    add_background_object(create_plfadebrick4_3061(5184, 120), 3);
    add_background_object(create_plcavebrick3_3018(5248, -8), 3);
    add_background_object(create_plcavebrick3_3018(5248, 120), 3);
    add_background_object(create_plfadebrick4_3061(5184, 248), 3);
    add_background_object(create_plfadebrick4_3061(5184, 376), 3);
    add_background_object(create_plcavebrick3_3018(5248, 248), 3);
    add_background_object(create_plcavebrick3_3018(5248, 376), 3);
    add_background_object(create_plfadebrick3_3064(5376, -8), 3);
    add_background_object(create_plcavebrick2_3019(5344, -8), 3);
    add_background_object(create_plfadebrick3_3064(5376, 120), 3);
    add_background_object(create_plcavebrick2_3019(5344, 120), 3);
    add_background_object(create_plfadebrick3_3064(5376, 248), 3);
    add_background_object(create_plcavebrick2_3019(5344, 248), 3);
    add_background_object(create_plfadebrick3_3064(5376, 376), 3);
    add_background_object(create_plcavebrick2_3019(5344, 376), 3);
    add_background_object(create_plfadebrick4_3061(5184, 504), 3);
    add_background_object(create_plfadebrick4_3061(5184, 632), 3);
    add_background_object(create_plcavebrick3_3018(5248, 504), 3);
    add_background_object(create_plcavebrick3_3018(5248, 632), 3);
    add_background_object(create_plfadebrick4_3061(5184, 760), 3);
    add_background_object(create_plfadebrick4_3061(5184, 888), 3);
    add_background_object(create_plcavebrick3_3018(5248, 760), 3);
    add_background_object(create_plcavebrick3_3018(5248, 888), 3);
    add_background_object(create_plfadebrick4_3061(5184, 1016), 3);
    add_background_object(create_plcavebrick3_3018(5248, 1016), 3);
    add_background_object(create_plcavebrick3_3018(5248, 1144), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1272), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1400), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1528), 3);
    add_background_object(create_plcavebrick3_3018(4992, 1528), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1656), 3);
    add_background_object(create_plcavebrick3_3018(4992, 1656), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1784), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1912), 3);
    add_background_object(create_plfadebrick4_3061(4928, 2040), 3);
    add_background_object(create_plcavebrick10_3029(5024, 1720), 3);
    add_background_object(create_plcavebrick13_3066(5024, 1528), 3);
    add_background_object(create_plcavebrick5_3017(5120, 1784), 3);
    add_background_object(create_plcavebrick6_3022(5376, 1816), 3);
    add_background_object(create_plcavebrick5_3017(5184, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5248, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5312, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5376, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5440, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5504, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5568, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5632, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5696, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5760, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5824, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5888, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5952, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6016, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6080, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6144, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6208, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6272, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6336, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6400, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6464, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6528, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6592, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6656, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6720, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6784, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6848, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6912, 1784), 3);
    add_background_object(create_plcavebrick5_3017(6976, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7040, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7104, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7168, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7232, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7296, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7360, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7424, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7488, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7552, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7616, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7680, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7744, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7808, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7872, 1784), 3);
    add_background_object(create_plcavebrick5_3017(7936, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8000, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8064, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8128, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8192, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8256, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8320, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8384, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8448, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8512, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8576, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8640, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8704, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8768, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8832, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8896, 1784), 3);
    add_background_object(create_plcavebrick5_3017(8960, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9024, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9088, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9152, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9216, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9280, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9344, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9408, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9472, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9536, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9600, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9664, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9728, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9792, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9856, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9920, 1784), 3);
    add_background_object(create_plcavebrick5_3017(9984, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10048, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10112, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10176, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10240, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10304, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10368, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10432, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10496, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10560, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10624, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10688, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10752, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10880, 1784), 3);
    add_background_object(create_plcavebrick5_3017(10944, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11008, 1784), 3);
    add_background_object(create_plcavebrick1_3020(4992, 1784), 3);
    add_background_object(create_plcavebrick5_3017(5120, 1816), 3);
    add_background_object(create_plcavebrick5_3017(5184, 1816), 3);
    add_background_object(create_plcavebrick5_3017(5120, 1848), 3);
    add_background_object(create_plcavebrick5_3017(5184, 1848), 3);
    add_background_object(create_plcavebrick5_3017(5248, 1816), 3);
    add_background_object(create_plcavebrick5_3017(5312, 1816), 3);
    add_background_object(create_plcavebrick6_3022(5248, 1848), 3);
    add_background_object(create_plcavebrick6_3022(5120, 1880), 3);
    add_background_object(create_plcavebrick3_3018(4992, 1912), 3);
    add_background_object(create_plcavebrick3_3018(4992, 2040), 3);
    add_background_object(create_plcavebrick5_3017(4992, 1912), 3);
    add_background_object(create_plcavebrick6_3022(5056, 1912), 3);
    add_background_object(create_plcavebrick1_3020(4992, 1400), 3);
    add_background_object(create_plcavebrick1_3020(5120, 1400), 3);
    add_background_object(create_plcavebrick3_3018(5248, 1400), 3);
    add_background_object(create_plcavebrick1_3020(4992, 1272), 3);
    add_background_object(create_plcavebrick1_3020(5120, 1272), 3);
    add_background_object(create_plcavebrick3_3018(5248, 1272), 3);
    add_background_object(create_plfadebrick5_3065(4928, 632), 3);
    add_background_object(create_plfadebrick5_3065(4928, 760), 3);
    add_background_object(create_plfadebrick5_3065(4928, 888), 3);
    add_background_object(create_plfadebrick5_3065(4928, 1016), 3);
    add_background_object(create_plfadebrick5_3065(4928, 504), 3);
    add_background_object(create_plfadebrick5_3065(4928, 248), 3);
    add_background_object(create_plfadebrick5_3065(4928, 376), 3);
    add_background_object(create_plfadebrick5_3065(4928, 120), 3);
    add_background_object(create_plfadebrick5_3065(5056, 632), 3);
    add_background_object(create_plfadebrick5_3065(5056, 760), 3);
    add_background_object(create_plfadebrick5_3065(5056, 888), 3);
    add_background_object(create_plfadebrick5_3065(5056, 1016), 3);
    add_background_object(create_plfadebrick5_3065(5056, 504), 3);
    add_background_object(create_plfadebrick5_3065(5056, 248), 3);
    add_background_object(create_plfadebrick5_3065(5056, 376), 3);
    add_background_object(create_plfadebrick5_3065(5056, 120), 3);
    add_background_object(create_plfadebrick5_3065(4928, -8), 3);
    add_background_object(create_plfadebrick5_3065(5056, -8), 3);
    add_background_object(create_plfadebrick4_3061(5952, -8), 3);
    add_background_object(create_plfadebrick4_3061(5952, 120), 3);
    add_background_object(create_plcavebrick3_3018(6016, -8), 3);
    add_background_object(create_plcavebrick3_3018(6016, 120), 3);
    add_background_object(create_plfadebrick4_3061(5952, 248), 3);
    add_background_object(create_plfadebrick4_3061(5952, 376), 3);
    add_background_object(create_plcavebrick3_3018(6016, 248), 3);
    add_background_object(create_plcavebrick3_3018(6016, 376), 3);
    add_background_object(create_plfadebrick3_3064(6144, -8), 3);
    add_background_object(create_plcavebrick2_3019(6112, -8), 3);
    add_background_object(create_plfadebrick3_3064(6144, 120), 3);
    add_background_object(create_plcavebrick2_3019(6112, 120), 3);
    add_background_object(create_plfadebrick3_3064(6144, 248), 3);
    add_background_object(create_plcavebrick2_3019(6112, 248), 3);
    add_background_object(create_plfadebrick3_3064(6144, 376), 3);
    add_background_object(create_plcavebrick2_3019(6112, 376), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1784), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1912), 3);
    add_background_object(create_plcavebrick2_3019(11424, 1912), 3);
    add_background_object(create_plfadebrick3_3064(11456, 2040), 3);
    add_background_object(create_plcavebrick2_3019(11424, 2040), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1400), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1528), 3);
    add_background_object(create_plcavebrick2_3019(11424, 1528), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1656), 3);
    add_background_object(create_plcavebrick2_3019(11424, 1656), 3);
    add_background_object(create_plfadebrick3_3064(11456, 1272), 3);
    add_background_object(create_plfadebrick3_3064(11200, 888), 3);
    add_background_object(create_plfadebrick3_3064(11200, 1016), 3);
    add_background_object(create_plcavebrick2_3019(11168, 888), 3);
    add_background_object(create_plcavebrick2_3019(11168, 1016), 3);
    add_background_object(create_plfadebrick3_3064(11200, 1144), 3);
    add_background_object(create_plcavebrick2_3019(11168, 1144), 3);
    add_background_object(create_plfadebrick5_3065(11264, 888), 3);
    add_background_object(create_plfadebrick5_3065(11264, 1016), 3);
    add_background_object(create_plfadebrick5_3065(11264, 1144), 3);
    add_background_object(create_plcavebrick5_3017(11072, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11136, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11200, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11264, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11072, 1816), 3);
    add_background_object(create_plcavebrick5_3017(11136, 1816), 3);
    add_background_object(create_plcavebrick5_3017(11200, 1848), 3);
    add_background_object(create_plcavebrick5_3017(11264, 1848), 3);
    add_background_object(create_plcavebrick5_3017(11200, 1816), 3);
    add_background_object(create_plcavebrick5_3017(11264, 1816), 3);
    add_background_object(create_plcavebrick1_3020(11328, 1784), 3);
    add_background_object(create_plcavebrick5_3017(11392, 1912), 3);
    add_background_object(create_plcavebrick4_3023(11040, 1816), 3);
    add_background_object(create_plcavebrick4_3023(11168, 1848), 3);
    add_background_object(create_plcavebrick4_3023(11296, 1880), 3);
    add_background_object(create_plcavebrick4_3023(11360, 1912), 3);
    add_background_object(create_plfadebrick3_3064(11200, 504), 3);
    add_background_object(create_plfadebrick3_3064(11200, 632), 3);
    add_background_object(create_plcavebrick2_3019(11168, 504), 3);
    add_background_object(create_plcavebrick2_3019(11168, 632), 3);
    add_background_object(create_plfadebrick3_3064(11200, 760), 3);
    add_background_object(create_plcavebrick2_3019(11168, 760), 3);
    add_background_object(create_plfadebrick5_3065(11264, 504), 3);
    add_background_object(create_plfadebrick5_3065(11264, 632), 3);
    add_background_object(create_plfadebrick5_3065(11264, 760), 3);
    add_background_object(create_plcavebrick9_3028(11360, 1720), 3);
    add_background_object(create_plcavebrick14_3067(11360, 1528), 3);
    add_background_object(create_plcavebrick1_3020(11200, 1400), 3);
    add_background_object(create_plcavebrick1_3020(11328, 1400), 3);
    add_background_object(create_plcavebrick1_3020(11200, 1272), 3);
    add_background_object(create_plcavebrick1_3020(11328, 1272), 3);
    add_background_object(create_plcavebrick2_3019(11168, 1272), 3);
    add_background_object(create_plcavebrick2_3019(11168, 1400), 3);
    add_background_object(create_plfadebrick5_3065(11392, 888), 3);
    add_background_object(create_plfadebrick5_3065(11392, 1016), 3);
    add_background_object(create_plfadebrick5_3065(11392, 1144), 3);
    add_background_object(create_plfadebrick5_3065(11392, 504), 3);
    add_background_object(create_plfadebrick5_3065(11392, 632), 3);
    add_background_object(create_plfadebrick5_3065(11392, 760), 3);
    add_background_object(create_plfadebrick3_3064(11200, 120), 3);
    add_background_object(create_plfadebrick3_3064(11200, 248), 3);
    add_background_object(create_plcavebrick2_3019(11168, 120), 3);
    add_background_object(create_plcavebrick2_3019(11168, 248), 3);
    add_background_object(create_plfadebrick3_3064(11200, 376), 3);
    add_background_object(create_plcavebrick2_3019(11168, 376), 3);
    add_background_object(create_plfadebrick5_3065(11264, 120), 3);
    add_background_object(create_plfadebrick5_3065(11264, 248), 3);
    add_background_object(create_plfadebrick5_3065(11264, 376), 3);
    add_background_object(create_plfadebrick5_3065(11392, 120), 3);
    add_background_object(create_plfadebrick5_3065(11392, 248), 3);
    add_background_object(create_plfadebrick5_3065(11392, 376), 3);
    add_background_object(create_plfadebrick3_3064(11200, -8), 3);
    add_background_object(create_plcavebrick2_3019(11168, -8), 3);
    add_background_object(create_plfadebrick5_3065(11264, -8), 3);
    add_background_object(create_plfadebrick5_3065(11392, -8), 3);
    add_background_object(create_plfadebrick5_3065(5440, 376), 3);
    add_background_object(create_plfadebrick5_3065(5568, 376), 3);
    add_background_object(create_plfadebrick5_3065(5696, 376), 3);
    add_background_object(create_plfadebrick5_3065(5824, 376), 3);
    add_background_object(create_plfadebrick5_3065(5440, 248), 3);
    add_background_object(create_plfadebrick5_3065(5568, 248), 3);
    add_background_object(create_plfadebrick5_3065(5696, 248), 3);
    add_background_object(create_plfadebrick5_3065(5824, 248), 3);
    add_background_object(create_plfadebrick5_3065(5440, 120), 3);
    add_background_object(create_plfadebrick5_3065(5568, 120), 3);
    add_background_object(create_plfadebrick5_3065(5696, 120), 3);
    add_background_object(create_plfadebrick5_3065(5824, 120), 3);
    add_background_object(create_plfadebrick5_3065(5440, -8), 3);
    add_background_object(create_plfadebrick5_3065(5568, -8), 3);
    add_background_object(create_plfadebrick5_3065(5696, -8), 3);
    add_background_object(create_plfadebrick5_3065(5824, -8), 3);
    add_background_object(create_plfadebrick3_3064(5376, 504), 3);
    add_background_object(create_plcavebrick2_3019(5344, 504), 3);
    add_background_object(create_plfadebrick3_3064(5376, 632), 3);
    add_background_object(create_plcavebrick2_3019(5344, 632), 3);
    add_background_object(create_plfadebrick3_3064(5376, 760), 3);
    add_background_object(create_plcavebrick2_3019(5344, 760), 3);
    add_background_object(create_plfadebrick3_3064(5376, 888), 3);
    add_background_object(create_plcavebrick2_3019(5344, 888), 3);
    add_background_object(create_plfadebrick4_3061(5952, 504), 3);
    add_background_object(create_plfadebrick4_3061(5952, 632), 3);
    add_background_object(create_plcavebrick3_3018(6016, 504), 3);
    add_background_object(create_plcavebrick3_3018(6016, 632), 3);
    add_background_object(create_plfadebrick4_3061(5952, 760), 3);
    add_background_object(create_plfadebrick4_3061(5952, 888), 3);
    add_background_object(create_plcavebrick3_3018(6016, 760), 3);
    add_background_object(create_plcavebrick3_3018(6016, 888), 3);
    add_background_object(create_plfadebrick3_3064(6144, 504), 3);
    add_background_object(create_plcavebrick2_3019(6112, 504), 3);
    add_background_object(create_plfadebrick3_3064(6144, 632), 3);
    add_background_object(create_plcavebrick2_3019(6112, 632), 3);
    add_background_object(create_plfadebrick3_3064(6144, 760), 3);
    add_background_object(create_plcavebrick2_3019(6112, 760), 3);
    add_background_object(create_plfadebrick3_3064(6144, 888), 3);
    add_background_object(create_plcavebrick2_3019(6112, 888), 3);
    add_background_object(create_plfadebrick5_3065(5440, 888), 3);
    add_background_object(create_plfadebrick5_3065(5568, 888), 3);
    add_background_object(create_plfadebrick5_3065(5696, 888), 3);
    add_background_object(create_plfadebrick5_3065(5824, 888), 3);
    add_background_object(create_plfadebrick5_3065(5440, 760), 3);
    add_background_object(create_plfadebrick5_3065(5568, 760), 3);
    add_background_object(create_plfadebrick5_3065(5696, 760), 3);
    add_background_object(create_plfadebrick5_3065(5824, 760), 3);
    add_background_object(create_plfadebrick5_3065(5440, 632), 3);
    add_background_object(create_plfadebrick5_3065(5568, 632), 3);
    add_background_object(create_plfadebrick5_3065(5696, 632), 3);
    add_background_object(create_plfadebrick5_3065(5824, 632), 3);
    add_background_object(create_plfadebrick5_3065(5440, 504), 3);
    add_background_object(create_plfadebrick5_3065(5568, 504), 3);
    add_background_object(create_plfadebrick5_3065(5696, 504), 3);
    add_background_object(create_plfadebrick5_3065(5824, 504), 3);
    add_background_object(create_plfadebrick5_3065(6208, 888), 3);
    add_background_object(create_plfadebrick5_3065(6336, 888), 3);
    add_background_object(create_plfadebrick5_3065(6464, 888), 3);
    add_background_object(create_plfadebrick5_3065(6592, 888), 3);
    add_background_object(create_plfadebrick5_3065(6208, 760), 3);
    add_background_object(create_plfadebrick5_3065(6336, 760), 3);
    add_background_object(create_plfadebrick5_3065(6464, 760), 3);
    add_background_object(create_plfadebrick5_3065(6592, 760), 3);
    add_background_object(create_plfadebrick5_3065(6208, 632), 3);
    add_background_object(create_plfadebrick5_3065(6336, 632), 3);
    add_background_object(create_plfadebrick5_3065(6208, 504), 3);
    add_background_object(create_plfadebrick5_3065(6336, 504), 3);
    add_background_object(create_plfadebrick5_3065(6208, 376), 3);
    add_background_object(create_plfadebrick5_3065(6336, 376), 3);
    add_background_object(create_plfadebrick5_3065(6208, 248), 3);
    add_background_object(create_plfadebrick5_3065(6336, 248), 3);
    add_background_object(create_plfadebrick5_3065(6208, 120), 3);
    add_background_object(create_plfadebrick5_3065(6336, 120), 3);
    add_background_object(create_plfadebrick5_3065(6208, -8), 3);
    add_background_object(create_plfadebrick5_3065(6336, -8), 3);
    add_background_object(create_plfadebrick5_3065(6720, 888), 3);
    add_background_object(create_plfadebrick5_3065(6848, 888), 3);
    add_background_object(create_plfadebrick5_3065(6976, 888), 3);
    add_background_object(create_plfadebrick5_3065(7104, 888), 3);
    add_background_object(create_plfadebrick5_3065(6720, 760), 3);
    add_background_object(create_plfadebrick5_3065(6848, 760), 3);
    add_background_object(create_plfadebrick5_3065(6976, 760), 3);
    add_background_object(create_plfadebrick5_3065(7104, 760), 3);
    add_background_object(create_plfadebrick5_3065(7232, 888), 3);
    add_background_object(create_plfadebrick5_3065(7360, 888), 3);
    add_background_object(create_plfadebrick5_3065(7488, 888), 3);
    add_background_object(create_plfadebrick5_3065(7232, 760), 3);
    add_background_object(create_plfadebrick5_3065(7360, 760), 3);
    add_background_object(create_plfadebrick5_3065(7488, 760), 3);
    add_background_object(create_plfadebrick5_3065(7616, 888), 3);
    add_background_object(create_plfadebrick5_3065(7744, 888), 3);
    add_background_object(create_plfadebrick5_3065(7872, 888), 3);
    add_background_object(create_plfadebrick5_3065(7616, 760), 3);
    add_background_object(create_plfadebrick5_3065(7744, 760), 3);
    add_background_object(create_plfadebrick5_3065(7872, 760), 3);
    add_background_object(create_plfadebrick5_3065(8000, 888), 3);
    add_background_object(create_plfadebrick5_3065(8128, 888), 3);
    add_background_object(create_plfadebrick5_3065(8256, 888), 3);
    add_background_object(create_plfadebrick5_3065(8000, 760), 3);
    add_background_object(create_plfadebrick5_3065(8128, 760), 3);
    add_background_object(create_plfadebrick5_3065(8256, 760), 3);
    add_background_object(create_plfadebrick5_3065(8384, 888), 3);
    add_background_object(create_plfadebrick5_3065(8512, 888), 3);
    add_background_object(create_plfadebrick5_3065(8384, 760), 3);
    add_background_object(create_plfadebrick5_3065(8512, 760), 3);
    add_background_object(create_plfadebrick5_3065(8640, 888), 3);
    add_background_object(create_plfadebrick5_3065(8768, 888), 3);
    add_background_object(create_plfadebrick5_3065(8896, 888), 3);
    add_background_object(create_plfadebrick5_3065(8640, 760), 3);
    add_background_object(create_plfadebrick5_3065(8768, 760), 3);
    add_background_object(create_plfadebrick5_3065(8896, 760), 3);
    add_background_object(create_plfadebrick5_3065(9024, 888), 3);
    add_background_object(create_plfadebrick5_3065(9024, 760), 3);
    add_background_object(create_plfadebrick5_3065(9152, 888), 3);
    add_background_object(create_plfadebrick5_3065(9280, 888), 3);
    add_background_object(create_plfadebrick5_3065(9408, 888), 3);
    add_background_object(create_plfadebrick5_3065(9152, 760), 3);
    add_background_object(create_plfadebrick5_3065(9280, 760), 3);
    add_background_object(create_plfadebrick5_3065(9408, 760), 3);
    add_background_object(create_plfadebrick5_3065(9536, 888), 3);
    add_background_object(create_plfadebrick5_3065(9536, 760), 3);
    add_background_object(create_plfadebrick5_3065(9664, 888), 3);
    add_background_object(create_plfadebrick5_3065(9792, 888), 3);
    add_background_object(create_plfadebrick5_3065(9920, 888), 3);
    add_background_object(create_plfadebrick5_3065(9664, 760), 3);
    add_background_object(create_plfadebrick5_3065(9792, 760), 3);
    add_background_object(create_plfadebrick5_3065(9920, 760), 3);
    add_background_object(create_plfadebrick5_3065(10048, 888), 3);
    add_background_object(create_plfadebrick5_3065(10176, 888), 3);
    add_background_object(create_plfadebrick5_3065(10304, 888), 3);
    add_background_object(create_plfadebrick5_3065(10048, 760), 3);
    add_background_object(create_plfadebrick5_3065(10176, 760), 3);
    add_background_object(create_plfadebrick5_3065(10304, 760), 3);
    add_background_object(create_plfadebrick5_3065(10432, 888), 3);
    add_background_object(create_plfadebrick5_3065(10560, 888), 3);
    add_background_object(create_plfadebrick5_3065(10432, 760), 3);
    add_background_object(create_plfadebrick5_3065(10560, 760), 3);
    add_background_object(create_plfadebrick5_3065(10688, 888), 3);
    add_background_object(create_plfadebrick5_3065(10816, 888), 3);
    add_background_object(create_plfadebrick5_3065(10688, 760), 3);
    add_background_object(create_plfadebrick5_3065(10816, 760), 3);
    add_background_object(create_plcavebrick3_3018(11008, 888), 3);
    add_background_object(create_plfadebrick4_3061(10944, 888), 3);
    add_background_object(create_plfadebrick4_3061(10944, 760), 3);
    add_background_object(create_plcavebrick3_3018(11008, 760), 3);
    add_background_object(create_plfadebrick5_3065(10688, 632), 3);
    add_background_object(create_plfadebrick5_3065(10816, 632), 3);
    add_background_object(create_plfadebrick5_3065(10688, 504), 3);
    add_background_object(create_plfadebrick5_3065(10816, 504), 3);
    add_background_object(create_plcavebrick3_3018(11008, 632), 3);
    add_background_object(create_plfadebrick4_3061(10944, 632), 3);
    add_background_object(create_plfadebrick4_3061(10944, 504), 3);
    add_background_object(create_plcavebrick3_3018(11008, 504), 3);
    add_background_object(create_plfadebrick5_3065(10688, 376), 3);
    add_background_object(create_plfadebrick5_3065(10816, 376), 3);
    add_background_object(create_plfadebrick5_3065(10688, 248), 3);
    add_background_object(create_plfadebrick5_3065(10816, 248), 3);
    add_background_object(create_plcavebrick3_3018(11008, 376), 3);
    add_background_object(create_plfadebrick4_3061(10944, 376), 3);
    add_background_object(create_plfadebrick4_3061(10944, 248), 3);
    add_background_object(create_plcavebrick3_3018(11008, 248), 3);
    add_background_object(create_plfadebrick5_3065(10688, 120), 3);
    add_background_object(create_plfadebrick5_3065(10816, 120), 3);
    add_background_object(create_plfadebrick5_3065(10688, -8), 3);
    add_background_object(create_plfadebrick5_3065(10816, -8), 3);
    add_background_object(create_plcavebrick3_3018(11008, 120), 3);
    add_background_object(create_plfadebrick4_3061(10944, 120), 3);
    add_background_object(create_plfadebrick4_3061(10944, -8), 3);
    add_background_object(create_plcavebrick3_3018(11008, -8), 3);
    add_background_object(create_plcavebrick5_3017(10816, 1784), 3);
    add_background_object(create_plfadebrick4_3061(4928, 1144), 3);
    add_background_object(create_plcavebrick1_3020(4992, 1144), 3);
    add_background_object(create_plcavebrick1_3020(5120, 1144), 3);
    add_object(create_gimmickspinballchain_3030(2756, -292), 3);
    add_object(create_gimmickspinballchain2_3031(2780, -292), 3);
    add_object(create_gimmickspinballchain3_3032(2756, -268), 3);
    add_object(create_gimmickspinballchain4_3033(2780, -268), 3);
    add_object(create_playerstartingpoint_358(29, 453), 3);
    add_object(create_enemysleepgas_2889(-205, 1093), 3);
    add_object(create_gimmickbridgelog_2339(-440, 904), 3);
    add_object(create_gimmickbridge12logs_353(-520, 760), 3);
    add_object(create_objectcyclonetop_2963(-504, 904), 3);
    add_object(create_objecttimegatepiece_2966(-343, 1337), 3);
    add_object(create_layerchangeswitch_404(2704, -176), 3);
    add_object(create_enemyterreonleftshoulder_2981(1180, 1532), 3);
    add_object(create_enemyterreonrightshoulder_2982(1228, 1532), 3);
    add_object(create_enemyterreonleftleg_2983(1163, 1526), 3);
    add_object(create_enemyterreonrightleg_2984(1244, 1526), 3);
    add_object(create_enemyterreon_2985(1203, 1526), 3);
    add_object(create_effectterreonwarning_2986(1204, 1472), 3);
    add_object(create_layerchangeswitch2_1239(2504, -160), 3);
    add_object(create_breakableplrock_2987(-440, 1464), 3);
    add_object(create_gimmickspinball_1175(2712, -280), 3);
    add_object(create_gimmickhangingidlesensor_740(553, -104), 3);
    add_object(create_objecttimegate_2965(4217, 1496), 3);
    add_object(create_objecttimegatepiece_2966(4241, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4249, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4257, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4265, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4273, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4281, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4289, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4297, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4305, 1497), 3);
    add_object(create_objecttimegatepiece_2966(4313, 1497), 3);
    add_object(create_hazardgiantsword_3043(112, 872), 3);
    add_object(create_gimmickbowarrow_2979(2576, -264), 3);
    add_object(create_objectvanishingblock_3034(-416, 1336), 3);
    add_object(create_enemyterreonleftshoulder_2981(1764, 1628), 3);
    add_object(create_enemyterreonrightshoulder_2982(1812, 1628), 3);
    add_object(create_enemyterreonleftleg_2983(1747, 1622), 3);
    add_object(create_enemyterreonrightleg_2984(1828, 1622), 3);
    add_object(create_enemyterreon_2985(1787, 1622), 3);
    add_object(create_effectterreonwarning_2986(1788, 1568), 3);
    add_object(create_monitorcrystals_324(848, 1496), 3);
    add_object(create_monitorcrystals_324(1520, 1624), 3);
    add_object(create_monitorcrystals_324(2032, 1624), 3);
    add_object(create_monitorcrystals_324(1648, 1656), 3);
    add_object(create_monitorcrystals_324(1904, 1656), 3);
    add_object(create_objectcyclonetop_2963(2304, 1528), 3);
    add_object(create_objectstonedoor1_2993(4432, 1512), 3);
    add_object(create_objectstonedoor2_2996(4527, 1512), 3);
    add_object(create_gimmickhangingidleswitch_1257(4481, 208), 3);
    add_object(create_enemyobelisk_3035(-340, 1636), 3);
    add_object(create_objectstonedoor3_2994(2848, 1224), 3);
    add_object(create_objectstonedoor4_2995(2879, 1224), 3);
    add_object(create_objecttimegate_2965(3249, 1504), 3);
    add_object(create_objecttimegatepiece_2966(3273, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3281, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3289, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3297, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3305, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3313, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3321, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3329, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3337, 1505), 3);
    add_object(create_objecttimegatepiece_2966(3345, 1505), 3);
    add_object(create_hazardspikesup_950(3296, 1560), 3);
    add_object(create_hazardspikesup_950(3328, 1560), 3);
    add_object(create_hazardspikesup_950(3360, 1560), 3);
    add_object(create_hazardspikesup_950(3392, 1560), 3);
    add_object(create_hazardspikesup_950(3424, 1560), 3);
    add_object(create_hazardspikesup_950(3456, 1560), 3);
    add_object(create_hazardspikesup_950(3488, 1560), 3);
    add_object(create_hazardspikesup_950(3520, 1560), 3);
    add_object(create_hazardspikesup_950(3552, 1560), 3);
    add_object(create_hazardspikesup_950(3584, 1560), 3);
    add_object(create_hazardspikesup_950(3616, 1560), 3);
    add_object(create_hazardspikesup_950(3648, 1560), 3);
    add_object(create_hazardspikesup_950(3680, 1560), 3);
    add_object(create_hazardspikesup_950(3712, 1560), 3);
    add_object(create_hazardspikesup_950(3744, 1560), 3);
    add_object(create_hazardspikesup_950(3776, 1560), 3);
    add_object(create_hazardspikesup_950(3808, 1560), 3);
    add_object(create_hazardspikesup_950(3840, 1560), 3);
    add_object(create_hazardspikesup_950(3872, 1560), 3);
    add_object(create_hazardspikesup_950(3904, 1560), 3);
    add_object(create_hazardspikesup_950(3936, 1560), 3);
    add_object(create_hazardspikesup_950(3968, 1560), 3);
    add_object(create_hazardspikesup_950(4000, 1560), 3);
    add_object(create_hazardspikesup_950(4032, 1560), 3);
    add_object(create_hazardspikesup_950(4064, 1560), 3);
    add_object(create_hazardspikesup_950(4096, 1560), 3);
    add_object(create_hazardspikesdown_2452(3296, 1400), 3);
    add_object(create_hazardspikesdown_2452(3328, 1400), 3);
    add_object(create_hazardspikesdown_2452(3360, 1400), 3);
    add_object(create_hazardspikesdown_2452(3392, 1400), 3);
    add_object(create_hazardspikesdown_2452(3424, 1400), 3);
    add_object(create_hazardspikesdown_2452(3456, 1400), 3);
    add_object(create_hazardspikesdown_2452(3488, 1400), 3);
    add_object(create_hazardspikesdown_2452(3520, 1400), 3);
    add_object(create_hazardspikesdown_2452(3552, 1400), 3);
    add_object(create_hazardspikesdown_2452(3584, 1400), 3);
    add_object(create_hazardspikesdown_2452(3616, 1400), 3);
    add_object(create_hazardspikesdown_2452(3648, 1400), 3);
    add_object(create_hazardspikesdown_2452(3680, 1400), 3);
    add_object(create_hazardspikesdown_2452(3712, 1400), 3);
    add_object(create_hazardspikesdown_2452(3744, 1400), 3);
    add_object(create_hazardspikesdown_2452(3776, 1400), 3);
    add_object(create_hazardspikesdown_2452(3808, 1400), 3);
    add_object(create_hazardspikesdown_2452(3840, 1400), 3);
    add_object(create_hazardspikesdown_2452(3872, 1400), 3);
    add_object(create_hazardspikesdown_2452(3904, 1400), 3);
    add_object(create_hazardspikesdown_2452(3936, 1400), 3);
    add_object(create_hazardspikesdown_2452(3968, 1400), 3);
    add_object(create_hazardspikesdown_2452(4000, 1400), 3);
    add_object(create_hazardspikesdown_2452(4032, 1400), 3);
    add_object(create_hazardspikesdown_2452(4064, 1400), 3);
    add_object(create_hazardspikesdown_2452(4096, 1400), 3);
    add_object(create_hazardgiantsword_3043(400, 552), 3);
    add_object(create_yellowspringup_434(496, 1560), 3);
    add_object(create_objectcrystal_279(3477, 1498), 3);
    add_object(create_objectcrystal_279(3517, 1498), 3);
    add_object(create_objectcrystal_279(3557, 1498), 3);
    add_object(create_objectcrystal_279(3597, 1498), 3);
    add_object(create_objectcrystal_279(3637, 1498), 3);
    add_object(create_objectcrystal_279(3677, 1498), 3);
    add_object(create_objectcrystal_279(3717, 1498), 3);
    add_object(create_objectcrystal_279(3757, 1498), 3);
    add_object(create_objectcrystal_279(3797, 1498), 3);
    add_object(create_objectcrystal_279(3837, 1498), 3);
    add_object(create_objectcrystal_279(3877, 1498), 3);
    add_object(create_objectcrystal_279(3917, 1498), 3);
    add_object(create_objecttimegate_2965(4481, 864), 3);
    add_object(create_objecttimegatepiece_2966(4505, 865), 3);
    add_object(create_objecttimegatepiece_2966(4513, 865), 3);
    add_object(create_objecttimegatepiece_2966(4521, 865), 3);
    add_object(create_objecttimegatepiece_2966(4529, 865), 3);
    add_object(create_objecttimegatepiece_2966(4537, 865), 3);
    add_object(create_objecttimegatepiece_2966(4545, 865), 3);
    add_object(create_objecttimegatepiece_2966(4553, 865), 3);
    add_object(create_objecttimegatepiece_2966(4561, 865), 3);
    add_object(create_objecttimegatepiece_2966(4569, 865), 3);
    add_object(create_objecttimegatepiece_2966(4577, 865), 3);
    add_object(create_monitorrings_407(2960, 1416), 3);
    add_object(create_objectcrystal_279(301, 1378), 3);
    add_object(create_objectcrystal_279(333, 1410), 3);
    add_object(create_objectcrystal_279(365, 1442), 3);
    add_object(create_objectcrystal_279(397, 1474), 3);
    add_object(create_objectcrystal_279(429, 1506), 3);
    add_object(create_objectcrystal_279(581, 1338), 3);
    add_object(create_objectcrystal_279(565, 1322), 3);
    add_object(create_objectcrystal_279(597, 1322), 3);
    add_object(create_objectcrystal_279(597, 1298), 3);
    add_object(create_objectcrystal_279(565, 1298), 3);
    add_object(create_objectcrystal_279(581, 1282), 3);
    add_object(create_bossholodragonclaw_3068(5248, 2224), 3);
    add_object(create_bossholodragonclaw_3068(5312, 2224), 3);
    add_object(create_bossholodragonclaw_3068(5376, 2224), 3);
    add_object(create_objecttimegate_2965(5361, 1584), 3);
    add_object(create_objecttimegatepiece_2966(5385, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5393, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5401, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5409, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5417, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5425, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5433, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5441, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5449, 1585), 3);
    add_object(create_objecttimegatepiece_2966(5457, 1585), 3);
    add_object(create_objecttimegate_2965(11081, 1584), 3);
    add_object(create_objecttimegatepiece_2966(11105, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11113, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11121, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11129, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11137, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11145, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11153, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11161, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11169, 1585), 3);
    add_object(create_objecttimegatepiece_2966(11177, 1585), 3);
    add_object(create_objecttimegate_2965(6513, 1600), 3);
    add_object(create_objecttimegatepiece_2966(6537, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6545, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6553, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6561, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6569, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6577, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6585, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6593, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6601, 1601), 3);
    add_object(create_objecttimegatepiece_2966(6609, 1601), 3);
    add_object(create_objecttimegate_2965(7473, 1600), 3);
    add_object(create_objecttimegatepiece_2966(7497, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7505, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7513, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7521, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7529, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7537, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7545, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7553, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7561, 1601), 3);
    add_object(create_objecttimegatepiece_2966(7569, 1601), 3);
    add_object(create_objecttimegate_2965(8817, 1600), 3);
    add_object(create_objecttimegatepiece_2966(8841, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8849, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8857, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8865, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8873, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8881, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8889, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8897, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8905, 1601), 3);
    add_object(create_objecttimegatepiece_2966(8913, 1601), 3);
    add_object(create_objecttimegate_2965(9969, 1600), 3);
    add_object(create_objecttimegatepiece_2966(9993, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10001, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10009, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10017, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10025, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10033, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10041, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10049, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10057, 1601), 3);
    add_object(create_objecttimegatepiece_2966(10065, 1601), 3);
    add_object(create_bossholodragonlaser_3045(5521, 2264), 3);
    add_object(create_bossholodragonhitspot1_3069(6320, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6400, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6480, 1616), 3);
    add_object(create_bossholodragonhitspot2_3070(6360, 1640), 3);
    add_object(create_bossholodragonhitspot3_3071(6400, 1688), 3);
    add_object(create_bossholodragonhitspot1_3069(6560, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6640, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6720, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6800, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6880, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(6960, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7040, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7120, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7200, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7280, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7360, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7440, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7520, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7600, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7680, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7760, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7840, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(7928, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8016, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8120, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8224, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8328, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8432, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8536, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8640, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8744, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8848, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(8952, 1616), 3);
    add_object(create_bossholodragonhitspot1_3069(9056, 1616), 3);
    add_object(create_bossholodragonhitspot2_3070(6440, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6520, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6600, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6680, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6760, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6840, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(6920, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7000, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7080, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7160, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7240, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7320, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7400, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7480, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7560, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7640, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7720, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7800, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7880, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(7968, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8064, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8168, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8272, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8376, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8480, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8584, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8688, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8792, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(8896, 1640), 3);
    add_object(create_bossholodragonhitspot2_3070(9000, 1640), 3);
    add_object(create_bossholodragonhitspot3_3071(6480, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6560, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6640, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6720, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6800, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6880, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(6960, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7040, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7120, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7200, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7280, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7360, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7440, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7520, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7600, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7680, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7760, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7840, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(7920, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8008, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8112, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8216, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8320, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8424, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8528, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8632, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8736, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8840, 1688), 3);
    add_object(create_bossholodragonhitspot3_3071(8944, 1688), 3);
    add_object(create_bossholodragoneye2_3072(5726, 2273), 3);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 3);
    add_object(create_npcpangu_3073(6072, 2277), 3);
    add_object(create_npchologram2_3074(6051, 2283), 3);
    add_object(create_npcpanguleftarm_3075(6105, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6115, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6125, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6135, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6145, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6155, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6165, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6175, 2274), 3);
    add_object(create_npcpanguleftarm_3075(6185, 2274), 3);
    add_object(create_npcpangurightarm_3076(6105, 2282), 3);
    add_object(create_npcpangurightarm_3076(6115, 2282), 3);
    add_object(create_npcpangurightarm_3076(6125, 2282), 3);
    add_object(create_npcpangurightarm_3076(6135, 2282), 3);
    add_object(create_npcpangurightarm_3076(6145, 2282), 3);
    add_object(create_npcpangurightarm_3076(6155, 2282), 3);
    add_object(create_npcpangurightarm_3076(6165, 2282), 3);
    add_object(create_npcpangurightarm_3076(6175, 2282), 3);
    add_object(create_npcpangurightarm_3076(6185, 2282), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_plfadebrick1_3062(448, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4160, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4288, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4416, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4544, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4672, 1560), 4);
    add_background_object(create_plfadebrick1_3062(4032, 1592), 4);
    add_background_object(create_plcavebrick4_3023(4128, 1560), 4);
    add_background_object(create_plfadebrick1_3062(3264, 1592), 4);
    add_background_object(create_plfadebrick1_3062(3392, 1592), 4);
    add_background_object(create_plfadebrick1_3062(3520, 1592), 4);
    add_background_object(create_plfadebrick1_3062(3648, 1592), 4);
    add_background_object(create_plfadebrick1_3062(3776, 1592), 4);
    add_background_object(create_plfadebrick1_3062(3904, 1592), 4);
    add_object(create_effectwarning_1513(5404, 1760), 4);
    add_object(create_effectwarning_1513(5404, 1704), 4);
    add_object(create_effectwarning_1513(5404, 1648), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_2452(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(4448, 1591), 5);
    add_object(create_cameralimitbossleft_421(4136, 1448), 5);
    add_object(create_cameralimitbossright_422(4719, 1440), 5);
    add_object(create_cameralimitbosstop_423(4488, 136), 5);
    add_object(create_cameratriggerboss_424(536, 56), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_3077(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_dialogdata_3078(-132, 472), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_tally_running = false;
    loop_tally_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_voice_running = false;
    loop_voice_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_55, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_55, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_55, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_55, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_55, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_55, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_55, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_55, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_55, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_55, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_55, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_55, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_55, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_55, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_55, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_55, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_55, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_55, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_55, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_55, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_55, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_55, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_55, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_55, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_55, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_55, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_55, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_55, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_55, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_55, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_55, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_55, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_55, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_55, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_55, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_55, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_55, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_55, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_55, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_55, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_55, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_55, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_55, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_55, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_55, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_55, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_55, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_55, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_55, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_55, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_55, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_55, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_55, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_55, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1495_55 = loop_count;
    not_always_804_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_holodragon_pangu_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    once_condition_1854_55 = false;
    not_always_172_8 = loop_count;
    not_always_449_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1517_19 = loop_count;
    once_condition_1956_55 = false;
    not_always_150_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_holodragon_6_defeated_1 = true;
    not_always_101_0 = loop_count;
    not_always_1624_55 = loop_count;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1631_55 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1738_55 = loop_count;
    not_always_43_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    once_condition_1713_55 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1391_13 = loop_count;
    not_always_1832_16 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_1660_55 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1679_55 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1449_13 = loop_count;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    once_condition_1707_55 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    once_condition_1829_55 = false;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    once_condition_1708_55 = false;
    not_always_100_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_1746_55 = false;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1653_55 = loop_count;
    not_always_1421_13 = loop_count;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    not_always_1657_55 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_69_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_606_14 = loop_count;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    group_main_engine_level_specific_methods_big_door_1 = true;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    once_condition_1855_55 = false;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    once_condition_1841_55 = false;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_blips_1 = false;
    not_always_70_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_scene_pangu_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_235_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    once_condition_1955_55 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    group_main_engine_level_specific_methods_boss_arena_1 = false;
    not_always_1039_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_1674_52 = loop_count;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    once_condition_1742_55 = false;
    every_819_13 = 0.0f;
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1741_14 = loop_count;
    once_condition_65_13 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1493_55 = loop_count;
    not_always_1656_55 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_boss_defeated_1 = false;
    not_always_1483_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_1828_55 = false;
    once_condition_4_19 = false;
    once_condition_1709_55 = false;
    not_always_59_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_holodragon_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_12373()
{
    // event 1419_56
    {
        if (!(group_main_engine_1)) goto event_1419_56_end;
        qualifier_33.clear_selection();
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!qualifier_33.has_selection()) goto event_1419_56_end;
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
    }
    event_1419_56_end: ;
}
void Frames::event_func_12374()
{
    // event 1420_56
    {
        if (!(group_main_engine_1)) goto event_1420_56_end;
        qualifier_33.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(qualifier_33, qualifier_7)) goto event_1420_56_end;
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
    }
    event_1420_56_end: ;
}
void Frames::event_func_12375()
{
    // event 1421_56
    {
        if (!(group_main_engine_1)) goto event_1421_56_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1421_56_end;
        qualifier_33.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_33, playerreflect_447_instances)) goto event_1421_56_end;
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1421_56_end: ;
}
void Frames::event_func_12376()
{
    // event 1422_56
    {
        if (!(group_main_engine_1)) goto event_1422_56_end;
        qualifier_33.clear_selection();
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!qualifier_33.has_selection()) goto event_1422_56_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(qualifier_33, playerreflect_447_instances)) goto event_1422_56_end;
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
    }
    event_1422_56_end: ;
}
void Frames::event_func_12377()
{
    // event 1424_56
    {
        if (!(group_main_engine_1)) goto event_1424_56_end;
        qualifier_33.clear_selection();
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!qualifier_33.has_selection()) goto event_1424_56_end;
        if (!check_not_overlap(qualifier_33, playerreflect_447_instances)) goto event_1424_56_end;
        if (!check_not_overlap(qualifier_33, qualifier_7)) goto event_1424_56_end;
        for (QualifierIterator it(qualifier_33); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
    }
    event_1424_56_end: ;
}
void Frames::loop_l_56()
{
    event_func_12373();
    event_func_12374();
    event_func_12375();
    event_func_12376();
    event_func_12376();
    event_func_12377();
}
void Frames::event_func_12378()
{
    // event 1441_56
    {
        if (!(group_main_engine_1)) goto event_1441_56_end;
        enemytotematic_3103_instances.clear_selection();
        for (ObjectIterator it(enemytotematic_3103_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemytotematic_3103_instances.has_selection()) goto event_1441_56_end;
        FrameObject * single_instance_1441_56_0; single_instance_1441_56_0 = pick_random(enemytotematic_3103_instances);
        if (single_instance_1441_56_0 == NULL) goto event_1441_56_end;
        FrameObject * single_instance_1441_56_1; single_instance_1441_56_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1441_56_0)->x + 0, ((Active*)single_instance_1441_56_0)->y + 0), ((Active*)single_instance_1441_56_0)->layer);
            if (single_instance_1441_56_1 == NULL)
                single_instance_1441_56_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1441_56_1))->get_movement()->set_speed(100);
        ((Active*)((Active*)single_instance_1441_56_1))->force_frame(130+((Active*)single_instance_1441_56_0)->alterables->values.get(0)*-1);
        ((Active*)((Active*)single_instance_1441_56_0))->alterables->values.add(0, 1);
    }
    event_1441_56_end: ;
}
void Frames::loop_spawndebris_56()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_12378();
}
void Frames::event_func_12379()
{
    // event 1676_56
    {
        if (!(group_main_engine_1)) goto event_1676_56_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage7_ogg_210, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1676_56_end: ;
}
void Frames::loop_play_music_5_56()
{
    event_func_12379();
}
void Frames::loop_wrapper_sound_hurt1_56(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_56(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_56(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_56(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_56(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_56(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_56(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_56(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_56(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_56(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_56(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_56(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_56(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_56(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_56(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_56(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_56(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_56(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_56(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_56(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_56(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_56(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_56(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_56();
}
