#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::col_9_36()
{
    event_func_8602();
}
void Frames::event_func_8603()
{
    // event 1754_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1754_36_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(7)) > (20))) goto event_1754_36_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1754_36_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -2+randrange(5));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -3);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 15);
        {
            ((Active*)col_instance_2)->set_shader(Render::INVERT);
        }
    }
    event_1754_36_end: ;
}
void Frames::col_10_36()
{
    event_func_8603();
}
void Frames::event_func_8604()
{
    // event 1914_36
    {
        if (!(group_main_engine_1)) goto event_1914_36_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1914_36_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1914_36_0; single_instance_1914_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_2)->x + -12, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1914_36_0 == NULL)
                single_instance_1914_36_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1914_36_0))->force_frame(9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1914_36_end: ;
}
void Frames::col_11_36()
{
    event_func_8604();
}
void Frames::event_func_8605()
{
    // event 1753_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1753_36_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1753_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1753_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->set_direction(get_direction_int(((Active*)col_instance_2)->x, ((Active*)col_instance_2)->y, ((Active*)get_instance(bosschopper_2216_instances))->x + 0, ((Active*)get_instance(bosschopper_2216_instances))->y + 0));
    }
    event_1753_36_end: ;
}
void Frames::col_13_36()
{
    event_func_8605();
}
void Frames::event_func_8606()
{
    // event 1904_36
    {
        if (!(group_main_engine_1)) goto event_1904_36_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(7)) > (10))) goto event_1904_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1904_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 6));
    }
    event_1904_36_end: ;
}
void Frames::col_15_36()
{
    event_func_8606();
}
void Frames::event_func_8607()
{
    // event 1540_36
    {
        if (!(group_main_engine_1)) goto event_1540_36_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(23, -4+randrange(9));
        ((Active*)((Active*)col_instance_1))->alterables->values.set(24, -2);
    }
    event_1540_36_end: ;
}
void Frames::col_16_36()
{
    event_func_8607();
}
void Frames::event_func_8608()
{
    // event 1537_36
    {
        if (!(group_main_engine_1)) goto event_1537_36_end;
        if (((Active*)col_instance_2)->is_near_border(-300)) goto event_1537_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1537_36_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(7)) == (2))) goto event_1537_36_end;
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1537_36_end: ;
}
void Frames::event_func_8609()
{
    // event 1538_36
    {
        if (!(group_main_engine_1)) goto event_1538_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1538_36_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(7)) == (2))) goto event_1538_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, ((Active*)col_instance_2)->alterables->values.get(5)*-0.3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(10, 0-((Active*)col_instance_2)->alterables->values.get(10));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(7, 1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(6, -4);
    }
    event_1538_36_end: ;
}
void Frames::event_func_8610()
{
    // event 1546_36
    {
        if (!(group_main_engine_1)) goto event_1546_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1546_36_end;
        FrameObject * single_instance_1546_36_0; single_instance_1546_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1546_36_0 == NULL)
                single_instance_1546_36_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1546_36_end: ;
}
void Frames::col_19_36()
{
    event_func_8608();
    event_func_8609();
    event_func_8610();
}
void Frames::event_func_8611()
{
    // event 1524_36
    {
        if (!(group_main_engine_1)) goto event_1524_36_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1524_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1524_36_end;
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.add(3, 180);
    }
    event_1524_36_end: ;
}
void Frames::col_20_36()
{
    event_func_8611();
}
void Frames::event_func_8612()
{
    // event 1539_36
    {
        if (!(group_main_engine_1)) goto event_1539_36_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.sub(0, 30);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(24, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(23, ((Active*)col_instance_2)->alterables->values.get(0));
    }
    event_1539_36_end: ;
}
void Frames::col_22_36()
{
    event_func_8612();
}
void Frames::event_func_8613()
{
    // event 1522_36
    {
        if (!(group_main_engine_1)) goto event_1522_36_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(3))) goto event_1522_36_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1522_36_0; single_instance_1522_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1522_36_0 == NULL)
                single_instance_1522_36_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 15);
        {
            ((Active*)col_instance_2)->set_shader(Render::INVERT);
        }
    }
    event_1522_36_end: ;
}
void Frames::col_25_36()
{
    event_func_8613();
}
void Frames::event_func_8614()
{
    // event 1571_36
    {
        if (!(group_main_engine_1)) goto event_1571_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(6))) goto event_1571_36_end;
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
    }
    event_1571_36_end: ;
}
void Frames::col_27_36()
{
    event_func_8614();
}
void Frames::event_func_8615()
{
    // event 1523_36
    {
        if (!(group_main_engine_1)) goto event_1523_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1523_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1523_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1523_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1523_36_end: ;
}
void Frames::event_func_8616()
{
    // event 1526_36
    {
        if (!(group_main_engine_1)) goto event_1526_36_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1526_36_0; single_instance_1526_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1526_36_0 == NULL)
                single_instance_1526_36_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1526_36_end: ;
}
void Frames::col_28_36()
{
    event_func_8615();
    event_func_8616();
}
void Frames::event_func_8617()
{
    // event 1572_36
    {
        if (!(group_main_engine_1)) goto event_1572_36_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1572_36_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1572_36_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0-((Active*)col_instance_2)->alterables->values.get(0));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, 0-((Active*)col_instance_2)->alterables->values.get(1));
    }
    event_1572_36_end: ;
}
void Frames::col_29_36()
{
    event_func_8617();
}
void Frames::event_func_8618()
{
    // event 1570_36
    {
        if (!(group_main_engine_1)) goto event_1570_36_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1570_36_end;
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
    }
    event_1570_36_end: ;
}
void Frames::col_31_36()
{
    event_func_8618();
}
void Frames::test_collisions_36()
{
    test_collisions(enemyfragbomb_2049_instances, enemyhoppermkii_2200_instances, 1, 1, (EventFunction)&Frames::col_0_36);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemybullet_2098_instances, 1, 1, (EventFunction)&Frames::col_3_36);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(enemyrotorbladespikes_2204_instances, enemymagmeon_2208_instances, 1, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(player_389_instances, gimmickcannonbullet_2050_instances, 1, 1, (EventFunction)&Frames::col_9_36);
    test_collisions(bossmissile_2023_instances, bosschopper_2216_instances, 1, 1, (EventFunction)&Frames::col_10_36);
    test_collisions(playerreflect_447_instances, minibosstreddbomb_1015_instances, 8, 1, (EventFunction)&Frames::col_11_36);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, bossmissile_2023_instances, 16, 2, (EventFunction)&Frames::col_13_36);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(player_389_instances, bossmissile_2023_instances, 2, 4, (EventFunction)&Frames::col_15_36);
    test_collisions(hazardspikesup_558_instances, enemyrotorbladespikes_2204_instances, 1, 2, (EventFunction)&Frames::col_16_36);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_7, enemybullet_2098_instances, 8388608, 2, (EventFunction)&Frames::col_8_20);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 1, 1, (EventFunction)&Frames::col_19_36);
    test_collisions(shieldearth_314_instances, enemybullet_2098_instances, 1, 4, (EventFunction)&Frames::col_20_36);
    test_collisions(qualifier_19, minibossflame_1199_instances, 1073741824, 1, (EventFunction)&Frames::col_17_25);
    test_collisions(enemyhoppermkii_2200_instances, enemyrotorbladespikes_2204_instances, 2, 4, (EventFunction)&Frames::col_22_36);
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 4194304, 2, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(enemybullet_2098_instances, enemyaxleturret_2201_instances, 8, 1, (EventFunction)&Frames::col_25_36);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 4, (EventFunction)&Frames::col_8_13);
    test_collisions(player_389_instances, enemyfragbomb_2049_instances, 8, 2, (EventFunction)&Frames::col_27_36);
    test_collisions(playercharactersensor_383_instances, enemybullet_2098_instances, 1, 16, (EventFunction)&Frames::col_28_36);
    test_collisions(playerreflect_447_instances, enemyfragbomb_2049_instances, 32, 4, (EventFunction)&Frames::col_29_36);
    ObjectList::iterator it1, it2;
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
    for (it1 = enemyfragbomb_2049_instances.begin(); it1 != enemyfragbomb_2049_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_36();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = breakablespike2_2123_instances.begin(); it1 != breakablespike2_2123_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_30_26();
    }
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = enemybullet_2098_instances.begin(); it1 != enemybullet_2098_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
    }
    for (it1 = minibosstreddbomb_1015_instances.begin(); it1 != minibosstreddbomb_1015_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_22();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
}
void Frames::event_func_8619()
{
    // event 1906_36
    {
        if (!(group_main_engine_1)) goto event_1906_36_end;
        if (!(((Active*)foreach_instance_m)->alterables->flags.is_on(6))) goto event_1906_36_end;
        if (!((((Active*)foreach_instance_m)->alterables->values.get(4)) < (45))) goto event_1906_36_end;
        FrameObject * single_instance_1906_36_0; single_instance_1906_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)foreach_instance_m)->x + 0, ((Active*)foreach_instance_m)->y + 0), ((Active*)foreach_instance_m)->layer);
            if (single_instance_1906_36_0 == NULL)
                single_instance_1906_36_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1906_36_0))->set_x(((Active*)foreach_instance_m)->get_x()+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*132)*(8+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_1906_36_0))->set_y(((Active*)foreach_instance_m)->get_y()-sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_1906_36_0))->force_speed(30+cos_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*143)*10);
        ((Active*)((Active*)foreach_instance_m))->alterables->values.add(4, 1);
        ((Active*)((Active*)foreach_instance_m))->set_visible(false);
        ((Active*)((Active*)foreach_instance_m))->force_animation(8);
        ((Active*)((Active*)foreach_instance_m))->get_movement()->stop(false);
    }
    event_1906_36_end: ;
}
void Frames::foreach_m_36()
{
    event_func_8619();
}
void Frames::event_func_8620()
{
    // event 1440_36
    {
        if (!(group_main_engine_1)) goto event_1440_36_end;
        if (((Active*)foreach_instance_flame)->is_near_border(-100)) goto event_1440_36_end;
        if (!(((Active*)foreach_instance_flame)->alterables->flags.is_on(1))) goto event_1440_36_end;
        FrameObject * single_instance_1440_36_0; single_instance_1440_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossflame_1199(((Active*)foreach_instance_flame)->get_action_x() - ((Active*)foreach_instance_flame)->layer->off_x + 0, ((Active*)foreach_instance_flame)->get_action_y() - ((Active*)foreach_instance_flame)->layer->off_y + 0), ((Active*)foreach_instance_flame)->layer);
            if (single_instance_1440_36_0 == NULL)
                single_instance_1440_36_0 = new_obj;
        }
        ((Active*)single_instance_1440_36_0)->move_back(((Active*)foreach_instance_flame));
        ((Active*)((Active*)single_instance_1440_36_0))->alterables->values.set(0, ((Active*)single_instance_1440_36_0)->get_x());
        ((Active*)((Active*)single_instance_1440_36_0))->alterables->values.set(1, ((Active*)single_instance_1440_36_0)->get_y());
        ((Active*)((Active*)single_instance_1440_36_0))->alterables->values.set(2, cos_deg(((Active*)foreach_instance_flame)->alterables->values.get(0))*6);
        ((Active*)((Active*)single_instance_1440_36_0))->alterables->values.set(3, sin_deg(((Active*)foreach_instance_flame)->alterables->values.get(0))*-6);
    }
    event_1440_36_end: ;
}
void Frames::foreach_flame_36()
{
    event_func_8620();
}
void Frames::event_func_8621()
{
    // event 535_36
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_535_36_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_535_36_end;
        FrameObject * single_instance_535_36_0; single_instance_535_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_535_36_0 == NULL)
                    single_instance_535_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_535_36_end: ;
}
void Frames::event_func_8622()
{
    // event 552_36
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_36_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_552_36_end;
        FrameObject * single_instance_552_36_0; single_instance_552_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_552_36_0 == NULL)
                    single_instance_552_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_552_36_end: ;
}
void Frames::event_func_8623()
{
    // event 686_36
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_686_36_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_686_36_end;
        FrameObject * single_instance_686_36_0; single_instance_686_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_686_36_0 == NULL)
                    single_instance_686_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_686_36_end: ;
}
void Frames::event_func_8624()
{
    // event 1394_36
    {
        if (!(group_main_engine_1)) goto event_1394_36_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1394_36_end;
        if (not_always_1394_36 > loop_count) {
            not_always_1394_36 = loop_count + 2;
            goto event_1394_36_end;
        }
        not_always_1394_36 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1394_36_end: ;
}
void Frames::event_func_8625()
{
    // event 1396_36
    {
        if (!(group_main_engine_1)) goto event_1396_36_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1396_36_end;
        if (not_always_1396_36 > loop_count) {
            not_always_1396_36 = loop_count + 2;
            goto event_1396_36_end;
        }
        not_always_1396_36 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1396_36_end: ;
}
void Frames::event_func_8626()
{
    // event 1418_36
    {
        if (!(group_main_engine_1)) goto event_1418_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1418_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-4, ((Active*)*it)->alterables->values.get(1)));
        }
    }
    event_1418_36_end: ;
}
void Frames::event_func_8627()
{
    // event 1419_36
    {
        if (!(group_main_engine_1)) goto event_1419_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1419_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, ((Active*)*it)->alterables->values.get(1)));
        }
    }
    event_1419_36_end: ;
}
void Frames::event_func_8628()
{
    // event 1420_36
    {
        if (!(group_main_engine_1)) goto event_1420_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1420_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1420_36_end: ;
}
void Frames::event_func_8629()
{
    // event 1421_36
    {
        if (!(group_main_engine_1)) goto event_1421_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (1))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1421_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1421_36_end: ;
}
void Frames::event_func_8630()
{
    // event 1422_36
    {
        if (!(group_main_engine_1)) goto event_1422_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (10))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1422_36_end;
        FrameObject * single_instance_1422_36_0; single_instance_1422_36_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1422_36_0 == NULL) goto event_1422_36_end;
        ((Active*)((Active*)single_instance_1422_36_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1422_36_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1422_36_0))->force_animation(7);
        FrameObject * single_instance_1422_36_1; single_instance_1422_36_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1422_36_0)->get_action_x() - ((Active*)single_instance_1422_36_0)->layer->off_x + 0, ((Active*)single_instance_1422_36_0)->get_action_y() - ((Active*)single_instance_1422_36_0)->layer->off_y + 0), ((Active*)single_instance_1422_36_0)->layer);
            if (single_instance_1422_36_1 == NULL)
                single_instance_1422_36_1 = new_obj;
        }
        ((Active*)single_instance_1422_36_1)->move_back(((Active*)single_instance_1422_36_0));
        ((Active*)((Active*)single_instance_1422_36_1))->alterables->values.set(3, ((Active*)single_instance_1422_36_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1422_36_1))->alterables->values.set(0, ((Active*)single_instance_1422_36_1)->get_x());
        ((Active*)((Active*)single_instance_1422_36_1))->alterables->values.set(1, ((Active*)single_instance_1422_36_1)->get_y());
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1422_36_end: ;
}
void Frames::event_func_8631()
{
    // event 1423_36
    {
        if (!(group_main_engine_1)) goto event_1423_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1423_36_end;
        FrameObject * single_instance_1423_36_0; single_instance_1423_36_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1423_36_0 == NULL) goto event_1423_36_end;
        ((Active*)((Active*)single_instance_1423_36_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1423_36_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1423_36_0))->force_animation(7);
        FrameObject * single_instance_1423_36_1; single_instance_1423_36_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1423_36_0)->get_action_x() - ((Active*)single_instance_1423_36_0)->layer->off_x + 0, ((Active*)single_instance_1423_36_0)->get_action_y() - ((Active*)single_instance_1423_36_0)->layer->off_y + 0), ((Active*)single_instance_1423_36_0)->layer);
            if (single_instance_1423_36_1 == NULL)
                single_instance_1423_36_1 = new_obj;
        }
        ((Active*)single_instance_1423_36_1)->move_back(((Active*)single_instance_1423_36_0));
        ((Active*)((Active*)single_instance_1423_36_1))->alterables->values.set(3, ((Active*)single_instance_1423_36_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1423_36_1))->alterables->values.set(0, ((Active*)single_instance_1423_36_1)->get_x());
        ((Active*)((Active*)single_instance_1423_36_1))->alterables->values.set(1, ((Active*)single_instance_1423_36_1)->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1423_36_end: ;
}
void Frames::event_func_8632()
{
    // event 1424_36
    {
        if (!(group_main_engine_1)) goto event_1424_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (50))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1424_36_end;
        FrameObject * single_instance_1424_36_0; single_instance_1424_36_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1424_36_0 == NULL) goto event_1424_36_end;
        ((Active*)((Active*)single_instance_1424_36_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1424_36_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1424_36_0))->force_animation(7);
        FrameObject * single_instance_1424_36_1; single_instance_1424_36_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1424_36_0)->get_action_x() - ((Active*)single_instance_1424_36_0)->layer->off_x + 0, ((Active*)single_instance_1424_36_0)->get_action_y() - ((Active*)single_instance_1424_36_0)->layer->off_y + 0), ((Active*)single_instance_1424_36_0)->layer);
            if (single_instance_1424_36_1 == NULL)
                single_instance_1424_36_1 = new_obj;
        }
        ((Active*)single_instance_1424_36_1)->move_back(((Active*)single_instance_1424_36_0));
        ((Active*)((Active*)single_instance_1424_36_1))->alterables->values.set(3, ((Active*)single_instance_1424_36_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1424_36_1))->alterables->values.set(0, ((Active*)single_instance_1424_36_1)->get_x());
        ((Active*)((Active*)single_instance_1424_36_1))->alterables->values.set(1, ((Active*)single_instance_1424_36_1)->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1424_36_end: ;
}
void Frames::event_func_8633()
{
    // event 1425_36
    {
        if (!(group_main_engine_1)) goto event_1425_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (120))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1425_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+20)%math_helper%50);
            ((Active*)*it)->alterables->values.set(2, randrange(40));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1425_36_end: ;
}
void Frames::event_func_8634()
{
    // event 1426_36
    {
        if (!(group_main_engine_1)) goto event_1426_36_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1426_36_end;
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
        ((Active*)get_instance(playerassist_2028_instances))->alterables->values.add(8, 1);
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 5);
        }
    }
    event_1426_36_end: ;
}
void Frames::event_func_8635()
{
    // event 1427_36
    {
        if (!(group_main_engine_1)) goto event_1427_36_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1427_36_end;
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-40+randrange(81));
        }
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1427_36_end: ;
}
void Frames::event_func_8636()
{
    // event 1428_36
    {
        if (!(group_main_engine_1)) goto event_1428_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1428_36_end;
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1428_36_end: ;
}
void Frames::event_func_8637()
{
    // event 1429_36
    {
        if (!(group_main_engine_1)) goto event_1429_36_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1429_36_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        FrameObject * single_instance_1429_36_0; single_instance_1429_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickcannonbase_2198_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1429_36_0 == NULL)
                    single_instance_1429_36_0 = new_obj;
            }
        }
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1429_36_end: ;
}
void Frames::event_func_8638()
{
    // event 1431_36
    {
        if (!(group_main_engine_1)) goto event_1431_36_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (45))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1431_36_end;
        FrameObject * single_instance_1431_36_0; single_instance_1431_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickcannonbase_2198_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1431_36_0 == NULL)
                    single_instance_1431_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1431_36_0))->set_x(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->alterables->values.get(4)*132)*(8+sin_deg(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_1431_36_0))->set_y(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_1431_36_0))->force_speed(30+cos_deg(((Active*)get_single(gimmickcannonbase_2198_instances, default_active_instance))->alterables->values.get(4)*143)*10);
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1431_36_end: ;
}
void Frames::event_func_8639()
{
    // event 1432_36
    {
        if (!(group_main_engine_1)) goto event_1432_36_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        gimmickcannonbullet_2050_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbullet_2050_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.sub(1, sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickcannonbase_2198_instances, it.current_index));
            if (parent == NULL) goto pos_end_1432_36_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1432_36_0: ;
        }
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(gimmickcannonbase_2198_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1432_36_end: ;
}
void Frames::event_func_8640()
{
    // event 1434_36
    {
        if (!(group_main_engine_1)) goto event_1434_36_end;
        enemylimiter_350_instances.clear_selection();
        gimmickflamethrower_2196_instances.clear_selection();
        if (!check_overlap(enemylimiter_350_instances, gimmickflamethrower_2196_instances)) goto event_1434_36_end;
        FrameObject * single_instance_1434_36_0; single_instance_1434_36_0 = pick_random(enemylimiter_350_instances);
        if (single_instance_1434_36_0 == NULL) goto event_1434_36_end;
        ((Active*)((Active*)single_instance_1434_36_0))->destroy();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 90);
            ((Active*)*it)->alterables->values.sub(1, 90);
        }
    }
    event_1434_36_end: ;
}
void Frames::event_func_8641()
{
    // event 1435_36
    {
        if (!(group_main_engine_1)) goto event_1435_36_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(2)-sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(4))%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1435_36_end: ;
}
void Frames::event_func_8642()
{
    // event 1436_36
    bool or_result_1436_36 = false;
    bool or_temp_result_1436_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1436_36_0_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (210))) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto or_event_1436_36_0_end;
        or_result_1436_36 = true;
        or_temp_result_1436_36_0 = true;
    }
    or_event_1436_36_0_end: ;
    gimmickflamethrower_2196_instances.clear_saved_selection();
    if (or_temp_result_1436_36_0) {
        gimmickflamethrower_2196_instances.save_selection();
    }
    // event 1436_36
    bool or_temp_result_1436_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1436_36_1_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (330))) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto or_event_1436_36_1_end;
        or_result_1436_36 = true;
        or_temp_result_1436_36_1 = true;
    }
    or_event_1436_36_1_end: ;
    if (or_temp_result_1436_36_1) {
        gimmickflamethrower_2196_instances.save_selection();
    }
    // event 1436_36
    bool or_temp_result_1436_36_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1436_36_2_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (30))) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto or_event_1436_36_2_end;
        or_result_1436_36 = true;
        or_temp_result_1436_36_2 = true;
        or_event_1436_36_2_end: ;
        if (or_temp_result_1436_36_2) {
            gimmickflamethrower_2196_instances.save_selection();
        }
        if (!or_result_1436_36) goto or_final_or_event_1436_36_2_end;
        gimmickflamethrower_2196_instances.empty_selection();
        if (or_temp_result_1436_36_0 || or_temp_result_1436_36_1 || or_temp_result_1436_36_2) {
            gimmickflamethrower_2196_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1436_36_2_end: ;
}
void Frames::event_func_8643()
{
    // event 1437_36
    {
        if (!(group_main_engine_1)) goto event_1437_36_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto event_1437_36_end;
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_COMMON_FLAMETHROWER2_265, -1, 1);
    }
    event_1437_36_end: ;
}
void Frames::event_func_8644()
{
    // event 1438_36
    {
        if (!(group_main_engine_1)) goto event_1438_36_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto event_1438_36_end;
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1438_36_end: ;
}
void Frames::event_func_8645()
{
    // event 1439_36
    {
        if (!(group_main_engine_1)) goto event_1439_36_end;
        gimmickflamethrower_2196_instances.clear_selection();
        for (ObjectIterator it(gimmickflamethrower_2196_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!gimmickflamethrower_2196_instances.has_selection()) goto event_1439_36_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1439_36_end;
        {
            SavedSelection extra_gimmickflamethrower_2196_instances(gimmickflamethrower_2196_instances);
            for (SavedIterator selected(extra_gimmickflamethrower_2196_instances); !selected.end(); ++selected) {
                foreach_instance_flame = ((Active*)*selected);
                foreach_flame_36();
            }
        }
    }
    event_1439_36_end: ;
}
void Frames::event_func_8646()
{
    // event 1442_36
    {
        if (!(group_main_engine_1)) goto event_1442_36_end;
        minibossflame_1199_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, playercharactersensor_383_instances)) goto event_1442_36_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1442_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1442_36_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (8))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_1442_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1442_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1442_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1442_36_end: ;
}
void Frames::event_func_8647()
{
    // event 1445_36
    {
        if (!(group_main_engine_1)) goto event_1445_36_end;
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%180);
        }
        hazardfiredown_2227_instances.clear_selection();
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%180);
        }
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%180);
        }
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%180);
        }
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1445_36_end: ;
}
void Frames::event_func_8648()
{
    // event 1446_36
    {
        if (!(group_main_engine_1)) goto event_1446_36_end;
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!hazardfireup_2226_instances.has_selection()) goto event_1446_36_end;
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1446_36_end: ;
}
void Frames::event_func_8649()
{
    // event 1447_36
    {
        if (!(group_main_engine_1)) goto event_1447_36_end;
        hazardfiredown_2227_instances.clear_selection();
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!hazardfiredown_2227_instances.has_selection()) goto event_1447_36_end;
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1447_36_end: ;
}
void Frames::event_func_8650()
{
    // event 1448_36
    {
        if (!(group_main_engine_1)) goto event_1448_36_end;
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!hazardfireright_2228_instances.has_selection()) goto event_1448_36_end;
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1448_36_end: ;
}
void Frames::event_func_8651()
{
    // event 1449_36
    {
        if (!(group_main_engine_1)) goto event_1449_36_end;
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!hazardfireleft_2229_instances.has_selection()) goto event_1449_36_end;
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1449_36_end: ;
}
void Frames::event_func_8652()
{
    // event 1450_36
    {
        if (!(group_main_engine_1)) goto event_1450_36_end;
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireup_2226_instances.has_selection()) goto event_1450_36_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, player_389_instances)) goto event_1450_36_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(hazardfireup_2226_instances, playersensortopbig_395_instances)) goto event_1450_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1450_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1450_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1450_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1450_36_end: ;
}
void Frames::event_func_8653()
{
    // event 1451_36
    {
        if (!(group_main_engine_1)) goto event_1451_36_end;
        hazardfiredown_2227_instances.clear_selection();
        for (ObjectIterator it(hazardfiredown_2227_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfiredown_2227_instances.has_selection()) goto event_1451_36_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfiredown_2227_instances, player_389_instances)) goto event_1451_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1451_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1451_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1451_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1451_36_end: ;
}
void Frames::event_func_8654()
{
    // event 1452_36
    {
        if (!(group_main_engine_1)) goto event_1452_36_end;
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireright_2228_instances.has_selection()) goto event_1452_36_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireright_2228_instances, player_389_instances)) goto event_1452_36_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(hazardfireright_2228_instances, playersensorrightbig_393_instances)) goto event_1452_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1452_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1452_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1452_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1452_36_end: ;
}
void Frames::event_func_8655()
{
    // event 1453_36
    {
        if (!(group_main_engine_1)) goto event_1453_36_end;
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireleft_2229_instances.has_selection()) goto event_1453_36_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireleft_2229_instances, player_389_instances)) goto event_1453_36_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_overlap(hazardfireleft_2229_instances, playersensorleftbig_391_instances)) goto event_1453_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1453_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1453_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1453_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1453_36_end: ;
}
void Frames::event_func_8656()
{
    // event 1461_36
    {
        if (!(group_main_engine_1)) goto event_1461_36_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (24))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1461_36_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1461_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1461_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) < (30))) goto event_1461_36_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(switchplatform_2100_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1461_36_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
            ((Active*)*it)->alterables->values.add(2, 2);
        }
    }
    event_1461_36_end: ;
}
void Frames::event_func_8657()
{
    // event 1462_36
    {
        if (!(group_main_engine_1)) goto event_1462_36_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (24))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1462_36_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1462_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1462_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) > (330))) goto event_1462_36_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(switchplatform_2100_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1462_36_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
            ((Active*)*it)->alterables->values.add(2, 2);
        }
    }
    event_1462_36_end: ;
}
void Frames::event_func_8658()
{
    // event 1463_36
    {
        if (!(group_main_engine_1)) goto event_1463_36_end;
        switchplatform_2100_instances.clear_selection();
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (24))) { it.deselect(); continue; }
        }
        if (!switchplatform_2100_instances.has_selection()) goto event_1463_36_end;
        for (ObjectIterator it(switchplatform_2100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1463_36_end: ;
}
void Frames::event_func_8659()
{
    // event 1465_36
    {
        if (!(group_main_engine_1)) goto event_1465_36_end;
        levelsbplatform3_2197_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1465_36_end: ;
}
void Frames::event_func_8660()
{
    // event 1466_36
    {
        if (!(group_main_engine_1)) goto event_1466_36_end;
        levelsbplatform3_2197_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()+8))) { it.deselect(); continue; }
        }
        if (!levelsbplatform3_2197_instances.has_selection()) goto event_1466_36_end;
        for (ObjectIterator it(levelsbplatform3_2197_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1466_36_end: ;
}
void Frames::event_func_8661()
{
    // event 1468_36
    {
        if (!(group_main_engine_1)) goto event_1468_36_end;
        levelfanblade_2133_instances.clear_selection();
        for (ObjectIterator it(levelfanblade_2133_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+3)%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1468_36_end: ;
}
void Frames::event_func_8662()
{
    // event 1469_36
    {
        if (!(group_main_engine_1)) goto event_1469_36_end;
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
        }
        if (!gimmickfan_2220_instances.has_selection()) goto event_1469_36_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1469_36_end;
        FrameObject * single_instance_1469_36_0; single_instance_1469_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickfan_2220_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfandebris_2125(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1469_36_0 == NULL)
                    single_instance_1469_36_0 = new_obj;
            }
        }
    }
    event_1469_36_end: ;
}
void Frames::event_func_8663()
{
    // event 1470_36
    {
        if (!(group_main_engine_1)) goto event_1470_36_end;
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickfandebris_2125_instances.has_selection()) goto event_1470_36_end;
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->get_movement()->set_speed(90+randrange(40));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-60+randrange(121));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x_scale((50+randrange(51))*0.01);
            ((Active*)*it)->set_y_scale(2);
        }
    }
    event_1470_36_end: ;
}
void Frames::event_func_8664()
{
    // event 1471_36
    {
        if (!(group_main_engine_1)) goto event_1471_36_end;
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)-400))) { it.deselect(); continue; }
        }
        if (!gimmickfandebris_2125_instances.has_selection()) goto event_1471_36_end;
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1471_36_end: ;
}
void Frames::event_func_8665()
{
    // event 1472_36
    {
        if (!(group_main_engine_1)) goto event_1472_36_end;
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+400))) { it.deselect(); continue; }
        }
        if (!gimmickfan_2220_instances.has_selection()) goto event_1472_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1472_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (1))) goto event_1472_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (24))) goto event_1472_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
    }
    event_1472_36_end: ;
}
void Frames::event_func_8666()
{
    // event 1473_36
    {
        if (!(group_main_engine_1)) goto event_1473_36_end;
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+400))) { it.deselect(); continue; }
        }
        if (!gimmickfan_2220_instances.has_selection()) goto event_1473_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1473_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-0.2);
    }
    event_1473_36_end: ;
}
void Frames::event_func_8667()
{
    // event 1474_36
    {
        if (!(group_main_engine_1)) goto event_1474_36_end;
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+400))) { it.deselect(); continue; }
        }
        if (!gimmickfan_2220_instances.has_selection()) goto event_1474_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1474_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1474_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-0.1);
    }
    event_1474_36_end: ;
}
void Frames::event_func_8668()
{
    // event 1475_36
    {
        if (!(group_main_engine_1)) goto event_1475_36_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1475_36_end: ;
}
void Frames::event_func_8669()
{
    // event 1476_36
    {
        if (!(group_main_engine_1)) goto event_1476_36_end;
        monitoricon_331_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakablefloor1_1760_instances)) goto event_1476_36_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1476_36_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1476_36_end: ;
}
void Frames::event_func_8670()
{
    // event 1478_36
    {
        if (!(group_main_engine_1)) goto event_1478_36_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor1_1760_instances.has_selection()) goto event_1478_36_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece2_2124_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor1_1760_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece2_2124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor1_1760_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1478_36_end: ;
}
void Frames::event_func_8671()
{
    // event 1479_36
    {
        if (!(group_main_engine_1)) goto event_1479_36_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1479_36_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablefloorpiece2_2124_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablefloor2_1761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 8, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 24, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 40, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 56, parent->y + 12), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 8, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 24, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 40, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablefloorpiece2_2124(parent->x + 56, parent->y + 36), parent->layer);
                breakablefloorpiece2_2124_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablefloorpiece2_2124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4.0+randrange(8.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablefloor2_1761_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1479_36_end: ;
}
void Frames::event_func_8672()
{
    // event 1480_36
    {
        if (!(group_main_engine_1)) goto event_1480_36_end;
        breakablefloorpiece2_2124_instances.clear_selection();
        for (ObjectIterator it(breakablefloorpiece2_2124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1480_36_end: ;
}
void Frames::event_func_8673()
{
    // event 1481_36
    {
        if (!(group_main_engine_1)) goto event_1481_36_end;
        breakablefloorpiece2_2124_instances.clear_selection();
        for (ObjectIterator it(breakablefloorpiece2_2124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablefloorpiece2_2124_instances.has_selection()) goto event_1481_36_end;
        for (ObjectIterator it(breakablefloorpiece2_2124_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1481_36_end: ;
}
void Frames::event_func_8674()
{
    // event 1488_36
    {
        if (!(group_main_engine_1)) goto event_1488_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1488_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1488_36_end: ;
}
void Frames::event_func_8675()
{
    // event 1489_36
    {
        if (!(group_main_engine_1)) goto event_1489_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+200))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1489_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, -5);
        }
    }
    event_1489_36_end: ;
}
void Frames::event_func_8676()
{
    // event 1490_36
    {
        if (!(group_main_engine_1)) goto event_1490_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1490_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4)*cos_deg(((Active*)*it)->alterables->values.get(9)));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5)*cos_deg(((Active*)*it)->alterables->values.get(9)));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1490_36_end: ;
}
void Frames::event_func_8677()
{
    // event 1491_36
    {
        if (!(group_main_engine_1)) goto event_1491_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (-1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1491_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)*it)->alterables->values.get(5))*10);
        }
    }
    event_1491_36_end: ;
}
void Frames::event_func_8678()
{
    // event 1492_36
    {
        if (!(group_main_engine_1)) goto event_1492_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1492_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.1, 0));
        }
    }
    event_1492_36_end: ;
}
void Frames::event_func_8679()
{
    // event 1493_36
    {
        if (!(group_main_engine_1)) goto event_1493_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1493_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
    }
    event_1493_36_end: ;
}
void Frames::event_func_8680()
{
    // event 1494_36
    {
        if (!(group_main_engine_1)) goto event_1494_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1494_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_BIKE_DRIVEBY_127, -1, 1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(8)*4);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1494_36_end: ;
}
void Frames::event_func_8681()
{
    // event 1495_36
    {
        if (!(group_main_engine_1)) goto event_1495_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1495_36_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1495_36_end;
        FrameObject * single_instance_1495_36_0; single_instance_1495_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemydronelaser_2127(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1495_36_0 == NULL)
                    single_instance_1495_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1495_36_0))->move_back();
    }
    event_1495_36_end: ;
}
void Frames::event_func_8682()
{
    // event 1496_36
    {
        if (!(group_main_engine_1)) goto event_1496_36_end;
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(0))) { it.deselect(); continue; }
        }
        if (!enemydronelaser_2127_instances.has_selection()) goto event_1496_36_end;
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1496_36_end: ;
}
void Frames::event_func_8683()
{
    // event 1497_36
    {
        if (!(group_main_engine_1)) goto event_1497_36_end;
        enemydronelaser_2127_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemydronelaser_2127_instances, playercharactersensor_383_instances)) goto event_1497_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1497_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1497_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1497_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1497_36_end: ;
}
void Frames::event_func_8684()
{
    // event 1498_36
    {
        if (!(group_main_engine_1)) goto event_1498_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1498_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.1, 8));
        }
    }
    event_1498_36_end: ;
}
void Frames::event_func_8685()
{
    // event 1499_36
    {
        if (!(group_main_engine_1)) goto event_1499_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1499_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, -8));
        }
    }
    event_1499_36_end: ;
}
