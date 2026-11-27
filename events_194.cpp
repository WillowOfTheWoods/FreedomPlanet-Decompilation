#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15164()
{
    // event 2250_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2250_70_end;
        bossbounceshot_3657_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossbounceshot_3657_instances, player_389_instances)) goto event_2250_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2250_70_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2250_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_2250_70_end: ;
}
void Frames::event_func_15165()
{
    // event 2251_70
    bool or_result_2251_70 = false;
    bool or_temp_result_2251_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2251_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (20))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2251_70_0_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) < (3))) goto or_event_2251_70_0_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2251_70_0_end;
        or_result_2251_70 = true;
        or_temp_result_2251_70_0 = true;
    }
    or_event_2251_70_0_end: ;
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2251_70_0) {
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2251_70
    bool or_temp_result_2251_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2251_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2251_70_1_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) < (3))) goto or_event_2251_70_1_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2251_70_1_end;
        or_result_2251_70 = true;
        or_temp_result_2251_70_1 = true;
        or_event_2251_70_1_end: ;
        if (or_temp_result_2251_70_1) {
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2251_70) goto or_final_or_event_2251_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        if (or_temp_result_2251_70_0 || or_temp_result_2251_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        FrameObject * single_instance_2251_70_0; single_instance_2251_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmmillatailend_3685_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossreflect_3659(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2251_70_0 == NULL)
                    single_instance_2251_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2251_70_0))->alterables->values.set(6, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)((Active*)single_instance_2251_70_0))->set_direction(((Active*)get_instance(bossmmillatailend_3685_instances))->get_direction());
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_MUTANT_BARRIER_393, -1, 1);
    }
    or_final_or_event_2251_70_1_end: ;
}
void Frames::event_func_15166()
{
    // event 2252_70
    bool or_result_2252_70 = false;
    bool or_temp_result_2252_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2252_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (20))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2252_70_0_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) >= (3))) goto or_event_2252_70_0_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2252_70_0_end;
        or_result_2252_70 = true;
        or_temp_result_2252_70_0 = true;
    }
    or_event_2252_70_0_end: ;
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2252_70_0) {
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2252_70
    bool or_temp_result_2252_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2252_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (200))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2252_70_1_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(6)) >= (3))) goto or_event_2252_70_1_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2252_70_1_end;
        or_result_2252_70 = true;
        or_temp_result_2252_70_1 = true;
        or_event_2252_70_1_end: ;
        if (or_temp_result_2252_70_1) {
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2252_70) goto or_final_or_event_2252_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        if (or_temp_result_2252_70_0 || or_temp_result_2252_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        FrameObject * single_instance_2252_70_0; single_instance_2252_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmmillatailend_3685_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossreflect_3659(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2252_70_0 == NULL)
                    single_instance_2252_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2252_70_0))->alterables->values.set(6, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)((Active*)single_instance_2252_70_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_2252_70_0))->alterables->values.set(1, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*(4+((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(4)*3));
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(4, 1);
    }
    or_final_or_event_2252_70_1_end: ;
}
void Frames::event_func_15167()
{
    // event 2253_70
    bool or_result_2253_70 = false;
    bool or_temp_result_2253_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2253_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2253_70_0_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2253_70_0_end;
        or_result_2253_70 = true;
        or_temp_result_2253_70_0 = true;
    }
    or_event_2253_70_0_end: ;
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2253_70_0) {
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2253_70
    bool or_temp_result_2253_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2253_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (220))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2253_70_1_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_off(1))) goto or_event_2253_70_1_end;
        or_result_2253_70 = true;
        or_temp_result_2253_70_1 = true;
        or_event_2253_70_1_end: ;
        if (or_temp_result_2253_70_1) {
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2253_70) goto or_final_or_event_2253_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        if (or_temp_result_2253_70_0 || or_temp_result_2253_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        FrameObject * single_instance_2253_70_0; single_instance_2253_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmmillatailend_3685_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossreflect_3659(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2253_70_0 == NULL)
                    single_instance_2253_70_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_2253_70_0))->alterables->values.set(6, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)((Active*)single_instance_2253_70_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_2253_70_0))->alterables->values.set(1, ((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(12)*8);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(4, 1);
    }
    or_final_or_event_2253_70_1_end: ;
}
void Frames::event_func_15168()
{
    // event 2254_70
    bool or_result_2254_70 = false;
    bool or_temp_result_2254_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2254_70_0_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_on(1))) goto or_event_2254_70_0_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2254_70_0_end;
        or_result_2254_70 = true;
        or_temp_result_2254_70_0 = true;
    }
    or_event_2254_70_0_end: ;
    bossmmillahead_3680_instances.clear_saved_selection();
    if (or_temp_result_2254_70_0) {
        bossmmillahead_3680_instances.save_selection();
    }
    // event 2254_70
    bool or_temp_result_2254_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto or_event_2254_70_1_end;
        if (!(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.is_on(1))) goto or_event_2254_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (220))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto or_event_2254_70_1_end;
        or_result_2254_70 = true;
        or_temp_result_2254_70_1 = true;
        or_event_2254_70_1_end: ;
        if (or_temp_result_2254_70_1) {
            bossmmillahead_3680_instances.save_selection();
        }
        if (!or_result_2254_70) goto or_final_or_event_2254_70_1_end;
        bossmmillahead_3680_instances.clear_selection();
        if (or_temp_result_2254_70_0 || or_temp_result_2254_70_1) {
            bossmmillahead_3680_instances.restore_selection();
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->flags.disable(1);
    }
    or_final_or_event_2254_70_1_end: ;
}
void Frames::event_func_15169()
{
    // event 2255_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2255_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2255_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+8)%math_helper%360);
            ((Active*)*it)->set_y_scale(2.5-cos_deg(((Active*)*it)->alterables->values.get(5))*1.5);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(6)*4);
        }
    }
    event_2255_70_end: ;
}
void Frames::event_func_15170()
{
    // event 2256_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2256_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2256_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)*it)->alterables->values.get(1)*2, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(5, 0.3);
        }
    }
    event_2256_70_end: ;
}
void Frames::event_func_15171()
{
    // event 2257_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2257_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(3)+56))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2257_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(90, 0);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->force_animation(5);
        }
        effectbounceshotdebris_3658_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossreflect_3659_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbounceshotdebris_3658(parent->x + 0, parent->y + 0), parent->layer);
                effectbounceshotdebris_3658_instances.add_back();
            }
        }
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(5, 6, 7, 8, 9, 10));
            ((Active*)*it)->get_movement()->set_speed(70);
        }
        media.play_id(SOUND_MILLA_SHOTSUPER_421, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_2257_70_end: ;
}
void Frames::event_func_15172()
{
    // event 2258_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2258_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2258_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2258_70_end: ;
}
void Frames::event_func_15173()
{
    // event 2259_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2259_70_end;
        bossreflect_3659_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossreflect_3659_instances, player_389_instances)) goto event_2259_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2259_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2259_70_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2259_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_2259_70_end: ;
}
void Frames::event_func_15174()
{
    // event 2260_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2260_70_end;
        bossreflect_3659_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossreflect_3659_instances, player_389_instances)) goto event_2260_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2260_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2260_70_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2260_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2260_70_end: ;
}
void Frames::event_func_15175()
{
    // event 2261_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2261_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2261_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2261_70_end: ;
}
void Frames::event_func_15176()
{
    // event 2262_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2262_70_end;
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossreflect_3659_instances.has_selection()) goto event_2262_70_end;
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2262_70_end: ;
}
void Frames::event_func_15177()
{
    // event 2263_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2263_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (1))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2263_70_end;
        FrameObject * single_instance_2263_70_0; single_instance_2263_70_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmmillahead_3680_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2263_70_0 == NULL)
                    single_instance_2263_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2263_70_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_2263_70_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_2263_70_0))->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
    }
    event_2263_70_end: ;
}
void Frames::event_func_15178()
{
    // event 2264_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2264_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2264_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(2, 90);
            ((Active*)*it)->alterables->values.sub(14, 1);
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(7, 4);
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.play_id(SOUND_MUTANT_HIT2_394, -1, 1);
    }
    event_2264_70_end: ;
}
void Frames::event_func_15179()
{
    // event 2265_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2265_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (6))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2265_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)*it)->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_direction(((Active*)get_instance(bossmmillaearfront_3682_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_direction(((Active*)get_instance(bossmmillaearback_3674_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_direction(((Active*)get_instance(bossmmillapawback_3673_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_direction(((Active*)get_instance(bossmmillaarmback_3672_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_direction(((Active*)get_instance(bossmmillafootback_3671_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_direction(((Active*)get_instance(bossmmillaarmfront_3678_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_direction(((Active*)get_instance(bossmmillapawfront_3681_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_direction(((Active*)get_instance(bossmmillaleg_3677_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_direction(((Active*)get_instance(bossmmillafoot_3679_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_direction(((Active*)get_instance(bossmmillatailend_3685_instances))->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(bossmmillahead_3680_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_2265_70_end: ;
}
void Frames::event_func_15180()
{
    // event 2266_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2266_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) <= (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2266_70_end;
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_2266_70_end: ;
}
void Frames::event_func_15181()
{
    // event 2267_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2267_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmmillahead_3680_instances.has_selection()) goto event_2267_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) < (60))) goto event_2267_70_end;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 4);
        media.play_id(SOUND_LAVAWALL_311, 29-1, 0);
        media.lock(29-1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(3, 60);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(11, 1);
        }
            group_pause_1 = false;
    
    }
    event_2267_70_end: ;
}
void Frames::event_func_15182()
{
    // event 2268_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2268_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2268_70_end;
        media.set_channel_volume(29-1, get_min(((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5), 100));
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(5, 1);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_2268_70_end: ;
}
void Frames::event_func_15183()
{
    // event 2269_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2269_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2269_70_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_2269_70_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_2269_70_end: ;
}
void Frames::event_func_15184()
{
    // event 2270_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2270_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2270_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (10))) goto event_2270_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)%math_helper%5) == (0))) goto event_2270_70_end;
        if (not_always_2270_70 > loop_count) {
            not_always_2270_70 = loop_count + 2;
            goto event_2270_70_end;
        }
        not_always_2270_70 = loop_count + 2;
        FrameObject * single_instance_2270_70_0; single_instance_2270_70_0 = NULL;
        // select single: true false false
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator p_it(bossmmillahead_3680_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2270_70_0 == NULL)
                    single_instance_2270_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2270_70_0))->force_speed(100);
        ((Active*)((Active*)single_instance_2270_70_0))->set_x(((Active*)single_instance_2270_70_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2270_70_0))->set_y(((Active*)single_instance_2270_70_0)->get_y()-40+randrange(81));
    }
    event_2270_70_end: ;
}
void Frames::event_func_15185()
{
    // event 2271_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2271_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2271_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (10))) goto event_2271_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)%math_helper%13) == (0))) goto event_2271_70_end;
        if (not_always_2271_70 > loop_count) {
            not_always_2271_70 = loop_count + 2;
            goto event_2271_70_end;
        }
        not_always_2271_70 = loop_count + 2;
        FrameObject * single_instance_2271_70_0; single_instance_2271_70_0 = NULL;
        // select single: true false false
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator p_it(bossmmillahead_3680_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2271_70_0 == NULL)
                    single_instance_2271_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2271_70_0))->force_speed(100);
        ((Active*)((Active*)single_instance_2271_70_0))->set_x(((Active*)single_instance_2271_70_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2271_70_0))->set_y(((Active*)single_instance_2271_70_0)->get_y()-40+randrange(81));
        media.play_id(SOUND_MUTANT_FORM_376, -1, 1);
    }
    event_2271_70_end: ;
}
void Frames::event_func_15186()
{
    // event 2272_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2272_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2272_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (100))) goto event_2272_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)%math_helper%7) == (0))) goto event_2272_70_end;
        if (not_always_2272_70 > loop_count) {
            not_always_2272_70 = loop_count + 2;
            goto event_2272_70_end;
        }
        not_always_2272_70 = loop_count + 2;
        FrameObject * single_instance_2272_70_0; single_instance_2272_70_0 = NULL;
        // select single: true false false
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator p_it(bossmmillahead_3680_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2272_70_0 == NULL)
                    single_instance_2272_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2272_70_0))->force_speed(100);
        ((Active*)((Active*)single_instance_2272_70_0))->set_x(((Active*)single_instance_2272_70_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2272_70_0))->set_y(((Active*)single_instance_2272_70_0)->get_y()-40+randrange(81));
    }
    event_2272_70_end: ;
}
void Frames::event_func_15187()
{
    // event 2273_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2273_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2273_70_end;
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!effectsexplosion02_411_instances.has_selection()) goto event_2273_70_end;
        FrameObject * single_instance_2273_70_0; single_instance_2273_70_0 = pick_random(effectsexplosion02_411_instances);
        if (single_instance_2273_70_0 == NULL) goto event_2273_70_end;
        ((Active*)((Active*)single_instance_2273_70_0))->alterables->flags.enable(2);
        FrameObject * single_instance_2273_70_1; single_instance_2273_70_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npctransformbubble_3555(((Active*)single_instance_2273_70_0)->x + 0, ((Active*)single_instance_2273_70_0)->y + 0), ((Active*)single_instance_2273_70_0)->layer);
            if (single_instance_2273_70_1 == NULL)
                single_instance_2273_70_1 = new_obj;
        }
        ((Active*)single_instance_2273_70_1)->move_back(((Active*)single_instance_2273_70_0));
    }
    event_2273_70_end: ;
}
void Frames::event_func_15188()
{
    // event 2274_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2274_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) >= (60))) goto event_2274_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(2)*0.1);
            ((Active*)*it)->alterables->values.sub(2, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-6);
        }
    }
    event_2274_70_end: ;
}
void Frames::event_func_15189()
{
    // event 2275_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2275_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2275_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (10))) goto event_2275_70_end;
        if (!((levelcardfade_461_instances.size()) == (0))) goto event_2275_70_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 3);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2275_70_end: ;
}
void Frames::event_func_15190()
{
    // event 2276_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2276_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2276_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2276_70_end: ;
}
void Frames::event_func_15191()
{
    // event 2277_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2277_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2277_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) >= (10))) goto event_2277_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0)*4, 0));
        }
    }
    event_2277_70_end: ;
}
void Frames::event_func_15192()
{
    // event 2278_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2278_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2278_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (70))) goto event_2278_70_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 2);
    }
    event_2278_70_end: ;
}
void Frames::event_func_15193()
{
    // event 2279_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2279_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2279_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (140))) goto event_2279_70_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_2279_70_end: ;
}
void Frames::event_func_15194()
{
    // event 2280_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2280_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2280_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (230))) goto event_2280_70_end;
        media.stop_samples();
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        media.unlock(29-1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
            group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1 = false;
    
    }
    event_2280_70_end: ;
}
void Frames::event_func_15195()
{
    // event 2281_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2281_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2281_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(5, 1);
    }
    event_2281_70_end: ;
}
void Frames::event_func_15196()
{
    // event 2282_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2282_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2282_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) < (120))) goto event_2282_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_2282_70_end: ;
}
void Frames::event_func_15197()
{
    // event 2283_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2283_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2283_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (50))) goto event_2283_70_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->layer->index+1) < (6))) goto event_2283_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2283_70_end: ;
}
void Frames::event_func_15198()
{
    // event 2284_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2284_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2284_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (119))) goto event_2284_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->get_x()+120);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
            group_pause_1 = false;
    
    }
    event_2284_70_end: ;
}
void Frames::event_func_15199()
{
    // event 2285_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2285_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2285_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (119))) goto event_2285_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2285_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        global_values->set(1, 2);
    }
    event_2285_70_end: ;
}
void Frames::event_func_15200()
{
    // event 2286_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2286_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2286_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (120))) goto event_2286_70_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1 = false;
    
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_visible(false);
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_visible(false);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_visible(false);
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2286_70_end: ;
}
void Frames::event_func_15201()
{
    // event 2287_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2287_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2287_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (121))) goto event_2287_70_end;
        FrameObject * single_instance_2287_70_0; single_instance_2287_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2287_70_0 == NULL)
                    single_instance_2287_70_0 = new_obj;
            }
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        }
        ((Active*)get_instance(npcmillabody_3686_instances))->set_y(((Active*)get_instance(computerterminal_3666_instances))->get_y()+65);
        ((Active*)get_instance(npcmillabody_3686_instances))->set_x(((Active*)get_instance(bossmmillahead_3680_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+40);
        ((Active*)get_instance(npcmillabody_3686_instances))->move_front();
    }
    event_2287_70_end: ;
}
void Frames::event_func_15202()
{
    // event 2288_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2288_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2288_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (120))) goto event_2288_70_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_2288_70_end: ;
}
void Frames::event_func_15203()
{
    // event 2289_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2289_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2289_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (200))) goto event_2289_70_end;
        if (!((global_values->get(1)) == (2))) goto event_2289_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_39_01_ogg_242, 19-1);
    }
    event_2289_70_end: ;
}
void Frames::event_func_15204()
{
    // event 2290_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2290_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (61))) goto event_2290_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (200))) goto event_2290_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
    }
    event_2290_70_end: ;
}
void Frames::event_func_15205()
{
    // event 2291_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2291_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (62))) goto event_2291_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()-5);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
    }
    event_2291_70_end: ;
}
void Frames::event_func_15206()
{
    // event 2292_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2292_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (62))) goto event_2292_70_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(npcmillabody_3686_instances))->get_x()+48))) goto event_2292_70_end;
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(66);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(84);
        }
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.set(5, 0);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2292_70_end: ;
}
void Frames::event_func_15207()
{
    // event 2293_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2293_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2293_70_end;
        ((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.add(5, 1);
    }
    event_2293_70_end: ;
}
void Frames::event_func_15208()
{
    // event 2294_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2294_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2294_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2294_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2294_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_45_01_ogg_243, 19-1);
    }
    event_2294_70_end: ;
}
void Frames::event_func_15209()
{
    // event 2295_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2295_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2295_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) < (40))) goto event_2295_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2295_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(84+randrange(3));
        }
    }
    event_2295_70_end: ;
}
void Frames::event_func_15210()
{
    // event 2296_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2296_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2296_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (40))) goto event_2296_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(84);
        }
    }
    event_2296_70_end: ;
}
void Frames::event_func_15211()
{
    // event 2297_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2297_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2297_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (170))) goto event_2297_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2297_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_45_02_ogg_244, 19-1);
    }
    event_2297_70_end: ;
}
void Frames::event_func_15212()
{
    // event 2298_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2298_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2298_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (170))) goto event_2298_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) < (220))) goto event_2298_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2298_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(87+randrange(3));
        }
    }
    event_2298_70_end: ;
}
void Frames::event_func_15213()
{
    // event 2299_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2299_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2299_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (220))) goto event_2299_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(87);
        }
    }
    event_2299_70_end: ;
}
void Frames::event_func_15214()
{
    // event 2300_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2300_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2300_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (270))) goto event_2300_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(20);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_2300_70_end: ;
}
void Frames::event_func_15215()
{
    // event 2301_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2301_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2301_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (330))) goto event_2301_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(21);
        }
    }
    event_2301_70_end: ;
}
void Frames::event_func_15216()
{
    // event 2302_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2302_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2302_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (100))) goto event_2302_70_end;
        if (!((global_values->get(1)) == (2))) goto event_2302_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_39_02_ogg_245, 19-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(68);
        }
    }
    event_2302_70_end: ;
}
void Frames::event_func_15217()
{
    // event 2303_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2303_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2303_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (130))) goto event_2303_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(66);
        }
    }
    event_2303_70_end: ;
}
void Frames::event_func_15218()
{
    // event 2304_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2304_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2304_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (170))) goto event_2304_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) < (260))) goto event_2304_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_2304_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(66+randrange(3));
        }
    }
    event_2304_70_end: ;
}
void Frames::event_func_15219()
{
    // event 2305_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2305_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2305_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (260))) goto event_2305_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(66);
        }
    }
    event_2305_70_end: ;
}
void Frames::event_func_15220()
{
    // event 2306_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2306_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2306_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (290))) goto event_2306_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(20);
            ((Active*)*it)->restore_speed();
        }
    }
    event_2306_70_end: ;
}
void Frames::event_func_15221()
{
    // event 2307_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2307_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2307_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (400))) goto event_2307_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(14);
        }
    }
    event_2307_70_end: ;
}
void Frames::event_func_15222()
{
    // event 2308_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2308_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2308_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (430))) goto event_2308_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2308_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_45_03_ogg_246, 19-1);
    }
    event_2308_70_end: ;
}
void Frames::event_func_15223()
{
    // event 2309_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2309_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2309_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (430))) goto event_2309_70_end;
        if (!((global_values->get(1)) == (2))) goto event_2309_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_39_03_ogg_247, 19-1);
    }
    event_2309_70_end: ;
}
void Frames::event_func_15224()
{
    // event 2310_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2310_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2310_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (430))) goto event_2310_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2310_70_end;
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(player_389_instances))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_2310_70_end: ;
}
void Frames::event_func_15225()
{
    // event 2311_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2311_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2311_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (430))) goto event_2311_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2311_70_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 15);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_2311_70_end: ;
}
void Frames::event_func_15226()
{
    // event 2312_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2312_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2312_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (440))) goto event_2312_70_end;
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2312_70_end: ;
}
void Frames::event_func_15227()
{
    // event 2313_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2313_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2313_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (455))) goto event_2313_70_end;
        if (!((global_values->get(1)) == (2))) goto event_2313_70_end;
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(player_389_instances))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        media.play_id(SOUND_CAROL_POUNCE_154, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 24);
    }
    event_2313_70_end: ;
}
void Frames::event_func_15228()
{
    // event 2314_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2314_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2314_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (370))) goto event_2314_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(player_389_instances))->get_x()), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-global_values->get(16)*0.5));
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+40);
    }
    event_2314_70_end: ;
}
void Frames::event_func_15229()
{
    // event 2315_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1)) goto event_2315_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (63))) goto event_2315_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) > (500))) goto event_2315_70_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
    }
    event_2315_70_end: ;
}
void Frames::event_func_15230()
{
    // event 2317_70
    {
        if (!(group_main_engine_1)) goto event_2317_70_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_2317_70_end;
        if (once_condition_2317_70) goto event_2317_70_end;
        once_condition_2317_70 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 55)) == (0))) goto event_2317_70_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (360000))) goto event_2317_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 55);
    }
    event_2317_70_end: ;
}
void Frames::event_func_15231()
{
    // event 2318_70
    {
        if (!(group_main_engine_1)) goto event_2318_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2318_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2318_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2318_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_2318_70_end: ;
}
void Frames::event_func_15232()
{
    // event 2319_70
    {
        if (!(group_main_engine_1)) goto event_2319_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2319_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2319_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2319_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_2319_70_end: ;
}
void Frames::event_func_15233()
{
    // event 2320_70
    {
        if (!(group_main_engine_1)) goto event_2320_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2320_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2320_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2320_70_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2320_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2320_70_end: ;
}
void Frames::event_func_15234()
{
    // event 2321_70
    {
        if (!(group_main_engine_1)) goto event_2321_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2321_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2321_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_2321_70_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2321_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_2321_70_end: ;
}
void Frames::event_func_15235()
{
    // event 2322_70
    {
        if (!(group_main_engine_1)) goto event_2322_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2322_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2322_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2322_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_2322_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_2322_70_end: ;
}
void Frames::event_func_15236()
{
    // event 2323_70
    {
        if (!(group_main_engine_1)) goto event_2323_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2323_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2323_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2323_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_2323_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_2323_70_end: ;
}
void Frames::event_func_15237()
{
    // event 2324_70
    {
        if (!(group_main_engine_1)) goto event_2324_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(3)) == (60))) goto event_2324_70_end;
        if (!((((Active*)get_instance(bossmmillatailend_3685_instances))->alterables->values.get(5)) == (1))) goto event_2324_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_2324_70_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_2324_70_end: ;
}
void Frames::event_func_15238()
{
    // event 2528_70
    {
        if (!(group_pause_1)) goto event_2528_70_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2528_70_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2528_70_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2528_70_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2528_70_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(device_3367_instances))->stop_animation();
        ((Active*)get_instance(brevon_3683_instances))->stop_animation();
        ((Active*)get_instance(computerterminal_3666_instances))->stop_animation();
        ((Active*)get_instance(computerterminal2_3668_instances))->stop_animation();
        ((Active*)get_instance(kingdomstone_1587_instances))->stop_animation();
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
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
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->stop_animation();
        ((Active*)get_instance(lockeddoorseal_2672_instances))->stop_animation();
    }
    event_2528_70_end: ;
}
void Frames::event_func_15239()
{
    // event 2529_70
    bool or_result_2529_70 = false;
    bool or_temp_result_2529_70_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2529_70_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2529_70_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2529_70_0_end;
        or_result_2529_70 = true;
        or_temp_result_2529_70_0 = true;
    }
    or_event_2529_70_0_end: ;
    // event 2529_70
    bool or_temp_result_2529_70_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2529_70_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2529_70_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2529_70_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2529_70_1_end;
        or_result_2529_70 = true;
        or_temp_result_2529_70_1 = true;
        or_event_2529_70_1_end: ;
        if (!or_result_2529_70) goto or_final_or_event_2529_70_1_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(brevon_3683_instances))->start_animation();
        ((Active*)get_instance(device_3367_instances))->start_animation();
        ((Active*)get_instance(computerterminal_3666_instances))->start_animation();
        ((Active*)get_instance(computerterminal2_3668_instances))->start_animation();
        ((Active*)get_instance(kingdomstone_1587_instances))->start_animation();
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
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
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->start_animation();
        ((Active*)get_instance(lockeddoorseal_2672_instances))->start_animation();
    }
    or_final_or_event_2529_70_1_end: ;
}
void Frames::event_func_15240()
{
    // event 2544_70
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2544_70_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2544_70_end;
        if (not_always_2544_70 > loop_count) {
            not_always_2544_70 = loop_count + 2;
            goto event_2544_70_end;
        }
        not_always_2544_70 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(computerterminal2_3668_instances))->stop_animation();
        ((Active*)get_instance(computerterminal_3666_instances))->stop_animation();
        ((Active*)get_instance(kingdomstone_1587_instances))->stop_animation();
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(brevon_3683_instances))->stop_animation();
        ((Active*)get_instance(device_3367_instances))->stop_animation();
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2544_70_end: ;
}
void Frames::event_func_15241()
{
    // event 2545_70
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2545_70_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2545_70_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2545_70_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        for (ObjectIterator it(minibossbulldozerdoor_1718_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->start_animation();
        ((Active*)get_instance(computerterminal_3666_instances))->start_animation();
        ((Active*)get_instance(computerterminal2_3668_instances))->start_animation();
        ((Active*)get_instance(device_3367_instances))->start_animation();
        ((Active*)get_instance(brevon_3683_instances))->start_animation();
        bossbounceshot_3657_instances.clear_selection();
        for (ObjectIterator it(bossbounceshot_3657_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        bossreflect_3659_instances.clear_selection();
        for (ObjectIterator it(bossreflect_3659_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbounceshotdebris_3658_instances.clear_selection();
        for (ObjectIterator it(effectbounceshotdebris_3658_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_2545_70_end: ;
}
void Frames::handle_frame_71_events()
{
    test_collisions_70();
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
    event_func_4203();
    event_func_4205();
    event_func_6913();
    event_func_2650();
    event_func_4187();
    event_func_4188();
    if (!group_main_engine_1) goto group_main_engine_1_end;
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
    event_func_1590();
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
    event_func_1624();
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
    event_func_1635();
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
    event_func_1652();
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
    event_func_1695();
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
    event_func_1720();
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
    event_func_14743();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_14744();
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
    event_func_10755();
    event_func_1776();
    event_func_14745();
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
    event_func_14746();
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
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
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
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
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
    event_func_2335();
    event_func_2336();
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
    event_func_2950();
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
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
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
    event_func_13971();
    event_func_13972();
    event_func_13973();
    event_func_13974();
    event_func_13975();
    event_func_13976();
    event_func_14747();
    event_func_13978();
    event_func_13979();
    event_func_13980();
    event_func_13981();
    event_func_13982();
    event_func_13983();
    event_func_13984();
    event_func_13985();
    event_func_14748();
    event_func_14749();
    event_func_14750();
    event_func_14751();
    event_func_14752();
    event_func_14753();
    event_func_14754();
    event_func_14755();
    event_func_14756();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_14757();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
    event_func_14385();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_13482();
    event_func_13483();
    event_func_10810();
    event_func_10811();
    event_func_10812();
    event_func_10813();
    event_func_10814();
    event_func_10815();
    event_func_10816();
    event_func_10817();
    event_func_10818();
    event_func_10819();
    event_func_10820();
    event_func_10821();
    event_func_10822();
    event_func_10823();
    event_func_10824();
    event_func_10825();
    event_func_10826();
    event_func_14758();
    event_func_14759();
    event_func_10829();
    event_func_10830();
    event_func_10831();
    event_func_11463();
    event_func_11464();
    event_func_11465();
    event_func_11466();
    event_func_11467();
    event_func_11468();
    event_func_11469();
    event_func_11470();
    event_func_11471();
    event_func_11472();
    event_func_11473();
    event_func_11474();
    event_func_11475();
    event_func_11476();
    event_func_11477();
    event_func_11478();
    event_func_11479();
    event_func_11480();
    event_func_14760();
    event_func_11482();
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8714();
    event_func_13242();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
    event_func_9128();
    event_func_9129();
    event_func_9130();
    event_func_9131();
    event_func_9132();
    event_func_9133();
    event_func_9134();
    event_func_9135();
    event_func_9136();
    event_func_9137();
    event_func_9138();
    event_func_14761();
    event_func_9140();
    event_func_9141();
    event_func_9142();
    event_func_9143();
    event_func_9144();
    event_func_9145();
    event_func_9146();
    event_func_9147();
    event_func_9148();
    event_func_9149();
    event_func_9150();
    event_func_9151();
    event_func_9152();
    event_func_9153();
    event_func_14037();
    event_func_14038();
    event_func_14039();
    event_func_14040();
    event_func_14041();
    event_func_14042();
    event_func_14043();
    event_func_14044();
    event_func_14045();
    event_func_14046();
    event_func_14047();
    event_func_14048();
    event_func_14049();
    event_func_14050();
    event_func_14762();
    event_func_14052();
    event_func_9713();
    event_func_9714();
    event_func_9715();
    event_func_9716();
    event_func_9717();
    event_func_9718();
    event_func_9719();
    event_func_9720();
    event_func_9721();
    event_func_9722();
    event_func_5516();
    event_func_14763();
    event_func_14764();
    event_func_14765();
    event_func_14766();
    event_func_14767();
    event_func_14768();
    event_func_14769();
    event_func_14770();
    event_func_14771();
    event_func_14772();
    event_func_14773();
    event_func_14774();
    event_func_14775();
    event_func_14776();
    event_func_14777();
    event_func_14778();
    event_func_14779();
    event_func_14780();
    event_func_14781();
    event_func_14782();
    event_func_14783();
    event_func_14784();
    event_func_14785();
    event_func_14786();
    event_func_14787();
    event_func_14788();
    event_func_14789();
    event_func_14790();
    event_func_14791();
    event_func_14792();
    event_func_14793();
    event_func_14794();
    event_func_14795();
    event_func_14796();
    event_func_14797();
    event_func_14798();
    event_func_14921();
    event_func_8743();
    event_func_8744();
    event_func_8745();
    event_func_8746();
    event_func_8747();
    event_func_8748();
    event_func_8749();
    event_func_8750();
    event_func_8751();
    event_func_8752();
    event_func_8753();
    event_func_8754();
    event_func_8755();
    event_func_8756();
    event_func_8757();
    event_func_8758();
    event_func_14922();
    event_func_8760();
    event_func_8761();
    event_func_8762();
    event_func_8763();
    event_func_8764();
    event_func_8765();
    event_func_8766();
    event_func_8767();
    event_func_8768();
    event_func_8769();
    event_func_14923();
    event_func_4595();
    event_func_4596();
    event_func_4597();
    event_func_4598();
    event_func_4599();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    event_func_4603();
    event_func_4604();
    event_func_4605();
    event_func_4606();
    event_func_4607();
    event_func_4608();
    event_func_4609();
    event_func_4610();
    event_func_4611();
    event_func_14924();
    event_func_4613();
    event_func_4614();
    event_func_4615();
    event_func_4616();
    event_func_4617();
    event_func_4618();
    event_func_4619();
    event_func_4620();
    event_func_4621();
    event_func_4622();
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
    event_func_13246();
    event_func_14925();
    event_func_14926();
    event_func_14927();
    event_func_14390();
    event_func_14391();
    event_func_14392();
    event_func_14393();
    event_func_14394();
    event_func_14395();
    event_func_14396();
    event_func_14397();
    event_func_14398();
    event_func_14399();
    event_func_14400();
    event_func_14401();
    event_func_14402();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_11483();
    event_func_11484();
    event_func_14531();
    event_func_11486();
    event_func_11487();
    event_func_11488();
    event_func_11489();
    event_func_14532();
    event_func_14533();
    event_func_14534();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_7946();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_14516();
    event_func_14928();
    event_func_14156();
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
    event_func_14157();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    event_func_6082();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_14929();
    event_func_14930();
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_appears_1_end;
    event_func_14931();
    event_func_14932();
    event_func_14933();
    event_func_14934();
    event_func_14935();
    event_func_14936();
    event_func_14937();
    event_func_14938();
    event_func_14939();
    event_func_14940();
    event_func_14941();
    event_func_14942();
    event_func_14943();
    event_func_14944();
    event_func_14945();
    event_func_14946();
    event_func_14947();
    event_func_14948();
    event_func_14949();
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_14950();
    event_func_14951();
    event_func_14952();
    event_func_14953();
    event_func_14954();
    event_func_14955();
    event_func_14956();
    event_func_14957();
    event_func_14958();
    event_func_14959();
    event_func_14960();
    event_func_14961();
    event_func_14962();
    event_func_14963();
    event_func_14964();
    event_func_14965();
    event_func_14966();
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_14967();
    if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1_end;
    event_func_14968();
    event_func_14969();
    event_func_14970();
    event_func_14971();
    event_func_14972();
    event_func_14973();
    event_func_14974();
    event_func_14975();
    event_func_14976();
    event_func_14977();
    event_func_14978();
    event_func_14979();
    event_func_14980();
    event_func_14981();
    event_func_14982();
    event_func_14983();
    event_func_14984();
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1_end: ;
    event_func_14985();
    event_func_14986();
    event_func_14987();
    event_func_14988();
    event_func_14989();
    event_func_14990();
    event_func_14991();
    event_func_14992();
    event_func_14993();
    event_func_14994();
    event_func_14995();
    event_func_14996();
    event_func_14997();
    event_func_14998();
    event_func_14999();
    event_func_15000();
    event_func_15001();
    event_func_15002();
    event_func_15003();
    event_func_15004();
    event_func_15005();
    event_func_15006();
    event_func_15007();
    event_func_15008();
    event_func_15009();
    event_func_15010();
    event_func_15011();
    event_func_15012();
    event_func_15013();
    event_func_15014();
    event_func_15015();
    event_func_15016();
    event_func_15017();
    event_func_15018();
    event_func_15019();
    event_func_15020();
    event_func_15021();
    event_func_15022();
    event_func_15023();
    event_func_15024();
    event_func_15025();
    event_func_15026();
    event_func_15027();
    event_func_15028();
    event_func_15029();
    event_func_15030();
    event_func_15031();
    event_func_15032();
    event_func_15033();
    event_func_15034();
    event_func_15035();
    event_func_15036();
    event_func_15037();
    event_func_15038();
    event_func_15039();
    event_func_15040();
    event_func_15041();
    event_func_15042();
    event_func_15043();
    event_func_15044();
    event_func_15045();
    event_func_15046();
    event_func_15047();
    event_func_15048();
    event_func_15049();
    event_func_15050();
    event_func_15051();
    event_func_15052();
    event_func_15053();
    event_func_15054();
    event_func_15055();
    event_func_15056();
    event_func_15057();
    event_func_15058();
    event_func_15059();
    event_func_15060();
    event_func_15061();
    event_func_15062();
    event_func_15063();
    event_func_15064();
    event_func_15065();
    event_func_15066();
    event_func_15067();
    event_func_15068();
    event_func_15069();
    event_func_15070();
    event_func_15071();
    event_func_15072();
    event_func_15073();
    event_func_15074();
    event_func_15075();
    event_func_15076();
    event_func_15077();
    event_func_15078();
    event_func_15079();
    event_func_15080();
    event_func_15081();
    event_func_15082();
    event_func_15083();
    event_func_15084();
    event_func_15085();
    event_func_15086();
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_1_end: ;
    event_func_15087();
    if (!group_main_engine_level_specific_methods_cutscenes_milla_finish_1) goto group_main_engine_level_specific_methods_cutscenes_milla_finish_1_end;
    event_func_15088();
    event_func_15089();
    event_func_15090();
    group_main_engine_level_specific_methods_cutscenes_milla_finish_1_end: ;
    event_func_15091();
    event_func_15092();
    event_func_15093();
    event_func_15094();
    event_func_15095();
    event_func_15096();
    event_func_15097();
    event_func_15098();
    if (!group_main_engine_level_specific_methods_local_transitions_1) goto group_main_engine_level_specific_methods_local_transitions_1_end;
    event_func_15099();
    event_func_15100();
    event_func_15101();
    event_func_15102();
    event_func_15103();
    group_main_engine_level_specific_methods_local_transitions_1_end: ;
    event_func_6874();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1) goto group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end;
    event_func_15104();
    event_func_15105();
    event_func_6877();
    event_func_6878();
    event_func_6879();
    event_func_6880();
    event_func_6881();
    event_func_6882();
    event_func_6883();
    event_func_6884();
    event_func_6885();
    event_func_6886();
    event_func_6887();
    event_func_6888();
    event_func_6889();
    event_func_6890();
    event_func_6891();
    event_func_6892();
    event_func_6893();
    event_func_6894();
    event_func_6895();
    event_func_6896();
    event_func_6897();
    event_func_6898();
    event_func_6899();
    event_func_6900();
    event_func_6901();
    event_func_6902();
    event_func_6903();
    event_func_6904();
    event_func_6905();
    event_func_6906();
    event_func_6907();
    event_func_6908();
    event_func_6909();
    event_func_6910();
    event_func_6911();
    event_func_6912();
    event_func_6914();
    event_func_6915();
    event_func_6916();
    event_func_6917();
    event_func_6918();
    event_func_6919();
    event_func_6920();
    event_func_6921();
    event_func_6922();
    event_func_6923();
    event_func_6924();
    event_func_6925();
    event_func_6926();
    event_func_6927();
    event_func_6928();
    event_func_6929();
    event_func_6930();
    event_func_6931();
    event_func_6932();
    event_func_6933();
    event_func_6934();
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1) goto group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1_end;
    event_func_15106();
    if (!group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1) goto group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1_end;
    event_func_15107();
    event_func_15108();
    event_func_15109();
    event_func_15110();
    event_func_15111();
    event_func_15112();
    event_func_15113();
    event_func_15114();
    event_func_15115();
    event_func_15116();
    event_func_15117();
    event_func_15118();
    event_func_15119();
    event_func_15120();
    event_func_15121();
    event_func_15122();
    event_func_15123();
    event_func_15124();
    event_func_15125();
    group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1_end: ;
    event_func_15126();
    event_func_15127();
    event_func_15128();
    event_func_15129();
    event_func_15130();
    event_func_15131();
    event_func_15132();
    event_func_15133();
    event_func_15134();
    event_func_15135();
    event_func_15136();
    event_func_15137();
    event_func_15138();
    event_func_15139();
    event_func_15140();
    event_func_15141();
    event_func_15142();
    event_func_15143();
    event_func_15144();
    event_func_15145();
    event_func_15146();
    event_func_15147();
    event_func_15148();
    event_func_15149();
    event_func_15150();
    event_func_15151();
    event_func_15152();
    event_func_15153();
    event_func_15154();
    event_func_15155();
    event_func_15156();
    event_func_15157();
    event_func_15158();
    event_func_15159();
    event_func_15160();
    event_func_15161();
    event_func_15162();
    event_func_15163();
    event_func_15164();
    event_func_15165();
    event_func_15166();
    event_func_15167();
    event_func_15168();
    event_func_15169();
    event_func_15170();
    event_func_15171();
    event_func_15172();
    event_func_15173();
    event_func_15174();
    event_func_15175();
    event_func_15176();
    event_func_15177();
    event_func_15178();
    event_func_15179();
    event_func_15180();
    event_func_15181();
    event_func_15182();
    event_func_15183();
    event_func_15184();
    event_func_15185();
    event_func_15186();
    event_func_15187();
    event_func_15188();
    event_func_15189();
    event_func_15190();
    event_func_15191();
    event_func_15192();
    event_func_15193();
    event_func_15194();
    event_func_15195();
    event_func_15196();
    event_func_15197();
    event_func_15198();
    event_func_15199();
    event_func_15200();
    event_func_15201();
    event_func_15202();
    event_func_15203();
    event_func_15204();
    event_func_15205();
    event_func_15206();
    event_func_15207();
    event_func_15208();
    event_func_15209();
    event_func_15210();
    event_func_15211();
    event_func_15212();
    event_func_15213();
    event_func_15214();
    event_func_15215();
    event_func_15216();
    event_func_15217();
    event_func_15218();
    event_func_15219();
    event_func_15220();
    event_func_15221();
    event_func_15222();
    event_func_15223();
    event_func_15224();
    event_func_15225();
    event_func_15226();
    event_func_15227();
    event_func_15228();
    event_func_15229();
    group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1_end: ;
    event_func_15230();
    event_func_15231();
    event_func_15232();
    event_func_15233();
    event_func_15234();
    event_func_15235();
    event_func_15236();
    event_func_15237();
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
    event_func_10929();
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
    event_func_14902();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_14903();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_15238();
    event_func_15239();
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
    event_func_4314();
    event_func_15240();
    event_func_15241();
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
void Frames::handle_frame_71_pre_events()
{
}
void Frames::event_func_15242()
{
    // event 1_70
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 12);
#endif
    }
    event_1_70_end: ;
}
void Frames::event_func_15243()
{
    // event 8_70
    {
        if (!(group_main_engine_1)) goto event_8_70_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 53);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_8_70_end: ;
}
void Frames::event_func_15244()
{
    // event 2107_70
    {
        if (!(group_main_engine_1)) goto event_2107_70_end;
        if (!((global_values->get(1)) == (4))) goto event_2107_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->set_y(height+200);
    }
    event_2107_70_end: ;
}
void Frames::event_func_15245()
{
    // event 2190_70
    {
        if (!(group_main_engine_1)) goto event_2190_70_end;
        ((Active*)get_instance(bossmmillafootback_3671_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaarmback_3672_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillapawback_3673_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaearback_3674_instances))->set_visible(false);
        bossmmillatail_3675_instances.clear_selection();
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossmmillabody_3676_instances.clear_selection();
        for (ObjectIterator it(bossmmillabody_3676_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmmillaleg_3677_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaarmfront_3678_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillafoot_3679_instances))->set_visible(false);
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmmillapawfront_3681_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillatailend_3685_instances))->set_visible(false);
        ((Active*)get_instance(bossmmillaearfront_3682_instances))->set_visible(false);
        ((Active*)get_instance(brevon_3683_instances))->set_visible(false);
    }
    event_2190_70_end: ;
}
void Frames::event_func_15246()
{
    // event 2191_70
    {
        if (!(group_main_engine_1)) goto event_2191_70_end;
        bossmmillahead_3680_instances.clear_selection();
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        bossmmillabody_3676_instances.clear_selection();
        spread_value(bossmmillabody_3676_instances, 0, 1);
        bossmmillatail_3675_instances.clear_selection();
        spread_value(bossmmillatail_3675_instances, 0, 0);
        for (ObjectIterator it(bossmmillatail_3675_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, bossmmillatail_3675_instances.size()-((Active*)*it)->alterables->values.get(0)-1);
        }
        for (ObjectIterator it(bossmmillahead_3680_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->set_y(-120);
        }
    }
    event_2191_70_end: ;
}
void Frames::event_func_15247()
{
    // event 2415_70
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_2415_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2415_70_end: ;
}
void Frames::event_func_15248()
{
    // event 2474_70
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2474_70_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(13);
        }
    }
    event_2474_70_end: ;
}
void Frames::on_frame_71_start_events()
{
    event_func_15242();
    event_func_4133();
    event_func_3265();
    event_func_14091();
    event_func_4318();
    event_func_15243();
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
    event_func_14909();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
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
    event_func_14910();
    event_func_10707();
    event_func_13539();
    event_func_10939();
    event_func_11501();
    event_func_9226();
    event_func_14097();
    event_func_9809();
    event_func_9810();
    event_func_14911();
    event_func_11947();
    event_func_14431();
    event_func_2686();
    event_func_2687();
    event_func_15244();
    event_func_6947();
    event_func_15245();
    event_func_15246();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_15247();
    event_func_15248();
    event_func_11073();
    event_func_5573();
    event_func_2694();
    event_func_14915();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_71_init()
{
    index = 70;
    width = 14208;
    height = 1334;
    virtual_width = 14208;
    virtual_height = 1334;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, NULL};
    qualifier_9.set(32, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemycacteon_990_instances, &minibossbulldozerdoor_1718_instances, &minibossbulldozer_1719_instances, &enemyrotorbladedeath_2126_instances, &enemyrotorblade_2205_instances, &enemymagmeon_2208_instances, &enemydnacannon_2264_instances, &enemybubblorbiter_2443_instances, &enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemytankbot_2821_instances, &enemyterreonleftleg_2983_instances, &enemyterreonrightleg_2984_instances, &enemyterreon_2985_instances, &enemypounder_3419_instances, &hazardorbitbeambase_3633_instances, &enemygatlinggun_3650_instances, &bossmmillahead_3680_instances, NULL};
    qualifier_20.set(18, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &minibossbulldozerhitbox_1776_instances, &hazardspikesup_558_instances, &bosshatchdoor_3317_instances, &objecttransporter_3344_instances, &lockedlabdoorbarrier_3541_instances, &fdlooplayer12_3636_instances, &fdlooplayer03_3639_instances, &fdlooplayer11_3640_instances, &fdlooplayer02_3641_instances, &fdlooplayer13_3642_instances, &fdlooplayer01_3643_instances, &fdlooplayer14_3646_instances, &fdlooplayer04_3647_instances, &fdlooplayer05_3648_instances, &fdlooplayer15_3649_instances, NULL};
    qualifier_7.set(40, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemycacteon_990_instances, &enemymagmeon_2208_instances, NULL};
    qualifier_4.set(36, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &fdlooplayer03_3639_instances, &fdlooplayer02_3641_instances, &fdlooplayer01_3643_instances, &fdlooplayer04_3647_instances, &fdlooplayer05_3648_instances, NULL};
    qualifier_10.set(8, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &fdlooplayer12_3636_instances, &fdlooplayer11_3640_instances, &fdlooplayer13_3642_instances, &fdlooplayer14_3646_instances, &fdlooplayer15_3649_instances, NULL};
    qualifier_11.set(8, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3590(0, 8), 0);
    add_background_object(create_levelparallaxpiece1_3591(0, 0), 0);
    add_background_object(create_levelparallaxpiece7_3592(0, 256), 0);
    add_background_object(create_levelparallaxpiece8_3593(64, 432), 0);
    add_object(create_fd3backpillar_3594(160, -32), 0);
    add_object(create_fd3backpillar_3594(744, -32), 0);
    add_object(create_fd3backpillar_3594(424, -32), 0);
    add_object(create_fd3backpillar_3594(1008, -32), 0);
    add_object(create_fd3backpillar_3594(1328, -32), 0);
    add_object(create_fd3backpillar_3594(1592, -32), 0);
    add_object(create_fd3backpillar_3594(1888, -32), 0);
    add_object(create_fd3backpillar_3594(2152, -32), 0);
    add_object(create_fd3backpillar_3594(2440, -32), 0);
    add_object(create_fd3backpillar_3594(2704, -32), 0);
    add_object(create_fd3backpillar_3594(2984, -32), 0);
    add_object(create_fd3backpillar_3594(3248, -32), 0);
    add_object(create_fd3backpillar_3594(3528, -32), 0);
    add_object(create_fd3backpillar_3594(3792, -32), 0);
    add_background_object(create_levelparallaxpiece9_3596(0, 552), 1);
    add_background_object(create_fdsilo1_3597(0, 768), 1);
    add_background_object(create_fdsilo1_3597(0, 640), 1);
    add_background_object(create_fdsilo1_3597(256, 768), 1);
    add_background_object(create_fdsilo1_3597(256, 640), 1);
    add_background_object(create_fdsilo1_3597(0, 512), 1);
    add_background_object(create_fdsilo1_3597(0, 384), 1);
    add_background_object(create_fdsilo1_3597(256, 512), 1);
    add_background_object(create_fdsilo1_3597(256, 384), 1);
    add_background_object(create_fdsilo1_3597(0, 256), 1);
    add_background_object(create_fdsilo1_3597(0, 128), 1);
    add_background_object(create_fdsilo1_3597(256, 256), 1);
    add_background_object(create_fdsilo1_3597(256, 128), 1);
    add_background_object(create_fdsilo1_3597(0, 0), 1);
    add_background_object(create_fdsilo1_3597(256, 0), 1);
    add_background_object(create_fdsilo1_3597(512, 768), 1);
    add_background_object(create_fdsilo1_3597(512, 640), 1);
    add_background_object(create_fdsilo1_3597(512, 512), 1);
    add_background_object(create_fdsilo1_3597(512, 384), 1);
    add_background_object(create_fdsilo1_3597(512, 256), 1);
    add_background_object(create_fdsilo1_3597(512, 128), 1);
    add_background_object(create_fdsilo1_3597(512, 0), 1);
    add_background_object(create_fdsilo1_3597(768, 768), 1);
    add_background_object(create_fdsilo1_3597(768, 640), 1);
    add_background_object(create_fdsilo1_3597(768, 512), 1);
    add_background_object(create_fdsilo1_3597(768, 384), 1);
    add_background_object(create_fdsilo1_3597(768, 256), 1);
    add_background_object(create_fdsilo1_3597(768, 128), 1);
    add_background_object(create_fdsilo1_3597(768, 0), 1);
    add_background_object(create_fdsilo1_3597(1024, 768), 1);
    add_background_object(create_fdsilo1_3597(1024, 640), 1);
    add_background_object(create_fdsilo1_3597(1024, 512), 1);
    add_background_object(create_fdsilo1_3597(1024, 384), 1);
    add_background_object(create_fdsilo1_3597(1024, 256), 1);
    add_background_object(create_fdsilo1_3597(1024, 128), 1);
    add_background_object(create_fdsilo1_3597(1024, 0), 1);
    add_background_object(create_fdsilo1_3597(1280, 768), 1);
    add_background_object(create_fdsilo1_3597(1280, 640), 1);
    add_background_object(create_fdsilo1_3597(1280, 512), 1);
    add_background_object(create_fdsilo1_3597(1280, 384), 1);
    add_background_object(create_fdsilo1_3597(1280, 256), 1);
    add_background_object(create_fdsilo1_3597(1280, 128), 1);
    add_background_object(create_fdsilo1_3597(1280, 0), 1);
    add_background_object(create_fdsilo1_3597(1536, 768), 1);
    add_background_object(create_fdsilo1_3597(1536, 640), 1);
    add_background_object(create_fdsilo1_3597(1536, 512), 1);
    add_background_object(create_fdsilo1_3597(1536, 384), 1);
    add_background_object(create_fdsilo1_3597(1536, 256), 1);
    add_background_object(create_fdsilo1_3597(1536, 128), 1);
    add_background_object(create_fdsilo1_3597(1536, 0), 1);
    add_background_object(create_fdsilo1_3597(1792, 768), 1);
    add_background_object(create_fdsilo1_3597(1792, 640), 1);
    add_background_object(create_fdsilo1_3597(1792, 512), 1);
    add_background_object(create_fdsilo1_3597(1792, 384), 1);
    add_background_object(create_fdsilo1_3597(1792, 256), 1);
    add_background_object(create_fdsilo1_3597(1792, 128), 1);
    add_background_object(create_fdsilo1_3597(1792, 0), 1);
    add_background_object(create_fdsilo1_3597(2048, 768), 1);
    add_background_object(create_fdsilo1_3597(2048, 640), 1);
    add_background_object(create_fdsilo1_3597(2048, 512), 1);
    add_background_object(create_fdsilo1_3597(2048, 384), 1);
    add_background_object(create_fdsilo1_3597(2048, 256), 1);
    add_background_object(create_fdsilo1_3597(2048, 128), 1);
    add_background_object(create_fdsilo1_3597(2048, 0), 1);
    add_background_object(create_fdsilo1_3597(2304, 768), 1);
    add_background_object(create_fdsilo1_3597(2304, 640), 1);
    add_background_object(create_fdsilo1_3597(2304, 512), 1);
    add_background_object(create_fdsilo1_3597(2304, 384), 1);
    add_background_object(create_fdsilo1_3597(2304, 256), 1);
    add_background_object(create_fdsilo1_3597(2304, 128), 1);
    add_background_object(create_fdsilo1_3597(2304, 0), 1);
    add_background_object(create_fdsilo1_3597(2560, 768), 1);
    add_background_object(create_fdsilo1_3597(2560, 640), 1);
    add_background_object(create_fdsilo1_3597(2560, 512), 1);
    add_background_object(create_fdsilo1_3597(2560, 384), 1);
    add_background_object(create_fdsilo1_3597(2560, 256), 1);
    add_background_object(create_fdsilo1_3597(2560, 128), 1);
    add_background_object(create_fdsilo1_3597(2560, 0), 1);
    add_background_object(create_fdsilo1_3597(2816, 768), 1);
    add_background_object(create_fdsilo1_3597(2816, 640), 1);
    add_background_object(create_fdsilo1_3597(2816, 512), 1);
    add_background_object(create_fdsilo1_3597(2816, 384), 1);
    add_background_object(create_fdsilo1_3597(2816, 256), 1);
    add_background_object(create_fdsilo1_3597(2816, 128), 1);
    add_background_object(create_fdsilo1_3597(2816, 0), 1);
    add_background_object(create_fdsilo1_3597(3072, 768), 1);
    add_background_object(create_fdsilo1_3597(3072, 640), 1);
    add_background_object(create_fdsilo1_3597(3072, 512), 1);
    add_background_object(create_fdsilo1_3597(3072, 384), 1);
    add_background_object(create_fdsilo1_3597(3072, 256), 1);
    add_background_object(create_fdsilo1_3597(3072, 128), 1);
    add_background_object(create_fdsilo1_3597(3072, 0), 1);
    add_background_object(create_fdsilo1_3597(3328, 768), 1);
    add_background_object(create_fdsilo1_3597(3328, 640), 1);
    add_background_object(create_fdsilo1_3597(3328, 512), 1);
    add_background_object(create_fdsilo1_3597(3328, 384), 1);
    add_background_object(create_fdsilo1_3597(3328, 256), 1);
    add_background_object(create_fdsilo1_3597(3328, 128), 1);
    add_background_object(create_fdsilo1_3597(3328, 0), 1);
    add_background_object(create_fdsilo1_3597(3584, 768), 1);
    add_background_object(create_fdsilo1_3597(3584, 640), 1);
    add_background_object(create_fdsilo1_3597(3584, 512), 1);
    add_background_object(create_fdsilo1_3597(3584, 384), 1);
    add_background_object(create_fdsilo1_3597(3584, 256), 1);
    add_background_object(create_fdsilo1_3597(3584, 128), 1);
    add_background_object(create_fdsilo1_3597(3584, 0), 1);
    add_background_object(create_fdsilo1_3597(3840, 768), 1);
    add_background_object(create_fdsilo1_3597(3840, 640), 1);
    add_background_object(create_fdsilo1_3597(3840, 512), 1);
    add_background_object(create_fdsilo1_3597(3840, 384), 1);
    add_background_object(create_fdsilo1_3597(3840, 256), 1);
    add_background_object(create_fdsilo1_3597(3840, 128), 1);
    add_background_object(create_fdsilo1_3597(3840, 0), 1);
    add_background_object(create_fdsilo1_3597(4096, 768), 1);
    add_background_object(create_fdsilo1_3597(4096, 640), 1);
    add_background_object(create_fdsilo1_3597(4096, 512), 1);
    add_background_object(create_fdsilo1_3597(4096, 384), 1);
    add_background_object(create_fdsilo1_3597(4096, 256), 1);
    add_background_object(create_fdsilo1_3597(4096, 128), 1);
    add_background_object(create_fdsilo1_3597(4096, 0), 1);
    add_background_object(create_fdsilo1_3597(4352, 768), 1);
    add_background_object(create_fdsilo1_3597(4352, 640), 1);
    add_background_object(create_fdsilo1_3597(4352, 512), 1);
    add_background_object(create_fdsilo1_3597(4352, 384), 1);
    add_background_object(create_fdsilo1_3597(4352, 256), 1);
    add_background_object(create_fdsilo1_3597(4352, 128), 1);
    add_background_object(create_fdsilo1_3597(4352, 0), 1);
    add_background_object(create_fdsilo1_3597(4608, 768), 1);
    add_background_object(create_fdsilo1_3597(4608, 640), 1);
    add_background_object(create_fdsilo1_3597(4608, 512), 1);
    add_background_object(create_fdsilo1_3597(4608, 384), 1);
    add_background_object(create_fdsilo1_3597(4608, 256), 1);
    add_background_object(create_fdsilo1_3597(4608, 128), 1);
    add_background_object(create_fdsilo1_3597(4608, 0), 1);
    add_background_object(create_fdsilo1_3597(4864, 768), 1);
    add_background_object(create_fdsilo1_3597(4864, 640), 1);
    add_background_object(create_fdsilo1_3597(4864, 512), 1);
    add_background_object(create_fdsilo1_3597(4864, 384), 1);
    add_background_object(create_fdsilo1_3597(4864, 256), 1);
    add_background_object(create_fdsilo1_3597(4864, 128), 1);
    add_background_object(create_fdsilo1_3597(4864, 0), 1);
    add_background_object(create_fdsilo1_3597(5120, 768), 1);
    add_background_object(create_fdsilo1_3597(5120, 640), 1);
    add_background_object(create_fdsilo1_3597(5120, 512), 1);
    add_background_object(create_fdsilo1_3597(5120, 384), 1);
    add_background_object(create_fdsilo1_3597(5120, 256), 1);
    add_background_object(create_fdsilo1_3597(5120, 128), 1);
    add_background_object(create_fdsilo1_3597(5120, 0), 1);
    add_background_object(create_fdsilo1_3597(5376, 768), 1);
    add_background_object(create_fdsilo1_3597(5376, 640), 1);
    add_background_object(create_fdsilo1_3597(5376, 512), 1);
    add_background_object(create_fdsilo1_3597(5376, 384), 1);
    add_background_object(create_fdsilo1_3597(5376, 256), 1);
    add_background_object(create_fdsilo1_3597(5376, 128), 1);
    add_background_object(create_fdsilo1_3597(5376, 0), 1);
    add_background_object(create_fdsilo1_3597(5632, 768), 1);
    add_background_object(create_fdsilo1_3597(5632, 640), 1);
    add_background_object(create_fdsilo1_3597(5632, 512), 1);
    add_background_object(create_fdsilo1_3597(5632, 384), 1);
    add_background_object(create_fdsilo1_3597(5632, 256), 1);
    add_background_object(create_fdsilo1_3597(5632, 128), 1);
    add_background_object(create_fdsilo1_3597(5632, 0), 1);
    add_background_object(create_fdsilo1_3597(5888, 768), 1);
    add_background_object(create_fdsilo1_3597(5888, 640), 1);
    add_background_object(create_fdsilo1_3597(5888, 512), 1);
    add_background_object(create_fdsilo1_3597(5888, 384), 1);
    add_background_object(create_fdsilo1_3597(5888, 256), 1);
    add_background_object(create_fdsilo1_3597(5888, 128), 1);
    add_background_object(create_fdsilo1_3597(5888, 0), 1);
    add_background_object(create_fdcoreback1_3598(13728, 32), 2);
    add_background_object(create_fdcoreback1_3598(13600, 32), 2);
    add_background_object(create_fdcoreback1_3598(13472, 32), 2);
    add_background_object(create_fdcoreback1_3598(13728, 160), 2);
    add_background_object(create_fdcoreback1_3598(13600, 160), 2);
    add_background_object(create_fdcoreback1_3598(13472, 160), 2);
    add_background_object(create_fdcoreback1_3598(13728, 288), 2);
    add_background_object(create_fdcoreback1_3598(13600, 288), 2);
    add_background_object(create_fdcoreback1_3598(13472, 288), 2);
    add_background_object(create_fdcoreback1_3598(13728, 416), 2);
    add_background_object(create_fdcoreback1_3598(13600, 416), 2);
    add_background_object(create_fdcoreback1_3598(13472, 416), 2);
    add_background_object(create_fdcoreback1_3598(13984, 32), 2);
    add_background_object(create_fdcoreback1_3598(13856, 32), 2);
    add_background_object(create_fdcoreback1_3598(13344, 224), 2);
    add_background_object(create_fdcoreback1_3598(13344, 96), 2);
    add_background_object(create_fdcoreback1_3598(14672, 992), 2);
    add_background_object(create_fdcoreback1_3598(14800, 992), 2);
    add_background_object(create_fdcoreback1_3598(14672, 864), 2);
    add_background_object(create_fdcoreback1_3598(14800, 864), 2);
    add_background_object(create_fdcoreback1_3598(14672, 672), 2);
    add_background_object(create_fdcoreback1_3598(14800, 672), 2);
    add_background_object(create_fdcoreback1_3598(14672, 544), 2);
    add_background_object(create_fdcoreback1_3598(14800, 544), 2);
    add_background_object(create_fdcoreback1_3598(11168, 800), 2);
    add_background_object(create_fdcoreback1_3598(11168, 672), 2);
    add_background_object(create_fdcoreback1_3598(11296, 672), 2);
    add_background_object(create_fdcoreback1_3598(11296, 800), 2);
    add_background_object(create_fdcoreback1_3598(11168, 1120), 2);
    add_background_object(create_fdcoreback1_3598(11168, 992), 2);
    add_background_object(create_fdcoreback1_3598(11296, 992), 2);
    add_background_object(create_fdcoreback1_3598(11296, 1120), 2);
    add_background_object(create_fdorbitbeamring1_3600(13424, 0), 2);
    add_background_object(create_fdorbitbeamring3_3601(13424, 240), 2);
    add_background_object(create_fdorbitbeamring2_3602(13664, 0), 2);
    add_background_object(create_fdorbitbeamring4_3603(13664, 240), 2);
    add_background_object(create_fdcoreback1_3598(0, 616), 2);
    add_background_object(create_fdcoreback1_3598(128, 360), 2);
    add_background_object(create_fdcoreback1_3598(0, 360), 2);
    add_background_object(create_fdcoreback1_3598(128, 616), 2);
    add_background_object(create_fdcoreback1_3598(256, 616), 2);
    add_background_object(create_fdcoreback1_3598(256, 360), 2);
    add_background_object(create_fdcoreback2_3599(0, 488), 2);
    add_background_object(create_fdcoreback2_3599(256, 488), 2);
    add_background_object(create_fdcoreback1_3598(384, 616), 2);
    add_background_object(create_fdcoreback1_3598(384, 360), 2);
    add_background_object(create_fdcoreback1_3598(512, 616), 2);
    add_background_object(create_fdcoreback1_3598(640, 360), 2);
    add_background_object(create_fdcoreback1_3598(512, 360), 2);
    add_background_object(create_fdcoreback1_3598(640, 616), 2);
    add_background_object(create_fdcoreback1_3598(768, 616), 2);
    add_background_object(create_fdcoreback1_3598(768, 360), 2);
    add_background_object(create_fdcoreback2_3599(512, 488), 2);
    add_background_object(create_fdcoreback2_3599(768, 488), 2);
    add_background_object(create_fdcoreback1_3598(896, 616), 2);
    add_background_object(create_fdcoreback1_3598(896, 360), 2);
    add_background_object(create_fdcoreback1_3598(1024, 616), 2);
    add_background_object(create_fdcoreback1_3598(1152, 360), 2);
    add_background_object(create_fdcoreback1_3598(1024, 360), 2);
    add_background_object(create_fdcoreback1_3598(1152, 616), 2);
    add_background_object(create_fdcoreback1_3598(1280, 616), 2);
    add_background_object(create_fdcoreback1_3598(1280, 360), 2);
    add_background_object(create_fdcoreback2_3599(1024, 488), 2);
    add_background_object(create_fdcoreback2_3599(1280, 488), 2);
    add_background_object(create_fdcoreback1_3598(1408, 616), 2);
    add_background_object(create_fdcoreback1_3598(1408, 360), 2);
    add_background_object(create_fdcoreback1_3598(1536, 616), 2);
    add_background_object(create_fdcoreback1_3598(1664, 360), 2);
    add_background_object(create_fdcoreback1_3598(1536, 360), 2);
    add_background_object(create_fdcoreback1_3598(1664, 616), 2);
    add_background_object(create_fdcoreback1_3598(1792, 616), 2);
    add_background_object(create_fdcoreback1_3598(1792, 360), 2);
    add_background_object(create_fdcoreback2_3599(1536, 488), 2);
    add_background_object(create_fdcoreback2_3599(1792, 488), 2);
    add_background_object(create_fdcoreback1_3598(1920, 616), 2);
    add_background_object(create_fdcoreback1_3598(1920, 360), 2);
    add_background_object(create_fdcoreback1_3598(2048, 616), 2);
    add_background_object(create_fdcoreback1_3598(2176, 360), 2);
    add_background_object(create_fdcoreback1_3598(2048, 360), 2);
    add_background_object(create_fdcoreback1_3598(2176, 616), 2);
    add_background_object(create_fdcoreback1_3598(2304, 616), 2);
    add_background_object(create_fdcoreback1_3598(2304, 360), 2);
    add_background_object(create_fdcoreback2_3599(2048, 488), 2);
    add_background_object(create_fdcoreback2_3599(2304, 488), 2);
    add_background_object(create_fdcoreback1_3598(2432, 616), 2);
    add_background_object(create_fdcoreback1_3598(2432, 360), 2);
    add_background_object(create_fdcoreback1_3598(2560, 616), 2);
    add_background_object(create_fdcoreback1_3598(2688, 360), 2);
    add_background_object(create_fdcoreback1_3598(2560, 360), 2);
    add_background_object(create_fdcoreback1_3598(2688, 616), 2);
    add_background_object(create_fdcoreback1_3598(2816, 616), 2);
    add_background_object(create_fdcoreback1_3598(2816, 360), 2);
    add_background_object(create_fdcoreback2_3599(2560, 488), 2);
    add_background_object(create_fdcoreback2_3599(2816, 488), 2);
    add_background_object(create_fdcoreback1_3598(2944, 616), 2);
    add_background_object(create_fdcoreback1_3598(2944, 360), 2);
    add_background_object(create_fdcoreback1_3598(3072, 616), 2);
    add_background_object(create_fdcoreback1_3598(3200, 360), 2);
    add_background_object(create_fdcoreback1_3598(3072, 360), 2);
    add_background_object(create_fdcoreback1_3598(3200, 616), 2);
    add_background_object(create_fdcoreback1_3598(3328, 616), 2);
    add_background_object(create_fdcoreback1_3598(3328, 360), 2);
    add_background_object(create_fdcoreback2_3599(3072, 488), 2);
    add_background_object(create_fdcoreback2_3599(3328, 488), 2);
    add_background_object(create_fdcoreback1_3598(3456, 616), 2);
    add_background_object(create_fdcoreback1_3598(3456, 360), 2);
    add_background_object(create_fdcoreback1_3598(3584, 616), 2);
    add_background_object(create_fdcoreback1_3598(3712, 360), 2);
    add_background_object(create_fdcoreback1_3598(3584, 360), 2);
    add_background_object(create_fdcoreback1_3598(3712, 616), 2);
    add_background_object(create_fdcoreback1_3598(3840, 616), 2);
    add_background_object(create_fdcoreback1_3598(3840, 360), 2);
    add_background_object(create_fdcoreback2_3599(3584, 488), 2);
    add_background_object(create_fdcoreback2_3599(3840, 488), 2);
    add_background_object(create_fdcoreback1_3598(3968, 616), 2);
    add_background_object(create_fdcoreback1_3598(3968, 360), 2);
    add_background_object(create_fdcoreback1_3598(4096, 616), 2);
    add_background_object(create_fdcoreback1_3598(4096, 360), 2);
    add_background_object(create_fdcoreback2_3599(4096, 488), 2);
    add_background_object(create_fdcoreback1_3598(4224, 616), 2);
    add_background_object(create_fdcoreback1_3598(4224, 360), 2);
    add_background_object(create_fdplateglass_3660(280, 488), 2);
    add_background_object(create_fdplateglass_3660(384, 488), 2);
    add_background_object(create_fdplateglass_3660(24, 488), 2);
    add_background_object(create_fdplateglass_3660(128, 488), 2);
    add_background_object(create_fdplateglass_3660(792, 488), 2);
    add_background_object(create_fdplateglass_3660(896, 488), 2);
    add_background_object(create_fdplateglass_3660(536, 488), 2);
    add_background_object(create_fdplateglass_3660(640, 488), 2);
    add_background_object(create_fdplateglass_3660(1304, 488), 2);
    add_background_object(create_fdplateglass_3660(1408, 488), 2);
    add_background_object(create_fdplateglass_3660(1048, 488), 2);
    add_background_object(create_fdplateglass_3660(1152, 488), 2);
    add_background_object(create_fdplateglass_3660(1816, 488), 2);
    add_background_object(create_fdplateglass_3660(1920, 488), 2);
    add_background_object(create_fdplateglass_3660(1560, 488), 2);
    add_background_object(create_fdplateglass_3660(1664, 488), 2);
    add_background_object(create_fdplateglass_3660(2328, 488), 2);
    add_background_object(create_fdplateglass_3660(2432, 488), 2);
    add_background_object(create_fdplateglass_3660(2072, 488), 2);
    add_background_object(create_fdplateglass_3660(2176, 488), 2);
    add_background_object(create_fdplateglass_3660(2840, 488), 2);
    add_background_object(create_fdplateglass_3660(2944, 488), 2);
    add_background_object(create_fdplateglass_3660(2584, 488), 2);
    add_background_object(create_fdplateglass_3660(2688, 488), 2);
    add_background_object(create_fdplateglass_3660(3352, 488), 2);
    add_background_object(create_fdplateglass_3660(3456, 488), 2);
    add_background_object(create_fdplateglass_3660(3096, 488), 2);
    add_background_object(create_fdplateglass_3660(3200, 488), 2);
    add_background_object(create_fdplateglass_3660(3864, 488), 2);
    add_background_object(create_fdplateglass_3660(3968, 488), 2);
    add_background_object(create_fdplateglass_3660(3608, 488), 2);
    add_background_object(create_fdplateglass_3660(3712, 488), 2);
    add_background_object(create_fdplateglass_3660(4120, 488), 2);
    add_background_object(create_fdplateglass_3660(4224, 488), 2);
    add_background_object(create_fdcoreback1_3598(4352, 616), 2);
    add_background_object(create_fdcoreback1_3598(4352, 360), 2);
    add_background_object(create_fdcoreback2_3599(4352, 488), 2);
    add_background_object(create_fdcoreback1_3598(4480, 616), 2);
    add_background_object(create_fdcoreback1_3598(4480, 360), 2);
    add_background_object(create_fdcoreback1_3598(4608, 616), 2);
    add_background_object(create_fdcoreback1_3598(4736, 360), 2);
    add_background_object(create_fdcoreback1_3598(4608, 360), 2);
    add_background_object(create_fdcoreback1_3598(4736, 616), 2);
    add_background_object(create_fdcoreback1_3598(4864, 616), 2);
    add_background_object(create_fdcoreback1_3598(4864, 360), 2);
    add_background_object(create_fdcoreback2_3599(4608, 488), 2);
    add_background_object(create_fdcoreback2_3599(4864, 488), 2);
    add_background_object(create_fdcoreback1_3598(4992, 616), 2);
    add_background_object(create_fdcoreback1_3598(4992, 360), 2);
    add_background_object(create_fdcoreback1_3598(5120, 616), 2);
    add_background_object(create_fdcoreback1_3598(5120, 360), 2);
    add_background_object(create_fdcoreback2_3599(5120, 488), 2);
    add_background_object(create_fdcoreback1_3598(5248, 616), 2);
    add_background_object(create_fdcoreback1_3598(5248, 360), 2);
    add_background_object(create_fdplateglass_3660(4376, 488), 2);
    add_background_object(create_fdplateglass_3660(4480, 488), 2);
    add_background_object(create_fdplateglass_3660(4888, 488), 2);
    add_background_object(create_fdplateglass_3660(4992, 488), 2);
    add_background_object(create_fdplateglass_3660(4632, 488), 2);
    add_background_object(create_fdplateglass_3660(4736, 488), 2);
    add_background_object(create_fdplateglass_3660(5144, 488), 2);
    add_background_object(create_fdplateglass_3660(5248, 488), 2);
    add_background_object(create_fdcoreback1_3598(5376, 616), 2);
    add_background_object(create_fdcoreback1_3598(5504, 360), 2);
    add_background_object(create_fdcoreback1_3598(5376, 360), 2);
    add_background_object(create_fdcoreback1_3598(5504, 616), 2);
    add_background_object(create_fdcoreback1_3598(5632, 616), 2);
    add_background_object(create_fdcoreback1_3598(5632, 360), 2);
    add_background_object(create_fdcoreback2_3599(5376, 488), 2);
    add_background_object(create_fdcoreback2_3599(5632, 488), 2);
    add_background_object(create_fdcoreback1_3598(5760, 616), 2);
    add_background_object(create_fdcoreback1_3598(5760, 360), 2);
    add_background_object(create_fdcoreback1_3598(5888, 616), 2);
    add_background_object(create_fdcoreback1_3598(5888, 360), 2);
    add_background_object(create_fdcoreback2_3599(5888, 488), 2);
    add_background_object(create_fdcoreback1_3598(6016, 616), 2);
    add_background_object(create_fdcoreback1_3598(6016, 360), 2);
    add_background_object(create_fdplateglass_3660(5656, 488), 2);
    add_background_object(create_fdplateglass_3660(5760, 488), 2);
    add_background_object(create_fdplateglass_3660(5400, 488), 2);
    add_background_object(create_fdplateglass_3660(5504, 488), 2);
    add_background_object(create_fdplateglass_3660(5912, 488), 2);
    add_background_object(create_fdplateglass_3660(6016, 488), 2);
    add_background_object(create_fdcoreback1_3598(6144, 616), 2);
    add_background_object(create_fdcoreback1_3598(6144, 360), 2);
    add_background_object(create_fdcoreback2_3599(6144, 488), 2);
    add_background_object(create_fdcoreback1_3598(6272, 616), 2);
    add_background_object(create_fdcoreback1_3598(6272, 360), 2);
    add_background_object(create_fdcoreback1_3598(6400, 616), 2);
    add_background_object(create_fdcoreback1_3598(6400, 360), 2);
    add_background_object(create_fdcoreback2_3599(6400, 488), 2);
    add_background_object(create_fdcoreback1_3598(6528, 616), 2);
    add_background_object(create_fdcoreback1_3598(6528, 360), 2);
    add_background_object(create_fdplateglass_3660(6168, 488), 2);
    add_background_object(create_fdplateglass_3660(6272, 488), 2);
    add_background_object(create_fdplateglass_3660(6424, 488), 2);
    add_background_object(create_fdplateglass_3660(6528, 488), 2);
    add_background_object(create_fdcoreback1_3598(6656, 616), 2);
    add_background_object(create_fdcoreback1_3598(6656, 360), 2);
    add_background_object(create_fdcoreback2_3599(6656, 488), 2);
    add_background_object(create_fdcoreback1_3598(6784, 616), 2);
    add_background_object(create_fdcoreback1_3598(6784, 360), 2);
    add_background_object(create_fdcoreback1_3598(6912, 616), 2);
    add_background_object(create_fdcoreback1_3598(6912, 360), 2);
    add_background_object(create_fdcoreback2_3599(6912, 488), 2);
    add_background_object(create_fdcoreback1_3598(7040, 616), 2);
    add_background_object(create_fdcoreback1_3598(7040, 360), 2);
    add_background_object(create_fdplateglass_3660(6680, 488), 2);
    add_background_object(create_fdplateglass_3660(6784, 488), 2);
    add_background_object(create_fdplateglass_3660(6936, 488), 2);
    add_background_object(create_fdplateglass_3660(7040, 488), 2);
    add_background_object(create_fdcoreback1_3598(7168, 616), 2);
    add_background_object(create_fdcoreback1_3598(7168, 360), 2);
    add_background_object(create_fdcoreback2_3599(7168, 488), 2);
    add_background_object(create_fdcoreback1_3598(7296, 616), 2);
    add_background_object(create_fdcoreback1_3598(7296, 360), 2);
    add_background_object(create_fdcoreback1_3598(7424, 616), 2);
    add_background_object(create_fdcoreback1_3598(7424, 360), 2);
    add_background_object(create_fdcoreback2_3599(7424, 488), 2);
    add_background_object(create_fdcoreback1_3598(7552, 616), 2);
    add_background_object(create_fdcoreback1_3598(7552, 360), 2);
    add_background_object(create_fdplateglass_3660(7192, 488), 2);
    add_background_object(create_fdplateglass_3660(7296, 488), 2);
    add_background_object(create_fdplateglass_3660(7448, 488), 2);
    add_background_object(create_fdplateglass_3660(7552, 488), 2);
    add_background_object(create_fdcoreback1_3598(7680, 616), 2);
    add_background_object(create_fdcoreback1_3598(7680, 360), 2);
    add_background_object(create_fdcoreback2_3599(7680, 488), 2);
    add_background_object(create_fdcoreback1_3598(7808, 616), 2);
    add_background_object(create_fdcoreback1_3598(7808, 360), 2);
    add_background_object(create_fdcoreback1_3598(7936, 616), 2);
    add_background_object(create_fdcoreback1_3598(7936, 360), 2);
    add_background_object(create_fdcoreback2_3599(7936, 488), 2);
    add_background_object(create_fdcoreback1_3598(8064, 616), 2);
    add_background_object(create_fdcoreback1_3598(8064, 360), 2);
    add_background_object(create_fdplateglass_3660(7704, 488), 2);
    add_background_object(create_fdplateglass_3660(7808, 488), 2);
    add_background_object(create_fdplateglass_3660(7960, 488), 2);
    add_background_object(create_fdplateglass_3660(8064, 488), 2);
    add_background_object(create_fdcoreback1_3598(8192, 616), 2);
    add_background_object(create_fdcoreback1_3598(8192, 360), 2);
    add_background_object(create_fdcoreback2_3599(8192, 488), 2);
    add_background_object(create_fdcoreback1_3598(8320, 616), 2);
    add_background_object(create_fdcoreback1_3598(8320, 360), 2);
    add_background_object(create_fdcoreback1_3598(8448, 616), 2);
    add_background_object(create_fdcoreback1_3598(8448, 360), 2);
    add_background_object(create_fdcoreback2_3599(8448, 488), 2);
    add_background_object(create_fdcoreback1_3598(8576, 616), 2);
    add_background_object(create_fdcoreback1_3598(8576, 360), 2);
    add_background_object(create_fdplateglass_3660(8216, 488), 2);
    add_background_object(create_fdplateglass_3660(8320, 488), 2);
    add_background_object(create_fdplateglass_3660(8472, 488), 2);
    add_background_object(create_fdplateglass_3660(8576, 488), 2);
    add_background_object(create_fdcoreback1_3598(8704, 616), 2);
    add_background_object(create_fdcoreback1_3598(8704, 360), 2);
    add_background_object(create_fdcoreback2_3599(8704, 488), 2);
    add_background_object(create_fdcoreback1_3598(8832, 616), 2);
    add_background_object(create_fdcoreback1_3598(8832, 360), 2);
    add_background_object(create_fdplateglass_3660(8728, 488), 2);
    add_background_object(create_fdplateglass_3660(8832, 488), 2);
    add_background_object(create_fdcoreback2_3599(10240, 544), 2);
    add_background_object(create_fdcoreback2_3599(10240, 416), 2);
    add_background_object(create_fdcoreback2_3599(10288, 544), 2);
    add_background_object(create_fdcoreback2_3599(10288, 416), 2);
    add_background_object(create_fdcoreback2_3599(10336, 544), 2);
    add_background_object(create_fdcoreback2_3599(10336, 416), 2);
    add_background_object(create_fdcoreback2_3599(10384, 544), 2);
    add_background_object(create_fdcoreback2_3599(10384, 416), 2);
    add_background_object(create_fdcoreback2_3599(10432, 544), 2);
    add_background_object(create_fdcoreback2_3599(10432, 416), 2);
    add_background_object(create_fdcoreback2_3599(10480, 544), 2);
    add_background_object(create_fdcoreback2_3599(10480, 416), 2);
    add_background_object(create_fdcoreback2_3599(10528, 544), 2);
    add_background_object(create_fdcoreback2_3599(10528, 416), 2);
    add_background_object(create_fdcoreback2_3599(10576, 544), 2);
    add_background_object(create_fdcoreback2_3599(10576, 416), 2);
    add_background_object(create_fdcoreback1_3598(10432, 736), 2);
    add_background_object(create_fdcoreback1_3598(10304, 736), 2);
    add_background_object(create_fdcoreback2_3599(11488, 928), 2);
    add_background_object(create_fdcoreback2_3599(11640, 928), 2);
    add_background_object(create_fdplateglass_3660(11512, 928), 2);
    add_background_object(create_fdcoreback1_3598(12032, 224), 2);
    add_background_object(create_fdcoreback2_3599(12008, 224), 2);
    add_background_object(create_fdcoreback2_3599(12160, 224), 2);
    add_background_object(create_fdcoreback1_3598(10528, 232), 2);
    add_background_object(create_fdcoreback1_3598(10528, -24), 2);
    add_background_object(create_fdcoreback1_3598(10656, 232), 2);
    add_background_object(create_fdcoreback1_3598(10656, -24), 2);
    add_background_object(create_fdcoreback1_3598(10784, -24), 2);
    add_background_object(create_fdplateglass_3660(10528, 104), 2);
    add_background_object(create_fdplateglass_3660(10656, 104), 2);
    add_background_object(create_fdcoreback1_3598(10784, 232), 2);
    add_background_object(create_fdplateglass_3660(10784, 104), 2);
    add_background_object(create_fdcoreback1_3598(10912, -24), 2);
    add_background_object(create_fdcoreback1_3598(10912, 232), 2);
    add_background_object(create_fdplateglass_3660(10912, 104), 2);
    add_background_object(create_fdcoreback1_3598(11040, -24), 2);
    add_background_object(create_fdcoreback1_3598(11040, 232), 2);
    add_background_object(create_fdcoreback1_3598(11168, -24), 2);
    add_background_object(create_fdcoreback1_3598(10400, 232), 2);
    add_background_object(create_fdcoreback1_3598(10400, -24), 2);
    add_background_object(create_fdcoreback1_3598(10400, 104), 2);
    add_background_object(create_fdcoreback1_3598(11040, 104), 2);
    add_background_object(create_fdcoreback1_3598(11168, 104), 2);
    add_background_object(create_fdcoreback1_3598(11296, -24), 2);
    add_background_object(create_fdcoreback1_3598(11488, -24), 2);
    add_background_object(create_fdcoreback1_3598(11616, -24), 2);
    add_background_object(create_fdcoreback1_3598(12512, 224), 2);
    add_background_object(create_fdcoreback1_3598(12640, 224), 2);
    add_background_object(create_fdcoreback1_3598(12704, 224), 2);
    add_background_object(create_fdcoreback1_3598(12704, 96), 2);
    add_background_object(create_fdcoreback1_3598(12576, 96), 2);
    add_background_object(create_fdcoreback1_3598(12832, 224), 2);
    add_background_object(create_fdcoreback1_3598(12832, 96), 2);
    add_background_object(create_fdcoreback1_3598(12960, 320), 2);
    add_background_object(create_fdcoreback1_3598(12960, 72), 2);
    add_background_object(create_fdcoreback1_3598(13088, 72), 2);
    add_background_object(create_fdcoreback1_3598(13088, 320), 2);
    add_background_object(create_fdcoreback1_3598(13216, 224), 2);
    add_background_object(create_fdcoreback1_3598(13216, 96), 2);
    add_background_object(create_fdplateglass_3660(12960, 200), 2);
    add_background_object(create_fdplateglass_3660(13088, 200), 2);
    add_background_object(create_fdpowercore2_3661(13024, 1248), 2);
    add_background_object(create_fdpowercore3_3662(13024, 1120), 2);
    add_background_object(create_fdpowercore1_3663(13144, 1056), 2);
    add_background_object(create_fdpowercore3_3662(12896, 1184), 2);
    add_background_object(create_fdpowercore2_3661(12896, 1248), 2);
    add_background_object(create_fdpowercore2_3661(13024, 1184), 2);
    add_background_object(create_fdpowercore2_3661(13280, 1248), 2);
    add_background_object(create_fdpowercore3_3662(13280, 1120), 2);
    add_background_object(create_fdpowercore2_3661(13280, 1184), 2);
    add_background_object(create_fdcoreterminal_3664(13184, 1232), 2);
    add_background_object(create_fdcoreterminal_3664(13344, 1232), 2);
    add_background_object(create_fdpowercore2_3661(13536, 1248), 2);
    add_background_object(create_fdpowercore3_3662(13536, 1120), 2);
    add_background_object(create_fdpowercore2_3661(13536, 1184), 2);
    add_background_object(create_fdpowercore3_3662(13664, 1184), 2);
    add_background_object(create_fdpowercore2_3661(13664, 1248), 2);
    add_background_object(create_fdcoreback1_3598(12416, 1184), 2);
    add_background_object(create_fdcoreback1_3598(12544, 1184), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(14456, 189), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-244, 727), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-232, 728), 2);
    add_object(create_objectfuel_528(-212, 716), 2);
    add_object(create_lockedlabdoorback_3506(10600, 800), 2);
    add_object(create_enemygatlingguntable_3604(6176, 640), 2);
    add_object(create_enemygatlingguntable_3604(7416, 448), 2);
    add_object(create_enemygatlingguntable_3604(7920, 640), 2);
    add_object(create_enemygatlingguntable_3604(8016, 576), 2);
    add_object(create_labdoorback_3500(12552, 288), 2);
    add_object(create_labdoorback_3500(13288, 288), 2);
    add_object(create_kingdomstone_3665(13312, 1224), 2);
    add_object(create_computerterminal_3666(13192, 1232), 2);
    add_object(create_computerterminal3_3667(13360, 1392), 2);
    add_object(create_computerterminal2_3668(13352, 1232), 2);
    add_object(create_labdoorback_3500(12712, 1248), 2);
    add_object(create_labdoorback_3500(14152, 96), 2);
    add_object(create_labdoorback_3500(12872, 288), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_fdcore4_3607(11648, 128), 3);
    add_background_object(create_fdcore4_3607(11200, 192), 3);
    add_background_object(create_fdcore4_3607(11264, 192), 3);
    add_background_object(create_fdcore1_3606(11904, -32), 3);
    add_background_object(create_fdcore4_3607(12032, 352), 3);
    add_background_object(create_fdcore4_3607(12096, 320), 3);
    add_background_object(create_fdcore4_3607(12160, 352), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 320), 3);
    add_background_object(create_fdcorefloor2_3608(12224, 320), 3);
    add_background_object(create_fdcore1_3606(12000, 672), 3);
    add_background_object(create_fdcore2_3610(12128, 672), 3);
    add_background_object(create_fdcore2_3610(7552, 256), 3);
    add_background_object(create_fdcore2_3610(7296, 256), 3);
    add_background_object(create_fdcore1_3606(7424, 256), 3);
    add_background_object(create_fdcore2_3610(1408, 256), 3);
    add_background_object(create_fdcore1_3606(1536, 256), 3);
    add_background_object(create_fdcore4_3607(11296, 1056), 3);
    add_background_object(create_fdcore2_3610(11584, 320), 3);
    add_background_object(create_fdcore1_3606(11584, 448), 3);
    add_background_object(create_fdcore1_3606(11584, 192), 3);
    add_background_object(create_fdcore1_3606(11456, 640), 3);
    add_background_object(create_fdcore2_3610(11456, 512), 3);
    add_background_object(create_fdcore2_3610(11456, 768), 3);
    add_background_object(create_fdcore1_3606(12288, 896), 3);
    add_background_object(create_fdcore2_3610(10368, 288), 3);
    add_background_object(create_fdcore1_3606(10496, 288), 3);
    add_background_object(create_fdcoreloop2_3605(7400, 552), 3);
    add_background_object(create_fdcore2_3610(11008, 736), 3);
    add_background_object(create_fdcore2_3610(15216, 832), 3);
    add_background_object(create_fdcore1_3606(14960, 608), 3);
    add_background_object(create_fdcorefloor1_3615(128, 672), 3);
    add_background_object(create_fdcorefloor1_3615(192, 672), 3);
    add_background_object(create_fdcore1_3606(128, 704), 3);
    add_background_object(create_fdcore1_3606(0, 832), 3);
    add_background_object(create_fdcorefloor3_3611(192, 960), 3);
    add_background_object(create_fdcorefloor3_3611(128, 960), 3);
    add_background_object(create_fdcorefloor3_3611(64, 960), 3);
    add_background_object(create_fdcorefloor3_3611(256, 960), 3);
    add_background_object(create_fdcorefloor3_3611(320, 960), 3);
    add_background_object(create_fdcore2_3610(128, 832), 3);
    add_background_object(create_fdcore2_3610(0, 704), 3);
    add_background_object(create_fdcorefloor3_3611(0, 960), 3);
    add_background_object(create_fdcorefloor1_3615(0, 672), 3);
    add_background_object(create_fdcorefloor1_3615(64, 672), 3);
    add_background_object(create_fdcorefloor1_3615(14384, 928), 3);
    add_background_object(create_fdcoreloop1_3628(14672, 544), 3);
    add_background_object(create_fdcoreloop2_3605(14800, 992), 3);
    add_background_object(create_fdcoreloop3_3629(14736, 928), 3);
    add_background_object(create_fdcorefloor1_3615(14576, 928), 3);
    add_background_object(create_fdcorefloor5_3619(14640, 928), 3);
    add_background_object(create_fdcorefloor6_3620(14640, 960), 3);
    add_background_object(create_fdcorefloor3_3611(14576, 960), 3);
    add_background_object(create_fdcorefloor3_3611(14384, 960), 3);
    add_background_object(create_fdcore4_3607(14736, 800), 3);
    add_background_object(create_fdcore4_3607(14800, 800), 3);
    add_background_object(create_fdcoreloop3_3629(14736, 608), 3);
    add_background_object(create_fdcorefloor1_3615(14960, 608), 3);
    add_background_object(create_fdcorefloor3_3611(14960, 704), 3);
    add_background_object(create_fdcorefloor7_3622(14928, 704), 3);
    add_background_object(create_fdcorefloor8_3621(14928, 608), 3);
    add_background_object(create_fdcorefloor1_3615(15024, 608), 3);
    add_background_object(create_fdcorefloor3_3611(15024, 704), 3);
    add_background_object(create_fdcorefloor1_3615(14960, 800), 3);
    add_background_object(create_fdcorefloor8_3621(14928, 800), 3);
    add_background_object(create_fdcorefloor1_3615(15024, 800), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 832), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 896), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 960), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 1024), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 1088), 3);
    add_background_object(create_fdcore2_3610(14960, 832), 3);
    add_background_object(create_fdcore1_3606(15088, 832), 3);
    add_background_object(create_fdcorefloor1_3615(15088, 800), 3);
    add_background_object(create_fdcorefloor1_3615(15152, 800), 3);
    add_background_object(create_fdcore1_3606(14960, 960), 3);
    add_background_object(create_fdcore2_3610(15088, 960), 3);
    add_background_object(create_fdcore2_3610(14960, 1152), 3);
    add_background_object(create_fdcore1_3606(15088, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(14864, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14800, 1120), 3);
    add_background_object(create_fdcorefloor9_3627(14928, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14736, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14672, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14608, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14544, 1120), 3);
    add_background_object(create_fdcorefloor1_3615(14480, 1120), 3);
    add_background_object(create_fdcore2_3610(14704, 1152), 3);
    add_background_object(create_fdcore1_3606(14832, 1152), 3);
    add_background_object(create_fdcore2_3610(14448, 1152), 3);
    add_background_object(create_fdcore1_3606(14576, 1152), 3);
    add_background_object(create_fdcorefloor1_3615(14416, 1120), 3);
    add_background_object(create_fdcorefloor8_3621(14416, 1120), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 1152), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 1216), 3);
    add_background_object(create_fdcorefloor1_3615(14512, 928), 3);
    add_background_object(create_fdcorefloor3_3611(14512, 960), 3);
    add_background_object(create_fdcorefloor1_3615(14448, 928), 3);
    add_background_object(create_fdcorefloor3_3611(14448, 960), 3);
    add_background_object(create_fdcorefloor3_3611(14896, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14832, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14768, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14704, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14640, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14576, 512), 3);
    add_background_object(create_fdcorefloor6_3620(14960, 512), 3);
    add_background_object(create_fdcore2_3610(14704, 384), 3);
    add_background_object(create_fdcore1_3606(14832, 384), 3);
    add_background_object(create_fdcorefloor2_3608(14960, 448), 3);
    add_background_object(create_fdcorefloor2_3608(14960, 384), 3);
    add_background_object(create_fdcorefloor2_3608(14960, 320), 3);
    add_background_object(create_fdcore2_3610(14832, 256), 3);
    add_background_object(create_fdcorefloor2_3608(14960, 256), 3);
    add_background_object(create_fdcore1_3606(14704, 256), 3);
    add_background_object(create_fdcore1_3606(14576, 384), 3);
    add_background_object(create_fdcore2_3610(14576, 256), 3);
    add_background_object(create_fdcorefloor5_3619(14640, 544), 3);
    add_background_object(create_fdcorefloor8_3621(14608, 544), 3);
    add_background_object(create_fdcorefloor2_3608(14640, 576), 3);
    add_background_object(create_fdcorefloor4_3609(14608, 576), 3);
    add_background_object(create_fdcorefloor2_3608(14640, 640), 3);
    add_background_object(create_fdcorefloor4_3609(14608, 640), 3);
    add_background_object(create_fdcorefloor2_3608(14640, 704), 3);
    add_background_object(create_fdcorefloor4_3609(14608, 704), 3);
    add_background_object(create_fdcorefloor2_3608(14640, 768), 3);
    add_background_object(create_fdcorefloor4_3609(14608, 768), 3);
    add_background_object(create_fdcorefloor6_3620(14640, 832), 3);
    add_background_object(create_fdcorefloor7_3622(14608, 832), 3);
    add_background_object(create_fdcorefloor3_3611(14512, 512), 3);
    add_background_object(create_fdcorefloor3_3611(14448, 512), 3);
    add_background_object(create_fdcore2_3610(14448, 384), 3);
    add_background_object(create_fdcore1_3606(14448, 256), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 384), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 448), 3);
    add_background_object(create_fdcorefloor7_3622(14416, 512), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 320), 3);
    add_background_object(create_fdcorefloor4_3609(14416, 256), 3);
    add_background_object(create_fdcorefloor4_3609(14928, 640), 3);
    add_background_object(create_fdcorefloor5_3619(15216, 672), 3);
    add_background_object(create_fdcorefloor2_3608(15088, 640), 3);
    add_background_object(create_fdcorefloor6_3620(15216, 704), 3);
    add_background_object(create_fdcorefloor1_3615(15088, 672), 3);
    add_background_object(create_fdcorefloor3_3611(15088, 704), 3);
    add_background_object(create_fdcorefloor1_3615(15152, 672), 3);
    add_background_object(create_fdcorefloor3_3611(15152, 704), 3);
    add_background_object(create_fdcorefloor7_3622(14416, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14448, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14512, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14576, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14640, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14704, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14768, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14832, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(14896, 1280), 3);
    add_background_object(create_fdcorefloor1_3615(15216, 800), 3);
    add_background_object(create_fdcore4_3607(14960, 1088), 3);
    add_background_object(create_fdcore4_3607(15024, 1088), 3);
    add_background_object(create_fdcore4_3607(15088, 1216), 3);
    add_background_object(create_fdcore4_3607(15152, 1216), 3);
    add_background_object(create_fdcorefloor3_3611(14960, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(15024, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(15088, 1280), 3);
    add_background_object(create_fdcorefloor3_3611(15152, 1280), 3);
    add_background_object(create_fdcore2_3610(15216, 1152), 3);
    add_background_object(create_fdcore1_3606(15216, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(15216, 1280), 3);
    add_background_object(create_fdcore4_3607(15216, 960), 3);
    add_background_object(create_fdcore1_3606(256, 832), 3);
    add_background_object(create_fdcore2_3610(256, 704), 3);
    add_background_object(create_fdcorefloor1_3615(256, 672), 3);
    add_background_object(create_fdcorefloor1_3615(320, 672), 3);
    add_background_object(create_fdcorefloor5_3619(15088, 608), 3);
    add_background_object(create_fdcorefloor9_3627(15088, 672), 3);
    add_background_object(create_fdcorefloor3_3611(11392, 640), 3);
    add_background_object(create_fdcorefloor1_3615(11072, 736), 3);
    add_background_object(create_fdcorefloor3_3611(11072, 832), 3);
    add_background_object(create_fdcorefloor6_3620(11136, 832), 3);
    add_background_object(create_fdcorefloor5_3619(11136, 736), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 768), 3);
    add_background_object(create_fdcorefloor2_3608(11552, 640), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 704), 3);
    add_background_object(create_fdcorefloor2_3608(11552, 768), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 768), 3);
    add_background_object(create_fdcorefloor2_3608(11552, 832), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 832), 3);
    add_background_object(create_fdcorefloor2_3608(11456, 896), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 896), 3);
    add_background_object(create_fdcorefloor6_3620(11456, 960), 3);
    add_background_object(create_fdcorefloor7_3622(11424, 960), 3);
    add_background_object(create_fdcoreloop5_3632(11296, 672), 3);
    add_background_object(create_fdcorefloor3_3611(11136, 640), 3);
    add_background_object(create_fdcorefloor3_3611(11200, 640), 3);
    add_background_object(create_fdcorefloor3_3611(11264, 640), 3);
    add_background_object(create_fdcorefloor3_3611(11328, 640), 3);
    add_background_object(create_fdcoreloop3_3629(11232, 1056), 3);
    add_background_object(create_fdcore4_3607(11232, 928), 3);
    add_background_object(create_fdcore4_3607(11296, 928), 3);
    add_background_object(create_fdcoreloop3_3629(11232, 736), 3);
    add_background_object(create_fdcoreloop4_3631(11168, 1120), 3);
    add_background_object(create_fdcorefloor8_3621(11424, 1056), 3);
    add_background_object(create_fdcorefloor7_3622(11424, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(11456, 1056), 3);
    add_background_object(create_fdcorefloor3_3611(11456, 1088), 3);
    add_background_object(create_fdcorefloor5_3619(11136, 928), 3);
    add_background_object(create_fdcorefloor1_3615(11072, 928), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 960), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 1024), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 1088), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 1152), 3);
    add_background_object(create_fdcorefloor2_3608(11136, 1216), 3);
    add_background_object(create_fdcorefloor9_3627(11136, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11168, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11232, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11296, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11360, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11424, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11488, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11520, 1056), 3);
    add_background_object(create_fdcorefloor3_3611(11520, 1088), 3);
    add_background_object(create_fdcore1_3606(10880, 960), 3);
    add_background_object(create_fdcore2_3610(11008, 1152), 3);
    add_background_object(create_fdcore1_3606(11008, 1280), 3);
    add_background_object(create_fdcore2_3610(11136, 1280), 3);
    add_background_object(create_fdcore1_3606(11264, 1280), 3);
    add_background_object(create_fdcore2_3610(11392, 1280), 3);
    add_background_object(create_fdcore1_3606(11520, 1280), 3);
    add_background_object(create_fdcorefloor1_3615(11552, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11008, 928), 3);
    add_background_object(create_fdcorefloor1_3615(11008, 736), 3);
    add_background_object(create_fdcorefloor3_3611(11008, 832), 3);
    add_background_object(create_fdcore2_3610(10752, 960), 3);
    add_background_object(create_fdcore1_3606(10752, 1088), 3);
    add_background_object(create_fdcore2_3610(10880, 1280), 3);
    add_background_object(create_fdcore4_3607(10880, 1216), 3);
    add_background_object(create_fdcore4_3607(10944, 1216), 3);
    add_background_object(create_fdcore4_3607(11008, 1088), 3);
    add_background_object(create_fdcore4_3607(11072, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(10944, 928), 3);
    add_background_object(create_fdcorefloor1_3615(10880, 928), 3);
    add_background_object(create_fdcorefloor7_3622(11104, 640), 3);
    add_background_object(create_fdcore2_3610(11136, 512), 3);
    add_background_object(create_fdcorefloor4_3609(10976, 768), 3);
    add_background_object(create_fdcorefloor4_3609(11104, 576), 3);
    add_background_object(create_fdcorefloor4_3609(11104, 512), 3);
    add_background_object(create_fdcore1_3606(11328, 512), 3);
    add_background_object(create_fdcore1_3606(11136, 384), 3);
    add_background_object(create_fdcore2_3610(11264, 384), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 512), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 448), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 384), 3);
    add_background_object(create_fdcorefloor4_3609(11104, 448), 3);
    add_background_object(create_fdcorefloor4_3609(11104, 384), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 320), 3);
    add_background_object(create_fdcore4_3607(11392, 448), 3);
    add_background_object(create_fdcore4_3607(11392, 384), 3);
    add_background_object(create_fdcore4_3607(11264, 576), 3);
    add_background_object(create_fdcore4_3607(11264, 512), 3);
    add_background_object(create_fdcorefloor8_3621(10976, 736), 3);
    add_background_object(create_fdcorefloor7_3622(10976, 832), 3);
    add_background_object(create_fdcore1_3606(10880, 1408), 3);
    add_background_object(create_fdcore2_3610(11008, 1408), 3);
    add_background_object(create_fdcore1_3606(11136, 1408), 3);
    add_background_object(create_fdcore2_3610(11264, 1408), 3);
    add_background_object(create_fdcore1_3606(11392, 1408), 3);
    add_background_object(create_fdcore2_3610(11520, 1408), 3);
    add_background_object(create_fdcore1_3606(12152, 1696), 3);
    add_background_object(create_fdcore2_3610(12152, 1696), 3);
    add_background_object(create_fdcore3_3623(12152, 1696), 3);
    add_background_object(create_fdcore4_3607(12152, 1696), 3);
    add_background_object(create_fdcore5_3614(12216, 1760), 3);
    add_background_object(create_fdcore6_3612(12152, 1760), 3);
    add_background_object(create_fdcore7_3613(12152, 1696), 3);
    add_background_object(create_fdcoreback1_3598(12024, 1696), 3);
    add_background_object(create_fdcoreback2_3599(12080, 1696), 3);
    add_background_object(create_fdcorefloor1_3615(12024, 1664), 3);
    add_background_object(create_fdcorefloor2_3608(12088, 1632), 3);
    add_background_object(create_fdcorefloor3_3611(12024, 1632), 3);
    add_background_object(create_fdcorefloor4_3609(12120, 1632), 3);
    add_background_object(create_fdcorefloor5_3619(12184, 1632), 3);
    add_background_object(create_fdcorefloor6_3620(12184, 1664), 3);
    add_background_object(create_fdcorefloor7_3622(12152, 1664), 3);
    add_background_object(create_fdcorefloor8_3621(12152, 1632), 3);
    add_background_object(create_fdcorefloor9_3627(12216, 1664), 3);
    add_background_object(create_fdcoreloop1_3628(12024, 1696), 3);
    add_background_object(create_fdcoreloop2_3605(12024, 1696), 3);
    add_background_object(create_fdcoreloop3_3629(12152, 1696), 3);
    add_background_object(create_fdcoreloop4_3631(12024, 1696), 3);
    add_background_object(create_fdcoreloop5_3632(12024, 1696), 3);
    add_background_object(create_fdcoreslope1_3616(12024, 1824), 3);
    add_background_object(create_fdcoreslope2_3624(12120, 1824), 3);
    add_background_object(create_fdcoreslope3_3617(12024, 1824), 3);
    add_background_object(create_fdcoreslope4_3625(12120, 1824), 3);
    add_background_object(create_fdcoreslope5_3618(12216, 1824), 3);
    add_background_object(create_fdcoreslope6_3626(12216, 1824), 3);
    add_background_object(create_fdfloor1_3570(11960, 1632), 3);
    add_background_object(create_fdcore1_3606(128, 128), 3);
    add_background_object(create_fdcore1_3606(0, 256), 3);
    add_background_object(create_fdcorefloor3_3611(192, 384), 3);
    add_background_object(create_fdcorefloor3_3611(128, 384), 3);
    add_background_object(create_fdcorefloor3_3611(64, 384), 3);
    add_background_object(create_fdcorefloor3_3611(256, 384), 3);
    add_background_object(create_fdcorefloor3_3611(320, 384), 3);
    add_background_object(create_fdcore2_3610(128, 256), 3);
    add_background_object(create_fdcore2_3610(0, 128), 3);
    add_background_object(create_fdcorefloor3_3611(0, 384), 3);
    add_background_object(create_fdcore1_3606(256, 256), 3);
    add_background_object(create_fdcore2_3610(256, 128), 3);
    add_background_object(create_fdcore1_3606(0, 0), 3);
    add_background_object(create_fdcore2_3610(128, 0), 3);
    add_background_object(create_fdcore1_3606(256, 0), 3);
    add_background_object(create_fdcore1_3606(384, 128), 3);
    add_background_object(create_fdcorefloor3_3611(448, 384), 3);
    add_background_object(create_fdcorefloor3_3611(384, 384), 3);
    add_background_object(create_fdcorefloor3_3611(512, 384), 3);
    add_background_object(create_fdcorefloor3_3611(576, 384), 3);
    add_background_object(create_fdcore2_3610(384, 256), 3);
    add_background_object(create_fdcore1_3606(512, 256), 3);
    add_background_object(create_fdcore2_3610(512, 128), 3);
    add_background_object(create_fdcore2_3610(384, 0), 3);
    add_background_object(create_fdcore1_3606(512, 0), 3);
    add_background_object(create_fdcorefloor1_3615(384, 672), 3);
    add_background_object(create_fdcorefloor1_3615(448, 672), 3);
    add_background_object(create_fdcore1_3606(384, 704), 3);
    add_background_object(create_fdcorefloor3_3611(448, 960), 3);
    add_background_object(create_fdcorefloor3_3611(384, 960), 3);
    add_background_object(create_fdcorefloor3_3611(512, 960), 3);
    add_background_object(create_fdcorefloor3_3611(576, 960), 3);
    add_background_object(create_fdcore2_3610(384, 832), 3);
    add_background_object(create_fdcore1_3606(512, 832), 3);
    add_background_object(create_fdcore2_3610(512, 704), 3);
    add_background_object(create_fdcorefloor1_3615(512, 672), 3);
    add_background_object(create_fdcorefloor1_3615(576, 672), 3);
    add_background_object(create_fdcore1_3606(640, 128), 3);
    add_background_object(create_fdcorefloor3_3611(704, 384), 3);
    add_background_object(create_fdcorefloor3_3611(640, 384), 3);
    add_background_object(create_fdcorefloor3_3611(768, 384), 3);
    add_background_object(create_fdcorefloor3_3611(832, 384), 3);
    add_background_object(create_fdcore2_3610(640, 256), 3);
    add_background_object(create_fdcore1_3606(768, 256), 3);
    add_background_object(create_fdcore2_3610(768, 128), 3);
    add_background_object(create_fdcore2_3610(640, 0), 3);
    add_background_object(create_fdcore1_3606(768, 0), 3);
    add_background_object(create_fdcorefloor1_3615(640, 672), 3);
    add_background_object(create_fdcorefloor1_3615(704, 672), 3);
    add_background_object(create_fdcore1_3606(640, 704), 3);
    add_background_object(create_fdcorefloor3_3611(704, 960), 3);
    add_background_object(create_fdcorefloor3_3611(640, 960), 3);
    add_background_object(create_fdcorefloor3_3611(768, 960), 3);
    add_background_object(create_fdcorefloor3_3611(832, 960), 3);
    add_background_object(create_fdcore2_3610(640, 832), 3);
    add_background_object(create_fdcore1_3606(768, 832), 3);
    add_background_object(create_fdcore2_3610(768, 704), 3);
    add_background_object(create_fdcorefloor1_3615(768, 672), 3);
    add_background_object(create_fdcorefloor1_3615(832, 672), 3);
    add_background_object(create_fdcore1_3606(896, 128), 3);
    add_background_object(create_fdcorefloor3_3611(960, 384), 3);
    add_background_object(create_fdcorefloor3_3611(896, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1024, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1088, 384), 3);
    add_background_object(create_fdcore2_3610(896, 256), 3);
    add_background_object(create_fdcore1_3606(1024, 256), 3);
    add_background_object(create_fdcore2_3610(1024, 128), 3);
    add_background_object(create_fdcore2_3610(896, 0), 3);
    add_background_object(create_fdcore1_3606(1024, 0), 3);
    add_background_object(create_fdcorefloor1_3615(896, 672), 3);
    add_background_object(create_fdcorefloor1_3615(960, 672), 3);
    add_background_object(create_fdcore1_3606(896, 704), 3);
    add_background_object(create_fdcorefloor3_3611(960, 960), 3);
    add_background_object(create_fdcorefloor3_3611(896, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1024, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1088, 960), 3);
    add_background_object(create_fdcore2_3610(896, 832), 3);
    add_background_object(create_fdcore1_3606(1024, 832), 3);
    add_background_object(create_fdcore2_3610(1024, 704), 3);
    add_background_object(create_fdcorefloor1_3615(1024, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1088, 672), 3);
    add_background_object(create_fdcore1_3606(1152, 128), 3);
    add_background_object(create_fdcorefloor3_3611(1216, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1152, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1280, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1344, 384), 3);
    add_background_object(create_fdcore2_3610(1152, 256), 3);
    add_background_object(create_fdcore1_3606(1280, 256), 3);
    add_background_object(create_fdcore2_3610(1280, 128), 3);
    add_background_object(create_fdcore2_3610(1152, 0), 3);
    add_background_object(create_fdcore1_3606(1280, 0), 3);
    add_background_object(create_fdcorefloor1_3615(1152, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1216, 672), 3);
    add_background_object(create_fdcore1_3606(1152, 704), 3);
    add_background_object(create_fdcorefloor3_3611(1216, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1152, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1280, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1344, 960), 3);
    add_background_object(create_fdcore2_3610(1152, 832), 3);
    add_background_object(create_fdcore1_3606(1280, 832), 3);
    add_background_object(create_fdcore2_3610(1280, 704), 3);
    add_background_object(create_fdcorefloor1_3615(1280, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1344, 672), 3);
    add_background_object(create_fdcore1_3606(1408, 128), 3);
    add_background_object(create_fdcorefloor3_3611(1472, 352), 3);
    add_background_object(create_fdcorefloor3_3611(1408, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1536, 352), 3);
    add_background_object(create_fdcorefloor3_3611(1600, 384), 3);
    add_background_object(create_fdcore2_3610(1536, 128), 3);
    add_background_object(create_fdcore2_3610(1408, 0), 3);
    add_background_object(create_fdcore1_3606(1536, 0), 3);
    add_background_object(create_fdcorefloor1_3615(1408, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1472, 672), 3);
    add_background_object(create_fdcore1_3606(1408, 704), 3);
    add_background_object(create_fdcorefloor3_3611(1472, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1408, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1536, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1600, 960), 3);
    add_background_object(create_fdcore2_3610(1408, 832), 3);
    add_background_object(create_fdcore1_3606(1536, 832), 3);
    add_background_object(create_fdcore2_3610(1536, 704), 3);
    add_background_object(create_fdcorefloor1_3615(1536, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1600, 672), 3);
    add_background_object(create_fdcore1_3606(1664, 128), 3);
    add_background_object(create_fdcorefloor3_3611(1728, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1664, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1792, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1856, 384), 3);
    add_background_object(create_fdcore2_3610(1664, 256), 3);
    add_background_object(create_fdcore1_3606(1792, 256), 3);
    add_background_object(create_fdcore2_3610(1792, 128), 3);
    add_background_object(create_fdcore2_3610(1664, 0), 3);
    add_background_object(create_fdcore1_3606(1792, 0), 3);
    add_background_object(create_fdcorefloor1_3615(1664, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1728, 672), 3);
    add_background_object(create_fdcore1_3606(1664, 704), 3);
    add_background_object(create_fdcorefloor3_3611(1728, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1664, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1792, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1856, 960), 3);
    add_background_object(create_fdcore2_3610(1664, 832), 3);
    add_background_object(create_fdcore1_3606(1792, 832), 3);
    add_background_object(create_fdcore2_3610(1792, 704), 3);
    add_background_object(create_fdcorefloor1_3615(1792, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1856, 672), 3);
    add_background_object(create_fdcore1_3606(1920, 128), 3);
    add_background_object(create_fdcorefloor3_3611(1984, 384), 3);
    add_background_object(create_fdcorefloor3_3611(1920, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2048, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2112, 384), 3);
    add_background_object(create_fdcore2_3610(1920, 256), 3);
    add_background_object(create_fdcore1_3606(2048, 256), 3);
    add_background_object(create_fdcore2_3610(2048, 128), 3);
    add_background_object(create_fdcore2_3610(1920, 0), 3);
    add_background_object(create_fdcore1_3606(2048, 0), 3);
    add_background_object(create_fdcorefloor1_3615(1920, 672), 3);
    add_background_object(create_fdcorefloor1_3615(1984, 672), 3);
    add_background_object(create_fdcore1_3606(1920, 704), 3);
    add_background_object(create_fdcorefloor3_3611(1984, 960), 3);
    add_background_object(create_fdcorefloor3_3611(1920, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2048, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2112, 960), 3);
    add_background_object(create_fdcore2_3610(1920, 832), 3);
    add_background_object(create_fdcore1_3606(2048, 832), 3);
    add_background_object(create_fdcore2_3610(2048, 704), 3);
    add_background_object(create_fdcorefloor1_3615(2048, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2112, 672), 3);
    add_background_object(create_fdcore1_3606(2176, 128), 3);
    add_background_object(create_fdcorefloor3_3611(2240, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2176, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2304, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2368, 384), 3);
    add_background_object(create_fdcore2_3610(2176, 256), 3);
    add_background_object(create_fdcore1_3606(2304, 256), 3);
    add_background_object(create_fdcore2_3610(2304, 128), 3);
    add_background_object(create_fdcore2_3610(2176, 0), 3);
    add_background_object(create_fdcore1_3606(2304, 0), 3);
    add_background_object(create_fdcore1_3606(2432, 128), 3);
    add_background_object(create_fdcorefloor3_3611(2496, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2432, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2560, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2624, 384), 3);
    add_background_object(create_fdcore2_3610(2432, 256), 3);
    add_background_object(create_fdcore1_3606(2560, 256), 3);
    add_background_object(create_fdcore2_3610(2560, 128), 3);
    add_background_object(create_fdcore2_3610(2432, 0), 3);
    add_background_object(create_fdcore1_3606(2560, 0), 3);
    add_background_object(create_fdcore1_3606(2688, 128), 3);
    add_background_object(create_fdcorefloor3_3611(2752, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2688, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2816, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2880, 384), 3);
    add_background_object(create_fdcore2_3610(2688, 256), 3);
    add_background_object(create_fdcore1_3606(2816, 256), 3);
    add_background_object(create_fdcore2_3610(2816, 128), 3);
    add_background_object(create_fdcore2_3610(2688, 0), 3);
    add_background_object(create_fdcore1_3606(2816, 0), 3);
    add_background_object(create_fdcorefloor1_3615(2176, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2240, 672), 3);
    add_background_object(create_fdcore1_3606(2176, 704), 3);
    add_background_object(create_fdcorefloor3_3611(2240, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2176, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2304, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2368, 960), 3);
    add_background_object(create_fdcore2_3610(2176, 832), 3);
    add_background_object(create_fdcore1_3606(2304, 832), 3);
    add_background_object(create_fdcore2_3610(2304, 704), 3);
    add_background_object(create_fdcorefloor1_3615(2304, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2368, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2432, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2496, 672), 3);
    add_background_object(create_fdcore1_3606(2432, 704), 3);
    add_background_object(create_fdcorefloor3_3611(2496, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2432, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2560, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2624, 960), 3);
    add_background_object(create_fdcore2_3610(2432, 832), 3);
    add_background_object(create_fdcore1_3606(2560, 832), 3);
    add_background_object(create_fdcore2_3610(2560, 704), 3);
    add_background_object(create_fdcorefloor1_3615(2560, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2624, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2688, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2752, 672), 3);
    add_background_object(create_fdcore1_3606(2688, 704), 3);
    add_background_object(create_fdcorefloor3_3611(2752, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2688, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2816, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2880, 960), 3);
    add_background_object(create_fdcore2_3610(2688, 832), 3);
    add_background_object(create_fdcore1_3606(2816, 832), 3);
    add_background_object(create_fdcore2_3610(2816, 704), 3);
    add_background_object(create_fdcorefloor1_3615(2816, 672), 3);
    add_background_object(create_fdcorefloor1_3615(2880, 672), 3);
    add_background_object(create_fdcore1_3606(2944, 128), 3);
    add_background_object(create_fdcorefloor3_3611(3008, 384), 3);
    add_background_object(create_fdcorefloor3_3611(2944, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3072, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3136, 384), 3);
    add_background_object(create_fdcore2_3610(2944, 256), 3);
    add_background_object(create_fdcore1_3606(3072, 256), 3);
    add_background_object(create_fdcore2_3610(3072, 128), 3);
    add_background_object(create_fdcore2_3610(2944, 0), 3);
    add_background_object(create_fdcore1_3606(3072, 0), 3);
    add_background_object(create_fdcore1_3606(3200, 128), 3);
    add_background_object(create_fdcorefloor3_3611(3264, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3200, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3328, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3392, 384), 3);
    add_background_object(create_fdcore2_3610(3200, 256), 3);
    add_background_object(create_fdcore1_3606(3328, 256), 3);
    add_background_object(create_fdcore2_3610(3328, 128), 3);
    add_background_object(create_fdcore2_3610(3200, 0), 3);
    add_background_object(create_fdcore1_3606(3328, 0), 3);
    add_background_object(create_fdcore1_3606(3456, 128), 3);
    add_background_object(create_fdcorefloor3_3611(3520, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3456, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3584, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3648, 384), 3);
    add_background_object(create_fdcore2_3610(3456, 256), 3);
    add_background_object(create_fdcore1_3606(3584, 256), 3);
    add_background_object(create_fdcore2_3610(3584, 128), 3);
    add_background_object(create_fdcore2_3610(3456, 0), 3);
    add_background_object(create_fdcore1_3606(3584, 0), 3);
    add_background_object(create_fdcorefloor1_3615(2944, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3008, 672), 3);
    add_background_object(create_fdcore1_3606(2944, 704), 3);
    add_background_object(create_fdcorefloor3_3611(3008, 960), 3);
    add_background_object(create_fdcorefloor3_3611(2944, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3072, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3136, 960), 3);
    add_background_object(create_fdcore2_3610(2944, 832), 3);
    add_background_object(create_fdcore1_3606(3072, 832), 3);
    add_background_object(create_fdcore2_3610(3072, 704), 3);
    add_background_object(create_fdcorefloor1_3615(3072, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3136, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3200, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3264, 672), 3);
    add_background_object(create_fdcore1_3606(3200, 704), 3);
    add_background_object(create_fdcorefloor3_3611(3264, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3200, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3328, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3392, 960), 3);
    add_background_object(create_fdcore2_3610(3200, 832), 3);
    add_background_object(create_fdcore1_3606(3328, 832), 3);
    add_background_object(create_fdcore2_3610(3328, 704), 3);
    add_background_object(create_fdcorefloor1_3615(3328, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3392, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3456, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3520, 672), 3);
    add_background_object(create_fdcore1_3606(3456, 704), 3);
    add_background_object(create_fdcorefloor3_3611(3520, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3456, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3584, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3648, 960), 3);
    add_background_object(create_fdcore2_3610(3456, 832), 3);
    add_background_object(create_fdcore1_3606(3584, 832), 3);
    add_background_object(create_fdcore2_3610(3584, 704), 3);
    add_background_object(create_fdcorefloor1_3615(3584, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3648, 672), 3);
    add_background_object(create_fdcore1_3606(3712, 128), 3);
    add_background_object(create_fdcorefloor3_3611(3776, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3712, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3840, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3904, 384), 3);
    add_background_object(create_fdcore2_3610(3712, 256), 3);
    add_background_object(create_fdcore1_3606(3840, 256), 3);
    add_background_object(create_fdcore2_3610(3840, 128), 3);
    add_background_object(create_fdcore2_3610(3712, 0), 3);
    add_background_object(create_fdcore1_3606(3840, 0), 3);
    add_background_object(create_fdcore1_3606(3968, 128), 3);
    add_background_object(create_fdcorefloor3_3611(4032, 384), 3);
    add_background_object(create_fdcorefloor3_3611(3968, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4096, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4160, 384), 3);
    add_background_object(create_fdcore2_3610(3968, 256), 3);
    add_background_object(create_fdcore1_3606(4096, 256), 3);
    add_background_object(create_fdcore2_3610(4096, 128), 3);
    add_background_object(create_fdcore2_3610(3968, 0), 3);
    add_background_object(create_fdcore1_3606(4096, 0), 3);
    add_background_object(create_fdcore1_3606(4224, 128), 3);
    add_background_object(create_fdcorefloor3_3611(4224, 384), 3);
    add_background_object(create_fdcore2_3610(4224, 256), 3);
    add_background_object(create_fdcore1_3606(4352, 256), 3);
    add_background_object(create_fdcore2_3610(4352, 128), 3);
    add_background_object(create_fdcore2_3610(4224, 0), 3);
    add_background_object(create_fdcore1_3606(4352, 0), 3);
    add_background_object(create_fdcorefloor1_3615(3712, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3776, 672), 3);
    add_background_object(create_fdcore1_3606(3712, 704), 3);
    add_background_object(create_fdcorefloor3_3611(3776, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3712, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3840, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3904, 960), 3);
    add_background_object(create_fdcore2_3610(3712, 832), 3);
    add_background_object(create_fdcore1_3606(3840, 832), 3);
    add_background_object(create_fdcore2_3610(3840, 704), 3);
    add_background_object(create_fdcorefloor1_3615(3840, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3904, 672), 3);
    add_background_object(create_fdcorefloor1_3615(3968, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4032, 672), 3);
    add_background_object(create_fdcore1_3606(3968, 704), 3);
    add_background_object(create_fdcorefloor3_3611(4032, 960), 3);
    add_background_object(create_fdcorefloor3_3611(3968, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4096, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4160, 960), 3);
    add_background_object(create_fdcore2_3610(3968, 832), 3);
    add_background_object(create_fdcore1_3606(4096, 832), 3);
    add_background_object(create_fdcore2_3610(4096, 704), 3);
    add_background_object(create_fdcorefloor1_3615(4096, 608), 3);
    add_background_object(create_fdcorefloor1_3615(4160, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4224, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4288, 672), 3);
    add_background_object(create_fdcore1_3606(4224, 704), 3);
    add_background_object(create_fdcorefloor3_3611(4288, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4224, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4352, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4416, 960), 3);
    add_background_object(create_fdcore2_3610(4224, 832), 3);
    add_background_object(create_fdcore1_3606(4352, 832), 3);
    add_background_object(create_fdcore2_3610(4352, 704), 3);
    add_background_object(create_fdcorefloor1_3615(4352, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4416, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4480, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4544, 672), 3);
    add_background_object(create_fdcore1_3606(4480, 704), 3);
    add_background_object(create_fdcorefloor3_3611(4544, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4480, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4608, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4672, 960), 3);
    add_background_object(create_fdcore2_3610(4480, 832), 3);
    add_background_object(create_fdcore1_3606(4608, 768), 3);
    add_background_object(create_fdcore2_3610(4608, 640), 3);
    add_background_object(create_fdcorefloor1_3615(4608, 608), 3);
    add_background_object(create_fdcorefloor1_3615(4672, 608), 3);
    add_background_object(create_fdcorefloor1_3615(4736, 608), 3);
    add_background_object(create_fdcorefloor1_3615(4800, 608), 3);
    add_background_object(create_fdcore1_3606(4736, 640), 3);
    add_background_object(create_fdcorefloor3_3611(4800, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4736, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4864, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4928, 960), 3);
    add_background_object(create_fdcore2_3610(4736, 768), 3);
    add_background_object(create_fdcore1_3606(4864, 832), 3);
    add_background_object(create_fdcore2_3610(4864, 704), 3);
    add_background_object(create_fdcorefloor1_3615(4864, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4928, 672), 3);
    add_background_object(create_fdcorefloor1_3615(4992, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5056, 672), 3);
    add_background_object(create_fdcore1_3606(4992, 704), 3);
    add_background_object(create_fdcorefloor3_3611(5056, 960), 3);
    add_background_object(create_fdcorefloor3_3611(4992, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5120, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5184, 960), 3);
    add_background_object(create_fdcore2_3610(4992, 832), 3);
    add_background_object(create_fdcore1_3606(5120, 832), 3);
    add_background_object(create_fdcore2_3610(5120, 704), 3);
    add_background_object(create_fdcorefloor1_3615(5120, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5184, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5248, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5312, 672), 3);
    add_background_object(create_fdcore1_3606(5248, 704), 3);
    add_background_object(create_fdcorefloor3_3611(5312, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5248, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5376, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5440, 960), 3);
    add_background_object(create_fdcore2_3610(5248, 832), 3);
    add_background_object(create_fdcore1_3606(5376, 832), 3);
    add_background_object(create_fdcore2_3610(5376, 704), 3);
    add_background_object(create_fdcorefloor1_3615(5376, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5440, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5504, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5568, 672), 3);
    add_background_object(create_fdcore1_3606(5504, 704), 3);
    add_background_object(create_fdcorefloor3_3611(5568, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5504, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5632, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5696, 960), 3);
    add_background_object(create_fdcore2_3610(5504, 832), 3);
    add_background_object(create_fdcore1_3606(5632, 832), 3);
    add_background_object(create_fdcore2_3610(5632, 704), 3);
    add_background_object(create_fdcorefloor1_3615(5632, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5696, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5760, 608), 3);
    add_background_object(create_fdcorefloor1_3615(5824, 608), 3);
    add_background_object(create_fdcore1_3606(5760, 640), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5760, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 960), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 960), 3);
    add_background_object(create_fdcore2_3610(5760, 768), 3);
    add_background_object(create_fdcore1_3606(5888, 832), 3);
    add_background_object(create_fdcore2_3610(5888, 704), 3);
    add_background_object(create_fdcorefloor1_3615(5888, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5952, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6016, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6080, 672), 3);
    add_background_object(create_fdcore1_3606(6016, 704), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 960), 3);
    add_background_object(create_fdcore2_3610(6016, 832), 3);
    add_background_object(create_fdcore1_3606(6144, 832), 3);
    add_background_object(create_fdcore2_3610(6144, 704), 3);
    add_background_object(create_fdcorefloor1_3615(6144, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 672), 3);
    add_background_object(create_fdcore1_3606(6272, 704), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 960), 3);
    add_background_object(create_fdcore2_3610(6272, 832), 3);
    add_background_object(create_fdcore1_3606(6400, 832), 3);
    add_background_object(create_fdcore2_3610(6400, 704), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6528, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6592, 672), 3);
    add_background_object(create_fdcore1_3606(6528, 704), 3);
    add_background_object(create_fdcorefloor3_3611(6592, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6528, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6656, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6720, 960), 3);
    add_background_object(create_fdcore2_3610(6528, 832), 3);
    add_background_object(create_fdcore1_3606(6656, 832), 3);
    add_background_object(create_fdcore2_3610(6656, 704), 3);
    add_background_object(create_fdcorefloor1_3615(6656, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6720, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6784, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6848, 672), 3);
    add_background_object(create_fdcore1_3606(6784, 704), 3);
    add_background_object(create_fdcorefloor3_3611(6848, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6784, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6912, 960), 3);
    add_background_object(create_fdcorefloor3_3611(6976, 960), 3);
    add_background_object(create_fdcore2_3610(6784, 832), 3);
    add_background_object(create_fdcore1_3606(6912, 832), 3);
    add_background_object(create_fdcore2_3610(6912, 704), 3);
    add_background_object(create_fdcorefloor1_3615(6912, 672), 3);
    add_background_object(create_fdcorefloor1_3615(6976, 672), 3);
    add_background_object(create_fdcore1_3606(4480, 128), 3);
    add_background_object(create_fdcorefloor3_3611(4544, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4480, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4608, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4672, 384), 3);
    add_background_object(create_fdcore2_3610(4480, 256), 3);
    add_background_object(create_fdcore1_3606(4608, 256), 3);
    add_background_object(create_fdcore2_3610(4608, 128), 3);
    add_background_object(create_fdcore2_3610(4480, 0), 3);
    add_background_object(create_fdcore1_3606(4608, 0), 3);
    add_background_object(create_fdcore1_3606(4736, 128), 3);
    add_background_object(create_fdcorefloor3_3611(4800, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4736, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4864, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4928, 384), 3);
    add_background_object(create_fdcore2_3610(4736, 256), 3);
    add_background_object(create_fdcore1_3606(4864, 256), 3);
    add_background_object(create_fdcore2_3610(4864, 128), 3);
    add_background_object(create_fdcore2_3610(4736, 0), 3);
    add_background_object(create_fdcore1_3606(4864, 0), 3);
    add_background_object(create_fdcore1_3606(4992, 128), 3);
    add_background_object(create_fdcorefloor3_3611(5056, 384), 3);
    add_background_object(create_fdcorefloor3_3611(4992, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5120, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5184, 384), 3);
    add_background_object(create_fdcore2_3610(4992, 256), 3);
    add_background_object(create_fdcore1_3606(5120, 256), 3);
    add_background_object(create_fdcore2_3610(5120, 128), 3);
    add_background_object(create_fdcore2_3610(4992, 0), 3);
    add_background_object(create_fdcore1_3606(5120, 0), 3);
    add_background_object(create_fdcore1_3606(5248, 128), 3);
    add_background_object(create_fdcorefloor3_3611(5312, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5248, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5376, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5440, 384), 3);
    add_background_object(create_fdcore2_3610(5248, 256), 3);
    add_background_object(create_fdcore1_3606(5376, 256), 3);
    add_background_object(create_fdcore2_3610(5376, 128), 3);
    add_background_object(create_fdcore2_3610(5248, 0), 3);
    add_background_object(create_fdcore1_3606(5376, 0), 3);
    add_background_object(create_fdcore1_3606(5504, 128), 3);
    add_background_object(create_fdcorefloor3_3611(5568, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5504, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5632, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5696, 384), 3);
    add_background_object(create_fdcore2_3610(5504, 256), 3);
    add_background_object(create_fdcore1_3606(5632, 256), 3);
    add_background_object(create_fdcore2_3610(5632, 128), 3);
    add_background_object(create_fdcore2_3610(5504, 0), 3);
    add_background_object(create_fdcore1_3606(5632, 0), 3);
    add_background_object(create_fdcore1_3606(5760, 128), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5760, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 384), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 384), 3);
    add_background_object(create_fdcore2_3610(5760, 256), 3);
    add_background_object(create_fdcore1_3606(5888, 256), 3);
    add_background_object(create_fdcore2_3610(5888, 128), 3);
    add_background_object(create_fdcore2_3610(5760, 0), 3);
    add_background_object(create_fdcore1_3606(5888, 0), 3);
    add_background_object(create_fdcore1_3606(6016, 128), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 384), 3);
    add_background_object(create_fdcore2_3610(6016, 256), 3);
    add_background_object(create_fdcore1_3606(6144, 256), 3);
    add_background_object(create_fdcore2_3610(6144, 128), 3);
    add_background_object(create_fdcore2_3610(6016, 0), 3);
    add_background_object(create_fdcore1_3606(6144, 0), 3);
    add_background_object(create_fdcore1_3606(6272, 128), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 384), 3);
    add_background_object(create_fdcore2_3610(6272, 256), 3);
    add_background_object(create_fdcore1_3606(6400, 256), 3);
    add_background_object(create_fdcore2_3610(6400, 128), 3);
    add_background_object(create_fdcore2_3610(6272, 0), 3);
    add_background_object(create_fdcore1_3606(6400, 0), 3);
    add_background_object(create_fdcore1_3606(6528, 128), 3);
    add_background_object(create_fdcorefloor3_3611(6592, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6528, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6656, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6720, 384), 3);
    add_background_object(create_fdcore2_3610(6528, 256), 3);
    add_background_object(create_fdcore1_3606(6656, 256), 3);
    add_background_object(create_fdcore2_3610(6656, 128), 3);
    add_background_object(create_fdcore2_3610(6528, 0), 3);
    add_background_object(create_fdcore1_3606(6656, 0), 3);
    add_background_object(create_fdcore1_3606(6784, 128), 3);
    add_background_object(create_fdcorefloor3_3611(6848, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6784, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6912, 384), 3);
    add_background_object(create_fdcorefloor3_3611(6976, 384), 3);
    add_background_object(create_fdcore2_3610(6784, 256), 3);
    add_background_object(create_fdcore1_3606(6912, 256), 3);
    add_background_object(create_fdcore2_3610(6912, 128), 3);
    add_background_object(create_fdcore2_3610(6784, 0), 3);
    add_background_object(create_fdcore1_3606(6912, 0), 3);
    add_background_object(create_fdcorefloor1_3615(7040, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7104, 672), 3);
    add_background_object(create_fdcore1_3606(7040, 704), 3);
    add_background_object(create_fdcorefloor3_3611(7104, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7040, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7168, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7232, 960), 3);
    add_background_object(create_fdcore2_3610(7040, 832), 3);
    add_background_object(create_fdcore1_3606(7168, 832), 3);
    add_background_object(create_fdcore2_3610(7168, 704), 3);
    add_background_object(create_fdcorefloor1_3615(7168, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7232, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7296, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7360, 672), 3);
    add_background_object(create_fdcore1_3606(7296, 704), 3);
    add_background_object(create_fdcorefloor3_3611(7360, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7296, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7424, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7488, 960), 3);
    add_background_object(create_fdcore2_3610(7296, 832), 3);
    add_background_object(create_fdcore1_3606(7424, 832), 3);
    add_background_object(create_fdcore2_3610(7424, 704), 3);
    add_background_object(create_fdcorefloor1_3615(7424, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7488, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7552, 544), 3);
    add_background_object(create_fdcorefloor1_3615(7616, 544), 3);
    add_background_object(create_fdcore1_3606(7552, 704), 3);
    add_background_object(create_fdcorefloor3_3611(7616, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7552, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7680, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7744, 960), 3);
    add_background_object(create_fdcore2_3610(7552, 832), 3);
    add_background_object(create_fdcore1_3606(7680, 832), 3);
    add_background_object(create_fdcore2_3610(7680, 704), 3);
    add_background_object(create_fdcorefloor1_3615(7680, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7744, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7808, 672), 3);
    add_background_object(create_fdcorefloor1_3615(7872, 672), 3);
    add_background_object(create_fdcore1_3606(7808, 704), 3);
    add_background_object(create_fdcorefloor3_3611(7872, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7808, 960), 3);
    add_background_object(create_fdcorefloor3_3611(7936, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8000, 960), 3);
    add_background_object(create_fdcore2_3610(7808, 832), 3);
    add_background_object(create_fdcore1_3606(7936, 832), 3);
    add_background_object(create_fdcore2_3610(7936, 704), 3);
    add_background_object(create_fdcorefloor1_3615(7936, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8000, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8064, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8128, 672), 3);
    add_background_object(create_fdcore1_3606(8064, 704), 3);
    add_background_object(create_fdcorefloor3_3611(8128, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8064, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8192, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8256, 960), 3);
    add_background_object(create_fdcore2_3610(8064, 832), 3);
    add_background_object(create_fdcore1_3606(8192, 832), 3);
    add_background_object(create_fdcore2_3610(8192, 704), 3);
    add_background_object(create_fdcorefloor1_3615(8192, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8256, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8320, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8384, 672), 3);
    add_background_object(create_fdcore1_3606(8320, 704), 3);
    add_background_object(create_fdcorefloor3_3611(8384, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8320, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8448, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8512, 960), 3);
    add_background_object(create_fdcore2_3610(8320, 832), 3);
    add_background_object(create_fdcore1_3606(8448, 832), 3);
    add_background_object(create_fdcore2_3610(8448, 704), 3);
    add_background_object(create_fdcorefloor1_3615(8448, 608), 3);
    add_background_object(create_fdcorefloor1_3615(8512, 608), 3);
    add_background_object(create_fdcore1_3606(7040, 128), 3);
    add_background_object(create_fdcorefloor3_3611(7104, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7040, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7168, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7232, 384), 3);
    add_background_object(create_fdcore2_3610(7040, 256), 3);
    add_background_object(create_fdcore1_3606(7168, 256), 3);
    add_background_object(create_fdcore2_3610(7168, 128), 3);
    add_background_object(create_fdcore2_3610(7040, 0), 3);
    add_background_object(create_fdcore1_3606(7168, 0), 3);
    add_background_object(create_fdcore1_3606(7296, 128), 3);
    add_background_object(create_fdcorefloor3_3611(7360, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7296, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7424, 352), 3);
    add_background_object(create_fdcorefloor3_3611(7488, 352), 3);
    add_background_object(create_fdcore2_3610(7424, 128), 3);
    add_background_object(create_fdcore2_3610(7296, 0), 3);
    add_background_object(create_fdcore1_3606(7424, 0), 3);
    add_background_object(create_fdcore1_3606(7552, 128), 3);
    add_background_object(create_fdcorefloor3_3611(7648, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7712, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7776, 384), 3);
    add_background_object(create_fdcore1_3606(7680, 256), 3);
    add_background_object(create_fdcore2_3610(7680, 128), 3);
    add_background_object(create_fdcore2_3610(7552, 0), 3);
    add_background_object(create_fdcore1_3606(7680, 0), 3);
    add_background_object(create_fdcore1_3606(7808, 128), 3);
    add_background_object(create_fdcorefloor3_3611(7840, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7936, 512), 3);
    add_background_object(create_fdcorefloor3_3611(8000, 512), 3);
    add_background_object(create_fdcore2_3610(7808, 256), 3);
    add_background_object(create_fdcore1_3606(7936, 256), 3);
    add_background_object(create_fdcore2_3610(7936, 128), 3);
    add_background_object(create_fdcore2_3610(7808, 0), 3);
    add_background_object(create_fdcore1_3606(7936, 0), 3);
    add_background_object(create_fdcore1_3606(8064, 128), 3);
    add_background_object(create_fdcorefloor3_3611(8128, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8064, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8192, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8256, 384), 3);
    add_background_object(create_fdcore2_3610(8064, 256), 3);
    add_background_object(create_fdcore1_3606(8192, 256), 3);
    add_background_object(create_fdcore2_3610(8192, 128), 3);
    add_background_object(create_fdcore2_3610(8064, 0), 3);
    add_background_object(create_fdcore1_3606(8192, 0), 3);
    add_background_object(create_fdcore1_3606(8320, 128), 3);
    add_background_object(create_fdcorefloor3_3611(8384, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8320, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8448, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8512, 384), 3);
    add_background_object(create_fdcore2_3610(8320, 256), 3);
    add_background_object(create_fdcore1_3606(8448, 256), 3);
    add_background_object(create_fdcore2_3610(8448, 128), 3);
    add_background_object(create_fdcore2_3610(8320, 0), 3);
    add_background_object(create_fdcore1_3606(8448, 0), 3);
    add_background_object(create_fdcore4_3607(4608, 896), 3);
    add_background_object(create_fdcore4_3607(4672, 896), 3);
    add_background_object(create_fdcore4_3607(4736, 896), 3);
    add_background_object(create_fdcore4_3607(4800, 896), 3);
    add_background_object(create_fdcorefloor8_3621(4576, 608), 3);
    add_background_object(create_fdcorefloor5_3619(4864, 608), 3);
    add_background_object(create_fdcorefloor4_3609(4576, 640), 3);
    add_background_object(create_fdcorefloor2_3608(4864, 640), 3);
    add_background_object(create_fdcorefloor9_3627(4576, 672), 3);
    add_background_object(create_fdcorefloor9_3627(4864, 672), 3);
    add_background_object(create_fdcore4_3607(5760, 896), 3);
    add_background_object(create_fdcore4_3607(5824, 896), 3);
    add_background_object(create_fdcorefloor8_3621(5728, 608), 3);
    add_background_object(create_fdcorefloor5_3619(5888, 608), 3);
    add_background_object(create_fdcorefloor4_3609(5728, 640), 3);
    add_background_object(create_fdcorefloor2_3608(5888, 640), 3);
    add_background_object(create_fdcorefloor9_3627(5728, 672), 3);
    add_background_object(create_fdcorefloor9_3627(5888, 672), 3);
    add_background_object(create_fdcorefloor1_3615(5664, 640), 3);
    add_background_object(create_fdcorefloor1_3615(5920, 640), 3);
    add_background_object(create_fdcorefloor5_3619(4960, 672), 3);
    add_background_object(create_fdcorefloor8_3621(5056, 672), 3);
    add_background_object(create_fdcorefloor2_3608(4960, 704), 3);
    add_background_object(create_fdcorefloor4_3609(5056, 704), 3);
    add_background_object(create_fdcorefloor1_3615(4992, 760), 3);
    add_background_object(create_fdcorefloor9_3627(4960, 760), 3);
    add_background_object(create_fdcorefloor9_3627(5056, 760), 3);
    add_background_object(create_fdcorefloor5_3619(5120, 672), 3);
    add_background_object(create_fdcorefloor8_3621(5216, 672), 3);
    add_background_object(create_fdcorefloor2_3608(5120, 704), 3);
    add_background_object(create_fdcorefloor4_3609(5216, 704), 3);
    add_background_object(create_fdcorefloor1_3615(5152, 760), 3);
    add_background_object(create_fdcorefloor9_3627(5120, 760), 3);
    add_background_object(create_fdcorefloor9_3627(5216, 760), 3);
    add_background_object(create_fdcorefloor5_3619(4160, 608), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 640), 3);
    add_background_object(create_fdcorefloor9_3627(4160, 672), 3);
    add_background_object(create_fdcorefloor8_3621(4064, 608), 3);
    add_background_object(create_fdcorefloor4_3609(4064, 640), 3);
    add_background_object(create_fdcorefloor9_3627(4064, 672), 3);
    add_background_object(create_fdcore4_3607(4096, 640), 3);
    add_background_object(create_fdcorefloor1_3615(6656, 640), 3);
    add_background_object(create_fdcorefloor1_3615(6720, 640), 3);
    add_background_object(create_fdcorefloor1_3615(6784, 640), 3);
    add_background_object(create_fdcorefloor1_3615(6848, 640), 3);
    add_background_object(create_fdcorefloor1_3615(1416, 520), 3);
    add_background_object(create_fdcorefloor1_3615(1352, 520), 3);
    add_background_object(create_fdcorefloor1_3615(1608, 520), 3);
    add_background_object(create_fdcorefloor1_3615(1672, 520), 3);
    add_background_object(create_fdcorefloor8_3621(1320, 520), 3);
    add_background_object(create_fdcorefloor7_3622(1320, 552), 3);
    add_background_object(create_fdcorefloor6_3620(1352, 552), 3);
    add_background_object(create_fdcorefloor5_3619(1736, 520), 3);
    add_background_object(create_fdcorefloor6_3620(1736, 552), 3);
    add_background_object(create_fdcorefloor7_3622(1704, 552), 3);
    add_background_object(create_fdcorefloor1_3615(1544, 520), 3);
    add_background_object(create_fdcorefloor1_3615(1480, 520), 3);
    add_background_object(create_fdcorefloor1_3615(4256, 504), 3);
    add_background_object(create_fdcorefloor1_3615(4448, 504), 3);
    add_background_object(create_fdcorefloor8_3621(4224, 504), 3);
    add_background_object(create_fdcorefloor7_3622(4224, 536), 3);
    add_background_object(create_fdcorefloor6_3620(4256, 536), 3);
    add_background_object(create_fdcorefloor5_3619(4512, 504), 3);
    add_background_object(create_fdcorefloor6_3620(4512, 536), 3);
    add_background_object(create_fdcorefloor7_3622(4480, 536), 3);
    add_background_object(create_fdcorefloor1_3615(4320, 504), 3);
    add_background_object(create_fdcorefloor1_3615(4384, 504), 3);
    add_background_object(create_fdcore2_3610(7552, 576), 3);
    add_background_object(create_fdcorefloor4_3609(7520, 576), 3);
    add_background_object(create_fdcorefloor4_3609(7520, 640), 3);
    add_background_object(create_fdcorefloor2_3608(7680, 576), 3);
    add_background_object(create_fdcorefloor2_3608(7680, 640), 3);
    add_background_object(create_fdcorefloor9_3627(7520, 672), 3);
    add_background_object(create_fdcorefloor9_3627(7680, 672), 3);
    add_background_object(create_fdcorefloor8_3621(7520, 544), 3);
    add_background_object(create_fdcorefloor5_3619(7680, 544), 3);
    add_background_object(create_fdcore2_3610(7936, 384), 3);
    add_background_object(create_fdcorefloor4_3609(7904, 384), 3);
    add_background_object(create_fdcorefloor4_3609(7904, 448), 3);
    add_background_object(create_fdcorefloor2_3608(8064, 384), 3);
    add_background_object(create_fdcorefloor2_3608(8064, 448), 3);
    add_background_object(create_fdcorefloor9_3627(7904, 384), 3);
    add_background_object(create_fdcorefloor9_3627(8064, 384), 3);
    add_background_object(create_fdcorefloor6_3620(8064, 512), 3);
    add_background_object(create_fdcorefloor7_3622(7904, 512), 3);
    add_background_object(create_fdcore4_3607(8448, 640), 3);
    add_background_object(create_fdcore4_3607(8520, 640), 3);
    add_background_object(create_fdcorefloor4_3609(8416, 640), 3);
    add_background_object(create_fdcorefloor9_3627(8416, 672), 3);
    add_background_object(create_fdcorefloor8_3621(8416, 608), 3);
    add_background_object(create_fdcorefloor1_3615(8576, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9920, 672), 3);
    add_background_object(create_fdcore1_3606(8576, 704), 3);
    add_background_object(create_fdcorefloor3_3611(9920, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8576, 960), 3);
    add_background_object(create_fdcorefloor3_3611(10112, 1216), 3);
    add_background_object(create_fdcorefloor3_3611(10176, 1216), 3);
    add_background_object(create_fdcore2_3610(8576, 832), 3);
    add_background_object(create_fdcore1_3606(9984, 832), 3);
    add_background_object(create_fdcore2_3610(9984, 704), 3);
    add_background_object(create_fdcorefloor1_3615(9984, 672), 3);
    add_background_object(create_fdcorefloor1_3615(10048, 672), 3);
    add_background_object(create_fdcore1_3606(8576, 128), 3);
    add_background_object(create_fdcorefloor3_3611(9920, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8576, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9984, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10048, 384), 3);
    add_background_object(create_fdcore2_3610(8576, 256), 3);
    add_background_object(create_fdcore1_3606(9984, 256), 3);
    add_background_object(create_fdcore2_3610(9984, 128), 3);
    add_background_object(create_fdcore2_3610(8576, 0), 3);
    add_background_object(create_fdcore1_3606(9984, 0), 3);
    add_background_object(create_fdcore1_3606(10112, 128), 3);
    add_background_object(create_fdcorefloor3_3611(10176, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10112, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10240, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10304, 384), 3);
    add_background_object(create_fdcore2_3610(10112, 256), 3);
    add_background_object(create_fdcore1_3606(10240, 256), 3);
    add_background_object(create_fdcore2_3610(10240, 128), 3);
    add_background_object(create_fdcore2_3610(10112, 0), 3);
    add_background_object(create_fdcore1_3606(10240, 0), 3);
    add_background_object(create_fdcorefloor1_3615(10112, 672), 3);
    add_background_object(create_fdcorefloor1_3615(10176, 672), 3);
    add_background_object(create_fdcore1_3606(10112, 704), 3);
    add_background_object(create_fdcore2_3610(10112, 832), 3);
    add_background_object(create_fdcore1_3606(10240, 832), 3);
    add_background_object(create_fdcore2_3610(10240, 704), 3);
    add_background_object(create_fdcorefloor1_3615(10240, 672), 3);
    add_background_object(create_fdcorefloor1_3615(10304, 672), 3);
    add_background_object(create_fdcorefloor2_3608(8576, 640), 3);
    add_background_object(create_fdcorefloor9_3627(8576, 672), 3);
    add_background_object(create_fdcorefloor5_3619(8576, 608), 3);
    add_background_object(create_fdcorefloor3_3611(10432, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10368, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10496, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10560, 384), 3);
    add_background_object(create_fdcorefloor1_3615(10368, 672), 3);
    add_background_object(create_fdcorefloor1_3615(10432, 672), 3);
    add_background_object(create_fdcore1_3606(10496, 896), 3);
    add_background_object(create_fdcore2_3610(10368, 896), 3);
    add_background_object(create_fdcorefloor1_3615(10496, 672), 3);
    add_background_object(create_fdcorefloor1_3615(10560, 672), 3);
    add_background_object(create_fdcore1_3606(10624, 960), 3);
    add_background_object(create_fdcorefloor1_3615(10816, 928), 3);
    add_background_object(create_fdcorefloor1_3615(10752, 928), 3);
    add_background_object(create_fdcore2_3610(10624, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(10688, 928), 3);
    add_background_object(create_fdcorefloor1_3615(10624, 928), 3);
    add_background_object(create_fdcore1_3606(10368, 1024), 3);
    add_background_object(create_fdcore2_3610(10496, 1024), 3);
    add_background_object(create_fdcore2_3610(11008, 960), 3);
    add_background_object(create_fdcore2_3610(10880, 1088), 3);
    add_background_object(create_fdcore1_3606(10496, 1152), 3);
    add_background_object(create_fdcore2_3610(10368, 1152), 3);
    add_background_object(create_fdcore2_3610(10240, 960), 3);
    add_background_object(create_fdcore1_3606(10240, 1088), 3);
    add_background_object(create_fdcore2_3610(10752, 1216), 3);
    add_background_object(create_fdcore1_3606(10624, 1216), 3);
    add_background_object(create_fdcore2_3610(10496, 1280), 3);
    add_background_object(create_fdcore1_3606(10368, 1280), 3);
    add_background_object(create_fdcore2_3610(10752, 1344), 3);
    add_background_object(create_fdcore1_3606(10624, 1344), 3);
    add_background_object(create_fdcore1_3606(10112, 960), 3);
    add_background_object(create_fdcorefloor1_3615(10560, 864), 3);
    add_background_object(create_fdcorefloor1_3615(10496, 864), 3);
    add_background_object(create_fdcorefloor1_3615(10432, 864), 3);
    add_background_object(create_fdcorefloor1_3615(10368, 864), 3);
    add_background_object(create_fdcorefloor2_3608(10624, 896), 3);
    add_background_object(create_fdcorefloor9_3627(10624, 928), 3);
    add_background_object(create_fdcorefloor5_3619(10624, 864), 3);
    add_background_object(create_fdcorefloor5_3619(10624, 672), 3);
    add_background_object(create_fdcorefloor6_3620(10624, 704), 3);
    add_background_object(create_fdcorefloor3_3611(10560, 704), 3);
    add_background_object(create_fdcorefloor3_3611(10496, 704), 3);
    add_background_object(create_fdcorefloor3_3611(10432, 704), 3);
    add_background_object(create_fdcorefloor3_3611(10368, 704), 3);
    add_background_object(create_fdcorefloor2_3608(10344, 736), 3);
    add_background_object(create_fdcorefloor2_3608(10344, 800), 3);
    add_background_object(create_fdcorefloor9_3627(10344, 704), 3);
    add_background_object(create_fdcorefloor9_3627(10344, 864), 3);
    add_background_object(create_fdcore2_3610(10112, 1088), 3);
    add_background_object(create_fdcore2_3610(9984, 960), 3);
    add_background_object(create_fdcore2_3610(10240, 1216), 3);
    add_background_object(create_fdcorefloor4_3609(9952, 1024), 3);
    add_background_object(create_fdcorefloor4_3609(9952, 960), 3);
    add_background_object(create_fdcorefloor4_3609(10080, 1152), 3);
    add_background_object(create_fdcorefloor4_3609(10080, 1088), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1280), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1216), 3);
    add_background_object(create_fdcorefloor4_3609(10336, 1344), 3);
    add_background_object(create_fdcorefloor3_3611(9984, 1088), 3);
    add_background_object(create_fdcorefloor3_3611(10048, 1088), 3);
    add_background_object(create_fdcorefloor3_3611(10240, 1344), 3);
    add_background_object(create_fdcorefloor3_3611(10304, 1344), 3);
    add_background_object(create_fdcorefloor3_3611(10368, 1408), 3);
    add_background_object(create_fdcorefloor3_3611(10432, 1408), 3);
    add_background_object(create_fdcorefloor3_3611(10496, 1408), 3);
    add_background_object(create_fdcorefloor3_3611(10560, 1408), 3);
    add_background_object(create_fdcorefloor9_3627(10336, 1408), 3);
    add_background_object(create_fdcorefloor9_3627(10336, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(10208, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(10208, 1216), 3);
    add_background_object(create_fdcorefloor9_3627(10080, 1216), 3);
    add_background_object(create_fdcorefloor9_3627(10080, 1088), 3);
    add_background_object(create_fdcorefloor9_3627(9952, 1088), 3);
    add_background_object(create_fdcorefloor9_3627(9952, 960), 3);
    add_background_object(create_fdcorefloor2_3608(11552, 576), 3);
    add_background_object(create_fdcore1_3606(11456, 384), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 640), 3);
    add_background_object(create_fdcorefloor9_3627(11424, 640), 3);
    add_background_object(create_fdcorefloor3_3611(11648, 896), 3);
    add_background_object(create_fdcorefloor3_3611(11584, 896), 3);
    add_background_object(create_fdcorefloor3_3611(11520, 896), 3);
    add_background_object(create_fdcorefloor3_3611(11456, 896), 3);
    add_background_object(create_fdcorefloor9_3627(11456, 896), 3);
    add_background_object(create_fdcorefloor6_3620(11776, 896), 3);
    add_background_object(create_fdcorefloor1_3615(11584, 1056), 3);
    add_background_object(create_fdcorefloor3_3611(11584, 1088), 3);
    add_background_object(create_fdcorefloor6_3620(11648, 1088), 3);
    add_background_object(create_fdcorefloor5_3619(11648, 1056), 3);
    add_background_object(create_fdcorefloor1_3615(11616, 1248), 3);
    add_background_object(create_fdcore2_3610(11648, 1280), 3);
    add_background_object(create_fdcore1_3606(11776, 1280), 3);
    add_background_object(create_fdcore1_3606(11648, 1408), 3);
    add_background_object(create_fdcore2_3610(11776, 1408), 3);
    add_background_object(create_fdcorefloor1_3615(11680, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11744, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(11808, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(10368, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10432, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10496, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10560, 288), 3);
    add_background_object(create_fdcorefloor2_3608(10368, 256), 3);
    add_background_object(create_fdcorefloor2_3608(10368, 192), 3);
    add_background_object(create_fdcorefloor2_3608(10368, 128), 3);
    add_background_object(create_fdcorefloor2_3608(10368, 64), 3);
    add_background_object(create_fdcorefloor2_3608(10368, 0), 3);
    add_background_object(create_fdcorefloor9_3627(10368, 288), 3);
    add_background_object(create_fdcore2_3610(10624, 288), 3);
    add_background_object(create_fdcore1_3606(10752, 288), 3);
    add_background_object(create_fdcorefloor3_3611(10688, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10624, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10752, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10816, 384), 3);
    add_background_object(create_fdcorefloor1_3615(10624, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10688, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10752, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10816, 288), 3);
    add_background_object(create_fdcore2_3610(10880, 288), 3);
    add_background_object(create_fdcore1_3606(11008, 288), 3);
    add_background_object(create_fdcorefloor3_3611(10944, 384), 3);
    add_background_object(create_fdcorefloor3_3611(10880, 384), 3);
    add_background_object(create_fdcorefloor3_3611(11008, 384), 3);
    add_background_object(create_fdcorefloor3_3611(11072, 384), 3);
    add_background_object(create_fdcorefloor1_3615(10880, 288), 3);
    add_background_object(create_fdcorefloor1_3615(10944, 288), 3);
    add_background_object(create_fdcorefloor1_3615(11008, 288), 3);
    add_background_object(create_fdcorefloor1_3615(11072, 288), 3);
    add_background_object(create_fdcorefloor9_3627(11104, 384), 3);
    add_background_object(create_fdcore2_3610(11456, 256), 3);
    add_background_object(create_fdcore1_3606(11328, 256), 3);
    add_background_object(create_fdcore2_3610(11200, 256), 3);
    add_background_object(create_fdcore4_3607(11136, 320), 3);
    add_background_object(create_fdcoreloop2_3605(12128, 928), 3);
    add_background_object(create_fdcorefloor8_3621(11936, 1056), 3);
    add_background_object(create_fdcorefloor1_3615(12160, 1056), 3);
    add_background_object(create_fdcorefloor1_3615(12224, 1056), 3);
    add_background_object(create_fdcore2_3610(12288, 1024), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 896), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 960), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 1024), 3);
    add_background_object(create_fdcorefloor9_3627(12256, 1056), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 832), 3);
    add_background_object(create_fdcoreloop5_3632(12128, 800), 3);
    add_background_object(create_fdcore2_3610(12288, 768), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 768), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 640), 3);
    add_background_object(create_fdcorefloor8_3621(12000, 672), 3);
    add_background_object(create_fdcorefloor7_3622(12000, 768), 3);
    add_background_object(create_fdcorefloor1_3615(12032, 672), 3);
    add_background_object(create_fdcorefloor3_3611(12032, 768), 3);
    add_background_object(create_fdcorefloor1_3615(12160, 672), 3);
    add_background_object(create_fdcorefloor3_3611(12160, 768), 3);
    add_background_object(create_fdcorefloor5_3619(11776, 864), 3);
    add_background_object(create_fdcorefloor1_3615(11584, 864), 3);
    add_background_object(create_fdcorefloor1_3615(11648, 864), 3);
    add_background_object(create_fdcorefloor9_3627(11552, 864), 3);
    add_background_object(create_fdcorefloor3_3611(11584, 576), 3);
    add_background_object(create_fdcorefloor3_3611(11648, 576), 3);
    add_background_object(create_fdcorefloor6_3620(11680, 576), 3);
    add_background_object(create_fdcorefloor9_3627(11552, 576), 3);
    add_background_object(create_fdcorefloor6_3620(12224, 768), 3);
    add_background_object(create_fdcorefloor5_3619(12224, 672), 3);
    add_background_object(create_fdcorefloor1_3615(12096, 672), 3);
    add_background_object(create_fdcorefloor3_3611(12096, 768), 3);
    add_background_object(create_fdcoreloop4_3631(11584, 736), 3);
    add_background_object(create_fdcorefloor2_3608(11552, 704), 3);
    add_background_object(create_fdcoreloop1_3628(11584, 608), 3);
    add_background_object(create_fdcoreloop2_3605(12128, 544), 3);
    add_background_object(create_fdcoreloop5_3632(12128, 416), 3);
    add_background_object(create_fdcore1_3606(12288, 640), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 576), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 512), 3);
    add_background_object(create_fdcore2_3610(12288, 512), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 448), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 384), 3);
    add_background_object(create_fdcorefloor8_3621(12000, 320), 3);
    add_background_object(create_fdcorefloor7_3622(12000, 384), 3);
    add_background_object(create_fdcorefloor1_3615(12032, 320), 3);
    add_background_object(create_fdcorefloor3_3611(12032, 384), 3);
    add_background_object(create_fdcorefloor1_3615(12160, 320), 3);
    add_background_object(create_fdcorefloor3_3611(12160, 384), 3);
    add_background_object(create_fdcorefloor6_3620(12224, 384), 3);
    add_background_object(create_fdcorefloor5_3619(12224, 320), 3);
    add_background_object(create_fdcorefloor1_3615(12096, 320), 3);
    add_background_object(create_fdcorefloor3_3611(12096, 384), 3);
    add_background_object(create_fdfloor1_3570(11712, 544), 3);
    add_background_object(create_fdcorefloor8_3621(11776, 544), 3);
    add_background_object(create_fdcorefloor7_3622(11776, 576), 3);
    add_background_object(create_fdcorefloor6_3620(11808, 576), 3);
    add_background_object(create_fdcorefloor5_3619(11808, 544), 3);
    add_background_object(create_fdcore1_3606(12288, 384), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 320), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 256), 3);
    add_background_object(create_fdcorefloor3_3611(11712, 896), 3);
    add_background_object(create_fdcorefloor1_3615(11712, 864), 3);
    add_background_object(create_fdcore2_3610(11904, 1280), 3);
    add_background_object(create_fdcore1_3606(12032, 1280), 3);
    add_background_object(create_fdcore1_3606(11904, 1408), 3);
    add_background_object(create_fdcore2_3610(12032, 1408), 3);
    add_background_object(create_fdcore2_3610(12160, 1280), 3);
    add_background_object(create_fdcore1_3606(12288, 1280), 3);
    add_background_object(create_fdcore1_3606(12160, 1408), 3);
    add_background_object(create_fdcore2_3610(12288, 1408), 3);
    add_background_object(create_fdcore1_3606(12224, 1152), 3);
    add_background_object(create_fdcorefloor1_3615(11872, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(12128, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(12032, 1056), 3);
    add_background_object(create_fdcorefloor4_3609(12192, 1120), 3);
    add_background_object(create_fdcorefloor4_3609(12192, 1184), 3);
    add_background_object(create_fdcorefloor9_3627(12192, 1248), 3);
    add_background_object(create_fdcore4_3607(12352, 1216), 3);
    add_background_object(create_fdcore4_3607(12352, 1152), 3);
    add_background_object(create_fdcore4_3607(12224, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(11936, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(12000, 1248), 3);
    add_background_object(create_fdcorefloor7_3622(11936, 1088), 3);
    add_background_object(create_fdcorefloor3_3611(12032, 1088), 3);
    add_background_object(create_fdcorefloor3_3611(12160, 1088), 3);
    add_background_object(create_fdcorefloor9_3627(12192, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(12064, 1248), 3);
    add_background_object(create_fdcorefloor1_3615(12096, 1056), 3);
    add_background_object(create_fdcorefloor3_3611(12096, 1088), 3);
    add_background_object(create_fdcorefloor1_3615(11968, 1056), 3);
    add_background_object(create_fdcorefloor3_3611(11968, 1088), 3);
    add_background_object(create_fdhandlebar_3669(7472, 384), 3);
    add_background_object(create_fdhandlebar_3669(5792, 416), 3);
    add_background_object(create_fdhandlebar_3669(5888, 416), 3);
    add_background_object(create_fdhandlebar_3669(5984, 416), 3);
    add_background_object(create_fdhandlebar_3669(5696, 416), 3);
    add_background_object(create_fdhandlebar_3669(5600, 416), 3);
    add_background_object(create_fdhandlebar_3669(5504, 416), 3);
    add_background_object(create_fdhandlebar_3669(6080, 416), 3);
    add_background_object(create_fdhandlebar_3669(6176, 416), 3);
    add_background_object(create_fdhandlebar_3669(6272, 416), 3);
    add_background_object(create_fdhandlebar_3669(5408, 416), 3);
    add_background_object(create_fdhandlebar_3669(5312, 416), 3);
    add_background_object(create_fdhandlebar_3669(6368, 416), 3);
    add_background_object(create_fdhandlebar_3669(5216, 416), 3);
    add_background_object(create_fdhandlebar_3669(1504, 384), 3);
    add_background_object(create_fdcorefloor6_3620(1440, 384), 3);
    add_background_object(create_fdcorefloor7_3622(1600, 384), 3);
    add_background_object(create_fdcorefloor9_3627(1440, 352), 3);
    add_background_object(create_fdcorefloor9_3627(1600, 352), 3);
    add_background_object(create_fdcorefloor3_3611(4416, 352), 3);
    add_background_object(create_fdcorefloor3_3611(4352, 352), 3);
    add_background_object(create_fdcorefloor3_3611(4288, 352), 3);
    add_background_object(create_fdcorefloor6_3620(4288, 384), 3);
    add_background_object(create_fdcorefloor7_3622(4448, 384), 3);
    add_background_object(create_fdcorefloor9_3627(4288, 352), 3);
    add_background_object(create_fdcorefloor9_3627(4448, 352), 3);
    add_background_object(create_fdhandlebar_3669(4352, 384), 3);
    add_background_object(create_fdcorefloor9_3627(7424, 352), 3);
    add_background_object(create_fdcorefloor6_3620(7424, 384), 3);
    add_background_object(create_fdcorefloor9_3627(7616, 352), 3);
    add_background_object(create_fdcorefloor7_3622(7616, 384), 3);
    add_background_object(create_fdcorefloor3_3611(7552, 352), 3);
    add_background_object(create_fdcoreback1_3598(8960, 544), 3);
    add_background_object(create_fdcoreback1_3598(8960, 416), 3);
    add_background_object(create_fdcoreback1_3598(9088, 544), 3);
    add_background_object(create_fdcoreback1_3598(9088, 416), 3);
    add_background_object(create_fdcoreback1_3598(9216, 544), 3);
    add_background_object(create_fdcoreback1_3598(9216, 416), 3);
    add_background_object(create_fdcoreback1_3598(9344, 544), 3);
    add_background_object(create_fdcoreback1_3598(9344, 416), 3);
    add_background_object(create_fdcoreback1_3598(9472, 544), 3);
    add_background_object(create_fdcoreback1_3598(9472, 416), 3);
    add_background_object(create_fdcoreback1_3598(9600, 544), 3);
    add_background_object(create_fdcoreback1_3598(9600, 416), 3);
    add_background_object(create_fdcoreback1_3598(9728, 544), 3);
    add_background_object(create_fdcoreback1_3598(9728, 416), 3);
    add_background_object(create_fdcoreback1_3598(9856, 544), 3);
    add_background_object(create_fdcoreback1_3598(9856, 416), 3);
    add_background_object(create_fdcoreback1_3598(9984, 544), 3);
    add_background_object(create_fdcoreback1_3598(9984, 416), 3);
    add_background_object(create_fdcoreback1_3598(10112, 544), 3);
    add_background_object(create_fdcoreback1_3598(10112, 416), 3);
    add_background_object(create_fdcorefloor3_3611(8640, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8704, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8768, 384), 3);
    add_background_object(create_fdcore1_3606(8704, 256), 3);
    add_background_object(create_fdcore2_3610(8704, 128), 3);
    add_background_object(create_fdcore1_3606(8704, 0), 3);
    add_background_object(create_fdcore1_3606(8832, 128), 3);
    add_background_object(create_fdcorefloor3_3611(8896, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8832, 384), 3);
    add_background_object(create_fdcorefloor3_3611(8960, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9024, 384), 3);
    add_background_object(create_fdcore2_3610(8832, 256), 3);
    add_background_object(create_fdcore1_3606(8960, 256), 3);
    add_background_object(create_fdcore2_3610(8960, 128), 3);
    add_background_object(create_fdcore2_3610(8832, 0), 3);
    add_background_object(create_fdcore1_3606(8960, 0), 3);
    add_background_object(create_fdcore1_3606(9088, 128), 3);
    add_background_object(create_fdcorefloor3_3611(9088, 384), 3);
    add_background_object(create_fdcore2_3610(9088, 256), 3);
    add_background_object(create_fdcore2_3610(9088, 0), 3);
    add_background_object(create_fdcorefloor3_3611(9152, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9216, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9280, 384), 3);
    add_background_object(create_fdcore1_3606(9216, 256), 3);
    add_background_object(create_fdcore2_3610(9216, 128), 3);
    add_background_object(create_fdcore1_3606(9216, 0), 3);
    add_background_object(create_fdcore1_3606(9344, 128), 3);
    add_background_object(create_fdcorefloor3_3611(9408, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9344, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9472, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9536, 384), 3);
    add_background_object(create_fdcore2_3610(9344, 256), 3);
    add_background_object(create_fdcore1_3606(9472, 256), 3);
    add_background_object(create_fdcore2_3610(9472, 128), 3);
    add_background_object(create_fdcore2_3610(9344, 0), 3);
    add_background_object(create_fdcore1_3606(9472, 0), 3);
    add_background_object(create_fdcore1_3606(9600, 128), 3);
    add_background_object(create_fdcorefloor3_3611(9600, 384), 3);
    add_background_object(create_fdcore2_3610(9600, 256), 3);
    add_background_object(create_fdcore2_3610(9600, 0), 3);
    add_background_object(create_fdcorefloor3_3611(9664, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9728, 384), 3);
    add_background_object(create_fdcorefloor3_3611(9792, 384), 3);
    add_background_object(create_fdcore1_3606(9728, 256), 3);
    add_background_object(create_fdcore2_3610(9728, 128), 3);
    add_background_object(create_fdcore1_3606(9728, 0), 3);
    add_background_object(create_fdcore1_3606(9856, 128), 3);
    add_background_object(create_fdcorefloor3_3611(9856, 384), 3);
    add_background_object(create_fdcore2_3610(9856, 256), 3);
    add_background_object(create_fdcore2_3610(9856, 0), 3);
    add_background_object(create_fdcorefloor3_3611(8640, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8704, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8768, 960), 3);
    add_background_object(create_fdcore1_3606(8704, 832), 3);
    add_background_object(create_fdcore2_3610(8704, 704), 3);
    add_background_object(create_fdcore1_3606(8832, 704), 3);
    add_background_object(create_fdcorefloor3_3611(8832, 960), 3);
    add_background_object(create_fdcore2_3610(8832, 832), 3);
    add_background_object(create_fdcorefloor1_3615(8640, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8704, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8768, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8832, 672), 3);
    add_background_object(create_fdcorefloor3_3611(8896, 960), 3);
    add_background_object(create_fdcorefloor3_3611(8960, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9024, 960), 3);
    add_background_object(create_fdcore1_3606(8960, 832), 3);
    add_background_object(create_fdcore2_3610(8960, 704), 3);
    add_background_object(create_fdcore1_3606(9088, 704), 3);
    add_background_object(create_fdcorefloor3_3611(9088, 960), 3);
    add_background_object(create_fdcore2_3610(9088, 832), 3);
    add_background_object(create_fdcorefloor1_3615(8896, 672), 3);
    add_background_object(create_fdcorefloor1_3615(8960, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9024, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9088, 672), 3);
    add_background_object(create_fdcorefloor3_3611(9152, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9216, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9280, 960), 3);
    add_background_object(create_fdcore1_3606(9216, 832), 3);
    add_background_object(create_fdcore2_3610(9216, 704), 3);
    add_background_object(create_fdcore1_3606(9344, 704), 3);
    add_background_object(create_fdcorefloor3_3611(9344, 960), 3);
    add_background_object(create_fdcore2_3610(9344, 832), 3);
    add_background_object(create_fdcorefloor1_3615(9152, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9216, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9280, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9344, 672), 3);
    add_background_object(create_fdcorefloor3_3611(9408, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9472, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9536, 960), 3);
    add_background_object(create_fdcore1_3606(9472, 832), 3);
    add_background_object(create_fdcore2_3610(9472, 704), 3);
    add_background_object(create_fdcore1_3606(9600, 704), 3);
    add_background_object(create_fdcorefloor3_3611(9600, 960), 3);
    add_background_object(create_fdcore2_3610(9600, 832), 3);
    add_background_object(create_fdcorefloor1_3615(9408, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9472, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9536, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9600, 672), 3);
    add_background_object(create_fdcorefloor3_3611(9664, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9728, 960), 3);
    add_background_object(create_fdcorefloor3_3611(9792, 960), 3);
    add_background_object(create_fdcore1_3606(9728, 832), 3);
    add_background_object(create_fdcore2_3610(9728, 704), 3);
    add_background_object(create_fdcore1_3606(9856, 704), 3);
    add_background_object(create_fdcorefloor3_3611(9856, 960), 3);
    add_background_object(create_fdcore2_3610(9856, 832), 3);
    add_background_object(create_fdcorefloor1_3615(9664, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9728, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9792, 672), 3);
    add_background_object(create_fdcorefloor1_3615(9856, 672), 3);
    add_background_object(create_fdcore2_3610(12288, 256), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 704), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 704), 3);
    add_background_object(create_fdcorefloor2_3608(12224, 704), 3);
    add_background_object(create_fdcore1_3606(11456, 128), 3);
    add_background_object(create_fdcore2_3610(11328, 128), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 256), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 192), 3);
    add_background_object(create_fdcorefloor2_3608(11680, 128), 3);
    add_background_object(create_fdcorefloor2_3608(11776, 64), 3);
    add_background_object(create_fdcorefloor2_3608(11776, 0), 3);
    add_background_object(create_fdcorefloor6_3620(11776, 128), 3);
    add_background_object(create_fdcorefloor3_3611(11712, 128), 3);
    add_background_object(create_fdcorefloor9_3627(11680, 128), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 192), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 128), 3);
    add_background_object(create_fdcore1_3606(12288, 128), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 64), 3);
    add_background_object(create_fdcorefloor4_3609(12256, 0), 3);
    add_background_object(create_fdcore2_3610(12288, 0), 3);
    add_background_object(create_fdcoreloop4_3631(10400, 160), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 128), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 192), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 256), 3);
    add_background_object(create_fdcorefloor1_3615(11136, 288), 3);
    add_background_object(create_fdcorefloor9_3627(11168, 288), 3);
    add_background_object(create_fdcorefloor1_3615(11264, 192), 3);
    add_background_object(create_fdcorefloor1_3615(11200, 192), 3);
    add_background_object(create_fdcorefloor8_3621(11168, 96), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 64), 3);
    add_background_object(create_fdcorefloor4_3609(11424, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11296, 192), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 0), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 64), 3);
    add_background_object(create_fdcorefloor1_3615(12128, 1216), 3);
    add_background_object(create_fdcorefloor8_3621(12000, 160), 3);
    add_background_object(create_fdcorefloor7_3622(12000, 192), 3);
    add_background_object(create_fdcorefloor1_3615(12096, 160), 3);
    add_background_object(create_fdcorefloor3_3611(12096, 192), 3);
    add_background_object(create_fdcorefloor6_3620(12160, 192), 3);
    add_background_object(create_fdcorefloor5_3619(12160, 160), 3);
    add_background_object(create_fdcorefloor1_3615(12032, 160), 3);
    add_background_object(create_fdcorefloor3_3611(12032, 192), 3);
    add_background_object(create_fdcorefloor3_3611(11808, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11904, 64), 3);
    add_background_object(create_fdcorefloor3_3611(11968, 64), 3);
    add_background_object(create_fdcorefloor3_3611(12064, 0), 3);
    add_background_object(create_fdcorefloor3_3611(12128, 0), 3);
    add_background_object(create_fdcorefloor3_3611(12192, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11776, 0), 3);
    add_background_object(create_fdcorefloor9_3627(12256, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10944, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11008, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11200, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11328, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11264, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11392, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11424, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10688, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10752, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10816, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10880, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10624, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10560, 0), 3);
    add_background_object(create_fdcorefloor3_3611(10496, 0), 3);
    add_background_object(create_fdcorefloor7_3622(10464, 0), 3);
    add_background_object(create_fdcorefloor8_3621(11872, 320), 3);
    add_background_object(create_fdcorefloor7_3622(11872, 352), 3);
    add_background_object(create_fdcorefloor1_3615(11904, 320), 3);
    add_background_object(create_fdcorefloor3_3611(11904, 352), 3);
    add_background_object(create_fdcorefloor6_3620(11968, 352), 3);
    add_background_object(create_fdcorefloor5_3619(11968, 320), 3);
    add_background_object(create_fdcorefloor7_3622(11872, 64), 3);
    add_background_object(create_fdcorefloor6_3620(12032, 64), 3);
    add_background_object(create_fdcorefloor4_3609(11872, 0), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 0), 3);
    add_background_object(create_fdcorefloor9_3627(12032, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11872, 0), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 128), 3);
    add_background_object(create_fdcorefloor4_3609(12512, 0), 3);
    add_background_object(create_fdcorefloor4_3609(12512, 64), 3);
    add_background_object(create_fdcore2_3610(12544, 0), 3);
    add_background_object(create_fdcore1_3606(12672, 0), 3);
    add_background_object(create_fdcorefloor7_3622(12512, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12544, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12672, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12608, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12736, 128), 3);
    add_background_object(create_fdcorefloor9_3627(11200, 192), 3);
    add_background_object(create_fdcorefloor5_3619(11200, 96), 3);
    add_background_object(create_fdcorefloor2_3608(11200, 128), 3);
    add_background_object(create_fdcorefloor4_3609(11296, 128), 3);
    add_background_object(create_fdcorefloor3_3611(11072, 0), 3);
    add_background_object(create_fdcorefloor3_3611(11136, 0), 3);
    add_background_object(create_fdcorefloor8_3621(11296, 96), 3);
    add_background_object(create_fdcorefloor1_3615(11328, 96), 3);
    add_background_object(create_fdcorefloor1_3615(11392, 96), 3);
    add_background_object(create_fdcorefloor9_3627(11424, 96), 3);
    add_background_object(create_fdcore4_3607(11584, 128), 3);
    add_background_object(create_fdcorefloor2_3608(11456, 32), 3);
    add_background_object(create_fdcorefloor9_3627(11456, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11456, 96), 3);
    add_background_object(create_fdcorefloor1_3615(11488, 96), 3);
    add_background_object(create_fdcorefloor3_3611(11488, 0), 3);
    add_background_object(create_fdcorefloor1_3615(11552, 96), 3);
    add_background_object(create_fdcorefloor3_3611(11552, 0), 3);
    add_background_object(create_fdcorefloor1_3615(11616, 96), 3);
    add_background_object(create_fdcorefloor3_3611(11616, 0), 3);
    add_background_object(create_fdcorefloor1_3615(11680, 96), 3);
    add_background_object(create_fdcorefloor3_3611(11680, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11744, 0), 3);
    add_background_object(create_fdcorefloor9_3627(11744, 96), 3);
    add_background_object(create_fdcorefloor4_3609(11752, 32), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 192), 3);
    add_background_object(create_fdcore2_3610(12416, 384), 3);
    add_background_object(create_fdcore1_3606(12544, 384), 3);
    add_background_object(create_fdcore1_3606(12416, 768), 3);
    add_background_object(create_fdcore2_3610(12544, 768), 3);
    add_background_object(create_fdcore2_3610(12672, 384), 3);
    add_background_object(create_fdcore1_3606(12800, 384), 3);
    add_background_object(create_fdcore1_3606(12672, 768), 3);
    add_background_object(create_fdcore2_3610(12800, 768), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 256), 3);
    add_background_object(create_fdcorefloor2_3608(12416, 320), 3);
    add_background_object(create_fdcorefloor1_3615(12416, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12480, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12544, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12608, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12672, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12736, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12800, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12864, 352), 3);
    add_background_object(create_fdcorefloor9_3627(12416, 352), 3);
    add_background_object(create_fdcorefloor8_3621(12512, 160), 3);
    add_background_object(create_fdcorefloor7_3622(12512, 192), 3);
    add_background_object(create_fdcorefloor3_3611(12544, 192), 3);
    add_background_object(create_fdcorefloor1_3615(12544, 160), 3);
    add_background_object(create_fdcorefloor5_3619(12576, 160), 3);
    add_background_object(create_fdcorefloor6_3620(12576, 192), 3);
    add_background_object(create_fdcore2_3610(12800, 0), 3);
    add_background_object(create_fdcorefloor3_3611(12800, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12864, 128), 3);
    add_background_object(create_fdcorefloor8_3621(12832, 160), 3);
    add_background_object(create_fdcorefloor7_3622(12832, 192), 3);
    add_background_object(create_fdcorefloor3_3611(12864, 192), 3);
    add_background_object(create_fdcorefloor1_3615(12864, 160), 3);
    add_background_object(create_fdcorefloor5_3619(12896, 160), 3);
    add_background_object(create_fdcorefloor6_3620(12896, 192), 3);
    add_background_object(create_fdcore2_3610(12416, 896), 3);
    add_background_object(create_fdcore1_3606(12544, 896), 3);
    add_background_object(create_fdcore2_3610(12672, 896), 3);
    add_background_object(create_fdcore1_3606(12800, 896), 3);
    add_background_object(create_fdcore1_3606(12928, 0), 3);
    add_background_object(create_fdcorefloor3_3611(12928, 128), 3);
    add_background_object(create_fdcorefloor3_3611(12992, 128), 3);
    add_background_object(create_fdcore2_3610(13056, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13056, 128), 3);
    add_background_object(create_fdcorefloor3_3611(13120, 128), 3);
    add_background_object(create_fdcore2_3610(12928, 384), 3);
    add_background_object(create_fdcore1_3606(13056, 384), 3);
    add_background_object(create_fdcore1_3606(12928, 768), 3);
    add_background_object(create_fdcore2_3610(13056, 768), 3);
    add_background_object(create_fdcorefloor1_3615(12928, 352), 3);
    add_background_object(create_fdcorefloor1_3615(12992, 352), 3);
    add_background_object(create_fdcorefloor1_3615(13056, 352), 3);
    add_background_object(create_fdcorefloor1_3615(13120, 352), 3);
    add_background_object(create_fdcore2_3610(12928, 896), 3);
    add_background_object(create_fdcore1_3606(13056, 896), 3);
    add_background_object(create_fdcore1_3606(13184, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13184, 128), 3);
    add_background_object(create_fdcorefloor3_3611(13248, 128), 3);
    add_background_object(create_fdcore2_3610(13312, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13312, 128), 3);
    add_background_object(create_fdcorefloor3_3611(13376, 128), 3);
    add_background_object(create_fdcore2_3610(13184, 384), 3);
    add_background_object(create_fdcore1_3606(13312, 384), 3);
    add_background_object(create_fdcore1_3606(13184, 768), 3);
    add_background_object(create_fdcore2_3610(13312, 768), 3);
    add_background_object(create_fdcorefloor1_3615(13184, 352), 3);
    add_background_object(create_fdcorefloor1_3615(13248, 352), 3);
    add_background_object(create_fdcorefloor1_3615(13312, 352), 3);
    add_background_object(create_fdcorefloor1_3615(13376, 352), 3);
    add_background_object(create_fdcore2_3610(13184, 896), 3);
    add_background_object(create_fdcore1_3606(13312, 896), 3);
    add_background_object(create_fdcorefloor8_3621(13248, 160), 3);
    add_background_object(create_fdcorefloor7_3622(13248, 192), 3);
    add_background_object(create_fdcorefloor3_3611(13280, 192), 3);
    add_background_object(create_fdcorefloor1_3615(13280, 160), 3);
    add_background_object(create_fdcorefloor5_3619(13312, 160), 3);
    add_background_object(create_fdcorefloor6_3620(13312, 192), 3);
    add_background_object(create_fdcorefloor1_3615(12672, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12736, 1312), 3);
    add_background_object(create_fdcore2_3610(12672, 1344), 3);
    add_background_object(create_fdcore1_3606(12800, 1344), 3);
    add_background_object(create_fdcore2_3610(12928, 1344), 3);
    add_background_object(create_fdcorefloor1_3615(12800, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12864, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12928, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12992, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(12800, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(12864, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(12928, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(12992, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13056, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13120, 1024), 3);
    add_background_object(create_fdcore1_3606(12672, 1024), 3);
    add_background_object(create_fdcorefloor2_3608(12800, 1088), 3);
    add_background_object(create_fdcorefloor2_3608(12800, 1024), 3);
    add_background_object(create_fdcorefloor9_3627(12800, 1024), 3);
    add_background_object(create_fdcore1_3606(12416, 1024), 3);
    add_background_object(create_fdcore2_3610(12544, 1024), 3);
    add_background_object(create_fdcore2_3610(12416, 1344), 3);
    add_background_object(create_fdcore1_3606(12544, 1344), 3);
    add_background_object(create_fdcorefloor3_3611(12672, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(12736, 1152), 3);
    add_background_object(create_fdcorefloor6_3620(12800, 1152), 3);
    add_background_object(create_fdcore2_3610(13568, 1472), 3);
    add_background_object(create_fdcorefloor3_3611(13184, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13248, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13312, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13376, 1024), 3);
    add_background_object(create_fdcore1_3606(12416, 512), 3);
    add_background_object(create_fdcore2_3610(12544, 512), 3);
    add_background_object(create_fdcore1_3606(12672, 512), 3);
    add_background_object(create_fdcore2_3610(12800, 512), 3);
    add_background_object(create_fdcore2_3610(12416, 640), 3);
    add_background_object(create_fdcore1_3606(12544, 640), 3);
    add_background_object(create_fdcore2_3610(12672, 640), 3);
    add_background_object(create_fdcore1_3606(12800, 640), 3);
    add_background_object(create_fdcore1_3606(12928, 512), 3);
    add_background_object(create_fdcore2_3610(13056, 512), 3);
    add_background_object(create_fdcore2_3610(12928, 640), 3);
    add_background_object(create_fdcore1_3606(13056, 640), 3);
    add_background_object(create_fdcore1_3606(13184, 512), 3);
    add_background_object(create_fdcore2_3610(13312, 512), 3);
    add_background_object(create_fdcore2_3610(13184, 640), 3);
    add_background_object(create_fdcore1_3606(13312, 640), 3);
    add_background_object(create_fdcore1_3606(12672, 1472), 3);
    add_background_object(create_fdcore2_3610(12800, 1472), 3);
    add_background_object(create_fdcore1_3606(12928, 1472), 3);
    add_background_object(create_fdcore1_3606(13440, 1472), 3);
    add_background_object(create_fdcorefloor5_3619(13056, 1312), 3);
    add_background_object(create_fdcorefloor2_3608(13056, 1344), 3);
    add_background_object(create_fdcorefloor2_3608(13056, 1408), 3);
    add_background_object(create_fdcore2_3610(13056, 1472), 3);
    add_background_object(create_fdcorefloor1_3615(13088, 1440), 3);
    add_background_object(create_fdcorefloor9_3627(13056, 1440), 3);
    add_background_object(create_fdcorefloor4_3609(13280, 1344), 3);
    add_background_object(create_fdcorefloor4_3609(13280, 1408), 3);
    add_background_object(create_fdcorefloor9_3627(13280, 1440), 3);
    add_background_object(create_fdcorefloor8_3621(13280, 1312), 3);
    add_background_object(create_fdfloor1_3570(13088, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(13152, 1440), 3);
    add_background_object(create_fdcorefloor1_3615(13216, 1440), 3);
    add_background_object(create_fdfloor1_3570(13152, 1312), 3);
    add_background_object(create_fdfloor1_3570(13216, 1312), 3);
    add_background_object(create_fdcorefloor5_3619(13312, 1312), 3);
    add_background_object(create_fdcorefloor2_3608(13312, 1344), 3);
    add_background_object(create_fdcorefloor2_3608(13312, 1408), 3);
    add_background_object(create_fdcorefloor1_3615(13344, 1440), 3);
    add_background_object(create_fdcorefloor9_3627(13312, 1440), 3);
    add_background_object(create_fdcorefloor4_3609(13536, 1344), 3);
    add_background_object(create_fdcorefloor4_3609(13536, 1408), 3);
    add_background_object(create_fdcorefloor9_3627(13536, 1440), 3);
    add_background_object(create_fdcorefloor8_3621(13536, 1312), 3);
    add_background_object(create_fdfloor1_3570(13344, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(13408, 1440), 3);
    add_background_object(create_fdcorefloor1_3615(13472, 1440), 3);
    add_background_object(create_fdfloor1_3570(13408, 1312), 3);
    add_background_object(create_fdfloor1_3570(13472, 1312), 3);
    add_background_object(create_fdcore1_3606(13440, 768), 3);
    add_background_object(create_fdcore2_3610(13568, 768), 3);
    add_background_object(create_fdcore2_3610(13440, 896), 3);
    add_background_object(create_fdcore1_3606(13568, 896), 3);
    add_background_object(create_fdcorefloor3_3611(13440, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13504, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13568, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13632, 1024), 3);
    add_background_object(create_sbrotorbladetunnel_2178(13280, 1384), 3);
    add_background_object(create_fdcore4_3607(13184, 1536), 3);
    add_background_object(create_fdcore4_3607(13184, 1472), 3);
    add_background_object(create_fdcore4_3607(13376, 1536), 3);
    add_background_object(create_fdcore4_3607(13376, 1472), 3);
    add_background_object(create_fdcorefloor4_3609(13344, 1472), 3);
    add_background_object(create_fdcorefloor4_3609(13344, 1536), 3);
    add_background_object(create_fdcorefloor2_3608(13248, 1472), 3);
    add_background_object(create_fdcorefloor2_3608(13248, 1536), 3);
    add_background_object(create_sbrotorbladetunnel_2178(13280, 1472), 3);
    add_background_object(create_fdcorefloor8_3621(13344, 1440), 3);
    add_background_object(create_fdcorefloor5_3619(13248, 1440), 3);
    add_background_object(create_fdcore1_3606(13568, 1344), 3);
    add_background_object(create_fdcorefloor1_3615(13568, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(13632, 1312), 3);
    add_background_object(create_sbrotorbladetunnel_2178(13280, 1560), 3);
    add_background_object(create_fdcore2_3610(13696, 1344), 3);
    add_background_object(create_fdcore1_3606(13696, 1472), 3);
    add_background_object(create_fdcorefloor1_3615(13696, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(13760, 1312), 3);
    add_background_object(create_fdcore1_3606(13696, 768), 3);
    add_background_object(create_fdcore2_3610(13824, 768), 3);
    add_background_object(create_fdcore2_3610(13696, 896), 3);
    add_background_object(create_fdcore1_3606(13824, 896), 3);
    add_background_object(create_fdcorefloor3_3611(13696, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13760, 1024), 3);
    add_background_object(create_fdcore2_3610(13824, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(13888, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(13824, 1152), 3);
    add_background_object(create_fdcorefloor7_3622(13792, 1152), 3);
    add_background_object(create_fdcorefloor4_3609(13792, 1088), 3);
    add_background_object(create_fdcorefloor4_3609(13792, 1024), 3);
    add_background_object(create_fdcorefloor9_3627(13792, 1024), 3);
    add_background_object(create_fdcore2_3610(13952, 896), 3);
    add_background_object(create_fdcore1_3606(13952, 1024), 3);
    add_background_object(create_fdcore1_3606(13952, 768), 3);
    add_background_object(create_fdcorefloor3_3611(14016, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(13952, 1152), 3);
    add_background_object(create_fdcore2_3610(13824, 1472), 3);
    add_background_object(create_fdcore1_3606(13824, 1344), 3);
    add_background_object(create_fdcorefloor1_3615(13824, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(13888, 1312), 3);
    add_background_object(create_fdcore2_3610(13952, 1344), 3);
    add_background_object(create_fdcore1_3606(13952, 1472), 3);
    add_background_object(create_fdcorefloor1_3615(13952, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(14016, 1312), 3);
    add_background_object(create_fdcore2_3610(14080, 768), 3);
    add_background_object(create_fdcore1_3606(14080, 896), 3);
    add_background_object(create_fdcore2_3610(14080, 1024), 3);
    add_background_object(create_fdcorefloor3_3611(14144, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(14080, 1152), 3);
    add_background_object(create_fdcore2_3610(14080, 1472), 3);
    add_background_object(create_fdcore1_3606(14080, 1344), 3);
    add_background_object(create_fdcorefloor1_3615(14080, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(14144, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(14208, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(14208, 1152), 3);
    add_background_object(create_fdcore1_3606(13440, 512), 3);
    add_background_object(create_fdcore2_3610(13568, 512), 3);
    add_background_object(create_fdcore1_3606(13696, 512), 3);
    add_background_object(create_fdcore2_3610(13824, 512), 3);
    add_background_object(create_fdcorefloor5_3619(13440, 352), 3);
    add_background_object(create_fdcorefloor2_3608(13440, 384), 3);
    add_background_object(create_fdcorefloor2_3608(13440, 448), 3);
    add_background_object(create_fdcorefloor1_3615(13440, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13504, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13568, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13632, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13696, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13760, 480), 3);
    add_background_object(create_fdcorefloor1_3615(13824, 480), 3);
    add_background_object(create_fdcore2_3610(13440, 640), 3);
    add_background_object(create_fdcore1_3606(13568, 640), 3);
    add_background_object(create_fdcore2_3610(13696, 640), 3);
    add_background_object(create_fdcore1_3606(13824, 640), 3);
    add_background_object(create_fdcorefloor9_3627(13440, 480), 3);
    add_background_object(create_fdfloor1_3570(13472, 352), 3);
    add_background_object(create_fdfloor1_3570(13536, 352), 3);
    add_background_object(create_fdfloor1_3570(13600, 352), 3);
    add_background_object(create_fdfloor1_3570(13664, 352), 3);
    add_background_object(create_fdfloor1_3570(13728, 352), 3);
    add_background_object(create_fdfloor1_3570(13792, 352), 3);
    add_background_object(create_fdcore2_3610(13888, 192), 3);
    add_background_object(create_fdcore1_3606(13888, 320), 3);
    add_background_object(create_fdcore1_3606(13952, 448), 3);
    add_background_object(create_fdcore2_3610(14080, 448), 3);
    add_background_object(create_fdcore2_3610(13952, 576), 3);
    add_background_object(create_fdcore1_3606(14080, 640), 3);
    add_background_object(create_fdcore2_3610(14016, 320), 3);
    add_background_object(create_fdcore1_3606(14016, 192), 3);
    add_background_object(create_fdcorefloor4_3609(13856, 192), 3);
    add_background_object(create_fdcorefloor4_3609(13856, 256), 3);
    add_background_object(create_fdcorefloor4_3609(13856, 320), 3);
    add_background_object(create_fdcorefloor4_3609(13856, 448), 3);
    add_background_object(create_fdcorefloor9_3627(13856, 480), 3);
    add_background_object(create_fdcorefloor6_3620(13440, 128), 3);
    add_background_object(create_fdcorefloor2_3608(13440, 64), 3);
    add_background_object(create_fdcorefloor2_3608(13440, 0), 3);
    add_background_object(create_fdcore2_3610(14144, 192), 3);
    add_background_object(create_fdcore1_3606(14144, 320), 3);
    add_background_object(create_fdcorefloor8_3621(13856, 160), 3);
    add_background_object(create_fdcorefloor1_3615(13888, 160), 3);
    add_background_object(create_fdcorefloor1_3615(13952, 160), 3);
    add_background_object(create_fdcorefloor1_3615(14016, 160), 3);
    add_background_object(create_fdcorefloor1_3615(14080, 160), 3);
    add_background_object(create_fdcorefloor1_3615(14144, 160), 3);
    add_background_object(create_fdcorefloor1_3615(14208, 160), 3);
    add_background_object(create_fdcorefloor3_3611(14144, 0), 3);
    add_background_object(create_fdcorefloor3_3611(14208, 0), 3);
    add_background_object(create_fdcorefloor3_3611(14016, 0), 3);
    add_background_object(create_fdcorefloor3_3611(14080, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13888, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13952, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13760, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13824, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13632, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13696, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13504, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13568, 0), 3);
    add_background_object(create_fdcorefloor3_3611(13440, 0), 3);
    add_background_object(create_fdcorefloor9_3627(13440, 0), 3);
    add_background_object(create_fdcorefloor4_3609(13856, 384), 3);
    add_background_object(create_fdcore4_3607(13888, 448), 3);
    add_background_object(create_fdcore4_3607(13952, 704), 3);
    add_background_object(create_fdcore4_3607(14016, 704), 3);
    add_background_object(create_fdcore4_3607(14080, 576), 3);
    add_background_object(create_fdcore4_3607(14144, 576), 3);
    add_background_object(create_fdcorefloor1_3615(12608, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12544, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(12608, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(12544, 1152), 3);
    add_background_object(create_fdcore2_3610(12544, 1472), 3);
    add_background_object(create_fdcorefloor1_3615(12480, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(12416, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(12480, 1152), 3);
    add_background_object(create_fdcorefloor3_3611(12416, 1152), 3);
    add_background_object(create_fdcorefloor2_3608(12384, 1184), 3);
    add_background_object(create_fdcorefloor2_3608(12384, 1248), 3);
    add_background_object(create_fdcorefloor9_3627(12384, 1152), 3);
    add_background_object(create_fdcorefloor9_3627(12384, 1312), 3);
    add_object(create_objecttransporterstart_3412(12224, 288), 3);
    add_object(create_objecttransporterstart_3412(-352, 1312), 3);
    add_object(create_objecttransporterstart_3412(10432, 800), 3);
    add_object(create_objecttransporterstart_3412(11264, 160), 3);
    add_object(create_gimmickspeedbooster_3638(11599, 1199), 3);
    add_object(create_gimmickspeedbooster_3638(11535, 1199), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_hazardorbitbeambase_3633(13664, 240), 3);
    add_object(create_fdlooplayer12_3636(14736, 928), 3);
    add_object(create_fdlooplayer12_3636(14736, 736), 3);
    add_object(create_enemyrotorbladespikes_2204(-265, 1024), 3);
    add_object(create_enemyrotorblade_2205(-264, 1024), 3);
    add_object(create_enemydronelaser_2127(-332, 974), 3);
    add_object(create_playerstartingpoint_358(109, 621), 3);
    add_object(create_enemytankbot_2821(-410, 1106), 3);
    add_object(create_dialogdata_3670(-168, 464), 3);
    add_object(create_objecttransporternode90_3428(-352, 1248), 3);
    add_object(create_objecttransporternode180_3426(-416, 1312), 3);
    add_object(create_objecttransporternode270_3417(-352, 1376), 3);
    add_object(create_objecttransporternode0_3415(-288, 1312), 3);
    add_object(create_objecttransporterstart2_3416(-354, 1318), 3);
    add_object(create_objecttransporter_3344(-352, 1416), 3);
    add_object(create_enemyelitespawner_3345(-474, 1470), 3);
    add_object(create_fdlooplayer03_3639(14800, 864), 3);
    add_object(create_fdlooplayer11_3640(14800, 544), 3);
    add_object(create_fdlooplayer12_3636(14928, 544), 3);
    add_object(create_fdlooplayer02_3641(14672, 800), 3);
    add_object(create_fdlooplayer02_3641(14672, 928), 3);
    add_object(create_fdlooplayer02_3641(14736, 928), 3);
    add_object(create_fdlooplayer02_3641(14864, 800), 3);
    add_object(create_fdlooplayer02_3641(14800, 608), 3);
    add_object(create_fdlooplayer02_3641(14864, 608), 3);
    add_object(create_fdlooplayer12_3636(14928, 736), 3);
    add_object(create_fdlooplayer13_3642(14672, 992), 3);
    add_object(create_fdlooplayer12_3636(14608, 864), 3);
    add_object(create_fdlooplayer12_3636(14736, 864), 3);
    add_object(create_layerchangeswitch_404(14864, 1032), 3);
    add_object(create_fdlooplayer12_3636(14736, 672), 3);
    add_object(create_layerchangeswitch2_1239(14728, 584), 3);
    add_object(create_gimmickspeedbooster_3638(14527, 879), 3);
    add_object(create_gimmickspeedbooster_3638(14463, 879), 3);
    add_object(create_layerchangeswitch2_1239(14584, 872), 3);
    add_object(create_layerchangeswitch_404(15008, 552), 3);
    add_object(create_layerchangeswitch_404(15008, 744), 3);
    add_object(create_gimmickspeedbooster_3638(15103, 751), 3);
    add_object(create_gimmickspeedbooster_3638(15039, 751), 3);
    add_object(create_fdlooplayer12_3636(14608, 1056), 3);
    add_object(create_fdlooplayer12_3636(14608, 992), 3);
    add_object(create_layerchangeswitch2_1239(14576, 1008), 3);
    add_object(create_layerchangeswitch2_1239(14576, 1064), 3);
    add_object(create_lockeddoorterminal_2606(10680, 928), 3);
    add_object(create_lockedlabdoorbarrier_3541(10600, 736), 3);
    add_object(create_objectkeycard_2643(12080, 296), 3);
    add_object(create_gimmickspeedbooster_3638(14527, 1071), 3);
    add_object(create_gimmickspeedbooster_3638(14463, 1071), 3);
    add_object(create_fdlooplayer01_3643(14672, 672), 3);
    add_object(create_objecttransporternode0_3415(14800, 672), 3);
    add_object(create_objecttransporterwave_3414(-464, 1512), 3);
    add_object(create_enemydnacannonbase_2262(4838, 571), 3);
    add_object(create_enemydnacannon_2264(4839, 572), 3);
    add_object(create_effectwarning_1513(4892, 584), 3);
    add_object(create_enemydnalaser_2236(-512, 1680), 3);
    add_object(create_enemybubblorbiter_2443(-536, 1912), 3);
    add_object(create_fdlooplayer14_3646(11168, 672), 3);
    add_object(create_fdlooplayer12_3636(11104, 672), 3);
    add_object(create_fdlooplayer12_3636(11296, 864), 3);
    add_object(create_fdlooplayer02_3641(11168, 928), 3);
    add_object(create_fdlooplayer02_3641(11360, 1056), 3);
    add_object(create_fdlooplayer02_3641(11360, 928), 3);
    add_object(create_fdlooplayer02_3641(11168, 736), 3);
    add_object(create_fdlooplayer02_3641(11232, 736), 3);
    add_object(create_fdlooplayer12_3636(11296, 992), 3);
    add_object(create_fdlooplayer12_3636(11296, 800), 3);
    add_object(create_fdlooplayer04_3647(11296, 800), 3);
    add_object(create_fdlooplayer12_3636(11104, 864), 3);
    add_object(create_fdlooplayer05_3648(11168, 992), 3);
    add_object(create_fdlooplayer15_3649(11296, 1120), 3);
    add_object(create_fdlooplayer12_3636(11424, 1184), 3);
    add_object(create_fdlooplayer12_3636(11424, 1120), 3);
    add_object(create_layerchangeswitch2_1239(11048, 872), 3);
    add_object(create_layerchangeswitch_404(11352, 704), 3);
    add_object(create_layerchangeswitch2_1239(11216, 1160), 3);
    add_object(create_layerchangeswitch2_1239(11048, 680), 3);
    add_object(create_layerchangeswitch_404(11512, 1000), 3);
    add_object(create_fdlooplayer12_3636(11424, 992), 3);
    add_object(create_layerchangeswitch_404(11512, 1128), 3);
    add_object(create_layerchangeswitch_404(11512, 1192), 3);
    add_object(create_objectsiren_3337(-297, 911), 3);
    add_object(create_enemypounder_3419(-432, 1832), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeam_3644(13664, 240), 3);
    add_object(create_hazardorbitbeamscan_3645(13648, 184), 3);
    add_object(create_hazardorbitbeamscan_3645(13656, 184), 3);
    add_object(create_hazardorbitbeamscan_3645(13664, 184), 3);
    add_object(create_hazardorbitbeamscan_3645(13672, 184), 3);
    add_object(create_hazardorbitbeamscan_3645(13648, 168), 3);
    add_object(create_hazardorbitbeamscan_3645(13648, 176), 3);
    add_object(create_hazardorbitbeamscan_3645(13656, 168), 3);
    add_object(create_hazardorbitbeamscan_3645(13656, 176), 3);
    add_object(create_hazardorbitbeamscan_3645(13664, 168), 3);
    add_object(create_hazardorbitbeamscan_3645(13664, 176), 3);
    add_object(create_hazardorbitbeamscan_3645(13672, 168), 3);
    add_object(create_hazardorbitbeamscan_3645(13672, 176), 3);
    add_object(create_objectpetal_302(15217, 761), 3);
    add_object(create_objectpetal_302(15233, 777), 3);
    add_object(create_objectpetal_302(15201, 777), 3);
    add_object(create_enemygatlinggunright_3634(6168, 720), 3);
    add_object(create_enemygatlinggunleft_3635(6168, 688), 3);
    add_object(create_enemygatlinggun_3650(6192, 704), 3);
    add_object(create_enemygatlinggunbarrel_3651(6192, 704), 3);
    add_object(create_enemygatlinggun2_3652(6192, 704), 3);
    add_object(create_layerchangeswitch2_1239(11064, 624), 3);
    add_object(create_gimmickspeedbooster_3638(11975, 1711), 3);
    add_object(create_gimmickspeedboosterfront_3653(12007, 1775), 3);
    add_object(create_minibossbulldozerdoor_1718(1563, 651), 3);
    add_object(create_minibossbulldozer_1719(1567, 656), 3);
    add_object(create_minibosslimiter_1771(1168, 608), 3);
    add_object(create_minibosslimiter_1771(1880, 608), 3);
    add_object(create_minibossbulldozerwheel1_1773(1531, 659), 3);
    add_object(create_minibossbulldozerwheel2_1774(1608, 664), 3);
    add_object(create_minibossbulldozerhitbox_1776(-113, 1120), 3);
    add_object(create_enemyterreonleftshoulder_2981(3132, 644), 3);
    add_object(create_enemyterreonrightshoulder_2982(3188, 644), 3);
    add_object(create_enemyterreonleftleg_2983(3123, 638), 3);
    add_object(create_enemyterreonrightleg_2984(3204, 638), 3);
    add_object(create_enemyterreon_2985(3163, 638), 3);
    add_object(create_effectterreonwarning_2986(3164, 584), 3);
    add_object(create_enemyterreonleftshoulder_2981(7148, 644), 3);
    add_object(create_enemyterreonrightshoulder_2982(7204, 644), 3);
    add_object(create_enemyterreonleftleg_2983(7139, 638), 3);
    add_object(create_enemyterreonrightleg_2984(7220, 638), 3);
    add_object(create_enemyterreon_2985(7179, 638), 3);
    add_object(create_effectterreonwarning_2986(7180, 584), 3);
    add_object(create_enemycacteon_990(-432, 929), 3);
    add_object(create_enemymagmeon_2208(2400, 657), 3);
    add_object(create_enemymagmeon_2208(2352, 657), 3);
    add_object(create_enemymagmeon_2208(2256, 657), 3);
    add_object(create_enemymagmeon_2208(2120, 657), 3);
    add_object(create_enemymagmeon_2208(3520, 657), 3);
    add_object(create_enemymagmeon_2208(2448, 657), 3);
    add_object(create_enemymagmeon_2208(2496, 657), 3);
    add_object(create_enemymagmeon_2208(2544, 657), 3);
    add_object(create_enemymagmeon_2208(2664, 657), 3);
    add_object(create_enemymagmeon_2208(2792, 657), 3);
    add_object(create_enemymagmeon_2208(2904, 657), 3);
    add_object(create_enemymagmeon_2208(2952, 657), 3);
    add_object(create_enemymagmeon_2208(3000, 657), 3);
    add_object(create_enemymagmeon_2208(3568, 657), 3);
    add_object(create_enemymagmeon_2208(3616, 657), 3);
    add_object(create_enemymagmeon_2208(3664, 657), 3);
    add_object(create_enemymagmeon_2208(3712, 657), 3);
    add_object(create_enemymagmeon_2208(3760, 657), 3);
    add_object(create_enemymagmeon_2208(3808, 657), 3);
    add_object(create_enemymagmeon_2208(3856, 657), 3);
    add_object(create_enemymagmeon_2208(3904, 657), 3);
    add_object(create_enemymagmeon_2208(3952, 657), 3);
    add_object(create_enemymagmeon_2208(4000, 657), 3);
    add_object(create_enemytankbot_2821(4287, 633), 3);
    add_object(create_enemytankbot_2821(4519, 633), 3);
    add_object(create_enemyseeker_2648(751, 576), 3);
    add_object(create_enemyseeker_2648(903, 520), 3);
    add_object(create_enemyseeker_2648(1063, 552), 3);
    add_object(create_enemyseeker_2648(1247, 480), 3);
    add_object(create_enemyseeker_2648(1975, 528), 3);
    add_object(create_enemyseeker_2648(2119, 472), 3);
    add_object(create_enemyseeker_2648(2215, 504), 3);
    add_object(create_enemyseeker_2648(2311, 544), 3);
    add_object(create_enemyseeker_2648(2415, 576), 3);
    add_object(create_enemyseeker_2648(2495, 536), 3);
    add_object(create_enemyseeker_2648(2615, 488), 3);
    add_object(create_enemyseeker_2648(3263, 496), 3);
    add_object(create_enemyseeker_2648(3543, 528), 3);
    add_object(create_enemyseeker_2648(3663, 480), 3);
    add_object(create_enemybubblorbiter_2443(448, 648), 3);
    add_object(create_enemybubblorbiter_2443(800, 648), 3);
    add_object(create_enemylimiter_350(4597, 658), 3);
    add_object(create_enemylimiter_350(4909, 658), 3);
    add_object(create_enemyseeker_2648(3807, 568), 3);
    add_object(create_enemyseeker_2648(3911, 456), 3);
    add_object(create_enemyseeker_2648(4015, 496), 3);
    add_object(create_enemyseeker_2648(5055, 568), 3);
    add_object(create_enemyseeker_2648(5159, 456), 3);
    add_object(create_enemyseeker_2648(5343, 552), 3);
    add_object(create_enemyseeker_2648(5447, 584), 3);
    add_object(create_enemyseeker_2648(5615, 472), 3);
    add_object(create_enemyseeker_2648(5687, 544), 3);
    add_object(create_objecttransporter_3344(5696, 640), 3);
    add_object(create_objecttransporter_3344(5952, 640), 3);
    add_object(create_enemyelitespawner_3345(5695, 639), 3);
    add_object(create_enemyelitespawner_3345(5951, 639), 3);
    add_object(create_enemylimiter_350(5677, 658), 3);
    add_object(create_enemyrotorbladespikes_2204(5023, 704), 3);
    add_object(create_enemyrotorblade_2205(5024, 704), 3);
    add_object(create_enemyrotorbladespikes_2204(5183, 704), 3);
    add_object(create_enemyrotorblade_2205(5184, 704), 3);
    add_object(create_enemyspawntube_2195(5184, 716), 3);
    add_object(create_enemyspawntube_2195(5024, 716), 3);
    add_object(create_minibossbulldozerarm_1772(1575, 632), 3);
    add_object(create_minibossbulldozerclaw_1775(1582, 632), 3);
    add_object(create_enemyterreonleftshoulder_2981(10988, 260), 3);
    add_object(create_enemyterreonrightshoulder_2982(11044, 260), 3);
    add_object(create_enemyterreonleftleg_2983(10979, 254), 3);
    add_object(create_enemyterreonrightleg_2984(11060, 254), 3);
    add_object(create_enemyterreon_2985(11019, 254), 3);
    add_object(create_effectterreonwarning_2986(11020, 200), 3);
    add_object(create_enemygatlinggunright_3634(7384, 400), 3);
    add_object(create_enemygatlinggunleft_3635(7384, 368), 3);
    add_object(create_enemygatlinggun_3650(7408, 384), 3);
    add_object(create_enemygatlinggunbarrel_3651(7408, 384), 3);
    add_object(create_enemygatlinggun2_3652(7408, 384), 3);
    add_object(create_enemylimiter_350(4197, 658), 3);
    add_object(create_enemylimiter_350(4085, 658), 3);
    add_object(create_objecttransporter_3344(6688, 640), 3);
    add_object(create_objecttransporter_3344(6752, 640), 3);
    add_object(create_objecttransporter_3344(6816, 640), 3);
    add_object(create_objecttransporter_3344(6880, 640), 3);
    add_object(create_enemyelitespawner_3345(6687, 639), 3);
    add_object(create_enemyelitespawner_3345(6879, 639), 3);
    add_object(create_enemyelitespawner_3345(6815, 639), 3);
    add_object(create_enemyelitespawner_3345(6751, 639), 3);
    add_object(create_monitorfireshield_328(4112, 576), 3);
    add_object(create_enemydnacannonbase_2262(1726, 483), 3);
    add_object(create_enemydnacannon_2264(1727, 484), 3);
    add_object(create_effectwarning_1513(1780, 496), 3);
    add_object(create_objectpetal_302(1425, 569), 3);
    add_object(create_objectpetal_302(1473, 569), 3);
    add_object(create_objectpetal_302(1521, 569), 3);
    add_object(create_objectpetal_302(1569, 569), 3);
    add_object(create_objectpetal_302(1617, 569), 3);
    add_object(create_objectpetal_302(1665, 569), 3);
    add_object(create_objectcrystal_279(1397, 434), 3);
    add_object(create_objectcrystal_279(1437, 434), 3);
    add_object(create_objectcrystal_279(1477, 434), 3);
    add_object(create_objectcrystal_279(1597, 434), 3);
    add_object(create_objectcrystal_279(1637, 434), 3);
    add_object(create_objectcrystal_279(1677, 434), 3);
    add_object(create_enemytankbot_2821(4383, 465), 3);
    add_object(create_enemylimiter_350(4229, 490), 3);
    add_object(create_enemylimiter_350(4565, 490), 3);
    add_object(create_objectpetal_302(4313, 553), 3);
    add_object(create_objectpetal_302(4457, 553), 3);
    add_object(create_objectpetal_302(4361, 553), 3);
    add_object(create_objectpetal_302(4409, 553), 3);
    add_object(create_enemygatlinggunright_3634(7912, 720), 3);
    add_object(create_enemygatlinggunleft_3635(7912, 688), 3);
    add_object(create_enemygatlinggun_3650(7936, 704), 3);
    add_object(create_enemygatlinggunbarrel_3651(7936, 704), 3);
    add_object(create_enemygatlinggun2_3652(7936, 704), 3);
    add_object(create_enemygatlinggunright_3634(8032, 528), 3);
    add_object(create_enemygatlinggunleft_3635(8032, 496), 3);
    add_object(create_enemygatlinggun_3650(8056, 512), 3);
    add_object(create_enemygatlinggunbarrel_3651(8056, 512), 3);
    add_object(create_enemygatlinggun2_3652(8056, 512), 3);
    add_object(create_gimmickspeedbooster_3638(8527, 559), 3);
    add_object(create_gimmickspeedbooster_3638(8463, 559), 3);
    add_object(create_objecttransporterstart2_3416(10430, 798), 3);
    add_object(create_gimmickspeedbooster_3638(11727, 815), 3);
    add_object(create_gimmickspeedbooster_3638(12047, 623), 3);
    add_object(create_gimmickspeedbooster_3638(12047, 815), 3);
    add_object(create_gimmickspeedbooster_3638(11759, 623), 3);
    add_object(create_yellowspringup_434(11840, 1232), 3);
    add_object(create_yellowspringup_434(11808, 1232), 3);
    add_object(create_yellowspringup_434(11872, 1232), 3);
    add_object(create_monitorcrate_409(12096, 1216), 3);
    add_object(create_monitorcrate_409(12064, 1216), 3);
    add_object(create_monitorcrate_409(12032, 1216), 3);
    add_object(create_gimmickspeedbooster_3638(12047, 1007), 3);
    add_object(create_gimmickhangingidlesensor_740(7505, 408), 3);
    add_object(create_gimmickhangingidlesensor_740(5825, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5921, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(6017, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5729, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5633, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5537, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(6113, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(6209, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(6305, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5441, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5345, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(6401, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(5249, 440), 3);
    add_object(create_gimmickhangingidlesensor_740(1537, 408), 3);
    add_object(create_gimmickhangingidlesensor_740(4385, 408), 3);
    add_object(create_gimmickspeedbooster_3638(9103, 623), 3);
    add_object(create_gimmickspeedbooster_3638(9039, 623), 3);
    add_object(create_monitorrings_407(12000, 1216), 3);
    add_object(create_objectcrystal_279(11373, 1154), 3);
    add_object(create_objectcrystal_279(11221, 1154), 3);
    add_object(create_objectcrystal_279(11357, 1178), 3);
    add_object(create_objectcrystal_279(11237, 1178), 3);
    add_object(create_objectcrystal_279(11333, 1194), 3);
    add_object(create_objectcrystal_279(11261, 1194), 3);
    add_object(create_objectcrystal_279(11309, 1202), 3);
    add_object(create_objectcrystal_279(11285, 1202), 3);
    add_object(create_objectcrystal_279(11213, 1122), 3);
    add_object(create_objectcrystal_279(11221, 1090), 3);
    add_object(create_objectcrystal_279(11237, 1066), 3);
    add_object(create_objectcrystal_279(11261, 1050), 3);
    add_object(create_objectcrystal_279(11285, 1042), 3);
    add_object(create_objectcrystal_279(11381, 1122), 3);
    add_object(create_objectcrystal_279(11949, 834), 3);
    add_object(create_objectcrystal_279(11917, 834), 3);
    add_object(create_objectcrystal_279(11885, 834), 3);
    add_object(create_objectcrystal_279(11853, 834), 3);
    add_object(create_objectcrystal_279(11965, 642), 3);
    add_object(create_objectcrystal_279(11933, 642), 3);
    add_object(create_objectcrystal_279(11901, 642), 3);
    add_object(create_objectcrystal_279(11869, 642), 3);
    add_object(create_gimmickspeedbooster_3638(12047, 431), 3);
    add_object(create_bossmmillafootback_3671(13064, 1292), 3);
    add_object(create_objectcrystal_279(11965, 450), 3);
    add_object(create_objectcrystal_279(11933, 450), 3);
    add_object(create_objectcrystal_279(11901, 450), 3);
    add_object(create_objectcrystal_279(11869, 450), 3);
    add_object(create_yellowspringup_434(11712, 528), 3);
    add_object(create_yellowspringup_434(11744, 528), 3);
    add_object(create_yellowspringup_434(11776, 528), 3);
    add_object(create_yellowspringup_434(11808, 528), 3);
    add_object(create_objecttransporterstart2_3416(11262, 158), 3);
    add_object(create_objecttransporter_3344(12160, 1216), 3);
    add_object(create_objecttransporternode270_3417(12160, 128), 3);
    add_object(create_objecttransporterstart2_3416(12222, 286), 3);
    add_object(create_objecttransporternode180_3426(12224, 128), 3);
    add_object(create_objecttransporternode0_3415(11264, 64), 3);
    add_object(create_objecttransporternode270_3417(11840, 64), 3);
    add_object(create_objecttransporternode0_3415(11840, 288), 3);
    add_object(create_objecttransporternode90_3428(12096, 128), 3);
    add_object(create_objecttransporternode0_3415(12096, 64), 3);
    add_object(create_objecttransporternode90_3428(12480, 64), 3);
    add_object(create_objecttransporternode90_3428(11968, 288), 3);
    add_object(create_objecttransporternode0_3415(11968, 128), 3);
    add_object(create_monitorcrystals_324(11352, 64), 3);
    add_object(create_objectcrystal_279(10685, 122), 3);
    add_object(create_bossmmillaarmback_3672(13096, 1288), 3);
    add_object(create_objectcrystal_279(10717, 122), 3);
    add_object(create_objectcrystal_279(10701, 146), 3);
    add_object(create_objectcrystal_279(10685, 170), 3);
    add_object(create_objectcrystal_279(10717, 170), 3);
    add_object(create_objectcrystal_279(10701, 194), 3);
    add_object(create_objectcrystal_279(10685, 218), 3);
    add_object(create_objectcrystal_279(10717, 218), 3);
    add_object(create_bossmmillapawback_3673(13120, 1292), 3);
    add_object(create_objectcrystal_279(10749, 122), 3);
    add_object(create_objectcrystal_279(10733, 146), 3);
    add_object(create_objectcrystal_279(10749, 170), 3);
    add_object(create_objectcrystal_279(10733, 194), 3);
    add_object(create_objectcrystal_279(10749, 218), 3);
    add_object(create_objectcrystal_279(10781, 122), 3);
    add_object(create_objectcrystal_279(10765, 146), 3);
    add_object(create_objectcrystal_279(10781, 170), 3);
    add_object(create_objectcrystal_279(10765, 194), 3);
    add_object(create_objectcrystal_279(10781, 218), 3);
    add_object(create_objectcrystal_279(10813, 122), 3);
    add_object(create_objectcrystal_279(10797, 146), 3);
    add_object(create_objectcrystal_279(10813, 170), 3);
    add_object(create_objectcrystal_279(10797, 194), 3);
    add_object(create_objectcrystal_279(10813, 218), 3);
    add_object(create_objectcrystal_279(10845, 122), 3);
    add_object(create_objectcrystal_279(10829, 146), 3);
    add_object(create_objectcrystal_279(10845, 170), 3);
    add_object(create_objectcrystal_279(10829, 194), 3);
    add_object(create_objectcrystal_279(10845, 218), 3);
    add_object(create_objectcrystal_279(10877, 122), 3);
    add_object(create_objectcrystal_279(10861, 146), 3);
    add_object(create_objectcrystal_279(10877, 170), 3);
    add_object(create_objectcrystal_279(10861, 194), 3);
    add_object(create_objectcrystal_279(10877, 218), 3);
    add_object(create_enemybubblorbiter_2443(12720, 328), 3);
    add_object(create_enemyspawntube_2195(13312, 1356), 3);
    add_object(create_bossmmillaearback_3674(13096, 1260), 3);
    add_object(create_bossmmillatail_3675(13008, 1240), 3);
    add_object(create_bossmmillatail_3675(13016, 1256), 3);
    add_object(create_bossmmillatail_3675(13032, 1272), 3);
    add_object(create_bossmmillabody_3676(13040, 1272), 3);
    add_object(create_bossmmillabody_3676(13072, 1272), 3);
    add_object(create_bossmmillaleg_3677(13016, 1280), 3);
    add_object(create_bossmmillaarmfront_3678(13048, 1288), 3);
    add_object(create_bossmmillafoot_3679(13008, 1292), 3);
    add_object(create_bossmmillatail_3675(13008, 1224), 3);
    add_object(create_bossmmillahead_3680(13100, 1260), 3);
    add_object(create_bossmmillapawfront_3681(13064, 1292), 3);
    add_object(create_bossmmillaearfront_3682(13096, 1260), 3);
    add_object(create_bossmmillatail_3675(13016, 1208), 3);
    add_object(create_brevon_3683(13043, 1311), 3);
    add_object(create_device_3367(13232, 1272), 3);
    add_object(create_bossmmillatail_3675(13032, 1200), 3);
    add_object(create_brevonknifearm_3684(13121, 1421), 3);
    add_object(create_bosshatchdoor_3317(12800, 1376), 3);
    add_object(create_bosshatchdoor_3317(13792, 1312), 3);
    add_object(create_bossmmillatailend_3685(13032, 1198), 3);
    add_object(create_npcmillabody_3686(13429, 1409), 3);
    add_object(create_enemypounder_3419(13088, 264), 3);
    add_object(create_enemylimiter_350(12981, 274), 3);
    add_object(create_enemylimiter_350(13221, 274), 3);
    add_object(create_objectpetal_302(13665, 185), 3);
    add_object(create_objectpetal_302(13609, 241), 3);
    add_object(create_objectpetal_302(13721, 241), 3);
    add_object(create_objectpetal_302(13665, 297), 3);
    add_object(create_objectpetal_302(13625, 281), 3);
    add_object(create_objectpetal_302(13705, 281), 3);
    add_object(create_objectpetal_302(13625, 201), 3);
    add_object(create_objectpetal_302(13705, 201), 3);
    add_object(create_objectfuel_528(1540, 508), 3);
    add_object(create_objectfuel_528(4260, 492), 3);
    add_object(create_objectfuel_528(5828, 596), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fdcorefloor3_3611(14640, 832), 4);
    add_background_object(create_fdcorefloor3_3611(14704, 832), 4);
    add_background_object(create_fdcorefloor3_3611(14768, 832), 4);
    add_background_object(create_fdcorefloor3_3611(14832, 832), 4);
    add_background_object(create_fdcorefloor1_3615(14768, 800), 4);
    add_background_object(create_fdcorefloor1_3615(14832, 800), 4);
    add_background_object(create_fdcorefloor1_3615(14704, 800), 4);
    add_background_object(create_fdcorefloor1_3615(14640, 800), 4);
    add_background_object(create_fdcorefloor9_3627(14640, 800), 4);
    add_background_object(create_fdcorefloor1_3615(11392, 928), 4);
    add_background_object(create_fdcorefloor1_3615(11328, 928), 4);
    add_background_object(create_fdcorefloor1_3615(11264, 928), 4);
    add_background_object(create_fdcorefloor1_3615(11200, 928), 4);
    add_background_object(create_fdcorefloor9_3627(11424, 928), 4);
    add_background_object(create_fdcorefloor3_3611(11392, 960), 4);
    add_background_object(create_fdcorefloor3_3611(11328, 960), 4);
    add_background_object(create_fdcorefloor3_3611(11264, 960), 4);
    add_background_object(create_fdcorefloor3_3611(11200, 960), 4);
    add_background_object(create_fdcorefloor3_3611(11136, 960), 4);
    add_background_object(create_fdcorefloor1_3615(11136, 928), 4);
    add_background_object(create_fdcorefloor9_3627(11136, 960), 4);
    add_background_object(create_fdcorefloor1_3615(14896, 800), 4);
    add_background_object(create_fdcorefloor3_3611(14896, 832), 4);
    add_background_object(create_fdcorefloor9_3627(14928, 832), 4);
    add_object(create_fdlooplayer02_3641(14672, 928), 4);
    add_object(create_fdlooplayer02_3641(14736, 928), 4);
    add_object(create_gimmickspeedboosterfront_3653(14431, 879), 4);
    add_object(create_gimmickspeedboosterfront_3653(14591, 879), 4);
    add_object(create_gimmickspeedboosterfront_3653(15007, 751), 4);
    add_object(create_gimmickspeedboosterfront_3653(15167, 751), 4);
    add_object(create_lockedlabdoorfront_3544(10600, 800), 4);
    add_object(create_lockeddoorseal_2672(10604, 816), 4);
    add_object(create_gimmickspeedboosterfront_3653(14431, 1071), 4);
    add_object(create_gimmickspeedboosterfront_3653(14591, 1071), 4);
    add_object(create_fdlooplayer02_3641(14800, 608), 4);
    add_object(create_fdlooplayer02_3641(14864, 608), 4);
    add_object(create_fdlooplayer01_3643(14672, 672), 4);
    add_object(create_fdlooplayer03_3639(14800, 864), 4);
    add_object(create_fdlooplayer02_3641(11168, 736), 4);
    add_object(create_fdlooplayer02_3641(11232, 736), 4);
    add_object(create_fdlooplayer02_3641(11296, 1056), 4);
    add_object(create_fdlooplayer02_3641(11360, 1056), 4);
    add_object(create_fdlooplayer04_3647(11296, 800), 4);
    add_object(create_fdlooplayer05_3648(11168, 992), 4);
    add_object(create_gimmickspeedboosterfront_3653(8431, 559), 4);
    add_object(create_gimmickspeedboosterfront_3653(8591, 559), 4);
    add_object(create_gimmickspeedboosterfront_3653(11503, 1199), 4);
    add_object(create_gimmickspeedboosterfront_3653(11663, 1199), 4);
    add_object(create_gimmickspeedboosterfront_3653(12015, 815), 4);
    add_object(create_gimmickspeedboosterfront_3653(12111, 815), 4);
    add_object(create_gimmickspeedboosterfront_3653(11727, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(11823, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(12015, 1007), 4);
    add_object(create_gimmickspeedboosterfront_3653(12111, 1007), 4);
    add_object(create_gimmickspeedboosterfront_3653(9007, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(9167, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(11791, 815), 4);
    add_object(create_gimmickspeedboosterfront_3653(11695, 815), 4);
    add_object(create_gimmickspeedboosterfront_3653(12015, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(12111, 623), 4);
    add_object(create_gimmickspeedboosterfront_3653(12015, 431), 4);
    add_object(create_gimmickspeedboosterfront_3653(12111, 431), 4);
    add_object(create_labdoorfront_3507(12552, 288), 4);
    add_object(create_labdoorfront_3507(12712, 1248), 4);
    add_object(create_labdoorfront_3507(14152, 96), 4);
    add_object(create_labdoorfront_3507(13288, 288), 4);
    add_object(create_labdoorfront_3507(12872, 288), 4);
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
    add_background_object(create_fdcoreloop3_3629(14736, 928), 5);
    add_background_object(create_fdcoreloop3_3629(14736, 608), 5);
    add_background_object(create_fdcoreloop3_3629(11232, 1056), 5);
    add_background_object(create_fdcoreloop3_3629(11232, 736), 5);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(160, 703), 5);
    add_object(create_cameralimitbossleft_421(12672, 1224), 5);
    add_object(create_cameralimitbossright_422(13951, 1224), 5);
    add_object(create_cameralimitbosstop_423(160, 384), 5);
    add_object(create_cameratriggerboss_424(112, 1088), 5);
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
    add_object(create_objecttransporternode90_3428(14800, 992), 5);
    add_object(create_objecttransporternode0_3415(14800, 672), 5);
    add_object(create_objecttransporternode90_3428(11296, 1120), 5);
    add_object(create_objecttransporternode90_3428(11296, 800), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
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
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-152, 70), 6);
    add_object(create_dialogarrow_568(136, 40), 6);
    add_object(create_dialogtext_569(-144, 8), 6);
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_subtitletext_3433(-160, 176), 6);
    add_object(create_subtitledata_3655(-168, 512), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardactclear4_846(-48, 212), 7);
    add_object(create_levelcardactclear2_848(-88, 88), 7);
    add_object(create_levelcardactclear3_849(-72, 88), 7);
    add_object(create_totalcrystals_854(44, 230), 7);
    add_object(create_levelcardbonus1_850(-12, 109), 7);
    add_object(create_levelcardbonus2_851(76, 109), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardactclear1_847(-160, 24), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 7);
    add_object(create_levelcardbonus3_852(-16, -64), 7);
    add_object(create_totalbonus_853(-18, -40), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_cacteon_floor_running = false;
    loop_cacteon_floor_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_gd_running = false;
    loop_gd_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_bdfloor_running = false;
    loop_bdfloor_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
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
    loop_cacteon_running = false;
    loop_cacteon_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
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
    loop_bbls_running = false;
    loop_bbls_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
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
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
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
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_70, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_70, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_70, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_70, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_70, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_70, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_70, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_70, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_70, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_70, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_70, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_70, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_70, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_70, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_70, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_70, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_70, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_70, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_70, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_70, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_70, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_70, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_70, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_70, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_70, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_70, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_70, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_70, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_70, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_70, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_70, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_70, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_70, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_70, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_70, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_70, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_70, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_70, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_70, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_70, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_70, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_70, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_70, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_70, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_70, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_70, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_70, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_70, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_70, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_70, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_70, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_70, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_70, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1745_47 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_2544_70 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_2113_70 = loop_count;
    not_always_449_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_2270_70 = loop_count;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_bulldozer_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1434_69 = loop_count;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_2092_70 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    not_always_1803_67 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1 = false;
    not_always_1965_70 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = true;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_236_13 = loop_count;
    not_always_1531_19 = loop_count;
    once_condition_63_0 = false;
    once_condition_1946_70 = false;
    once_condition_1522_19 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    group_main_engine_level_specific_methods_local_transitions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1945_70 = loop_count;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    once_condition_2317_70 = false;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    not_always_1802_67 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    not_always_1962_70 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_69_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_1961_70 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    not_always_1496_34 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_2206_70 = loop_count;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
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
    not_always_1986_70 = loop_count;
    not_always_1865_66 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
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
    not_always_2114_70 = loop_count;
    not_always_2272_70 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_2108_70 = false;
    not_always_1421_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_milla_finish_1 = false;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_mutant_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    not_always_1039_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_814_13 = loop_count;
    not_always_1510_19 = loop_count;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1047_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 = false;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1744_47 = loop_count;
    not_always_2271_70 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_mutant_milla_boss_animations_1 = true;
    not_always_560_14 = loop_count;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1958_70 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_2207_70 = loop_count;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_15249()
{
    // event 1735_71
    {
        if (!(group_main_engine_1)) goto event_1735_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (5))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1735_71_end;
        FrameObject * single_instance_1735_71_0; single_instance_1735_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyspiderbeamer_3729_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1735_71_0 == NULL)
                    single_instance_1735_71_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1735_71_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1735_71_0))->force_frame(0);
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1735_71_end: ;
}
void Frames::loop_spawndebris_71()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_9095();
    event_func_15249();
}
void Frames::loop_wrapper_sound_hurt1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_71(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_71(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_71(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_71(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
