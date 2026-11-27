#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14215()
{
    // event 1955_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1955_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (80))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1955_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1955_66_end: ;
}
void Frames::event_func_14216()
{
    // event 1956_66
    bool or_result_1956_66 = false;
    bool or_temp_result_1956_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1956_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1956_66_0_end;
        or_result_1956_66 = true;
        or_temp_result_1956_66_0 = true;
    }
    or_event_1956_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_1956_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 1956_66
    bool or_temp_result_1956_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1956_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (270))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1956_66_1_end;
        or_result_1956_66 = true;
        or_temp_result_1956_66_1 = true;
        or_event_1956_66_1_end: ;
        if (or_temp_result_1956_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_1956_66) goto or_final_or_event_1956_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_1956_66_0 || or_temp_result_1956_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_1956_66_1_end: ;
}
void Frames::event_func_14217()
{
    // event 1957_66
    bool or_result_1957_66 = false;
    bool or_temp_result_1957_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1957_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1957_66_0_end;
        or_result_1957_66 = true;
        or_temp_result_1957_66_0 = true;
    }
    or_event_1957_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_1957_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 1957_66
    bool or_temp_result_1957_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1957_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1957_66_1_end;
        or_result_1957_66 = true;
        or_temp_result_1957_66_1 = true;
        or_event_1957_66_1_end: ;
        if (or_temp_result_1957_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_1957_66) goto or_final_or_event_1957_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_1957_66_0 || or_temp_result_1957_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        FrameObject * single_instance_1957_66_0; single_instance_1957_66_0 = NULL;
        // select single: true false false
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode2_3468_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1957_66_0 == NULL)
                    single_instance_1957_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1957_66_0))->set_y(((Active*)get_single(bosssyntaxvalues_3458_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1957_66_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1957_66_0))->alterables->values.set(1, 40);
    }
    or_final_or_event_1957_66_1_end: ;
}
void Frames::event_func_14218()
{
    // event 1958_66
    bool or_result_1958_66 = false;
    bool or_temp_result_1958_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1958_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1958_66_0_end;
        or_result_1958_66 = true;
        or_temp_result_1958_66_0 = true;
    }
    or_event_1958_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_1958_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 1958_66
    bool or_temp_result_1958_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1958_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1958_66_1_end;
        or_result_1958_66 = true;
        or_temp_result_1958_66_1 = true;
        or_event_1958_66_1_end: ;
        if (or_temp_result_1958_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_1958_66) goto or_final_or_event_1958_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_1958_66_0 || or_temp_result_1958_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1958_66_0; single_instance_1958_66_0 = NULL;
        // select single: true false false
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 4, parent->y + 8), parent->layer);
                if (single_instance_1958_66_0 == NULL)
                    single_instance_1958_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1958_66_0))->force_speed(100);
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        media.play_id(SOUND_MORPHER4_387, -1, 1);
        FrameObject * single_instance_1958_66_1; single_instance_1958_66_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1958_66_1 == NULL)
                    single_instance_1958_66_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1958_66_1))->set_y(((Active*)get_single(bosssyntaxvalues_3458_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1958_66_1))->set_direction(16);
        ((Active*)((Active*)single_instance_1958_66_1))->alterables->values.set(1, 40);
    }
    or_final_or_event_1958_66_1_end: ;
}
void Frames::event_func_14219()
{
    // event 1959_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1959_66_end;
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12);
        }
    }
    event_1959_66_end: ;
}
void Frames::event_func_14220()
{
    // event 1960_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1960_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)) >= (1))) goto event_1960_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)) == (0))) goto event_1960_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(16, 1);
    }
    event_1960_66_end: ;
}
void Frames::event_func_14221()
{
    // event 1961_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1961_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)) >= (1))) goto event_1961_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)) != (0))) goto event_1961_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(10, ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)*6);
    }
    event_1961_66_end: ;
}
void Frames::event_func_14222()
{
    // event 1962_66
    bool or_result_1962_66 = false;
    bool or_temp_result_1962_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1962_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (frame_left()+396))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1962_66_0_end;
        or_result_1962_66 = true;
        or_temp_result_1962_66_0 = true;
    }
    or_event_1962_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_1962_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 1962_66
    bool or_temp_result_1962_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1962_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (frame_left()+30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1962_66_1_end;
        or_result_1962_66 = true;
        or_temp_result_1962_66_1 = true;
        or_event_1962_66_1_end: ;
        if (or_temp_result_1962_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_1962_66) goto or_final_or_event_1962_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_1962_66_0 || or_temp_result_1962_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0-((Active*)*it)->alterables->values.get(16));
        }
    }
    or_final_or_event_1962_66_1_end: ;
}
void Frames::event_func_14223()
{
    // event 1963_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1963_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)) < (1))) goto event_1963_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1963_66_end: ;
}
void Frames::event_func_14224()
{
    // event 1964_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1964_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)) >= (1))) goto event_1964_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*19+frame_left()+440)*0.05);
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1964_66_end: ;
}
void Frames::event_func_14225()
{
    // event 1965_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1965_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (40))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1965_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1965_66_end: ;
}
void Frames::event_func_14226()
{
    // event 1966_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1966_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (100))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1966_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1966_66_end: ;
}
void Frames::event_func_14227()
{
    // event 1967_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1967_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1967_66_end;
        FrameObject * single_instance_1967_66_0; single_instance_1967_66_0 = NULL;
        // select single: true false false
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator p_it(bossmorpherorb2_3456_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxelecball_3442(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1967_66_0 == NULL)
                    single_instance_1967_66_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.play_id(SOUND_ZAPPER_60, -1, 1);
    }
    event_1967_66_end: ;
}
void Frames::event_func_14228()
{
    // event 1968_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1968_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1968_66_end;
        FrameObject * single_instance_1968_66_0; single_instance_1968_66_0 = NULL;
        // select single: true false false
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator p_it(bossmorpherorb2_3456_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxelecball_3442(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1968_66_0 == NULL)
                    single_instance_1968_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1968_66_0))->alterables->values.set(2, 1);
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        media.play_id(SOUND_ZAPPER_60, -1, 1);
    }
    event_1968_66_end: ;
}
void Frames::event_func_14229()
{
    // event 1969_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1969_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (120))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1969_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1969_66_end: ;
}
void Frames::event_func_14230()
{
    // event 1970_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1970_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) < (1))) goto event_1970_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1970_66_end: ;
}
void Frames::event_func_14231()
{
    // event 1971_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1971_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1971_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1971_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*19+frame_left()+60)*0.05);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)*9+((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-54)*0.1);
    }
    event_1971_66_end: ;
}
void Frames::event_func_14232()
{
    // event 1972_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1972_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1972_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1972_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*19+frame_left()+396)*0.05);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)*9+((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-54)*0.1);
    }
    event_1972_66_end: ;
}
void Frames::event_func_14233()
{
    // event 1973_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1973_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1973_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1973_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*19+frame_left()+376)*0.05);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)*9+((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-120)*0.1);
    }
    event_1973_66_end: ;
}
void Frames::event_func_14234()
{
    // event 1974_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1974_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1974_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1974_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*19+frame_left()+40)*0.05);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)*9+((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-120)*0.1);
    }
    event_1974_66_end: ;
}
void Frames::event_func_14235()
{
    // event 1975_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1975_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1975_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1975_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+1)%math_helper%4);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        media.play_id(SOUND_MORPHER2_385, -1, 1);
    }
    event_1975_66_end: ;
}
void Frames::event_func_14236()
{
    // event 1976_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1976_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_1976_66_end;
        if (not_always_1976_66 > loop_count) {
            not_always_1976_66 = loop_count + 2;
            goto event_1976_66_end;
        }
        not_always_1976_66 = loop_count + 2;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->strings.set(0, str_5234_230);
    }
    event_1976_66_end: ;
}
void Frames::event_func_14237()
{
    // event 1977_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1977_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_1977_66_end;
        if (not_always_1977_66 > loop_count) {
            not_always_1977_66 = loop_count + 2;
            goto event_1977_66_end;
        }
        not_always_1977_66 = loop_count + 2;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->strings.set(0, str_752_231);
    }
    event_1977_66_end: ;
}
void Frames::event_func_14238()
{
    // event 1978_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1978_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_1978_66_end;
        if (not_always_1978_66 > loop_count) {
            not_always_1978_66 = loop_count + 2;
            goto event_1978_66_end;
        }
        not_always_1978_66 = loop_count + 2;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->strings.set(0, str_62754_232);
    }
    event_1978_66_end: ;
}
void Frames::event_func_14239()
{
    // event 1979_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1979_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(15, 1);
    }
    event_1979_66_end: ;
}
void Frames::event_func_14240()
{
    // event 1980_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1980_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (0))) goto event_1980_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (60))) goto event_1980_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(10, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)*9+frame_left()+80)*0.1);
    }
    event_1980_66_end: ;
}
void Frames::event_func_14241()
{
    // event 1981_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1981_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (0))) goto event_1981_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (90))) goto event_1981_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
    }
    event_1981_66_end: ;
}
void Frames::event_func_14242()
{
    // event 1982_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1982_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (1))) goto event_1982_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(5)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)-0.05, 0));
    }
    event_1982_66_end: ;
}
void Frames::event_func_14243()
{
    // event 1983_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1983_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (1))) goto event_1983_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_1983_66_end;
        if (not_always_1983_66 > loop_count) {
            not_always_1983_66 = loop_count + 2;
            goto event_1983_66_end;
        }
        not_always_1983_66 = loop_count + 2;
        media.play_id(SOUND_MORPHER1_384, -1, 1);
    }
    event_1983_66_end: ;
}
void Frames::event_func_14244()
{
    // event 1984_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1984_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (1))) goto event_1984_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (20))) goto event_1984_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, string_to_number(mid_string(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->strings.get(0), ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(17), 1)));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(17, 1);
    }
    event_1984_66_end: ;
}
void Frames::event_func_14245()
{
    // event 1985_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1985_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (1))) goto event_1985_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(17)) >= (string_size(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->strings.get(0))))) goto event_1985_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(17, 0);
    }
    event_1985_66_end: ;
}
void Frames::event_func_14246()
{
    // event 1986_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1986_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (2))) goto event_1986_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+0.05, 1));
    }
    event_1986_66_end: ;
}
void Frames::event_func_14247()
{
    // event 1987_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1987_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (2))) goto event_1987_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (180))) goto event_1987_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1987_66_end: ;
}
void Frames::event_func_14248()
{
    // event 1988_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1988_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (3))) goto event_1988_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+0.05, 1));
    }
    event_1988_66_end: ;
}
void Frames::event_func_14249()
{
    // event 1989_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1989_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (3))) goto event_1989_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (180))) goto event_1989_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1989_66_end: ;
}
void Frames::event_func_14250()
{
    // event 1990_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1990_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (4))) goto event_1990_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+0.05, 1));
    }
    event_1990_66_end: ;
}
void Frames::event_func_14251()
{
    // event 1991_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1991_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (4))) goto event_1991_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (1))) goto event_1991_66_end;
        if (not_always_1991_66 > loop_count) {
            not_always_1991_66 = loop_count + 2;
            goto event_1991_66_end;
        }
        not_always_1991_66 = loop_count + 2;
        media.play_id(SOUND_MORPHER5_388, -1, 1);
    }
    event_1991_66_end: ;
}
void Frames::event_func_14252()
{
    // event 1992_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1992_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (4))) goto event_1992_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (240))) goto event_1992_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1992_66_end: ;
}
void Frames::event_func_14253()
{
    // event 1993_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1993_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (5))) goto event_1993_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)+0.05, 1));
    }
    event_1993_66_end: ;
}
void Frames::event_func_14254()
{
    // event 1994_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1994_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (5))) goto event_1994_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (200))) goto event_1994_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1994_66_end: ;
}
void Frames::event_func_14255()
{
    // event 1995_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1995_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (6))) goto event_1995_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+0.05, 1));
    }
    event_1995_66_end: ;
}
void Frames::event_func_14256()
{
    // event 1996_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1996_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (6))) goto event_1996_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (380))) goto event_1996_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1996_66_end: ;
}
void Frames::event_func_14257()
{
    // event 1997_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1997_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (7))) goto event_1997_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)+0.025, 1));
    }
    event_1997_66_end: ;
}
void Frames::event_func_14258()
{
    // event 1998_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1998_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) == (7))) goto event_1998_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (285))) goto event_1998_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
    }
    event_1998_66_end: ;
}
void Frames::event_func_14259()
{
    // event 1999_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1999_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_1999_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 50);
            ((Active*)*it)->alterables->values.set(2, 100);
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 1);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(17, 0);
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_1999_66_end: ;
}
void Frames::event_func_14260()
{
    // event 2000_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2000_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (5))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2000_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_single(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
    }
    event_2000_66_end: ;
}
void Frames::event_func_14261()
{
    // event 2001_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2001_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (5))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2001_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2001_66_end: ;
}
void Frames::event_func_14262()
{
    // event 2002_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2002_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2002_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) < (12))) goto event_2002_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(9, 12);
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 999);
        }
            group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        if (!group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1 = true;
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(15, 0);
    }
    event_2002_66_end: ;
}
void Frames::event_func_14263()
{
    // event 2003_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1)) goto event_2003_66_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_2003_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2003_66_end;
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_x_scale(15);
            ((Active*)*it)->set_y_scale(8);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2003_66_end: ;
}
void Frames::event_func_14264()
{
    // event 2004_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1)) goto event_2004_66_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (80))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_2004_66_end;
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.5);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_2004_66_end: ;
}
void Frames::event_func_14265()
{
    // event 2005_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1)) goto event_2005_66_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_2005_66_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)get_single(effectspeedback_2026_instances, it.current_index, default_active_instance))->alterables->values.get(0)*1.5);
        }
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32);
        }
    }
    event_2005_66_end: ;
}
void Frames::event_func_14266()
{
    // event 2006_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1)) goto event_2006_66_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_2006_66_end;
        effectspeedline_2024_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectspeedline_2024(660, 4), 0);
            effectspeedline_2024_instances.add_back();
        }
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+randrange(240));
            ((Active*)*it)->set_x_scale(8);
        }
    }
    event_2006_66_end: ;
}
void Frames::event_func_14267()
{
    // event 2007_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1)) goto event_2007_66_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-50))) { it.deselect(); continue; }
        }
        if (!effectspeedline_2024_instances.has_selection()) goto event_2007_66_end;
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2007_66_end: ;
}
void Frames::event_func_14268()
{
    // event 2008_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2008_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_2008_66_end: ;
}
void Frames::event_func_14269()
{
    // event 2009_66
    bool or_result_2009_66 = false;
    bool or_temp_result_2009_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto or_event_2009_66_0_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto or_event_2009_66_0_end;
        or_result_2009_66 = true;
        or_temp_result_2009_66_0 = true;
    }
    or_event_2009_66_0_end: ;
    bosstrainbream_3441_instances.clear_saved_selection();
    if (or_temp_result_2009_66_0) {
        bosstrainbream_3441_instances.save_selection();
    }
    // event 2009_66
    bool or_temp_result_2009_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto or_event_2009_66_1_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto or_event_2009_66_1_end;
        or_result_2009_66 = true;
        or_temp_result_2009_66_1 = true;
        or_event_2009_66_1_end: ;
        if (or_temp_result_2009_66_1) {
            bosstrainbream_3441_instances.save_selection();
        }
        if (!or_result_2009_66) goto or_final_or_event_2009_66_1_end;
        bosstrainbream_3441_instances.clear_selection();
        if (or_temp_result_2009_66_0 || or_temp_result_2009_66_1) {
            bosstrainbream_3441_instances.restore_selection();
        }
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
        }
    }
    or_final_or_event_2009_66_1_end: ;
}
void Frames::event_func_14270()
{
    // event 2010_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2010_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_x()-112))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2010_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->move_front();
        }
    }
    event_2010_66_end: ;
}
void Frames::event_func_14271()
{
    // event 2011_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2011_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2011_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2011_66_end: ;
}
void Frames::event_func_14272()
{
    // event 2012_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2012_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2012_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_2012_66_end: ;
}
void Frames::event_func_14273()
{
    // event 2013_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2013_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (8))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2013_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2013_66_end: ;
}
void Frames::event_func_14274()
{
    // event 2014_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2014_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2014_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 5);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2014_66_end: ;
}
void Frames::event_func_14275()
{
    // event 2015_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2015_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2015_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
        }
    }
    event_2015_66_end: ;
}
void Frames::event_func_14276()
{
    // event 2016_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2016_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2016_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12);
        }
    }
    event_2016_66_end: ;
}
void Frames::event_func_14277()
{
    // event 2019_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2019_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2019_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
        }
    }
    event_2019_66_end: ;
}
void Frames::event_func_14278()
{
    // event 2021_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2021_66_end;
        bosstrainbream_3441_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        if (!check_overlap(bosstrainbream_3441_instances, bossmorpherhead_3471_instances)) goto event_2021_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2021_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2021_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_2021_66_end: ;
}
void Frames::event_func_14279()
{
    // event 2022_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2022_66_end;
        bosstrainbream_3441_instances.clear_selection();
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (80))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2022_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2022_66_end: ;
}
void Frames::event_func_14280()
{
    // event 2023_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2023_66_end;
        bosstrainbream_3441_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosstrainbream_3441_instances, playercharactersensor_383_instances)) goto event_2023_66_end;
        for (ObjectIterator it(bosstrainbream_3441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (3))) { it.deselect(); continue; }
        }
        if (!bosstrainbream_3441_instances.has_selection()) goto event_2023_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2023_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2023_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_2023_66_end: ;
}
void Frames::event_func_14281()
{
    // event 2024_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2024_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxelecball_3442_instances.has_selection()) goto event_2024_66_end;
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.5);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossmorpherorb2_3456_instances, it.current_index));
            if (parent == NULL) goto pos_end_2024_66_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2024_66_0: ;
        }
    }
    event_2024_66_end: ;
}
void Frames::event_func_14282()
{
    // event 2025_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2025_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxelecball_3442_instances.has_selection()) goto event_2025_66_end;
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.5);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossmorpherorb1_3457_instances, it.current_index));
            if (parent == NULL) goto pos_end_2025_66_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2025_66_0: ;
        }
    }
    event_2025_66_end: ;
}
void Frames::event_func_14283()
{
    // event 2026_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2026_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!bosssyntaxelecball_3442_instances.has_selection()) goto event_2026_66_end;
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4*(((Active*)*it)->alterables->flags.get(1)*2-1));
        }
    }
    event_2026_66_end: ;
}
void Frames::event_func_14284()
{
    // event 2027_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2027_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()+cos_deg(((Active*)*it)->alterables->values.get(1)*5)*60*(((Active*)*it)->alterables->values.get(2)*2-1));
        }
    }
    event_2027_66_end: ;
}
void Frames::event_func_14285()
{
    // event 2028_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2028_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (300))) { it.deselect(); continue; }
        }
        if (!bosssyntaxelecball_3442_instances.has_selection()) goto event_2028_66_end;
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2028_66_end: ;
}
void Frames::event_func_14286()
{
    // event 2029_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2029_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosssyntaxelecball_3442_instances, playercharactersensor_383_instances)) goto event_2029_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2029_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2029_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_2029_66_end: ;
}
void Frames::event_func_14287()
{
    // event 2031_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2031_66_end;
        bosssyntaxelecball_3442_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        if (!check_overlap(bosssyntaxelecball_3442_instances, bossmorpherhead_3471_instances)) goto event_2031_66_end;
        for (ObjectIterator it(bosssyntaxelecball_3442_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxelecball_3442_instances.has_selection()) goto event_2031_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmorpherhead_3471_instances.has_selection()) goto event_2031_66_end;
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_2031_66_end: ;
}
void Frames::event_func_14288()
{
    // event 2032_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2032_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_2032_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) < (12))) goto event_2032_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmorpherorb1_3457_instances, playercharactersensor_383_instances)) goto event_2032_66_end;
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherorb1_3457_instances.has_selection()) goto event_2032_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2032_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2032_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_2032_66_end: ;
}
void Frames::event_func_14289()
{
    // event 2033_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2033_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_2033_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) < (12))) goto event_2033_66_end;
        bossmorpherorb2_3456_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmorpherorb2_3456_instances, playercharactersensor_383_instances)) goto event_2033_66_end;
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmorpherorb2_3456_instances.has_selection()) goto event_2033_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2033_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2033_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_2033_66_end: ;
}
void Frames::event_func_14290()
{
    // event 2034_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2034_66_end;
        if (not_always_2034_66 > loop_count) {
            not_always_2034_66 = loop_count + 2;
            goto event_2034_66_end;
        }
        not_always_2034_66 = loop_count + 2;
            group_pause_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_2034_66_end: ;
}
void Frames::event_func_14291()
{
    // event 2035_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2035_66_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 30);
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+0.05, 1));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)+0.05, 1));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(5)-0.05, 0));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(6, get_min(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)+0.05, 1));
    }
    event_2035_66_end: ;
}
void Frames::event_func_14292()
{
    // event 2036_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2036_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (60))) goto event_2036_66_end;
        effectsexplosion02_411_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(0, 0), 3);
            effectsexplosion02_411_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_2036_66_end: ;
}
void Frames::event_func_14293()
{
    // event 2037_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2037_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (60))) goto event_2037_66_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 3);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(15, 1);
    }
    event_2037_66_end: ;
}
void Frames::event_func_14294()
{
    // event 2038_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2038_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (60))) goto event_2038_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)) < (frame_left()+120))) goto event_2038_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(10, 2);
    }
    event_2038_66_end: ;
}
void Frames::event_func_14295()
{
    // event 2039_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2039_66_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2039_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (60))) goto event_2039_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (180))) goto event_2039_66_end;
        effectsexplosion02_411_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(0, 0), 3);
            effectsexplosion02_411_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+randrange(30));
            ((Active*)*it)->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_2039_66_end: ;
}
void Frames::event_func_14296()
{
    // event 2040_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2040_66_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2040_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (60))) goto event_2040_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (180))) goto event_2040_66_end;
        effectsdebris_319_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(0, 0), 3);
            effectsdebris_319_instances.add_back();
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()-40+randrange(81));
        }
    }
    event_2040_66_end: ;
}
void Frames::event_func_14297()
{
    // event 2041_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2041_66_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2041_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (60))) goto event_2041_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (180))) goto event_2041_66_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 3);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40+randrange(30));
            ((Active*)*it)->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmorpherhead_3471_instances, it.current_index, default_active_instance))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_2041_66_end: ;
}
void Frames::event_func_14298()
{
    // event 2042_66
    bool or_result_2042_66 = false;
    bool or_temp_result_2042_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto or_event_2042_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_2042_66_0_end;
        or_result_2042_66 = true;
        or_temp_result_2042_66_0 = true;
    }
    or_event_2042_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_2042_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 2042_66
    bool or_temp_result_2042_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto or_event_2042_66_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_2042_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_2042_66_1_end;
        or_result_2042_66 = true;
        or_temp_result_2042_66_1 = true;
        or_event_2042_66_1_end: ;
        if (or_temp_result_2042_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_2042_66) goto or_final_or_event_2042_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_2042_66_0 || or_temp_result_2042_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2042_66_0_end;
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
        dynamic_2042_66_0_end: ;
    }
    or_final_or_event_2042_66_1_end: ;
}
void Frames::event_func_14299()
{
    // event 2043_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2043_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (60))) goto event_2043_66_end;
        if (not_always_2043_66 > loop_count) {
            not_always_2043_66 = loop_count + 2;
            goto event_2043_66_end;
        }
        not_always_2043_66 = loop_count + 2;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 640);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.enable(6);
    }
    event_2043_66_end: ;
}
void Frames::event_func_14300()
{
    // event 2044_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2044_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (180))) goto event_2044_66_end;
        if (not_always_2044_66 > loop_count) {
            not_always_2044_66 = loop_count + 2;
            goto event_2044_66_end;
        }
        not_always_2044_66 = loop_count + 2;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 4);
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 4);
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 4);
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 4);
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 3);
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 3);
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 3);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 2);
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 2);
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 2);
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 2);
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 2);
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 1);
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 1);
        }
    }
    event_2044_66_end: ;
}
void Frames::event_func_14301()
{
    // event 2045_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2045_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (180))) goto event_2045_66_end;
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.2);
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.5);
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.2);
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.3);
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.4);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.3);
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.25);
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.35);
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.45);
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.25);
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.23);
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.33);
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.26);
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.19);
        }
    }
    event_2045_66_end: ;
}
void Frames::event_func_14302()
{
    // event 2046_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2046_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (180))) goto event_2046_66_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23)*0.5);
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossmorpherbody_3470_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    event_2046_66_end: ;
}
void Frames::event_func_14303()
{
    // event 2047_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2047_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) >= (180))) goto event_2047_66_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(minibosspushbeamcannon_3474_instances, default_active_instance))->get_x()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_30.has_selection()) goto event_2047_66_end;
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_2047_66_end: ;
}
void Frames::event_func_14304()
{
    // event 2048_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2048_66_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!qualifier_30.has_selection()) goto event_2048_66_end;
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->set_x(((Active*)get_instance(minibosspushbeamcannon_3474_instances, it.current_index, default_active_instance))->get_x()+16+randrange(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+randrange(4));
        }
    }
    event_2048_66_end: ;
}
void Frames::event_func_14305()
{
    // event 2049_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2049_66_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_2049_66_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!qualifier_30.has_selection()) goto event_2049_66_end;
        FrameObject * single_instance_2049_66_0; single_instance_2049_66_0 = pick_random(qualifier_30);
        if (single_instance_2049_66_0 == NULL) goto event_2049_66_end;
        effectsdebris_319_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(0, 0), 3);
            effectsdebris_319_instances.add_back();
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(5, 0, 1, 2, 3, 4));
        }
    }
    event_2049_66_end: ;
}
void Frames::event_func_14306()
{
    // event 2050_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2050_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (300))) goto event_2050_66_end;
        if (not_always_2050_66 > loop_count) {
            not_always_2050_66 = loop_count + 2;
            goto event_2050_66_end;
        }
        not_always_2050_66 = loop_count + 2;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
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
    }
    event_2050_66_end: ;
}
void Frames::event_func_14307()
{
    // event 2051_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2051_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (300))) goto event_2051_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) < (400))) goto event_2051_66_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-10, 0));
        }
    }
    event_2051_66_end: ;
}
void Frames::event_func_14308()
{
    // event 2052_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2052_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (340))) goto event_2052_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2052_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        global_values->set(1, 2);
    }
    event_2052_66_end: ;
}
void Frames::event_func_14309()
{
    // event 2053_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2053_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) == (340))) goto event_2053_66_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_bosses_boss_morpher_speed_lines_1 = false;
    
            group_main_engine_scrolling_floor_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
    }
    event_2053_66_end: ;
}
void Frames::event_func_14310()
{
    // event 2054_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2054_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (400))) goto event_2054_66_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+1, 128));
        }
    }
    event_2054_66_end: ;
}
void Frames::event_func_14311()
{
    // event 2055_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2055_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (400))) goto event_2055_66_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2055_66_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2055_66_end: ;
}
void Frames::event_func_14312()
{
    // event 2056_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_boss_defeated_1)) goto event_2056_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(15)) > (500))) goto event_2056_66_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
    }
    event_2056_66_end: ;
}
void Frames::event_func_14313()
{
    // event 2057_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_2057_66_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_2057_66_end: ;
}
void Frames::event_func_14314()
{
    // event 2058_66
    {
        if (!(group_main_engine_1)) goto event_2058_66_end;
        if (!((global_values->get(4)) < (2))) goto event_2058_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4500))) goto event_2058_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4600))) goto event_2058_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (900))) goto event_2058_66_end;
        global_values->set(4, 2);
        global_values->set(5, 4508);
        global_values->set(6, 1330);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_2058_66_end: ;
}
