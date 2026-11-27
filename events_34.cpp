#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2956()
{
    // event 1350_14
    {
        if (!(group_main_engine_1)) goto event_1350_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (0))) goto event_1350_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(8)) > (0))) goto event_1350_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(8, 0);
    }
    event_1350_14_end: ;
}
void Frames::event_func_2957()
{
    // event 1352_14
    {
        if (!(group_main_engine_1)) goto event_1352_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-get_floor(((Active*)*it)->alterables->values.get(18)));
        }
    }
    event_1352_14_end: ;
}
void Frames::event_func_2958()
{
    // event 1353_14
    {
        if (!(group_main_engine_1)) goto event_1353_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1353_14_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(18, ((Active*)*it)->alterables->values.get(18)*0.2);
        }
    }
    event_1353_14_end: ;
}
void Frames::event_func_2959()
{
    // event 1354_14
    {
        if (!(group_main_engine_1)) goto event_1354_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(6, 0);
    }
    event_1354_14_end: ;
}
void Frames::event_func_2960()
{
    // event 1356_14
    {
        if (!(group_main_engine_1)) goto event_1356_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->set_direction(((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4));
        ((Active*)get_instance(objectjumppad_530_instances))->set_angle(((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1), 0);
    }
    event_1356_14_end: ;
}
void Frames::event_func_2961()
{
    // event 1357_14
    {
        if (!(group_main_engine_1)) goto event_1357_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1357_14_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1357_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1)) == (0))) goto event_1357_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4)) == (1))) goto event_1357_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1357_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1357_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(5)) == (0))) goto event_1357_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(objectjumppad_530_instances))->set_direction(0);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(5, 1);
        FrameObject * single_instance_1357_14_0; single_instance_1357_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objectjumppad_530_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1357_14_0 == NULL)
                    single_instance_1357_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1357_14_0))->set_scale(0.5);
    }
    event_1357_14_end: ;
}
void Frames::event_func_2962()
{
    // event 1358_14
    bool or_result_1358_14 = false;
    bool or_temp_result_1358_14_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1358_14_0_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto or_event_1358_14_0_end;
        or_result_1358_14 = true;
        or_temp_result_1358_14_0 = true;
    }
    or_event_1358_14_0_end: ;
    objectjumppad_530_instances.clear_saved_selection();
    if (or_temp_result_1358_14_0) {
        objectjumppad_530_instances.save_selection();
    }
    // event 1358_14
    bool or_temp_result_1358_14_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1358_14_1_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto or_event_1358_14_1_end;
        or_result_1358_14 = true;
        or_temp_result_1358_14_1 = true;
        or_event_1358_14_1_end: ;
        if (or_temp_result_1358_14_1) {
            objectjumppad_530_instances.save_selection();
        }
        if (!or_result_1358_14) goto or_final_or_event_1358_14_1_end;
        objectjumppad_530_instances.empty_selection();
        if (or_temp_result_1358_14_0 || or_temp_result_1358_14_1) {
            objectjumppad_530_instances.restore_selection();
        }
        FrameObject * single_instance_1358_14_0; single_instance_1358_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectjumppad_530_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1358_14_0 == NULL)
                    single_instance_1358_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1358_14_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1358_14_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1358_14_0))->set_direction(8);
    }
    or_final_or_event_1358_14_1_end: ;
}
void Frames::event_func_2963()
{
    // event 1359_14
    {
        if (!(group_main_engine_1)) goto event_1359_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(5)) > (0))) goto event_1359_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(5)) < (12))) goto event_1359_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.add(5, 1);
    }
    event_1359_14_end: ;
}
void Frames::event_func_2964()
{
    // event 1360_14
    {
        if (!(group_main_engine_1)) goto event_1360_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1360_14_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1360_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1)) == (0))) goto event_1360_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4)) == (1))) goto event_1360_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(3)) == (0))) goto event_1360_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1360_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1360_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1360_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0));
        }
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, -1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1360_14_end: ;
}
void Frames::event_func_2965()
{
    // event 1361_14
    {
        if (!(group_main_engine_1)) goto event_1361_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1361_14_end;
        playersensorrightbig_393_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, objectjumppad_530_instances)) goto event_1361_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1)) != (0))) goto event_1361_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4)) == (1))) goto event_1361_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(3)) == (0))) goto event_1361_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1361_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1361_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1361_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0));
        }
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, -1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1361_14_end: ;
}
void Frames::event_func_2966()
{
    // event 1362_14
    {
        if (!(group_main_engine_1)) goto event_1362_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1362_14_end;
        playersensorleftbig_391_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, objectjumppad_530_instances)) goto event_1362_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(1)) != (0))) goto event_1362_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4)) == (1))) goto event_1362_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(3)) == (0))) goto event_1362_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1362_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1362_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1362_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0));
        }
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, -1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1362_14_end: ;
}
void Frames::event_func_2967()
{
    // event 1363_14
    {
        if (!(group_main_engine_1)) goto event_1363_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(4)) == (-1))) goto event_1363_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1363_14_end;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
    }
    event_1363_14_end: ;
}
void Frames::event_func_2968()
{
    // event 1364_14
    {
        if (!(group_main_engine_1)) goto event_1364_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (0))) goto event_1364_14_end;
        if (not_always_1364_14 > loop_count) {
            not_always_1364_14 = loop_count + 2;
            goto event_1364_14_end;
        }
        not_always_1364_14 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
    }
    event_1364_14_end: ;
}
void Frames::event_func_2969()
{
    // event 1365_14
    {
        if (!(group_main_engine_1)) goto event_1365_14_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (1))) goto event_1365_14_end;
        if (not_always_1365_14 > loop_count) {
            not_always_1365_14 = loop_count + 2;
            goto event_1365_14_end;
        }
        not_always_1365_14 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(3, 1);
    }
    event_1365_14_end: ;
}
void Frames::event_func_2970()
{
    // event 1367_14
    {
        if (!(group_main_engine_1)) goto event_1367_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1))%math_helper%360);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(5))%math_helper%360);
        }
    }
    event_1367_14_end: ;
}
void Frames::event_func_2971()
{
    // event 1368_14
    {
        if (!(group_main_engine_1)) goto event_1368_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1368_14_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)*it)->alterables->values.get(8)+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1368_14_end: ;
}
void Frames::event_func_2972()
{
    // event 1369_14
    {
        if (!(group_main_engine_1)) goto event_1369_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1369_14_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)*it)->alterables->values.get(8)+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1369_14_end: ;
}
void Frames::event_func_2973()
{
    // event 1370_14
    {
        if (!(group_main_engine_1)) goto event_1370_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1370_14_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->alterables->values.get(9)+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1370_14_end: ;
}
void Frames::event_func_2974()
{
    // event 1371_14
    {
        if (!(group_main_engine_1)) goto event_1371_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1371_14_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->alterables->values.get(9)+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1371_14_end: ;
}
void Frames::event_func_2975()
{
    // event 1372_14
    {
        if (!(group_main_engine_1)) goto event_1372_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, get_floor(((Active*)*it)->alterables->values.get(12))-get_floor(((Active*)*it)->alterables->values.get(10)));
            ((Active*)*it)->alterables->values.set(15, get_floor(((Active*)*it)->alterables->values.get(13))-get_floor(((Active*)*it)->alterables->values.get(11)));
        }
    }
    event_1372_14_end: ;
}
void Frames::event_func_2976()
{
    // event 1373_14
    {
        if (!(group_main_engine_1)) goto event_1373_14_end;
        {
            loop_plaftorms_updateposition_running = true;
            int times = int(1);
            loop_plaftorms_updateposition_index = 0;
            while (loop_plaftorms_updateposition_index < times) {
                loop_plaftorms_updateposition_14();
                if (!loop_plaftorms_updateposition_running) break;
                loop_plaftorms_updateposition_index++;
            }
        }
    }
    event_1373_14_end: ;
}
void Frames::event_func_2977()
{
    // event 1375_14
    {
        if (!(group_main_engine_1)) goto event_1375_14_end;
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()+1);
    }
    event_1375_14_end: ;
}
void Frames::event_func_2978()
{
    // event 1376_14
    {
        if (!(group_main_engine_1)) goto event_1376_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1376_14_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_13)) goto event_1376_14_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1376_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(15));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_1376_14_end: ;
}
void Frames::event_func_2979()
{
    // event 1377_14
    {
        if (!(group_main_engine_1)) goto event_1377_14_end;
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()-1);
    }
    event_1377_14_end: ;
}
void Frames::event_func_2980()
{
    // event 1378_14
    {
        if (!(group_main_engine_1)) goto event_1378_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1378_14_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_12, default_active_instance))->get_y()+28+get_floor(((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(18)));
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1378_14_end: ;
}
void Frames::event_func_2981()
{
    // event 1381_14
    {
        if (!(group_main_engine_1)) goto event_1381_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1381_14_end: ;
}
void Frames::event_func_2982()
{
    // event 1382_14
    {
        if (!(group_main_engine_1)) goto event_1382_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1382_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1382_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1382_14_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(get_floor(get_abs(((Active*)get_instance(player_389_instances))->get_x()-((Active*)*it)->get_x())/math_helper/16), 192), 0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(6)*get_max(1-(get_abs(get_floor(((Active*)get_instance(player_389_instances))->get_x()-((Active*)*it)->get_x()-96)/math_helper/96)), 0));
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(4, 180);
            ((Active*)*it)->alterables->values.set(3, 90/math_helper/((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(5, 90/math_helper/(12-((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1382_14_end: ;
}
void Frames::event_func_2983()
{
    // event 1383_14
    {
        if (!(group_main_engine_1)) goto event_1383_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1383_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1383_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1383_14_end;
        {
            loop_gimmik_bridge12_rightside_running = true;
            int times = int(get_max(12-((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->alterables->values.get(0), 0));
            loop_gimmik_bridge12_rightside_index = 0;
            while (loop_gimmik_bridge12_rightside_index < times) {
                loop_gimmik_bridge12_rightside_14();
                if (!loop_gimmik_bridge12_rightside_running) break;
                loop_gimmik_bridge12_rightside_index++;
            }
        }
    }
    event_1383_14_end: ;
}
void Frames::event_func_2984()
{
    // event 1384_14
    {
        if (!(group_main_engine_1)) goto event_1384_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1384_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1384_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1384_14_end;
        {
            loop_gimmik_bridge12_leftside_running = true;
            int times = int(((Active*)get_single(gimmickbridge12logs_353_instances, default_active_instance))->alterables->values.get(0));
            loop_gimmik_bridge12_leftside_index = 0;
            while (loop_gimmik_bridge12_leftside_index < times) {
                loop_gimmik_bridge12_leftside_14();
                if (!loop_gimmik_bridge12_leftside_running) break;
                loop_gimmik_bridge12_leftside_index++;
            }
        }
    }
    event_1384_14_end: ;
}
void Frames::event_func_2985()
{
    // event 1389_14
    {
        if (!(group_main_engine_1)) goto event_1389_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+(((Active*)*it)->alterables->values.get(2)-((Active*)*it)->alterables->values.get(3))*0.2);
        }
    }
    event_1389_14_end: ;
}
void Frames::event_func_2986()
{
    // event 1390_14
    {
        if (!(group_main_engine_1)) goto event_1390_14_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1390_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1390_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1390_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1390_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridgelog_412_instances, gimmickbridge12logs_353_instances)) goto event_1390_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1390_14_end: ;
}
void Frames::event_func_2987()
{
    // event 1391_14
    {
        if (!(group_main_engine_1)) goto event_1391_14_end;
        gimmickbridge12logs_353_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1391_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridge12logs_353_instances, gimmickbridgelog_412_instances)) goto event_1391_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1391_14_end: ;
}
void Frames::event_func_2988()
{
    // event 1392_14
    {
        if (!(group_main_engine_1)) goto event_1392_14_end;
        breakablerockpiece_355_instances.clear_selection();
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1392_14_end: ;
}
void Frames::event_func_2989()
{
    // event 1393_14
    {
        if (!(group_main_engine_1)) goto event_1393_14_end;
        breakablerockpiece_355_instances.clear_selection();
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablerockpiece_355_instances.has_selection()) goto event_1393_14_end;
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1393_14_end: ;
}
void Frames::event_func_2990()
{
    // event 1394_14
    {
        if (!(group_main_engine_1)) goto event_1394_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1394_14_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_12.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_12)) goto event_1394_14_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1394_14_end: ;
}
void Frames::event_func_2991()
{
    // event 1395_14
    {
        if (!(group_main_engine_1)) goto event_1395_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1395_14_end;
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(6, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(7, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(18));
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(18, (9-((Active*)*it)->alterables->values.get(18))*0.2);
        }
    }
    event_1395_14_end: ;
}
void Frames::event_func_2992()
{
    // event 1396_14
    {
        if (!(group_main_engine_1)) goto event_1396_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1396_14_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1396_14_end;
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(6, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(11));
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(7, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(18));
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, get_max(((Active*)*it)->alterables->values.get(18), 8));
        }
    }
    event_1396_14_end: ;
}
void Frames::event_func_2993()
{
    // event 1397_14
    {
        if (!(group_main_engine_1)) goto event_1397_14_end;
        if (!((((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.get(6)) > (0))) goto event_1397_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.get(6)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1397_14_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(18, ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.get(7));
        }
    }
    event_1397_14_end: ;
}
void Frames::event_func_2994()
{
    // event 1398_14
    {
        if (!(group_main_engine_1)) goto event_1398_14_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_floor(((Active*)*it)->alterables->values.get(18)));
        }
    }
    event_1398_14_end: ;
}
void Frames::event_func_2995()
{
    // event 1399_14
    {
        if (!(group_main_engine_1)) goto event_1399_14_end;
        if (!(frame_time >= 0.5)) goto event_1399_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1399_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1399_14_end;
        if (not_always_1399_14 > loop_count) {
            not_always_1399_14 = loop_count + 2;
            goto event_1399_14_end;
        }
        not_always_1399_14 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1399_14_end: ;
}
void Frames::event_func_2996()
{
    // event 1400_14
    {
        if (!(group_main_engine_1)) goto event_1400_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+20))) goto event_1400_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1400_14_end: ;
}
void Frames::event_func_2997()
{
    // event 1401_14
    {
        if (!(group_main_engine_1)) goto event_1401_14_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1401_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1401_14_end: ;
}
void Frames::event_func_2998()
{
    // event 1402_14
    {
        if (!(group_main_engine_1)) goto event_1402_14_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1402_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1402_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1402_14_end: ;
}
void Frames::event_func_2999()
{
    // event 1403_14
    {
        if (!(group_main_engine_1)) goto event_1403_14_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1403_14_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1403_14_end;
        global_values->set(4, 1);
        next_frame = 77 + 0;    
    
    }
    event_1403_14_end: ;
}
void Frames::event_func_3000()
{
    // event 1406_14
    {
        if (!(group_main_engine_1)) goto event_1406_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1406_14_end: ;
}
void Frames::event_func_3001()
{
    // event 1407_14
    {
        if (!(group_main_engine_1)) goto event_1407_14_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, -17, 929, 1779, 1137)) > (0))) goto event_1407_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1407_14_end: ;
}
void Frames::event_func_3002()
{
    // event 1411_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1)) goto event_1411_14_end;
        if (not_always_1411_14 > loop_count) {
            not_always_1411_14 = loop_count + 2;
            goto event_1411_14_end;
        }
        not_always_1411_14 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    
        {
            loop_cutscene_end_running = true;
            int times = int(1);
            loop_cutscene_end_index = 0;
            while (loop_cutscene_end_index < times) {
                loop_cutscene_end_13();
                if (!loop_cutscene_end_running) break;
                loop_cutscene_end_index++;
            }
        }
    }
    event_1411_14_end: ;
}
void Frames::event_func_3003()
{
    // event 1413_14
    {
        if (!(group_main_engine_1)) goto event_1413_14_end;
        if (!((global_values->get(4)) >= (10))) goto event_1413_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
    }
    event_1413_14_end: ;
}
void Frames::event_func_3004()
{
    // event 1414_14
    {
        if (!(group_main_engine_1)) goto event_1414_14_end;
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_1414_14_end;
        ((TextBlitter*)get_instance(locationname_25_instances))->set_text(left_string(((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.get(0), ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)));
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.add(0, 1);
        ((TextBlitter*)get_instance(locationname_25_instances))->set_visible(true);
    }
    event_1414_14_end: ;
}
void Frames::event_func_3005()
{
    // event 1415_14
    {
        if (!(group_main_engine_1)) goto event_1415_14_end;
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_1415_14_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) < (string_size(((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.get(0))))) goto event_1415_14_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)%math_helper%3) == (1))) goto event_1415_14_end;
        media.play_id(SOUND_LOCATION_NAME_406, -1, 1);
    }
    event_1415_14_end: ;
}
void Frames::event_func_3006()
{
    // event 1416_14
    {
        if (!(group_main_engine_1)) goto event_1416_14_end;
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_1416_14_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) > (150))) goto event_1416_14_end;
        {
            ((TextBlitter*)get_instance(locationname_25_instances))->blend_color.set_semi_transparency(((TextBlitter*)get_instance(locationname_25_instances))->blend_color.get_semi_transparency()+1);
        }
    }
    event_1416_14_end: ;
}
void Frames::event_func_3007()
{
    // event 1417_14
    {
        if (!(group_main_engine_1)) goto event_1417_14_end;
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_1417_14_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) > (150+128))) goto event_1417_14_end;
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.disable(0);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.set(0, 0);
        ((TextBlitter*)get_instance(locationname_25_instances))->set_visible(false);
        {
            ((TextBlitter*)get_instance(locationname_25_instances))->blend_color.set_semi_transparency(0);
        }
    }
    event_1417_14_end: ;
}
void Frames::event_func_3008()
{
    // event 1418_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1418_14_end;
        if (!((global_values->get(4)) == (11))) goto event_1418_14_end;
        if (once_condition_1418_14) goto event_1418_14_end;
        once_condition_1418_14 = true;
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1 = true;
        }
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 732);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 600);
    }
    event_1418_14_end: ;
}
void Frames::event_func_3009()
{
    // event 1419_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1419_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1419_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1419_14_end: ;
}
void Frames::event_func_3010()
{
    // event 1420_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1420_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1420_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1420_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_dragon_valley_92+newline_character+str_lilac_s_treehouse_93);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_1420_14_end: ;
}
void Frames::event_func_3011()
{
    // event 1421_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1421_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1421_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) <= (170))) goto event_1421_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 1);
    }
    event_1421_14_end: ;
}
void Frames::event_func_3012()
{
    // event 1422_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1422_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (2))) goto event_1422_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (170))) goto event_1422_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+1000)*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+250)*0.05);
    }
    event_1422_14_end: ;
}
void Frames::event_func_3013()
{
    // event 1423_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1423_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1423_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (260))) goto event_1423_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1423_14_end: ;
}
void Frames::event_func_3014()
{
    // event 1424_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1424_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1424_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (10))) goto event_1424_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1050);
            ((Active*)*it)->set_x(-60);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1050);
            ((Active*)*it)->set_x(-60);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(1050);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(-60);
    }
    event_1424_14_end: ;
}
void Frames::event_func_3015()
{
    // event 1425_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1425_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1425_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (230))) goto event_1425_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) < (180))) goto event_1425_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(30);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
    }
    event_1425_14_end: ;
}
void Frames::event_func_3016()
{
    // event 1426_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1426_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1426_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (230))) goto event_1426_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (180))) goto event_1426_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
    }
    event_1426_14_end: ;
}
void Frames::event_func_3017()
{
    // event 1427_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1427_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1427_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1427_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (240))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1427_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
            ((Active*)*it)->alterables->values.set(22, 8);
        }
    }
    event_1427_14_end: ;
}
void Frames::event_func_3018()
{
    // event 1428_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1428_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1428_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1428_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (240))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1428_14_end;
        if (once_condition_1428_14) goto event_1428_14_end;
        once_condition_1428_14 = true;
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    event_1428_14_end: ;
}
void Frames::event_func_3019()
{
    // event 1429_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1429_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1429_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1429_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1429_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(22));
            ((Active*)*it)->alterables->values.set(22, get_max(((Active*)*it)->alterables->values.get(22)-0.5, 0));
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1429_14_end: ;
}
void Frames::event_func_3020()
{
    // event 1430_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1430_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1430_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (240))) goto event_1430_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1430_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1430_14_end: ;
}
void Frames::event_func_3021()
{
    // event 1431_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1431_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1431_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (210))) goto event_1431_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (250))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1431_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1431_14_end: ;
}
void Frames::event_func_3022()
{
    // event 1432_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1432_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1432_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (210))) goto event_1432_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (250))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1432_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1432_14_end: ;
}
void Frames::event_func_3023()
{
    // event 1433_14
    bool or_result_1433_14 = false;
    bool or_temp_result_1433_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto or_event_1433_14_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1433_14_0_end;
        or_result_1433_14 = true;
        or_temp_result_1433_14_0 = true;
    }
    or_event_1433_14_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1433_14_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1433_14
    bool or_temp_result_1433_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto or_event_1433_14_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1433_14_1_end;
        or_result_1433_14 = true;
        or_temp_result_1433_14_1 = true;
    }
    or_event_1433_14_1_end: ;
    if (or_temp_result_1433_14_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1433_14
    bool or_temp_result_1433_14_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto or_event_1433_14_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1433_14_2_end;
        or_result_1433_14 = true;
        or_temp_result_1433_14_2 = true;
        or_event_1433_14_2_end: ;
        if (or_temp_result_1433_14_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1433_14) goto or_final_or_event_1433_14_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1433_14_0 || or_temp_result_1433_14_1 || or_temp_result_1433_14_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1433_14_2_end: ;
}
void Frames::event_func_3024()
{
    // event 1434_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1434_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1434_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (0))) goto event_1434_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (13))) goto event_1434_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1434_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1434_14_end: ;
}
void Frames::event_func_3025()
{
    // event 1435_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1435_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1435_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (2))) goto event_1435_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1435_14_end: ;
}
void Frames::event_func_3026()
{
    // event 1436_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1436_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1436_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1436_14_end;
        if (!((media.get_channel_position(-1 +20)) > (1400))) goto event_1436_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 27);
    }
    event_1436_14_end: ;
}
void Frames::event_func_3027()
{
    // event 1437_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1437_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (3))) goto event_1437_14_end;
        if (not_always_1437_14 > loop_count) {
            not_always_1437_14 = loop_count + 2;
            goto event_1437_14_end;
        }
        not_always_1437_14 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1437_14_end: ;
}
void Frames::event_func_3028()
{
    // event 1438_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1438_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1438_14_end;
        if (not_always_1438_14 > loop_count) {
            not_always_1438_14 = loop_count + 2;
            goto event_1438_14_end;
        }
        not_always_1438_14 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1438_14_end: ;
}
void Frames::event_func_3029()
{
    // event 1439_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1439_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1439_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_1439_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1439_14_end;
        if (!((((Active*)get_instance(objectcatface_534_instances))->alterables->values.get(0)) == (0))) goto event_1439_14_end;
        if (!((media.get_channel_position(-1 +20)) < (100))) goto event_1439_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 20);
        ((Active*)get_instance(objectcatface_534_instances))->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
    }
    event_1439_14_end: ;
}
void Frames::event_func_3030()
{
    // event 1440_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1440_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1440_14_end;
        if (!((media.get_channel_position(-1 +20)) > (2253))) goto event_1440_14_end;
        if (!((media.get_channel_position(-1 +20)) < (2500))) goto event_1440_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1440_14_end: ;
}
void Frames::event_func_3031()
{
    // event 1441_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1441_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1441_14_end;
        if (!((media.get_channel_position(-1 +20)) > (2837))) goto event_1441_14_end;
        if (!((media.get_channel_position(-1 +20)) < (3226))) goto event_1441_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(21);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1441_14_end: ;
}
void Frames::event_func_3032()
{
    // event 1442_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1442_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1442_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3000))) goto event_1442_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(11);
    }
    event_1442_14_end: ;
}
void Frames::event_func_3033()
{
    // event 1443_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1443_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1443_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3226))) goto event_1443_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
            ((Active*)*it)->force_speed(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1443_14_end: ;
}
void Frames::event_func_3034()
{
    // event 1444_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1444_14_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1444_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1444_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1444_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1444_14_end: ;
}
void Frames::event_func_3035()
{
    // event 1445_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1445_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1445_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1445_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1445_14_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 6);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)get_instance(objectcatface_534_instances))->alterables->values.get(0));
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
    }
    event_1445_14_end: ;
}
void Frames::event_func_3036()
{
    // event 1446_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1446_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1446_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1446_14_end;
        if (!((media.get_channel_position(-1 +20)) > (3260))) goto event_1446_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 33);
    }
    event_1446_14_end: ;
}
void Frames::event_func_3037()
{
    // event 1447_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1447_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1447_14_end;
        if (not_always_1447_14 > loop_count) {
            not_always_1447_14 = loop_count + 2;
            goto event_1447_14_end;
        }
        not_always_1447_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1447_14_end: ;
}
void Frames::event_func_3038()
{
    // event 1448_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1448_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1448_14_end;
        if (not_always_1448_14 > loop_count) {
            not_always_1448_14 = loop_count + 2;
            goto event_1448_14_end;
        }
        not_always_1448_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1448_14_end: ;
}
void Frames::event_func_3039()
{
    // event 1449_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1449_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1449_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1449_14_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1449_14_end;
        if (!((media.get_channel_position(-1 +20)) < (1600))) goto event_1449_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(9);
    }
    event_1449_14_end: ;
}
void Frames::event_func_3040()
{
    // event 1450_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1450_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1450_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1450_14_end;
        if (!((media.get_channel_position(-1 +20)) >= (1600))) goto event_1450_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_1450_14_end: ;
}
void Frames::event_func_3041()
{
    // event 1451_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1451_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) < (3))) goto event_1451_14_end;
        if (!((global_values->get(27)) == (0))) goto event_1451_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1451_14_end;
        if (!((media.get_channel_position(-1 +20)) > (600))) goto event_1451_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1451_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 30);
    }
    event_1451_14_end: ;
}
void Frames::event_func_3042()
{
    // event 1452_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1452_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) < (3))) goto event_1452_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1452_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1452_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x()+50);
        }
    }
    event_1452_14_end: ;
}
void Frames::event_func_3043()
{
    // event 1453_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1453_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1453_14_end;
        if (not_always_1453_14 > loop_count) {
            not_always_1453_14 = loop_count + 2;
            goto event_1453_14_end;
        }
        not_always_1453_14 = loop_count + 2;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_1453_14_end: ;
}
void Frames::event_func_3044()
{
    // event 1454_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1454_14_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1454_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1454_14_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1454_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 3);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x()+50);
            ((Active*)*it)->force_frame(30);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1454_14_end: ;
}
void Frames::event_func_3045()
{
    // event 1455_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1455_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1455_14_end;
        if (!((global_values->get(1)) == (0))) goto event_1455_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1455_14_end: ;
}
void Frames::event_func_3046()
{
    // event 1456_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1456_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1456_14_end;
        if (!((global_values->get(1)) == (0))) goto event_1456_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+170))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1456_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1456_14_end: ;
}
void Frames::event_func_3047()
{
    // event 1457_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1457_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1457_14_end;
        if (!((global_values->get(1)) != (0))) goto event_1457_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1457_14_end: ;
}
void Frames::event_func_3048()
{
    // event 1458_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1458_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (3))) goto event_1458_14_end;
        if (!((global_values->get(1)) != (0))) goto event_1458_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x()+240))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1458_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_y());
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1458_14_end: ;
}
void Frames::event_func_3049()
{
    // event 1459_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1459_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1459_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-3);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_1459_14_end: ;
}
void Frames::event_func_3050()
{
    // event 1460_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_rescue_torque_1)) goto event_1460_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (4))) goto event_1460_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1460_14_end;
        next_frame = 77 + 0;    
    
        global_values->set(4, 1);
    }
    event_1460_14_end: ;
}
void Frames::event_func_3051()
{
    // event 1461_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1461_14_end;
        if (!((global_values->get(4)) == (12))) goto event_1461_14_end;
        if (once_condition_1461_14) goto event_1461_14_end;
        once_condition_1461_14 = true;
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1 = true;
        }
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(objecttent_480_instances))->set_visible(true);
        ((Active*)get_instance(objecttent2_481_instances))->set_visible(true);
        ((Active*)get_instance(objecttententrance_551_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 712);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1600-global_values->get(17)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1500);
        ((Active*)get_instance(npccouchmilla_554_instances))->set_direction(1);
        ((Active*)get_instance(npccouchcarol_555_instances))->force_animation(8);
            group_main_engine_level_specific_methods_camera_boundaries_1 = false;
    
        ((Active*)get_instance(npccouchcarol_555_instances))->set_visible(true);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1461_14_end: ;
}
void Frames::event_func_3052()
{
    // event 1462_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1462_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1462_14_end;
        if (!((global_values->get(1)) != (0))) goto event_1462_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 4);
    }
    event_1462_14_end: ;
}
void Frames::event_func_3053()
{
    // event 1463_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1463_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1463_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1463_14_end: ;
}
void Frames::event_func_3054()
{
    // event 1464_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1464_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1464_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1464_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1464_14_end: ;
}
void Frames::event_func_3055()
{
    // event 1465_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_good_morning_1)) goto event_1465_14_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (1))) goto event_1465_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1465_14_end: ;
}
