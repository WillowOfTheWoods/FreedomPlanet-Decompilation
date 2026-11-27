#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4381()
{
    // event 1458_20
    bool or_result_1458_20 = false;
    bool or_temp_result_1458_20_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1458_20_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1458_20_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1458_20_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakablerock_951_instances)) goto or_event_1458_20_0_end;
        or_result_1458_20 = true;
        or_temp_result_1458_20_0 = true;
    }
    or_event_1458_20_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakablerock_951_instances.clear_saved_selection();
    if (or_temp_result_1458_20_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakablerock_951_instances.save_selection();
    }
    // event 1458_20
    bool or_temp_result_1458_20_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1458_20_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1458_20_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1458_20_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakablerock_951_instances)) goto or_event_1458_20_1_end;
        or_result_1458_20 = true;
        or_temp_result_1458_20_1 = true;
        or_event_1458_20_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1458_20_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            breakablerock_951_instances.save_selection();
        }
        if (!or_result_1458_20) goto or_final_or_event_1458_20_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakablerock_951_instances.empty_selection();
        if (or_temp_result_1458_20_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1458_20_0 || or_temp_result_1458_20_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1458_20_0 || or_temp_result_1458_20_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1458_20_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1458_20_0 || or_temp_result_1458_20_1) {
            breakablerock_951_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1458_20_1_end: ;
}
void Frames::event_func_4382()
{
    // event 1459_20
    {
        if (!(group_main_engine_1)) goto event_1459_20_end;
        monitoricon_331_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakablerock_951_instances)) goto event_1459_20_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1459_20_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1459_20_end: ;
}
void Frames::event_func_4383()
{
    // event 1460_20
    {
        if (!(group_main_engine_1)) goto event_1460_20_end;
        breakablerock_951_instances.clear_selection();
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablerock_951_instances.has_selection()) goto event_1460_20_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablerockpiece_355_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakablerock_951_instances); !p_it.end(); ++p_it) {
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
        }
        for (ObjectIterator it(breakablerockpiece_355_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakablerock_951_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakablerock_951_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1460_20_end: ;
}
void Frames::event_func_4384()
{
    // event 1468_20
    {
        if (!(group_main_engine_1)) goto event_1468_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1468_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
        }
    }
    event_1468_20_end: ;
}
void Frames::event_func_4385()
{
    // event 1469_20
    {
        if (!(group_main_engine_1)) goto event_1469_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1469_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1469_20_end: ;
}
void Frames::event_func_4386()
{
    // event 1470_20
    {
        if (!(group_main_engine_1)) goto event_1470_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1470_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
        }
    }
    event_1470_20_end: ;
}
void Frames::event_func_4387()
{
    // event 1471_20
    {
        if (!(group_main_engine_1)) goto event_1471_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1471_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1471_20_end: ;
}
void Frames::event_func_4388()
{
    // event 1472_20
    {
        if (!(group_main_engine_1)) goto event_1472_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1472_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1472_20_end: ;
}
void Frames::event_func_4389()
{
    // event 1473_20
    {
        if (!(group_main_engine_1)) goto event_1473_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (60))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1473_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (10))) goto event_1473_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (11))) goto event_1473_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -40);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1473_20_end: ;
}
void Frames::event_func_4390()
{
    // event 1474_20
    {
        if (!(group_main_engine_1)) goto event_1474_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1474_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1474_20_end: ;
}
void Frames::event_func_4391()
{
    // event 1475_20
    {
        if (!(group_main_engine_1)) goto event_1475_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1475_20_end;
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1475_20_0; single_instance_1475_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1475_20_0 == NULL)
                    single_instance_1475_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1475_20_0))->set_direction(((Active*)get_single(enemyturretus_938_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1475_20_end: ;
}
void Frames::event_func_4392()
{
    // event 1476_20
    {
        if (!(group_main_engine_1)) goto event_1476_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1476_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1476_20_end: ;
}
void Frames::event_func_4393()
{
    // event 1477_20
    {
        if (!(group_main_engine_1)) goto event_1477_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1477_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1477_20_end: ;
}
void Frames::event_func_4394()
{
    // event 1478_20
    bool or_result_1478_20 = false;
    bool or_temp_result_1478_20_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1478_20_0_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1478_20_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyturretus_938_instances, qualifier_7)) goto or_event_1478_20_0_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1478_20_0_end;
        or_result_1478_20 = true;
        or_temp_result_1478_20_0 = true;
    }
    or_event_1478_20_0_end: ;
    enemyturretus_938_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1478_20_0) {
        enemyturretus_938_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1478_20
    bool or_temp_result_1478_20_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1478_20_1_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1478_20_1_end;
        or_result_1478_20 = true;
        or_temp_result_1478_20_1 = true;
        or_event_1478_20_1_end: ;
        if (or_temp_result_1478_20_1) {
            enemyturretus_938_instances.save_selection();
        }
        if (!or_result_1478_20) goto or_final_or_event_1478_20_1_end;
        enemyturretus_938_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1478_20_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1478_20_0 || or_temp_result_1478_20_1) {
            enemyturretus_938_instances.restore_selection();
        }
        FrameObject * single_instance_1478_20_0; single_instance_1478_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1478_20_0 == NULL)
                    single_instance_1478_20_0 = new_obj;
            }
        }
        FrameObject * single_instance_1478_20_1; single_instance_1478_20_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1478_20_1 == NULL)
                    single_instance_1478_20_1 = new_obj;
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
                loop_spawndebris_20();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1478_20_1_end: ;
}
void Frames::event_func_4395()
{
    // event 1480_20
    {
        if (!(group_main_engine_1)) goto event_1480_20_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto event_1480_20_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1480_20_end: ;
}
void Frames::event_func_4396()
{
    // event 1484_20
    {
        if (!(group_main_engine_1)) goto event_1484_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1484_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
    }
    event_1484_20_end: ;
}
void Frames::event_func_4397()
{
    // event 1485_20
    {
        if (!(group_main_engine_1)) goto event_1485_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1485_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1485_20_end: ;
}
void Frames::event_func_4398()
{
    // event 1486_20
    {
        if (!(group_main_engine_1)) goto event_1486_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1486_20_end;
        if (!(test_obstacle(((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_y()))) goto event_1486_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1486_20_end: ;
}
void Frames::event_func_4399()
{
    // event 1487_20
    {
        if (!(group_main_engine_1)) goto event_1487_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(5)-200))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1487_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1487_20_end: ;
}
void Frames::event_func_4400()
{
    // event 1488_20
    {
        if (!(group_main_engine_1)) goto event_1488_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1488_20_end;
        if (!(test_obstacle(((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_y()))) goto event_1488_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1488_20_end: ;
}
void Frames::event_func_4401()
{
    // event 1489_20
    {
        if (!(group_main_engine_1)) goto event_1489_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(5)+200))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1489_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1489_20_end: ;
}
void Frames::event_func_4402()
{
    // event 1490_20
    {
        if (!(group_main_engine_1)) goto event_1490_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1490_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1490_20_end: ;
}
void Frames::event_func_4403()
{
    // event 1491_20
    {
        if (!(group_main_engine_1)) goto event_1491_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1491_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1491_20_end: ;
}
void Frames::event_func_4404()
{
    // event 1492_20
    {
        if (!(group_main_engine_1)) goto event_1492_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+10+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1492_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (10))) goto event_1492_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (11))) goto event_1492_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(4, -2);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1492_20_end: ;
}
void Frames::event_func_4405()
{
    // event 1493_20
    {
        if (!(group_main_engine_1)) goto event_1493_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+10-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1493_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (10))) goto event_1493_20_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (11))) goto event_1493_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 2);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1493_20_end: ;
}
void Frames::event_func_4406()
{
    // event 1494_20
    {
        if (!(group_main_engine_1)) goto event_1494_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1494_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)-(((Active*)*it)->alterables->values.get(7)*0.5));
        }
    }
    event_1494_20_end: ;
}
void Frames::event_func_4407()
{
    // event 1495_20
    {
        if (!(group_main_engine_1)) goto event_1495_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1495_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1495_20_end: ;
}
void Frames::event_func_4408()
{
    // event 1496_20
    {
        if (!(group_main_engine_1)) goto event_1496_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1496_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1496_20_end: ;
}
void Frames::event_func_4409()
{
    // event 1497_20
    {
        if (!(group_main_engine_1)) goto event_1497_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+2+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1497_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1497_20_end: ;
}
void Frames::event_func_4410()
{
    // event 1498_20
    {
        if (!(group_main_engine_1)) goto event_1498_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-2+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1498_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1498_20_end: ;
}
void Frames::event_func_4411()
{
    // event 1499_20
    {
        if (!(group_main_engine_1)) goto event_1499_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (30))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1499_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1499_20_end: ;
}
void Frames::event_func_4412()
{
    // event 1500_20
    {
        if (!(group_main_engine_1)) goto event_1500_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (15))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1500_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1500_20_end: ;
}
void Frames::event_func_4413()
{
    // event 1501_20
    {
        if (!(group_main_engine_1)) goto event_1501_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (15))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1501_20_end;
        media.play_id(SOUND_ENEMY_DIVE_10, -1, 1);
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1501_20_end: ;
}
void Frames::event_func_4414()
{
    // event 1502_20
    {
        if (!(group_main_engine_1)) goto event_1502_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1502_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1502_20_end: ;
}
void Frames::event_func_4415()
{
    // event 1503_20
    {
        if (!(group_main_engine_1)) goto event_1503_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1503_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_1503_20_end: ;
}
void Frames::event_func_4416()
{
    // event 1504_20
    {
        if (!(group_main_engine_1)) goto event_1504_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1504_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_1504_20_end: ;
}
void Frames::event_func_4417()
{
    // event 1505_20
    {
        if (!(group_main_engine_1)) goto event_1505_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1505_20_end;
        if (!(test_obstacle(((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_x(), ((Active*)get_single(enemydragonfly_944_instances, default_active_instance))->get_box_index(3)))) goto event_1505_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1505_20_end: ;
}
void Frames::event_func_4418()
{
    // event 1506_20
    {
        if (!(group_main_engine_1)) goto event_1506_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)*it)->alterables->values.get(6)+150))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1506_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1506_20_end: ;
}
void Frames::event_func_4419()
{
    // event 1507_20
    {
        if (!(group_main_engine_1)) goto event_1507_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1507_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1507_20_end: ;
}
void Frames::event_func_4420()
{
    // event 1508_20
    {
        if (!(group_main_engine_1)) goto event_1508_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (50))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1508_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1508_20_end: ;
}
void Frames::event_func_4421()
{
    // event 1509_20
    {
        if (!(group_main_engine_1)) goto event_1509_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (50))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1509_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1509_20_end: ;
}
void Frames::event_func_4422()
{
    // event 1510_20
    {
        if (!(group_main_engine_1)) goto event_1510_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1510_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1510_20_end: ;
}
void Frames::event_func_4423()
{
    // event 1511_20
    {
        if (!(group_main_engine_1)) goto event_1511_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1511_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5);
        }
    }
    event_1511_20_end: ;
}
void Frames::event_func_4424()
{
    // event 1512_20
    {
        if (!(group_main_engine_1)) goto event_1512_20_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto event_1512_20_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1512_20_end: ;
}
void Frames::event_func_4425()
{
    // event 1513_20
    bool or_result_1513_20 = false;
    bool or_temp_result_1513_20_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1513_20_0_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto or_event_1513_20_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemydragonfly_944_instances, qualifier_7)) goto or_event_1513_20_0_end;
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto or_event_1513_20_0_end;
        or_result_1513_20 = true;
        or_temp_result_1513_20_0 = true;
    }
    or_event_1513_20_0_end: ;
    enemydragonfly_944_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1513_20_0) {
        enemydragonfly_944_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1513_20
    bool or_temp_result_1513_20_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1513_20_1_end;
        enemydragonfly_944_instances.clear_selection();
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydragonfly_944_instances.has_selection()) goto or_event_1513_20_1_end;
        or_result_1513_20 = true;
        or_temp_result_1513_20_1 = true;
        or_event_1513_20_1_end: ;
        if (or_temp_result_1513_20_1) {
            enemydragonfly_944_instances.save_selection();
        }
        if (!or_result_1513_20) goto or_final_or_event_1513_20_1_end;
        qualifier_7.empty_selection();
        enemydragonfly_944_instances.empty_selection();
        if (or_temp_result_1513_20_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1513_20_0 || or_temp_result_1513_20_1) {
            enemydragonfly_944_instances.restore_selection();
        }
        for (ObjectIterator it(enemydragonfly_944_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1513_20_0; single_instance_1513_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydragonfly_944_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1513_20_0 == NULL)
                    single_instance_1513_20_0 = new_obj;
            }
        }
        FrameObject * single_instance_1513_20_1; single_instance_1513_20_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydragonfly_944_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1513_20_1 == NULL)
                    single_instance_1513_20_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1513_20_1_end: ;
}
void Frames::event_func_4426()
{
    // event 1542_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1542_20_end;
        if (not_always_1542_20 > loop_count) {
            not_always_1542_20 = loop_count + 2;
            goto event_1542_20_end;
        }
        not_always_1542_20 = loop_count + 2;
        bossserpentinebody_946_instances.clear_selection();
        spread_value(bossserpentinebody_946_instances, 1, 1);
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        frontrock1_945_instances.clear_selection();
        spread_value(frontrock1_945_instances, 0, 0);
        set_display_center(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_x()+40, -1);
        set_display_center(-1, ((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_y()-50);
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_min(1, 1.2-(((Active*)*it)->alterables->values.get(1)*0.05)));
        }
            group_pause_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
    }
    event_1542_20_end: ;
}
void Frames::event_func_4427()
{
    // event 1543_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1543_20_end;
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (1))) { it.deselect(); continue; }
        }
        if (!frontrock1_945_instances.has_selection()) goto event_1543_20_end;
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1543_20_end: ;
}
void Frames::event_func_4428()
{
    // event 1544_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1544_20_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (200))) goto event_1544_20_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
    }
    event_1544_20_end: ;
}
void Frames::event_func_4429()
{
    // event 1545_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1545_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1545_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1545_20_end: ;
}
void Frames::event_func_4430()
{
    // event 1546_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1546_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+sin_deg(((Active*)*it)->alterables->values.get(0)*4)*(120-(((Active*)*it)->alterables->values.get(0)*0.4))+(((Active*)*it)->alterables->values.get(0)*0.7));
        }
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)-(((Active*)*it)->alterables->values.get(1)*4), -30));
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)*it)->alterables->values.get(0)*4)*(120-(((Active*)*it)->alterables->values.get(0)*0.4))+(((Active*)*it)->alterables->values.get(0)*0.7));
        }
    }
    event_1546_20_end: ;
}
void Frames::event_func_4431()
{
    // event 1547_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1547_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (120))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1547_20_end;
        {
            loop_serpent_step_running = true;
            int times = int(1);
            loop_serpent_step_index = 0;
            while (loop_serpent_step_index < times) {
                loop_serpent_step_20();
                if (!loop_serpent_step_running) break;
                loop_serpent_step_index++;
            }
        }
    }
    event_1547_20_end: ;
}
void Frames::event_func_4432()
{
    // event 1554_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1554_20_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto event_1554_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1554_20_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1554_20_end: ;
}
void Frames::event_func_4433()
{
    // event 1555_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1555_20_end;
        if (!((global_values->get(3)%math_helper%15) == (5))) goto event_1555_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (110))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1555_20_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1555_20_end: ;
}
void Frames::event_func_4434()
{
    // event 1556_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1556_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1556_20_end;
        if (!((sin_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(0)*4)) > (0.5))) goto event_1556_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1556_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1556_20_end: ;
}
void Frames::event_func_4435()
{
    // event 1557_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1557_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1557_20_end;
        if (!((sin_deg(((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(0)*4)) < (-0.5))) goto event_1557_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1557_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1557_20_end: ;
}
void Frames::event_func_4436()
{
    // event 1558_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1558_20_end;
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((sin_deg(((Active*)*it)->alterables->values.get(0)*4)+1)*2);
        }
        {
            loop_serpent_segments_running = true;
            int times = int(bossserpentinebody_946_instances.size());
            loop_serpent_segments_index = 0;
            while (loop_serpent_segments_index < times) {
                loop_serpent_segments_20();
                if (!loop_serpent_segments_running) break;
                loop_serpent_segments_index++;
            }
        }
    }
    event_1558_20_end: ;
}
void Frames::event_func_4437()
{
    // event 1559_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1559_20_end;
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!frontrock1_945_instances.has_selection()) goto event_1559_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(frontrock1_945_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1559_20_end;
        {
            ObjectIterator other_it(frontrock1_945_instances);
            for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1559_20_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1559_20_0_end: ;
    }
    event_1559_20_end: ;
}
void Frames::event_func_4438()
{
    // event 1560_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1560_20_end;
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!frontrock1_945_instances.has_selection()) goto event_1560_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(frontrock1_945_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1560_20_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1560_20_end: ;
}
void Frames::event_func_4439()
{
    // event 1562_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1562_20_end;
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!frontrock1_945_instances.has_selection()) goto event_1562_20_end;
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(frontrock1_945_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossserpentinebody_946_instances.has_selection()) goto event_1562_20_end;
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1562_20_end: ;
}
void Frames::event_func_4440()
{
    // event 1563_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1563_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()+80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1563_20_end;
        set_display_center(-1, ((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_y()+40);
    }
    event_1563_20_end: ;
}
void Frames::event_func_4441()
{
    // event 1564_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1)) goto event_1564_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (120))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1564_20_end;
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1 = true;
        }
    }
    event_1564_20_end: ;
}
void Frames::event_func_4442()
{
    // event 1565_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1565_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1565_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1565_20_end: ;
}
void Frames::event_func_4443()
{
    // event 1566_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1566_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1566_20_end;
        if (not_always_1566_20 > loop_count) {
            not_always_1566_20 = loop_count + 2;
            goto event_1566_20_end;
        }
        not_always_1566_20 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(2881, 297);
            pos_end_1566_20_0: ;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)-40);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3)+180);
            ((Active*)*it)->force_animation(1);
        }
    }
    event_1566_20_end: ;
}
void Frames::event_func_4444()
{
    // event 1567_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1567_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (122))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1567_20_end;
        set_display_center(-1, frame_bottom()-((frame_bottom()-frame_top())*0.5)-1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)+sin_deg(((Active*)*it)->alterables->values.get(0)*4)*(120-(((Active*)*it)->alterables->values.get(0)*0.4))+(((Active*)*it)->alterables->values.get(0)*0.7));
            ((Active*)*it)->alterables->values.sub(4, get_abs(sin_deg(((Active*)*it)->alterables->values.get(0)*4))+(((Active*)*it)->alterables->values.get(0)*0.02));
            ((Active*)*it)->alterables->values.add(0, 0.5);
        }
        set_display_center(frame_right()-((frame_right()-frame_left())*0.5)+1, -1);
    }
    event_1567_20_end: ;
}
void Frames::event_func_4445()
{
    // event 1568_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1568_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (85))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1568_20_end;
        if (not_always_1568_20 > loop_count) {
            not_always_1568_20 = loop_count + 2;
            goto event_1568_20_end;
        }
        not_always_1568_20 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1568_20_end: ;
}
void Frames::event_func_4446()
{
    // event 1569_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1569_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (114))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1569_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1569_20_end: ;
}
void Frames::event_func_4447()
{
    // event 1570_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1570_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (122))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1570_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1570_20_end: ;
}
void Frames::event_func_4448()
{
    // event 1571_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1571_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1571_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1571_20_end: ;
}
void Frames::event_func_4449()
{
    // event 1572_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1572_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (122))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_animation_finished(11))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1572_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1572_20_end: ;
}
void Frames::event_func_4450()
{
    // event 1573_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1573_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1573_20_end;
        if (not_always_1573_20 > loop_count) {
            not_always_1573_20 = loop_count + 2;
            goto event_1573_20_end;
        }
        not_always_1573_20 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -5);
            ((Active*)*it)->alterables->values.set(2, 2);
        }
    }
    event_1573_20_end: ;
}
void Frames::event_func_4451()
{
    // event 1574_20
    bool or_result_1574_20 = false;
    bool or_temp_result_1574_20_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto or_event_1574_20_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1574_20_0_end;
        or_result_1574_20 = true;
        or_temp_result_1574_20_0 = true;
    }
    or_event_1574_20_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1574_20_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1574_20
    bool or_temp_result_1574_20_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto or_event_1574_20_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1574_20_1_end;
        or_result_1574_20 = true;
        or_temp_result_1574_20_1 = true;
        or_event_1574_20_1_end: ;
        if (or_temp_result_1574_20_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1574_20) goto or_final_or_event_1574_20_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1574_20_0 || or_temp_result_1574_20_1) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.2, 8));
        }
    }
    or_final_or_event_1574_20_1_end: ;
}
void Frames::event_func_4452()
{
    // event 1575_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1575_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1575_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_1575_20_end: ;
}
void Frames::event_func_4453()
{
    // event 1576_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1576_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1576_20_end;
        if (not_always_1576_20 > loop_count) {
            not_always_1576_20 = loop_count + 2;
            goto event_1576_20_end;
        }
        not_always_1576_20 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 8);
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1576_20_0; single_instance_1576_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1576_20_0 == NULL)
                    single_instance_1576_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1576_20_0))->move_back();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        FrameObject * single_instance_1576_20_1; single_instance_1576_20_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelbackgroundplane2_865(parent->x + -320, parent->y + 0), parent->layer);
                if (single_instance_1576_20_1 == NULL)
                    single_instance_1576_20_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1576_20_1))->set_direction(4);
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(0, ((Active*)single_instance_1576_20_1)->get_x());
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(1, ((Active*)single_instance_1576_20_1)->get_y());
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(2, -5);
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
        ((Active*)((Active*)single_instance_1576_20_1))->alterables->values.set(5, 4);
    }
    event_1576_20_end: ;
}
void Frames::event_func_4454()
{
    // event 1577_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1577_20_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1577_20_end;
        set_display_center(((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(3)-((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5)+randrange(((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5)*2), -1);
        set_display_center(-1, ((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(4)-((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5)+randrange(((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5)*2));
    }
    event_1577_20_end: ;
}
void Frames::event_func_4455()
{
    // event 1578_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1578_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+40))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1578_20_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
        }
    }
    event_1578_20_end: ;
}
void Frames::event_func_4456()
{
    // event 1579_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1579_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1579_20_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) > (0))) goto event_1579_20_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1579_20_end: ;
}
void Frames::event_func_4457()
{
    // event 1580_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1)) goto event_1580_20_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1580_20_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) <= (0))) goto event_1580_20_end;
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    
        {
            loop_cutscene_end_running = true;
            int times = int(1);
            loop_cutscene_end_index = 0;
            while (loop_cutscene_end_index < times) {
                loop_cutscene_end_20();
                if (!loop_cutscene_end_running) break;
                loop_cutscene_end_index++;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 0);
    }
    event_1580_20_end: ;
}
void Frames::event_func_4458()
{
    // event 1581_20
    {
        if (!(group_main_engine_1)) goto event_1581_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3200))) goto event_1581_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (840))) goto event_1581_20_end;
        if (!(((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.is_off(9))) goto event_1581_20_end;
        levelbackgroundplane2_865_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelbackgroundplane2_865(-100, 0), 0);
            levelbackgroundplane2_865_instances.add_back();
        }
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-320);
            ((Active*)*it)->set_y(900);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, -5);
            ((Active*)*it)->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(5, 4);
        }
        ((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.enable(9);
    }
    event_1581_20_end: ;
}
void Frames::event_func_4459()
{
    // event 1582_20
    {
        if (!(group_main_engine_1)) goto event_1582_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3200))) goto event_1582_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (840))) goto event_1582_20_end;
        if (!(((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.is_off(9))) goto event_1582_20_end;
        levelbackgroundplane2_865_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelbackgroundplane2_865(-100, 0), 0);
            levelbackgroundplane2_865_instances.add_back();
        }
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-320);
            ((Active*)*it)->set_y(1300);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, -5);
            ((Active*)*it)->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(5, 4);
        }
        ((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.enable(9);
    }
    event_1582_20_end: ;
}
void Frames::event_func_4460()
{
    // event 1583_20
    {
        if (!(group_main_engine_1)) goto event_1583_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10800))) goto event_1583_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (750))) goto event_1583_20_end;
        if (!(((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.is_off(8))) goto event_1583_20_end;
        levelbackgroundplane2_865_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelbackgroundplane2_865(-100, 0), 0);
            levelbackgroundplane2_865_instances.add_back();
        }
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-160);
            ((Active*)*it)->set_y(600);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, -5);
            ((Active*)*it)->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(5, 4);
        }
        ((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.enable(8);
    }
    event_1583_20_end: ;
}
void Frames::event_func_4461()
{
    // event 1584_20
    {
        if (!(group_main_engine_1)) goto event_1584_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10800))) goto event_1584_20_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (750))) goto event_1584_20_end;
        if (!(((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.is_off(8))) goto event_1584_20_end;
        levelbackgroundplane2_865_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelbackgroundplane2_865(-100, 0), 0);
            levelbackgroundplane2_865_instances.add_back();
        }
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-160);
            ((Active*)*it)->set_y(1050);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, -5);
            ((Active*)*it)->alterables->values.set(3, frame_left()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(5, 4);
        }
        ((Active*)get_instance(spiraltunnelmask_958_instances))->alterables->flags.enable(8);
    }
    event_1584_20_end: ;
}
void Frames::event_func_4462()
{
    // event 1585_20
    {
        if (!(group_main_engine_1)) goto event_1585_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1585_20_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1) goto event_1585_20_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 = true;
        }
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(10);
        }
    }
    event_1585_20_end: ;
}
void Frames::event_func_4463()
{
    // event 1586_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1586_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1586_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 2.2);
        }
    }
    event_1586_20_end: ;
}
void Frames::event_func_4464()
{
    // event 1587_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1587_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1587_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1587_20_end: ;
}
void Frames::event_func_4465()
{
    // event 1588_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1588_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1588_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
            ((Active*)*it)->alterables->values.add(1, get_abs(cos_deg(((Active*)*it)->alterables->values.get(0)))*((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1588_20_end: ;
}
void Frames::event_func_4466()
{
    // event 1589_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1589_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1589_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 5);
            ((Active*)*it)->alterables->values.add(1, get_abs(cos_deg(((Active*)*it)->alterables->values.get(0)))*((Active*)*it)->alterables->values.get(2)*-1);
        }
    }
    event_1589_20_end: ;
}
void Frames::event_func_4467()
{
    // event 1590_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1590_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1590_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1590_20_end: ;
}
void Frames::event_func_4468()
{
    // event 1591_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1591_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0-((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1591_20_end;
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1591_20_end: ;
}
void Frames::event_func_4469()
{
    // event 1592_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1592_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -11, parent->get_y() + 0);
            pos_end_1592_20_0: ;
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 11, parent->get_y() + 0);
            pos_end_1592_20_1: ;
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidleftleg1_931_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_2: ;
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidrightleg1_929_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_3: ;
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidleftleg2_933_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_4: ;
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidrightleg2_925_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_5: ;
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_6;
            ((Active*)*it)->set_global_position(parent->get_x() + -11, parent->get_y() + 0);
            pos_end_1592_20_6: ;
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_7;
            ((Active*)*it)->set_global_position(parent->get_x() + 11, parent->get_y() + 0);
            pos_end_1592_20_7: ;
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidleftleg4_932_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_8;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_8: ;
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidleftleg5_934_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_9;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_9: ;
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidrightleg4_930_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_10;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_10: ;
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(minibosswretchnidrightleg5_926_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_11;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_11: ;
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_12;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1592_20_12: ;
        }
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index));
            if (parent == NULL) goto pos_end_1592_20_13;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1592_20_13: ;
        }
    }
    event_1592_20_end: ;
}
void Frames::event_func_4470()
{
    // event 1593_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1593_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        }
    }
    event_1593_20_end: ;
}
void Frames::event_func_4471()
{
    // event 1594_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1594_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 210+sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 270-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 270-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 330+sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30+sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 150+sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180-sin_deg(((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(0))*((Active*)get_instance(minibosswretchnidbase_952_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1594_20_end: ;
}
void Frames::event_func_4472()
{
    // event 1595_20
    bool or_result_1595_20 = false;
    bool or_temp_result_1595_20_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto or_event_1595_20_0_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto or_event_1595_20_0_end;
        or_result_1595_20 = true;
        or_temp_result_1595_20_0 = true;
    }
    or_event_1595_20_0_end: ;
    minibosswretchnidbase_952_instances.clear_saved_selection();
    if (or_temp_result_1595_20_0) {
        minibosswretchnidbase_952_instances.save_selection();
    }
    // event 1595_20
    bool or_temp_result_1595_20_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto or_event_1595_20_1_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (100))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto or_event_1595_20_1_end;
        or_result_1595_20 = true;
        or_temp_result_1595_20_1 = true;
        or_event_1595_20_1_end: ;
        minibosswretchnidturret_953_instances.clear_saved_selection();
        if (or_temp_result_1595_20_1) {
            minibosswretchnidturret_953_instances.save_selection();
        }
        if (!or_result_1595_20) goto or_final_or_event_1595_20_1_end;
        minibosswretchnidbase_952_instances.clear_selection();
        minibosswretchnidturret_953_instances.clear_selection();
        if (or_temp_result_1595_20_1) {
            minibosswretchnidturret_953_instances.restore_selection();
        }
        if (or_temp_result_1595_20_0) {
            minibosswretchnidbase_952_instances.restore_selection();
        }
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    or_final_or_event_1595_20_1_end: ;
}
void Frames::event_func_4473()
{
    // event 1596_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1596_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (100))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1596_20_end;
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_DRILL_ON_74, -1, 1);
    }
    event_1596_20_end: ;
}
void Frames::event_func_4474()
{
    // event 1597_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1597_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (140))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1597_20_end;
        FrameObject * single_instance_1597_20_0; single_instance_1597_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidturret_953_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1597_20_0 == NULL)
                    single_instance_1597_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1597_20_0))->set_direction(((Active*)get_single(minibosswretchnidturret_953_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1597_20_0))->alterables->flags.enable(1);
    }
    event_1597_20_end: ;
}
void Frames::event_func_4475()
{
    // event 1598_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1598_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (155))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1598_20_end;
        FrameObject * single_instance_1598_20_0; single_instance_1598_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidturret_953_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1598_20_0 == NULL)
                    single_instance_1598_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1598_20_0))->set_direction(((Active*)get_single(minibosswretchnidturret_953_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1598_20_0))->alterables->flags.enable(1);
    }
    event_1598_20_end: ;
}
void Frames::event_func_4476()
{
    // event 1599_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1599_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (170))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1599_20_end;
        FrameObject * single_instance_1599_20_0; single_instance_1599_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidturret_953_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1599_20_0 == NULL)
                    single_instance_1599_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1599_20_0))->set_direction(((Active*)get_single(minibosswretchnidturret_953_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1599_20_0))->alterables->flags.enable(1);
    }
    event_1599_20_end: ;
}
void Frames::event_func_4477()
{
    // event 1600_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1600_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (185))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1600_20_end;
        FrameObject * single_instance_1600_20_0; single_instance_1600_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidturret_953_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1600_20_0 == NULL)
                    single_instance_1600_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1600_20_0))->set_direction(((Active*)get_single(minibosswretchnidturret_953_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        ((Active*)((Active*)single_instance_1600_20_0))->alterables->flags.enable(1);
    }
    event_1600_20_end: ;
}
void Frames::event_func_4478()
{
    // event 1601_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1601_20_end;
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (200))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidturret_953_instances.has_selection()) goto event_1601_20_end;
        FrameObject * single_instance_1601_20_0; single_instance_1601_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidturret_953_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1601_20_0 == NULL)
                    single_instance_1601_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1601_20_0))->set_direction(((Active*)get_single(minibosswretchnidturret_953_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -80);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)((Active*)single_instance_1601_20_0))->alterables->flags.enable(1);
    }
    event_1601_20_end: ;
}
void Frames::event_func_4479()
{
    // event 1602_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1602_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1602_20_end;
        if (not_always_1602_20 > loop_count) {
            not_always_1602_20 = loop_count + 2;
            goto event_1602_20_end;
        }
        not_always_1602_20 = loop_count + 2;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    event_1602_20_end: ;
}
void Frames::event_func_4480()
{
    // event 1603_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1603_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1603_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1603_20_end: ;
}
