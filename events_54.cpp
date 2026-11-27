#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::col_28_21()
{
    event_func_4517();
}
void Frames::test_collisions_21()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(playersensorleftbig_391_instances, breakablerock_951_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(shieldwater_318_instances, enemysporeprojectile_969_instances, 1, 1, (EventFunction)&Frames::col_2_21);
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewleft_941_instances, 1, 1, (EventFunction)&Frames::col_9_20);
    test_collisions(qualifier_8, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemysporeprojectile_969_instances, 536870912, 2, (EventFunction)&Frames::col_6_21);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 33554432, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(playersensorrightbig_393_instances, breakablerock_951_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_19, enemypellet_863_instances, 1073741824, 2, (EventFunction)&Frames::col_15_21);
    test_collisions(playercharactersensor_383_instances, enemysporeprojectile_969_instances, 2, 4, (EventFunction)&Frames::col_16_21);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewright_942_instances, 2, 1, (EventFunction)&Frames::col_2_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(shieldflamefront_316_instances, bossfireball_967_instances, 1, 1, (EventFunction)&Frames::col_19_21);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 4, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 2097152, 4, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
    }
    for (it1 = bossfireball_967_instances.begin(); it1 != bossfireball_967_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_21();
    }
    for (it1 = enemysporeprojectile_969_instances.begin(); it1 != enemysporeprojectile_969_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_21();
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
}
void Frames::event_func_4518()
{
    // event 503_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_503_21_end;
        if (!(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->flags.is_on(0))) goto event_503_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)) > (0.25))) goto event_503_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)) < (1.5))) goto event_503_21_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 46);
    }
    event_503_21_end: ;
}
void Frames::event_func_4519()
{
    // event 504_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_504_21_end;
        if (!(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->flags.is_on(0))) goto event_504_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)) > (0.25))) goto event_504_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)) < (1.5))) goto event_504_21_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 46);
    }
    event_504_21_end: ;
}
void Frames::event_func_4520()
{
    // event 505_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_505_21_end;
        if (!(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->flags.is_on(0))) goto event_505_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)) < (1))) goto event_505_21_end;
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.set(4, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(halfcorkscrewleft_941_instances))->get_x())/math_helper/((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(2)+(cos_deg(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)*180)*((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(5)*0.5)-(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(5)*0.5));
    }
    event_505_21_end: ;
}
void Frames::event_func_4521()
{
    // event 506_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_506_21_end;
        if (!(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->flags.is_on(0))) goto event_506_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)) >= (1))) goto event_506_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(0)) < (((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(1)+((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(3)))) goto event_506_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(2)-((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(5));
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.set(4, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(halfcorkscrewleft_941_instances))->get_x())/math_helper/(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(3)*2));
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(halfcorkscrewleft_941_instances))->get_x());
    }
    event_506_21_end: ;
}
void Frames::event_func_4522()
{
    // event 507_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_507_21_end;
        if (!(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->flags.is_on(0))) goto event_507_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)) >= (1))) goto event_507_21_end;
        if (!((((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(0)) >= (((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(1)+((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(3)))) goto event_507_21_end;
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.set(4, (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(halfcorkscrewleft_941_instances))->get_x()-((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(1))/math_helper/((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(2)+(cos_deg(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(4)*180)*((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(5)*0.5)-(((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.get(5)*0.5));
    }
    event_507_21_end: ;
}
void Frames::event_func_4523()
{
    // event 509_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_509_21_end;
        if (!(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->flags.is_on(0))) goto event_509_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)) < (1))) goto event_509_21_end;
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.set(4, (((Active*)get_instance(halfcorkscrewright_942_instances))->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23))/math_helper/((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(2)+(cos_deg(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)*180)*((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(5)*0.5)-(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(5)*0.5));
    }
    event_509_21_end: ;
}
void Frames::event_func_4524()
{
    // event 510_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_510_21_end;
        if (!(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->flags.is_on(0))) goto event_510_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)) >= (1))) goto event_510_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(0)) < (((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(1)+((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(3)))) goto event_510_21_end;
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.set(4, (((Active*)get_instance(halfcorkscrewright_942_instances))->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23))/math_helper/(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(3)*2));
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.set(0, ((Active*)get_instance(halfcorkscrewright_942_instances))->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(2)-((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(5));
    }
    event_510_21_end: ;
}
void Frames::event_func_4525()
{
    // event 511_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_511_21_end;
        if (!(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->flags.is_on(0))) goto event_511_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)) >= (1))) goto event_511_21_end;
        if (!((((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(0)) >= (((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(1)+((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(3)))) goto event_511_21_end;
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.set(4, (((Active*)get_instance(halfcorkscrewright_942_instances))->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(1))/math_helper/((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(2)+(cos_deg(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(4)*180)*((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(5)*0.5)-(((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.get(5)*0.5));
    }
    event_511_21_end: ;
}
void Frames::event_func_4526()
{
    // event 546_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_546_21_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_546_21_end;
        FrameObject * single_instance_546_21_0; single_instance_546_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_546_21_0 == NULL)
                    single_instance_546_21_0 = new_obj;
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
                loop_spawndebris_21();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_546_21_end: ;
}
void Frames::event_func_4527()
{
    // event 563_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_563_21_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_563_21_end;
        FrameObject * single_instance_563_21_0; single_instance_563_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_563_21_0 == NULL)
                    single_instance_563_21_0 = new_obj;
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
                loop_spawndebris_21();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_563_21_end: ;
}
void Frames::event_func_4528()
{
    // event 697_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_697_21_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_697_21_end;
        FrameObject * single_instance_697_21_0; single_instance_697_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_697_21_0 == NULL)
                    single_instance_697_21_0 = new_obj;
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
                loop_spawndebris_21();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_697_21_end: ;
}
void Frames::event_func_4529()
{
    // event 772_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_772_21_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_772_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_772_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4), 0));
        }
        FrameObject * single_instance_772_21_0; single_instance_772_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectjumppad_530_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_772_21_0 == NULL)
                    single_instance_772_21_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_go_91+number_to_string(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->flags.get(8)));
            if (dyn_it == (*loops).end()) goto dynamic_772_21_1_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_772_21_1_end: ;
    }
    event_772_21_end: ;
}
void Frames::event_func_4530()
{
    // event 773_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_773_21_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_773_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)+1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_773_21_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->get_action_y());
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_773_21_end: ;
}
void Frames::event_func_4531()
{
    // event 781_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_781_21_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_781_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_781_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_single(objectjumppad_530_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_single(objectjumppad_530_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_781_21_end: ;
}
void Frames::event_func_4532()
{
    // event 783_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_783_21_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_783_21_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_783_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_783_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, sin_deg(((Active*)get_single(objectjumppad_530_instances, default_active_instance))->alterables->values.get(1))*-8.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, cos_deg(((Active*)get_single(objectjumppad_530_instances, default_active_instance))->alterables->values.get(1))*-8.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        FrameObject * single_instance_783_21_0; single_instance_783_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectjumppad_530_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_783_21_0 == NULL)
                    single_instance_783_21_0 = new_obj;
            }
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_go_91+number_to_string(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->flags.get(8)));
            if (dyn_it == (*loops).end()) goto dynamic_783_21_1_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_783_21_1_end: ;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_783_21_end: ;
}
void Frames::event_func_4533()
{
    // event 786_21
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_786_21_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_786_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_786_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_786_21_end: ;
}
void Frames::event_func_4534()
{
    // event 1397_21
    {
        if (!(group_main_engine_1)) goto event_1397_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(1), 0);
        }
    }
    event_1397_21_end: ;
}
void Frames::event_func_4535()
{
    // event 1398_21
    {
        if (!(group_main_engine_1)) goto event_1398_21_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1398_21_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1398_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1398_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1398_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1398_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1398_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        FrameObject * single_instance_1398_21_0; single_instance_1398_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectjumppad_530_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1398_21_0 == NULL)
                    single_instance_1398_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1398_21_0))->set_scale(0.5);
    }
    event_1398_21_end: ;
}
void Frames::event_func_4536()
{
    // event 1400_21
    {
        if (!(group_main_engine_1)) goto event_1400_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1400_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1400_21_end: ;
}
void Frames::event_func_4537()
{
    // event 1401_21
    {
        if (!(group_main_engine_1)) goto event_1401_21_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1401_21_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1401_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1401_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1401_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1401_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1401_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1401_21_end: ;
}
void Frames::event_func_4538()
{
    // event 1402_21
    {
        if (!(group_main_engine_1)) goto event_1402_21_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1402_21_end;
        playersensorrightbig_393_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, objectjumppad_530_instances)) goto event_1402_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1402_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1402_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1402_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1402_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1402_21_end: ;
}
void Frames::event_func_4539()
{
    // event 1403_21
    {
        if (!(group_main_engine_1)) goto event_1403_21_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1403_21_end;
        playersensorleftbig_391_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, objectjumppad_530_instances)) goto event_1403_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1403_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1403_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1403_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1403_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1403_21_end: ;
}
void Frames::event_func_4540()
{
    // event 1404_21
    {
        if (!(group_main_engine_1)) goto event_1404_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1404_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1404_21_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1404_21_end: ;
}
void Frames::event_func_4541()
{
    // event 1405_21
    {
        if (!(group_main_engine_1)) goto event_1405_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1405_21_end;
        if (not_always_1405_21 > loop_count) {
            not_always_1405_21 = loop_count + 2;
            goto event_1405_21_end;
        }
        not_always_1405_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1405_21_end: ;
}
void Frames::event_func_4542()
{
    // event 1406_21
    {
        if (!(group_main_engine_1)) goto event_1406_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_21_end;
        if (not_always_1406_21 > loop_count) {
            not_always_1406_21 = loop_count + 2;
            goto event_1406_21_end;
        }
        not_always_1406_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1406_21_end: ;
}
void Frames::event_func_4543()
{
    // event 1407_21
    {
        if (!(group_main_engine_1)) goto event_1407_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_21_end;
        if (not_always_1407_21 > loop_count) {
            not_always_1407_21 = loop_count + 2;
            goto event_1407_21_end;
        }
        not_always_1407_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1407_21_end: ;
}
void Frames::event_func_4544()
{
    // event 1408_21
    {
        if (!(group_main_engine_1)) goto event_1408_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_21_end;
        if (not_always_1408_21 > loop_count) {
            not_always_1408_21 = loop_count + 2;
            goto event_1408_21_end;
        }
        not_always_1408_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1408_21_end: ;
}
void Frames::event_func_4545()
{
    // event 1409_21
    {
        if (!(group_main_engine_1)) goto event_1409_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1409_21_end;
        if (not_always_1409_21 > loop_count) {
            not_always_1409_21 = loop_count + 2;
            goto event_1409_21_end;
        }
        not_always_1409_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1409_21_end: ;
}
void Frames::event_func_4546()
{
    // event 1410_21
    {
        if (!(group_main_engine_1)) goto event_1410_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1410_21_end;
        if (not_always_1410_21 > loop_count) {
            not_always_1410_21 = loop_count + 2;
            goto event_1410_21_end;
        }
        not_always_1410_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1410_21_end: ;
}
void Frames::event_func_4547()
{
    // event 1411_21
    {
        if (!(group_main_engine_1)) goto event_1411_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1411_21_end;
        if (not_always_1411_21 > loop_count) {
            not_always_1411_21 = loop_count + 2;
            goto event_1411_21_end;
        }
        not_always_1411_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1411_21_end: ;
}
void Frames::event_func_4548()
{
    // event 1412_21
    {
        if (!(group_main_engine_1)) goto event_1412_21_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1412_21_end;
        if (not_always_1412_21 > loop_count) {
            not_always_1412_21 = loop_count + 2;
            goto event_1412_21_end;
        }
        not_always_1412_21 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1412_21_end: ;
}
void Frames::event_func_4549()
{
    // event 1464_21
    {
        if (!(group_main_engine_1)) goto event_1464_21_end;
        playersensorbottombig_397_instances.clear_selection();
        halfcorkscrewleft_941_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, halfcorkscrewleft_941_instances)) goto event_1464_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1464_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (3))) goto event_1464_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_instance(halfcorkscrewleft_941_instances))->get_x()))) goto event_1464_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1464_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (45))) goto event_1464_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 45);
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(halfcorkscrewleft_941_instances))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1464_21_end: ;
}
void Frames::event_func_4550()
{
    // event 1465_21
    {
        if (!(group_main_engine_1)) goto event_1465_21_end;
        playersensorbottombig_397_instances.clear_selection();
        halfcorkscrewright_942_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, halfcorkscrewright_942_instances)) goto event_1465_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1465_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (-3))) goto event_1465_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(halfcorkscrewright_942_instances))->get_x()))) goto event_1465_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1465_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (45))) goto event_1465_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 45);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(halfcorkscrewright_942_instances))->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1465_21_end: ;
}
void Frames::event_func_4551()
{
    // event 1477_21
    {
        if (!(group_main_engine_1)) goto event_1477_21_end;
        breakablerock2_1007_instances.clear_selection();
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablerock2_1007_instances.has_selection()) goto event_1477_21_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablerock2_1007_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + 10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 30, parent->y + 10), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + 30), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 30, parent->y + 30), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + 42), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 30, parent->y + 42), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 10, parent->y + 62), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablerockpiece_355(parent->x + 30, parent->y + 62), parent->layer);
                breakablerockpiece_355_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablerock2_1007_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablerock2_1007_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1477_21_end: ;
}
void Frames::event_func_4552()
{
    // event 1480_21
    {
        if (!(group_main_engine_1)) goto event_1480_21_end;
        levelgeyserplate_998_instances.clear_selection();
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1480_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) == (180))) goto event_1480_21_end;
        FrameObject * single_instance_1480_21_0; single_instance_1480_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelgeyserplate_998_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1480_21_0 == NULL)
                    single_instance_1480_21_0 = new_obj;
            }
        }
        media.play_id(SOUND_GEYSER_2_44, -1, 1);
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1480_21_end: ;
}
void Frames::event_func_4553()
{
    // event 1481_21
    {
        if (!(group_main_engine_1)) goto event_1481_21_end;
        levelgeyserplate_998_instances.clear_selection();
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1481_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1481_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1481_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (0))) goto event_1481_21_end;
        FrameObject * single_instance_1481_21_0; single_instance_1481_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelgeyserplate_998_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1481_21_0 == NULL)
                    single_instance_1481_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1481_21_0))->move_back();
        ((Active*)((Active*)single_instance_1481_21_0))->set_x(((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1481_21_0))->force_speed(10);
        ((Active*)((Active*)single_instance_1481_21_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1481_21_0))->set_scale((9+randrange(5))*0.1);
    }
    event_1481_21_end: ;
}
void Frames::event_func_4554()
{
    // event 1482_21
    {
        if (!(group_main_engine_1)) goto event_1482_21_end;
        levelgeyserplate_998_instances.clear_selection();
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1482_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1482_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1482_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1482_21_end;
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1482_21_end;
        FrameObject * single_instance_1482_21_0; single_instance_1482_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelgeyserplate_998_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1482_21_0 == NULL)
                    single_instance_1482_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1482_21_0))->move_back();
        ((Active*)((Active*)single_instance_1482_21_0))->set_x(((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1482_21_0))->force_speed(10);
        ((Active*)((Active*)single_instance_1482_21_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1482_21_0))->set_scale((9+randrange(5))*0.1);
    }
    event_1482_21_end: ;
}
void Frames::event_func_4555()
{
    // event 1483_21
    {
        if (!(group_main_engine_1)) goto event_1483_21_end;
        levelgeyserplate_998_instances.clear_selection();
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1483_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1483_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) < (270))) goto event_1483_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1483_21_end;
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!levelgeyserplate_998_instances.has_selection()) goto event_1483_21_end;
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_x(((Active*)get_single(levelgeyserplate_998_instances, it.current_index, default_active_instance))->get_x()-20+randrange(41));
            ((Active*)*it)->force_speed(10);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
        }
        FrameObject * single_instance_1483_21_0; single_instance_1483_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelgeyserplate_998_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + 10), parent->layer);
                if (single_instance_1483_21_0 == NULL)
                    single_instance_1483_21_0 = new_obj;
            }
        }
    }
    event_1483_21_end: ;
}
void Frames::event_func_4556()
{
    // event 1484_21
    {
        if (!(group_main_engine_1)) goto event_1484_21_end;
        effectsdust_305_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(effectsdust_305_instances, levelgeyserplate_998_instances)) goto event_1484_21_end;
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectsdust_305_instances.has_selection()) goto event_1484_21_end;
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_x(((Active*)get_single(levelgeyserplate_998_instances, it.current_index, default_active_instance))->get_x()-20+randrange(41));
            ((Active*)*it)->force_speed(10);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
        }
    }
    event_1484_21_end: ;
}
void Frames::event_func_4557()
{
    // event 1485_21
    {
        if (!(group_main_engine_1)) goto event_1485_21_end;
        mediumbubble_769_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(mediumbubble_769_instances, levelgeyserplate_998_instances)) goto event_1485_21_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1485_21_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelgeyserplate_998_instances, it.current_index, default_active_instance))->get_x()-20+randrange(41));
            ((Active*)*it)->set_scale((9+randrange(5))*0.1);
            ((Active*)*it)->alterables->values.set(3, (-10-randrange(11))*0.1);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1485_21_end: ;
}
void Frames::event_func_4558()
{
    // event 1486_21
    {
        if (!(group_main_engine_1)) goto event_1486_21_end;
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectsdust_305_instances.has_selection()) goto event_1486_21_end;
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1486_21_end: ;
}
void Frames::event_func_4559()
{
    // event 1487_21
    {
        if (!(group_main_engine_1)) goto event_1487_21_end;
        player_389_instances.clear_selection();
        levelgeyserplate_998_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelgeyserplate_998_instances)) goto event_1487_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1487_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) > (180))) goto event_1487_21_end;
        if (!((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) < (240))) goto event_1487_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14+(((((Active*)get_single(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360)-180)*0.1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1487_21_end: ;
}
void Frames::event_func_4560()
{
    // event 1488_21
    {
        if (!(group_main_engine_1)) goto event_1488_21_end;
        if (!((((Active*)get_instance(levelgeyserplate_998_instances, default_active_instance))->alterables->values.get(4)%math_helper%360) > (240))) goto event_1488_21_end;
        levelgeyserplate_998_instances.clear_selection();
        for (ObjectIterator it(levelgeyserplate_998_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1488_21_end: ;
}
void Frames::event_func_4561()
{
    // event 1490_21
    {
        if (!(group_main_engine_1)) goto event_1490_21_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(true);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.disable(0);
    }
    event_1490_21_end: ;
}
void Frames::event_func_4562()
{
    // event 1491_21
    {
        if (!(group_main_engine_1)) goto event_1491_21_end;
        qualifier_14.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(qualifier_14, switchpressureplate_752_instances)) goto event_1491_21_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1491_21_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(false);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.enable(0);
    }
    event_1491_21_end: ;
}
void Frames::event_func_4563()
{
    // event 1492_21
    {
        if (!(group_main_engine_1)) goto event_1492_21_end;
        objectbike_322_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(objectbike_322_instances, switchpressureplate_752_instances)) goto event_1492_21_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(false);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.enable(0);
    }
    event_1492_21_end: ;
}
void Frames::event_func_4564()
{
    // event 1493_21
    {
        if (!(group_main_engine_1)) goto event_1493_21_end;
        playersensorbottombig_397_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1493_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1493_21_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(false);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.enable(0);
    }
    event_1493_21_end: ;
}
void Frames::event_func_4565()
{
    // event 1494_21
    {
        if (!(group_main_engine_1)) goto event_1494_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_on(0))) goto event_1494_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(1))) goto event_1494_21_end;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.enable(1);
    }
    event_1494_21_end: ;
}
void Frames::event_func_4566()
{
    // event 1495_21
    {
        if (!(group_main_engine_1)) goto event_1495_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_on(1))) goto event_1495_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(0))) goto event_1495_21_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.disable(1);
    }
    event_1495_21_end: ;
}
void Frames::event_func_4567()
{
    // event 1496_21
    {
        if (!(group_main_engine_1)) goto event_1496_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_on(0))) goto event_1496_21_end;
        {
            double check_value = ((Active*)get_instance(switchpressureplate_752_instances))->alterables->values.get(0);
            switchdoor_735_instances.clear_selection();
            for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (128))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1496_21_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
            ((Active*)*it)->alterables->values.add(2, 8);
        }
    }
    event_1496_21_end: ;
}
void Frames::event_func_4568()
{
    // event 1497_21
    {
        if (!(group_main_engine_1)) goto event_1497_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(0))) goto event_1497_21_end;
        {
            double check_value = ((Active*)get_instance(switchpressureplate_752_instances))->alterables->values.get(0);
            switchdoor_735_instances.clear_selection();
            for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1497_21_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
            ((Active*)*it)->alterables->values.sub(2, 8);
        }
    }
    event_1497_21_end: ;
}
void Frames::event_func_4569()
{
    // event 1498_21
    {
        if (!(group_main_engine_1)) goto event_1498_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(2)) == (0))) goto event_1498_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->layer->index+1) != (((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(1)))) goto event_1498_21_end;
        ((Active*)get_instance(switchdoor_735_instances))->set_layer(((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(1)-1);
    }
    event_1498_21_end: ;
}
void Frames::event_func_4570()
{
    // event 1499_21
    {
        if (!(group_main_engine_1)) goto event_1499_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(2)) != (0))) goto event_1499_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->layer->index+1) == (((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(1)))) goto event_1499_21_end;
        ((Active*)get_instance(switchdoor_735_instances))->set_layer(((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(1)-1-1);
    }
    event_1499_21_end: ;
}
void Frames::event_func_4571()
{
    // event 1500_21
    {
        if (!(group_main_engine_1)) goto event_1500_21_end;
        spinninglog_1003_instances.clear_selection();
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!spinninglog_1003_instances.has_selection()) goto event_1500_21_end;
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)*it)->alterables->values.get(0)/math_helper/40));
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1500_21_end: ;
}
void Frames::event_func_4572()
{
    // event 1501_21
    {
        if (!(group_main_engine_1)) goto event_1501_21_end;
        spinninglog_1003_instances.clear_selection();
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        }
        spinninglogmask_1004_instances.clear_selection();
        for (ObjectIterator it(spinninglogmask_1004_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1501_21_end: ;
}
void Frames::event_func_4573()
{
    // event 1502_21
    {
        if (!(group_main_engine_1)) goto event_1502_21_end;
        playersensorbottombig_397_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spinninglogmask_1004_instances)) goto event_1502_21_end;
        spinninglog_1003_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spinninglog_1003_instances)) goto event_1502_21_end;
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (60))) { it.deselect(); continue; }
        }
        if (!spinninglog_1003_instances.has_selection()) goto event_1502_21_end;
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1502_21_end: ;
}
void Frames::event_func_4574()
{
    // event 1503_21
    {
        if (!(group_main_engine_1)) goto event_1503_21_end;
        playersensorbottombig_397_instances.clear_selection();
        spinninglog_1003_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spinninglog_1003_instances)) goto event_1503_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1503_21_end;
        for (ObjectIterator it(spinninglog_1003_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(30, get_min(((Active*)*it)->alterables->values.get(0)+4, 320)));
        }
    }
    event_1503_21_end: ;
}
void Frames::event_func_4575()
{
    // event 1504_21
    {
        if (!(group_main_engine_1)) goto event_1504_21_end;
        playersensorbottombig_397_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, spinninglogmask_1004_instances)) goto event_1504_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1504_21_end;
        for (ObjectIterator it(spinninglogmask_1004_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 20));
        }
    }
    event_1504_21_end: ;
}
void Frames::event_func_4576()
{
    // event 1505_21
    {
        if (!(group_main_engine_1)) goto event_1505_21_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, spinninglogmask_1004_instances)) goto event_1505_21_end;
        spinninglogmask_1004_instances.clear_selection();
        for (ObjectIterator it(spinninglogmask_1004_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-1, 0));
        }
    }
    event_1505_21_end: ;
}
void Frames::event_func_4577()
{
    // event 1506_21
    {
        if (!(group_main_engine_1)) goto event_1506_21_end;
        spinninglogmask_1004_instances.clear_selection();
        for (ObjectIterator it(spinninglogmask_1004_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (15))) { it.deselect(); continue; }
        }
        if (!spinninglogmask_1004_instances.has_selection()) goto event_1506_21_end;
        for (ObjectIterator it(spinninglogmask_1004_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1506_21_end: ;
}
void Frames::event_func_4578()
{
    // event 1522_21
    bool or_result_1522_21 = false;
    bool or_temp_result_1522_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1522_21_0_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1522_21_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyturretus_938_instances, qualifier_7)) goto or_event_1522_21_0_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1522_21_0_end;
        or_result_1522_21 = true;
        or_temp_result_1522_21_0 = true;
    }
    or_event_1522_21_0_end: ;
    enemyturretus_938_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1522_21_0) {
        enemyturretus_938_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1522_21
    bool or_temp_result_1522_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1522_21_1_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1522_21_1_end;
        or_result_1522_21 = true;
        or_temp_result_1522_21_1 = true;
        or_event_1522_21_1_end: ;
        if (or_temp_result_1522_21_1) {
            enemyturretus_938_instances.save_selection();
        }
        if (!or_result_1522_21) goto or_final_or_event_1522_21_1_end;
        enemyturretus_938_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1522_21_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1522_21_0 || or_temp_result_1522_21_1) {
            enemyturretus_938_instances.restore_selection();
        }
        FrameObject * single_instance_1522_21_0; single_instance_1522_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1522_21_0 == NULL)
                    single_instance_1522_21_0 = new_obj;
            }
        }
        FrameObject * single_instance_1522_21_1; single_instance_1522_21_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1522_21_1 == NULL)
                    single_instance_1522_21_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_21();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1522_21_1_end: ;
}
void Frames::event_func_4579()
{
    // event 1577_21
    {
        if (!(group_main_engine_1)) goto event_1577_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1577_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1577_21_end: ;
}
void Frames::event_func_4580()
{
    // event 1578_21
    {
        if (!(group_main_engine_1)) goto event_1578_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1578_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, -8);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1578_21_end: ;
}
void Frames::event_func_4581()
{
    // event 1579_21
    {
        if (!(group_main_engine_1)) goto event_1579_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1579_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->flags.get(2)*0.2, -0.2));
        }
    }
    event_1579_21_end: ;
}
void Frames::event_func_4582()
{
    // event 1580_21
    {
        if (!(group_main_engine_1)) goto event_1580_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1580_21_end;
        FrameObject * single_instance_1580_21_0; single_instance_1580_21_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1580_21_0 == NULL)
                    single_instance_1580_21_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1580_21_0))->set_x(((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1580_21_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
    }
    event_1580_21_end: ;
}
void Frames::event_func_4583()
{
    // event 1581_21
    {
        if (!(group_main_engine_1)) goto event_1581_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1581_21_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemysporepod_1005_instances, enemylimiter_350_instances)) goto event_1581_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1581_21_end: ;
}
void Frames::event_func_4584()
{
    // event 1582_21
    {
        if (!(group_main_engine_1)) goto event_1582_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (-0.2))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1582_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->force_animation(7);
        }
        {
            loop_sporepod_running = true;
            int times = int(3);
            loop_sporepod_index = 0;
            while (loop_sporepod_index < times) {
                loop_sporepod_21();
                if (!loop_sporepod_running) break;
                loop_sporepod_index++;
            }
        }
    }
    event_1582_21_end: ;
}
void Frames::event_func_4585()
{
    // event 1584_21
    {
        if (!(group_main_engine_1)) goto event_1584_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1584_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.025, 2));
        }
    }
    event_1584_21_end: ;
}
void Frames::event_func_4586()
{
    // event 1585_21
    {
        if (!(group_main_engine_1)) goto event_1585_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(7)))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1585_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1585_21_end: ;
}
void Frames::event_func_4587()
{
    // event 1586_21
    {
        if (!(group_main_engine_1)) goto event_1586_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1586_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1586_21_end: ;
}
void Frames::event_func_4588()
{
    // event 1587_21
    bool or_result_1587_21 = false;
    bool or_temp_result_1587_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1587_21_0_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto or_event_1587_21_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysporepod_1005_instances, qualifier_7)) goto or_event_1587_21_0_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto or_event_1587_21_0_end;
        or_result_1587_21 = true;
        or_temp_result_1587_21_0 = true;
    }
    or_event_1587_21_0_end: ;
    enemysporepod_1005_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1587_21_0) {
        enemysporepod_1005_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1587_21
    bool or_temp_result_1587_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1587_21_1_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto or_event_1587_21_1_end;
        or_result_1587_21 = true;
        or_temp_result_1587_21_1 = true;
        or_event_1587_21_1_end: ;
        if (or_temp_result_1587_21_1) {
            enemysporepod_1005_instances.save_selection();
        }
        if (!or_result_1587_21) goto or_final_or_event_1587_21_1_end;
        enemysporepod_1005_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1587_21_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1587_21_0 || or_temp_result_1587_21_1) {
            enemysporepod_1005_instances.restore_selection();
        }
        FrameObject * single_instance_1587_21_0; single_instance_1587_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysporepod_1005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1587_21_0 == NULL)
                    single_instance_1587_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1587_21_0))->set_direction(2);
        FrameObject * single_instance_1587_21_1; single_instance_1587_21_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysporepod_1005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1587_21_1 == NULL)
                    single_instance_1587_21_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_21();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1587_21_1_end: ;
}
void Frames::event_func_4589()
{
    // event 1589_21
    {
        if (!(group_main_engine_1)) goto event_1589_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1589_21_end;
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1589_21_end: ;
}
void Frames::event_func_4590()
{
    // event 1590_21
    {
        if (!(group_main_engine_1)) goto event_1590_21_end;
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemysporeprojectile_969_instances.has_selection()) goto event_1590_21_end;
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.1, 4));
        }
    }
    event_1590_21_end: ;
}
void Frames::event_func_4591()
{
    // event 1595_21
    {
        if (!(group_main_engine_1)) goto event_1595_21_end;
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemysporeprojectile_969_instances.has_selection()) goto event_1595_21_end;
        media.play_id(SOUND_COMMON_EXPLODE5B_315, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+2, 2));
    }
    event_1595_21_end: ;
}
void Frames::event_func_4592()
{
    // event 1596_21
    {
        if (!(group_main_engine_1)) goto event_1596_21_end;
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemysporeprojectile_969_instances.has_selection()) goto event_1596_21_end;
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1596_21_end: ;
}
void Frames::event_func_4593()
{
    // event 1597_21
    {
        if (!(group_main_engine_1)) goto event_1597_21_end;
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemysporeprojectile_969_instances.has_selection()) goto event_1597_21_end;
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1597_21_end: ;
}
void Frames::event_func_4594()
{
    // event 1598_21
    {
        if (!(group_main_engine_1)) goto event_1598_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1598_21_end;
        {
            loop_cacteon_running = true;
            int times = int(1);
            loop_cacteon_index = 0;
            while (loop_cacteon_index < times) {
                loop_cacteon_21();
                if (!loop_cacteon_running) break;
                loop_cacteon_index++;
            }
        }
    }
    event_1598_21_end: ;
}
void Frames::event_func_4595()
{
    // event 1599_21
    {
        if (!(group_main_engine_1)) goto event_1599_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1599_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
        }
    }
    event_1599_21_end: ;
}
void Frames::event_func_4596()
{
    // event 1600_21
    {
        if (!(group_main_engine_1)) goto event_1600_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1600_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_direction(8);
        }
    }
    event_1600_21_end: ;
}
void Frames::event_func_4597()
{
    // event 1601_21
    {
        if (!(group_main_engine_1)) goto event_1601_21_end;
        enemycacteon_990_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, playercharactersensor_383_instances)) goto event_1601_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1601_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1601_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1601_21_end: ;
}
void Frames::event_func_4598()
{
    // event 1602_21
    {
        if (!(group_main_engine_1)) goto event_1602_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(24);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1602_21_end: ;
}
void Frames::event_func_4599()
{
    // event 1603_21
    {
        if (!(group_main_engine_1)) goto event_1603_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1603_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1603_21_end: ;
}
void Frames::event_func_4600()
{
    // event 1604_21
    {
        if (!(group_main_engine_1)) goto event_1604_21_end;
        enemycacteon_990_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, qualifier_7)) goto event_1604_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1604_21_end: ;
}
void Frames::event_func_4601()
{
    // event 1605_21
    {
        if (!(group_main_engine_1)) goto event_1605_21_end;
        enemycacteon_990_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, qualifier_8)) goto event_1605_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1605_21_end: ;
}
void Frames::event_func_4602()
{
    // event 1606_21
    {
        if (!(group_main_engine_1)) goto event_1606_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1606_21_end: ;
}
void Frames::event_func_4603()
{
    // event 1607_21
    {
        if (!(group_main_engine_1)) goto event_1607_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1607_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.25-(((Active*)*it)->alterables->flags.get(1)*0.2), 12));
        }
    }
    event_1607_21_end: ;
}
void Frames::event_func_4604()
{
    // event 1608_21
    bool or_result_1608_21 = false;
    bool or_temp_result_1608_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_21_0_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1608_21_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1608_21_0_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1608_21_0_end;
        or_result_1608_21 = true;
        or_temp_result_1608_21_0 = true;
    }
    or_event_1608_21_0_end: ;
    enemycacteon_990_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_1608_21_0) {
        enemycacteon_990_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 1608_21
    bool or_temp_result_1608_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_21_1_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1608_21_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1608_21_1_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1608_21_1_end;
        or_result_1608_21 = true;
        or_temp_result_1608_21_1 = true;
        or_event_1608_21_1_end: ;
        if (or_temp_result_1608_21_1) {
            enemycacteon_990_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_1608_21) goto or_final_or_event_1608_21_1_end;
        enemycacteon_990_instances.empty_selection();
        masterlevel_37_instances.empty_selection();
        if (or_temp_result_1608_21_0 || or_temp_result_1608_21_1) {
            enemycacteon_990_instances.restore_selection();
        }
        if (or_temp_result_1608_21_0 || or_temp_result_1608_21_1) {
            masterlevel_37_instances.restore_selection();
        }
        FrameObject * single_instance_1608_21_0; single_instance_1608_21_0 = NULL;
        // select single: true false false
        playerstartingpoint_358_instances.clear_selection();
        for (ObjectIterator p_it(playerstartingpoint_358_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1608_21_0 == NULL)
                    single_instance_1608_21_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        ((Active*)((Active*)single_instance_1608_21_0))->set_x(((Active*)get_single(enemycacteon_990_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1608_21_0))->set_y(((Active*)get_single(masterlevel_37_instances, default_active_instance))->alterables->values.get(2));
    }
    or_final_or_event_1608_21_1_end: ;
}
void Frames::event_func_4605()
{
    // event 1609_21
    {
        if (!(group_main_engine_1)) goto event_1609_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1609_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1609_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1609_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1609_21_end: ;
}
void Frames::event_func_4606()
{
    // event 1610_21
    {
        if (!(group_main_engine_1)) goto event_1610_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1610_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1610_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1610_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1610_21_end: ;
}
void Frames::event_func_4607()
{
    // event 1611_21
    bool or_result_1611_21 = false;
    bool or_temp_result_1611_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_21_0_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1611_21_0_end;
        if (!(test_obstacle(((Active*)get_single(enemycacteon_990_instances, default_active_instance))->get_box_index(0)+4, ((Active*)get_single(enemycacteon_990_instances, default_active_instance))->get_box_index(3)-8))) goto or_event_1611_21_0_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1611_21_0_end;
        or_result_1611_21 = true;
        or_temp_result_1611_21_0 = true;
    }
    or_event_1611_21_0_end: ;
    enemycacteon_990_instances.clear_saved_selection();
    if (or_temp_result_1611_21_0) {
        enemycacteon_990_instances.save_selection();
    }
    // event 1611_21
    bool or_temp_result_1611_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_21_1_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1611_21_1_end;
        if (!(test_obstacle(((Active*)get_single(enemycacteon_990_instances, default_active_instance))->get_box_index(2)+4, ((Active*)get_single(enemycacteon_990_instances, default_active_instance))->get_box_index(3)-8))) goto or_event_1611_21_1_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1611_21_1_end;
        or_result_1611_21 = true;
        or_temp_result_1611_21_1 = true;
        or_event_1611_21_1_end: ;
        if (or_temp_result_1611_21_1) {
            enemycacteon_990_instances.save_selection();
        }
        if (!or_result_1611_21) goto or_final_or_event_1611_21_1_end;
        enemycacteon_990_instances.empty_selection();
        if (or_temp_result_1611_21_0 || or_temp_result_1611_21_1) {
            enemycacteon_990_instances.restore_selection();
        }
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    or_final_or_event_1611_21_1_end: ;
}
void Frames::event_func_4608()
{
    // event 1612_21
    bool or_result_1612_21 = false;
    bool or_temp_result_1612_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1612_21_0_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1612_21_0_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, yellowspringupleft_432_instances)) goto or_event_1612_21_0_end;
        or_result_1612_21 = true;
        or_temp_result_1612_21_0 = true;
    }
    or_event_1612_21_0_end: ;
    enemycacteon_990_instances.clear_saved_selection();
    yellowspringupleft_432_instances.clear_saved_selection();
    if (or_temp_result_1612_21_0) {
        enemycacteon_990_instances.save_selection();
        yellowspringupleft_432_instances.save_selection();
    }
    // event 1612_21
    bool or_temp_result_1612_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1612_21_1_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1612_21_1_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, yellowspringupright_433_instances)) goto or_event_1612_21_1_end;
        or_result_1612_21 = true;
        or_temp_result_1612_21_1 = true;
        or_event_1612_21_1_end: ;
        yellowspringupright_433_instances.clear_saved_selection();
        if (or_temp_result_1612_21_1) {
            yellowspringupright_433_instances.save_selection();
            enemycacteon_990_instances.save_selection();
        }
        if (!or_result_1612_21) goto or_final_or_event_1612_21_1_end;
        yellowspringupright_433_instances.empty_selection();
        yellowspringupleft_432_instances.empty_selection();
        enemycacteon_990_instances.empty_selection();
        if (or_temp_result_1612_21_1) {
            yellowspringupright_433_instances.restore_selection();
        }
        if (or_temp_result_1612_21_0 || or_temp_result_1612_21_1) {
            enemycacteon_990_instances.restore_selection();
        }
        if (or_temp_result_1612_21_0) {
            yellowspringupleft_432_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
    }
    or_final_or_event_1612_21_1_end: ;
}
void Frames::event_func_4609()
{
    // event 1613_21
    {
        if (!(group_main_engine_1)) goto event_1613_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1613_21_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, yellowspringupleft_432_instances)) goto event_1613_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, -8);
            ((Active*)*it)->alterables->values.set(4, -8);
        }
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1613_21_end: ;
}
void Frames::event_func_4610()
{
    // event 1614_21
    {
        if (!(group_main_engine_1)) goto event_1614_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1614_21_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, yellowspringupright_433_instances)) goto event_1614_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(5);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, -8);
            ((Active*)*it)->alterables->values.set(4, 8);
        }
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1614_21_end: ;
}
void Frames::event_func_4611()
{
    // event 1615_21
    {
        if (!(group_main_engine_1)) goto event_1615_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1615_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1615_21_end: ;
}
void Frames::event_func_4612()
{
    // event 1616_21
    {
        if (!(group_main_engine_1)) goto event_1616_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1616_21_end;
        {
            loop_cacteon_floor_running = true;
            int times = int(get_max(get_ceil(((Active*)get_single(enemycacteon_990_instances, default_active_instance))->alterables->values.get(5)), 2));
            loop_cacteon_floor_index = 0;
            while (loop_cacteon_floor_index < times) {
                loop_cacteon_floor_21();
                if (!loop_cacteon_floor_running) break;
                loop_cacteon_floor_index++;
            }
        }
    }
    event_1616_21_end: ;
}
void Frames::event_func_4613()
{
    // event 1620_21
    {
        if (!(group_main_engine_1)) goto event_1620_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1620_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1620_21_end: ;
}
void Frames::event_func_4614()
{
    // event 1621_21
    {
        if (!(group_main_engine_1)) goto event_1621_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1621_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1621_21_end: ;
}
void Frames::event_func_4615()
{
    // event 1622_21
    {
        if (!(group_main_engine_1)) goto event_1622_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0.5))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1622_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1622_21_end: ;
}
