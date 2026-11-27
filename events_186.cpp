#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14496()
{
    // event 1512_68
    {
        if (!(group_main_engine_1)) goto event_1512_68_end;
        playersensorbottombig_397_instances.clear_selection();
        switchbiglift2_3576_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchbiglift2_3576_instances)) goto event_1512_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1512_68_end;
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1512_68_end: ;
}
void Frames::event_func_14497()
{
    // event 1513_68
    {
        if (!(group_main_engine_1)) goto event_1513_68_end;
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!switchbiglift1_3575_instances.has_selection()) goto event_1513_68_end;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1513_68_end: ;
}
void Frames::event_func_14498()
{
    // event 1514_68
    {
        if (!(group_main_engine_1)) goto event_1514_68_end;
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbiglift1_3575_instances.has_selection()) goto event_1514_68_end;
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1514_68_end: ;
}
void Frames::event_func_14499()
{
    // event 1515_68
    {
        if (!(group_main_engine_1)) goto event_1515_68_end;
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!switchbiglift2_3576_instances.has_selection()) goto event_1515_68_end;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1515_68_end: ;
}
void Frames::event_func_14500()
{
    // event 1516_68
    {
        if (!(group_main_engine_1)) goto event_1516_68_end;
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbiglift2_3576_instances.has_selection()) goto event_1516_68_end;
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1516_68_end: ;
}
void Frames::event_func_14501()
{
    // event 1517_68
    {
        if (!(group_main_engine_1)) goto event_1517_68_end;
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchbiglift1_3575_instances.has_selection()) goto event_1517_68_end;
        {
            objectbiglift_3574_instances.clear_selection();
            SavedSelection extra_objectbiglift_3574_instances(objectbiglift_3574_instances);
            for (SavedIterator it(extra_objectbiglift_3574_instances); !it.end(); ++it) {
                foreach_instance_lift = ((Active*)*it);
                foreach_lift_68();
            }
        }
    }
    event_1517_68_end: ;
}
void Frames::event_func_14502()
{
    // event 1518_68
    {
        if (!(group_main_engine_1)) goto event_1518_68_end;
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchbiglift2_3576_instances.has_selection()) goto event_1518_68_end;
        {
            objectbiglift_3574_instances.clear_selection();
            SavedSelection extra_objectbiglift_3574_instances(objectbiglift_3574_instances);
            for (SavedIterator it(extra_objectbiglift_3574_instances); !it.end(); ++it) {
                foreach_instance_lift = ((Active*)*it);
                foreach_lift_68();
            }
        }
    }
    event_1518_68_end: ;
}
void Frames::event_func_14503()
{
    // event 1521_68
    {
        if (!(group_main_engine_1)) goto event_1521_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-128))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+128))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+150))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1521_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-4, -60));
    }
    event_1521_68_end: ;
}
void Frames::event_func_14504()
{
    // event 1522_68
    {
        if (!(group_main_engine_1)) goto event_1522_68_end;
        objectbiglift_3574_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        if (!check_overlap(objectbiglift_3574_instances, fdplatform_3542_instances)) goto event_1522_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9), ((Active*)get_single(fdplatform_3542_instances, it.current_index, default_active_instance))->get_y()));
        }
    }
    event_1522_68_end: ;
}
void Frames::event_func_14505()
{
    // event 1523_68
    {
        if (!(group_main_engine_1)) goto event_1523_68_end;
        objectbiglift_3574_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        if (!check_overlap(objectbiglift_3574_instances, fdplatform_3542_instances)) goto event_1523_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_single(fdplatform_3542_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1523_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1523_68_end: ;
}
void Frames::event_func_14506()
{
    // event 1524_68
    {
        if (!(group_main_engine_1)) goto event_1524_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1524_68_end;
        if (!check_not_overlap(objectbiglift_3574_instances, fdplatform_3542_instances)) goto event_1524_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1524_68_end: ;
}
void Frames::event_func_14507()
{
    // event 1525_68
    {
        if (!(group_main_engine_1)) goto event_1525_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (((Active*)*it)->alterables->values.get(18)))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1525_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, get_min(((Active*)*it)->alterables->values.get(16)+0.05, 4));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1525_68_end: ;
}
void Frames::event_func_14508()
{
    // event 1526_68
    {
        if (!(group_main_engine_1)) goto event_1526_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)*it)->alterables->values.get(18)))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1526_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1526_68_end: ;
}
void Frames::event_func_14509()
{
    // event 1527_68
    {
        if (!(group_main_engine_1)) goto event_1527_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)*it)->alterables->values.get(18)))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1527_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1527_68_end: ;
}
void Frames::event_func_14510()
{
    // event 1528_68
    {
        if (!(group_main_engine_1)) goto event_1528_68_end;
        if (!(!media.is_sample_playing(SOUND_COMMON_LIFT_264))) goto event_1528_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) < (0))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1528_68_end;
        if (!check_not_overlap(objectbiglift_3574_instances, fdplatform_3542_instances)) goto event_1528_68_end;
        media.play_id(SOUND_COMMON_LIFT_264, -1, 0);
    }
    event_1528_68_end: ;
}
void Frames::event_func_14511()
{
    // event 1529_68
    {
        if (!(group_main_engine_1)) goto event_1529_68_end;
        if (!media.is_sample_playing(SOUND_COMMON_LIFT_264)) goto event_1529_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1529_68_end;
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1529_68_end: ;
}
void Frames::event_func_14512()
{
    // event 1628_68
    {
        if (!(group_main_engine_1)) goto event_1628_68_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1628_68_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1628_68_0; single_instance_1628_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1628_68_0 == NULL)
                    single_instance_1628_68_0 = new_obj;
            }
        }
        FrameObject * single_instance_1628_68_1; single_instance_1628_68_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1628_68_1 == NULL)
                    single_instance_1628_68_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1628_68_end: ;
}
void Frames::event_func_14513()
{
    // event 1673_68
    bool or_result_1673_68 = false;
    bool or_temp_result_1673_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1673_68_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1673_68_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1673_68_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1673_68_0_end;
        or_result_1673_68 = true;
        or_temp_result_1673_68_0 = true;
    }
    or_event_1673_68_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1673_68_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1673_68
    bool or_temp_result_1673_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1673_68_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1673_68_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1673_68_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1673_68_1_end;
        or_result_1673_68 = true;
        or_temp_result_1673_68_1 = true;
    }
    or_event_1673_68_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1673_68_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1673_68
    bool or_temp_result_1673_68_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1673_68_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1673_68_2_end;
        or_result_1673_68 = true;
        or_temp_result_1673_68_2 = true;
        or_event_1673_68_2_end: ;
        if (or_temp_result_1673_68_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1673_68) goto or_final_or_event_1673_68_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1673_68_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1673_68_0 || or_temp_result_1673_68_1 || or_temp_result_1673_68_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1673_68_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1673_68_0; single_instance_1673_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1673_68_0 == NULL)
                    single_instance_1673_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1673_68_0))->set_direction(2);
        FrameObject * single_instance_1673_68_1; single_instance_1673_68_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1673_68_1 == NULL)
                    single_instance_1673_68_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1673_68_2_end: ;
}
void Frames::event_func_14514()
{
    // event 1736_68
    bool or_result_1736_68 = false;
    bool or_temp_result_1736_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1736_68_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1736_68_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1736_68_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1736_68_0_end;
        or_result_1736_68 = true;
        or_temp_result_1736_68_0 = true;
    }
    or_event_1736_68_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1736_68_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1736_68
    bool or_temp_result_1736_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1736_68_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1736_68_1_end;
        or_result_1736_68 = true;
        or_temp_result_1736_68_1 = true;
        or_event_1736_68_1_end: ;
        if (or_temp_result_1736_68_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1736_68) goto or_final_or_event_1736_68_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1736_68_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1736_68_0 || or_temp_result_1736_68_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1736_68_0; single_instance_1736_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1736_68_0 == NULL)
                    single_instance_1736_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1736_68_0))->set_direction(2);
        FrameObject * single_instance_1736_68_1; single_instance_1736_68_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1736_68_1 == NULL)
                    single_instance_1736_68_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1736_68_1_end: ;
}
void Frames::event_func_14515()
{
    // event 1759_68
    bool or_result_1759_68 = false;
    bool or_temp_result_1759_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1759_68_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1759_68_0_end;
        or_result_1759_68 = true;
        or_temp_result_1759_68_0 = true;
    }
    or_event_1759_68_0_end: ;
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1759_68_0) {
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1759_68
    bool or_temp_result_1759_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1759_68_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1759_68_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, qualifier_7)) goto or_event_1759_68_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1759_68_1_end;
        or_result_1759_68 = true;
        or_temp_result_1759_68_1 = true;
    }
    or_event_1759_68_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1759_68_1) {
        enemyhoppermkii_2200_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1759_68
    bool or_temp_result_1759_68_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1759_68_2_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1759_68_2_end;
        or_result_1759_68 = true;
        or_temp_result_1759_68_2 = true;
        or_event_1759_68_2_end: ;
        if (or_temp_result_1759_68_2) {
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1759_68) goto or_final_or_event_1759_68_2_end;
        enemyhoppermkii_2200_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1759_68_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1759_68_0 || or_temp_result_1759_68_1 || or_temp_result_1759_68_2) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        FrameObject * single_instance_1759_68_0; single_instance_1759_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1759_68_0 == NULL)
                    single_instance_1759_68_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->values.set(24, -4);
            ((Active*)*it)->alterables->values.add(21, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(6, 6);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1759_68_2_end: ;
}
void Frames::event_func_14516()
{
    // event 1776_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1776_68_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (140))) goto event_1776_68_end;
        if (!((((Active*)get_instance(sign_351_instances))->get_frame()) == (0))) goto event_1776_68_end;
        ((Active*)get_instance(sign_351_instances))->force_animation(12);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1776_68_end: ;
}
void Frames::event_func_14517()
{
    // event 1777_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1777_68_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1777_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1777_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1777_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 48);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
    }
    event_1777_68_end: ;
}
void Frames::event_func_14518()
{
    // event 1779_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1779_68_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (180))) goto event_1779_68_end;
        if (not_always_1779_68 > loop_count) {
            not_always_1779_68 = loop_count + 2;
            goto event_1779_68_end;
        }
        not_always_1779_68 = loop_count + 2;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1779_68_end: ;
}
void Frames::event_func_14519()
{
    // event 1780_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1780_68_end;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!levelcardactclear1_847_instances.has_selection()) goto event_1780_68_end;
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1780_68_end: ;
}
void Frames::event_func_14520()
{
    // event 1781_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1781_68_end;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (21))) { it.deselect(); continue; }
        }
        if (!levelcardactclear1_847_instances.has_selection()) goto event_1781_68_end;
        FrameObject * single_instance_1781_68_0; single_instance_1781_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelcardactclear1_847_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 80, parent->y + 8), parent->layer);
                if (single_instance_1781_68_0 == NULL)
                    single_instance_1781_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1781_68_0))->set_x(((Active*)single_instance_1781_68_0)->get_x()+randrange(160));
        ((Active*)((Active*)single_instance_1781_68_0))->set_y(((Active*)single_instance_1781_68_0)->get_y()+randrange(32));
    }
    event_1781_68_end: ;
}
void Frames::event_func_14521()
{
    // event 1782_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1782_68_end;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(8))) { it.deselect(); continue; }
        }
        if (!levelcardactclear1_847_instances.has_selection()) goto event_1782_68_end;
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1782_68_end: ;
}
void Frames::event_func_14522()
{
    // event 1783_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1783_68_end;
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!levelcardactclear1_847_instances.has_selection()) goto event_1783_68_end;
        if (not_always_1783_68 > loop_count) {
            not_always_1783_68 = loop_count + 2;
            goto event_1783_68_end;
        }
        not_always_1783_68 = loop_count + 2;
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(true);
        ((Active*)get_instance(levelcardactclear3_849_instances))->force_animation(7);
        ((Active*)get_instance(levelcardactclear3_849_instances))->force_frame(0);
        ((Active*)get_instance(levelcardactclear3_849_instances))->restore_frame();
    }
    event_1783_68_end: ;
}
void Frames::event_func_14523()
{
    // event 1801_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1801_68_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1801_68_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        levelcardactclear1_847_instances.clear_selection();
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        for (ObjectIterator it(levelcardactclear1_847_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1801_68_end: ;
}
void Frames::event_func_14524()
{
    // event 1817_68
    {
        if (!(group_main_engine_1)) goto event_1817_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (0))) goto event_1817_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
    }
    event_1817_68_end: ;
}
void Frames::event_func_14525()
{
    // event 1818_68
    {
        if (!(group_main_engine_1)) goto event_1818_68_end;
        if (!((global_values->get(3)%math_helper%60) == (6))) goto event_1818_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1818_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1818_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(9, 1);
    }
    event_1818_68_end: ;
}
void Frames::event_func_14526()
{
    // event 1825_68
    {
        if (!(group_main_engine_1)) goto event_1825_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) == (32))) goto event_1825_68_end;
        if (not_always_1825_68 > loop_count) {
            not_always_1825_68 = loop_count + 2;
            goto event_1825_68_end;
        }
        not_always_1825_68 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        {
            loop_check_death_running = true;
            int times = int(1);
            loop_check_death_index = 0;
            while (loop_check_death_index < times) {
                loop_check_death_13();
                if (!loop_check_death_running) break;
                loop_check_death_index++;
            }
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1825_68_end: ;
}
void Frames::event_func_14527()
{
    // event 1827_68
    {
        if (!(group_main_engine_1)) goto event_1827_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1827_68_end;
        playercharactersensor_383_instances.clear_selection();
        bubblepatch_806_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bubblepatch_806_instances)) goto event_1827_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) > (0))) goto event_1827_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(9, 1);
    }
    event_1827_68_end: ;
}
void Frames::event_func_14528()
{
    // event 1830_68
    {
        if (!(group_main_engine_1)) goto event_1830_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1830_68_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1830_68_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(2)) < (16))) goto event_1830_68_end;
        ((Counter*)get_instance(guiair_759_instances))->set_x(((Counter*)get_instance(guiair_759_instances))->get_x()+2);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(2, 1);
    }
    event_1830_68_end: ;
}
void Frames::event_func_14529()
{
    // event 1831_68
    bool or_result_1831_68 = false;
    bool or_temp_result_1831_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1831_68_0_end;
        objectsiren_3337_instances.clear_selection();
        for (ObjectIterator it(objectsiren_3337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
        }
        if (!objectsiren_3337_instances.has_selection()) goto or_event_1831_68_0_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1831_68_0_end;
        or_result_1831_68 = true;
        or_temp_result_1831_68_0 = true;
    }
    or_event_1831_68_0_end: ;
    objectsiren_3337_instances.clear_saved_selection();
    guiicon_452_instances.clear_saved_selection();
    if (or_temp_result_1831_68_0) {
        objectsiren_3337_instances.save_selection();
        guiicon_452_instances.save_selection();
    }
    // event 1831_68
    bool or_temp_result_1831_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1831_68_1_end;
        guiicon_452_instances.clear_selection();
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!guiicon_452_instances.has_selection()) goto or_event_1831_68_1_end;
        or_result_1831_68 = true;
        or_temp_result_1831_68_1 = true;
        or_event_1831_68_1_end: ;
        if (or_temp_result_1831_68_1) {
            guiicon_452_instances.save_selection();
        }
        if (!or_result_1831_68) goto or_final_or_event_1831_68_1_end;
        objectsiren_3337_instances.empty_selection();
        guiicon_452_instances.empty_selection();
        if (or_temp_result_1831_68_0) {
            objectsiren_3337_instances.restore_selection();
        }
        if (or_temp_result_1831_68_0 || or_temp_result_1831_68_1) {
            guiicon_452_instances.restore_selection();
        }
        for (ObjectIterator it(guiicon_452_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
        guiair_759_instances.clear_selection();
        for (ObjectIterator it(guiair_759_instances); !it.end(); ++it) {
            ((Counter*)*it)->set_x(((Counter*)*it)->get_x()-2);
        }
    }
    or_final_or_event_1831_68_1_end: ;
}
void Frames::event_func_14530()
{
    // event 1832_68
    {
        if (!(group_main_engine_1)) goto event_1832_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (20))) goto event_1832_68_end;
        ((Counter*)get_instance(guiair_759_instances))->set(get_max(12-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)*0.5, 1));
    }
    event_1832_68_end: ;
}
void Frames::event_func_14531()
{
    // event 1856_68
    {
        if (!(group_main_engine_1)) goto event_1856_68_end;
        {
            {
                foreach_instance_door = ((Active*)get_instance(lockeddoorterminal_2606_instances));
                foreach_door_68();
            }
        }
    }
    event_1856_68_end: ;
}
void Frames::event_func_14532()
{
    // event 1865_68
    {
        if (!(group_main_engine_1)) goto event_1865_68_end;
        if (!((((Active*)get_instance(lockedlabdoorbarrier_3541_instances))->alterables->values.get(0)) > (1))) goto event_1865_68_end;
        ((Active*)get_instance(lockedlabdoorbarrier_3541_instances))->alterables->flags.enable(0);
    }
    event_1865_68_end: ;
}
void Frames::event_func_14533()
{
    // event 1866_68
    {
        if (!(group_main_engine_1)) goto event_1866_68_end;
        if (!((((Active*)get_instance(lockedlabdoorback_3506_instances))->alterables->values.get(0)) > (1))) goto event_1866_68_end;
        ((Active*)get_instance(lockedlabdoorback_3506_instances))->force_speed(25);
    }
    event_1866_68_end: ;
}
void Frames::event_func_14534()
{
    // event 1867_68
    {
        if (!(group_main_engine_1)) goto event_1867_68_end;
        if (!((((Active*)get_instance(lockedlabdoorfront_3544_instances))->alterables->values.get(0)) > (1))) goto event_1867_68_end;
        ((Active*)get_instance(lockedlabdoorfront_3544_instances))->force_speed(25);
    }
    event_1867_68_end: ;
}
void Frames::event_func_14535()
{
    // event 1871_68
    {
        if (!(group_main_engine_1)) goto event_1871_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) < (2))) goto event_1871_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_1871_68_end: ;
}
void Frames::event_func_14536()
{
    // event 1872_68
    {
        if (!(group_main_engine_1)) goto event_1872_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (0))) goto event_1872_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (5340))) goto event_1872_68_end;
        if (!((global_values->get(4)) < (2))) goto event_1872_68_end;
        if (!((global_values->get(1)) != (4))) goto event_1872_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(0, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_06_ogg_235, 29-1);
        media.lock(29-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1872_68_end: ;
}
void Frames::event_func_14537()
{
    // event 1873_68
    {
        if (!(group_main_engine_1)) goto event_1873_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1873_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(1, 1);
    }
    event_1873_68_end: ;
}
void Frames::event_func_14538()
{
    // event 1874_68
    {
        if (!(group_main_engine_1)) goto event_1874_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1874_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (210))) goto event_1874_68_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(1));
    }
    event_1874_68_end: ;
}
void Frames::event_func_14539()
{
    // event 1875_68
    {
        if (!(group_main_engine_1)) goto event_1875_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1875_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (270))) goto event_1875_68_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(2));
    }
    event_1875_68_end: ;
}
void Frames::event_func_14540()
{
    // event 1876_68
    {
        if (!(group_main_engine_1)) goto event_1876_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1876_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (340))) goto event_1876_68_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(3));
    }
    event_1876_68_end: ;
}
void Frames::event_func_14541()
{
    // event 1877_68
    bool or_result_1877_68 = false;
    bool or_temp_result_1877_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1877_68_0_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto or_event_1877_68_0_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) > (400))) goto or_event_1877_68_0_end;
        or_result_1877_68 = true;
        or_temp_result_1877_68_0 = true;
    }
    or_event_1877_68_0_end: ;
    // event 1877_68
    bool or_temp_result_1877_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1877_68_1_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) < (2))) goto or_event_1877_68_1_end;
        if (!((global_values->get(4)) >= (2))) goto or_event_1877_68_1_end;
        if (!((global_values->get(4)) < (4))) goto or_event_1877_68_1_end;
        if (!((global_values->get(1)) != (4))) goto or_event_1877_68_1_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto or_event_1877_68_1_end;
        or_result_1877_68 = true;
        or_temp_result_1877_68_1 = true;
        or_event_1877_68_1_end: ;
        if (!or_result_1877_68) goto or_final_or_event_1877_68_1_end;
        media.play_id(SOUND_SHUTOFF_OXYGEN_374, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.set(0, 2);
    }
    or_final_or_event_1877_68_1_end: ;
}
void Frames::event_func_14542()
{
    // event 1878_68
    {
        if (!(group_main_engine_1)) goto event_1878_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1878_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) < (460))) goto event_1878_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(1, 1);
    }
    event_1878_68_end: ;
}
void Frames::event_func_14543()
{
    // event 1879_68
    {
        if (!(group_main_engine_1)) goto event_1879_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1879_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (460))) goto event_1879_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(1, 1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_1879_68_end: ;
}
void Frames::event_func_14544()
{
    // event 1882_68
    {
        if (!(group_main_engine_1)) goto event_1882_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1882_68_end;
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(frame_left(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), frame_right())));
            ((Active*)*it)->set_y(get_max(frame_top(), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24), frame_bottom())));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1882_68_end: ;
}
void Frames::event_func_14545()
{
    // event 1883_68
    {
        if (!(group_main_engine_1)) goto event_1883_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (2))) goto event_1883_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (288))) goto event_1883_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.set(0, 3);
        basementlight_1269_instances.clear_selection();
        for (ObjectIterator it(basementlight_1269_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-466, 85);
            pos_end_1883_68_0: ;
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_1883_68_end: ;
}
void Frames::event_func_14546()
{
    // event 1885_68
    {
        if (!(group_main_engine_1)) goto event_1885_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (0))) goto event_1885_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(npcserpentine_947_instances))->get_x()-200))) goto event_1885_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(npcserpentine_947_instances))->get_y()+50))) goto event_1885_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
            group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1885_68_end: ;
}
void Frames::event_func_14547()
{
    // event 1886_68
    {
        if (!(group_main_engine_1)) goto event_1886_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) > (0))) goto event_1886_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(6, 1);
    }
    event_1886_68_end: ;
}
void Frames::event_func_14548()
{
    // event 1887_68
    {
        if (!(group_main_engine_1)) goto event_1887_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (1))) goto event_1887_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+2, ((Active*)get_instance(npcserpentine_947_instances))->get_x()-80));
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1887_68_end: ;
}
void Frames::event_func_14549()
{
    // event 1888_68
    {
        if (!(group_main_engine_1)) goto event_1888_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (1))) goto event_1888_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (100))) goto event_1888_68_end;
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
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
    }
    event_1888_68_end: ;
}
void Frames::event_func_14550()
{
    // event 1889_68
    bool or_result_1889_68 = false;
    bool or_temp_result_1889_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1889_68_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1889_68_0_end;
        or_result_1889_68 = true;
        or_temp_result_1889_68_0 = true;
    }
    or_event_1889_68_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1889_68_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1889_68
    bool or_temp_result_1889_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1889_68_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (30))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1889_68_1_end;
        or_result_1889_68 = true;
        or_temp_result_1889_68_1 = true;
        or_event_1889_68_1_end: ;
        if (or_temp_result_1889_68_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1889_68) goto or_final_or_event_1889_68_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1889_68_0 || or_temp_result_1889_68_1) {
            npcserpentine_947_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    or_final_or_event_1889_68_1_end: ;
}
void Frames::event_func_14551()
{
    // event 1890_68
    {
        if (!(group_main_engine_1)) goto event_1890_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (2))) goto event_1890_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (30))) goto event_1890_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->restore_speed();
    }
    event_1890_68_end: ;
}
void Frames::event_func_14552()
{
    // event 1891_68
    {
        if (!(group_main_engine_1)) goto event_1891_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (3))) goto event_1891_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) == (60))) goto event_1891_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_animation(17);
        media.play_id(SOUND_MUTANT_EYES_375, -1, 1);
    }
    event_1891_68_end: ;
}
void Frames::event_func_14553()
{
    // event 1892_68
    {
        if (!(group_main_engine_1)) goto event_1892_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (3))) goto event_1892_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (64))) goto event_1892_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
    }
    event_1892_68_end: ;
}
void Frames::event_func_14554()
{
    // event 1893_68
    {
        if (!(group_main_engine_1)) goto event_1893_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1893_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) < (9))) goto event_1893_68_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances))->get_x()-10);
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_frame(24);
    }
    event_1893_68_end: ;
}
void Frames::event_func_14555()
{
    // event 1894_68
    {
        if (!(group_main_engine_1)) goto event_1894_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1894_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) == (40))) goto event_1894_68_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 3);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1894_68_end: ;
}
void Frames::event_func_14556()
{
    // event 1895_68
    {
        if (!(group_main_engine_1)) goto event_1895_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1895_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (40))) goto event_1895_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->move_front();
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-3, 0));
        }
    }
    event_1895_68_end: ;
}
void Frames::event_func_14557()
{
    // event 1896_68
    {
        if (!(group_main_engine_1)) goto event_1896_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1896_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) >= (70))) goto event_1896_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)%math_helper%20) == (10))) goto event_1896_68_end;
        if (not_always_1896_68 > loop_count) {
            not_always_1896_68 = loop_count + 2;
            goto event_1896_68_end;
        }
        not_always_1896_68 = loop_count + 2;
        media.play_id(SOUND_MUTANT_FORM_376, -1, 1);
    }
    event_1896_68_end: ;
}
void Frames::event_func_14558()
{
    // event 1897_68
    {
        if (!(group_main_engine_1)) goto event_1897_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1897_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) >= (70))) goto event_1897_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)%math_helper%10) == (0))) goto event_1897_68_end;
        FrameObject * single_instance_1897_68_0; single_instance_1897_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_npctransformbubble_3555(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1897_68_0 == NULL)
                    single_instance_1897_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1897_68_0))->alterables->values.set(0, ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)*11);
    }
    event_1897_68_end: ;
}
void Frames::event_func_14559()
{
    // event 1898_68
    {
        if (!(group_main_engine_1)) goto event_1898_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) < (6))) goto event_1898_68_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcserpentine_947_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(npcserpentine_947_instances))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(2)*0.1);
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1898_68_end: ;
}
void Frames::event_func_14560()
{
    // event 1899_68
    {
        if (!(group_main_engine_1)) goto event_1899_68_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (2))) { it.deselect(); continue; }
        }
        if (!npctransformbubble_3555_instances.has_selection()) goto event_1899_68_end;
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 10);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-20, 0));
        }
    }
    event_1899_68_end: ;
}
void Frames::event_func_14561()
{
    // event 1900_68
    {
        if (!(group_main_engine_1)) goto event_1900_68_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!npctransformbubble_3555_instances.has_selection()) goto event_1900_68_end;
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(1);
    }
    event_1900_68_end: ;
}
void Frames::event_func_14562()
{
    // event 1901_68
    {
        if (!(group_main_engine_1)) goto event_1901_68_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_on(1))) goto event_1901_68_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_off(2))) goto event_1901_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(npcserpentine_947_instances))->set_direction(17);
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(0);
        ((Active*)get_instance(npcserpentine_947_instances))->restore_frame();
    }
    event_1901_68_end: ;
}
void Frames::event_func_14563()
{
    // event 1902_68
    {
        if (!(group_main_engine_1)) goto event_1902_68_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->alterables->flags.is_on(2))) goto event_1902_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(4, (((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)-130)*0.1);
        ((Active*)get_instance(npcserpentine_947_instances))->set_scale(1.2-cos_deg(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(4))*0.2);
    }
    event_1902_68_end: ;
}
void Frames::event_func_14564()
{
    // event 1903_68
    {
        if (!(group_main_engine_1)) goto event_1903_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (4))) goto event_1903_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (400))) goto event_1903_68_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(26);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
        }
        media.play_id(SOUND_SHOCKWAVE_67, -1, 1);
        FrameObject * single_instance_1903_68_0; single_instance_1903_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmserpflare_3556(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1903_68_0 == NULL)
                    single_instance_1903_68_0 = new_obj;
            }
        }
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(false);
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1903_68_0))->alterables->values.set(0, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 120);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
    }
    event_1903_68_end: ;
}
void Frames::event_func_14565()
{
    // event 1904_68
    {
        if (!(group_main_engine_1)) goto event_1904_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (5))) goto event_1904_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(npcserpentine_947_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_1904_68_end;
        cameralimitbossbottom_420_instances.clear_selection();
        pick_objects_in_zone(cameralimitbossbottom_420_instances, 7117, 89, 8036, 594);
        fdplatform_3542_instances.clear_selection();
        pick_objects_in_zone(fdplatform_3542_instances, 7117, 89, 8036, 594);
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(fdplatform_3542_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -24, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 24, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
    }
    event_1904_68_end: ;
}
void Frames::event_func_14566()
{
    // event 1905_68
    {
        if (!(group_main_engine_1)) goto event_1905_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (5))) goto event_1905_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(npcserpentine_947_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_1905_68_end;
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances))->get_x());
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 15);
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 15);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1905_68_end: ;
}
void Frames::event_func_14567()
{
    // event 1906_68
    {
        if (!(group_main_engine_1)) goto event_1906_68_end;
        fdplatform_3542_instances.clear_selection();
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!fdplatform_3542_instances.has_selection()) goto event_1906_68_end;
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+15);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+(((Active*)*it)->get_x()%math_helper%17)-8, 0);
        }
    }
    event_1906_68_end: ;
}
void Frames::event_func_14568()
{
    // event 1907_68
    {
        if (!(group_main_engine_1)) goto event_1907_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1907_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1907_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1907_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (4600))) goto event_1907_68_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12), 3));
        }
    }
    event_1907_68_end: ;
}
void Frames::event_func_14569()
{
    // event 1908_68
    {
        if (!(group_main_engine_1)) goto event_1908_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1908_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1908_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (47))) goto event_1908_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1908_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (4600))) goto event_1908_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
    }
    event_1908_68_end: ;
}
void Frames::event_func_14570()
{
    // event 1909_68
    {
        if (!(group_main_engine_1)) goto event_1909_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1909_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (3500))) goto event_1909_68_end;
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_3553_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece9_3554_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece5_3552_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
    }
    event_1909_68_end: ;
}
void Frames::event_func_14571()
{
    // event 1910_68
    {
        if (!(group_main_engine_1)) goto event_1910_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (6))) goto event_1910_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1000))) goto event_1910_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (4600))) goto event_1910_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 5);
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1910_68_end: ;
}
void Frames::event_func_14572()
{
    // event 1911_68
    {
        if (!(group_main_engine_1)) goto event_1911_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1911_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (4500))) goto event_1911_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-8, -50+get_min(50, (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(6)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24))*0.5)-sin_deg(global_values->get(3)*1.5)*6));
    }
    event_1911_68_end: ;
}
void Frames::event_func_14573()
{
    // event 1912_68
    {
        if (!(group_main_engine_1)) goto event_1912_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (0))) goto event_1912_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1912_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (4500))) goto event_1912_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1912_68_end;
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
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(0, 7);
            group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1 = false;
    
    }
    event_1912_68_end: ;
}
void Frames::event_func_14574()
{
    // event 1913_68
    {
        if (!(group_main_engine_1)) goto event_1913_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (6))) goto event_1913_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7000))) goto event_1913_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (4500))) goto event_1913_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1913_68_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(6, 0);
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
    event_1913_68_end: ;
}
void Frames::event_func_14575()
{
    // event 1914_68
    {
        if (!(group_main_engine_1)) goto event_1914_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (7))) goto event_1914_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) < (20))) goto event_1914_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1914_68_end: ;
}
void Frames::event_func_14576()
{
    // event 1915_68
    {
        if (!(group_main_engine_1)) goto event_1915_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (7))) goto event_1915_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) == (20))) goto event_1915_68_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1) {
            group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 = true;
        }
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -90);
        }
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(7, ((Active*)get_instance(bossenergypunch_3587_instances))->get_x());
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(false);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_scale(1);
    }
    event_1915_68_end: ;
}
void Frames::event_func_14577()
{
    // event 1916_68
    {
        if (!(group_main_engine_1)) goto event_1916_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (7))) goto event_1916_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (20))) goto event_1916_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1916_68_end: ;
}
void Frames::event_func_14578()
{
    // event 1917_68
    {
        if (!(group_main_engine_1)) goto event_1917_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(0)) == (7))) goto event_1917_68_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(6)) > (80))) goto event_1917_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_44();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1917_68_end: ;
}
void Frames::event_func_14579()
{
    // event 1918_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_laughs_1)) goto event_1918_68_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (90))) goto event_1918_68_end;
        if (once_condition_1918_68) goto event_1918_68_end;
        once_condition_1918_68 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_0_228+number_to_string(7+randrange(3))+str_ogg_90, 29-1);
    }
    event_1918_68_end: ;
}
void Frames::event_func_14580()
{
    // event 1919_68
    {
        if (!(group_main_engine_1)) goto event_1919_68_end;
        if (!((global_values->get(4)) < (2))) goto event_1919_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4480))) goto event_1919_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4580))) goto event_1919_68_end;
        global_values->set(4, 2);
        global_values->set(5, 4480);
        global_values->set(6, 5190);
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
    event_1919_68_end: ;
}
void Frames::event_func_14581()
{
    // event 1920_68
    {
        if (!(group_main_engine_1)) goto event_1920_68_end;
        if (!((global_values->get(4)) < (3))) goto event_1920_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5280))) goto event_1920_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5380))) goto event_1920_68_end;
        global_values->set(4, 3);
        global_values->set(5, 5280);
        global_values->set(6, 5190);
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
    event_1920_68_end: ;
}
void Frames::event_func_14582()
{
    // event 1921_68
    {
        if (!(group_main_engine_1)) goto event_1921_68_end;
        if (!((global_values->get(4)) < (4))) goto event_1921_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (360))) goto event_1921_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7200))) goto event_1921_68_end;
        global_values->set(4, 4);
        global_values->set(5, 7584);
        global_values->set(6, 960);
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
    event_1921_68_end: ;
}
void Frames::event_func_14583()
{
    // event 1923_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1923_68_end;
        if (once_condition_1923_68) goto event_1923_68_end;
        once_condition_1923_68 = true;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspinmine_3326_instances.clear_selection();
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1923_68_end: ;
}
void Frames::event_func_14584()
{
    // event 1924_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1924_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(20), get_min(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7), ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(21))));
    }
    event_1924_68_end: ;
}
void Frames::event_func_14585()
{
    // event 1925_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1925_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (1))) goto event_1925_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_direction(0);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_direction(0);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_direction(0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_direction(0);
        bossmserptail_3579_instances.clear_selection();
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_direction(0);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_direction(0);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_direction(0);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_direction(0);
    }
    event_1925_68_end: ;
}
void Frames::event_func_14586()
{
    // event 1926_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1926_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (-1))) goto event_1926_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_direction(16);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_direction(16);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_direction(16);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_direction(16);
        bossmserptail_3579_instances.clear_selection();
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_direction(16);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_direction(16);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_direction(16);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_direction(16);
    }
    event_1926_68_end: ;
}
void Frames::event_func_14587()
{
    // event 1927_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1927_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(3, (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)+4)%math_helper%360);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3))*20*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*40);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(8)+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2)*20*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*10+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*10+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*30);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(0);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->restore_frame();
        ((Active*)get_instance(bossmserprightarm_3580_instances))->force_frame(0);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->force_frame(0);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(0);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->restore_frame();
        ((Active*)get_instance(bossmserprightarm_3580_instances))->move_front(((Active*)get_instance(bossmserptail_3579_instances)));
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->move_front(((Active*)get_instance(bossmserprightarm_3580_instances)));
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*4);
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_angle(0, 0);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_angle(0, 0);
    }
    event_1927_68_end: ;
}
void Frames::event_func_14588()
{
    // event 1928_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1928_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*16);
            ((Active*)*it)->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()-40+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-180)*6*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9));
        }
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x());
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-180)*3*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9));
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*48);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-90)*4*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+16);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x());
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-180)*3*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9));
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*64);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-90)*4*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+16);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*40);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-120)*4*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+16);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*56);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()+cos_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*2-120)*4*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+16);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_x(((Active*)get_instance(bossmserptorso_3582_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*8);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->get_y()-24);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->move_back();
    }
    event_1928_68_end: ;
}
void Frames::event_func_14589()
{
    // event 1929_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1929_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*18);
        }
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_x(((Active*)get_instance(bossmserpleftarm_3584_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*34);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_x(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*36);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_x(((Active*)get_instance(bossmserpneck_3578_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*9);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_angle(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)*10, 0);
    }
    event_1929_68_end: ;
}
void Frames::event_func_14590()
{
    // event 1930_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1930_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)) > (0.5))) goto event_1930_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_direction(((Active*)get_instance(bossmserptorso_3582_instances))->get_direction()+16);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_direction(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_direction()+16);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_direction(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_direction()+16);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(10);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(8);
    }
    event_1930_68_end: ;
}
void Frames::event_func_14591()
{
    // event 1931_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1931_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*18);
        }
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_x(((Active*)get_instance(bossmserpleftarm_3584_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*100);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_x(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*120);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_x(((Active*)get_instance(bossmserpneck_3578_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*9);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_angle(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*45, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*45, 0);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*45, 0);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*16);
        }
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_angle(((Active*)get_instance(bossmserpneck_3578_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*20, 0);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_x(((Active*)get_instance(bossmserprightarm_3580_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*60);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_x(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*110);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_y(((Active*)get_instance(bossmserpneck_3578_instances))->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)*20);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(false);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y(-200);
    }
    event_1931_68_end: ;
}
void Frames::event_func_14592()
{
    // event 1932_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1932_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)) > (0.5))) goto event_1932_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(3, (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)+8)%math_helper%360);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(8);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->force_frame(1);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->force_frame(1);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(7);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->move_back();
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->move_back();
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_direction(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_direction()+16);
    }
    event_1932_68_end: ;
}
void Frames::event_func_14593()
{
    // event 1933_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1933_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-12);
        }
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_angle(((Active*)get_instance(bossmserpneck_3578_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*10, 0);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_x(((Active*)get_instance(bossmserprightarm_3580_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*20+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10));
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_x(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10));
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_y(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*20);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_y(((Active*)get_instance(bossmserprightarm_3580_instances))->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*20);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_x(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-5+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*5), 0);
        }
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-5+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*5), 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)*(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-5+sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)*10)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*5), 0);
    }
    event_1933_68_end: ;
}
void Frames::event_func_14594()
{
    // event 1934_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1934_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1934_68_end;
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(8);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->force_frame(1);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(10);
    }
    event_1934_68_end: ;
}
void Frames::event_func_14595()
{
    // event 1935_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1935_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*18);
        }
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_x(((Active*)get_instance(bossmserpleftarm_3584_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-20);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_x(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_x(((Active*)get_instance(bossmserpneck_3578_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*9);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_angle(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*30, 0);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*30, 0);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*16);
        }
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_angle(((Active*)get_instance(bossmserpneck_3578_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*20, 0);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_x(((Active*)get_instance(bossmserprightarm_3580_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*40);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_x(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_y(((Active*)get_instance(bossmserpneck_3578_instances))->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)*20);
    }
    event_1935_68_end: ;
}
