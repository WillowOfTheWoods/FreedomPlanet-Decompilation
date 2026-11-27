#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4616()
{
    // event 1623_21
    {
        if (!(group_main_engine_1)) goto event_1623_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1623_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
        }
    }
    event_1623_21_end: ;
}
void Frames::event_func_4617()
{
    // event 1624_21
    {
        if (!(group_main_engine_1)) goto event_1624_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1624_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1624_21_end: ;
}
void Frames::event_func_4618()
{
    // event 1625_21
    {
        if (!(group_main_engine_1)) goto event_1625_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1625_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -6);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1625_21_end: ;
}
void Frames::event_func_4619()
{
    // event 1626_21
    {
        if (!(group_main_engine_1)) goto event_1626_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1626_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -6);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1626_21_end: ;
}
void Frames::event_func_4620()
{
    // event 1627_21
    {
        if (!(group_main_engine_1)) goto event_1627_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1627_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1627_21_end: ;
}
void Frames::event_func_4621()
{
    // event 1628_21
    {
        if (!(group_main_engine_1)) goto event_1628_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1628_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1628_21_end: ;
}
void Frames::event_func_4622()
{
    // event 1629_21
    bool or_result_1629_21 = false;
    bool or_temp_result_1629_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1629_21_0_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1629_21_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemycacteon_990_instances, qualifier_7)) goto or_event_1629_21_0_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1629_21_0_end;
        or_result_1629_21 = true;
        or_temp_result_1629_21_0 = true;
    }
    or_event_1629_21_0_end: ;
    enemycacteon_990_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1629_21_0) {
        enemycacteon_990_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1629_21
    bool or_temp_result_1629_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1629_21_1_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto or_event_1629_21_1_end;
        or_result_1629_21 = true;
        or_temp_result_1629_21_1 = true;
        or_event_1629_21_1_end: ;
        if (or_temp_result_1629_21_1) {
            enemycacteon_990_instances.save_selection();
        }
        if (!or_result_1629_21) goto or_final_or_event_1629_21_1_end;
        enemycacteon_990_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1629_21_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1629_21_0 || or_temp_result_1629_21_1) {
            enemycacteon_990_instances.restore_selection();
        }
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1629_21_0; single_instance_1629_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycacteon_990_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_21_0 == NULL)
                    single_instance_1629_21_0 = new_obj;
            }
        }
        FrameObject * single_instance_1629_21_1; single_instance_1629_21_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycacteon_990_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_21_1 == NULL)
                    single_instance_1629_21_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1629_21_1_end: ;
}
void Frames::event_func_4623()
{
    // event 1630_21
    {
        if (!(group_main_engine_1)) goto event_1630_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1630_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
    }
    event_1630_21_end: ;
}
void Frames::event_func_4624()
{
    // event 1631_21
    {
        if (!(group_main_engine_1)) goto event_1631_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1631_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(((Active*)*it)->alterables->values.get(7))*8);
            ((Active*)*it)->alterables->values.add(7, 2);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1631_21_end: ;
}
void Frames::event_func_4625()
{
    // event 1632_21
    {
        if (!(group_main_engine_1)) goto event_1632_21_end;
        enemystarflounder_1006_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemystarflounder_1006_instances, playercharactersensor_383_instances)) goto event_1632_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1632_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1632_21_end: ;
}
void Frames::event_func_4626()
{
    // event 1633_21
    {
        if (!(group_main_engine_1)) goto event_1633_21_end;
        enemystarflounder_1006_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemystarflounder_1006_instances, playercharactersensor_383_instances)) goto event_1633_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1633_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1633_21_end: ;
}
void Frames::event_func_4627()
{
    // event 1634_21
    {
        if (!(group_main_engine_1)) goto event_1634_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1634_21_end;
        if (!(test_obstacle(((Active*)get_single(enemystarflounder_1006_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(enemystarflounder_1006_instances, default_active_instance))->get_y()))) goto event_1634_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1634_21_end: ;
}
void Frames::event_func_4628()
{
    // event 1635_21
    {
        if (!(group_main_engine_1)) goto event_1635_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(5)-200))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1635_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1635_21_end: ;
}
void Frames::event_func_4629()
{
    // event 1636_21
    {
        if (!(group_main_engine_1)) goto event_1636_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1636_21_end;
        if (!(test_obstacle(((Active*)get_single(enemystarflounder_1006_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(enemystarflounder_1006_instances, default_active_instance))->get_y()))) goto event_1636_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1636_21_end: ;
}
void Frames::event_func_4630()
{
    // event 1637_21
    {
        if (!(group_main_engine_1)) goto event_1637_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(5)+200))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1637_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1637_21_end: ;
}
void Frames::event_func_4631()
{
    // event 1638_21
    {
        if (!(group_main_engine_1)) goto event_1638_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1638_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1638_21_end: ;
}
void Frames::event_func_4632()
{
    // event 1639_21
    {
        if (!(group_main_engine_1)) goto event_1639_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1639_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1639_21_end: ;
}
void Frames::event_func_4633()
{
    // event 1640_21
    {
        if (!(group_main_engine_1)) goto event_1640_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1640_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5);
        }
    }
    event_1640_21_end: ;
}
void Frames::event_func_4634()
{
    // event 1641_21
    {
        if (!(group_main_engine_1)) goto event_1641_21_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto event_1641_21_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1641_21_end: ;
}
void Frames::event_func_4635()
{
    // event 1642_21
    bool or_result_1642_21 = false;
    bool or_temp_result_1642_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1642_21_0_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto or_event_1642_21_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemystarflounder_1006_instances, qualifier_7)) goto or_event_1642_21_0_end;
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto or_event_1642_21_0_end;
        or_result_1642_21 = true;
        or_temp_result_1642_21_0 = true;
    }
    or_event_1642_21_0_end: ;
    enemystarflounder_1006_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1642_21_0) {
        enemystarflounder_1006_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1642_21
    bool or_temp_result_1642_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1642_21_1_end;
        enemystarflounder_1006_instances.clear_selection();
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystarflounder_1006_instances.has_selection()) goto or_event_1642_21_1_end;
        or_result_1642_21 = true;
        or_temp_result_1642_21_1 = true;
        or_event_1642_21_1_end: ;
        if (or_temp_result_1642_21_1) {
            enemystarflounder_1006_instances.save_selection();
        }
        if (!or_result_1642_21) goto or_final_or_event_1642_21_1_end;
        enemystarflounder_1006_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1642_21_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1642_21_0 || or_temp_result_1642_21_1) {
            enemystarflounder_1006_instances.restore_selection();
        }
        for (ObjectIterator it(enemystarflounder_1006_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1642_21_0; single_instance_1642_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystarflounder_1006_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1642_21_0 == NULL)
                    single_instance_1642_21_0 = new_obj;
            }
        }
        FrameObject * single_instance_1642_21_1; single_instance_1642_21_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystarflounder_1006_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1642_21_1 == NULL)
                    single_instance_1642_21_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1642_21_1_end: ;
}
void Frames::event_func_4636()
{
    // event 1643_21
    {
        if (!(group_main_engine_1)) goto event_1643_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1643_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1643_21_end;
        if (not_always_1643_21 > loop_count) {
            not_always_1643_21 = loop_count + 2;
            goto event_1643_21_end;
        }
        not_always_1643_21 = loop_count + 2;
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
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
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
    event_1643_21_end: ;
}
void Frames::event_func_4637()
{
    // event 1675_21
    {
        if (!(group_main_engine_1)) goto event_1675_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1675_21_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1675_21_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1) goto event_1675_21_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1675_21_end: ;
}
void Frames::event_func_4638()
{
    // event 1680_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1680_21_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1680_21_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1680_21_end: ;
}
void Frames::event_func_4639()
{
    // event 1681_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1681_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8050))) goto event_1681_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8150))) goto event_1681_21_end;
        if (!((global_values->get(4)) < (2))) goto event_1681_21_end;
        global_values->set(4, 2);
        global_values->set(5, 8000);
        global_values->set(6, 860);
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
    event_1681_21_end: ;
}
void Frames::event_func_4640()
{
    // event 1682_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_1)) goto event_1682_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1682_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1682_21_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1682_21_end;
        if (not_always_1682_21 > loop_count) {
            not_always_1682_21 = loop_count + 2;
            goto event_1682_21_end;
        }
        not_always_1682_21 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1682_21_end: ;
}
void Frames::event_func_4641()
{
    // event 1683_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_1)) goto event_1683_21_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1683_21_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1683_21_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_21();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_1 = true;
        }
    }
    event_1683_21_end: ;
}
void Frames::event_func_4642()
{
    // event 1685_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_1)) goto event_1685_21_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1685_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+16))) goto event_1685_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1685_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1685_21_end: ;
}
void Frames::event_func_4643()
{
    // event 1686_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1686_21_end;
        if (once_condition_1686_21) goto event_1686_21_end;
        once_condition_1686_21 = true;
        bossgeyseroverlap1_1001_instances.clear_selection();
        spread_value(bossgeyseroverlap1_1001_instances, 0, 0);
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(6, 2);
        }
        bossgeyseroverlap2_1000_instances.clear_selection();
        spread_value(bossgeyseroverlap2_1000_instances, 0, 2);
        bosssnakebody_995_instances.clear_selection();
        spread_value(bosssnakebody_995_instances, 7, 1);
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_min(1, 1.2-(((Active*)*it)->alterables->values.get(7)*0.05)));
            ((Active*)*it)->alterables->flags.enable(16);
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1686_21_end: ;
}
void Frames::event_func_4644()
{
    // event 1687_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1687_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1687_21_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1687_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1687_21_end: ;
}
void Frames::event_func_4645()
{
    // event 1688_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1688_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1688_21_end;
        bossgeyseroverlap2_1000_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap2_1000_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap2_1000_instances.has_selection()) goto event_1688_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(bossgeyseroverlap2_1000_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1688_21_end: ;
}
void Frames::event_func_4646()
{
    // event 1689_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1689_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1689_21_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap1_1001_instances.has_selection()) goto event_1689_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(2)-((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1689_21_end: ;
}
void Frames::event_func_4647()
{
    // event 1690_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1690_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1690_21_end;
        bossgeyseroverlap2_1000_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap2_1000_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossgeyseroverlap2_1000_instances.has_selection()) goto event_1690_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(2)-((Active*)get_single(bossgeyseroverlap2_1000_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1690_21_end: ;
}
void Frames::event_func_4648()
{
    // event 1691_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1691_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1691_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)-(((Active*)*it)->alterables->values.get(5)*0.5)+(cos_deg(get_min(((Active*)*it)->alterables->values.get(0), 180))*((Active*)*it)->alterables->values.get(5)*0.5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-get_abs(sin_deg(get_min(((Active*)*it)->alterables->values.get(0), 180))*180));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)-(((Active*)*it)->alterables->values.get(7)*12), 0));
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)-(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5)+(cos_deg(get_min(((Active*)*it)->alterables->values.get(6), 180))*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5));
            ((Active*)*it)->set_y(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3)-get_abs(sin_deg(get_min(((Active*)*it)->alterables->values.get(6), 180))*180));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_min(get_max(-180, ((Active*)*it)->alterables->values.get(0)*get_min(get_max(-1, ((Active*)*it)->alterables->values.get(5)), 1)), 180), 0);
            ((Active*)*it)->set_direction(get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), 1)*-16);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+1.5);
        }
    }
    event_1691_21_end: ;
}
void Frames::event_func_4649()
{
    // event 1692_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1692_21_end;
        if (!((global_values->get(3)%math_helper%10) == (5))) goto event_1692_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1692_21_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1692_21_end: ;
}
void Frames::event_func_4650()
{
    // event 1693_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1693_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180+(bosssnakebody_995_instances.size()*12)))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1693_21_end;
        bossgeyseroverlap1_1001_instances.clear_selection();
        if (!check_overlap(bossserpentinehead_948_instances, bossgeyseroverlap1_1001_instances)) goto event_1693_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(bossgeyseroverlap1_1001_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1693_21_end: ;
}
void Frames::event_func_4651()
{
    // event 1694_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1694_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180+(bosssnakebody_995_instances.size()*12)))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1694_21_end;
        bossgeyseroverlap2_1000_instances.clear_selection();
        if (!check_overlap(bossserpentinehead_948_instances, bossgeyseroverlap2_1000_instances)) goto event_1694_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossgeyseroverlap2_1000_instances, it.current_index, default_active_instance))->get_y()+40);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(bossgeyseroverlap2_1000_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1694_21_end: ;
}
void Frames::event_func_4652()
{
    // event 1695_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1695_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (-1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1695_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 0.1);
        }
    }
    event_1695_21_end: ;
}
void Frames::event_func_4653()
{
    // event 1696_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1696_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1696_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 0.1);
        }
    }
    event_1696_21_end: ;
}
void Frames::event_func_4654()
{
    // event 1697_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1697_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1697_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+(20*((Active*)*it)->alterables->values.get(7))-(cos_deg(((Active*)*it)->alterables->values.get(0))*20*((Active*)*it)->alterables->values.get(7))+(sin_deg(global_values->get(3)*4)*8));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)+(cos_deg(global_values->get(3)*8)*8));
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(0)+24-(((Active*)*it)->alterables->values.get(7)*24), 0));
            ((Active*)*it)->set_x(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(2)-(20*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(7))+(cos_deg(((Active*)*it)->alterables->values.get(6))*20*((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(7))+(sin_deg(global_values->get(3)*4+(((Active*)*it)->alterables->values.get(7)*15))*8));
            ((Active*)*it)->set_y(((Active*)get_single(bossserpentinehead_948_instances, it.current_index, default_active_instance))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(6)+(cos_deg(global_values->get(3)*8+(((Active*)*it)->alterables->values.get(7)*15))*8));
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1.5+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1697_21_end: ;
}
void Frames::event_func_4655()
{
    // event 1698_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1698_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1698_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1698_21_end: ;
}
void Frames::event_func_4656()
{
    // event 1699_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1699_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1699_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, 80));
        }
    }
    event_1699_21_end: ;
}
void Frames::event_func_4657()
{
    // event 1700_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1700_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (80))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1700_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-4, 0));
        }
    }
    event_1700_21_end: ;
}
void Frames::event_func_4658()
{
    // event 1701_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1701_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (5))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1701_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    event_1701_21_end: ;
}
void Frames::event_func_4659()
{
    // event 1702_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1702_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (40))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1702_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
    }
    event_1702_21_end: ;
}
void Frames::event_func_4660()
{
    // event 1703_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1703_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1703_21_end;
        FrameObject * single_instance_1703_21_0; single_instance_1703_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossserpentinehead_948_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossfireball_967(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1703_21_0 == NULL)
                    single_instance_1703_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1703_21_0))->set_direction((((Active*)get_single(bossserpentinehead_948_instances, default_active_instance))->get_frame()*8)+16);
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 6);
            ((Active*)*it)->alterables->flags.enable(14);
        }
    }
    event_1703_21_end: ;
}
void Frames::event_func_4661()
{
    // event 1704_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1704_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(14))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1704_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->alterables->flags.disable(14);
        }
    }
    event_1704_21_end: ;
}
void Frames::event_func_4662()
{
    // event 1705_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1705_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1705_21_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1705_21_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1705_21_end;
        playercharactersensor_383_instances.clear_selection();
        bossfireball_967_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bossfireball_967_instances)) goto event_1705_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(bossfireball_967_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1705_21_end: ;
}
void Frames::event_func_4663()
{
    // event 1707_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1707_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1707_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, randrange(bossgeyseroverlap1_1001_instances.size()+bossgeyseroverlap2_1000_instances.size()));
        }
    }
    event_1707_21_end: ;
}
void Frames::event_func_4664()
{
    // event 1708_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1708_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1708_21_end;
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1708_21_end: ;
}
void Frames::event_func_4665()
{
    // event 1709_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1709_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances, it.current_index));
            if (parent == NULL) goto pos_end_1709_21_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1709_21_0: ;
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_frame());
            ((Active*)*it)->set_direction(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)get_instance(bossserpentinehead_948_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1709_21_end: ;
}
void Frames::event_func_4666()
{
    // event 1710_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1710_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1710_21_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 60);
            ((Active*)*it)->set_direction(8);
        }
        FrameObject * single_instance_1710_21_0; single_instance_1710_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1710_21_0 == NULL)
                    single_instance_1710_21_0 = new_obj;
            }
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        ((Active*)single_instance_1710_21_0)->move_front(((Active*)get_single(bosssnakebody_995_instances)));
    }
    event_1710_21_end: ;
}
void Frames::event_func_4667()
{
    // event 1711_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1711_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1711_21_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
            ((Active*)*it)->alterables->values.add(4, get_min(((Active*)*it)->alterables->values.get(5)*0.01, 1));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1711_21_end: ;
}
void Frames::event_func_4668()
{
    // event 1712_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1712_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (4))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1712_21_end;
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 4);
        }
    }
    event_1712_21_end: ;
}
void Frames::event_func_4669()
{
    // event 1713_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1713_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1713_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_1713_21_end: ;
}
void Frames::event_func_4670()
{
    // event 1714_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1714_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1714_21_end;
        if (not_always_1714_21 > loop_count) {
            not_always_1714_21 = loop_count + 2;
            goto event_1714_21_end;
        }
        not_always_1714_21 = loop_count + 2;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->flash((80) / 1000.0);
        }
    }
    event_1714_21_end: ;
}
void Frames::event_func_4671()
{
    // event 1715_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1)) goto event_1715_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1715_21_end;
        if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1) {
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1 = true;
        }
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = false;
    
            group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1 = false;
    
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->start_animation();
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossgeyseroverlap2_1000_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap2_1000_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1715_21_end: ;
}
void Frames::event_func_4672()
{
    // event 1716_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1716_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssnakehitbox_999_instances, it.current_index));
            if (parent == NULL) goto pos_end_1716_21_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1716_21_0: ;
        }
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1716_21_end: ;
}
void Frames::event_func_4673()
{
    // event 1717_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1717_21_end;
        {
            loop_movesnake_running = true;
            int times = int(bosssnakebody_995_instances.size()+1);
            loop_movesnake_index = 0;
            while (loop_movesnake_index < times) {
                loop_movesnake_21();
                if (!loop_movesnake_running) break;
                loop_movesnake_index++;
            }
        }
    }
    event_1717_21_end: ;
}
void Frames::event_func_4674()
{
    // event 1719_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1719_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1719_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1719_21_end: ;
}
void Frames::event_func_4675()
{
    // event 1720_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1720_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1720_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1720_21_end: ;
}
void Frames::event_func_4676()
{
    // event 1721_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1721_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1721_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(get_min(((Active*)*it)->get_x(), ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()), ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()));
        }
    }
    event_1721_21_end: ;
}
void Frames::event_func_4677()
{
    // event 1722_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1722_21_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1722_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1722_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(get_abs(((Active*)*it)->get_frame()-1));
        }
    }
    event_1722_21_end: ;
}
void Frames::event_func_4678()
{
    // event 1723_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1723_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1723_21_end;
        if (!((objects_in_zone(bosssnakehitbox_999_instances, 8994, 580, 9066, 858)) == (0))) goto event_1723_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1723_21_end;
        if (not_always_1723_21 > loop_count) {
            not_always_1723_21 = loop_count + 2;
            goto event_1723_21_end;
        }
        not_always_1723_21 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1723_21_end: ;
}
void Frames::event_func_4679()
{
    // event 1724_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1724_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1724_21_end;
        if (!((objects_in_zone(bosssnakehitbox_999_instances, 8994, 580, 9066, 858)) == (0))) goto event_1724_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1724_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1724_21_end: ;
}
void Frames::event_func_4680()
{
    // event 1725_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1725_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1725_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1725_21_end: ;
}
void Frames::event_func_4681()
{
    // event 1726_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1726_21_end;
        if (!((global_values->get(3)%math_helper%6) == (5))) goto event_1726_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1726_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1726_21_end;
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1726_21_end: ;
}
void Frames::event_func_4682()
{
    // event 1727_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1727_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1727_21_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto event_1727_21_end;
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 8);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        bossgeyseroverlap1_1001_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap1_1001_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bossgeyseroverlap2_1000_instances.clear_selection();
        for (ObjectIterator it(bossgeyseroverlap2_1000_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1727_21_end: ;
}
void Frames::event_func_4683()
{
    // event 1728_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1728_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1728_21_end;
        breakablerock2_1007_instances.clear_selection();
        if (!check_overlap(bosssnakehitbox_999_instances, breakablerock2_1007_instances)) goto event_1728_21_end;
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, -6);
        }
    }
    event_1728_21_end: ;
}
void Frames::event_func_4684()
{
    // event 1729_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1729_21_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1729_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        {
            loop_next_act_running = true;
            int times = int(1);
            loop_next_act_index = 0;
            while (loop_next_act_index < times) {
                loop_next_act_21();
                if (!loop_next_act_running) break;
                loop_next_act_index++;
            }
        }
            group_main_engine_level_specific_methods_bosses_bossinitiate_1 = false;
    
        breakablerock2_1007_instances.clear_selection();
        for (ObjectIterator it(breakablerock2_1007_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-50);
        }
    }
    event_1729_21_end: ;
}
void Frames::event_func_4685()
{
    // event 1733_21
    {
        if (!(group_main_engine_1)) goto event_1733_21_end;
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(2, int((sin_deg(((global_values->get(3)/math_helper/8)%math_helper%4)*90))*360-360+((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.get(12)));
    }
    event_1733_21_end: ;
}
void Frames::event_func_4686()
{
    // event 1734_21
    {
        if (!(group_main_engine_1)) goto event_1734_21_end;
        if (!((global_values->get(1)) != (0))) goto event_1734_21_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 2444, 824, 2883, 875);
        if (once_condition_1734_21) goto event_1734_21_end;
        once_condition_1734_21 = true;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1734_21_end: ;
}
void Frames::event_func_4687()
{
    // event 1735_21
    {
        if (!(group_main_engine_1)) goto event_1735_21_end;
        if (!((global_values->get(1)) != (2))) goto event_1735_21_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 2885, 735, 2939, 1033);
        if (once_condition_1735_21) goto event_1735_21_end;
        once_condition_1735_21 = true;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1735_21_end: ;
}
void Frames::event_func_4688()
{
    // event 1736_21
    {
        if (!(group_main_engine_1)) goto event_1736_21_end;
        if (!((global_values->get(1)) != (2))) goto event_1736_21_end;
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 2791, 1004, 2892, 1102);
        if (once_condition_1736_21) goto event_1736_21_end;
        once_condition_1736_21 = true;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1736_21_end: ;
}
void Frames::event_func_4689()
{
    // event 1738_21
    bool or_result_1738_21 = false;
    bool or_temp_result_1738_21_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1738_21_0_end;
        if (!((global_values->get(4)) < (2))) goto or_event_1738_21_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(switchdoor_735_instances))->get_x()+32))) goto or_event_1738_21_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(switchdoor_735_instances))->get_x()+128))) goto or_event_1738_21_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(switchdoor_735_instances))->get_y()))) goto or_event_1738_21_0_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(4)) == (0))) goto or_event_1738_21_0_end;
        or_result_1738_21 = true;
        or_temp_result_1738_21_0 = true;
    }
    or_event_1738_21_0_end: ;
    // event 1738_21
    bool or_temp_result_1738_21_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1738_21_1_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(4)) > (0))) goto or_event_1738_21_1_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(4)) < (10))) goto or_event_1738_21_1_end;
        or_result_1738_21 = true;
        or_temp_result_1738_21_1 = true;
        or_event_1738_21_1_end: ;
        if (!or_result_1738_21) goto or_final_or_event_1738_21_1_end;
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.add(4, 1);
    }
    or_final_or_event_1738_21_1_end: ;
}
void Frames::event_func_4690()
{
    // event 1739_21
    {
        if (!(group_main_engine_1)) goto event_1739_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(4)) > (0))) goto event_1739_21_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(4)) < (10))) goto event_1739_21_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(0))) goto event_1739_21_end;
        if (once_condition_1739_21) goto event_1739_21_end;
        once_condition_1739_21 = true;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 18)), 2, 18);
    }
    event_1739_21_end: ;
}
void Frames::event_func_4691()
{
    // event 1972_21
    {
        if (!(group_main_engine_1)) goto event_1972_21_end;
        if (!((frame_bottom()) < (1600))) goto event_1972_21_end;
        if (not_always_1972_21 > loop_count) {
            not_always_1972_21 = loop_count + 2;
            goto event_1972_21_end;
        }
        not_always_1972_21 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
    }
    event_1972_21_end: ;
}
void Frames::event_func_4692()
{
    // event 1973_21
    {
        if (!(group_main_engine_1)) goto event_1973_21_end;
        if (!((frame_bottom()) >= (1600))) goto event_1973_21_end;
        if (not_always_1973_21 > loop_count) {
            not_always_1973_21 = loop_count + 2;
            goto event_1973_21_end;
        }
        not_always_1973_21 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
    }
    event_1973_21_end: ;
}
void Frames::event_func_4693()
{
    // event 1975_21
    {
        if (!(group_main_engine_1)) goto event_1975_21_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.set(2, ((((Active*)get_instance(levelparalaxwatersurface_7_instances))->get_y()-(frame_top()+120.0))/math_helper/220.0));
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y_scale(get_min(2, get_abs(((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2))));
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_x(frame_left());
    }
    event_1975_21_end: ;
}
void Frames::event_func_4694()
{
    // event 1976_21
    {
        if (!(group_main_engine_1)) goto event_1976_21_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) > (0))) goto event_1976_21_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->force_frame(0);
    }
    event_1976_21_end: ;
}
void Frames::event_func_4695()
{
    // event 1977_21
    {
        if (!(group_main_engine_1)) goto event_1977_21_end;
        if (!((((Active*)get_instance(levelparalaxwatersurface_7_instances))->alterables->values.get(2)) < (0))) goto event_1977_21_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->force_frame(1);
    }
    event_1977_21_end: ;
}
void Frames::event_func_4696()
{
    // event 1978_21
    {
        if (!(group_pause_1)) goto event_1978_21_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1978_21_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1978_21_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1978_21_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1978_21_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1978_21_end: ;
}
void Frames::event_func_4697()
{
    // event 1979_21
    bool or_result_1979_21 = false;
    bool or_temp_result_1979_21_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1979_21_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1979_21_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1979_21_0_end;
        or_result_1979_21 = true;
        or_temp_result_1979_21_0 = true;
    }
    or_event_1979_21_0_end: ;
    // event 1979_21
    bool or_temp_result_1979_21_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1979_21_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1979_21_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1979_21_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1979_21_1_end;
        or_result_1979_21 = true;
        or_temp_result_1979_21_1 = true;
        or_event_1979_21_1_end: ;
        if (!or_result_1979_21) goto or_final_or_event_1979_21_1_end;
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
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1979_21_1_end: ;
}
void Frames::handle_frame_22_events()
{
    test_collisions_21();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_4036();
    event_func_4593();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
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
    event_func_1406();
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
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
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
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
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
    event_func_1472();
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
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
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
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
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
    event_func_1570();
    event_func_1571();
    event_func_1572();
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
    event_func_1604();
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
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
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
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
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
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
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
    event_func_4518();
    event_func_4519();
    event_func_4520();
    event_func_4521();
    event_func_4522();
    event_func_4347();
    event_func_4523();
    event_func_4524();
    event_func_4525();
    event_func_4351();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_4526();
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
    event_func_4527();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
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
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
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
    event_func_1866();
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
    event_func_4528();
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
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
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
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
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
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
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
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
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
    event_func_2397();
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
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
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
    event_func_2475();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_4542();
    event_func_4543();
    event_func_4544();
    event_func_4545();
    event_func_4546();
    event_func_4547();
    event_func_4548();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_4357();
    event_func_4358();
    event_func_4359();
    event_func_4360();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_4364();
    event_func_4365();
    event_func_4366();
    event_func_4367();
    event_func_4368();
    event_func_4369();
    event_func_4370();
    event_func_4371();
    event_func_4372();
    event_func_4373();
    event_func_4549();
    event_func_4550();
    event_func_4376();
    event_func_4377();
    event_func_4378();
    event_func_4379();
    event_func_4380();
    event_func_4381();
    event_func_4382();
    event_func_4383();
    event_func_4551();
    event_func_2988();
    event_func_2989();
    event_func_4552();
    event_func_4553();
    event_func_4554();
    event_func_4555();
    event_func_4556();
    event_func_4557();
    event_func_4558();
    event_func_4559();
    event_func_4560();
    event_func_4561();
    event_func_4562();
    event_func_4563();
    event_func_4564();
    event_func_4565();
    event_func_4566();
    event_func_4567();
    event_func_4568();
    event_func_4569();
    event_func_4570();
    event_func_4571();
    event_func_4572();
    event_func_4573();
    event_func_4574();
    event_func_4575();
    event_func_4576();
    event_func_4577();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4384();
    event_func_4385();
    event_func_4386();
    event_func_4387();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_4578();
    event_func_4395();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_4031();
    event_func_4032();
    event_func_4033();
    event_func_4034();
    event_func_4035();
    event_func_4037();
    event_func_4038();
    event_func_4039();
    event_func_4040();
    event_func_4041();
    event_func_4042();
    event_func_4043();
    event_func_4044();
    event_func_4045();
    event_func_4046();
    event_func_4047();
    event_func_4579();
    event_func_4580();
    event_func_4581();
    event_func_4582();
    event_func_4583();
    event_func_4584();
    event_func_4585();
    event_func_4586();
    event_func_4587();
    event_func_4588();
    event_func_4589();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_4594();
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
    event_func_4612();
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
    event_func_4623();
    event_func_4624();
    event_func_4625();
    event_func_4626();
    event_func_4627();
    event_func_4628();
    event_func_4629();
    event_func_4630();
    event_func_4631();
    event_func_4632();
    event_func_4633();
    event_func_4634();
    event_func_4635();
    event_func_4636();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_4637();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_4639();
    if (!group_main_engine_level_specific_methods_bosses_bossinitiate_1) goto group_main_engine_level_specific_methods_bosses_bossinitiate_1_end;
    event_func_4640();
    event_func_4641();
    event_func_4642();
    group_main_engine_level_specific_methods_bosses_bossinitiate_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_1_end;
    event_func_4643();
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1_end;
    event_func_4644();
    event_func_4645();
    event_func_4646();
    event_func_4647();
    event_func_4648();
    event_func_4649();
    event_func_4650();
    event_func_4651();
    event_func_4652();
    event_func_4653();
    event_func_4654();
    event_func_4655();
    event_func_4656();
    event_func_4657();
    event_func_4658();
    event_func_4659();
    event_func_4660();
    event_func_4661();
    event_func_4662();
    event_func_4663();
    event_func_4664();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1_end;
    event_func_4665();
    event_func_4666();
    event_func_4667();
    event_func_4668();
    event_func_4669();
    event_func_4670();
    event_func_4671();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1) goto group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1_end;
    event_func_4672();
    event_func_4673();
    event_func_4674();
    event_func_4675();
    event_func_4676();
    event_func_4677();
    event_func_4678();
    event_func_4679();
    event_func_4680();
    event_func_4681();
    event_func_4682();
    event_func_4683();
    event_func_4684();
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1_end: ;
    group_main_engine_level_specific_methods_bosses_snake_boss_1_end: ;
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_4685();
    event_func_4686();
    event_func_4687();
    event_func_4688();
    event_func_4689();
    event_func_4690();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
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
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
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
    event_func_2603();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
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
    event_func_3249();
    event_func_4691();
    event_func_4692();
    event_func_4693();
    event_func_4694();
    event_func_4695();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_4696();
    event_func_4697();
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
void Frames::handle_frame_22_pre_events()
{
}
void Frames::event_func_4698()
{
    // event 2_21
    {
        if (!(group_main_engine_1)) goto event_2_21_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2700);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 5);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 2);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_21_end: ;
}
void Frames::event_func_4699()
{
    // event 21_21
    {
        if (!(group_main_engine_1)) goto event_21_21_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.43);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(4, 0.43);
    }
    event_21_21_end: ;
}
void Frames::event_func_4700()
{
    // event 1489_21
    {
        if (!(group_main_engine_1)) goto event_1489_21_end;
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.set(1, ((Active*)get_instance(switchdoor_735_instances))->layer->index+1);
        switchdoor_735_instances.clear_selection();
        spread_value(switchdoor_735_instances, 0, 0);
        switchpressureplate_752_instances.clear_selection();
        spread_value(switchpressureplate_752_instances, 0, 0);
    }
    event_1489_21_end: ;
}
void Frames::event_func_4701()
{
    // event 1671_21
    {
        if (!(group_main_engine_1)) goto event_1671_21_end;
        levellayer0loop04_997_instances.clear_selection();
        for (ObjectIterator it(levellayer0loop04_997_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer0loop04_997_instances.has_selection()) goto event_1671_21_end;
        for (ObjectIterator it(levellayer0loop04_997_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1671_21_end: ;
}
void Frames::event_func_4702()
{
    // event 1672_21
    {
        if (!(group_main_engine_1)) goto event_1672_21_end;
        levellayer1loop03_808_instances.clear_selection();
        for (ObjectIterator it(levellayer1loop03_808_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levellayer1loop03_808_instances.has_selection()) goto event_1672_21_end;
        for (ObjectIterator it(levellayer1loop03_808_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1672_21_end: ;
}
void Frames::event_func_4703()
{
    // event 1732_21
    {
        if (!(group_main_engine_1)) goto event_1732_21_end;
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(12, ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.get(2));
    }
    event_1732_21_end: ;
}
void Frames::event_func_4704()
{
    // event 1917_21
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1917_21_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1917_21_end: ;
}
void Frames::event_func_4705()
{
    // event 1974_21
    {
        if (!(group_main_engine_1)) goto event_1974_21_end;
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_x_scale(frame_right()-frame_left());
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1));
    }
    event_1974_21_end: ;
}
void Frames::on_frame_22_start_events()
{
    event_func_4133();
    event_func_4698();
    event_func_2657();
    event_func_2658();
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
    event_func_4699();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3274();
    event_func_3275();
    event_func_3986();
    event_func_3987();
    event_func_4700();
    event_func_4701();
    event_func_4702();
    event_func_2686();
    event_func_2687();
    event_func_4703();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_4143();
    event_func_4704();
    event_func_4145();
    event_func_4146();
    event_func_4147();
    event_func_2694();
    event_func_4705();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_22_init()
{
    index = 21;
    width = 12800;
    height = 3200;
    virtual_width = 12800;
    virtual_height = 3200;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &spinninglogmask_1004_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &spinninglogmask_1004_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemygansekijr_816_instances, &enemyturretus_938_instances, &enemydragonfly_944_instances, &enemycacteon_990_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &enemysporepod_1005_instances, &enemystarflounder_1006_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece2_861_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece10_765_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece11_966_instances, NULL};
    qualifier_0.set(13, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &breakablerock_951_instances, &spiraltunnelmask_958_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &switchdoor_735_instances, &levellayer1loop03_808_instances, &levellayer115_348_instances, &levellayer016_996_instances, &levellayer0loop04_997_instances, &breakablerock2_1007_instances, NULL};
    qualifier_7.set(35, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemygansekijr_816_instances, &enemyturretus_938_instances, &enemydragonfly_944_instances, &bossserpentinehead_948_instances, &bossfireball_967_instances, &enemycacteon_990_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &enemysporepod_1005_instances, &enemystarflounder_1006_instances, NULL};
    qualifier_4.set(44, &qualifier_4_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&spiraltunnelmask_958_instances, NULL};
    qualifier_27.set(1, &qualifier_27_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock1_531_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, &bossfireball_967_instances, NULL};
    qualifier_17.set(2, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer016_996_instances, &levellayer0loop04_997_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer1loop03_808_instances, &levellayer115_348_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelvalleyplatform1_939_instances, &spinninglogmask_1004_instances, NULL};
    qualifier_12.set(4, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelvalleyplatform1_939_instances, &levelgeyserplate_998_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_465(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_855(0, 112), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 88), 0);
    add_background_object(create_levelparallaxpiece2_857(0, 128), 0);
    add_background_object(create_levelparallaxpiece4_858(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_859(0, 256), 0);
    add_background_object(create_levelparallaxpiece6_860(0, 424), 0);
    add_background_object(create_levelparallaxpiece2_861(0, 376), 0);
    add_background_object(create_levelparallaxpiece8_962(0, 400), 0);
    add_background_object(create_levelparallaxpiece9_963(0, 608), 0);
    add_background_object(create_levelparallaxpiece10_964(0, 936), 0);
    add_background_object(create_levelparallaxpiece7_965(0, 728), 0);
    add_background_object(create_levelparallaxpiece11_966(0, 1552), 0);
    add_object(create_levelparalaxwatersurface_968(48, 1175), 0);
    add_background_object(create_dvbackwall_866(9888, 1136), 1);
    add_background_object(create_dvbackwall_866(9880, 1008), 1);
    add_background_object(create_dvbackwall_866(9968, 976), 1);
    add_background_object(create_dvbackwall_866(9968, 1168), 1);
    add_background_object(create_dvbackwall_866(2968, 968), 1);
    add_background_object(create_spiraltunnel2_870(9944, 1160), 1);
    add_background_object(create_dvtree6_871(4624, 1016), 2);
    add_background_object(create_dvtree6_871(4720, 1032), 2);
    add_background_object(create_dvhandlebar_872(4624, 1048), 2);
    add_background_object(create_dvhandlebar_872(4704, 1048), 2);
    add_background_object(create_dvhandlebar_872(4784, 1048), 2);
    add_background_object(create_dvbackwall_866(10200, 2440), 2);
    add_background_object(create_dvtree6_871(10216, 2528), 2);
    add_background_object(create_dvtree6_871(10296, 2504), 2);
    add_background_object(create_dvhandlebar_872(10328, 2536), 2);
    add_background_object(create_dvtree6_871(3920, 1184), 2);
    add_background_object(create_dvhandlebar_872(4008, 1216), 2);
    add_background_object(create_dvhandlebar_872(4088, 1216), 2);
    add_background_object(create_dvhandlebar_872(4168, 1216), 2);
    add_background_object(create_dvhandlebar_872(4248, 1216), 2);
    add_background_object(create_dvtree4_874(5416, 536), 2);
    add_background_object(create_dvtree5_879(4256, 1480), 2);
    add_background_object(create_dvtree5_879(3464, 1488), 2);
    add_background_object(create_dvtree5_879(3848, 1544), 2);
    add_background_object(create_dvbackwall_866(6096, 1496), 2);
    add_background_object(create_dvtree5_879(6064, 1552), 2);
    add_background_object(create_dvtree5_879(5912, 1296), 2);
    add_background_object(create_dvbackwall_866(9104, 2368), 2);
    add_background_object(create_dvtree5_879(9304, 2464), 2);
    add_background_object(create_dvtree5_879(9920, 2656), 2);
    add_background_object(create_dvtree5_879(9784, 2624), 2);
    add_background_object(create_dvtree5_879(10448, 2456), 2);
    add_background_object(create_dvtree5_879(10704, 2560), 2);
    add_background_object(create_dvtree5_879(11016, 2640), 2);
    add_background_object(create_dvtree5_879(11120, 2664), 2);
    add_background_object(create_dvtree5_879(11928, 2616), 2);
    add_background_object(create_dvtree5_879(12280, 2616), 2);
    add_background_object(create_dvtree5_879(12432, 2296), 2);
    add_background_object(create_dvbackwall_866(12544, 2360), 2);
    add_background_object(create_dvtree5_879(12552, 2480), 2);
    add_background_object(create_dvbackrock1_882(8968, 320), 2);
    add_background_object(create_dvsapling_971(9688, 2640), 2);
    add_background_object(create_dvsapling_971(9640, 2664), 2);
    add_background_object(create_dvsapling_971(9488, 2640), 2);
    add_background_object(create_dvrockceiling_891(2936, 1000), 2);
    add_background_object(create_dvbackwall_866(624, 800), 2);
    add_background_object(create_dvbackrock2_890(744, 816), 2);
    add_background_object(create_dvrockedge1_905(704, 896), 2);
    add_background_object(create_dvrockslope4_901(736, 896), 2);
    add_background_object(create_dvtree4_874(576, 640), 2);
    add_background_object(create_dvbackrock3_881(6672, 864), 2);
    add_background_object(create_dvwall9_889(6664, 896), 2);
    add_background_object(create_dvbackrock1_882(208, 640), 2);
    add_background_object(create_dvtree1_893(10480, 1344), 2);
    add_background_object(create_dvbackrock1_882(9656, 960), 2);
    add_background_object(create_dvcoral5_972(10600, 2704), 2);
    add_background_object(create_dvcoral6_973(10552, 2712), 2);
    add_background_object(create_dvcoral6_973(10528, 2736), 2);
    add_background_object(create_dvbackwall_866(10200, 2632), 2);
    add_background_object(create_dvcoral5_972(10096, 2696), 2);
    add_background_object(create_dvcoral6_973(10072, 2728), 2);
    add_background_object(create_dvcoral6_973(10216, 2728), 2);
    add_background_object(create_dvcoral5_972(10312, 2712), 2);
    add_background_object(create_dvcoral6_973(10336, 2744), 2);
    add_background_object(create_dvcoral6_973(11712, 2928), 2);
    add_background_object(create_dvcoral5_972(11640, 2880), 2);
    add_background_object(create_dvcoral2_974(11560, 2840), 2);
    add_background_object(create_dvcoral1_975(11536, 2880), 2);
    add_background_object(create_dvcoral6_973(11664, 2888), 2);
    add_background_object(create_dvcoral5_972(11680, 2912), 2);
    add_background_object(create_dvcoral5_972(11440, 2888), 2);
    add_background_object(create_dvcoral6_973(11488, 2912), 2);
    add_background_object(create_dvcoral5_972(12304, 2800), 2);
    add_background_object(create_dvcoral6_973(12328, 2776), 2);
    add_background_object(create_dvcoral6_973(12200, 2904), 2);
    add_background_object(create_dvcoral5_972(11936, 2808), 2);
    add_background_object(create_dvcoral3_976(12208, 2952), 2);
    add_background_object(create_dvcoral3_976(12088, 2960), 2);
    add_background_object(create_dvcoral4_977(11896, 2888), 2);
    add_background_object(create_dvcoral2_974(11984, 2832), 2);
    add_background_object(create_dvcoral1_975(11728, 2912), 2);
    add_background_object(create_dvbackrock3_881(11912, 2880), 2);
    add_background_object(create_dvbackrock1_882(12304, 2792), 2);
    add_background_object(create_dvbackrock3_881(12248, 2880), 2);
    add_background_object(create_dvbackrock2_890(12576, 1880), 2);
    add_background_object(create_dvtree3_897(12384, 2528), 2);
    add_background_object(create_dvtree1_893(12312, 2576), 2);
    add_background_object(create_dvtree3_897(12176, 2520), 2);
    add_background_object(create_dvtree1_893(11968, 2552), 2);
    add_background_object(create_dvtree3_897(11816, 2528), 2);
    add_background_object(create_dvbackrock3_881(11832, 2640), 2);
    add_background_object(create_dvbackwall_866(12568, 1992), 2);
    add_background_object(create_dvtree6_871(12584, 2000), 2);
    add_background_object(create_dvtree6_871(12680, 2016), 2);
    add_background_object(create_dvrockceiling_891(12328, 2720), 2);
    add_background_object(create_dvbackrock2_890(4680, 552), 2);
    add_background_object(create_dvtree5_879(4272, 408), 2);
    add_background_object(create_dvtree6_871(4256, 464), 2);
    add_background_object(create_dvtree6_871(4536, 520), 2);
    add_background_object(create_dvtree6_871(4320, 464), 2);
    add_background_object(create_levelbackdrop02_875(4912, 784), 2);
    add_background_object(create_levelbackdrop02_875(4848, 784), 2);
    add_background_object(create_dvwalledge2_978(11776, 2976), 2);
    add_background_object(create_dvbackrock2_890(11520, 2888), 2);
    add_background_object(create_dvbackrock1_882(11296, 2856), 2);
    add_background_object(create_dvtree3_897(10472, 2352), 2);
    add_background_object(create_dvtree1_893(11296, 2560), 2);
    add_background_object(create_dvtree3_897(11168, 2504), 2);
    add_background_object(create_dvbackrock2_890(11200, 2624), 2);
    add_background_object(create_dvtree1_893(11112, 2560), 2);
    add_background_object(create_dvbackrock1_882(10664, 2528), 2);
    add_background_object(create_dvtree1_893(10776, 2448), 2);
    add_background_object(create_dvtree3_897(10936, 2520), 2);
    add_background_object(create_dvtree5_879(10128, 2424), 2);
    add_background_object(create_dvtree5_879(10088, 2464), 2);
    add_background_object(create_dvbackrock3_881(10472, 1464), 2);
    add_background_object(create_dvtree1_893(10264, 1336), 2);
    add_background_object(create_dvtree3_897(10112, 1408), 2);
    add_background_object(create_dvtree1_893(9848, 2560), 2);
    add_background_object(create_dvtree3_897(9696, 2520), 2);
    add_background_object(create_dvbackwall_866(9104, 2176), 2);
    add_background_object(create_dvtree6_871(9312, 2232), 2);
    add_background_object(create_dvtree6_871(9384, 2240), 2);
    add_background_object(create_dvtree6_871(10088, 2512), 2);
    add_background_object(create_dvtree6_871(10472, 2512), 2);
    add_background_object(create_dvtree6_871(10392, 2528), 2);
    add_background_object(create_dvtree6_871(10168, 2504), 2);
    add_background_object(create_dvbackwall_866(10200, 2248), 2);
    add_background_object(create_levelbackdrop9_878(11320, 2720), 2);
    add_background_object(create_levelbackdrop02_875(11096, 2736), 2);
    add_background_object(create_levelbackdrop12_880(11120, 2712), 2);
    add_background_object(create_dvwall3_873(10680, 1760), 2);
    add_background_object(create_dvbackrock1_882(9856, 672), 2);
    add_background_object(create_dvbackwall_866(9880, 816), 2);
    add_background_object(create_levelbackdrop02_875(10168, 2464), 2);
    add_background_object(create_levelbackdrop02_875(10232, 2464), 2);
    add_background_object(create_levelbackdrop02_875(10296, 2464), 2);
    add_background_object(create_levelbackdrop02_875(10360, 2464), 2);
    add_background_object(create_dvwall2_886(9784, 1104), 2);
    add_background_object(create_levelbackdrop02_875(9864, 1296), 2);
    add_background_object(create_levelbackdrop02_875(9840, 2688), 2);
    add_background_object(create_levelbackdrop02_875(9904, 2688), 2);
    add_background_object(create_levelbackdrop02_875(9776, 2680), 2);
    add_background_object(create_dvceilingcurveleft_979(9816, 1360), 2);
    add_background_object(create_levelbackdrop02_875(9664, 1032), 2);
    add_background_object(create_levelbackdrop13_884(9728, 1032), 2);
    add_background_object(create_dvwall1_482(9560, 1096), 2);
    add_background_object(create_dvwall6_885(9560, 904), 2);
    add_background_object(create_dvtree2_883(9248, 736), 2);
    add_background_object(create_dvbackrock2_890(8200, 808), 2);
    add_background_object(create_dvtree4_874(8544, 712), 2);
    add_background_object(create_dvgeyserback_980(8640, 776), 2);
    add_background_object(create_dvgeyserback_980(8352, 744), 2);
    add_background_object(create_dvbackrock3_881(4376, 896), 2);
    add_background_object(create_dvtree2_883(4424, 712), 2);
    add_background_object(create_dvbackrock1_882(7104, 1088), 2);
    add_background_object(create_dvbackrock1_882(6832, 1088), 2);
    add_background_object(create_dvbackrock3_881(6312, 856), 2);
    add_background_object(create_dvbackrock2_890(6568, 1048), 2);
    add_background_object(create_dvbackrock1_882(6632, 1088), 2);
    add_background_object(create_dvtree5_879(6600, 1128), 2);
    add_background_object(create_dvtree5_879(6696, 1168), 2);
    add_background_object(create_dvtree4_874(6704, 712), 2);
    add_background_object(create_levelbackdrop10_898(7328, 1176), 2);
    add_background_object(create_dvwall7_892(7384, 1096), 2);
    add_background_object(create_dvbackwall_866(7872, 936), 2);
    add_background_object(create_dvwall1_482(8024, 912), 2);
    add_background_object(create_levelbackdrop02_875(8000, 888), 2);
    add_background_object(create_levelbackdrop02_875(7936, 888), 2);
    add_background_object(create_levelbackdrop02_875(7872, 888), 2);
    add_background_object(create_levelbackdrop02_875(8000, 952), 2);
    add_background_object(create_levelbackdrop02_875(7936, 952), 2);
    add_background_object(create_levelbackdrop02_875(7872, 952), 2);
    add_background_object(create_dvwall1_482(7256, 1224), 2);
    add_background_object(create_dvwall1_482(7256, 1416), 2);
    add_background_object(create_dvwall1_482(7512, 1104), 2);
    add_background_object(create_dvwall1_482(7512, 1296), 2);
    add_background_object(create_dvtree6_871(6976, 944), 2);
    add_background_object(create_levelbackdrop02_875(6792, 960), 2);
    add_background_object(create_levelbackdrop02_875(6848, 896), 2);
    add_background_object(create_levelbackdrop02_875(6912, 896), 2);
    add_background_object(create_levelbackdrop02_875(6976, 896), 2);
    add_background_object(create_dvwall1_482(6232, 912), 2);
    add_background_object(create_levelbackdrop02_875(6520, 1024), 2);
    add_background_object(create_levelbackdrop02_875(6520, 1088), 2);
    add_background_object(create_dvtree5_879(6968, 1192), 2);
    add_background_object(create_dvbackrock2_890(5928, 864), 2);
    add_background_object(create_dvtree4_874(5760, 752), 2);
    add_background_object(create_dvbackrock3_881(5824, 912), 2);
    add_background_object(create_dvbackwall_866(5344, 832), 2);
    add_background_object(create_dvtree6_871(5528, 816), 2);
    add_background_object(create_dvtree6_871(5616, 800), 2);
    add_background_object(create_dvbackwall_866(5344, 1024), 2);
    add_background_object(create_dvbackrock3_881(5472, 1096), 2);
    add_background_object(create_dvtree5_879(5696, 1304), 2);
    add_background_object(create_dvbackwall_866(5344, 1456), 2);
    add_background_object(create_dvtree1_893(5472, 1456), 2);
    add_background_object(create_dvbackwall_866(5672, 1352), 2);
    add_background_object(create_dvtree1_893(6024, 1488), 2);
    add_background_object(create_levelbackdrop02_875(5600, 728), 2);
    add_background_object(create_levelbackdrop12_880(5664, 736), 2);
    add_background_object(create_levelbackdrop9_878(5736, 776), 2);
    add_background_object(create_levelbackdrop02_875(5672, 776), 2);
    add_background_object(create_levelbackdrop10_898(5344, 792), 2);
    add_background_object(create_dvbackwall_866(6096, 1112), 2);
    add_background_object(create_dvbackwall_866(6096, 1304), 2);
    add_background_object(create_levelbackdrop8_894(5816, 1000), 2);
    add_background_object(create_dvrockceiling_891(5976, 1136), 2);
    add_background_object(create_levelbackdrop13_884(4976, 784), 2);
    add_background_object(create_dvwall6_885(2888, 520), 2);
    add_background_object(create_dvwall6_885(1256, 768), 2);
    add_background_object(create_dvwall6_885(5080, 1288), 2);
    add_background_object(create_dvwall6_885(5864, 1496), 2);
    add_background_object(create_dvwall6_885(4848, 672), 2);
    add_background_object(create_levelbackdrop9_878(6000, 1352), 2);
    add_background_object(create_dvrockceiling_891(6000, 1360), 2);
    add_background_object(create_dvbackwall_866(5344, 1264), 2);
    add_background_object(create_dvwall1_482(5976, 1608), 2);
    add_background_object(create_dvfloorcurvesmallright_888(6168, 1536), 2);
    add_background_object(create_dvwall1_482(5424, 1160), 2);
    add_background_object(create_dvwall3_873(5736, 1488), 2);
    add_background_object(create_dvwall7_892(5608, 1480), 2);
    add_background_object(create_dvwall1_482(5464, 1608), 2);
    add_background_object(create_dvbackrock2_890(5208, 1456), 2);
    add_background_object(create_dvwall1_482(4984, 1608), 2);
    add_background_object(create_dvwall1_482(4968, 1416), 2);
    add_background_object(create_levelbackdrop02_875(4344, 952), 2);
    add_background_object(create_levelbackdrop8_894(4280, 952), 2);
    add_background_object(create_levelbackdrop7_917(4064, 912), 2);
    add_background_object(create_dvbackwall_866(3792, 904), 2);
    add_background_object(create_dvceilingoverlay_915(3936, 1192), 2);
    add_background_object(create_dvwall2_886(3960, 1016), 2);
    add_background_object(create_dvbackwall_866(3208, 1384), 2);
    add_background_object(create_levelbackdrop02_875(3192, 1416), 2);
    add_background_object(create_levelbackdrop7_917(5080, 800), 2);
    add_background_object(create_levelbackdrop7_917(5288, 800), 2);
    add_background_object(create_levelbackdrop02_875(5048, 1296), 2);
    add_background_object(create_dvtree5_879(4128, 1136), 2);
    add_background_object(create_dvbackwall_866(3792, 712), 2);
    add_background_object(create_dvflatceiling_981(4088, 624), 2);
    add_background_object(create_dvflatceiling_981(4144, 1192), 2);
    add_background_object(create_levelbackdrop02_875(4024, 952), 2);
    add_background_object(create_levelbackdrop02_875(3960, 952), 2);
    add_background_object(create_dvwall1_482(4792, 1312), 2);
    add_background_object(create_dvrockceiling_891(4056, 1192), 2);
    add_background_object(create_dvrockceiling_891(4184, 1192), 2);
    add_background_object(create_dvrockceiling_891(4248, 1192), 2);
    add_background_object(create_dvtree6_871(3616, 1176), 2);
    add_background_object(create_dvtree6_871(3496, 1200), 2);
    add_background_object(create_dvtree6_871(3432, 1184), 2);
    add_background_object(create_dvwall1_482(3704, 632), 2);
    add_background_object(create_dvwall1_482(1888, 1280), 2);
    add_background_object(create_dvwall1_482(1912, 1344), 2);
    add_background_object(create_dvwall1_482(1632, 1280), 2);
    add_background_object(create_dvbackrock3_881(4552, 1384), 2);
    add_background_object(create_dvtree5_879(4496, 1392), 2);
    add_background_object(create_dvwall1_482(4472, 1432), 2);
    add_background_object(create_dvtree3_897(4008, 1496), 2);
    add_background_object(create_dvbackrock3_881(4152, 1504), 2);
    add_background_object(create_dvtree1_893(4112, 1408), 2);
    add_background_object(create_dvbackrock2_890(3528, 1480), 2);
    add_background_object(create_dvbackrock3_881(3728, 1560), 2);
    add_background_object(create_dvtree3_897(3728, 1448), 2);
    add_background_object(create_dvtree1_893(3664, 1480), 2);
    add_background_object(create_dvtree1_893(3448, 1384), 2);
    add_background_object(create_dvbackwall_866(3208, 1192), 2);
    add_background_object(create_dvbackwall_866(3208, 1000), 2);
    add_background_object(create_levelbackdrop02_875(4296, 1544), 2);
    add_background_object(create_levelbackdrop09_899(4104, 1560), 2);
    add_background_object(create_levelbackdrop02_875(4168, 1544), 2);
    add_background_object(create_levelbackdrop02_875(4232, 1544), 2);
    add_background_object(create_dvwall1_482(3704, 1608), 2);
    add_background_object(create_dvwall1_482(3960, 1608), 2);
    add_background_object(create_dvtree5_879(2448, 1072), 2);
    add_background_object(create_dvbackrock1_882(2616, 1024), 2);
    add_background_object(create_dvtree5_879(2608, 1088), 2);
    add_background_object(create_dvbackrock2_890(2496, 1056), 2);
    add_background_object(create_dvbackrock3_881(2680, 1112), 2);
    add_background_object(create_dvbackrock3_881(2544, 1096), 2);
    add_background_object(create_dvbackrock3_881(2776, 496), 2);
    add_background_object(create_dvbackrock1_882(3328, 680), 2);
    add_background_object(create_dvbackrock2_890(2984, 856), 2);
    add_background_object(create_levelbackdrop02_875(2952, 616), 2);
    add_background_object(create_levelbackdrop02_875(2888, 616), 2);
    add_background_object(create_levelbackdrop13_884(3016, 616), 2);
    add_background_object(create_dvwall9_889(2760, 552), 2);
    add_background_object(create_dvwalledge1_887(3376, 808), 2);
    add_background_object(create_dvbackwall_866(1784, 904), 2);
    add_background_object(create_dvbackwall_866(1640, 912), 2);
    add_background_object(create_dvbackwall_866(1712, 840), 2);
    add_background_object(create_dvbackwall_866(1712, 1032), 2);
    add_background_object(create_dvbackrock3_881(1640, 552), 2);
    add_background_object(create_dvbackrock3_881(1600, 576), 2);
    add_background_object(create_dvbackrock3_881(1680, 584), 2);
    add_background_object(create_dvbackrock1_882(1760, 640), 2);
    add_background_object(create_dvtree5_879(1832, 704), 2);
    add_background_object(create_levelbackdrop02_875(3064, 952), 2);
    add_background_object(create_levelbackdrop02_875(3128, 952), 2);
    add_background_object(create_levelbackdrop02_875(3000, 952), 2);
    add_background_object(create_levelbackdrop02_875(2936, 952), 2);
    add_background_object(create_dvwalledge2_978(2552, 1128), 2);
    add_background_object(create_levelbackdrop02_875(2312, 960), 2);
    add_background_object(create_dvtree4_874(1336, 824), 2);
    add_background_object(create_dvbackrock1_882(1304, 832), 2);
    add_background_object(create_dvbackrock1_882(1392, 904), 2);
    add_background_object(create_dvbackrock3_881(1440, 1024), 2);
    add_background_object(create_dvtree5_879(1984, 1048), 2);
    add_background_object(create_dvbackrock2_890(1520, 1000), 2);
    add_background_object(create_dvtree5_879(1904, 1024), 2);
    add_background_object(create_dvtree5_879(1768, 1064), 2);
    add_background_object(create_dvtree5_879(1848, 1040), 2);
    add_background_object(create_dvtree6_871(1720, 832), 2);
    add_background_object(create_dvtree6_871(1928, 872), 2);
    add_background_object(create_dvtree6_871(1632, 880), 2);
    add_background_object(create_dvtree6_871(1672, 840), 2);
    add_background_object(create_dvtree6_871(1864, 824), 2);
    add_background_object(create_dvwalledge2_978(1976, 896), 2);
    add_background_object(create_dvwalledge1_887(1688, 896), 2);
    add_background_object(create_dvwall2_886(1128, 784), 2);
    add_background_object(create_dvbackrock3_881(888, 1176), 2);
    add_background_object(create_dvtree5_879(864, 1160), 2);
    add_background_object(create_dvbackrock3_881(808, 1160), 2);
    add_background_object(create_dvtree4_874(952, 904), 2);
    add_background_object(create_dvtree2_883(312, 912), 2);
    add_background_object(create_dvbackwall_866(624, 992), 2);
    add_background_object(create_dvbackrock1_882(504, 1032), 2);
    add_background_object(create_dvtree5_879(512, 1096), 2);
    add_background_object(create_levelbackdrop02_875(512, 1096), 2);
    add_background_object(create_dvwall1_482(1120, 1280), 2);
    add_background_object(create_dvwall1_482(1064, 1088), 2);
    add_background_object(create_dvwall3_873(1056, 1216), 2);
    add_background_object(create_levelbackdrop02_875(832, 1128), 2);
    add_background_object(create_levelbackdrop02_875(832, 1192), 2);
    add_background_object(create_levelbackdrop12_880(816, 1096), 2);
    add_background_object(create_levelbackdrop12_880(768, 1080), 2);
    add_background_object(create_levelbackdrop02_875(704, 1128), 2);
    add_background_object(create_levelbackdrop02_875(704, 1064), 2);
    add_background_object(create_dvwall1_482(800, 1216), 2);
    add_background_object(create_dvwall1_482(544, 1160), 2);
    add_background_object(create_dvtree6_871(1776, 816), 2);
    add_background_object(create_dvwall8_877(1968, 832), 2);
    add_background_object(create_levelbackdrop12_880(1512, 1056), 2);
    add_background_object(create_levelbackdrop02_875(1448, 1056), 2);
    add_background_object(create_levelbackdrop02_875(1384, 992), 2);
    add_background_object(create_levelbackdrop02_875(1352, 928), 2);
    add_background_object(create_dvwall1_482(288, 1088), 2);
    add_background_object(create_dvwall1_482(0, 576), 2);
    add_background_object(create_dvbackwall_866(-40, 960), 2);
    add_background_object(create_dvwall1_482(32, 1024), 2);
    add_background_object(create_dvwall1_482(32, 1216), 2);
    add_background_object(create_dvwall1_482(1128, 896), 2);
    add_background_object(create_dvwall1_482(1384, 1088), 2);
    add_background_object(create_dvwall1_482(1640, 1088), 2);
    add_background_object(create_dvwall3_873(-96, 1024), 2);
    add_background_object(create_dvwall3_873(-96, 1216), 2);
    add_background_object(create_dvhalfpipe2_868(7648, 696), 2);
    add_background_object(create_dvrockslope4_901(0, 1008), 2);
    add_background_object(create_dvrockslope4_900(128, 1008), 2);
    add_background_object(create_dvbackwall_866(-40, 768), 2);
    add_background_object(create_dvrockceiling_891(0, 752), 2);
    add_background_object(create_dvceilingoverlay_915(0, 760), 2);
    add_background_object(create_dvrockslope4_900(-120, 1008), 2);
    add_background_object(create_dvwalledge2_978(272, 1024), 2);
    add_background_object(create_dvrockedge2_904(256, 1008), 2);
    add_background_object(create_dvwall6_982(232, 1088), 2);
    add_background_object(create_dvrockedge1_905(256, 1088), 2);
    add_background_object(create_levelbackdrop14_983(1384, 864), 2);
    add_background_object(create_dvwall4_485(1272, 880), 2);
    add_background_object(create_dvwall6_982(1304, 992), 2);
    add_background_object(create_dvwall2_886(2184, 960), 2);
    add_background_object(create_levelbackdrop02_875(1864, 1088), 2);
    add_background_object(create_levelbackdrop02_875(1928, 1088), 2);
    add_background_object(create_levelbackdrop02_875(1992, 1088), 2);
    add_background_object(create_levelbackdrop02_875(2056, 1088), 2);
    add_background_object(create_levelbackdrop02_875(2120, 1088), 2);
    add_background_object(create_dvwall1_482(1896, 1152), 2);
    add_background_object(create_dvwall1_482(2120, 1152), 2);
    add_background_object(create_dvwall6_982(1816, 1088), 2);
    add_background_object(create_dvwall6_982(1824, 1176), 2);
    add_background_object(create_dvwall4_485(1936, 1136), 2);
    add_background_object(create_dvwall4_485(2032, 1136), 2);
    add_background_object(create_dvwall4_485(2144, 1136), 2);
    add_background_object(create_dvfloorcurvesmallright_888(2120, 1024), 2);
    add_background_object(create_dvwall6_982(2168, 1056), 2);
    add_background_object(create_dvwalledge1_887(2184, 984), 2);
    add_background_object(create_dvrockedge2_904(2104, 1088), 2);
    add_background_object(create_dvwalledge1_887(2184, 960), 2);
    add_background_object(create_dvrockedge1_905(2184, 944), 2);
    add_background_object(create_levelbackdrop14_983(1416, 928), 2);
    add_background_object(create_levelbackdrop13_884(1448, 992), 2);
    add_background_object(create_dvwall4_485(1368, 1048), 2);
    add_background_object(create_dvrockslope4_900(1592, 1080), 2);
    add_background_object(create_dvrockslope4_901(1720, 1080), 2);
    add_background_object(create_dvrockslope4_900(1848, 1080), 2);
    add_background_object(create_dvrockslope4_901(1976, 1080), 2);
    add_background_object(create_dvwall6_982(1440, 1080), 2);
    add_background_object(create_dvrockedge1_905(1560, 1088), 2);
    add_background_object(create_dvceilingcurveleft_979(1712, 832), 2);
    add_background_object(create_dvceilingcurveright_984(1840, 832), 2);
    add_background_object(create_dvwall9_889(1584, 832), 2);
    add_background_object(create_dvwall1_482(288, 1280), 2);
    add_background_object(create_dvwall9_889(1096, 792), 2);
    add_background_object(create_levelbackdrop7_917(880, 744), 2);
    add_background_object(create_levelbackdrop7_917(1088, 744), 2);
    add_background_object(create_dvrockedge1_905(1096, 776), 2);
    add_background_object(create_dvwalledge2_978(240, 704), 2);
    add_background_object(create_dvrockceiling_891(128, 752), 2);
    add_background_object(create_dvceilingoverlay_915(128, 760), 2);
    add_background_object(create_dvwalledge2_978(240, 640), 2);
    add_background_object(create_dvwalledge2_978(240, 576), 2);
    add_background_object(create_dvwall1_482(0, 384), 2);
    add_background_object(create_dvwalledge2_978(240, 512), 2);
    add_background_object(create_dvwalledge2_978(240, 448), 2);
    add_background_object(create_dvwalledge2_978(240, 384), 2);
    add_background_object(create_dvwalledge1_887(1128, 864), 2);
    add_background_object(create_dvwalledge1_887(1128, 928), 2);
    add_background_object(create_dvwalledge1_887(1128, 1024), 2);
    add_background_object(create_levelbackdrop02_875(712, 792), 2);
    add_background_object(create_levelbackdrop02_875(712, 856), 2);
    add_background_object(create_dvwall9_889(584, 792), 2);
    add_background_object(create_dvwall8_877(776, 792), 2);
    add_background_object(create_dvwall4_485(680, 792), 2);
    add_background_object(create_dvrockedge2_904(872, 776), 2);
    add_background_object(create_dvrockslope4_900(616, 768), 2);
    add_background_object(create_dvrockslope4_901(744, 768), 2);
    add_background_object(create_dvrockedge1_905(584, 776), 2);
    add_background_object(create_dvfloorcurvesmallright_888(1000, 1144), 2);
    add_background_object(create_dvrockedge2_904(672, 1152), 2);
    add_background_object(create_dvrockedge1_905(896, 1208), 2);
    add_background_object(create_dvwall4_485(736, 1112), 2);
    add_background_object(create_dvrockslope11_906(736, 1048), 2);
    add_background_object(create_dvwall6_982(696, 1224), 2);
    add_background_object(create_dvwalledge1_887(704, 1112), 2);
    add_background_object(create_dvwalledge1_887(704, 1056), 2);
    add_background_object(create_dvrockedge1_905(704, 1048), 2);
    add_background_object(create_dvwalledge2_978(880, 1152), 2);
    add_background_object(create_dvwalledge2_978(880, 1120), 2);
    add_background_object(create_dvrockedge2_904(864, 1112), 2);
    add_background_object(create_dvwall4_485(1024, 1200), 2);
    add_background_object(create_dvwall1_482(544, 1352), 2);
    add_background_object(create_dvwalledge1_887(1128, 976), 2);
    add_background_object(create_dvrockedge2_904(992, 1208), 2);
    add_background_object(create_dvrockslope1_896(928, 1208), 2);
    add_background_object(create_dvwall4_485(1128, 1056), 2);
    add_background_object(create_dvrockedge2_904(1096, 1072), 2);
    add_background_object(create_dvwalledge1_887(1064, 1080), 2);
    add_background_object(create_dvwalledge1_887(1064, 1112), 2);
    add_background_object(create_dvrockedge1_905(1064, 1072), 2);
    add_background_object(create_dvwall6_982(432, 1104), 2);
    add_background_object(create_dvwall4_485(472, 1208), 2);
    add_background_object(create_dvrockedge1_905(576, 1152), 2);
    add_background_object(create_dvrockslope1_896(608, 1152), 2);
    add_background_object(create_dvwalledge2_978(560, 1096), 2);
    add_background_object(create_dvrockedge2_904(544, 1080), 2);
    add_background_object(create_dvwall4_485(1160, 864), 2);
    add_background_object(create_dvwall6_982(1176, 784), 2);
    add_background_object(create_dvrockslope4_900(1128, 768), 2);
    add_background_object(create_dvrockslope7_985(1256, 768), 2);
    add_background_object(create_dvwall4_485(1288, 1072), 2);
    add_background_object(create_dvwall6_982(1280, 1160), 2);
    add_background_object(create_dvwall1_482(1584, 640), 2);
    add_background_object(create_dvwall6_982(1592, 736), 2);
    add_background_object(create_levelbackdrop02_875(1840, 768), 2);
    add_background_object(create_levelbackdrop02_875(1904, 768), 2);
    add_background_object(create_levelbackdrop02_875(1968, 768), 2);
    add_background_object(create_levelbackdrop02_875(2032, 768), 2);
    add_background_object(create_dvfloorcurvesmallleft_918(1840, 688), 2);
    add_background_object(create_dvwalledge2_978(1824, 640), 2);
    add_background_object(create_dvwalledge2_978(1824, 656), 2);
    add_background_object(create_dvwall4_485(1944, 768), 2);
    add_background_object(create_dvrockedge1_905(1904, 752), 2);
    add_background_object(create_dvrockedge2_904(2064, 760), 2);
    add_background_object(create_dvrockslope4_901(1936, 752), 2);
    add_background_object(create_dvwall6_982(1720, 704), 2);
    add_background_object(create_dvwalledge1_887(1584, 640), 2);
    add_background_object(create_dvwalledge1_887(1584, 704), 2);
    add_background_object(create_dvwalledge1_887(1584, 768), 2);
    add_background_object(create_dvrockedge2_904(1808, 632), 2);
    add_background_object(create_dvrockslope4_901(1680, 624), 2);
    add_background_object(create_dvrockedge1_905(1584, 624), 2);
    add_background_object(create_dvrockslope1_896(1616, 624), 2);
    add_background_object(create_levelbackdrop02_875(2312, 1088), 2);
    add_background_object(create_levelbackdrop02_875(2312, 1024), 2);
    add_background_object(create_dvwall4_485(2232, 968), 2);
    add_background_object(create_dvrockslope4_901(2216, 944), 2);
    add_background_object(create_dvwall1_482(2376, 1144), 2);
    add_background_object(create_dvwall1_482(2632, 1152), 2);
    add_background_object(create_dvwall4_485(2248, 1080), 2);
    add_background_object(create_dvwalledge2_978(2360, 1088), 2);
    add_background_object(create_dvwalledge2_978(2360, 1024), 2);
    add_background_object(create_dvwalledge2_978(2360, 960), 2);
    add_background_object(create_dvrockedge2_904(2344, 952), 2);
    add_background_object(create_dvladder_914(2376, 952), 2);
    add_background_object(create_dvladder_914(2376, 984), 2);
    add_background_object(create_dvladder_914(2376, 1016), 2);
    add_background_object(create_dvladder_914(2376, 1048), 2);
    add_background_object(create_dvrockedge1_905(2376, 1128), 2);
    add_background_object(create_dvrockslope4_900(2408, 1120), 2);
    add_background_object(create_dvrockedge2_904(2536, 1120), 2);
    add_background_object(create_dvrockslope2_910(2728, 1144), 2);
    add_background_object(create_dvrockedge2_904(2856, 1144), 2);
    add_background_object(create_dvwall1_482(2936, 1152), 2);
    add_background_object(create_dvwall1_482(2936, 1344), 2);
    add_background_object(create_dvwall1_482(2936, 1536), 2);
    add_background_object(create_dvwall1_482(2680, 1344), 2);
    add_background_object(create_dvwalledge1_887(2936, 1160), 2);
    add_background_object(create_dvrockedge1_905(2936, 1144), 2);
    add_background_object(create_dvwall4_485(2848, 1184), 2);
    add_background_object(create_dvrockedge1_905(2880, 1176), 2);
    add_background_object(create_dvrockedge2_904(2912, 1176), 2);
    add_background_object(create_dvwall6_982(2848, 1280), 2);
    add_background_object(create_dvwall1_482(2424, 1344), 2);
    add_background_object(create_dvwall1_482(2168, 1344), 2);
    add_background_object(create_dvrockslope2_910(2968, 1144), 2);
    add_background_object(create_dvrockslope4_900(2968, 936), 2);
    add_background_object(create_dvrockedge2_904(3160, 936), 2);
    add_background_object(create_dvrockslope1_896(3096, 936), 2);
    add_background_object(create_dvwall1_482(3192, 824), 2);
    add_background_object(create_dvwall4_485(2584, 1240), 2);
    add_background_object(create_dvwall6_982(2568, 1168), 2);
    add_background_object(create_dvrockslope2_910(2600, 1144), 2);
    add_background_object(create_dvrockedge1_905(2568, 1144), 2);
    add_background_object(create_dvwall6_982(2488, 1248), 2);
    add_background_object(create_dvwall6_982(2360, 1280), 2);
    add_background_object(create_dvwall4_485(2440, 1304), 2);
    add_background_object(create_dvwalledge1_887(3192, 880), 2);
    add_background_object(create_dvwalledge1_887(3192, 824), 2);
    add_background_object(create_dvrockedge1_905(3192, 808), 2);
    add_background_object(create_dvrockslope4_900(3224, 800), 2);
    add_background_object(create_dvrockedge2_904(3352, 800), 2);
    add_background_object(create_levelbackdrop02_875(3384, 760), 2);
    add_background_object(create_levelbackdrop02_875(3384, 720), 2);
    add_background_object(create_dvwall1_482(3448, 824), 2);
    add_background_object(create_dvwall1_482(3704, 824), 2);
    add_background_object(create_dvwall1_482(3704, 1016), 2);
    add_background_object(create_dvwall1_482(3448, 1016), 2);
    add_background_object(create_dvwall1_482(3448, 632), 2);
    add_background_object(create_dvwalledge1_887(3384, 760), 2);
    add_background_object(create_dvwalledge1_887(3384, 720), 2);
    add_background_object(create_dvwall6_982(3400, 720), 2);
    add_background_object(create_dvrockedge1_905(3384, 712), 2);
    add_background_object(create_dvrockedge2_904(3416, 712), 2);
    add_background_object(create_dvwalledge1_887(3448, 672), 2);
    add_background_object(create_dvwalledge1_887(3448, 632), 2);
    add_background_object(create_dvwall1_482(3448, 440), 2);
    add_background_object(create_dvwalledge1_887(3448, 568), 2);
    add_background_object(create_dvwalledge1_887(3448, 504), 2);
    add_background_object(create_dvwalledge1_887(3448, 440), 2);
    add_background_object(create_dvrockedge1_905(2760, 544), 2);
    add_background_object(create_dvrockceiling_891(2872, 656), 2);
    add_background_object(create_dvrockceiling_891(3000, 656), 2);
    add_background_object(create_dvrockceiling_891(3128, 656), 2);
    add_background_object(create_dvrockslope4_901(3096, 648), 2);
    add_background_object(create_dvrockedge2_904(3224, 656), 2);
    add_background_object(create_dvwall6_982(2848, 552), 2);
    add_background_object(create_dvrockslope9_902(2968, 552), 2);
    add_background_object(create_dvrockedge1_905(2872, 520), 2);
    add_background_object(create_dvrockslope5_912(2904, 520), 2);
    add_background_object(create_dvrockedge2_904(2856, 544), 2);
    add_background_object(create_dvrockslope1_896(2792, 544), 2);
    add_background_object(create_dvceilingoverlay_915(3128, 656), 2);
    add_background_object(create_dvceilingoverlay_915(3000, 656), 2);
    add_background_object(create_dvceilingoverlay_915(2872, 656), 2);
    add_background_object(create_dvrockslope1_896(480, 1080), 2);
    add_background_object(create_switchbase_986(2888, 1160), 2);
    add_background_object(create_levelbackdrop02_875(3192, 1160), 2);
    add_background_object(create_dvwall1_482(3192, 1432), 2);
    add_background_object(create_dvrockedge1_905(3256, 1416), 2);
    add_background_object(create_dvwalledge2_978(3432, 1432), 2);
    add_background_object(create_dvrockedge2_904(3416, 1416), 2);
    add_background_object(create_dvwalledge2_978(3432, 1480), 2);
    add_background_object(create_dvwalledge2_978(3240, 1160), 2);
    add_background_object(create_dvrockedge2_904(3224, 1152), 2);
    add_background_object(create_dvrockceiling_891(3032, 1000), 2);
    add_background_object(create_dvrockceiling_891(3160, 1000), 2);
    add_background_object(create_dvrockceiling_891(3248, 1000), 2);
    add_background_object(create_dvrockceiling_891(3424, 1192), 2);
    add_background_object(create_dvrockceiling_891(3808, 1192), 2);
    add_background_object(create_dvceilingoverlay_915(3032, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(3160, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(3424, 1192), 2);
    add_background_object(create_dvceilingoverlay_915(3808, 1192), 2);
    add_background_object(create_dvwall1_482(3192, 1608), 2);
    add_background_object(create_levelbackdrop12_880(3640, 1576), 2);
    add_background_object(create_dvwall1_482(3448, 1608), 2);
    add_background_object(create_levelbackdrop12_880(3576, 1544), 2);
    add_background_object(create_levelbackdrop02_875(3512, 1544), 2);
    add_background_object(create_levelbackdrop02_875(3448, 1544), 2);
    add_background_object(create_dvwall6_982(3536, 1576), 2);
    add_background_object(create_dvwall4_485(3424, 1544), 2);
    add_background_object(create_dvwall1_482(4216, 1608), 2);
    add_background_object(create_geyserbase2_987(3992, 1592), 2);
    add_background_object(create_dvwall3_873(4344, 1432), 2);
    add_background_object(create_dvwall4_485(4272, 1536), 2);
    add_background_object(create_dvwall6_982(4168, 1584), 2);
    add_background_object(create_dvwall4_485(4072, 1592), 2);
    add_background_object(create_dvrockceiling_891(3936, 1192), 2);
    add_background_object(create_dvwalledge2_978(3944, 888), 2);
    add_background_object(create_dvrockceiling_891(3320, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(3288, 1000), 2);
    add_background_object(create_dvwalledge1_887(3448, 1016), 2);
    add_background_object(create_dvwalledge1_887(3448, 1080), 2);
    add_background_object(create_dvwalledge1_887(3448, 1144), 2);
    add_background_object(create_levelbackdrop02_875(3192, 1224), 2);
    add_background_object(create_dvwalledge2_978(3240, 1224), 2);
    add_background_object(create_levelbackdrop02_875(3192, 1288), 2);
    add_background_object(create_levelbackdrop02_875(3192, 1352), 2);
    add_background_object(create_dvwall4_485(3136, 1408), 2);
    add_background_object(create_dvwall6_982(3128, 1296), 2);
    add_background_object(create_dvwalledge2_978(3240, 1352), 2);
    add_background_object(create_dvwalledge2_978(3240, 1288), 2);
    add_background_object(create_dvwall4_485(3112, 1176), 2);
    add_background_object(create_dvrockslope4_901(3096, 1144), 2);
    add_background_object(create_dvwall4_485(3120, 1520), 2);
    add_background_object(create_dvladder_914(3256, 1184), 2);
    add_background_object(create_dvladder_914(3256, 1216), 2);
    add_background_object(create_dvladder_914(3256, 1248), 2);
    add_background_object(create_dvrockceiling_891(3296, 1192), 2);
    add_background_object(create_dvceilingoverlay_915(3296, 1192), 2);
    add_background_object(create_dvrockedge1_905(3296, 1184), 2);
    add_background_object(create_dvrockslope2_910(3320, 1184), 2);
    add_background_object(create_dvrockedge2_904(3440, 1184), 2);
    add_background_object(create_dvladder_914(3256, 1280), 2);
    add_background_object(create_dvladder_914(3256, 1312), 2);
    add_background_object(create_dvwalledge1_887(4344, 1440), 2);
    add_background_object(create_dvrockedge1_905(4344, 1424), 2);
    add_background_object(create_dvwalledge1_887(4344, 1504), 2);
    add_background_object(create_geyserbase_988(4376, 1328), 2);
    add_background_object(create_dvwall1_482(4472, 1608), 2);
    add_background_object(create_dvrockslope4_900(4568, 1416), 2);
    add_background_object(create_dvwall1_482(4592, 848), 2);
    add_background_object(create_dvwalledge1_887(4592, 976), 2);
    add_background_object(create_dvrockceiling_891(4592, 1024), 2);
    add_background_object(create_dvwalledge1_887(4592, 848), 2);
    add_background_object(create_dvceilingoverlay_915(4592, 1024), 2);
    add_background_object(create_dvwalledge2_978(3944, 760), 2);
    add_background_object(create_dvwall1_482(3448, 248), 2);
    add_background_object(create_dvwalledge1_887(3448, 376), 2);
    add_background_object(create_dvwalledge1_887(3448, 312), 2);
    add_background_object(create_dvwalledge1_887(3448, 248), 2);
    add_background_object(create_dvwall1_482(3448, 56), 2);
    add_background_object(create_dvwalledge1_887(3448, 184), 2);
    add_background_object(create_dvwalledge1_887(3448, 120), 2);
    add_background_object(create_dvwalledge1_887(3448, 56), 2);
    add_background_object(create_dvwall1_482(3448, -136), 2);
    add_background_object(create_dvwalledge1_887(3448, -8), 2);
    add_background_object(create_dvwalledge1_887(3448, -72), 2);
    add_background_object(create_dvwalledge1_887(3448, -136), 2);
    add_background_object(create_dvwall1_482(3960, 440), 2);
    add_background_object(create_dvwall1_482(3960, 248), 2);
    add_background_object(create_dvwall1_482(3960, 56), 2);
    add_background_object(create_dvwall1_482(3960, -136), 2);
    add_background_object(create_dvwalledge2_978(4200, -136), 2);
    add_background_object(create_dvwalledge2_978(4200, -72), 2);
    add_background_object(create_dvwalledge2_978(4200, -8), 2);
    add_background_object(create_dvwalledge2_978(4200, 56), 2);
    add_background_object(create_dvwalledge2_978(4200, 120), 2);
    add_background_object(create_dvwalledge2_978(4200, 184), 2);
    add_background_object(create_dvwalledge2_978(4200, 248), 2);
    add_background_object(create_dvwalledge2_978(4200, 312), 2);
    add_background_object(create_dvwalledge2_978(4200, 376), 2);
    add_background_object(create_dvwalledge2_978(4200, 440), 2);
    add_background_object(create_dvwalledge2_978(4200, 504), 2);
    add_background_object(create_dvwall8_877(3960, 632), 2);
    add_background_object(create_dvwall6_982(3960, 536), 2);
    add_background_object(create_dvwall4_485(3872, 624), 2);
    add_background_object(create_dvwalledge2_978(4200, 568), 2);
    add_background_object(create_dvrockceiling_891(4088, 616), 2);
    add_background_object(create_dvwall1_482(800, 1408), 2);
    add_background_object(create_levelbackdrop02_875(1056, 1408), 2);
    add_background_object(create_dvwall1_482(1376, 1280), 2);
    add_background_object(create_dvwall1_482(3704, 1800), 2);
    add_background_object(create_dvwall1_482(3960, 1800), 2);
    add_background_object(create_dvwall1_482(2936, 1728), 2);
    add_background_object(create_dvwall1_482(3192, 1800), 2);
    add_background_object(create_dvwall1_482(3448, 1800), 2);
    add_background_object(create_dvwall1_482(4216, 1800), 2);
    add_background_object(create_dvwall1_482(4472, 1800), 2);
    add_background_object(create_dvrockedge2_904(4344, 1184), 2);
    add_background_object(create_dvladder_914(2096, 760), 2);
    add_background_object(create_dvladder_914(2096, 792), 2);
    add_background_object(create_dvladder_914(2096, 824), 2);
    add_background_object(create_dvwall1_482(3704, -136), 2);
    add_background_object(create_dvwall1_482(3704, 440), 2);
    add_background_object(create_dvwall1_482(3704, 248), 2);
    add_background_object(create_dvwall1_482(3704, 56), 2);
    add_background_object(create_dvrockceiling_891(3680, 1192), 2);
    add_background_object(create_dvceilingoverlay_915(3680, 1192), 2);
    add_background_object(create_dvrockceiling_891(3552, 1192), 2);
    add_background_object(create_dvceilingoverlay_915(3552, 1192), 2);
    add_background_object(create_dvrockslope4_901(4216, 1176), 2);
    add_background_object(create_dvrockedge2_904(4696, 1416), 2);
    add_background_object(create_dvfloorcurvesmallright_888(4728, 1352), 2);
    add_background_object(create_dvwall1_482(4728, 1432), 2);
    add_background_object(create_dvwall1_482(4728, 1608), 2);
    add_background_object(create_dvwall4_485(4776, 1384), 2);
    add_background_object(create_dvwall6_982(4880, 1376), 2);
    add_background_object(create_dvwalledge1_887(4792, 1304), 2);
    add_background_object(create_dvrockedge1_905(4792, 1288), 2);
    add_background_object(create_dvrockslope4_901(4824, 1288), 2);
    add_background_object(create_dvwalledge2_978(4072, 952), 2);
    add_background_object(create_dvwall4_485(3952, 944), 2);
    add_background_object(create_dvrockedge1_905(3960, 944), 2);
    add_background_object(create_dvrockedge2_904(4056, 944), 2);
    add_background_object(create_dvrockslope1_896(3992, 944), 2);
    add_background_object(create_geyserbase2_987(416, 1072), 2);
    add_background_object(create_dvrockslope4_900(288, 1080), 2);
    add_background_object(create_geyserbase2_987(4088, 1168), 2);
    add_background_object(create_dvrockslope1_896(4152, 1176), 2);
    add_background_object(create_levelbackdrop02_875(5048, 1360), 2);
    add_background_object(create_dvwall1_482(5296, 1032), 2);
    add_background_object(create_dvwall1_482(5296, 840), 2);
    add_background_object(create_dvwalledge1_887(5296, 1096), 2);
    add_background_object(create_dvwalledge1_887(5296, 840), 2);
    add_background_object(create_dvrockedge1_905(5296, 832), 2);
    add_background_object(create_dvrockceiling_891(4720, 1024), 2);
    add_background_object(create_dvceilingoverlay_915(4720, 1024), 2);
    add_background_object(create_dvwalledge2_978(3240, 1368), 2);
    add_background_object(create_dvwall6_982(3312, 1592), 2);
    add_background_object(create_dvwall4_485(3208, 1552), 2);
    add_background_object(create_dvwall6_982(4384, 1568), 2);
    add_background_object(create_dvwalledge2_978(3944, 824), 2);
    add_background_object(create_dvwalledge2_978(4072, 1048), 2);
    add_background_object(create_dvwalledge2_978(4072, 1112), 2);
    add_background_object(create_dvrockedge1_905(4056, 1176), 2);
    add_background_object(create_dvwalledge2_978(4072, 1000), 2);
    add_background_object(create_dvrockedge1_905(4280, 944), 2);
    add_background_object(create_levelbackdrop02_875(4408, 952), 2);
    add_background_object(create_dvrockslope4_900(4312, 936), 2);
    add_background_object(create_levelbackdrop02_875(4464, 952), 2);
    add_background_object(create_levelbackdrop02_875(4528, 952), 2);
    add_background_object(create_levelbackdrop02_875(4464, 888), 2);
    add_background_object(create_levelbackdrop02_875(4528, 888), 2);
    add_background_object(create_dvwall6_982(4488, 888), 2);
    add_background_object(create_dvwalledge1_887(4464, 888), 2);
    add_background_object(create_dvrockedge2_904(4440, 936), 2);
    add_background_object(create_dvrockedge1_905(4464, 880), 2);
    add_background_object(create_dvrockslope1_896(4496, 880), 2);
    add_background_object(create_dvrockedge2_904(4560, 880), 2);
    add_background_object(create_dvwall1_482(4848, 848), 2);
    add_background_object(create_dvrockceiling_891(4848, 1024), 2);
    add_background_object(create_dvceilingoverlay_915(4848, 1024), 2);
    add_background_object(create_dvwalledge2_978(5088, 848), 2);
    add_background_object(create_dvrockedge2_904(5072, 832), 2);
    add_background_object(create_dvwalledge2_978(5088, 912), 2);
    add_background_object(create_dvwalledge2_978(5088, 976), 2);
    add_background_object(create_dvrockceiling_891(4976, 1024), 2);
    add_background_object(create_dvceilingoverlay_915(4976, 1024), 2);
    add_background_object(create_dvwalledge1_887(5296, 904), 2);
    add_background_object(create_dvwalledge1_887(5296, 968), 2);
    add_background_object(create_dvwalledge1_887(5296, 1032), 2);
    add_background_object(create_dvwalledge1_887(5296, 1160), 2);
    add_background_object(create_dvwall9_889(5296, 1224), 2);
    add_background_object(create_dvtree4_874(4936, 1120), 2);
    add_background_object(create_dvbackrock1_882(5272, 1472), 2);
    add_background_object(create_dvbackrock3_881(5320, 1560), 2);
    add_background_object(create_levelbackdrop12_880(5336, 1576), 2);
    add_background_object(create_levelbackdrop02_875(5272, 1576), 2);
    add_background_object(create_levelbackdrop02_875(5208, 1512), 2);
    add_background_object(create_levelbackdrop02_875(5176, 1448), 2);
    add_background_object(create_dvwall1_482(5208, 1608), 2);
    add_background_object(create_levelbackdrop14_983(5208, 1384), 2);
    add_background_object(create_levelbackdrop14_983(5240, 1448), 2);
    add_background_object(create_dvwall4_485(5096, 1400), 2);
    add_background_object(create_dvwall4_485(5192, 1568), 2);
    add_background_object(create_dvwall4_485(4984, 1384), 2);
    add_background_object(create_dvwall4_485(5112, 1592), 2);
    add_background_object(create_dvwall6_982(5128, 1512), 2);
    add_background_object(create_dvwall6_982(5264, 1600), 2);
    add_background_object(create_dvwall6_982(5000, 1304), 2);
    add_background_object(create_dvwall6_982(5104, 1680), 2);
    add_background_object(create_levelbackdrop13_884(5272, 1512), 2);
    add_background_object(create_dvrockedge1_905(5384, 1608), 2);
    add_background_object(create_dvrockslope7_985(5080, 1288), 2);
    add_background_object(create_dvrockslope4_900(4952, 1288), 2);
    add_background_object(create_dvwall6_982(5584, 1576), 2);
    add_background_object(create_dvrockslope10_911(5544, 1504), 2);
    add_background_object(create_dvrockslope4_900(5416, 1600), 2);
    add_background_object(create_dvwall1_482(5720, 1608), 2);
    add_background_object(create_dvwall6_982(5792, 1496), 2);
    add_background_object(create_dvwall4_485(5696, 1488), 2);
    add_background_object(create_dvrockslope5_912(5864, 1480), 2);
    add_background_object(create_dvrockslope4_901(5736, 1472), 2);
    add_background_object(create_dvrockslope6_913(5608, 1472), 2);
    add_background_object(create_dvwall4_485(5896, 1592), 2);
    add_background_object(create_dvrockslope9_902(5928, 1512), 2);
    add_background_object(create_dvwall1_482(6232, 1608), 2);
    add_background_object(create_dvwall1_482(5976, 1800), 2);
    add_background_object(create_dvwall1_482(5464, 1800), 2);
    add_background_object(create_dvwall1_482(4984, 1800), 2);
    add_background_object(create_dvwall1_482(4728, 1800), 2);
    add_background_object(create_dvwall1_482(5208, 1800), 2);
    add_background_object(create_dvwall1_482(5720, 1800), 2);
    add_background_object(create_dvwall1_482(6232, 1800), 2);
    add_background_object(create_dvwall1_482(6232, 1224), 2);
    add_background_object(create_dvwall1_482(6232, 1416), 2);
    add_background_object(create_dvwalledge1_887(6232, 1504), 2);
    add_background_object(create_dvwalledge1_887(6232, 1440), 2);
    add_background_object(create_dvwalledge1_887(6232, 1376), 2);
    add_background_object(create_dvwalledge1_887(6232, 1312), 2);
    add_background_object(create_dvwalledge1_887(6232, 1248), 2);
    add_background_object(create_levelbackdrop02_875(5680, 1288), 2);
    add_background_object(create_levelbackdrop02_875(5680, 1224), 2);
    add_background_object(create_levelbackdrop02_875(5744, 1352), 2);
    add_background_object(create_levelbackdrop02_875(5808, 1352), 2);
    add_background_object(create_levelbackdrop02_875(5872, 1352), 2);
    add_background_object(create_levelbackdrop02_875(5616, 1352), 2);
    add_background_object(create_levelbackdrop02_875(5680, 1352), 2);
    add_background_object(create_levelbackdrop02_875(5872, 1288), 2);
    add_background_object(create_levelbackdrop02_875(5936, 1352), 2);
    add_background_object(create_dvrockceiling_891(5384, 1328), 2);
    add_background_object(create_dvrockceiling_891(5432, 1336), 2);
    add_background_object(create_levelbackdrop8_894(5552, 1352), 2);
    add_background_object(create_dvwall6_982(5448, 1160), 2);
    add_background_object(create_dvwall4_485(5616, 1232), 2);
    add_background_object(create_dvwall4_485(5336, 1168), 2);
    add_background_object(create_dvwall6_982(5552, 1256), 2);
    add_background_object(create_dvceilingoverlay_915(5424, 1336), 2);
    add_background_object(create_dvceilingoverlay_915(5384, 1336), 2);
    add_background_object(create_dvwalledge1_887(5872, 1288), 2);
    add_background_object(create_dvwalledge2_978(5920, 1288), 2);
    add_background_object(create_dvwalledge2_978(5728, 1224), 2);
    add_background_object(create_dvwalledge2_978(5728, 1288), 2);
    add_background_object(create_geyserbase2_987(5584, 1136), 2);
    add_background_object(create_dvrockedge1_905(5552, 1144), 2);
    add_background_object(create_dvwalledge2_978(5536, 1032), 2);
    add_background_object(create_dvwalledge2_978(5536, 1096), 2);
    add_background_object(create_dvwalledge2_978(5536, 904), 2);
    add_background_object(create_dvwalledge2_978(5536, 968), 2);
    add_background_object(create_dvwalledge2_978(5536, 840), 2);
    add_background_object(create_dvwalledge2_978(5664, 1152), 2);
    add_background_object(create_dvrockedge2_904(5648, 1144), 2);
    add_background_object(create_dvwall6_982(4920, 816), 2);
    add_background_object(create_dvrockslope9_902(4944, 736), 2);
    add_background_object(create_dvwall1_482(6232, 1032), 2);
    add_background_object(create_dvwalledge1_887(6232, 1184), 2);
    add_background_object(create_dvwall9_889(5848, 1032), 2);
    add_background_object(create_dvwall1_482(5976, 968), 2);
    add_background_object(create_dvwall4_485(6152, 1032), 2);
    add_background_object(create_dvrockceiling_891(6104, 1136), 2);
    add_background_object(create_dvceilingoverlay_915(6104, 1136), 2);
    add_background_object(create_dvceilingoverlay_915(5976, 1136), 2);
    add_background_object(create_levelbackdrop02_875(5912, 968), 2);
    add_background_object(create_levelbackdrop02_875(5848, 968), 2);
    add_background_object(create_dvwall4_485(5872, 968), 2);
    add_background_object(create_dvrockslope4_900(5880, 952), 2);
    add_background_object(create_levelbackdrop8_894(5784, 968), 2);
    add_background_object(create_dvrockceiling_891(5728, 960), 2);
    add_background_object(create_dvrockslope4_901(5752, 952), 2);
    add_background_object(create_dvrockedge1_905(5720, 952), 2);
    add_background_object(create_dvwall7_892(5392, 712), 2);
    add_background_object(create_dvrockslope11_906(5648, 712), 2);
    add_background_object(create_dvrockedge2_904(5776, 776), 2);
    add_background_object(create_levelbackdrop02_875(5520, 776), 2);
    add_background_object(create_levelbackdrop02_875(5584, 776), 2);
    add_background_object(create_levelbackdrop02_875(5608, 776), 2);
    add_background_object(create_dvwall6_982(5504, 712), 2);
    add_background_object(create_dvrockslope4_901(5520, 704), 2);
    add_background_object(create_dvwall4_485(5368, 808), 2);
    add_background_object(create_dvwall6_982(5416, 768), 2);
    add_background_object(create_dvrockslope10_911(5328, 736), 2);
    add_background_object(create_dvrockslope6_913(5392, 704), 2);
    add_background_object(create_dvrockceiling_891(5624, 816), 2);
    add_background_object(create_dvrockceiling_891(5552, 816), 2);
    add_background_object(create_dvceilingoverlay_915(5552, 816), 2);
    add_background_object(create_dvceilingoverlay_915(5624, 816), 2);
    add_background_object(create_levelbackdrop02_875(6168, 904), 2);
    add_background_object(create_levelbackdrop02_875(6104, 904), 2);
    add_background_object(create_levelbackdrop02_875(6040, 904), 2);
    add_background_object(create_dvrockedge2_904(6008, 952), 2);
    add_background_object(create_dvwall6_982(6040, 904), 2);
    add_background_object(create_dvwall4_485(6144, 944), 2);
    add_background_object(create_dvwalledge1_887(6040, 904), 2);
    add_background_object(create_dvrockedge1_905(6040, 888), 2);
    add_background_object(create_dvrockslope4_901(6072, 888), 2);
    add_background_object(create_dvwall6_885(6456, 896), 2);
    add_background_object(create_dvwall1_482(7000, 1416), 2);
    add_background_object(create_dvwall1_482(6744, 1416), 2);
    add_background_object(create_dvwall1_482(6488, 1224), 2);
    add_background_object(create_dvwall1_482(6744, 1224), 2);
    add_background_object(create_dvwall1_482(7000, 1224), 2);
    add_background_object(create_dvwall1_482(6488, 1416), 2);
    add_background_object(create_dvtree5_879(6872, 1160), 2);
    add_background_object(create_dvtree5_879(7104, 1152), 2);
    add_background_object(create_dvtree5_879(7048, 1168), 2);
    add_background_object(create_dvtree6_871(7128, 1000), 2);
    add_background_object(create_dvtree6_871(6832, 1008), 2);
    add_background_object(create_dvtree6_871(6872, 968), 2);
    add_background_object(create_dvtree6_871(7064, 952), 2);
    add_background_object(create_dvwalledge2_978(7176, 1024), 2);
    add_background_object(create_dvwalledge1_887(6888, 1024), 2);
    add_background_object(create_dvwall8_877(7168, 960), 2);
    add_background_object(create_levelbackdrop12_880(6712, 1184), 2);
    add_background_object(create_levelbackdrop02_875(6648, 1184), 2);
    add_background_object(create_levelbackdrop02_875(6584, 1120), 2);
    add_background_object(create_levelbackdrop02_875(6552, 1056), 2);
    add_background_object(create_levelbackdrop02_875(7040, 896), 2);
    add_background_object(create_levelbackdrop02_875(7104, 896), 2);
    add_background_object(create_levelbackdrop02_875(7168, 896), 2);
    add_background_object(create_levelbackdrop02_875(7232, 896), 2);
    add_background_object(create_levelbackdrop14_983(6584, 992), 2);
    add_background_object(create_levelbackdrop14_983(6616, 1056), 2);
    add_background_object(create_dvwall4_485(6472, 1008), 2);
    add_background_object(create_dvwall4_485(6568, 1176), 2);
    add_background_object(create_dvwall4_485(6360, 992), 2);
    add_background_object(create_dvwall4_485(6464, 1192), 2);
    add_background_object(create_dvwall4_485(7144, 896), 2);
    add_background_object(create_dvwall6_982(6504, 1120), 2);
    add_background_object(create_dvwall6_982(6640, 1208), 2);
    add_background_object(create_dvwall6_982(6376, 912), 2);
    add_background_object(create_dvwall6_982(6480, 1288), 2);
    add_background_object(create_levelbackdrop13_884(6648, 1120), 2);
    add_background_object(create_dvrockslope4_900(6792, 1208), 2);
    add_background_object(create_dvrockslope4_900(7048, 1208), 2);
    add_background_object(create_dvrockslope4_901(6920, 1208), 2);
    add_background_object(create_dvrockslope4_901(7176, 1208), 2);
    add_background_object(create_dvrockedge1_905(6760, 1216), 2);
    add_background_object(create_dvceilingcurveleft_979(6912, 960), 2);
    add_background_object(create_dvceilingcurveright_984(7040, 960), 2);
    add_background_object(create_dvwall9_889(6784, 960), 2);
    add_background_object(create_dvrockslope7_985(6456, 896), 2);
    add_background_object(create_dvrockslope4_901(6200, 896), 2);
    add_background_object(create_dvrockslope4_900(6328, 896), 2);
    add_background_object(create_dvwall6_982(6808, 880), 2);
    add_background_object(create_dvwall4_485(6424, 1104), 2);
    add_background_object(create_dvwall6_982(6248, 976), 2);
    add_background_object(create_dvrockslope4_901(6880, 880), 2);
    add_background_object(create_dvrockslope4_900(7008, 880), 2);
    add_background_object(create_dvrockedge1_905(6656, 888), 2);
    add_background_object(create_dvwalledge2_978(7280, 896), 2);
    add_background_object(create_dvhalfpipe1_867(7136, 696), 2);
    add_background_object(create_dvhalfpipe2_868(7392, 696), 2);
    add_background_object(create_dvhalfpipe2_868(7520, 696), 2);
    add_background_object(create_dvwalledge1_887(7872, 944), 2);
    add_background_object(create_dvwalledge1_887(7872, 904), 2);
    add_background_object(create_dvhalfpipe3_869(7776, 696), 2);
    add_background_object(create_dvwall1_482(7768, 1104), 2);
    add_background_object(create_dvwall1_482(7768, 1296), 2);
    add_background_object(create_dvwall1_482(8024, 1104), 2);
    add_background_object(create_dvwall1_482(8024, 1296), 2);
    add_background_object(create_dvrockslope2_910(7880, 1088), 2);
    add_background_object(create_dvwalledge1_887(8024, 1032), 2);
    add_background_object(create_dvrockedge2_904(8008, 1088), 2);
    add_background_object(create_dvrockceiling_891(7872, 992), 2);
    add_background_object(create_dvrockceiling_891(7896, 992), 2);
    add_background_object(create_dvwalledge1_887(8024, 1008), 2);
    add_background_object(create_dvwall4_485(8032, 904), 2);
    add_background_object(create_dvwall6_982(7448, 1112), 2);
    add_background_object(create_geyserbase2_987(7624, 1080), 2);
    add_background_object(create_dvrockslope10_911(7304, 1120), 2);
    add_background_object(create_dvrockslope1_896(7560, 1088), 2);
    add_background_object(create_dvrockslope1_896(7688, 1088), 2);
    add_background_object(create_geyserbase2_987(7752, 1080), 2);
    add_background_object(create_dvrockslope1_896(7816, 1088), 2);
    add_background_object(create_dvrockslope6_913(7368, 1088), 2);
    add_background_object(create_geyserbase2_987(7496, 1080), 2);
    add_background_object(create_dvwall4_485(7496, 1224), 2);
    add_background_object(create_dvrockslope4_901(8032, 880), 2);
    add_background_object(create_dvrockslope2_910(7136, 880), 2);
    add_background_object(create_dvrockedge2_904(7264, 880), 2);
    add_background_object(create_dvrockedge1_905(7872, 880), 2);
    add_background_object(create_dvrockslope2_910(7904, 880), 2);
    add_background_object(create_dvwall1_482(8280, 904), 2);
    add_background_object(create_dvwall1_482(8280, 1096), 2);
    add_background_object(create_dvwall1_482(8536, 904), 2);
    add_background_object(create_dvwall1_482(8536, 1096), 2);
    add_background_object(create_dvwall6_982(8208, 904), 2);
    add_background_object(create_geyserbase_988(8288, 800), 2);
    add_background_object(create_dvrockslope4_901(8160, 888), 2);
    add_background_object(create_geyserbase2_987(8480, 888), 2);
    add_background_object(create_geyserbase_988(8544, 800), 2);
    add_background_object(create_dvwall1_482(8792, 904), 2);
    add_background_object(create_dvwall1_482(8792, 1096), 2);
    add_background_object(create_geyserbase2_987(8736, 888), 2);
    add_background_object(create_geyserbase_988(8800, 800), 2);
    add_background_object(create_dvwall1_482(9048, 904), 2);
    add_background_object(create_dvwall1_482(9048, 1096), 2);
    add_background_object(create_dvrockslope4_901(8992, 896), 2);
    add_background_object(create_dvrockslope2_910(9120, 904), 2);
    add_background_object(create_dvwall1_482(9304, 904), 2);
    add_background_object(create_dvwall1_482(9304, 1096), 2);
    add_background_object(create_dvrockslope2_910(9248, 904), 2);
    add_background_object(create_dvrockslope4_900(9376, 896), 2);
    add_background_object(create_dvrockslope1_896(9496, 896), 2);
    add_background_object(create_dvrockslope5_912(9560, 896), 2);
    add_background_object(create_levelbackdrop02_875(9600, 1032), 2);
    add_background_object(create_dvwall4_485(9512, 1000), 2);
    add_background_object(create_dvwall6_982(9608, 1024), 2);
    add_background_object(create_dvrockceiling_891(9784, 1344), 2);
    add_background_object(create_dvwall1_482(10232, 1504), 2);
    add_background_object(create_dvrockslope4_901(10296, 1480), 2);
    add_background_object(create_dvwall1_482(10488, 1504), 2);
    add_background_object(create_dvrockslope4_900(10424, 1480), 2);
    add_background_object(create_dvrockslope4_901(10552, 1480), 2);
    add_background_object(create_dvfloorcurvesmallright_888(10680, 1424), 2);
    add_background_object(create_dvwall1_482(10744, 1504), 2);
    add_background_object(create_dvrockedge2_904(10680, 1488), 2);
    add_background_object(create_dvwall1_482(10744, 1312), 2);
    add_background_object(create_dvwalledge1_887(10744, 1376), 2);
    add_background_object(create_dvwall1_482(10744, 928), 2);
    add_background_object(create_dvwalledge1_887(10744, 928), 2);
    add_background_object(create_dvwalledge1_887(10744, 992), 2);
    add_background_object(create_dvwall1_482(10744, 736), 2);
    add_background_object(create_dvwalledge1_887(10744, 736), 2);
    add_background_object(create_dvwalledge1_887(10744, 800), 2);
    add_background_object(create_dvwalledge1_887(10744, 864), 2);
    add_background_object(create_dvwall1_482(10744, 544), 2);
    add_background_object(create_dvwalledge1_887(10744, 544), 2);
    add_background_object(create_dvwalledge1_887(10744, 608), 2);
    add_background_object(create_dvwalledge1_887(10744, 672), 2);
    add_background_object(create_dvwall1_482(11000, 1504), 2);
    add_background_object(create_dvwall1_482(11000, 1312), 2);
    add_background_object(create_dvwall1_482(11000, 1120), 2);
    add_background_object(create_dvwall1_482(11000, 928), 2);
    add_background_object(create_dvwall1_482(11000, 736), 2);
    add_background_object(create_dvwall1_482(11000, 544), 2);
    add_background_object(create_dvwall3_873(10872, 1120), 2);
    add_background_object(create_levelbackdrop02_875(10744, 1248), 2);
    add_background_object(create_levelbackdrop02_875(10808, 1248), 2);
    add_background_object(create_dvrockceiling_891(10744, 1104), 2);
    add_background_object(create_dvwalledge1_887(10744, 1056), 2);
    add_background_object(create_dvceilingoverlay_915(10744, 1104), 2);
    add_background_object(create_levelbackdrop02_875(10808, 1184), 2);
    add_background_object(create_levelbackdrop02_875(10808, 1120), 2);
    add_background_object(create_levelbackdrop02_875(10776, 1120), 2);
    add_background_object(create_levelbackdrop02_875(10776, 1184), 2);
    add_background_object(create_dvwall4_485(10776, 1096), 2);
    add_background_object(create_dvwalledge1_887(10776, 1168), 2);
    add_background_object(create_dvwalledge1_887(10776, 1120), 2);
    add_background_object(create_dvwall6_982(10744, 1240), 2);
    add_background_object(create_dvwall1_482(10168, 1696), 2);
    add_background_object(create_levelbackdrop02_875(10168, 1632), 2);
    add_background_object(create_levelbackdrop02_875(10168, 1576), 2);
    add_background_object(create_levelbackdrop10_898(10168, 1512), 2);
    add_background_object(create_dvwall4_485(10200, 1552), 2);
    add_background_object(create_dvwall6_982(10296, 1664), 2);
    add_background_object(create_dvwall4_485(10168, 1664), 2);
    add_background_object(create_dvwalledge1_887(10168, 1824), 2);
    add_background_object(create_dvwalledge1_887(10168, 1760), 2);
    add_background_object(create_dvwalledge1_887(10168, 1696), 2);
    add_background_object(create_dvwalledge1_887(10168, 1632), 2);
    add_background_object(create_dvwalledge1_887(10168, 1576), 2);
    add_background_object(create_dvrockslope8_920(10168, 1480), 2);
    add_background_object(create_dvwall1_482(10424, 1696), 2);
    add_background_object(create_dvwall1_482(10168, 1888), 2);
    add_background_object(create_dvwalledge1_887(10168, 2016), 2);
    add_background_object(create_dvwalledge1_887(10168, 1952), 2);
    add_background_object(create_dvwalledge1_887(10168, 1888), 2);
    add_background_object(create_dvwalledge1_887(10744, 1312), 2);
    add_background_object(create_dvwalledge1_887(10744, 1248), 2);
    add_background_object(create_dvrockedge1_905(10744, 1232), 2);
    add_background_object(create_dvrockedge2_904(10776, 1232), 2);
    add_background_object(create_dvwall1_482(10168, 2080), 2);
    add_background_object(create_dvwalledge1_887(10168, 2208), 2);
    add_background_object(create_dvwalledge1_887(10168, 2144), 2);
    add_background_object(create_dvwalledge1_887(10168, 2080), 2);
    add_background_object(create_dvwall1_482(10168, 2272), 2);
    add_background_object(create_dvwalledge1_887(10168, 2272), 2);
    add_background_object(create_dvwall1_482(9304, 1288), 2);
    add_background_object(create_dvwall1_482(9048, 1288), 2);
    add_background_object(create_dvwall1_482(9304, 1480), 2);
    add_background_object(create_dvwall1_482(9048, 1480), 2);
    add_background_object(create_dvwall1_482(9304, 1672), 2);
    add_background_object(create_dvwall1_482(9048, 1672), 2);
    add_background_object(create_dvwall1_482(9304, 1864), 2);
    add_background_object(create_dvwall1_482(9048, 1864), 2);
    add_background_object(create_dvwall1_482(9304, 2056), 2);
    add_background_object(create_dvwall1_482(9048, 2056), 2);
    add_background_object(create_dvwall1_482(9048, 2248), 2);
    add_background_object(create_dvfloorcurvesmallright_888(10104, 2448), 2);
    add_background_object(create_dvrockceiling_891(10080, 2512), 2);
    add_background_object(create_dvrockedge1_905(10072, 2512), 2);
    add_background_object(create_dvrockedge2_904(10104, 2512), 2);
    add_background_object(create_dvrockceiling_891(10192, 2512), 2);
    add_background_object(create_dvrockceiling_891(10304, 2512), 2);
    add_background_object(create_dvceilingoverlay_915(10072, 2512), 2);
    add_background_object(create_dvceilingoverlay_915(10200, 2512), 2);
    add_background_object(create_dvceilingoverlay_915(10328, 2512), 2);
    add_background_object(create_dvwall1_482(10072, 2800), 2);
    add_background_object(create_dvwall1_482(9816, 2720), 2);
    add_background_object(create_dvwall1_482(9048, 2632), 2);
    add_background_object(create_dvwall1_482(9048, 2440), 2);
    add_background_object(create_dvwall1_482(9048, 2824), 2);
    add_background_object(create_dvfloorcurvesmallleft_918(9432, 2656), 2);
    add_background_object(create_dvwall1_482(9560, 2720), 2);
    add_background_object(create_dvwall2_886(9304, 2528), 2);
    add_background_object(create_dvwall1_482(9304, 2720), 2);
    add_background_object(create_dvwall1_482(9560, 1288), 2);
    add_background_object(create_dvwall1_482(9560, 1480), 2);
    add_background_object(create_dvwall1_482(9560, 1672), 2);
    add_background_object(create_dvwall1_482(9560, 1864), 2);
    add_background_object(create_dvwall1_482(9560, 2056), 2);
    add_background_object(create_dvwall1_482(8792, 1864), 2);
    add_background_object(create_dvwall1_482(8792, 2056), 2);
    add_background_object(create_dvwall1_482(8792, 2248), 2);
    add_background_object(create_dvwall1_482(8792, 2632), 2);
    add_background_object(create_dvwall1_482(8792, 2440), 2);
    add_background_object(create_dvwalledge2_978(9800, 1528), 2);
    add_background_object(create_dvwalledge2_978(9800, 1592), 2);
    add_background_object(create_dvwalledge2_978(9800, 1656), 2);
    add_background_object(create_dvwalledge2_978(9800, 1720), 2);
    add_background_object(create_dvwalledge2_978(9800, 1784), 2);
    add_background_object(create_dvwalledge2_978(9800, 1848), 2);
    add_background_object(create_dvwalledge2_978(9800, 1912), 2);
    add_background_object(create_dvwalledge2_978(9800, 1976), 2);
    add_background_object(create_dvwalledge2_978(9800, 2040), 2);
    add_background_object(create_dvwalledge2_978(9800, 2104), 2);
    add_background_object(create_dvwall8_877(9688, 2248), 2);
    add_background_object(create_dvrockceiling_891(9560, 2232), 2);
    add_background_object(create_dvrockceiling_891(9432, 2232), 2);
    add_background_object(create_dvrockceiling_891(9304, 2232), 2);
    add_background_object(create_dvceilingoverlay_915(9304, 2232), 2);
    add_background_object(create_dvceilingoverlay_915(9432, 2232), 2);
    add_background_object(create_dvceilingoverlay_915(9560, 2232), 2);
    add_background_object(create_dvrockslope4_900(9536, 2352), 2);
    add_background_object(create_dvrockedge1_905(9504, 2360), 2);
    add_background_object(create_dvwall6_982(9256, 2528), 2);
    add_background_object(create_dvwall4_485(9248, 2648), 2);
    add_background_object(create_dvwalledge2_978(9416, 2528), 2);
    add_background_object(create_dvwalledge2_978(9416, 2592), 2);
    add_background_object(create_dvwalledge2_978(9288, 2472), 2);
    add_background_object(create_dvwalledge2_978(9288, 2408), 2);
    add_background_object(create_dvwalledge2_978(9288, 2344), 2);
    add_background_object(create_dvwalledge2_978(9288, 2280), 2);
    add_background_object(create_dvwalledge2_978(9288, 2248), 2);
    add_background_object(create_dvrockedge1_905(9456, 2720), 2);
    add_background_object(create_dvrockslope4_900(9488, 2712), 2);
    add_background_object(create_dvrockslope4_901(9616, 2712), 2);
    add_background_object(create_dvrockedge2_904(9744, 2720), 2);
    add_background_object(create_levelbackdrop09_899(9840, 2640), 2);
    add_background_object(create_levelbackdrop02_875(9904, 2624), 2);
    add_background_object(create_dvwall4_485(9776, 2688), 2);
    add_background_object(create_dvwall6_982(9840, 2664), 2);
    add_background_object(create_dvwalledge1_887(9688, 2256), 2);
    add_background_object(create_dvwalledge1_887(9688, 2296), 2);
    add_background_object(create_dvrockedge2_904(9664, 2352), 2);
    add_background_object(create_dvwalledge1_887(9776, 2680), 2);
    add_background_object(create_dvwalledge2_978(9952, 2656), 2);
    add_background_object(create_dvwalledge2_978(9952, 2616), 2);
    add_background_object(create_dvwall1_482(9816, 2912), 2);
    add_background_object(create_dvwalledge2_978(10056, 2720), 2);
    add_background_object(create_dvwall4_485(10000, 2800), 2);
    add_background_object(create_dvwall1_482(10072, 2992), 2);
    add_background_object(create_dvwall1_482(9560, 2912), 2);
    add_background_object(create_dvwall1_482(9304, 2912), 2);
    add_background_object(create_dvrockedge1_905(10072, 2792), 2);
    add_background_object(create_dvrockslope4_900(10104, 2784), 2);
    add_background_object(create_dvwalledge2_978(10056, 2736), 2);
    add_background_object(create_dvwall1_482(10328, 2800), 2);
    add_background_object(create_dvwall1_482(10584, 2800), 2);
    add_background_object(create_dvwall1_482(10584, 2992), 2);
    add_background_object(create_dvwall1_482(10328, 2992), 2);
    add_background_object(create_dvrockslope4_901(10232, 2784), 2);
    add_background_object(create_dvrockslope4_900(10360, 2784), 2);
    add_background_object(create_dvwall6_982(9208, 2760), 2);
    add_background_object(create_dvwall4_485(9760, 1248), 2);
    add_background_object(create_dvrockceiling_891(10040, 1344), 2);
    add_background_object(create_dvrockedge1_905(10160, 1344), 2);
    add_background_object(create_dvwall8_877(10168, 1160), 2);
    add_background_object(create_dvwall1_482(9912, 848), 2);
    add_background_object(create_dvwalledge1_887(9912, 848), 2);
    add_background_object(create_dvwalledge1_887(9912, 912), 2);
    add_background_object(create_dvrockedge2_904(10192, 1344), 2);
    add_background_object(create_dvwall4_485(10080, 1160), 2);
    add_background_object(create_dvwall3_873(10168, 968), 2);
    add_background_object(create_dvwall1_482(10168, 848), 2);
    add_background_object(create_dvwall4_485(10168, 936), 2);
    add_background_object(create_dvwalledge2_978(10408, 848), 2);
    add_background_object(create_dvwalledge2_978(10408, 912), 2);
    add_background_object(create_dvwalledge2_978(10408, 976), 2);
    add_background_object(create_dvrockceiling_891(10296, 1024), 2);
    add_background_object(create_dvwall1_482(9912, 656), 2);
    add_background_object(create_dvwalledge1_887(9912, 656), 2);
    add_background_object(create_dvwalledge1_887(9912, 720), 2);
    add_background_object(create_dvwall1_482(10168, 656), 2);
    add_background_object(create_dvwalledge2_978(10408, 656), 2);
    add_background_object(create_dvwalledge2_978(10408, 720), 2);
    add_background_object(create_dvwalledge2_978(10408, 784), 2);
    add_background_object(create_dvwalledge1_887(9912, 784), 2);
    add_background_object(create_dvwall1_482(9912, 464), 2);
    add_background_object(create_dvwalledge1_887(9912, 464), 2);
    add_background_object(create_dvwalledge1_887(9912, 528), 2);
    add_background_object(create_dvwall1_482(10168, 464), 2);
    add_background_object(create_dvwalledge2_978(10408, 464), 2);
    add_background_object(create_dvwalledge2_978(10408, 528), 2);
    add_background_object(create_dvwalledge2_978(10408, 592), 2);
    add_background_object(create_dvwalledge1_887(9912, 592), 2);
    add_background_object(create_dvwall1_482(9912, 272), 2);
    add_background_object(create_dvwalledge1_887(9912, 272), 2);
    add_background_object(create_dvwalledge1_887(9912, 336), 2);
    add_background_object(create_dvwall1_482(10168, 272), 2);
    add_background_object(create_dvwalledge2_978(10408, 272), 2);
    add_background_object(create_dvwalledge2_978(10408, 336), 2);
    add_background_object(create_dvwalledge2_978(10408, 400), 2);
    add_background_object(create_dvwalledge1_887(9912, 400), 2);
    add_background_object(create_dvwall1_482(9912, 80), 2);
    add_background_object(create_dvwalledge1_887(9912, 80), 2);
    add_background_object(create_dvwalledge1_887(9912, 144), 2);
    add_background_object(create_dvwall1_482(10168, 80), 2);
    add_background_object(create_dvwalledge2_978(10408, 80), 2);
    add_background_object(create_dvwalledge2_978(10408, 144), 2);
    add_background_object(create_dvwalledge2_978(10408, 208), 2);
    add_background_object(create_dvwalledge1_887(9912, 208), 2);
    add_background_object(create_dvwall1_482(9912, -112), 2);
    add_background_object(create_dvwalledge1_887(9912, -112), 2);
    add_background_object(create_dvwalledge1_887(9912, -48), 2);
    add_background_object(create_dvwall1_482(10168, -112), 2);
    add_background_object(create_dvwalledge2_978(10408, -112), 2);
    add_background_object(create_dvwalledge2_978(10408, -48), 2);
    add_background_object(create_dvwalledge2_978(10408, 16), 2);
    add_background_object(create_dvwalledge1_887(9912, 16), 2);
    add_background_object(create_dvwalledge2_978(10280, 1048), 2);
    add_background_object(create_dvwall6_982(10296, 2360), 2);
    add_background_object(create_dvwalledge1_887(10168, 2336), 2);
    add_background_object(create_dvwalledge1_887(10168, 2400), 2);
    add_background_object(create_dvwall6_982(10168, 2360), 2);
    add_background_object(create_dvrockedge2_904(9888, 792), 2);
    add_background_object(create_dvrockedge1_905(9856, 792), 2);
    add_background_object(create_dvrockslope4_900(10488, 2776), 2);
    add_background_object(create_levelbackdrop02_875(10648, 2736), 2);
    add_background_object(create_levelbackdrop02_875(10712, 2736), 2);
    add_background_object(create_dvwalledge1_887(10648, 2736), 2);
    add_background_object(create_dvwall4_485(10640, 2768), 2);
    add_background_object(create_dvrockedge2_904(10616, 2776), 2);
    add_background_object(create_levelbackdrop02_875(10648, 2672), 2);
    add_background_object(create_dvwalledge1_887(10648, 2672), 2);
    add_background_object(create_levelbackdrop02_875(10712, 2672), 2);
    add_background_object(create_levelbackdrop09_899(10712, 2624), 2);
    add_background_object(create_levelbackdrop02_875(10776, 2608), 2);
    add_background_object(create_dvwalledge2_978(10824, 2600), 2);
    add_background_object(create_levelbackdrop02_875(10776, 2736), 2);
    add_background_object(create_levelbackdrop02_875(10776, 2672), 2);
    add_background_object(create_dvwall6_982(10680, 2648), 2);
    add_background_object(create_dvwall4_485(10712, 2728), 2);
    add_background_object(create_dvwall1_482(10840, 2800), 2);
    add_background_object(create_dvwall1_482(10680, 1696), 2);
    add_background_object(create_dvwall1_482(10936, 1696), 2);
    add_background_object(create_dvwall1_482(10424, 1888), 2);
    add_background_object(create_dvwall1_482(10424, 2080), 2);
    add_background_object(create_dvwall8_877(10680, 2144), 2);
    add_background_object(create_dvwall3_873(10680, 1952), 2);
    add_background_object(create_dvwall6_982(10680, 1824), 2);
    add_background_object(create_dvwall4_485(10616, 1928), 2);
    add_background_object(create_dvwall4_485(10616, 2040), 2);
    add_background_object(create_dvwall6_982(10576, 2144), 2);
    add_background_object(create_dvrockceiling_891(10424, 2248), 2);
    add_background_object(create_dvrockceiling_891(10552, 2248), 2);
    add_background_object(create_dvwalledge2_978(10408, 2264), 2);
    add_background_object(create_dvwalledge2_978(10408, 2328), 2);
    add_background_object(create_dvwalledge2_978(10408, 2392), 2);
    add_background_object(create_dvwalledge2_978(10408, 2456), 2);
    add_background_object(create_dvwalledge2_978(10824, 2664), 2);
    add_background_object(create_dvwalledge2_978(10824, 2728), 2);
    add_background_object(create_dvwalledge1_887(9912, 976), 2);
    add_background_object(create_levelbackdrop02_875(11016, 2736), 2);
    add_background_object(create_dvwall1_482(10840, 2992), 2);
    add_background_object(create_dvwall1_482(11096, 2800), 2);
    add_background_object(create_dvwall1_482(11096, 2992), 2);
    add_background_object(create_levelbackdrop02_875(11016, 2672), 2);
    add_background_object(create_levelbackdrop02_875(11080, 2736), 2);
    add_background_object(create_dvrockedge1_905(10832, 2792), 2);
    add_background_object(create_dvrockslope4_900(10864, 2784), 2);
    add_background_object(create_dvwalledge1_887(11016, 2736), 2);
    add_background_object(create_dvwalledge1_887(11016, 2672), 2);
    add_background_object(create_dvrockedge2_904(10992, 2784), 2);
    add_background_object(create_levelbackdrop12_880(11080, 2688), 2);
    add_background_object(create_levelbackdrop02_875(11160, 2736), 2);
    add_background_object(create_dvwall4_485(11024, 2712), 2);
    add_background_object(create_levelbackdrop02_875(11224, 2736), 2);
    add_background_object(create_levelbackdrop02_875(11288, 2736), 2);
    add_background_object(create_dvwall1_482(11352, 2992), 2);
    add_background_object(create_dvwall1_482(11608, 2992), 2);
    add_background_object(create_dvwall1_482(11864, 2936), 2);
    add_background_object(create_dvwall1_482(12632, 2936), 2);
    add_background_object(create_dvwall1_482(11608, 3184), 2);
    add_background_object(create_dvwall1_482(11864, 3128), 2);
    add_background_object(create_dvwall1_482(12120, 3008), 2);
    add_background_object(create_dvwall1_482(12376, 3128), 2);
    add_background_object(create_dvwall6_982(11128, 2752), 2);
    add_background_object(create_dvwall4_485(11224, 2744), 2);
    add_background_object(create_dvwalledge2_978(11336, 2784), 2);
    add_background_object(create_dvwalledge2_978(11336, 2832), 2);
    add_background_object(create_dvwall1_482(10072, 3184), 2);
    add_background_object(create_dvwall1_482(10584, 3184), 2);
    add_background_object(create_dvwall1_482(10328, 3184), 2);
    add_background_object(create_dvwall1_482(10840, 3184), 2);
    add_background_object(create_dvwall1_482(11096, 3184), 2);
    add_background_object(create_dvwall1_482(11352, 3184), 2);
    add_background_object(create_dvwall1_482(9816, 3104), 2);
    add_background_object(create_dvwall1_482(9560, 3104), 2);
    add_background_object(create_dvwall1_482(9304, 3104), 2);
    add_background_object(create_dvwall1_482(9048, 3016), 2);
    add_background_object(create_dvwall1_482(8792, 2824), 2);
    add_background_object(create_dvwall1_482(8792, 3016), 2);
    add_background_object(create_dvwall1_482(8792, 1288), 2);
    add_background_object(create_dvwall1_482(8792, 1480), 2);
    add_background_object(create_dvwall1_482(8792, 1672), 2);
    add_background_object(create_dvwall1_482(8536, 1864), 2);
    add_background_object(create_dvwall1_482(8536, 2056), 2);
    add_background_object(create_dvwall1_482(8536, 2248), 2);
    add_background_object(create_dvwall1_482(8536, 2632), 2);
    add_background_object(create_dvwall1_482(8536, 2440), 2);
    add_background_object(create_dvwall1_482(8536, 2824), 2);
    add_background_object(create_dvwall1_482(8536, 3016), 2);
    add_background_object(create_dvwall1_482(8536, 1288), 2);
    add_background_object(create_dvwall1_482(8536, 1480), 2);
    add_background_object(create_dvwall1_482(8536, 1672), 2);
    add_background_object(create_dvwall1_482(8280, 1288), 2);
    add_background_object(create_dvwall1_482(8280, 1864), 2);
    add_background_object(create_dvwall1_482(8280, 2056), 2);
    add_background_object(create_dvwall1_482(8280, 2248), 2);
    add_background_object(create_dvwall1_482(8280, 2632), 2);
    add_background_object(create_dvwall1_482(8280, 2440), 2);
    add_background_object(create_dvwall1_482(8280, 2824), 2);
    add_background_object(create_dvwall1_482(8280, 3016), 2);
    add_background_object(create_dvwall1_482(8280, 1480), 2);
    add_background_object(create_dvwall1_482(8280, 1672), 2);
    add_background_object(create_dvwall1_482(6488, 1608), 2);
    add_background_object(create_dvwall1_482(6488, 1800), 2);
    add_background_object(create_dvwall1_482(6744, 1608), 2);
    add_background_object(create_dvwall1_482(6744, 1800), 2);
    add_background_object(create_dvwall1_482(7000, 1608), 2);
    add_background_object(create_dvwall1_482(7000, 1800), 2);
    add_background_object(create_dvwall1_482(7256, 1600), 2);
    add_background_object(create_dvwall1_482(7256, 1792), 2);
    add_background_object(create_dvwall1_482(7512, 1488), 2);
    add_background_object(create_dvwall1_482(7768, 1488), 2);
    add_background_object(create_dvwall1_482(8024, 1488), 2);
    add_background_object(create_dvwall1_482(7512, 1680), 2);
    add_background_object(create_dvwall1_482(7768, 1680), 2);
    add_background_object(create_dvwall1_482(8024, 1680), 2);
    add_background_object(create_dvwall1_482(1912, 1536), 2);
    add_background_object(create_dvwall1_482(2680, 1536), 2);
    add_background_object(create_dvwall1_482(2424, 1536), 2);
    add_background_object(create_dvwall1_482(2168, 1536), 2);
    add_background_object(create_dvwall1_482(1912, 1728), 2);
    add_background_object(create_dvwall1_482(2680, 1728), 2);
    add_background_object(create_dvwall1_482(2424, 1728), 2);
    add_background_object(create_dvwall1_482(2168, 1728), 2);
    add_background_object(create_dvwall1_482(1656, 1472), 2);
    add_background_object(create_dvwall1_482(1400, 1472), 2);
    add_background_object(create_dvwall1_482(1144, 1472), 2);
    add_background_object(create_dvwall1_482(888, 1472), 2);
    add_background_object(create_dvwall1_482(10744, 352), 2);
    add_background_object(create_dvwalledge1_887(10744, 352), 2);
    add_background_object(create_dvwalledge1_887(10744, 416), 2);
    add_background_object(create_dvwalledge1_887(10744, 480), 2);
    add_background_object(create_dvwall1_482(10744, 160), 2);
    add_background_object(create_dvwalledge1_887(10744, 160), 2);
    add_background_object(create_dvwalledge1_887(10744, 224), 2);
    add_background_object(create_dvwalledge1_887(10744, 288), 2);
    add_background_object(create_dvwall1_482(11000, 352), 2);
    add_background_object(create_dvwall1_482(11000, 160), 2);
    add_background_object(create_dvwall1_482(10744, -32), 2);
    add_background_object(create_dvwalledge1_887(10744, -32), 2);
    add_background_object(create_dvwalledge1_887(10744, 32), 2);
    add_background_object(create_dvwalledge1_887(10744, 96), 2);
    add_background_object(create_dvwall1_482(11000, -32), 2);
    add_background_object(create_levelbackdrop8_894(12264, 2680), 2);
    add_background_object(create_levelbackdrop02_875(12328, 2680), 2);
    add_background_object(create_levelbackdrop02_875(12392, 2680), 2);
    add_background_object(create_levelbackdrop02_875(12456, 2680), 2);
    add_background_object(create_dvfloorcurvesmallright_888(12480, 2600), 2);
    add_background_object(create_dvwall1_482(12544, 2552), 2);
    add_background_object(create_levelbackdrop02_875(12520, 2680), 2);
    add_background_object(create_dvwalledge1_887(12544, 2552), 2);
    add_background_object(create_dvwalledge1_887(12544, 2576), 2);
    add_background_object(create_dvwall6_982(12536, 2616), 2);
    add_background_object(create_dvwall3_873(12672, 2360), 2);
    add_background_object(create_dvwalledge1_887(12672, 2360), 2);
    add_background_object(create_dvwalledge1_887(12672, 2424), 2);
    add_background_object(create_dvwalledge1_887(12672, 2464), 2);
    add_background_object(create_dvwalledge1_887(12672, 2496), 2);
    add_background_object(create_dvladder_914(12384, 2344), 2);
    add_background_object(create_dvladder_914(12384, 2376), 2);
    add_background_object(create_dvladder_914(12384, 2408), 2);
    add_background_object(create_dvladder_914(12384, 2440), 2);
    add_background_object(create_dvwall1_482(12544, 2168), 2);
    add_background_object(create_dvwalledge1_887(12544, 2168), 2);
    add_background_object(create_dvwalledge1_887(12544, 2232), 2);
    add_background_object(create_dvwalledge1_887(12544, 2296), 2);
    add_background_object(create_dvrockceiling_891(12544, 2344), 2);
    add_background_object(create_dvceilingoverlay_915(12544, 2344), 2);
    add_background_object(create_dvladder_914(12384, 2472), 2);
    add_background_object(create_dvrockslope4_900(11376, 2968), 2);
    add_background_object(create_dvrockslope4_901(11504, 2968), 2);
    add_background_object(create_dvwalledge2_978(11336, 2920), 2);
    add_background_object(create_dvrockedge1_905(11344, 2976), 2);
    add_background_object(create_dvwalledge2_978(11336, 2880), 2);
    add_background_object(create_dvrockslope4_900(11896, 2912), 2);
    add_background_object(create_dvwall6_982(11800, 2992), 2);
    add_background_object(create_dvrockslope1_896(11792, 2992), 2);
    add_background_object(create_dvrockedge2_904(11760, 2968), 2);
    add_background_object(create_dvrockedge1_905(11776, 2992), 2);
    add_background_object(create_dvwalledge1_887(11864, 2936), 2);
    add_background_object(create_dvrockedge2_904(11848, 2992), 2);
    add_background_object(create_dvrockedge1_905(11864, 2920), 2);
    add_background_object(create_dvrockslope4_900(11632, 2968), 2);
    add_background_object(create_dvrockslope1_896(12024, 2912), 2);
    add_background_object(create_dvwall1_482(12632, 3128), 2);
    add_background_object(create_dvwall1_482(12632, 2744), 2);
    add_background_object(create_dvwall1_482(4592, 656), 2);
    add_background_object(create_dvwalledge1_887(4592, 784), 2);
    add_background_object(create_dvladder_914(4216, 584), 2);
    add_background_object(create_dvladder_914(4216, 552), 2);
    add_background_object(create_dvladder_914(4216, 520), 2);
    add_background_object(create_dvladder_914(4216, 488), 2);
    add_background_object(create_dvladder_914(4216, 456), 2);
    add_background_object(create_dvrockedge1_905(4256, 456), 2);
    add_background_object(create_dvrockslope4_901(4288, 456), 2);
    add_background_object(create_levelbackdrop02_875(4592, 592), 2);
    add_background_object(create_levelbackdrop02_875(4592, 528), 2);
    add_background_object(create_levelbackdrop02_875(4656, 528), 2);
    add_background_object(create_levelbackdrop02_875(4656, 592), 2);
    add_background_object(create_dvwall4_485(4592, 528), 2);
    add_background_object(create_dvwall4_485(4592, 624), 2);
    add_background_object(create_dvwalledge1_887(4592, 656), 2);
    add_background_object(create_dvwalledge1_887(4592, 720), 2);
    add_background_object(create_dvwalledge1_887(4592, 528), 2);
    add_background_object(create_dvwalledge1_887(4592, 592), 2);
    add_background_object(create_dvrockslope4_901(4560, 504), 2);
    add_background_object(create_dvwalledge2_978(4704, 528), 2);
    add_background_object(create_dvrockedge2_904(4688, 512), 2);
    add_background_object(create_dvwalledge2_978(4704, 592), 2);
    add_background_object(create_dvrockedge1_905(4720, 640), 2);
    add_background_object(create_dvwall6_982(4808, 760), 2);
    add_background_object(create_dvwall4_485(4760, 672), 2);
    add_background_object(create_dvrockslope1_896(4752, 640), 2);
    add_background_object(create_dvrockslope5_912(4816, 640), 2);
    add_background_object(create_dvrockedge1_905(4528, 504), 2);
    add_background_object(create_dvrockedge2_904(4416, 464), 2);
    add_background_object(create_dvladder_914(4216, 616), 2);
    add_background_object(create_levelbackdrop8_894(11824, 2688), 2);
    add_background_object(create_levelbackdrop02_875(11888, 2688), 2);
    add_background_object(create_levelbackdrop02_875(11952, 2688), 2);
    add_background_object(create_levelbackdrop9_878(12016, 2688), 2);
    add_background_object(create_dvrockceiling_891(11888, 2728), 2);
    add_background_object(create_dvceilingoverlay_915(11888, 2728), 2);
    add_background_object(create_dvwalledge2_978(12104, 2920), 2);
    add_background_object(create_dvwalledge2_978(12104, 2952), 2);
    add_background_object(create_dvrockedge2_904(12088, 2912), 2);
    add_background_object(create_dvwall1_482(12376, 2936), 2);
    add_background_object(create_dvwall1_482(12376, 2744), 2);
    add_background_object(create_dvwall6_982(12072, 3000), 2);
    add_background_object(create_dvrockedge2_904(12216, 2992), 2);
    add_background_object(create_dvrockedge1_905(12120, 2992), 2);
    add_background_object(create_geyserbase2_987(12152, 2984), 2);
    add_background_object(create_dvwall4_485(12344, 3008), 2);
    add_background_object(create_levelbackdrop02_875(12312, 2944), 2);
    add_background_object(create_levelbackdrop02_875(12248, 2944), 2);
    add_background_object(create_dvwall4_485(12256, 2944), 2);
    add_background_object(create_dvwalledge1_887(12248, 2944), 2);
    add_background_object(create_dvrockedge1_905(12248, 2928), 2);
    add_background_object(create_dvrockslope1_896(12280, 2928), 2);
    add_background_object(create_dvrockedge2_904(12344, 2928), 2);
    add_background_object(create_dvceilingoverlay2_916(12328, 2720), 2);
    add_background_object(create_dvwalledge1_887(12376, 2744), 2);
    add_background_object(create_dvwalledge1_887(12376, 2808), 2);
    add_background_object(create_dvwalledge1_887(12376, 2872), 2);
    add_background_object(create_levelbackdrop8_894(12544, 1976), 2);
    add_background_object(create_levelbackdrop02_875(12608, 1976), 2);
    add_background_object(create_levelbackdrop02_875(12672, 1976), 2);
    add_background_object(create_levelbackdrop02_875(12736, 1976), 2);
    add_background_object(create_levelbackdrop02_875(12800, 1976), 2);
    add_background_object(create_dvrockslope4_900(12576, 1960), 2);
    add_background_object(create_dvrockedge1_905(12544, 1968), 2);
    add_background_object(create_dvrockceiling_891(12608, 2016), 2);
    add_background_object(create_dvrockceiling_891(12736, 2016), 2);
    add_background_object(create_dvceilingoverlay_915(12608, 2016), 2);
    add_background_object(create_dvceilingoverlay_915(12736, 2016), 2);
    add_background_object(create_dvrockslope1_896(12832, 2152), 2);
    add_background_object(create_dvwall2_886(12736, 1784), 2);
    add_background_object(create_dvrockedge2_904(12704, 1960), 2);
    add_background_object(create_dvwall4_485(12736, 1880), 2);
    add_background_object(create_dvwalledge1_887(12736, 1784), 2);
    add_background_object(create_dvwalledge1_887(12736, 1848), 2);
    add_background_object(create_dvwalledge1_887(12736, 1912), 2);
    add_background_object(create_dvwall2_886(12736, 1592), 2);
    add_background_object(create_dvwalledge1_887(12736, 1592), 2);
    add_background_object(create_dvwalledge1_887(12736, 1656), 2);
    add_background_object(create_dvwalledge1_887(12736, 1720), 2);
    add_background_object(create_dvwall2_886(12736, 1400), 2);
    add_background_object(create_dvwalledge1_887(12736, 1400), 2);
    add_background_object(create_dvwalledge1_887(12736, 1464), 2);
    add_background_object(create_dvwalledge1_887(12736, 1528), 2);
    add_background_object(create_dvwall2_886(12736, 1208), 2);
    add_background_object(create_dvwalledge1_887(12736, 1208), 2);
    add_background_object(create_dvwalledge1_887(12736, 1272), 2);
    add_background_object(create_dvwalledge1_887(12736, 1336), 2);
    add_background_object(create_dvwall2_886(12736, 1016), 2);
    add_background_object(create_dvwalledge1_887(12736, 1016), 2);
    add_background_object(create_dvwalledge1_887(12736, 1080), 2);
    add_background_object(create_dvwalledge1_887(12736, 1144), 2);
    add_background_object(create_dvwall2_886(12736, 824), 2);
    add_background_object(create_dvwalledge1_887(12736, 824), 2);
    add_background_object(create_dvwalledge1_887(12736, 888), 2);
    add_background_object(create_dvwalledge1_887(12736, 952), 2);
    add_background_object(create_dvwall2_886(12736, 632), 2);
    add_background_object(create_dvwalledge1_887(12736, 632), 2);
    add_background_object(create_dvwalledge1_887(12736, 696), 2);
    add_background_object(create_dvwalledge1_887(12736, 760), 2);
    add_background_object(create_dvwall2_886(12736, 440), 2);
    add_background_object(create_dvwalledge1_887(12736, 440), 2);
    add_background_object(create_dvwalledge1_887(12736, 504), 2);
    add_background_object(create_dvwalledge1_887(12736, 568), 2);
    add_background_object(create_dvwall2_886(12736, 248), 2);
    add_background_object(create_dvwalledge1_887(12736, 248), 2);
    add_background_object(create_dvwalledge1_887(12736, 312), 2);
    add_background_object(create_dvwalledge1_887(12736, 376), 2);
    add_background_object(create_dvwall2_886(12736, 56), 2);
    add_background_object(create_dvwalledge1_887(12736, 56), 2);
    add_background_object(create_dvwalledge1_887(12736, 120), 2);
    add_background_object(create_dvwalledge1_887(12736, 184), 2);
    add_background_object(create_dvwall2_886(12736, -136), 2);
    add_background_object(create_dvwalledge1_887(12736, -136), 2);
    add_background_object(create_dvwalledge1_887(12736, -72), 2);
    add_background_object(create_dvwalledge1_887(12736, -8), 2);
    add_background_object(create_dvwall4_485(12392, 2704), 2);
    add_background_object(create_dvwall6_982(12496, 2728), 2);
    add_background_object(create_dvwall6_982(12600, 2720), 2);
    add_background_object(create_dvcoral6_973(11752, 2872), 2);
    add_background_object(create_dvsapling_971(9216, 824), 2);
    add_background_object(create_levelbackdrop02_875(2552, 384), 2);
    add_background_object(create_levelbackdrop02_875(2488, 384), 2);
    add_background_object(create_levelbackdrop02_875(2552, 320), 2);
    add_background_object(create_levelbackdrop02_875(2488, 320), 2);
    add_background_object(create_levelbackdrop02_875(2552, 256), 2);
    add_background_object(create_levelbackdrop02_875(2488, 256), 2);
    add_background_object(create_levelbackdrop02_875(2552, 192), 2);
    add_background_object(create_levelbackdrop02_875(2488, 192), 2);
    add_background_object(create_levelbackdrop02_875(2552, 128), 2);
    add_background_object(create_levelbackdrop02_875(2488, 128), 2);
    add_background_object(create_levelbackdrop02_875(2552, 64), 2);
    add_background_object(create_levelbackdrop02_875(2488, 64), 2);
    add_background_object(create_levelbackdrop02_875(2552, 0), 2);
    add_background_object(create_levelbackdrop02_875(2488, 0), 2);
    add_background_object(create_dvwall4_485(2488, 320), 2);
    add_background_object(create_dvwall6_982(2488, 216), 2);
    add_background_object(create_dvwall4_485(2488, 120), 2);
    add_background_object(create_dvwall4_485(2488, 16), 2);
    add_background_object(create_dvwalledge2_978(2600, 384), 2);
    add_background_object(create_dvwalledge1_887(2488, 384), 2);
    add_background_object(create_dvrockceiling_891(2488, 432), 2);
    add_background_object(create_dvceilingoverlay_915(2488, 432), 2);
    add_background_object(create_dvwalledge1_887(2488, 320), 2);
    add_background_object(create_dvwalledge2_978(2600, 320), 2);
    add_background_object(create_dvwalledge1_887(2488, 256), 2);
    add_background_object(create_dvwalledge2_978(2600, 256), 2);
    add_background_object(create_dvwalledge1_887(2488, 192), 2);
    add_background_object(create_dvwalledge2_978(2600, 192), 2);
    add_background_object(create_dvwalledge1_887(2488, 128), 2);
    add_background_object(create_dvwalledge2_978(2600, 128), 2);
    add_background_object(create_dvwalledge1_887(2488, 64), 2);
    add_background_object(create_dvwalledge2_978(2600, 64), 2);
    add_background_object(create_dvwalledge1_887(2488, 0), 2);
    add_background_object(create_dvwalledge2_978(2600, 0), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_dvrockedge1_905(232, 752), 2);
    add_background_object(create_dvrockslope4_901(264, 752), 2);
    add_background_object(create_dvrockedge2_904(392, 760), 2);
    add_background_object(create_levelbackdrop8_894(6768, 984), 2);
    add_background_object(create_dvwall4_485(6752, 888), 2);
    add_background_object(create_dvrockslope1_896(6688, 888), 2);
    add_background_object(create_dvrockslope4_900(6752, 880), 2);
    add_background_object(create_dvrockedge2_904(864, 904), 2);
    add_background_object(create_dvceilingoverlay_915(768, 904), 2);
    add_background_object(create_dvceilingoverlay_915(704, 904), 2);
    add_background_object(create_dvwall1_482(0, 192), 2);
    add_background_object(create_dvwalledge2_978(240, 320), 2);
    add_background_object(create_dvwalledge2_978(240, 256), 2);
    add_background_object(create_dvwalledge2_978(240, 192), 2);
    add_background_object(create_dvwall1_482(0, 0), 2);
    add_background_object(create_dvwalledge2_978(240, 128), 2);
    add_background_object(create_dvwalledge2_978(240, 64), 2);
    add_background_object(create_dvwalledge2_978(240, 0), 2);
    add_background_object(create_dvwalledge1_887(2936, 952), 2);
    add_background_object(create_dvrockedge1_905(2936, 944), 2);
    add_background_object(create_dvceilingoverlay_915(2936, 1000), 2);
    add_background_object(create_dvrockslope2_910(3288, 1416), 2);
    add_background_object(create_dvsapling_971(12480, 2264), 2);
    add_background_object(create_dvwall3_873(9024, 640), 2);
    add_background_object(create_dvwall3_873(9024, 448), 2);
    add_background_object(create_dvwall3_873(9024, 256), 2);
    add_background_object(create_dvwall3_873(9024, 64), 2);
    add_background_object(create_dvwall3_873(9024, -128), 2);
    add_background_object(create_dvwalledge1_887(9024, 768), 2);
    add_background_object(create_dvwalledge2_978(9136, 768), 2);
    add_background_object(create_dvwalledge1_887(9024, 704), 2);
    add_background_object(create_dvwalledge2_978(9136, 704), 2);
    add_background_object(create_dvwalledge1_887(9024, 640), 2);
    add_background_object(create_dvwalledge2_978(9136, 640), 2);
    add_background_object(create_dvwalledge1_887(9024, 576), 2);
    add_background_object(create_dvwalledge1_887(9024, 384), 2);
    add_background_object(create_dvwalledge2_978(9136, 384), 2);
    add_background_object(create_dvwalledge1_887(9024, 320), 2);
    add_background_object(create_dvwalledge2_978(9136, 320), 2);
    add_background_object(create_dvwalledge1_887(9024, 256), 2);
    add_background_object(create_dvwalledge2_978(9136, 256), 2);
    add_background_object(create_dvwalledge1_887(9024, 192), 2);
    add_background_object(create_dvwalledge2_978(9136, 192), 2);
    add_background_object(create_dvwalledge1_887(9024, 128), 2);
    add_background_object(create_dvwalledge2_978(9136, 128), 2);
    add_background_object(create_dvwalledge1_887(9024, 64), 2);
    add_background_object(create_dvwalledge2_978(9136, 64), 2);
    add_background_object(create_dvwalledge1_887(9024, 0), 2);
    add_background_object(create_dvwalledge2_978(9136, 0), 2);
    add_background_object(create_levelbackdrop02_875(8960, 512), 2);
    add_background_object(create_levelbackdrop02_875(8960, 448), 2);
    add_background_object(create_dvwall4_485(8968, 448), 2);
    add_background_object(create_dvwalledge1_887(8960, 448), 2);
    add_background_object(create_dvwalledge1_887(8960, 512), 2);
    add_background_object(create_dvrockedge1_905(8960, 440), 2);
    add_background_object(create_dvrockedge2_904(8992, 440), 2);
    add_background_object(create_dvrockceiling_891(8960, 560), 2);
    add_background_object(create_dvwall6_982(9024, 512), 2);
    add_background_object(create_dvwalledge2_978(9136, 448), 2);
    add_background_object(create_dvwalledge2_978(9136, 512), 2);
    add_background_object(create_dvwalledge2_978(9136, 576), 2);
    add_background_object(create_dvceilingoverlay_915(8960, 560), 2);
    add_background_object(create_dvrockceiling_891(9024, 816), 2);
    add_background_object(create_dvceilingoverlay_915(9024, 816), 2);
    add_background_object(create_dvgrass4_506(3528, 2112), 2);
    add_background_object(create_dvgrass8_921(3528, 2280), 2);
    add_background_object(create_dvgrass1_507(3528, 2032), 2);
    add_background_object(create_dvgrass2_508(3560, 2032), 2);
    add_background_object(create_dvgrass3_505(3528, 2072), 2);
    add_background_object(create_dvgrass5_509(3528, 2144), 2);
    add_background_object(create_dvgrass6_504(3592, 2032), 2);
    add_background_object(create_dvgrass7_922(3528, 2184), 2);
    add_background_object(create_dvgrass1_507(3448, 1528), 2);
    add_background_object(create_dvgrass3_505(3480, 1528), 2);
    add_background_object(create_dvgrass7_922(3608, 1536), 2);
    add_background_object(create_dvgrass5_509(3736, 1592), 2);
    add_background_object(create_dvgrass3_505(3864, 1592), 2);
    add_background_object(create_dvgrass8_921(4056, 1536), 2);
    add_background_object(create_dvgrass5_509(4184, 1528), 2);
    add_background_object(create_dvgrass2_508(4312, 1528), 2);
    add_background_object(create_dvgrass5_509(6056, 1600), 2);
    add_background_object(create_dvgrass2_508(6184, 1600), 2);
    add_background_object(create_dvgrass2_508(6096, 1352), 2);
    add_background_object(create_dvgrass3_505(5968, 1344), 2);
    add_background_object(create_dvgrass1_507(5936, 1344), 2);
    add_background_object(create_dvceilingoverlay_915(6000, 1360), 2);
    add_background_object(create_dvgrass2_508(5840, 1352), 2);
    add_background_object(create_dvgrass1_507(5744, 1352), 2);
    add_background_object(create_dvgrass6_504(5776, 1352), 2);
    add_background_object(create_dvgrass1_507(5872, 1280), 2);
    add_background_object(create_dvgrass2_508(5904, 1280), 2);
    add_background_object(create_dvgrass1_507(5680, 1216), 2);
    add_background_object(create_dvgrass2_508(5712, 1216), 2);
    add_background_object(create_dvgrass1_507(9960, 2704), 2);
    add_background_object(create_dvgrass2_508(10040, 2704), 2);
    add_background_object(create_dvgrass6_504(9984, 2704), 2);
    add_background_object(create_dvgrass2_508(9936, 2608), 2);
    add_background_object(create_dvgrass8_921(9808, 2608), 2);
    add_background_object(create_dvgrass1_507(9776, 2672), 2);
    add_background_object(create_dvgrass2_508(9400, 2520), 2);
    add_background_object(create_dvgrass6_504(9336, 2520), 2);
    add_background_object(create_dvgrass1_507(9304, 2520), 2);
    add_background_object(create_dvgrass1_507(10416, 2512), 2);
    add_background_object(create_dvgrass5_509(10448, 2504), 2);
    add_background_object(create_dvgrass2_508(10576, 2504), 2);
    add_background_object(create_dvgrass1_507(10648, 2656), 2);
    add_background_object(create_dvgrass8_921(10680, 2592), 2);
    add_background_object(create_dvgrass2_508(10808, 2592), 2);
    add_background_object(create_dvgrass1_507(11016, 2656), 2);
    add_background_object(create_dvgrass7_922(11048, 2656), 2);
    add_background_object(create_dvgrass6_504(11296, 2712), 2);
    add_background_object(create_dvgrass5_509(11176, 2712), 2);
    add_background_object(create_dvgrass2_508(11360, 2712), 2);
    add_background_object(create_dvgrass1_507(11824, 2680), 2);
    add_background_object(create_dvgrass5_509(11856, 2672), 2);
    add_background_object(create_dvgrass6_504(11984, 2672), 2);
    add_background_object(create_dvgrass2_508(12048, 2672), 2);
    add_background_object(create_dvgrass1_507(12256, 2672), 2);
    add_background_object(create_dvgrass5_509(12288, 2664), 2);
    add_background_object(create_dvgrass6_504(12416, 2664), 2);
    add_background_object(create_dvgrass2_508(12480, 2664), 2);
    add_background_object(create_dvgrass6_504(12576, 2536), 2);
    add_background_object(create_dvgrass1_507(12544, 2536), 2);
    add_background_object(create_dvgrass2_508(12640, 2536), 2);
    add_background_object(create_dvgrass6_504(12456, 2344), 2);
    add_background_object(create_dvgrass1_507(12424, 2344), 2);
    add_background_object(create_dvgrass2_508(12520, 2344), 2);
    add_background_object(create_dvceilingoverlay_915(12424, 2344), 2);
    add_background_object(create_dvgrass1_507(12544, 2152), 2);
    add_background_object(create_dvgrass5_509(12576, 2144), 2);
    add_background_object(create_dvgrass3_505(12704, 2144), 2);
    add_background_object(create_dvrockslope1_896(5432, 488), 2);
    add_background_object(create_dvrockedge1_905(5400, 488), 2);
    add_background_object(create_dvrockedge2_904(5496, 488), 2);
    add_background_object(create_spiraltunnel1_989(9912, 1040), 2);
    add_background_object(create_dvwall6_982(10144, 1048), 2);
    add_background_object(create_dvwall4_485(9800, 1096), 2);
    add_background_object(create_dvrockedge2_904(9816, 1088), 2);
    add_background_object(create_dvrockslope9_902(9688, 992), 2);
    add_background_object(create_dvwall6_982(9808, 1184), 2);
    add_background_object(create_dvrockceiling_891(9912, 1344), 2);
    add_background_object(create_dvwall4_485(10128, 1136), 2);
    add_background_object(create_dvrockslope2_910(9824, 1088), 2);
    add_background_object(create_dvceilingoverlay_915(296, 760), 2);
    add_background_object(create_dvceilingoverlay_915(168, 760), 2);
    add_background_object(create_dvwalledge2_978(10792, 1888), 2);
    add_background_object(create_dvwalledge2_978(10792, 1952), 2);
    add_background_object(create_dvwalledge2_978(10792, 2016), 2);
    add_background_object(create_dvwalledge2_978(10792, 2080), 2);
    add_background_object(create_dvwalledge2_978(11240, 1440), 2);
    add_background_object(create_dvwalledge2_978(11240, 1504), 2);
    add_background_object(create_dvwalledge2_978(11240, 1568), 2);
    add_background_object(create_dvwalledge2_978(11240, 1632), 2);
    add_background_object(create_dvwalledge2_978(11176, 1696), 2);
    add_background_object(create_dvwalledge2_978(11176, 1760), 2);
    add_background_object(create_dvwalledge2_978(11176, 1824), 2);
    add_background_object(create_dvrockceiling_891(11064, 1872), 2);
    add_background_object(create_dvrockceiling_891(10936, 1872), 2);
    add_background_object(create_dvrockceiling_891(10808, 1872), 2);
    add_background_object(create_dvrockceiling_891(11128, 1680), 2);
    add_background_object(create_dvrockceiling_891(11000, 1680), 2);
    add_background_object(create_dvrockceiling_891(10872, 1680), 2);
    add_background_object(create_dvwalledge2_978(11240, 1184), 2);
    add_background_object(create_dvwalledge2_978(11240, 1248), 2);
    add_background_object(create_dvwalledge2_978(11240, 1312), 2);
    add_background_object(create_dvwalledge2_978(11240, 1376), 2);
    add_background_object(create_dvwalledge2_978(11240, 928), 2);
    add_background_object(create_dvwalledge2_978(11240, 992), 2);
    add_background_object(create_dvwalledge2_978(11240, 1056), 2);
    add_background_object(create_dvwalledge2_978(11240, 1120), 2);
    add_background_object(create_dvwalledge2_978(11240, 800), 2);
    add_background_object(create_dvwalledge2_978(11240, 864), 2);
    add_background_object(create_dvwalledge2_978(11240, 544), 2);
    add_background_object(create_dvwalledge2_978(11240, 608), 2);
    add_background_object(create_dvwalledge2_978(11240, 672), 2);
    add_background_object(create_dvwalledge2_978(11240, 736), 2);
    add_background_object(create_dvwalledge2_978(11240, 480), 2);
    add_background_object(create_dvwalledge2_978(11240, 224), 2);
    add_background_object(create_dvwalledge2_978(11240, 288), 2);
    add_background_object(create_dvwalledge2_978(11240, 352), 2);
    add_background_object(create_dvwalledge2_978(11240, 416), 2);
    add_background_object(create_dvwalledge2_978(11240, 32), 2);
    add_background_object(create_dvwalledge2_978(11240, 96), 2);
    add_background_object(create_dvwalledge2_978(11240, 160), 2);
    add_background_object(create_dvwalledge2_978(11240, -32), 2);
    add_object(create_objectjumppad_530(4032, 1224), 2);
    add_object(create_objectjumppad_530(3728, 1224), 2);
    add_object(create_objectjumppad_530(3400, 1224), 2);
    add_object(create_objectjumppad_530(3400, 1416), 2);
    add_object(create_enemycacteon_990(3968, 1585), 2);
    add_object(create_switchpressureplate_752(2888, 1160), 2);
    add_object(create_switchdoor_992(3000, 1016), 2);
    add_object(create_levellayer1loop03_993(-560, 1800), 2);
    add_object(create_levellayer115_994(-544, 1872), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_771(8360, 821), 2);
    add_object(create_playerstartingpoint_358(21, 989), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_bosssnakebody_995(8660, -36), 2);
    add_object(create_bosssnakebody_995(8684, -52), 2);
    add_object(create_bosssnakebody_995(8700, -76), 2);
    add_object(create_bosssnakebody_995(8684, -100), 2);
    add_object(create_bosssnakebody_995(8660, -116), 2);
    add_object(create_bosssnakebody_995(8644, -140), 2);
    add_object(create_bosssnakebody_995(8660, -164), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_halfcorkscrewleft_941(7192, 879), 2);
    add_object(create_halfcorkscrewright_942(7976, 879), 2);
    add_object(create_layerchangeswitch_404(7296, 792), 2);
    add_object(create_layerchangeswitch_404(7856, 792), 2);
    add_object(create_layerchangeswitch_404(1832, 832), 2);
    add_object(create_layerchangeto0_405(1672, 1040), 2);
    add_object(create_layerchangeto0_405(1672, 992), 2);
    add_object(create_layerchangeto1_406(1992, 1040), 2);
    add_object(create_layerchangeto1_406(1992, 992), 2);
    add_object(create_levellayer115_994(1680, 960), 2);
    add_object(create_levellayer115_994(1680, 1024), 2);
    add_object(create_levellayer1loop03_993(1712, 960), 2);
    add_object(create_levellayer016_996(1968, 960), 2);
    add_object(create_levellayer016_996(1968, 1024), 2);
    add_object(create_levellayer0loop04_997(1840, 960), 2);
    add_object(create_gimmickbridge12logs_353(904, 720), 2);
    add_object(create_enemygansekijr_816(599, 1140), 2);
    add_object(create_yellowspringright_435(896, 1176), 2);
    add_object(create_levelvalleyplatform1_939(2936, 768), 2);
    add_object(create_laddertop_357(2396, 975), 2);
    add_object(create_objectcrystal_279(2477, 850), 2);
    add_object(create_objectcrystal_279(2525, 850), 2);
    add_object(create_objectcrystal_279(2573, 850), 2);
    add_object(create_objectcrystal_279(2621, 850), 2);
    add_object(create_objectcrystal_279(2669, 850), 2);
    add_object(create_objectcrystal_279(2717, 850), 2);
    add_object(create_objectcrystal_279(2765, 850), 2);
    add_object(create_objectcrystal_279(2813, 850), 2);
    add_object(create_objectcrystal_279(2861, 850), 2);
    add_object(create_yellowspringup_434(3160, 920), 2);
    add_object(create_enemyturretus_938(3423, 688), 2);
    add_object(create_monitorcrystals_324(3224, 776), 2);
    add_object(create_enemyturretus_938(3199, 632), 2);
    add_object(create_pushableblock1_531(2805, 537), 2);
    add_object(create_objectpetal_302(2977, 737), 2);
    add_object(create_levelgeyserplate_998(448, 1071), 2);
    add_object(create_objectpetal_302(3025, 737), 2);
    add_object(create_levelgeyserplate_998(4024, 1591), 2);
    add_object(create_laddertop_357(3276, 1207), 2);
    add_object(create_objectcrystal_279(3421, 1122), 2);
    add_object(create_objectcrystal_279(3421, 1090), 2);
    add_object(create_objectcrystal_279(3397, 1066), 2);
    add_object(create_objectcrystal_279(3373, 1090), 2);
    add_object(create_objectcrystal_279(3373, 1122), 2);
    add_object(create_objectcrystal_279(3397, 1146), 2);
    add_object(create_levelgeyserplate_998(4472, 1383), 2);
    add_object(create_gimmickhangingidlesensor_740(4729, 1072), 2);
    add_object(create_gimmickhangingidlesensor_740(4809, 1072), 2);
    add_object(create_objectcrystal_279(4037, 1266), 2);
    add_object(create_enemydragonfly_944(4935, 1180), 2);
    add_object(create_enemydragonfly_944(4271, 1044), 2);
    add_object(create_gimmickhangingidlesensor_740(4649, 1072), 2);
    add_object(create_laddertop_357(2116, 783), 2);
    add_object(create_objectcrystal_279(4477, 1242), 2);
    add_object(create_objectcrystal_279(4477, 1194), 2);
    add_object(create_objectcrystal_279(4477, 1146), 2);
    add_object(create_objectcrystal_279(4477, 1098), 2);
    add_object(create_gimmickhangingidlesensor_740(4033, 1240), 2);
    add_object(create_levelgeyserplate_998(4120, 1167), 2);
    add_object(create_gimmickhangingidlesensor_740(4113, 1240), 2);
    add_object(create_gimmickhangingidlesensor_740(4193, 1240), 2);
    add_object(create_gimmickhangingidlesensor_740(4273, 1240), 2);
    add_object(create_objectcrystal_279(4117, 1266), 2);
    add_object(create_objectcrystal_279(4197, 1266), 2);
    add_object(create_objectcrystal_279(4277, 1266), 2);
    add_object(create_gimmickbridge12logs_353(5104, 776), 2);
    add_object(create_gimmickbridge12logs_353(4088, 888), 2);
    add_object(create_levelvalleyplatform1_939(5048, 640), 2);
    add_object(create_enemydragonfly_944(4391, 780), 2);
    add_object(create_levelgeyserplate_998(5616, 1135), 2);
    add_object(create_levelvalleyplatform1_939(5208, 552), 2);
    add_object(create_enemygansekijr_816(5903, 1268), 2);
    add_object(create_hazardspikesup_950(5840, 1320), 2);
    add_object(create_hazardspikesup_950(5808, 1320), 2);
    add_object(create_layerchangeswitch_404(7032, 960), 2);
    add_object(create_layerchangeto0_405(6848, 1152), 2);
    add_object(create_layerchangeto0_405(6848, 1088), 2);
    add_object(create_layerchangeto1_406(7224, 1152), 2);
    add_object(create_layerchangeto1_406(7224, 1088), 2);
    add_object(create_levellayer115_994(6880, 1088), 2);
    add_object(create_levellayer115_994(6880, 1152), 2);
    add_object(create_levellayer1loop03_993(6912, 1088), 2);
    add_object(create_levellayer016_996(7168, 1088), 2);
    add_object(create_levellayer016_996(7168, 1152), 2);
    add_object(create_levellayer0loop04_997(7040, 1088), 2);
    add_object(create_levelgeyserplate_998(7528, 1079), 2);
    add_object(create_levelgeyserplate_998(7656, 1079), 2);
    add_object(create_layerchangeswitch_404(7216, 832), 2);
    add_object(create_layerchangeswitch_404(7936, 832), 2);
    add_object(create_breakablerock_951(7872, 1048), 2);
    add_object(create_breakablerock_951(7904, 1048), 2);
    add_object(create_monitorrings_407(7968, 1056), 2);
    add_object(create_levelgeyserplate_998(7784, 1079), 2);
    add_object(create_objectcrystal_279(5733, 1450), 2);
    add_object(create_objectcrystal_279(5773, 1450), 2);
    add_object(create_objectcrystal_279(5813, 1450), 2);
    add_object(create_objectcrystal_279(5853, 1450), 2);
    add_object(create_objectcrystal_279(6213, 1482), 2);
    add_object(create_objectcrystal_279(6213, 1434), 2);
    add_object(create_objectcrystal_279(6213, 1386), 2);
    add_object(create_objectcrystal_279(5621, 930), 2);
    add_object(create_objectcrystal_279(5597, 906), 2);
    add_object(create_objectcrystal_279(5645, 906), 2);
    add_object(create_objectcrystal_279(5621, 882), 2);
    add_object(create_objectcrystal_279(5085, 610), 2);
    add_object(create_objectcrystal_279(5141, 610), 2);
    add_object(create_objectcrystal_279(5245, 522), 2);
    add_object(create_objectcrystal_279(5301, 522), 2);
    add_object(create_enemyturretus_938(6335, 880), 2);
    add_object(create_enemyturretus_938(7007, 864), 2);
    add_object(create_monitorcrystals_324(4016, 912), 2);
    add_object(create_bossserpentinehead_948(8692, -168), 2);
    add_object(create_bosssnakehitbox_999(8748, -120), 2);
    add_object(create_cameratriggerboss_424(8568, 728), 2);
    add_object(create_bossgeyseroverlap2_1000(8384, 856), 2);
    add_object(create_bossgeyseroverlap2_1000(8640, 856), 2);
    add_object(create_bossgeyseroverlap2_1000(8896, 856), 2);
    add_object(create_bossgeyseroverlap1_1001(8512, 888), 2);
    add_object(create_bossgeyseroverlap1_1001(8768, 888), 2);
    add_object(create_objectpetal_302(2017, 729), 2);
    add_object(create_objectpetal_302(1961, 729), 2);
    add_object(create_objectpetal_302(1769, 561), 2);
    add_object(create_objectpetal_302(1657, 561), 2);
    add_object(create_objectpetal_302(1713, 537), 2);
    add_object(create_yellowspringleft_436(10760, 1200), 2);
    add_object(create_yellowspringleft_436(10760, 1168), 2);
    add_object(create_yellowspringleft_436(10760, 1136), 2);
    add_object(create_breakablerock_951(9504, 2256), 2);
    add_object(create_breakablerock_951(9504, 2288), 2);
    add_object(create_breakablerock_951(9504, 2320), 2);
    add_object(create_objectcrystal_279(9573, 2274), 2);
    add_object(create_objectcrystal_279(9669, 2338), 2);
    add_object(create_objectcrystal_279(9573, 2338), 2);
    add_object(create_objectcrystal_279(9589, 2306), 2);
    add_object(create_objectcrystal_279(9653, 2306), 2);
    add_object(create_objectcrystal_279(9605, 2274), 2);
    add_object(create_objectcrystal_279(9605, 2338), 2);
    add_object(create_objectcrystal_279(9637, 2274), 2);
    add_object(create_objectcrystal_279(9637, 2338), 2);
    add_object(create_objectcodec_354(9673, 2276), 2);
    add_object(create_objectcrystal_279(9621, 2306), 2);
    add_object(create_objectcrystal_279(9557, 2306), 2);
    add_object(create_objectpetal_302(10585, 1145), 2);
    add_object(create_objectpetal_302(10537, 1145), 2);
    add_object(create_objectpetal_302(9329, 2449), 2);
    add_object(create_objectpetal_302(9377, 2385), 2);
    add_object(create_objectpetal_302(9425, 2449), 2);
    add_object(create_breakablerock_951(10184, 1304), 2);
    add_object(create_spinninglog_1003(10240, 2712), 2);
    add_object(create_spinninglogmask_1004(10240, 2715), 2);
    add_object(create_spinninglog_1003(10472, 2712), 2);
    add_object(create_spinninglogmask_1004(10472, 2715), 2);
    add_object(create_enemysporepod_1005(10919, 2758), 2);
    add_object(create_enemylimiter_350(10933, 2650), 2);
    add_object(create_enemysporepod_1005(11479, 2886), 2);
    add_object(create_enemylimiter_350(11493, 2754), 2);
    add_object(create_yellowspringup_434(10840, 2776), 2);
    add_object(create_objectcrystal_279(10333, 2586), 2);
    add_object(create_objectcrystal_279(10373, 2586), 2);
    add_object(create_objectcrystal_279(11085, 2642), 2);
    add_object(create_objectcrystal_279(11133, 2666), 2);
    add_object(create_objectcrystal_279(11181, 2690), 2);
    add_object(create_spinninglog_1003(11648, 2720), 2);
    add_object(create_spinninglogmask_1004(11648, 2723), 2);
    add_object(create_gimmickhangingidlesensor_740(10353, 2560), 2);
    add_object(create_laddertop_357(12404, 2367), 2);
    add_object(create_yellowspringupleft_432(11832, 2960), 2);
    add_object(create_enemydragonfly_944(9623, 2580), 2);
    add_object(create_objectcrystal_279(11885, 2282), 2);
    add_object(create_objectcrystal_279(11901, 2250), 2);
    add_object(create_objectcrystal_279(11901, 2314), 2);
    add_object(create_objectcrystal_279(11917, 2282), 2);
    add_object(create_objectcrystal_279(11997, 2282), 2);
    add_object(create_objectcrystal_279(12013, 2250), 2);
    add_object(create_objectcrystal_279(12013, 2314), 2);
    add_object(create_objectcrystal_279(12029, 2282), 2);
    add_object(create_laddertop_357(4236, 479), 2);
    add_object(create_hazardspikesup_950(4376, 432), 2);
    add_object(create_hazardspikesup_950(4408, 432), 2);
    add_object(create_objectcrystal_279(4453, 370), 2);
    add_object(create_objectcrystal_279(4493, 378), 2);
    add_object(create_objectcrystal_279(4533, 394), 2);
    add_object(create_redspringupleft_439(4560, 848), 2);
    add_object(create_levelgeyserplate_998(12184, 2983), 2);
    add_object(create_yellowspringup_434(12512, 2328), 2);
    add_object(create_enemycacteon_990(10000, 2689), 2);
    add_object(create_enemydragonfly_944(11959, 2580), 2);
    add_object(create_enemystarflounder_1006(11979, 2804), 2);
    add_object(create_objectcrystal_279(12525, 2098), 2);
    add_object(create_objectcrystal_279(12525, 2138), 2);
    add_object(create_cameratriggerboss_424(8568, 536), 2);
    add_object(create_enemystarflounder_1006(12011, 2852), 2);
    add_object(create_enemystarflounder_1006(11939, 2828), 2);
    add_object(create_levelvalleyplatform1_939(3176, 328), 2);
    add_object(create_objectcodec_354(3241, 292), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_objectjumppad_530(3176, 688), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_monitorkeystone_562(256, 720), 2);
    add_object(create_objectjumppad_530(2912, 688), 2);
    add_object(create_objectcrystal_279(317, 738), 2);
    add_object(create_objectcrystal_279(349, 738), 2);
    add_object(create_objectcrystal_279(381, 738), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_objectjumppad_530(2936, 992), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_yellowspringupleft_432(1096, 1040), 2);
    add_object(create_yellowspringupright_433(864, 872), 2);
    add_object(create_objectjumppad_530(2736, 1144), 2);
    add_object(create_objectcrystal_279(2813, 1074), 2);
    add_object(create_objectcrystal_279(2909, 954), 2);
    add_object(create_objectcrystal_279(2909, 1002), 2);
    add_object(create_objectcrystal_279(2877, 1026), 2);
    add_object(create_objectcrystal_279(2845, 1050), 2);
    add_object(create_objectcrystal_279(2909, 906), 2);
    add_object(create_objectcrystal_279(2909, 858), 2);
    add_object(create_objectcrystal_279(2909, 810), 2);
    add_object(create_objectcrystal_279(2909, 762), 2);
    add_object(create_breakablerock2_1007(9024, 832), 2);
    add_object(create_monitorrings_407(12704, 1928), 2);
    add_object(create_objectcrystal_279(3429, 538), 2);
    add_object(create_objectcrystal_279(3429, 490), 2);
    add_object(create_objectcrystal_279(3429, 442), 2);
    add_object(create_objectpetal_302(3397, 1106), 2);
    add_object(create_monitorkeystone_562(5448, 456), 2);
    add_object(create_monitorkeystone_562(10424, 2480), 2);
    add_object(create_monitorcrystals_324(10456, 2480), 2);
    add_object(create_objectpetal_302(10817, 2417), 2);
    add_object(create_objectpetal_302(10793, 2377), 2);
    add_object(create_objectpetal_302(12569, 2465), 2);
    add_object(create_objectpetal_302(12649, 2465), 2);
    add_object(create_objectpetal_302(12609, 2433), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_monitorwoodshield_325(3968, 912), 2);
    add_object(create_spiraltunnelfront_955(9907, 1040), 2);
    add_object(create_spiraltunneltop_956(10048, 1094), 2);
    add_object(create_spiraltunnelbottom_957(10048, 1312), 2);
    add_object(create_spiraltunnelmask_958(9912, 1040), 2);
    add_object(create_objectfuel_528(12828, 2732), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_dvrockslope4_901(1720, 1080), 3);
    add_background_object(create_dvrockslope4_901(1976, 1080), 3);
    add_background_object(create_dvrockslope4_900(1848, 1080), 3);
    add_background_object(create_dvrockslope4_900(1592, 1080), 3);
    add_background_object(create_dvrockceiling_891(1776, 816), 3);
    add_background_object(create_dvrockceiling_891(5616, 1392), 3);
    add_background_object(create_dvrockceiling_891(5744, 1392), 3);
    add_background_object(create_dvrockceiling_891(5872, 1392), 3);
    add_background_object(create_dvrockceiling_891(6976, 944), 3);
    add_background_object(create_dvrockslope4_900(7048, 1208), 3);
    add_background_object(create_dvrockslope4_900(6792, 1208), 3);
    add_background_object(create_dvrockslope4_901(7176, 1208), 3);
    add_background_object(create_dvrockslope4_901(6920, 1208), 3);
    add_background_object(create_dvrockedge1_905(10176, 1952), 3);
    add_background_object(create_dvrockedge2_904(10208, 1952), 3);
    add_background_object(create_dvtree3_897(10096, 1800), 3);
    add_background_object(create_dvrockedge1_905(10632, 1536), 3);
    add_background_object(create_dvrockedge2_904(10664, 1536), 3);
    add_background_object(create_dvtree3_897(10552, 1384), 3);
    add_background_object(create_dvrockedge1_905(1560, 1088), 3);
    add_background_object(create_dvgrass1_507(5960, 1608), 3);
    add_background_object(create_dvgrass6_504(5992, 1608), 3);
    add_background_object(create_dvtree3_897(5880, 1456), 3);
    add_object(create_levellayer016_996(1968, 960), 3);
    add_object(create_levellayer016_996(1968, 1024), 3);
    add_object(create_levellayer0loop04_997(1840, 960), 3);
    add_object(create_levellayer016_996(7168, 1088), 3);
    add_object(create_levellayer016_996(7168, 1152), 3);
    add_object(create_levellayer0loop04_997(7040, 1088), 3);
    add_background_object(create_dvrockslope4_901(1976, 1080), 4);
    add_background_object(create_dvrockslope4_900(1848, 1080), 4);
    add_background_object(create_dvrockedge2_904(2104, 1088), 4);
    add_background_object(create_dvrockslope4_900(7048, 1208), 4);
    add_background_object(create_dvrockslope4_901(7176, 1208), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-99, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-99, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-116, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-584, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(8632, 919), 5);
    add_object(create_cameralimitbossleft_421(8240, 776), 5);
    add_object(create_cameralimitbossright_422(9039, 784), 5);
    add_object(create_cameralimitbosstop_423(8632, 632), 5);
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
    add_object(create_bubblepatch_806(-544, 85), 5);
    add_object(create_mediumbubble_769(-518, 82), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
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
    add_object(create_objectcrystal_279(9901, 770), 5);
    add_object(create_objectcrystal_279(9901, 738), 5);
    add_object(create_objectcrystal_279(9877, 770), 5);
    add_object(create_objectcrystal_279(9877, 738), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-76, 273), 5);
    add_object(create_functionmusic_1008(-152, -88), 5);
    add_object(create_queuemusic_1009(-112, -88), 5);
    add_object(create_mapdata2_32(-432, 240), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(200, -48), 6);
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
    add_object(create_guikeystone_455(184, -48), 6);
    add_object(create_guikeystone_455(168, -48), 6);
    add_object(create_guikeystone_455(152, -48), 6);
    add_object(create_guikeystone_455(136, -48), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
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
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_movesnake_running = false;
    loop_movesnake_index = 0;
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
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
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
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_next_act_running = false;
    loop_next_act_index = 0;
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
    loop_gansekijr_floor_running = false;
    loop_gansekijr_floor_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_sporepod_running = false;
    loop_sporepod_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_21, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_21, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_21, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_21, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_21, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_21, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_21, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_21, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_21, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_21, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_21, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_21, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_21, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_21, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_21, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_21, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_21, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_21, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_21, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_21, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_21, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_21, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_21, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_21, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_21, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_21, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_21, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_21, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_21, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_21, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_21, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_21, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_21, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_21, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_21, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_21, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_21, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_21, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_21, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_21, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_21, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_21, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_21, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_21, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_21, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1432_20 = loop_count;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_1411_21 = loop_count;
    not_always_501_13 = loop_count;
    not_always_1714_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1434_20 = loop_count;
    once_condition_138_0 = false;
    not_always_1410_21 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1409_21 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1408_21 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1433_20 = loop_count;
    not_always_1033_13 = loop_count;
    not_always_1406_21 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    once_condition_1734_21 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1 = true;
    not_always_130_0 = loop_count;
    not_always_1407_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
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
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1436_20 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    once_condition_1686_21 = false;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_1421_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    not_always_1643_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    once_condition_1735_21 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_hitting_1 = true;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    once_condition_1828_16 = false;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1514_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_1682_21 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1723_21 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_1973_21 = loop_count;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    once_condition_1739_21 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1412_21 = loop_count;
    not_always_1455_13 = loop_count;
    once_condition_1736_21 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_1972_21 = loop_count;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1435_20 = loop_count;
    group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_1512_16 = loop_count;
    not_always_59_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_bossinitiate_1 = true;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4706()
{
    // event 1802_22
    {
        if (!(group_main_engine_1)) goto event_1802_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.add(0, 1);
    }
    event_1802_22_end: ;
}
void Frames::event_func_4707()
{
    // event 1803_22
    {
        if (!(group_main_engine_1)) goto event_1803_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) == (60))) goto event_1803_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_animation(9);
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_x(((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(2)-(((Active*)get_instance(bossserpentinehead_948_instances))->alterables->flags.get(1)*192));
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_visible(true);
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_direction(8);
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances));
            if (parent == NULL) goto pos_end_1803_22_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1803_22_0: ;
        }
        ((Active*)get_instance(bossserpentinehead_948_instances))->move_back();
    }
    event_1803_22_end: ;
}
void Frames::event_func_4708()
{
    // event 1804_22
    {
        if (!(group_main_engine_1)) goto event_1804_22_end;
        if (!(((Active*)get_instance(bossserpentinehead_948_instances))->flags & VISIBLE)) goto event_1804_22_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1804_22_end;
        FrameObject * single_instance_1804_22_0; single_instance_1804_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1804_22_0 == NULL)
                    single_instance_1804_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1804_22_0))->set_x(((Active*)single_instance_1804_22_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1804_22_0))->set_y(((Active*)single_instance_1804_22_0)->get_y()+randrange(10));
    }
    event_1804_22_end: ;
}
void Frames::event_func_4709()
{
    // event 1805_22
    {
        if (!(group_main_engine_1)) goto event_1805_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) == (80))) goto event_1805_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_animation(0);
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_frame(1);
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_back();
        }
    }
    event_1805_22_end: ;
}
void Frames::event_func_4710()
{
    // event 1806_22
    {
        if (!(group_main_engine_1)) goto event_1806_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) >= (95))) goto event_1806_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) < (105))) goto event_1806_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->get_x()) > (((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(2)-96))) goto event_1806_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_frame(0);
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_x(((Active*)get_instance(bossserpentinehead_948_instances))->get_x()-2);
    }
    event_1806_22_end: ;
}
void Frames::event_func_4711()
{
    // event 1807_22
    {
        if (!(group_main_engine_1)) goto event_1807_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) >= (95))) goto event_1807_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(0)) < (105))) goto event_1807_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->get_x()) <= (((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.get(2)-96))) goto event_1807_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->force_frame(2);
        ((Active*)get_instance(bossserpentinehead_948_instances))->set_x(((Active*)get_instance(bossserpentinehead_948_instances))->get_x()+2);
    }
    event_1807_22_end: ;
}
