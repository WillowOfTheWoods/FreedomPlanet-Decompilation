#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5308()
{
    // event 1556_24
    {
        if (!(group_main_engine_1)) goto event_1556_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1556_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1+randrange(50));
        }
    }
    event_1556_24_end: ;
}
void Frames::event_func_5309()
{
    // event 1557_24
    {
        if (!(group_main_engine_1)) goto event_1557_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1557_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1557_24_end: ;
}
void Frames::event_func_5310()
{
    // event 1558_24
    {
        if (!(group_main_engine_1)) goto event_1558_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (100))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1558_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1558_24_end: ;
}
void Frames::event_func_5311()
{
    // event 1559_24
    {
        if (!(group_main_engine_1)) goto event_1559_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1559_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + -50));
            ((Active*)*it)->get_movement()->set_speed(15);
        }
    }
    event_1559_24_end: ;
}
void Frames::event_func_5312()
{
    // event 1560_24
    {
        if (!(group_main_engine_1)) goto event_1560_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1560_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->force_animation(1);
        }
    }
    event_1560_24_end: ;
}
void Frames::event_func_5313()
{
    // event 1561_24
    {
        if (!(group_main_engine_1)) goto event_1561_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (25))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1561_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + -50));
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1561_24_end: ;
}
void Frames::event_func_5314()
{
    // event 1562_24
    {
        if (!(group_main_engine_1)) goto event_1562_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1562_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(player_389_instances))->get_y());
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1562_24_end: ;
}
void Frames::event_func_5315()
{
    // event 1563_24
    {
        if (!(group_main_engine_1)) goto event_1563_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1563_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1563_24_end: ;
}
void Frames::event_func_5316()
{
    // event 1564_24
    {
        if (!(group_main_engine_1)) goto event_1564_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1564_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1564_24_end: ;
}
void Frames::event_func_5317()
{
    // event 1566_24
    {
        if (!(group_main_engine_1)) goto event_1566_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(7)))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1566_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1566_24_end: ;
}
void Frames::event_func_5318()
{
    // event 1567_24
    {
        if (!(group_main_engine_1)) goto event_1567_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1567_24_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyiris_1183_instances, qualifier_7)) goto event_1567_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(7)))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1567_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1567_24_end: ;
}
void Frames::event_func_5319()
{
    // event 1568_24
    {
        if (!(group_main_engine_1)) goto event_1568_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1568_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + -50));
            ((Active*)*it)->get_movement()->set_speed(15);
        }
    }
    event_1568_24_end: ;
}
void Frames::event_func_5320()
{
    // event 1569_24
    {
        if (!(group_main_engine_1)) goto event_1569_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1569_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1569_24_end: ;
}
void Frames::event_func_5321()
{
    // event 1570_24
    {
        if (!(group_main_engine_1)) goto event_1570_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1570_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1570_24_end: ;
}
void Frames::event_func_5322()
{
    // event 1571_24
    bool or_result_1571_24 = false;
    bool or_temp_result_1571_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1571_24_0_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto or_event_1571_24_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyiris_1183_instances, qualifier_7)) goto or_event_1571_24_0_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto or_event_1571_24_0_end;
        or_result_1571_24 = true;
        or_temp_result_1571_24_0 = true;
    }
    or_event_1571_24_0_end: ;
    qualifier_7.clear_saved_selection();
    enemyiris_1183_instances.clear_saved_selection();
    if (or_temp_result_1571_24_0) {
        qualifier_7.save_selection();
        enemyiris_1183_instances.save_selection();
    }
    // event 1571_24
    bool or_temp_result_1571_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1571_24_1_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto or_event_1571_24_1_end;
        or_result_1571_24 = true;
        or_temp_result_1571_24_1 = true;
        or_event_1571_24_1_end: ;
        if (or_temp_result_1571_24_1) {
            enemyiris_1183_instances.save_selection();
        }
        if (!or_result_1571_24) goto or_final_or_event_1571_24_1_end;
        enemyiris_1183_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1571_24_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1571_24_0 || or_temp_result_1571_24_1) {
            enemyiris_1183_instances.restore_selection();
        }
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1571_24_0; single_instance_1571_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyiris_1183_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1571_24_0 == NULL)
                    single_instance_1571_24_0 = new_obj;
            }
        }
        FrameObject * single_instance_1571_24_1; single_instance_1571_24_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyiris_1183_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1571_24_1 == NULL)
                    single_instance_1571_24_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1571_24_1_end: ;
}
void Frames::event_func_5323()
{
    // event 1572_24
    {
        if (!(group_main_engine_1)) goto event_1572_24_end;
        enemyextractorbase_1176_instances.clear_selection();
        for (ObjectIterator it(enemyextractorbase_1176_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(enemyextractorhead_1177_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_instance(enemyextractorhead_1177_instances, it.current_index, default_active_instance))->get_frame());
            ((Active*)*it)->set_direction(((Active*)get_instance(enemyextractorhead_1177_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(enemyextractorbase_1176_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyextractorhead_1177_instances, it.current_index));
            if (parent == NULL) goto pos_end_1572_24_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1572_24_0: ;
        }
    }
    event_1572_24_end: ;
}
void Frames::event_func_5324()
{
    // event 1573_24
    {
        if (!(group_main_engine_1)) goto event_1573_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(16))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1573_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1573_24_end: ;
}
void Frames::event_func_5325()
{
    // event 1574_24
    {
        if (!(group_main_engine_1)) goto event_1574_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1574_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1574_24_end: ;
}
void Frames::event_func_5326()
{
    // event 1575_24
    {
        if (!(group_main_engine_1)) goto event_1575_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1575_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1575_24_end: ;
}
void Frames::event_func_5327()
{
    // event 1576_24
    {
        if (!(group_main_engine_1)) goto event_1576_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1576_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1576_24_end: ;
}
void Frames::event_func_5328()
{
    // event 1577_24
    {
        if (!(group_main_engine_1)) goto event_1577_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1577_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1577_24_end: ;
}
void Frames::event_func_5329()
{
    // event 1578_24
    {
        if (!(group_main_engine_1)) goto event_1578_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (17))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1578_24_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+2, 2));
    }
    event_1578_24_end: ;
}
void Frames::event_func_5330()
{
    // event 1579_24
    {
        if (!(group_main_engine_1)) goto event_1579_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (17))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1579_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1579_24_0; single_instance_1579_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1579_24_0 == NULL)
                    single_instance_1579_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1579_24_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1579_24_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1579_24_0))->get_movement()->set_speed(((Active*)single_instance_1579_24_0)->get_movement()->get_speed()-10+randrange(20));
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1579_24_end: ;
}
void Frames::event_func_5331()
{
    // event 1580_24
    {
        if (!(group_main_engine_1)) goto event_1580_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1580_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(4, -50);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1580_24_end: ;
}
void Frames::event_func_5332()
{
    // event 1581_24
    {
        if (!(group_main_engine_1)) goto event_1581_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1581_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1581_24_end: ;
}
void Frames::event_func_5333()
{
    // event 1582_24
    bool or_result_1582_24 = false;
    bool or_temp_result_1582_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_24_0_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (8))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto or_event_1582_24_0_end;
        or_result_1582_24 = true;
        or_temp_result_1582_24_0 = true;
    }
    or_event_1582_24_0_end: ;
    enemyextractorhead_1177_instances.clear_saved_selection();
    if (or_temp_result_1582_24_0) {
        enemyextractorhead_1177_instances.save_selection();
    }
    // event 1582_24
    bool or_temp_result_1582_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_24_1_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (60))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto or_event_1582_24_1_end;
        or_result_1582_24 = true;
        or_temp_result_1582_24_1 = true;
        or_event_1582_24_1_end: ;
        if (or_temp_result_1582_24_1) {
            enemyextractorhead_1177_instances.save_selection();
        }
        if (!or_result_1582_24) goto or_final_or_event_1582_24_1_end;
        enemyextractorhead_1177_instances.empty_selection();
        if (or_temp_result_1582_24_0 || or_temp_result_1582_24_1) {
            enemyextractorhead_1177_instances.restore_selection();
        }
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    or_final_or_event_1582_24_1_end: ;
}
void Frames::event_func_5334()
{
    // event 1583_24
    {
        if (!(group_main_engine_1)) goto event_1583_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1583_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1583_24_end: ;
}
void Frames::event_func_5335()
{
    // event 1584_24
    {
        if (!(group_main_engine_1)) goto event_1584_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1584_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1584_24_end: ;
}
void Frames::event_func_5336()
{
    // event 1585_24
    {
        if (!(group_main_engine_1)) goto event_1585_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (8))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1585_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1585_24_end: ;
}
void Frames::event_func_5337()
{
    // event 1586_24
    {
        if (!(group_main_engine_1)) goto event_1586_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (40))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1586_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1586_24_0; single_instance_1586_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyspark_1101(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1586_24_0 == NULL)
                    single_instance_1586_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1586_24_0))->set_direction(((Active*)get_single(enemyextractorhead_1177_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1586_24_0))->alterables->values.set(0, ((Active*)single_instance_1586_24_0)->get_x());
        ((Active*)((Active*)single_instance_1586_24_0))->alterables->values.set(1, ((Active*)single_instance_1586_24_0)->get_y());
        FrameObject * single_instance_1586_24_1; single_instance_1586_24_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1586_24_1 == NULL)
                    single_instance_1586_24_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1586_24_1))->set_scale(0.5);
        media.play_id(SOUND_SHOCKWAVE_67, -1, 1);
    }
    event_1586_24_end: ;
}
void Frames::event_func_5338()
{
    // event 1587_24
    {
        if (!(group_main_engine_1)) goto event_1587_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1587_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 15);
        }
    }
    event_1587_24_end: ;
}
void Frames::event_func_5339()
{
    // event 1588_24
    {
        if (!(group_main_engine_1)) goto event_1588_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1588_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1588_24_0; single_instance_1588_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 14), parent->layer);
                if (single_instance_1588_24_0 == NULL)
                    single_instance_1588_24_0 = new_obj;
            }
        }
        FrameObject * single_instance_1588_24_1; single_instance_1588_24_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 14), parent->layer);
                if (single_instance_1588_24_1 == NULL)
                    single_instance_1588_24_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)((Active*)single_instance_1588_24_0))->set_direction(1);
        ((Active*)((Active*)single_instance_1588_24_0))->alterables->values.set(1, -3);
    }
    event_1588_24_end: ;
}
void Frames::event_func_5340()
{
    // event 1589_24
    {
        if (!(group_main_engine_1)) goto event_1589_24_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1589_24_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (4))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1589_24_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1589_24_0; single_instance_1589_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 14), parent->layer);
                if (single_instance_1589_24_0 == NULL)
                    single_instance_1589_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1589_24_0))->set_x(((Active*)single_instance_1589_24_0)->get_x()-5+randrange(11));
        ((Active*)((Active*)single_instance_1589_24_0))->set_y(((Active*)single_instance_1589_24_0)->get_y()-8+randrange(17));
    }
    event_1589_24_end: ;
}
void Frames::event_func_5341()
{
    // event 1597_24
    {
        if (!(group_main_engine_1)) goto event_1597_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1597_24_end: ;
}
void Frames::event_func_5342()
{
    // event 1598_24
    {
        if (!(group_main_engine_1)) goto event_1598_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1598_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->alterables->values.set(3, -4);
        }
    }
    event_1598_24_end: ;
}
void Frames::event_func_5343()
{
    // event 1599_24
    {
        if (!(group_main_engine_1)) goto event_1599_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1599_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -2);
            ((Active*)*it)->alterables->values.set(3, -4);
        }
    }
    event_1599_24_end: ;
}
void Frames::event_func_5344()
{
    // event 1600_24
    {
        if (!(group_main_engine_1)) goto event_1600_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(16777216)) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1600_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.4, 12));
        }
    }
    event_1600_24_end: ;
}
void Frames::event_func_5345()
{
    // event 1601_24
    {
        if (!(group_main_engine_1)) goto event_1601_24_end;
        if (!(test_obstacle(((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_x(), ((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_y()+4))) goto event_1601_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(16777216)) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1601_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)*3);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1601_24_end: ;
}
void Frames::event_func_5346()
{
    // event 1602_24
    {
        if (!(group_main_engine_1)) goto event_1602_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1602_24_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1602_24_end;
        FrameObject * single_instance_1602_24_0; single_instance_1602_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyspark_1101_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1602_24_0 == NULL)
                    single_instance_1602_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1602_24_0))->set_scale((3+randrange(2))*0.1);
        ((Active*)((Active*)single_instance_1602_24_0))->set_x(((Active*)single_instance_1602_24_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1602_24_0))->set_y(((Active*)single_instance_1602_24_0)->get_y()-10+randrange(26));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1602_24_end: ;
}
void Frames::event_func_5347()
{
    // event 1603_24
    {
        if (!(group_main_engine_1)) goto event_1603_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1603_24_end;
        if (!(test_obstacle(((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_y()+4))) goto event_1603_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        {
            loop_spark_up_running = true;
            int times = int(8);
            loop_spark_up_index = 0;
            while (loop_spark_up_index < times) {
                loop_spark_up_24();
                if (!loop_spark_up_running) break;
                loop_spark_up_index++;
            }
        }
    }
    event_1603_24_end: ;
}
void Frames::event_func_5348()
{
    // event 1604_24
    {
        if (!(group_main_engine_1)) goto event_1604_24_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto event_1604_24_end;
        if (test_obstacle(((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyspark_1101_instances, default_active_instance))->get_y()+4)) goto event_1604_24_end;
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        {
            loop_spark_down_running = true;
            int times = int(8);
            loop_spark_down_index = 0;
            while (loop_spark_down_index < times) {
                loop_spark_down_24();
                if (!loop_spark_down_running) break;
                loop_spark_down_index++;
            }
        }
    }
    event_1604_24_end: ;
}
void Frames::event_func_5349()
{
    // event 1608_24
    bool or_result_1608_24 = false;
    bool or_temp_result_1608_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_24_0_end;
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!enemyspark_1101_instances.has_selection()) goto or_event_1608_24_0_end;
        or_result_1608_24 = true;
        or_temp_result_1608_24_0 = true;
    }
    or_event_1608_24_0_end: ;
    enemyspark_1101_instances.clear_saved_selection();
    if (or_temp_result_1608_24_0) {
        enemyspark_1101_instances.save_selection();
    }
    // event 1608_24
    bool or_temp_result_1608_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_24_1_end;
        if (!(test_obstacle(((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_x()-8, ((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_y()-4))) goto or_event_1608_24_1_end;
        or_result_1608_24 = true;
        or_temp_result_1608_24_1 = true;
    }
    or_event_1608_24_1_end: ;
    // event 1608_24
    bool or_temp_result_1608_24_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_24_2_end;
        if (!(test_obstacle(((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_x()+8, ((Active*)get_instance(enemyspark_1101_instances, default_active_instance))->get_y()-4))) goto or_event_1608_24_2_end;
        or_result_1608_24 = true;
        or_temp_result_1608_24_2 = true;
        or_event_1608_24_2_end: ;
        if (!or_result_1608_24) goto or_final_or_event_1608_24_2_end;
        enemyspark_1101_instances.empty_selection();
        if (or_temp_result_1608_24_0) {
            enemyspark_1101_instances.restore_selection();
        }
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1608_24_2_end: ;
}
void Frames::event_func_5350()
{
    // event 1609_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1609_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1609_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1609_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (260))) goto event_1609_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (420))) goto event_1609_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(1))) goto event_1609_24_end;
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
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(3);
    }
    event_1609_24_end: ;
}
void Frames::event_func_5351()
{
    // event 1610_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1610_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1610_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1610_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(1))) goto event_1610_24_end;
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
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.disable(3);
    }
    event_1610_24_end: ;
}
void Frames::event_func_5352()
{
    // event 1611_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1611_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+20))) goto event_1611_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1611_24_end: ;
}
void Frames::event_func_5353()
{
    // event 1612_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1612_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1612_24_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1612_24_end: ;
}
void Frames::event_func_5354()
{
    // event 1613_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1613_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1613_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1613_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 2);
    }
    event_1613_24_end: ;
}
void Frames::event_func_5355()
{
    // event 1614_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1614_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1614_24_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1614_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(3))) goto event_1614_24_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1614_24_end: ;
}
void Frames::event_func_5356()
{
    // event 1615_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1615_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1615_24_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1615_24_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(3))) goto event_1615_24_end;
        global_values->set(4, -1);
        next_frame = (index+1-0)+2-1 + 0;    
    
    }
    event_1615_24_end: ;
}
void Frames::event_func_5357()
{
    // event 1621_24
    bool or_result_1621_24 = false;
    bool or_temp_result_1621_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_0_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, -12, 966, 1187, 1174)) > (0))) goto or_event_1621_24_0_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_0 = true;
    }
    or_event_1621_24_0_end: ;
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1621_24_0) {
        player_389_instances.save_selection();
    }
    // event 1621_24
    bool or_temp_result_1621_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_1_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2305, 1091, 2358, 1150)) > (0))) goto or_event_1621_24_1_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_1 = true;
    }
    or_event_1621_24_1_end: ;
    if (or_temp_result_1621_24_1) {
        player_389_instances.save_selection();
    }
    // event 1621_24
    bool or_temp_result_1621_24_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_2_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1207, 1109, 1621, 1227)) > (0))) goto or_event_1621_24_2_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_2 = true;
    }
    or_event_1621_24_2_end: ;
    if (or_temp_result_1621_24_2) {
        player_389_instances.save_selection();
    }
    // event 1621_24
    bool or_temp_result_1621_24_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_3_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3455, 692, 4490, 1010)) > (0))) goto or_event_1621_24_3_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_3 = true;
    }
    or_event_1621_24_3_end: ;
    if (or_temp_result_1621_24_3) {
        player_389_instances.save_selection();
    }
    // event 1621_24
    bool or_temp_result_1621_24_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_4_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 4416, 523, 5363, 841)) > (0))) goto or_event_1621_24_4_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_4 = true;
    }
    or_event_1621_24_4_end: ;
    if (or_temp_result_1621_24_4) {
        player_389_instances.save_selection();
    }
    // event 1621_24
    bool or_temp_result_1621_24_5 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1621_24_5_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 6539, 487, 6654, 621)) > (0))) goto or_event_1621_24_5_end;
        or_result_1621_24 = true;
        or_temp_result_1621_24_5 = true;
        or_event_1621_24_5_end: ;
        if (or_temp_result_1621_24_5) {
            player_389_instances.save_selection();
        }
        if (!or_result_1621_24) goto or_final_or_event_1621_24_5_end;
        player_389_instances.empty_selection();
        if (or_temp_result_1621_24_0 || or_temp_result_1621_24_1 || or_temp_result_1621_24_2 || or_temp_result_1621_24_3 || or_temp_result_1621_24_4 || or_temp_result_1621_24_5) {
            player_389_instances.restore_selection();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    or_final_or_event_1621_24_5_end: ;
}
void Frames::event_func_5358()
{
    // event 1630_24
    {
        if (!(group_main_engine_1)) goto event_1630_24_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1630_24_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1630_24_0; single_instance_1630_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorearthshield_326(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1630_24_0 == NULL)
                    single_instance_1630_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1630_24_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1630_24_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1630_24_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1630_24_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1630_24_0))->alterables->values.set(1, -4);
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1630_24_end: ;
}
void Frames::event_func_5359()
{
    // event 1631_24
    {
        if (!(group_main_engine_1)) goto event_1631_24_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1631_24_end;
        {
            loop_dig_crystals_running = true;
            int times = int(5);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1631_24_end: ;
}
void Frames::event_func_5360()
{
    // event 1632_24
    {
        if (!(group_main_engine_1)) goto event_1632_24_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1632_24_end;
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
        }
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(digspothole_1186_instances))->set_direction(8);
        ((Active*)get_instance(digspothole_1186_instances))->alterables->flags.enable(0);
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1632_24_end: ;
}
void Frames::event_func_5361()
{
    // event 1633_24
    {
        if (!(group_main_engine_1)) goto event_1633_24_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1633_24_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1633_24_0; single_instance_1633_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorkeystone_562(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1633_24_0 == NULL)
                    single_instance_1633_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1633_24_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1633_24_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1633_24_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1633_24_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1633_24_0))->alterables->values.set(1, -4);
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
        {
            loop_dig_crystals_running = true;
            int times = int(2);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
    }
    event_1633_24_end: ;
}
void Frames::event_func_5362()
{
    // event 1638_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1638_24_end;
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(0)) { it.deselect(); continue; }
        }
        if (!enemyiris_1183_instances.has_selection()) goto event_1638_24_end;
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1638_24_end: ;
}
void Frames::event_func_5363()
{
    // event 1639_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1639_24_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1639_24_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
    }
    event_1639_24_end: ;
}
void Frames::event_func_5364()
{
    // event 1640_24
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1640_24_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1640_24_end;
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
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
    }
    event_1640_24_end: ;
}
void Frames::event_func_5365()
{
    // event 1641_24
    {
        if (!(group_main_engine_1)) goto event_1641_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6777))) goto event_1641_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-60))) goto event_1641_24_end;
        if (!((global_values->get(4)) < (2))) goto event_1641_24_end;
        global_values->set(4, 2);
        global_values->set(5, 6360);
        global_values->set(6, 256);
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
    event_1641_24_end: ;
}
void Frames::event_func_5366()
{
    // event 1642_24
    {
        if (!(group_main_engine_1)) goto event_1642_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (340))) goto event_1642_24_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.disable(0);
    }
    event_1642_24_end: ;
}
void Frames::event_func_5367()
{
    // event 1643_24
    {
        if (!(group_main_engine_1)) goto event_1643_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (340))) goto event_1643_24_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(0);
    }
    event_1643_24_end: ;
}
void Frames::event_func_5368()
{
    // event 1644_24
    {
        if (!(group_main_engine_1)) goto event_1644_24_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(1))) goto event_1644_24_end;
        minibossrailing_923_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        if (!check_overlap(minibossrailing_923_instances, minibossbarrier_924_instances)) goto event_1644_24_end;
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1644_24_end: ;
}
void Frames::event_func_5369()
{
    // event 1645_24
    {
        if (!(group_main_engine_1)) goto event_1645_24_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(2))) goto event_1645_24_end;
        minibossrailing2_1165_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        if (!check_overlap(minibossrailing2_1165_instances, minibossbarrier_924_instances)) goto event_1645_24_end;
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibossrailing2_1165_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1645_24_end: ;
}
void Frames::event_func_5370()
{
    // event 1801_24
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1801_24_end;
        if (!((global_values->get(4)) == (0))) goto event_1801_24_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto event_1801_24_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (50))) goto event_1801_24_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1801_24_end: ;
}
void Frames::event_func_5371()
{
    // event 1810_24
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1810_24_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1810_24_end;
        if (!((global_values->get(4)) != (0))) goto event_1810_24_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
    }
    event_1810_24_end: ;
}
void Frames::event_func_5372()
{
    // event 1853_24
    {
        if (!(group_main_engine_1)) goto event_1853_24_end;
        ((SystemBox*)get_instance(levelparallaxpiece0r_1090_instances))->set_fill(Color(make_color_int(78-30*cos_deg((frame_time * 1000.0)/math_helper/10), 0, 0)));
    }
    event_1853_24_end: ;
}
void Frames::event_func_5373()
{
    // event 1854_24
    {
        if (!(group_pause_1)) goto event_1854_24_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1854_24_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1854_24_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1854_24_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1854_24_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
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
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
            group_main_engine_1 = false;
    
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickhangingmovingbar_1173_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1173_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->stop_animation();
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickfireballturret1_1180_instances))->stop_animation();
        ((Active*)get_instance(gimmickfireballturret2_1181_instances))->stop_animation();
    }
    event_1854_24_end: ;
}
void Frames::event_func_5374()
{
    // event 1855_24
    bool or_result_1855_24 = false;
    bool or_temp_result_1855_24_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1855_24_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1855_24_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1855_24_0_end;
        or_result_1855_24 = true;
        or_temp_result_1855_24_0 = true;
    }
    or_event_1855_24_0_end: ;
    // event 1855_24
    bool or_temp_result_1855_24_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1855_24_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1855_24_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1855_24_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1855_24_1_end;
        or_result_1855_24 = true;
        or_temp_result_1855_24_1 = true;
        or_event_1855_24_1_end: ;
        if (!or_result_1855_24) goto or_final_or_event_1855_24_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
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
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickhangingmovingbar_1173_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1173_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->start_animation();
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickfireballturret1_1180_instances))->start_animation();
        ((Active*)get_instance(gimmickfireballturret2_1181_instances))->start_animation();
    }
    or_final_or_event_1855_24_1_end: ;
}
void Frames::handle_frame_25_events()
{
    test_collisions_24();
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
    event_func_5243();
    event_func_5245();
    event_func_5247();
    event_func_4593();
    event_func_5307();
    event_func_3904();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_5194();
    event_func_5195();
    event_func_5196();
    event_func_5197();
    event_func_5198();
    event_func_5199();
    event_func_5200();
    event_func_5201();
    event_func_5202();
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
    event_func_1369();
    event_func_1370();
    event_func_1371();
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
    event_func_5203();
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
    event_func_5204();
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
    event_func_5205();
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
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_1987();
    event_func_1988();
    event_func_1989();
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
    event_func_1997();
    event_func_1998();
    event_func_1999();
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
    event_func_2024();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_5206();
    event_func_5207();
    event_func_5208();
    event_func_5209();
    event_func_5210();
    event_func_5211();
    event_func_5212();
    event_func_5213();
    event_func_4152();
    event_func_5214();
    event_func_5215();
    event_func_5216();
    event_func_5217();
    event_func_5218();
    event_func_5219();
    event_func_5220();
    event_func_5221();
    event_func_5222();
    event_func_5223();
    event_func_5224();
    event_func_5225();
    event_func_5226();
    event_func_5227();
    event_func_5228();
    event_func_5229();
    event_func_5230();
    event_func_5231();
    event_func_5232();
    event_func_5233();
    event_func_5234();
    event_func_5235();
    event_func_5236();
    event_func_5237();
    event_func_5238();
    event_func_5239();
    event_func_5240();
    event_func_5241();
    event_func_5242();
    event_func_5244();
    event_func_5246();
    event_func_5248();
    event_func_5249();
    event_func_5250();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_5251();
    event_func_5252();
    event_func_5253();
    event_func_5254();
    event_func_5255();
    event_func_5256();
    event_func_5257();
    event_func_5258();
    event_func_5259();
    event_func_5260();
    event_func_5261();
    event_func_5262();
    event_func_5263();
    event_func_5264();
    event_func_5265();
    event_func_5266();
    event_func_5267();
    event_func_5268();
    event_func_5269();
    event_func_5270();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_5271();
    event_func_5272();
    event_func_5273();
    event_func_5274();
    event_func_5275();
    event_func_5276();
    event_func_5277();
    event_func_5278();
    event_func_5279();
    event_func_5280();
    event_func_5281();
    event_func_5282();
    event_func_5283();
    event_func_5284();
    event_func_5285();
    event_func_5286();
    event_func_5287();
    event_func_5288();
    event_func_5289();
    event_func_5290();
    event_func_5291();
    event_func_5292();
    event_func_5293();
    event_func_5294();
    event_func_5295();
    event_func_5296();
    event_func_5297();
    event_func_5298();
    event_func_5299();
    event_func_5300();
    event_func_5301();
    event_func_5302();
    event_func_5303();
    event_func_5304();
    event_func_5305();
    event_func_5306();
    event_func_5308();
    event_func_5309();
    event_func_5310();
    event_func_5311();
    event_func_5312();
    event_func_5313();
    event_func_5314();
    event_func_5315();
    event_func_5316();
    event_func_5317();
    event_func_5318();
    event_func_5319();
    event_func_5320();
    event_func_5321();
    event_func_5322();
    event_func_5323();
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5330();
    event_func_5331();
    event_func_5332();
    event_func_5333();
    event_func_5334();
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_3902();
    event_func_3903();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_5345();
    event_func_5346();
    event_func_5347();
    event_func_5348();
    event_func_5349();
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_5350();
    event_func_5351();
    event_func_5352();
    event_func_5353();
    event_func_5354();
    event_func_5355();
    event_func_5356();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_3867();
    event_func_3000();
    event_func_5357();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_3861();
    event_func_5358();
    event_func_5359();
    event_func_5360();
    event_func_5361();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    event_func_3002();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_5362();
    event_func_5363();
    event_func_5364();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_5365();
    event_func_5366();
    event_func_5367();
    event_func_5368();
    event_func_5369();
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
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_5370();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_5371();
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
    event_func_5372();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_5373();
    event_func_5374();
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
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_25_pre_events()
{
}
void Frames::event_func_5375()
{
    // event 1_24
    {
        if (!((global_values->get(4)) == (0))) goto event_1_24_end;
        global_values->set(4, 1);
    }
    event_1_24_end: ;
}
void Frames::event_func_5376()
{
    // event 11_24
    {
        if (!(group_main_engine_1)) goto event_11_24_end;
        if (!((global_values->get(4)) != (0))) goto event_11_24_end;
        if (!((global_values->get(4)) != (1))) goto event_11_24_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_11_24_end: ;
}
void Frames::event_func_5377()
{
    // event 13_24
    {
        if (!(group_main_engine_1)) goto event_13_24_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 11);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 4);
    }
    event_13_24_end: ;
}
void Frames::event_func_5378()
{
    // event 30_24
    {
        if (!(group_main_engine_1)) goto event_30_24_end;
        ((SystemBox*)get_instance(levelparallaxpiece0r_1090_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0r_1090_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1r_1091_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece1r_1091_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece2r_1092_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece2r_1092_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece3r_1093_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece3r_1093_instances))->alterables->values.set(4, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece4r_1094_instances))->alterables->values.set(3, 0.37);
        ((SystemBox*)get_instance(levelparallaxpiece4r_1094_instances))->alterables->values.set(4, 0.36);
    }
    event_30_24_end: ;
}
void Frames::event_func_5379()
{
    // event 1405_24
    {
        if (!(group_main_engine_1)) goto event_1405_24_end;
        switchwallplate_814_instances.clear_selection();
        spread_value(switchwallplate_814_instances, 0, 0);
        ((Active*)get_instance(switchcolumnback1_1099_instances))->alterables->values.set(0, ((Active*)get_instance(switchcolumnback1_1099_instances))->get_y());
        switchcolumnback2_1100_instances.clear_selection();
        for (ObjectIterator it(switchcolumnback2_1100_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        ((Active*)get_instance(switchcolumnfront1_1169_instances))->alterables->values.set(0, ((Active*)get_instance(switchcolumnfront1_1169_instances))->get_y());
    }
    event_1405_24_end: ;
}
void Frames::event_func_5380()
{
    // event 1413_24
    {
        if (!(group_main_engine_1)) goto event_1413_24_end;
        gimmickhangingmovingsensor_737_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        gimmickhangingmovingbar_1173_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1173_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1413_24_end: ;
}
void Frames::event_func_5381()
{
    // event 1415_24
    {
        if (!(group_main_engine_1)) goto event_1415_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickspinball_1175_instances))->get_x());
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickspinball_1175_instances))->get_y());
    }
    event_1415_24_end: ;
}
void Frames::event_func_5382()
{
    // event 1453_24
    {
        if (!(group_main_engine_1)) goto event_1453_24_end;
        objectpot_1185_instances.clear_selection();
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1453_24_end: ;
}
void Frames::event_func_5383()
{
    // event 1464_24
    {
        if (!(group_main_engine_1)) goto event_1464_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
        }
    }
    event_1464_24_end: ;
}
void Frames::event_func_5384()
{
    // event 1617_24
    {
        if (!(group_main_engine_1)) goto event_1617_24_end;
        if (!((global_values->get(4)) < (0))) goto event_1617_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, global_values->get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, width-32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 190+(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(0)*350));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_1617_24_end: ;
}
void Frames::event_func_5385()
{
    // event 1618_24
    {
        if (!(group_main_engine_1)) goto event_1618_24_end;
        if (!((global_values->get(4)) >= (0))) goto event_1618_24_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1618_24_end: ;
}
void Frames::event_func_5386()
{
    // event 1799_24
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1799_24_end;
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1799_24_end: ;
}
void Frames::event_func_5387()
{
    // event 1800_24
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1800_24_end;
        if (!((global_values->get(4)) == (0))) goto event_1800_24_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
    }
    event_1800_24_end: ;
}
void Frames::event_func_5388()
{
    // event 1803_24
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1803_24_end;
        if (!((global_values->get(4)) < (0))) goto event_1803_24_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
        {
            loop_gui_shiftdown_running = true;
            int times = int(80);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1803_24_end: ;
}
void Frames::on_frame_25_start_events()
{
    event_func_5375();
    event_func_5376();
    event_func_4133();
    event_func_5377();
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
    event_func_5378();
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
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_5379();
    event_func_5380();
    event_func_5381();
    event_func_5382();
    event_func_5383();
    event_func_2686();
    event_func_5384();
    event_func_5385();
    event_func_3990();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_5386();
    event_func_5387();
    event_func_5388();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_25_init()
{
    index = 24;
    width = 7432;
    height = 1280;
    virtual_width = 7432;
    virtual_height = 1280;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &gimmickrollingplatform_1171_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &gimmickrollingplatform_1171_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyhopper_1168_instances, &enemyextractorhead_1177_instances, &enemyslug_1182_instances, &enemyiris_1183_instances, &objectpot_1185_instances, NULL};
    qualifier_20.set(5, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0r_1090_instances, &levelparallaxpiece1r_1091_instances, &levelparallaxpiece2r_1092_instances, &levelparallaxpiece3r_1093_instances, &levelparallaxpiece4r_1094_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &switchcolumnfront1_1169_instances, &hazardspikesup_558_instances, &gimmickrelicpanel_1178_instances, &breakableruins_1184_instances, &digspothole_1186_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingmovingsensor_737_instances, NULL};
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
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickrollingplatform_1171_instances, &gimmickhangingmovingbar_1173_instances, &gimmickhangingmovingsensor_737_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0r_1090(0, 0), 0);
    add_background_object(create_levelparallaxpiece1r_1091(0, 152), 0);
    add_background_object(create_levelparallaxpiece2r_1092(0, 200), 0);
    add_background_object(create_levelparallaxpiece3r_1093(0, 352), 0);
    add_background_object(create_levelparallaxpiece4r_1094(0, 384), 0);
    add_object(create_switchcolumnback1_1099(1880, 1048), 0);
    add_object(create_switchcolumnback2_1100(1880, 1080), 0);
    add_object(create_switchcolumnback2_1100(1880, 1112), 0);
    add_object(create_switchcolumnback2_1100(1880, 1144), 0);
    add_object(create_switchcolumnback2_1100(1880, 1176), 0);
    add_object(create_switchcolumnback2_1100(1880, 1208), 0);
    add_object(create_switchcolumnback2_1100(1880, 1240), 0);
    add_background_object(create_rmbrick24_1103(5560, 320), 1);
    add_background_object(create_rmbrick24_1103(5080, 416), 1);
    add_background_object(create_rmbrick21_1104(4744, 464), 1);
    add_background_object(create_rmbrick20_1105(4744, 512), 1);
    add_background_object(create_rmbrick26_1106(5128, 416), 1);
    add_background_object(create_rmbrick25_1107(5224, 512), 1);
    add_background_object(create_rmbrick21_1104(4840, 464), 1);
    add_background_object(create_rmbrick21_1104(4936, 464), 1);
    add_background_object(create_rmbrick20_1105(4840, 512), 1);
    add_background_object(create_rmbrick20_1105(4936, 512), 1);
    add_background_object(create_rmbrick21_1104(5032, 464), 1);
    add_background_object(create_rmbrick20_1105(5032, 512), 1);
    add_background_object(create_rmbrick24_1103(5080, 320), 1);
    add_background_object(create_rmbrick24_1103(5080, 224), 1);
    add_background_object(create_rmbrick24_1103(5080, 128), 1);
    add_background_object(create_rmbrick24_1103(5080, 32), 1);
    add_background_object(create_rmbrick24_1103(5080, -64), 1);
    add_background_object(create_rmbrick21_1104(5128, 368), 1);
    add_background_object(create_rmbrick21_1104(5224, 368), 1);
    add_background_object(create_rmbrick20_1105(5128, 512), 1);
    add_background_object(create_rmbrick20_1105(5224, 416), 1);
    add_background_object(create_rmbrick21_1104(5320, 368), 1);
    add_background_object(create_rmbrick20_1105(5320, 416), 1);
    add_background_object(create_rmbrick21_1104(5416, 368), 1);
    add_background_object(create_rmbrick20_1105(5416, 416), 1);
    add_background_object(create_rmbrick21_1104(5512, 368), 1);
    add_background_object(create_rmbrick20_1105(5512, 416), 1);
    add_background_object(create_rmbrick20_1105(5608, 416), 1);
    add_background_object(create_rmbrick21_1104(5608, 320), 1);
    add_background_object(create_rmbrick26_1106(5608, 368), 1);
    add_background_object(create_rmbrick24_1103(5560, 224), 1);
    add_background_object(create_rmbrick24_1103(5560, 128), 1);
    add_background_object(create_rmbrick24_1103(5560, 32), 1);
    add_background_object(create_rmbrick24_1103(5560, -64), 1);
    add_background_object(create_rmbrick21_1104(5704, 320), 1);
    add_background_object(create_rmbrick20_1105(5704, 368), 1);
    add_background_object(create_rmbrick20_1105(5704, 416), 1);
    add_background_object(create_rmbrick21_1104(5800, 320), 1);
    add_background_object(create_rmbrick20_1105(5800, 368), 1);
    add_background_object(create_rmbrick20_1105(5800, 416), 1);
    add_background_object(create_rmbrick21_1104(5896, 320), 1);
    add_background_object(create_rmbrick20_1105(5896, 368), 1);
    add_background_object(create_rmbrick20_1105(5896, 416), 1);
    add_background_object(create_rmbrick21_1104(4648, 464), 1);
    add_background_object(create_rmbrick20_1105(4648, 512), 1);
    add_background_object(create_rmbrick2_1108(3696, 1136), 2);
    add_background_object(create_rmbrick20_1105(3552, 944), 2);
    add_background_object(create_rmbrick20_1105(3648, 944), 2);
    add_background_object(create_rmbrick20_1105(3744, 944), 2);
    add_background_object(create_rmbrick20_1105(3552, 1040), 2);
    add_background_object(create_rmbrick20_1105(3648, 1040), 2);
    add_background_object(create_rmbrick20_1105(3744, 1040), 2);
    add_background_object(create_rmcolumn2_1109(4296, 672), 2);
    add_background_object(create_rmcolumn2_1109(3352, 696), 2);
    add_background_object(create_rmupsign_1110(4488, 496), 2);
    add_background_object(create_rmentrywayright_1111(7272, 272), 2);
    add_background_object(create_rmentrywayright2_1112(7272, 272), 2);
    add_background_object(create_rmcolumn1_1113(3608, 424), 2);
    add_background_object(create_rmcolumn1_1113(6328, 224), 2);
    add_background_object(create_rmcolumn3_1114(6328, 176), 2);
    add_background_object(create_rmbush3_1115(6344, 192), 2);
    add_background_object(create_rmbrick13_1116(6320, 368), 2);
    add_background_object(create_rmcolumn1_1113(6768, 192), 2);
    add_background_object(create_rmcolumn1_1113(3984, 720), 2);
    add_background_object(create_rmcolumn4_1117(6768, 336), 2);
    add_background_object(create_rmcolumn1_1113(6768, 424), 2);
    add_background_object(create_rmcolumn4_1117(7120, 440), 2);
    add_background_object(create_rmcolumn1_1113(7120, 512), 2);
    add_background_object(create_rmbush2_1118(6976, 472), 2);
    add_background_object(create_rmcolumn4_1117(7120, 280), 2);
    add_background_object(create_rmcolumn1_1113(7120, 360), 2);
    add_background_object(create_rmbush1_1119(7128, 184), 2);
    add_background_object(create_rmbush2_1118(7216, 344), 2);
    add_background_object(create_rmentrywayright_1111(7272, 432), 2);
    add_background_object(create_rmbush3_1115(7176, 480), 2);
    add_background_object(create_soil1_1120(6792, 688), 2);
    add_background_object(create_soil1_1120(6792, 816), 2);
    add_background_object(create_rmbush3_1115(512, 928), 2);
    add_background_object(create_rmbush3_1115(88, 1080), 2);
    add_background_object(create_rmbush1_1119(288, 1080), 2);
    add_background_object(create_rmbush1_1119(1224, 952), 2);
    add_background_object(create_rmbush1_1119(6320, 536), 2);
    add_background_object(create_rmbush3_1115(6400, 504), 2);
    add_background_object(create_rmbush2_1118(5984, 560), 2);
    add_background_object(create_rmbush3_1115(5832, 504), 2);
    add_background_object(create_rmentrywayright_1111(7272, 80), 2);
    add_background_object(create_rmcolumn4_1117(7216, 88), 2);
    add_background_object(create_rmcolumn1_1113(7216, 168), 2);
    add_background_object(create_rmcolumn4_1117(7024, 280), 2);
    add_background_object(create_rmcolumn1_1113(7024, 360), 2);
    add_background_object(create_rmcolumn4_1117(6960, 440), 2);
    add_background_object(create_rmcolumn1_1113(6960, 488), 2);
    add_background_object(create_rmbush3_1115(4384, 64), 2);
    add_background_object(create_rmcolumn2_1109(4456, 520), 2);
    add_background_object(create_rmcolumn1_1113(4456, 568), 2);
    add_background_object(create_rmcolumn2_1109(4536, 520), 2);
    add_background_object(create_rmcolumn1_1113(4536, 568), 2);
    add_background_object(create_rmbrick13_1116(4392, 176), 2);
    add_background_object(create_rmbrick1_1121(6664, 560), 2);
    add_background_object(create_soil1_1120(6600, 656), 2);
    add_background_object(create_rmcolumn4_1117(4736, 656), 2);
    add_background_object(create_rmcolumn1_1113(4736, 568), 2);
    add_background_object(create_rmbrick13_1116(4800, 648), 2);
    add_background_object(create_soil1_1120(5832, 784), 2);
    add_background_object(create_rmcolumn4_1117(6152, 440), 2);
    add_background_object(create_rmcolumn1_1113(6040, 576), 2);
    add_background_object(create_rmbush3_1115(5648, 152), 2);
    add_background_object(create_rmbush3_1115(5720, 192), 2);
    add_background_object(create_rmbush3_1115(4608, 680), 2);
    add_background_object(create_rmcolumn1_1113(4656, 704), 2);
    add_background_object(create_rmcolumn2_1109(4656, 656), 2);
    add_background_object(create_rmcolumn1_1113(4136, 848), 2);
    add_background_object(create_rmbush3_1115(4144, 840), 2);
    add_background_object(create_rmbush3_1115(3264, 360), 2);
    add_background_object(create_rmbush2_1118(2760, 816), 2);
    add_background_object(create_rmbush3_1115(2280, 1064), 2);
    add_background_object(create_rmbush2_1118(5336, 536), 2);
    add_background_object(create_rmbush2_1118(5408, 488), 2);
    add_background_object(create_rmbush1_1119(5480, 440), 2);
    add_background_object(create_rmbush2_1118(4016, 792), 2);
    add_background_object(create_rmcolumn1_1113(4736, 704), 2);
    add_background_object(create_rmbush1_1119(4576, 648), 2);
    add_background_object(create_rmbush2_1118(4768, 688), 2);
    add_background_object(create_rmbush2_1118(4872, 576), 2);
    add_background_object(create_rmbush1_1119(4920, 552), 2);
    add_background_object(create_rmbush2_1118(4056, 520), 2);
    add_background_object(create_rmbush1_1119(4096, 536), 2);
    add_background_object(create_rmbush2_1118(4248, 344), 2);
    add_background_object(create_rmbush2_1118(4000, 248), 2);
    add_background_object(create_rmbush1_1119(4408, 688), 2);
    add_background_object(create_rmbush1_1119(4480, 552), 2);
    add_background_object(create_rmbush3_1115(4648, 280), 2);
    add_background_object(create_rmbush1_1119(3040, 872), 2);
    add_background_object(create_rmbush2_1118(2840, 808), 2);
    add_background_object(create_rmbush1_1119(2056, 1032), 2);
    add_background_object(create_rmbush1_1119(1784, 632), 2);
    add_background_object(create_rmbush2_1118(920, 1088), 2);
    add_background_object(create_rmbush1_1119(976, 1072), 2);
    add_background_object(create_rmbush2_1118(440, 1032), 2);
    add_background_object(create_rmcolumn3_1114(5752, 176), 2);
    add_background_object(create_rmcolumn1_1113(5752, 224), 2);
    add_background_object(create_rmcolumn1_1113(5848, 224), 2);
    add_background_object(create_rmcolumn4_1117(5848, 120), 2);
    add_background_object(create_rmbrick16_1122(6072, 112), 2);
    add_background_object(create_rmbrick16_1122(6072, 176), 2);
    add_background_object(create_rmbrick16_1122(6072, 240), 2);
    add_background_object(create_rmbrick17_1123(6048, 112), 2);
    add_background_object(create_rmbrick17_1123(6048, 176), 2);
    add_background_object(create_rmbrick17_1123(6048, 240), 2);
    add_background_object(create_rmbrick16_1122(4800, 328), 2);
    add_background_object(create_rmbrick16_1122(4800, 392), 2);
    add_background_object(create_rmbrick13_1116(6064, 112), 2);
    add_background_object(create_rmbrick2_1108(5808, 592), 2);
    add_background_object(create_rmbrick2_1108(5744, 592), 2);
    add_background_object(create_rmcolumn1_1113(4904, 560), 2);
    add_background_object(create_rmcolumn4_1117(4904, 464), 2);
    add_background_object(create_rmcolumn1_1113(4840, 376), 2);
    add_background_object(create_rmcolumn4_1117(4840, 336), 2);
    add_background_object(create_rmcolumn1_1113(5032, 560), 2);
    add_background_object(create_rmbrick13_1116(4800, 328), 2);
    add_background_object(create_rmbrickarch_1124(4808, 152), 2);
    add_background_object(create_rmcolumn4_1117(3984, 616), 2);
    add_background_object(create_rmcolumn4_1117(4296, 616), 2);
    add_background_object(create_rmcolumn1_1113(4296, 696), 2);
    add_background_object(create_rmbrick4_1125(5592, 464), 2);
    add_background_object(create_soil5_1126(5312, 496), 2);
    add_background_object(create_soil1_1120(5104, 624), 2);
    add_background_object(create_soil1_1120(4464, 880), 2);
    add_background_object(create_soil1_1120(3904, 776), 2);
    add_background_object(create_rmbrick17_1123(4016, 424), 2);
    add_background_object(create_rmbrick17_1123(4016, 360), 2);
    add_background_object(create_rmbrick18_1127(4040, 424), 2);
    add_background_object(create_rmbrick18_1127(4040, 360), 2);
    add_background_object(create_rmbrick17_1123(4272, 488), 2);
    add_background_object(create_rmbrick17_1123(4272, 424), 2);
    add_background_object(create_rmbrick18_1127(4296, 488), 2);
    add_background_object(create_rmbrick18_1127(4296, 424), 2);
    add_background_object(create_rmcolumn1_1113(3352, 760), 2);
    add_background_object(create_rmcolumn1_1113(3112, 880), 2);
    add_background_object(create_rmcolumn1_1113(1272, 1096), 2);
    add_background_object(create_rmcolumn4_1117(1272, 1056), 2);
    add_background_object(create_rmcolumn1_1113(2552, 800), 2);
    add_background_object(create_rmcolumn1_1113(2152, 1072), 2);
    add_background_object(create_rmcolumn4_1117(2152, 1016), 2);
    add_background_object(create_rmcolumn1_1113(2168, 648), 2);
    add_background_object(create_rmcolumn2_1109(2168, 600), 2);
    add_background_object(create_rmcolumn3_1114(2168, 552), 2);
    add_background_object(create_rmbrick13_1116(3328, 504), 2);
    add_background_object(create_rmbrick17_1123(2960, 136), 2);
    add_background_object(create_rmbrick18_1127(2984, 136), 2);
    add_background_object(create_rmbrick16_1122(2192, 752), 2);
    add_background_object(create_rmbrick16_1122(2288, 752), 2);
    add_background_object(create_rmbrick18_1127(2688, 856), 2);
    add_background_object(create_rmbrick16_1122(2624, 856), 2);
    add_background_object(create_rmbrick18_1127(2688, 728), 2);
    add_background_object(create_rmbrick18_1127(2688, 792), 2);
    add_background_object(create_rmbrick17_1123(2600, 728), 2);
    add_background_object(create_rmbrick17_1123(2600, 792), 2);
    add_background_object(create_rmbrick17_1123(2224, 856), 2);
    add_background_object(create_rmbrick16_1122(2624, 792), 2);
    add_background_object(create_rmbrick16_1122(2248, 856), 2);
    add_background_object(create_rmbrick16_1122(2624, 728), 2);
    add_background_object(create_rmbrick13_1116(2512, 664), 2);
    add_background_object(create_rmbrick13_1116(2192, 752), 2);
    add_background_object(create_rmbrick13_1116(2288, 752), 2);
    add_background_object(create_rmbrick13_1116(2112, 752), 2);
    add_background_object(create_rmbrick14_1128(2088, 752), 2);
    add_background_object(create_rmbrick13_1116(2176, 1008), 2);
    add_background_object(create_rmbrick13_1116(2240, 1008), 2);
    add_background_object(create_rmbrick13_1116(2304, 1008), 2);
    add_background_object(create_rmbrick13_1116(2240, 848), 2);
    add_background_object(create_rmbrick2_1108(2240, 976), 2);
    add_background_object(create_rmbrick4_1125(2216, 976), 2);
    add_background_object(create_rmbrick6_1129(2256, 1104), 2);
    add_background_object(create_rmbrick7_1130(2280, 1104), 2);
    add_background_object(create_rmbrick3_1131(2368, 816), 2);
    add_background_object(create_soil1_1120(2368, 1136), 2);
    add_background_object(create_rmbrick4_1125(2344, 1008), 2);
    add_background_object(create_soil1_1120(2112, 1136), 2);
    add_background_object(create_soil1_1120(2112, 1264), 2);
    add_background_object(create_soil1_1120(1904, 1104), 2);
    add_background_object(create_rmbrick4_1125(1592, 1120), 2);
    add_background_object(create_soil1_1120(1472, 1152), 2);
    add_background_object(create_rmgrass1_1132(1536, 1144), 2);
    add_background_object(create_soil6_1133(1200, 1144), 2);
    add_background_object(create_rmbrickarch_1124(1392, 1016), 2);
    add_background_object(create_soil1_1120(896, 1152), 2);
    add_background_object(create_rmbrickarch2_1134(3440, 744), 2);
    add_background_object(create_rmbrickarch_1124(3192, 672), 2);
    add_background_object(create_soil1_1120(2608, 1024), 2);
    add_background_object(create_rmbrick1_1121(2736, 896), 2);
    add_background_object(create_rmbrick1_1121(2864, 896), 2);
    add_background_object(create_rmbrick2_1108(2928, 832), 2);
    add_background_object(create_rmbrick8_1135(2928, 864), 2);
    add_background_object(create_rmbrick3_1131(2992, 864), 2);
    add_background_object(create_rmbrick3_1131(2992, 896), 2);
    add_background_object(create_rmbrick6_1129(2904, 800), 2);
    add_background_object(create_rmbrick5_1136(2928, 800), 2);
    add_background_object(create_rmbrick3_1131(2992, 832), 2);
    add_background_object(create_rmbrick7_1130(2992, 800), 2);
    add_background_object(create_rmbrick4_1125(2904, 832), 2);
    add_background_object(create_rmbrick4_1125(2904, 864), 2);
    add_background_object(create_rmbrick5_1136(2864, 864), 2);
    add_background_object(create_rmbrick2_1108(3184, 800), 2);
    add_background_object(create_rmbrick10_1137(3248, 768), 2);
    add_background_object(create_rmbrick6_1129(3160, 768), 2);
    add_background_object(create_rmbrick4_1125(3160, 800), 2);
    add_background_object(create_rmbrick9_1138(2800, 864), 2);
    add_background_object(create_rmbrick9_1138(3184, 768), 2);
    add_background_object(create_soil1_1120(2736, 1024), 2);
    add_background_object(create_rmplant1_1139(2856, 872), 2);
    add_background_object(create_rmplant1_1139(2856, 912), 2);
    add_background_object(create_rmplant1_1139(2920, 808), 2);
    add_background_object(create_rmplant1_1139(2872, 896), 2);
    add_background_object(create_rmplant1_1139(3232, 768), 2);
    add_background_object(create_rmbrick1_1121(2608, 896), 2);
    add_background_object(create_rmbrick5_1136(2608, 864), 2);
    add_background_object(create_rmbrick1_1121(3184, 832), 2);
    add_background_object(create_rmbrick4_1125(3160, 832), 2);
    add_background_object(create_rmbrick4_1125(3160, 864), 2);
    add_background_object(create_rmbrick4_1125(3160, 896), 2);
    add_background_object(create_rmbrick4_1125(3160, 928), 2);
    add_background_object(create_rmbrick5_1136(3376, 800), 2);
    add_background_object(create_rmbrick3_1131(2992, 928), 2);
    add_background_object(create_rmbrick5_1136(3056, 928), 2);
    add_background_object(create_rmbrick9_1138(2992, 928), 2);
    add_background_object(create_rmbrick5_1136(3120, 928), 2);
    add_background_object(create_rmbrick1_1121(2992, 960), 2);
    add_background_object(create_rmbrick1_1121(3120, 960), 2);
    add_background_object(create_rmbrick1_1121(3248, 960), 2);
    add_background_object(create_soil1_1120(2864, 1024), 2);
    add_background_object(create_soil1_1120(2992, 1088), 2);
    add_background_object(create_soil2_1140(2864, 992), 2);
    add_background_object(create_soil2_1140(2736, 992), 2);
    add_background_object(create_soil2_1140(2608, 992), 2);
    add_background_object(create_soil5_1126(960, 1024), 2);
    add_background_object(create_soil2_1140(2992, 1056), 2);
    add_background_object(create_soil3_1141(2896, 1016), 2);
    add_background_object(create_rmbrick2_1108(3312, 832), 2);
    add_background_object(create_rmbrick2_1108(3376, 832), 2);
    add_background_object(create_soil2_1140(3312, 832), 2);
    add_background_object(create_soil1_1120(3312, 864), 2);
    add_background_object(create_rmbrick7_1130(3440, 800), 2);
    add_background_object(create_rmbrick3_1131(3440, 832), 2);
    add_background_object(create_soil1_1120(3440, 864), 2);
    add_background_object(create_soil1_1120(3440, 992), 2);
    add_background_object(create_soil1_1120(960, 1152), 2);
    add_background_object(create_soil1_1120(1088, 1152), 2);
    add_background_object(create_soil1_1120(1216, 1152), 2);
    add_background_object(create_soil1_1120(1344, 1152), 2);
    add_background_object(create_rmgrass1_1132(3472, 856), 2);
    add_background_object(create_rmplant1_1139(3296, 680), 2);
    add_background_object(create_soil1_1120(0, 1152), 2);
    add_background_object(create_soil1_1120(0, 1024), 2);
    add_background_object(create_soil1_1120(128, 1152), 2);
    add_background_object(create_rmgrass1_1132(0, 1016), 2);
    add_background_object(create_soil1_1120(256, 1152), 2);
    add_background_object(create_rmgrass4_1142(160, 1136), 2);
    add_background_object(create_soil1_1120(512, 1024), 2);
    add_background_object(create_rmgrass4_1142(512, 1008), 2);
    add_background_object(create_soil1_1120(384, 1088), 2);
    add_background_object(create_soil1_1120(640, 1152), 2);
    add_background_object(create_soil1_1120(768, 1152), 2);
    add_background_object(create_soil1_1120(512, 1152), 2);
    add_background_object(create_soil1_1120(384, 1152), 2);
    add_background_object(create_soil3_1141(344, 1160), 2);
    add_background_object(create_soil3_1141(400, 1096), 2);
    add_background_object(create_soil8_1143(640, 1024), 2);
    add_background_object(create_rmgrass3_1144(640, 1016), 2);
    add_background_object(create_soil3_1141(904, 1152), 2);
    add_background_object(create_rmgrass1_1132(896, 1144), 2);
    add_background_object(create_rmgrass2_1145(960, 1016), 2);
    add_background_object(create_rmbrick6_1129(1208, 1016), 2);
    add_background_object(create_rmbrick9_1138(1232, 1016), 2);
    add_background_object(create_rmbrick7_1130(1296, 1016), 2);
    add_background_object(create_soil1_1120(896, 1280), 2);
    add_background_object(create_soil1_1120(960, 1280), 2);
    add_background_object(create_soil1_1120(1088, 1280), 2);
    add_background_object(create_soil1_1120(1216, 1280), 2);
    add_background_object(create_soil1_1120(1344, 1280), 2);
    add_background_object(create_soil1_1120(1472, 1280), 2);
    add_background_object(create_soil1_1120(0, 1280), 2);
    add_background_object(create_soil1_1120(128, 1280), 2);
    add_background_object(create_soil1_1120(256, 1280), 2);
    add_background_object(create_soil1_1120(640, 1280), 2);
    add_background_object(create_soil1_1120(768, 1280), 2);
    add_background_object(create_soil1_1120(512, 1280), 2);
    add_background_object(create_soil1_1120(384, 1280), 2);
    add_background_object(create_rmgrass1_1132(288, 1144), 2);
    add_background_object(create_rmgrass4_1142(1248, 1136), 2);
    add_background_object(create_rmgrass4_1142(1440, 1136), 2);
    add_background_object(create_rmgrass1_1132(1376, 1144), 2);
    add_background_object(create_soil1_1120(1600, 1152), 2);
    add_background_object(create_soil1_1120(1600, 1280), 2);
    add_background_object(create_rmbrick2_1108(1616, 1120), 2);
    add_background_object(create_rmbrick2_1108(1680, 1120), 2);
    add_background_object(create_rmbrick6_1129(1592, 1088), 2);
    add_background_object(create_rmbrick9_1138(1616, 1088), 2);
    add_background_object(create_soil1_1120(1728, 1152), 2);
    add_background_object(create_soil1_1120(1728, 1280), 2);
    add_background_object(create_soil1_1120(1856, 1152), 2);
    add_background_object(create_soil1_1120(1856, 1280), 2);
    add_background_object(create_rmgrass5_1146(1600, 1144), 2);
    add_background_object(create_rmbrick7_1130(1744, 1088), 2);
    add_background_object(create_rmbrick3_1131(1744, 1120), 2);
    add_background_object(create_rmgrass1_1132(1792, 1480), 2);
    add_background_object(create_rmgrass6_1147(1744, 1136), 2);
    add_background_object(create_rmgrass6_1147(144, 1144), 2);
    add_background_object(create_rmgrass5_1146(352, 1144), 2);
    add_background_object(create_rmgrass5_1146(480, 1080), 2);
    add_background_object(create_rmgrass1_1132(416, 1080), 2);
    add_background_object(create_soil4_1148(496, 1032), 2);
    add_background_object(create_soil4_1148(496, 1064), 2);
    add_background_object(create_rmgrass6_1147(496, 1016), 2);
    add_background_object(create_soil4_1148(368, 1096), 2);
    add_background_object(create_soil4_1148(368, 1128), 2);
    add_background_object(create_rmgrass1_1132(384, 1080), 2);
    add_background_object(create_rmgrass6_1147(368, 1080), 2);
    add_background_object(create_soil6_1133(112, 1032), 2);
    add_background_object(create_rmgrass5_1146(128, 1016), 2);
    add_background_object(create_rmgrass1_1132(64, 1016), 2);
    add_background_object(create_soil6_1133(112, 1064), 2);
    add_background_object(create_soil6_1133(112, 1096), 2);
    add_background_object(create_soil6_1133(112, 1128), 2);
    add_background_object(create_soil6_1133(1200, 1112), 2);
    add_background_object(create_soil6_1133(1200, 1080), 2);
    add_background_object(create_soil6_1133(1200, 1048), 2);
    add_background_object(create_rmgrass6_1147(1232, 1144), 2);
    add_background_object(create_rmgrass6_1147(2032, 1096), 2);
    add_background_object(create_soil1_1120(1984, 1280), 2);
    add_background_object(create_rmgrass5_1146(1888, 1104), 2);
    add_background_object(create_soil3_1141(1832, 1112), 2);
    add_background_object(create_soil3_1141(1768, 1128), 2);
    add_background_object(create_rmgrass7_1149(1856, 1448), 2);
    add_background_object(create_soil1_1120(2032, 1112), 2);
    add_background_object(create_soil1_1120(2032, 1240), 2);
    add_background_object(create_rmgrass1_1132(2048, 1096), 2);
    add_background_object(create_soil3_1141(1960, 1200), 2);
    add_background_object(create_rmgrass8_1150(1760, 1104), 2);
    add_background_object(create_soil3_1141(2096, 1120), 2);
    add_background_object(create_rmgrass9_1151(2112, 1096), 2);
    add_background_object(create_soil1_1120(2240, 1136), 2);
    add_background_object(create_soil1_1120(2240, 1264), 2);
    add_background_object(create_rmgrass1_1132(2240, 1128), 2);
    add_background_object(create_rmbrick6_1129(2152, 976), 2);
    add_background_object(create_rmbrick4_1125(2344, 1040), 2);
    add_background_object(create_rmbrick4_1125(2344, 1072), 2);
    add_background_object(create_rmbrick4_1125(2344, 1104), 2);
    add_background_object(create_soil1_1120(2112, 1392), 2);
    add_background_object(create_soil1_1120(2240, 1392), 2);
    add_background_object(create_soil3_1141(2104, 1232), 2);
    add_background_object(create_rmbrick1_1121(2368, 1008), 2);
    add_background_object(create_rmbrick9_1138(2176, 976), 2);
    add_background_object(create_rmbrick10_1137(2432, 816), 2);
    add_background_object(create_rmbrick9_1138(2368, 816), 2);
    add_background_object(create_rmbrick2_1108(2496, 880), 2);
    add_background_object(create_rmgrass1_1132(2304, 1128), 2);
    add_background_object(create_rmbrick2_1108(2496, 1072), 2);
    add_background_object(create_rmbrick2_1108(2496, 1104), 2);
    add_background_object(create_rmbrick2_1108(2560, 1104), 2);
    add_background_object(create_rmbrick2_1108(2432, 880), 2);
    add_background_object(create_soil1_1120(2368, 1264), 2);
    add_background_object(create_soil1_1120(2496, 1136), 2);
    add_background_object(create_soil1_1120(2496, 1264), 2);
    add_background_object(create_soil1_1120(2496, 1392), 2);
    add_background_object(create_soil1_1120(2368, 1392), 2);
    add_background_object(create_rmbrick4_1125(2216, 944), 2);
    add_background_object(create_rmbrick1_1121(2304, 880), 2);
    add_background_object(create_rmbrick4_1125(2280, 880), 2);
    add_background_object(create_rmbrick4_1125(2280, 912), 2);
    add_background_object(create_rmbrick4_1125(2280, 848), 2);
    add_background_object(create_rmbrick2_1108(2368, 848), 2);
    add_background_object(create_rmbrick1_1121(2496, 944), 2);
    add_background_object(create_rmbrick2_1108(2560, 880), 2);
    add_background_object(create_rmbrick2_1108(2496, 912), 2);
    add_background_object(create_rmbrick2_1108(2560, 912), 2);
    add_background_object(create_rmbrick5_1136(2240, 912), 2);
    add_background_object(create_rmbrick5_1136(2560, 848), 2);
    add_background_object(create_rmbrick5_1136(1680, 1088), 2);
    add_background_object(create_rmladder_1152(1728, 688), 2);
    add_background_object(create_rmladder_1152(1728, 720), 2);
    add_background_object(create_rmladder_1152(1728, 752), 2);
    add_background_object(create_rmplant1_1139(1632, 1088), 2);
    add_background_object(create_rmplant1_1139(2424, 824), 2);
    add_background_object(create_rmplant1_1139(2224, 976), 2);
    add_background_object(create_rmplant1_1139(2416, 848), 2);
    add_background_object(create_rmplant1_1139(2552, 856), 2);
    add_background_object(create_rmplant1_1139(2560, 880), 2);
    add_background_object(create_rmplant1_1139(2536, 872), 2);
    add_background_object(create_switchbase_1153(1944, 1456), 2);
    add_background_object(create_rmbrick7_1130(2368, 720), 2);
    add_background_object(create_rmbrick5_1136(2176, 688), 2);
    add_background_object(create_rmbrick10_1137(2240, 688), 2);
    add_background_object(create_rmbrick3_1131(2368, 784), 2);
    add_background_object(create_rmbrick4_1125(2344, 784), 2);
    add_background_object(create_rmbrick4_1125(2152, 816), 2);
    add_background_object(create_rmbrick3_1131(2368, 752), 2);
    add_background_object(create_rmbrick4_1125(2344, 752), 2);
    add_background_object(create_rmbrick2_1108(2112, 720), 2);
    add_background_object(create_rmbrick3_1131(2176, 784), 2);
    add_background_object(create_rmbrick4_1125(2152, 784), 2);
    add_background_object(create_rmbrick3_1131(2176, 752), 2);
    add_background_object(create_rmbrick4_1125(2152, 752), 2);
    add_background_object(create_rmbrick2_1108(2304, 816), 2);
    add_background_object(create_rmbrick2_1108(2240, 816), 2);
    add_background_object(create_rmbrick2_1108(2176, 816), 2);
    add_background_object(create_rmbrick13_1116(2176, 848), 2);
    add_background_object(create_rmbrick14_1128(2152, 848), 2);
    add_background_object(create_rmbrick15_1154(1296, 1048), 2);
    add_background_object(create_rmbrick3_1131(2272, 784), 2);
    add_background_object(create_rmbrick4_1125(2248, 784), 2);
    add_background_object(create_rmbrick3_1131(2272, 752), 2);
    add_background_object(create_rmbrick4_1125(2248, 752), 2);
    add_background_object(create_rmbrick2_1108(2560, 1072), 2);
    add_background_object(create_rmbrick2_1108(2432, 912), 2);
    add_background_object(create_rmbrick2_1108(2432, 944), 2);
    add_background_object(create_rmbrick2_1108(2432, 976), 2);
    add_background_object(create_switchwallbase_1155(2200, 928), 2);
    add_background_object(create_rmbrick9_1138(2192, 800), 2);
    add_background_object(create_rmbrick9_1138(2288, 800), 2);
    add_background_object(create_rmbrick2_1108(2304, 848), 2);
    add_background_object(create_rmbrick6_1129(2216, 912), 2);
    add_background_object(create_rmbrick14_1128(2152, 1008), 2);
    add_background_object(create_rmbrick13_1116(1232, 1048), 2);
    add_background_object(create_soil9_1156(1904, 1080), 2);
    add_background_object(create_rmbrick9_1138(2112, 688), 2);
    add_background_object(create_rmbrick13_1116(2048, 720), 2);
    add_background_object(create_rmbrick4_1125(2088, 720), 2);
    add_background_object(create_rmbrick5_1136(2048, 688), 2);
    add_background_object(create_rmbrick5_1136(1792, 688), 2);
    add_background_object(create_rmbrick13_1116(1792, 720), 2);
    add_background_object(create_rmladder_1152(1728, 784), 2);
    add_background_object(create_rmbrick6_1129(1768, 688), 2);
    add_background_object(create_rmbrick14_1128(1768, 720), 2);
    add_background_object(create_rmladder_1152(1728, 816), 2);
    add_background_object(create_rmbrick6_1129(2024, 688), 2);
    add_background_object(create_rmbrick14_1128(2024, 720), 2);
    add_background_object(create_rmbrick7_1130(1856, 688), 2);
    add_background_object(create_rmbrick15_1154(1856, 720), 2);
    add_background_object(create_rmbrick8_1135(2240, 944), 2);
    add_background_object(create_rmbrick2_1108(2176, 720), 2);
    add_background_object(create_rmbrick6_1129(1680, 608), 2);
    add_background_object(create_rmbrick7_1130(1704, 608), 2);
    add_background_object(create_rmbrick4_1125(1680, 640), 2);
    add_background_object(create_rmbrick3_1131(1704, 640), 2);
    add_background_object(create_rmbrick4_1125(1680, 672), 2);
    add_background_object(create_rmbrick3_1131(1704, 672), 2);
    add_background_object(create_rmbrick4_1125(1680, 704), 2);
    add_background_object(create_rmbrick3_1131(1704, 704), 2);
    add_background_object(create_rmbrick4_1125(1680, 736), 2);
    add_background_object(create_rmbrick3_1131(1704, 736), 2);
    add_background_object(create_rmbrick4_1125(1680, 768), 2);
    add_background_object(create_rmbrick3_1131(1704, 768), 2);
    add_background_object(create_rmbrick4_1125(1680, 800), 2);
    add_background_object(create_rmbrick3_1131(1704, 800), 2);
    add_background_object(create_rmbrick4_1125(1680, 832), 2);
    add_background_object(create_rmbrick3_1131(1704, 832), 2);
    add_background_object(create_rmbrick14_1128(1680, 864), 2);
    add_background_object(create_rmbrick15_1154(1704, 864), 2);
    add_background_object(create_soil11_1157(1616, 1120), 2);
    add_background_object(create_soil11_1157(2496, 1104), 2);
    add_background_object(create_soil11_1157(2368, 1104), 2);
    add_background_object(create_rmgrass5_1146(2368, 1128), 2);
    add_background_object(create_soil1_1120(2624, 1152), 2);
    add_background_object(create_soil1_1120(2752, 1152), 2);
    add_background_object(create_soil1_1120(2880, 1152), 2);
    add_background_object(create_soil1_1120(3120, 1088), 2);
    add_background_object(create_soil3_1141(2608, 1024), 2);
    add_background_object(create_rmbrick1_1121(2576, 600), 2);
    add_background_object(create_rmbrick4_1125(2552, 600), 2);
    add_background_object(create_rmbrick4_1125(2552, 632), 2);
    add_background_object(create_rmbrick4_1125(2552, 664), 2);
    add_background_object(create_rmbrick4_1125(2552, 696), 2);
    add_background_object(create_rmbrick13_1116(2640, 728), 2);
    add_background_object(create_rmbrick14_1128(2552, 728), 2);
    add_background_object(create_rmbrick13_1116(2576, 728), 2);
    add_background_object(create_rmbrick6_1129(2488, 632), 2);
    add_background_object(create_rmbrick9_1138(2512, 632), 2);
    add_background_object(create_rmbrick14_1128(2488, 664), 2);
    add_background_object(create_rmbrick1_1121(2576, 472), 2);
    add_background_object(create_rmbrick4_1125(2552, 568), 2);
    add_background_object(create_rmbrick4_1125(2552, 536), 2);
    add_background_object(create_rmbrick4_1125(2552, 504), 2);
    add_background_object(create_rmbrick4_1125(2552, 472), 2);
    add_background_object(create_rmbrick6_1129(2552, 440), 2);
    add_background_object(create_rmbrick5_1136(2576, 440), 2);
    add_background_object(create_rmbrick9_1138(2640, 440), 2);
    add_background_object(create_rmbrick7_1130(2704, 440), 2);
    add_background_object(create_rmbrick3_1131(2704, 504), 2);
    add_background_object(create_rmbrick3_1131(2704, 536), 2);
    add_background_object(create_rmbrick3_1131(2704, 472), 2);
    add_background_object(create_rmbrick3_1131(2704, 600), 2);
    add_background_object(create_rmbrick3_1131(2704, 632), 2);
    add_background_object(create_rmbrick3_1131(2704, 568), 2);
    add_background_object(create_rmbrick3_1131(2704, 664), 2);
    add_background_object(create_rmbrick3_1131(2704, 696), 2);
    add_background_object(create_rmbrick15_1154(2704, 728), 2);
    add_background_object(create_rmucurve_1158(2784, 472), 2);
    add_background_object(create_rmbrick2_1108(2952, 448), 2);
    add_background_object(create_rmbrick3_1131(3016, 448), 2);
    add_background_object(create_rmbrick4_1125(2928, 448), 2);
    add_background_object(create_rmbrick14_1128(2928, 480), 2);
    add_background_object(create_rmbrick15_1154(3016, 480), 2);
    add_background_object(create_rmbrick13_1116(2952, 480), 2);
    add_background_object(create_rmbrick2_1108(2952, 416), 2);
    add_background_object(create_rmbrick3_1131(3016, 416), 2);
    add_background_object(create_rmbrick4_1125(2928, 416), 2);
    add_background_object(create_rmbrick2_1108(2952, 320), 2);
    add_background_object(create_rmbrick3_1131(3016, 320), 2);
    add_background_object(create_rmbrick4_1125(2928, 320), 2);
    add_background_object(create_rmbrick2_1108(2952, 288), 2);
    add_background_object(create_rmbrick3_1131(3016, 288), 2);
    add_background_object(create_rmbrick4_1125(2928, 288), 2);
    add_background_object(create_rmbrick2_1108(2952, 256), 2);
    add_background_object(create_rmbrick3_1131(3016, 256), 2);
    add_background_object(create_rmbrick4_1125(2928, 256), 2);
    add_background_object(create_rmbrick2_1108(2952, 224), 2);
    add_background_object(create_rmbrick3_1131(3016, 224), 2);
    add_background_object(create_rmbrick4_1125(2928, 224), 2);
    add_background_object(create_rmbrick2_1108(2952, 384), 2);
    add_background_object(create_rmbrick3_1131(3016, 384), 2);
    add_background_object(create_rmbrick4_1125(2928, 384), 2);
    add_background_object(create_rmbrick2_1108(2952, 352), 2);
    add_background_object(create_rmbrick3_1131(3016, 352), 2);
    add_background_object(create_rmbrick4_1125(2928, 352), 2);
    add_background_object(create_rmbrick6_1129(3240, 440), 2);
    add_background_object(create_rmbrick9_1138(3328, 440), 2);
    add_background_object(create_rmbrick7_1130(3392, 440), 2);
    add_background_object(create_rmgrass6_1147(3456, 856), 2);
    add_background_object(create_soil2_1140(3120, 1056), 2);
    add_background_object(create_soil1_1120(3248, 1088), 2);
    add_background_object(create_soil2_1140(3248, 1056), 2);
    add_background_object(create_soil1_1120(3312, 992), 2);
    add_background_object(create_rmgrass1_1132(3536, 856), 2);
    add_background_object(create_soil1_1120(3696, 864), 2);
    add_background_object(create_rmgrass1_1132(3728, 856), 2);
    add_background_object(create_soil1_1120(3824, 800), 2);
    add_background_object(create_soil4_1148(3808, 832), 2);
    add_background_object(create_soil1_1120(3824, 864), 2);
    add_background_object(create_soil4_1148(3808, 800), 2);
    add_background_object(create_rmgrass6_1147(3808, 792), 2);
    add_background_object(create_soil1_1120(3824, 992), 2);
    add_background_object(create_soil1_1120(2992, 1216), 2);
    add_background_object(create_soil1_1120(3120, 1216), 2);
    add_background_object(create_soil1_1120(3248, 1216), 2);
    add_background_object(create_soil1_1120(3312, 1120), 2);
    add_background_object(create_soil1_1120(3440, 1120), 2);
    add_background_object(create_soil1_1120(3312, 1248), 2);
    add_background_object(create_soil1_1120(3440, 1248), 2);
    add_background_object(create_soil1_1120(3824, 1120), 2);
    add_background_object(create_soil1_1120(3824, 1248), 2);
    add_background_object(create_soil3_1141(3288, 864), 2);
    add_background_object(create_soil3_1141(3296, 976), 2);
    add_background_object(create_rmbrick3_1131(3048, 96), 2);
    add_background_object(create_rmbrick4_1125(2896, 96), 2);
    add_background_object(create_rmbrick3_1131(3048, 64), 2);
    add_background_object(create_rmbrick4_1125(2896, 64), 2);
    add_background_object(create_rmbrick3_1131(3048, 32), 2);
    add_background_object(create_rmbrick4_1125(2896, 32), 2);
    add_background_object(create_rmbrick3_1131(3048, 0), 2);
    add_background_object(create_rmbrick4_1125(2896, 0), 2);
    add_background_object(create_rmbrick1_1121(2920, 0), 2);
    add_background_object(create_rmbrick6_1129(2928, 192), 2);
    add_background_object(create_rmbrick5_1136(2952, 192), 2);
    add_background_object(create_rmbrick7_1130(3016, 192), 2);
    add_background_object(create_rmbrick14_1128(2896, 128), 2);
    add_background_object(create_rmbrick15_1154(3048, 128), 2);
    add_background_object(create_rmbrick13_1116(2920, 128), 2);
    add_background_object(create_rmbrick13_1116(2984, 128), 2);
    add_background_object(create_rmbrick2_1108(3264, 472), 2);
    add_background_object(create_rmbrick4_1125(3240, 472), 2);
    add_background_object(create_rmbrick2_1108(3328, 472), 2);
    add_background_object(create_rmbrick14_1128(3240, 504), 2);
    add_background_object(create_rmbrick13_1116(3264, 504), 2);
    add_background_object(create_soil1_1120(3952, 896), 2);
    add_background_object(create_soil1_1120(3952, 992), 2);
    add_background_object(create_soil1_1120(3952, 1120), 2);
    add_background_object(create_soil1_1120(3952, 1248), 2);
    add_background_object(create_rmbrick5_1136(3264, 440), 2);
    add_background_object(create_soil3_1141(3872, 768), 2);
    add_background_object(create_rmgrass5_1146(3792, 856), 2);
    add_background_object(create_rmgrass8_1150(3824, 760), 2);
    add_background_object(create_soil1_1120(4032, 896), 2);
    add_background_object(create_soil10_1159(4032, 768), 2);
    add_background_object(create_soil12_1160(4160, 768), 2);
    add_background_object(create_rmgrass5_1146(4016, 760), 2);
    add_background_object(create_soil3_1141(3816, 840), 2);
    add_background_object(create_soil1_1120(4160, 896), 2);
    add_background_object(create_soil1_1120(4288, 752), 2);
    add_background_object(create_soil1_1120(4336, 880), 2);
    add_background_object(create_rmbrick3_1131(3392, 568), 2);
    add_background_object(create_rmbrick3_1131(3392, 536), 2);
    add_background_object(create_rmbrick3_1131(3392, 504), 2);
    add_background_object(create_rmbrick3_1131(3392, 472), 2);
    add_background_object(create_rmbrick4_1125(3368, 504), 2);
    add_background_object(create_rmbrick4_1125(3368, 536), 2);
    add_background_object(create_rmbrick4_1125(3368, 568), 2);
    add_background_object(create_rmbrick4_1125(3368, 600), 2);
    add_background_object(create_rmbrick14_1128(3304, 632), 2);
    add_background_object(create_rmbrick6_1129(3304, 600), 2);
    add_background_object(create_rmbrick9_1138(3328, 600), 2);
    add_background_object(create_rmcolumn4_1117(2552, 736), 2);
    add_background_object(create_rmcolumn4_1117(3352, 640), 2);
    add_background_object(create_rmcolumn2_1109(3352, 712), 2);
    add_background_object(create_rmbrick13_1116(3328, 632), 2);
    add_background_object(create_rmcolumn3_1114(3112, 832), 2);
    add_background_object(create_rmladder_1152(4352, 544), 2);
    add_background_object(create_rmplant1_1139(2936, 200), 2);
    add_background_object(create_rmplant1_1139(3352, 440), 2);
    add_background_object(create_soil1_1120(4416, 752), 2);
    add_background_object(create_soil1_1120(4464, 1008), 2);
    add_background_object(create_rmgrass5_1146(4432, 744), 2);
    add_background_object(create_soil1_1120(4464, 624), 2);
    add_background_object(create_soil4_1148(4448, 720), 2);
    add_background_object(create_soil4_1148(4448, 688), 2);
    add_background_object(create_soil4_1148(4448, 656), 2);
    add_background_object(create_soil4_1148(4448, 624), 2);
    add_background_object(create_rmgrass6_1147(4448, 616), 2);
    add_background_object(create_rmgrass4_1142(4456, 608), 2);
    add_background_object(create_soil1_1120(4464, 752), 2);
    add_background_object(create_rmladder_1152(4352, 576), 2);
    add_background_object(create_rmladder_1152(4352, 608), 2);
    add_background_object(create_soil1_1120(4080, 1152), 2);
    add_background_object(create_soil1_1120(4080, 1024), 2);
    add_background_object(create_soil1_1120(4208, 1024), 2);
    add_background_object(create_soil1_1120(4208, 1152), 2);
    add_background_object(create_soil1_1120(4336, 1008), 2);
    add_background_object(create_soil1_1120(4336, 1136), 2);
    add_background_object(create_soil1_1120(4464, 1136), 2);
    add_background_object(create_rmbrick6_1129(4240, 544), 2);
    add_background_object(create_rmbrick7_1130(4328, 544), 2);
    add_background_object(create_rmbrick15_1154(4328, 608), 2);
    add_background_object(create_rmbrick13_1116(4264, 608), 2);
    add_background_object(create_rmbrick5_1136(4264, 544), 2);
    add_background_object(create_rmbrick8_1135(4264, 576), 2);
    add_background_object(create_rmbrick4_1125(4240, 576), 2);
    add_background_object(create_rmbrick3_1131(4328, 576), 2);
    add_background_object(create_rmbrick6_1129(4240, 400), 2);
    add_background_object(create_rmbrick14_1128(4240, 432), 2);
    add_background_object(create_rmbrick15_1154(4392, 432), 2);
    add_background_object(create_rmbrick13_1116(4264, 432), 2);
    add_background_object(create_rmbrick4_1125(4304, 400), 2);
    add_background_object(create_rmbrick3_1131(4392, 400), 2);
    add_background_object(create_rmbrick6_1129(3984, 304), 2);
    add_background_object(create_rmbrick7_1130(4072, 304), 2);
    add_background_object(create_rmbrick14_1128(3984, 368), 2);
    add_background_object(create_rmbrick15_1154(4072, 368), 2);
    add_background_object(create_rmbrick13_1116(4008, 368), 2);
    add_background_object(create_rmbrick5_1136(4008, 304), 2);
    add_background_object(create_rmbrick8_1135(4008, 336), 2);
    add_background_object(create_rmbrick4_1125(3984, 336), 2);
    add_background_object(create_rmbrick3_1131(4072, 336), 2);
    add_background_object(create_rmbrick6_1129(3984, 480), 2);
    add_background_object(create_rmbrick7_1130(4072, 480), 2);
    add_background_object(create_rmbrick14_1128(3984, 608), 2);
    add_background_object(create_rmbrick5_1136(4008, 480), 2);
    add_background_object(create_rmbrick4_1125(3984, 512), 2);
    add_background_object(create_rmbrick3_1131(4072, 512), 2);
    add_background_object(create_rmbrick2_1108(4008, 512), 2);
    add_background_object(create_rmbrick6_1129(4304, 368), 2);
    add_background_object(create_rmbrick9_1138(4264, 400), 2);
    add_background_object(create_rmbrick5_1136(4200, 576), 2);
    add_background_object(create_rmbrick13_1116(4200, 608), 2);
    add_background_object(create_rmbrick9_1138(4136, 576), 2);
    add_background_object(create_rmbrick13_1116(4136, 608), 2);
    add_background_object(create_rmbrick3_1131(4072, 544), 2);
    add_background_object(create_rmbrick3_1131(4072, 576), 2);
    add_background_object(create_rmbrick5_1136(4072, 576), 2);
    add_background_object(create_rmbrick13_1116(4072, 608), 2);
    add_background_object(create_rmbrick2_1108(4008, 576), 2);
    add_background_object(create_rmbrick8_1135(4008, 544), 2);
    add_background_object(create_rmbrick4_1125(3984, 544), 2);
    add_background_object(create_rmbrick4_1125(3984, 576), 2);
    add_background_object(create_rmbrick13_1116(4008, 608), 2);
    add_background_object(create_rmgrass6_1147(4288, 744), 2);
    add_background_object(create_rmgrass4_1142(4304, 736), 2);
    add_background_object(create_rmgrass1_1132(3952, 760), 2);
    add_background_object(create_soil3_1141(4256, 832), 2);
    add_background_object(create_soil3_1141(4464, 840), 2);
    add_background_object(create_soil3_1141(4360, 856), 2);
    add_background_object(create_soil3_1141(4464, 928), 2);
    add_background_object(create_soil3_1141(3976, 872), 2);
    add_background_object(create_soil3_1141(4240, 872), 2);
    add_background_object(create_edgeoverlay_496(4000, 760), 2);
    add_background_object(create_edgeoverlay_496(4288, 744), 2);
    add_background_object(create_soil3_1141(4224, 968), 2);
    add_background_object(create_rmcolumn2_1109(4136, 800), 2);
    add_background_object(create_rmcolumn2_1109(4136, 752), 2);
    add_background_object(create_rmcolumn3_1114(4136, 704), 2);
    add_background_object(create_soil10_1159(4592, 624), 2);
    add_background_object(create_rmgrass5_1146(4576, 616), 2);
    add_background_object(create_rmcolumn2_1109(4656, 608), 2);
    add_background_object(create_rmcolumn2_1109(4736, 536), 2);
    add_background_object(create_rmcolumn4_1117(4736, 464), 2);
    add_background_object(create_soil1_1120(4848, 624), 2);
    add_background_object(create_edgeoverlay_496(4560, 616), 2);
    add_background_object(create_soil1_1120(4592, 752), 2);
    add_background_object(create_soil1_1120(4720, 752), 2);
    add_background_object(create_soil1_1120(4848, 752), 2);
    add_background_object(create_soil1_1120(4592, 880), 2);
    add_background_object(create_soil1_1120(4720, 880), 2);
    add_background_object(create_soil1_1120(4848, 880), 2);
    add_background_object(create_soil1_1120(4592, 1008), 2);
    add_background_object(create_soil1_1120(4720, 1008), 2);
    add_background_object(create_soil1_1120(4848, 1008), 2);
    add_background_object(create_soil1_1120(4976, 624), 2);
    add_background_object(create_soil1_1120(4976, 752), 2);
    add_background_object(create_soil1_1120(4976, 880), 2);
    add_background_object(create_soil1_1120(4976, 1008), 2);
    add_background_object(create_soil3_1141(4912, 592), 2);
    add_background_object(create_rmgrass8_1150(4864, 584), 2);
    add_background_object(create_rmcolumn2_1109(4736, 512), 2);
    add_background_object(create_rmcolumn2_1109(4656, 560), 2);
    add_background_object(create_rmcolumn4_1117(4656, 464), 2);
    add_background_object(create_rmcolumn2_1109(4656, 512), 2);
    add_background_object(create_rmbrick14_1128(4648, 456), 2);
    add_background_object(create_rmbrick13_1116(4736, 456), 2);
    add_background_object(create_rmbrick15_1154(4928, 456), 2);
    add_background_object(create_rmbrick6_1129(4648, 360), 2);
    add_background_object(create_rmbrick9_1138(4672, 360), 2);
    add_background_object(create_rmbrick13_1116(4672, 456), 2);
    add_background_object(create_soil3_1141(4952, 600), 2);
    add_background_object(create_rmgrass9_1151(4992, 584), 2);
    add_background_object(create_soil1_1120(5104, 752), 2);
    add_background_object(create_soil1_1120(5104, 880), 2);
    add_background_object(create_soil1_1120(5104, 1008), 2);
    add_background_object(create_soil1_1120(5232, 624), 2);
    add_background_object(create_soil1_1120(5232, 752), 2);
    add_background_object(create_soil1_1120(5232, 880), 2);
    add_background_object(create_soil1_1120(5232, 1008), 2);
    add_background_object(create_rmgrass4_1142(5120, 608), 2);
    add_background_object(create_rmgrass1_1132(5248, 616), 2);
    add_background_object(create_soil1_1120(5360, 624), 2);
    add_background_object(create_soil1_1120(5360, 752), 2);
    add_background_object(create_soil1_1120(5360, 880), 2);
    add_background_object(create_soil1_1120(5360, 1008), 2);
    add_background_object(create_soil1_1120(5488, 624), 2);
    add_background_object(create_soil1_1120(5488, 752), 2);
    add_background_object(create_soil1_1120(5488, 880), 2);
    add_background_object(create_soil1_1120(5488, 1008), 2);
    add_background_object(create_soil3_1141(5376, 608), 2);
    add_background_object(create_soil3_1141(5440, 568), 2);
    add_background_object(create_soil1_1120(5616, 624), 2);
    add_background_object(create_soil1_1120(5616, 752), 2);
    add_background_object(create_soil1_1120(5616, 496), 2);
    add_background_object(create_soil3_1141(5552, 480), 2);
    add_background_object(create_rmgrass2_1145(5312, 488), 2);
    add_background_object(create_rmbrick1_1121(5616, 368), 2);
    add_background_object(create_soil2_1140(5616, 464), 2);
    add_background_object(create_rmgrass5_1146(5568, 488), 2);
    add_background_object(create_soil3_1141(5536, 568), 2);
    add_background_object(create_rmbrick4_1125(5592, 368), 2);
    add_background_object(create_rmbrick4_1125(5592, 400), 2);
    add_background_object(create_rmbrick4_1125(5592, 432), 2);
    add_background_object(create_soil1_1120(5744, 624), 2);
    add_background_object(create_soil1_1120(5744, 752), 2);
    add_background_object(create_rmbrick1_1121(5744, 304), 2);
    add_background_object(create_soil2_1140(5744, 592), 2);
    add_background_object(create_rmbrick2_1108(4328, 400), 2);
    add_background_object(create_rmbrick13_1116(4328, 432), 2);
    add_background_object(create_rmbrick4_1125(4368, 336), 2);
    add_background_object(create_rmbrick4_1125(4368, 368), 2);
    add_background_object(create_rmbrick9_1138(4328, 368), 2);
    add_background_object(create_rmbrick4_1125(4368, 240), 2);
    add_background_object(create_rmbrick4_1125(4368, 272), 2);
    add_background_object(create_rmbrick4_1125(4368, 304), 2);
    add_background_object(create_rmbrick3_1131(4392, 368), 2);
    add_background_object(create_rmbrick3_1131(4392, 336), 2);
    add_background_object(create_rmbrick3_1131(4392, 304), 2);
    add_background_object(create_rmbrick3_1131(4392, 272), 2);
    add_background_object(create_rmbrick3_1131(4392, 240), 2);
    add_background_object(create_rmbrick4_1125(4368, 208), 2);
    add_background_object(create_rmbrick4_1125(4368, 144), 2);
    add_background_object(create_rmbrick4_1125(4368, 176), 2);
    add_background_object(create_rmbrick3_1131(4392, 208), 2);
    add_background_object(create_rmbrick3_1131(4392, 176), 2);
    add_background_object(create_rmplant1_1139(4032, 488), 2);
    add_background_object(create_rmplant1_1139(4040, 520), 2);
    add_background_object(create_rmplant1_1139(4320, 376), 2);
    add_background_object(create_rmplant1_1139(5624, 384), 2);
    add_background_object(create_rmcolumn2_1109(3984, 672), 2);
    add_background_object(create_rmbrick6_1129(4368, 112), 2);
    add_background_object(create_rmbrick7_1130(4392, 112), 2);
    add_background_object(create_rmbrick8_1135(4672, 392), 2);
    add_background_object(create_rmbrick4_1125(4648, 392), 2);
    add_background_object(create_rmbrick3_1131(4800, 392), 2);
    add_background_object(create_rmbrick2_1108(4736, 392), 2);
    add_background_object(create_rmbrick4_1125(4776, 360), 2);
    add_background_object(create_rmbrick5_1136(4736, 360), 2);
    add_background_object(create_rmbrick3_1131(4800, 360), 2);
    add_background_object(create_rmbrick6_1129(4776, 264), 2);
    add_background_object(create_rmbrick4_1125(4776, 296), 2);
    add_background_object(create_rmbrick4_1125(4776, 328), 2);
    add_background_object(create_rmbrick3_1131(4800, 328), 2);
    add_background_object(create_rmbrick2_1108(4800, 296), 2);
    add_background_object(create_rmplant1_1139(4920, 168), 2);
    add_background_object(create_rmbrick13_1116(4864, 328), 2);
    add_background_object(create_rmbrick2_1108(4864, 296), 2);
    add_background_object(create_rmbrick5_1136(4800, 264), 2);
    add_background_object(create_rmbrick19_1161(4864, 232), 2);
    add_background_object(create_rmbrick13_1116(4992, 328), 2);
    add_background_object(create_rmbrick2_1108(4928, 296), 2);
    add_background_object(create_rmbrick3_1131(4992, 296), 2);
    add_background_object(create_rmbrick13_1116(4992, 264), 2);
    add_background_object(create_rmbrick3_1131(4992, 264), 2);
    add_background_object(create_rmbrick13_1116(4928, 328), 2);
    add_background_object(create_rmbrick3_1131(5056, 296), 2);
    add_background_object(create_rmbrick3_1131(5056, 264), 2);
    add_background_object(create_rmbrick4_1125(5032, 264), 2);
    add_background_object(create_rmbrick4_1125(5032, 296), 2);
    add_background_object(create_rmbrick5_1136(4992, 296), 2);
    add_background_object(create_rmbrick3_1131(5056, 328), 2);
    add_background_object(create_rmbrick4_1125(5032, 328), 2);
    add_background_object(create_rmbrick3_1131(5056, 360), 2);
    add_background_object(create_rmbrick4_1125(5032, 360), 2);
    add_background_object(create_rmbrick3_1131(5056, 392), 2);
    add_background_object(create_rmbrick4_1125(5032, 392), 2);
    add_background_object(create_rmcolumn4_1117(5032, 464), 2);
    add_background_object(create_rmcolumn2_1109(5032, 512), 2);
    add_background_object(create_rmbrick14_1128(5032, 456), 2);
    add_background_object(create_rmbrick15_1154(5056, 456), 2);
    add_background_object(create_rmbrick5_1136(4992, 232), 2);
    add_background_object(create_rmbrick7_1130(5056, 232), 2);
    add_background_object(create_rmucurve_1158(5136, 264), 2);
    add_background_object(create_rmbrick4_1125(5592, 336), 2);
    add_background_object(create_rmbrick1_1121(5616, 240), 2);
    add_background_object(create_rmbrick4_1125(5592, 272), 2);
    add_background_object(create_rmbrick4_1125(5592, 304), 2);
    add_background_object(create_rmbrick8_1135(4736, 424), 2);
    add_background_object(create_rmbrick2_1108(4672, 424), 2);
    add_background_object(create_rmbrick4_1125(4648, 424), 2);
    add_background_object(create_rmbrick3_1131(5056, 424), 2);
    add_background_object(create_rmbrick4_1125(5032, 424), 2);
    add_background_object(create_rmbrick13_1116(4800, 456), 2);
    add_background_object(create_rmbrick3_1131(4800, 424), 2);
    add_background_object(create_rmbrick9_1138(4800, 424), 2);
    add_background_object(create_rmbrick13_1116(4864, 456), 2);
    add_background_object(create_rmbrick7_1130(4928, 424), 2);
    add_background_object(create_rmbrick9_1138(4864, 424), 2);
    add_background_object(create_rmcolumn2_1109(4904, 520), 2);
    add_background_object(create_rmbrick6_1129(5592, 240), 2);
    add_background_object(create_rmbrick19_1161(5616, 208), 2);
    add_background_object(create_rmbrick7_1130(5744, 208), 2);
    add_background_object(create_rmbrick3_1131(5744, 240), 2);
    add_background_object(create_rmbrick3_1131(5744, 272), 2);
    add_background_object(create_rmbrick5_1136(5744, 272), 2);
    add_background_object(create_rmbrick2_1108(5744, 560), 2);
    add_background_object(create_rmbrick2_1108(5808, 560), 2);
    add_background_object(create_rmbrick9_1138(5808, 272), 2);
    add_background_object(create_rmbrick1_1121(5872, -16), 2);
    add_background_object(create_rmbrick4_1125(5848, 48), 2);
    add_background_object(create_rmbrick4_1125(5848, 16), 2);
    add_background_object(create_rmbrick4_1125(5848, -16), 2);
    add_background_object(create_rmbrick4_1125(5848, 80), 2);
    add_background_object(create_rmbrick1_1121(6000, -16), 2);
    add_background_object(create_rmbrick1_1121(6064, 304), 2);
    add_background_object(create_rmbrick4_1125(6040, 368), 2);
    add_background_object(create_rmbrick4_1125(6040, 304), 2);
    add_background_object(create_rmbrick4_1125(6040, 336), 2);
    add_background_object(create_rmbrick6_1129(6040, 272), 2);
    add_background_object(create_rmbrick4_1125(6040, 400), 2);
    add_background_object(create_rmbrick7_1130(5872, 272), 2);
    add_background_object(create_rmbrick3_1131(5872, 304), 2);
    add_background_object(create_rmbrick3_1131(5872, 336), 2);
    add_background_object(create_rmbrick3_1131(5872, 368), 2);
    add_background_object(create_rmbrick3_1131(5872, 400), 2);
    add_background_object(create_rmbrick1_1121(6128, 176), 2);
    add_background_object(create_rmbrick1_1121(6192, 304), 2);
    add_background_object(create_rmbrick1_1121(6128, -16), 2);
    add_background_object(create_rmbrick2_1108(6128, 144), 2);
    add_background_object(create_rmbrick2_1108(6192, 144), 2);
    add_background_object(create_rmbrick2_1108(6128, 112), 2);
    add_background_object(create_rmbrick2_1108(6192, 112), 2);
    add_background_object(create_rmbrick4_1125(6104, 240), 2);
    add_background_object(create_rmbrick4_1125(6104, 208), 2);
    add_background_object(create_rmbrick4_1125(6104, 176), 2);
    add_background_object(create_rmbrick4_1125(6104, 272), 2);
    add_background_object(create_rmbrick9_1138(6064, 272), 2);
    add_background_object(create_rmbrick4_1125(6104, 144), 2);
    add_background_object(create_rmbrick4_1125(6104, 112), 2);
    add_background_object(create_rmbrick14_1128(5848, 112), 2);
    add_background_object(create_rmbrick13_1116(5872, 112), 2);
    add_background_object(create_rmbrick13_1116(5936, 112), 2);
    add_background_object(create_rmbrick13_1116(6000, 112), 2);
    add_background_object(create_rmcolumn2_1109(5848, 184), 2);
    add_background_object(create_rmbush2_1118(2672, 800), 2);
    add_background_object(create_rmbrick9_1138(2672, 864), 2);
    add_background_object(create_rmbrick5_1136(2736, 864), 2);
    add_background_object(create_rmbush2_1118(3720, 792), 2);
    add_background_object(create_rmbrick3_1131(5872, 560), 2);
    add_background_object(create_rmbrick3_1131(5872, 592), 2);
    add_background_object(create_rmbrick1_1121(5744, 432), 2);
    add_background_object(create_rmbrick3_1131(5872, 432), 2);
    add_background_object(create_rmbrick3_1131(5872, 464), 2);
    add_background_object(create_rmbrick3_1131(5872, 496), 2);
    add_background_object(create_rmbrick3_1131(5872, 528), 2);
    add_background_object(create_soil3_1141(5640, 496), 2);
    add_background_object(create_rmbrick6_1129(5872, 592), 2);
    add_background_object(create_rmbrick9_1138(5896, 592), 2);
    add_background_object(create_rmbrick1_1121(5896, 656), 2);
    add_background_object(create_rmbrick2_1108(5896, 624), 2);
    add_background_object(create_rmbrick2_1108(6024, 656), 2);
    add_background_object(create_rmbrick2_1108(6024, 688), 2);
    add_background_object(create_rmbrick2_1108(6024, 720), 2);
    add_background_object(create_rmbrick2_1108(6024, 752), 2);
    add_background_object(create_soil3_1141(5800, 608), 2);
    add_background_object(create_rmcolumn4_1117(6040, 440), 2);
    add_background_object(create_rmcolumn2_1109(6040, 488), 2);
    add_background_object(create_rmcolumn2_1109(6040, 528), 2);
    add_background_object(create_rmbrick14_1128(6040, 432), 2);
    add_background_object(create_rmbrick13_1116(6064, 432), 2);
    add_background_object(create_rmbrick13_1116(6128, 432), 2);
    add_background_object(create_rmbrick13_1116(6192, 432), 2);
    add_background_object(create_rmbrick13_1116(6256, 432), 2);
    add_background_object(create_rmcolumn1_1113(6152, 576), 2);
    add_background_object(create_rmcolumn2_1109(6152, 488), 2);
    add_background_object(create_rmcolumn2_1109(6152, 528), 2);
    add_background_object(create_rmbrick1_1121(6088, 656), 2);
    add_background_object(create_rmbrick3_1131(6256, 240), 2);
    add_background_object(create_rmbrick3_1131(6256, 272), 2);
    add_background_object(create_rmbrick9_1138(6256, 272), 2);
    add_background_object(create_rmbrick3_1131(6256, 208), 2);
    add_background_object(create_rmbrick3_1131(6256, 176), 2);
    add_background_object(create_rmbrick3_1131(6256, 144), 2);
    add_background_object(create_rmbrick3_1131(6256, 112), 2);
    add_background_object(create_rmbrick3_1131(6256, 80), 2);
    add_background_object(create_rmbrick3_1131(6256, 48), 2);
    add_background_object(create_rmbrick3_1131(6256, 16), 2);
    add_background_object(create_rmbrick3_1131(6256, -16), 2);
    add_background_object(create_rmbrick3_1131(3392, 600), 2);
    add_background_object(create_rmbrick15_1154(3392, 632), 2);
    add_background_object(create_soil2_1140(6088, 752), 2);
    add_background_object(create_soil2_1140(5960, 752), 2);
    add_background_object(create_soil2_1140(5832, 752), 2);
    add_background_object(create_soil3_1141(5800, 712), 2);
    add_background_object(create_soil1_1120(6088, 784), 2);
    add_background_object(create_soil1_1120(5960, 784), 2);
    add_background_object(create_soil1_1120(5832, 912), 2);
    add_background_object(create_soil1_1120(5616, 880), 2);
    add_background_object(create_soil1_1120(5744, 880), 2);
    add_background_object(create_soil1_1120(6088, 912), 2);
    add_background_object(create_soil1_1120(5960, 912), 2);
    add_background_object(create_soil1_1120(4592, 1136), 2);
    add_background_object(create_soil1_1120(4720, 1136), 2);
    add_background_object(create_soil1_1120(4848, 1136), 2);
    add_background_object(create_soil1_1120(4976, 1136), 2);
    add_background_object(create_soil1_1120(5104, 1136), 2);
    add_background_object(create_soil1_1120(5232, 1136), 2);
    add_background_object(create_soil1_1120(5360, 1136), 2);
    add_background_object(create_soil1_1120(5488, 1136), 2);
    add_background_object(create_soil1_1120(5616, 1008), 2);
    add_background_object(create_soil1_1120(5744, 1008), 2);
    add_background_object(create_soil1_1120(5616, 1136), 2);
    add_background_object(create_soil1_1120(5744, 1136), 2);
    add_background_object(create_soil1_1120(5832, 1040), 2);
    add_background_object(create_soil1_1120(6088, 1040), 2);
    add_background_object(create_soil1_1120(5960, 1040), 2);
    add_background_object(create_soil1_1120(5832, 1168), 2);
    add_background_object(create_soil1_1120(6088, 1168), 2);
    add_background_object(create_soil1_1120(5960, 1168), 2);
    add_background_object(create_rmgrass6_1147(4688, 752), 2);
    add_background_object(create_rmbrick6_1129(4712, 616), 2);
    add_background_object(create_rmbrick9_1138(4736, 616), 2);
    add_background_object(create_rmbrick5_1136(4800, 616), 2);
    add_background_object(create_soil4_1148(4840, 632), 2);
    add_background_object(create_soil4_1148(4840, 664), 2);
    add_background_object(create_soil4_1148(4840, 696), 2);
    add_background_object(create_rmbrick14_1128(4712, 648), 2);
    add_background_object(create_rmbrick13_1116(4736, 648), 2);
    add_background_object(create_soil4_1148(4840, 728), 2);
    add_background_object(create_rmgrass5_1146(4832, 752), 2);
    add_background_object(create_rmgrass1_1132(4704, 752), 2);
    add_background_object(create_rmgrass1_1132(4768, 752), 2);
    add_background_object(create_rmplant1_1139(4728, 368), 2);
    add_background_object(create_rmplant1_1139(5048, 296), 2);
    add_background_object(create_rmplant1_1139(5040, 328), 2);
    add_background_object(create_rmplant1_1139(5048, 392), 2);
    add_background_object(create_rmplant1_1139(5832, 496), 2);
    add_background_object(create_rmplant1_1139(6056, 280), 2);
    add_background_object(create_rmbrick2_1108(6280, 624), 2);
    add_background_object(create_rmbrick4_1125(6256, 624), 2);
    add_background_object(create_rmbrick5_1136(6216, 624), 2);
    add_background_object(create_rmbrick6_1129(6256, 592), 2);
    add_background_object(create_rmbrick9_1138(6280, 592), 2);
    add_background_object(create_rmbrick1_1121(6216, 656), 2);
    add_background_object(create_soil2_1140(6216, 752), 2);
    add_background_object(create_soil1_1120(6216, 784), 2);
    add_background_object(create_edgeoverlay_496(6256, 560), 2);
    add_background_object(create_edgeoverlay_496(6256, 440), 2);
    add_background_object(create_edgeoverlay_496(6104, 440), 2);
    add_background_object(create_rmbrick5_1136(6344, 592), 2);
    add_background_object(create_rmbrick1_1121(6344, 624), 2);
    add_background_object(create_rmbrick9_1138(6408, 592), 2);
    add_background_object(create_rmbrick6_1129(6448, 560), 2);
    add_background_object(create_rmbrick4_1125(6448, 592), 2);
    add_background_object(create_soil1_1120(6344, 784), 2);
    add_background_object(create_soil3_1141(6376, 728), 2);
    add_background_object(create_soil1_1120(6472, 784), 2);
    add_background_object(create_soil1_1120(6472, 656), 2);
    add_background_object(create_soil3_1141(6448, 656), 2);
    add_background_object(create_soil1_1120(6600, 784), 2);
    add_background_object(create_soil3_1141(6328, 736), 2);
    add_background_object(create_rmbrick5_1136(6472, 560), 2);
    add_background_object(create_rmbrick9_1138(6536, 528), 2);
    add_background_object(create_rmbrick4_1125(6512, 560), 2);
    add_background_object(create_rmbrick6_1129(6512, 528), 2);
    add_background_object(create_rmbrick5_1136(6600, 528), 2);
    add_background_object(create_rmbrick2_1108(6472, 592), 2);
    add_background_object(create_rmbrick2_1108(6472, 624), 2);
    add_background_object(create_rmbrick2_1108(6536, 624), 2);
    add_background_object(create_rmbrick2_1108(6536, 592), 2);
    add_background_object(create_rmbrick2_1108(6536, 560), 2);
    add_background_object(create_soil2_1140(6472, 624), 2);
    add_background_object(create_rmbrick2_1108(6600, 624), 2);
    add_background_object(create_rmbrick2_1108(6600, 592), 2);
    add_background_object(create_rmbrick2_1108(6600, 560), 2);
    add_background_object(create_soil3_1141(6536, 608), 2);
    add_background_object(create_soil3_1141(6536, 528), 2);
    add_background_object(create_rmgrass1_1132(6600, 528), 2);
    add_background_object(create_rmgrass1_1132(6536, 528), 2);
    add_background_object(create_rmbrick9_1138(6664, 528), 2);
    add_background_object(create_rmbrick7_1130(4584, 112), 2);
    add_background_object(create_rmbrick3_1131(4392, 144), 2);
    add_background_object(create_rmbrick5_1136(4392, 144), 2);
    add_background_object(create_rmbrick19_1161(4456, 112), 2);
    add_background_object(create_rmbrick3_1131(4584, 144), 2);
    add_background_object(create_rmbrick15_1154(4584, 176), 2);
    add_background_object(create_rmbrick13_1116(4520, 176), 2);
    add_background_object(create_rmbrick13_1116(4456, 176), 2);
    add_background_object(create_rmcolumn4_1117(4536, 184), 2);
    add_background_object(create_rmcolumn2_1109(4536, 232), 2);
    add_background_object(create_rmcolumn2_1109(4536, 280), 2);
    add_background_object(create_rmcolumn2_1109(4536, 424), 2);
    add_background_object(create_rmcolumn2_1109(4536, 472), 2);
    add_background_object(create_rmcolumn2_1109(4536, 328), 2);
    add_background_object(create_rmcolumn2_1109(4536, 376), 2);
    add_background_object(create_rmcolumn4_1117(4456, 184), 2);
    add_background_object(create_rmcolumn2_1109(4456, 232), 2);
    add_background_object(create_rmcolumn2_1109(4456, 280), 2);
    add_background_object(create_rmcolumn2_1109(4456, 424), 2);
    add_background_object(create_rmcolumn2_1109(4456, 472), 2);
    add_background_object(create_rmcolumn2_1109(4456, 328), 2);
    add_background_object(create_rmcolumn2_1109(4456, 376), 2);
    add_background_object(create_edgeoverlay_496(4280, 440), 2);
    add_background_object(create_rmbrick4_1125(6768, 528), 2);
    add_background_object(create_rmbrick5_1136(6728, 528), 2);
    add_background_object(create_rmbrick6_1129(6768, 464), 2);
    add_background_object(create_rmbrick4_1125(6768, 496), 2);
    add_background_object(create_rmbrick5_1136(6792, 464), 2);
    add_background_object(create_rmbrick1_1121(6792, 560), 2);
    add_background_object(create_rmbrick2_1108(7240, 240), 2);
    add_background_object(create_rmbrick2_1108(6792, 528), 2);
    add_background_object(create_rmbrick3_1131(6856, 528), 2);
    add_background_object(create_rmbrick3_1131(6856, 496), 2);
    add_background_object(create_rmbrick7_1130(6856, 464), 2);
    add_background_object(create_rmbrick5_1136(6856, 528), 2);
    add_background_object(create_rmbrick1_1121(6920, 560), 2);
    add_background_object(create_rmbrick1_1121(7048, 592), 2);
    add_background_object(create_rmbrick1_1121(7176, 592), 2);
    add_background_object(create_rmbrick1_1121(7304, 592), 2);
    add_background_object(create_rmbrick10_1137(7048, 528), 2);
    add_background_object(create_rmbrick9_1138(6920, 528), 2);
    add_background_object(create_rmbrick5_1136(6984, 528), 2);
    add_background_object(create_rmbrick5_1136(7176, 560), 2);
    add_background_object(create_rmbrick9_1138(7240, 560), 2);
    add_background_object(create_rmbrick4_1125(7344, 560), 2);
    add_background_object(create_rmbrick5_1136(7304, 560), 2);
    add_background_object(create_rmbrick5_1136(7240, 400), 2);
    add_background_object(create_rmbrick13_1116(7176, 432), 2);
    add_background_object(create_rmbrick13_1116(7112, 432), 2);
    add_background_object(create_rmbrick5_1136(7048, 400), 2);
    add_background_object(create_rmbrick13_1116(7048, 432), 2);
    add_background_object(create_rmbrick13_1116(6984, 432), 2);
    add_background_object(create_rmbrick9_1138(6984, 400), 2);
    add_background_object(create_rmbrick14_1128(6960, 432), 2);
    add_background_object(create_rmbrick6_1129(6960, 400), 2);
    add_background_object(create_rmbrick4_1125(7344, 400), 2);
    add_background_object(create_rmbrick9_1138(7304, 400), 2);
    add_background_object(create_rmbrick4_1125(7344, 208), 2);
    add_background_object(create_rmbrick5_1136(7304, 208), 2);
    add_background_object(create_rmbrick9_1138(7240, 208), 2);
    add_background_object(create_rmbrick2_1108(7304, 240), 2);
    add_background_object(create_rmentrywayright2_1112(7272, 432), 2);
    add_background_object(create_rmbrick8_1135(6792, 496), 2);
    add_background_object(create_rmbrick5_1136(7048, 240), 2);
    add_background_object(create_rmbrick13_1116(7048, 272), 2);
    add_background_object(create_rmbrick6_1129(7024, 240), 2);
    add_background_object(create_rmbrick14_1128(7024, 272), 2);
    add_background_object(create_rmbrick19_1161(7112, 208), 2);
    add_background_object(create_rmcolumn2_1109(7024, 328), 2);
    add_background_object(create_rmbrick13_1116(7176, 272), 2);
    add_background_object(create_rmbrick13_1116(7112, 272), 2);
    add_background_object(create_rmbrick1_1121(7368, -48), 2);
    add_background_object(create_rmbrick1_1121(7240, -48), 2);
    add_background_object(create_rmbrick14_1128(7216, 80), 2);
    add_background_object(create_rmbrick4_1125(7216, 48), 2);
    add_background_object(create_rmbrick4_1125(7216, 16), 2);
    add_background_object(create_rmbrick4_1125(7216, -16), 2);
    add_background_object(create_rmbrick4_1125(7216, -48), 2);
    add_background_object(create_rmcolumn2_1109(7216, 136), 2);
    add_background_object(create_rmbrick9_1138(7112, 400), 2);
    add_background_object(create_rmbrick5_1136(7176, 400), 2);
    add_background_object(create_rmbrick13_1116(7304, 432), 2);
    add_background_object(create_rmbrick13_1116(7240, 432), 2);
    add_background_object(create_rmplant1_1139(6848, 472), 2);
    add_background_object(create_rmbush3_1115(6112, 536), 2);
    add_background_object(create_rmbrick10_1137(5960, 592), 2);
    add_background_object(create_rmbrick9_1138(6152, 624), 2);
    add_background_object(create_rmbrick5_1136(6088, 624), 2);
    add_background_object(create_rmbush2_1118(-40, 952), 2);
    add_background_object(create_soil2_1140(6920, 656), 2);
    add_background_object(create_soil2_1140(7048, 688), 2);
    add_background_object(create_soil2_1140(6792, 656), 2);
    add_background_object(create_soil2_1140(6664, 656), 2);
    add_background_object(create_soil3_1141(6616, 632), 2);
    add_background_object(create_soil2_1140(7176, 688), 2);
    add_background_object(create_soil2_1140(7304, 688), 2);
    add_background_object(create_soil1_1120(6920, 688), 2);
    add_background_object(create_soil1_1120(6920, 816), 2);
    add_background_object(create_soil1_1120(7048, 720), 2);
    add_background_object(create_soil1_1120(7048, 848), 2);
    add_background_object(create_soil1_1120(7176, 720), 2);
    add_background_object(create_soil1_1120(7176, 848), 2);
    add_background_object(create_soil1_1120(7304, 720), 2);
    add_background_object(create_soil1_1120(7304, 848), 2);
    add_background_object(create_soil3_1141(6696, 672), 2);
    add_background_object(create_soil3_1141(6696, 776), 2);
    add_background_object(create_soil3_1141(6952, 712), 2);
    add_background_object(create_soil3_1141(6960, 816), 2);
    add_background_object(create_rmentrywayright2_1112(7272, 80), 2);
    add_background_object(create_rmbrick13_1116(7304, 80), 2);
    add_background_object(create_rmbrick13_1116(7304, 272), 2);
    add_background_object(create_rmbrick13_1116(7240, 80), 2);
    add_background_object(create_rmbrick13_1116(7240, 272), 2);
    add_background_object(create_rmplant1_1139(7216, 224), 2);
    add_background_object(create_rmplant1_1139(7232, 216), 2);
    add_background_object(create_rmplant1_1139(7056, 544), 2);
    add_background_object(create_rmcolumn2_1109(7120, 328), 2);
    add_background_object(create_rmcolumn2_1109(7120, 488), 2);
    add_background_object(create_rmbrick5_1136(7368, 560), 2);
    add_background_object(create_rmbrick9_1138(7368, 400), 2);
    add_background_object(create_rmbrick5_1136(7368, 208), 2);
    add_background_object(create_rmbrick2_1108(7368, 240), 2);
    add_background_object(create_rmbrick13_1116(7368, 272), 2);
    add_background_object(create_rmbrick13_1116(7368, 80), 2);
    add_background_object(create_rmbrick6_1129(6768, 232), 2);
    add_background_object(create_rmbrick7_1130(6792, 232), 2);
    add_background_object(create_rmbrick4_1125(6768, 296), 2);
    add_background_object(create_rmbrick3_1131(6792, 296), 2);
    add_background_object(create_rmbrick14_1128(6768, 328), 2);
    add_background_object(create_rmbrick15_1154(6792, 328), 2);
    add_background_object(create_rmbrick4_1125(6768, 264), 2);
    add_background_object(create_rmbrick3_1131(6792, 264), 2);
    add_background_object(create_rmladder_1152(6816, 232), 2);
    add_background_object(create_rmladder_1152(6816, 264), 2);
    add_background_object(create_rmladder_1152(6816, 296), 2);
    add_background_object(create_rmladder_1152(6816, 328), 2);
    add_background_object(create_rmladder_1152(6816, 360), 2);
    add_background_object(create_rmcolumn2_1109(6768, 392), 2);
    add_background_object(create_rmcolumn3_1114(6768, 144), 2);
    add_background_object(create_rmbrick15_1154(6320, 432), 2);
    add_background_object(create_rmbrick3_1131(6320, 400), 2);
    add_background_object(create_rmbrick3_1131(6320, 368), 2);
    add_background_object(create_rmbrick3_1131(6384, 336), 2);
    add_background_object(create_rmbrick5_1136(6320, 272), 2);
    add_background_object(create_rmbrick9_1138(6384, 272), 2);
    add_background_object(create_rmbrick5_1136(6448, 272), 2);
    add_background_object(create_rmbrick13_1116(6448, 304), 2);
    add_background_object(create_rmbrick13_1116(6384, 304), 2);
    add_background_object(create_rmbrick13_1116(6320, 304), 2);
    add_background_object(create_rmbrick3_1131(6320, 304), 2);
    add_background_object(create_rmbrick15_1154(6512, 304), 2);
    add_background_object(create_rmbrick7_1130(6512, 272), 2);
    add_background_object(create_rmbrick4_1125(6360, 304), 2);
    add_background_object(create_rmbrick3_1131(6384, 304), 2);
    add_background_object(create_rmbrick3_1131(6320, 336), 2);
    add_background_object(create_rmbrick4_1125(6360, 336), 2);
    add_background_object(create_rmbrick5_1136(6320, 336), 2);
    add_background_object(create_rmbrick15_1154(6384, 368), 2);
    add_background_object(create_rmbrick6_1129(6632, 232), 2);
    add_background_object(create_rmbrick7_1130(6656, 232), 2);
    add_background_object(create_rmbrick15_1154(6656, 264), 2);
    add_background_object(create_rmbrick14_1128(6632, 264), 2);
    add_background_object(create_rmbrick10_1137(3568, 440), 2);
    add_background_object(create_rmbrick6_1129(3544, 440), 2);
    add_background_object(create_rmbrick13_1116(3632, 504), 2);
    add_background_object(create_rmbrick4_1125(3544, 472), 2);
    add_background_object(create_rmbrick14_1128(3544, 504), 2);
    add_background_object(create_rmbrick13_1116(3568, 504), 2);
    add_background_object(create_rmbrick7_1130(3696, 472), 2);
    add_background_object(create_rmbrick15_1154(3696, 504), 2);
    add_background_object(create_rmbrick4_1125(3576, 504), 2);
    add_background_object(create_rmbrick3_1131(3664, 504), 2);
    add_background_object(create_rmbrick8_1135(3600, 504), 2);
    add_background_object(create_rmbrick14_1128(3576, 536), 2);
    add_background_object(create_rmbrick15_1154(3664, 536), 2);
    add_background_object(create_rmbrick13_1116(3600, 536), 2);
    add_background_object(create_rmcolumn3_1114(3608, 376), 2);
    add_background_object(create_rmbrick14_1128(1208, 1048), 2);
    add_background_object(create_soil1_1120(6216, 912), 2);
    add_background_object(create_soil1_1120(6472, 912), 2);
    add_background_object(create_soil1_1120(6344, 912), 2);
    add_background_object(create_soil1_1120(6216, 1040), 2);
    add_background_object(create_soil1_1120(6472, 1040), 2);
    add_background_object(create_soil1_1120(6344, 1040), 2);
    add_background_object(create_soil1_1120(6216, 1168), 2);
    add_background_object(create_soil1_1120(6472, 1168), 2);
    add_background_object(create_soil1_1120(6344, 1168), 2);
    add_background_object(create_soil1_1120(6600, 912), 2);
    add_background_object(create_soil1_1120(6856, 912), 2);
    add_background_object(create_soil1_1120(6728, 912), 2);
    add_background_object(create_soil1_1120(6600, 1040), 2);
    add_background_object(create_soil1_1120(6856, 1040), 2);
    add_background_object(create_soil1_1120(6728, 1040), 2);
    add_background_object(create_soil1_1120(6600, 1168), 2);
    add_background_object(create_soil1_1120(6856, 1168), 2);
    add_background_object(create_soil1_1120(6728, 1168), 2);
    add_background_object(create_soil3_1141(6696, 848), 2);
    add_background_object(create_soil1_1120(6984, 912), 2);
    add_background_object(create_soil1_1120(6984, 1040), 2);
    add_background_object(create_soil1_1120(6984, 1168), 2);
    add_background_object(create_soil1_1120(7048, 976), 2);
    add_background_object(create_soil1_1120(7176, 976), 2);
    add_background_object(create_soil1_1120(7304, 976), 2);
    add_background_object(create_soil1_1120(7048, 1104), 2);
    add_background_object(create_soil1_1120(7176, 1104), 2);
    add_background_object(create_soil1_1120(7304, 1104), 2);
    add_background_object(create_soil3_1141(7080, 1200), 2);
    add_background_object(create_soil3_1141(7184, 1192), 2);
    add_background_object(create_soil3_1141(7288, 1200), 2);
    add_background_object(create_soil3_1141(7328, 1192), 2);
    add_background_object(create_soil3_1141(5736, 1176), 2);
    add_background_object(create_soil3_1141(5632, 1184), 2);
    add_background_object(create_soil3_1141(5528, 1208), 2);
    add_background_object(create_soil3_1141(5416, 1184), 2);
    add_background_object(create_soil3_1141(5304, 1208), 2);
    add_background_object(create_soil3_1141(5192, 1192), 2);
    add_background_object(create_soil3_1141(5080, 1224), 2);
    add_background_object(create_soil3_1141(4976, 1200), 2);
    add_background_object(create_soil3_1141(4880, 1216), 2);
    add_background_object(create_soil3_1141(4768, 1208), 2);
    add_background_object(create_soil3_1141(4664, 1224), 2);
    add_background_object(create_soil3_1141(4552, 1208), 2);
    add_background_object(create_soil3_1141(4440, 1224), 2);
    add_background_object(create_soil3_1141(4328, 1208), 2);
    add_background_object(create_rmgrass1_1132(3664, 856), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_rmbrick19_1161(2624, 816), 2);
    add_background_object(create_rmbrick7_1130(2752, 816), 2);
    add_background_object(create_rmbrick3_1131(2752, 848), 2);
    add_background_object(create_rmbrick2_1108(2920, -32), 2);
    add_background_object(create_rmbrick2_1108(2984, -32), 2);
    add_background_object(create_rmbrick3_1131(3048, -32), 2);
    add_background_object(create_rmbrick4_1125(2896, -32), 2);
    add_background_object(create_rmbrick2_1108(2920, -64), 2);
    add_background_object(create_rmbrick2_1108(2984, -64), 2);
    add_background_object(create_rmbrick3_1131(3048, -64), 2);
    add_background_object(create_rmbrick4_1125(2896, -64), 2);
    add_background_object(create_rmbrick2_1108(6128, -48), 2);
    add_background_object(create_rmbrick2_1108(6192, -48), 2);
    add_background_object(create_rmbrick2_1108(6000, -48), 2);
    add_background_object(create_rmbrick2_1108(6064, -48), 2);
    add_background_object(create_rmbrick2_1108(5872, -48), 2);
    add_background_object(create_rmbrick2_1108(5936, -48), 2);
    add_background_object(create_rmbrick4_1125(5848, -48), 2);
    add_background_object(create_rmbrick3_1131(6256, -48), 2);
    add_background_object(create_rmbrick2_1108(6128, -80), 2);
    add_background_object(create_rmbrick2_1108(6192, -80), 2);
    add_background_object(create_rmbrick2_1108(6000, -80), 2);
    add_background_object(create_rmbrick2_1108(6064, -80), 2);
    add_background_object(create_rmbrick2_1108(5872, -80), 2);
    add_background_object(create_rmbrick2_1108(5936, -80), 2);
    add_background_object(create_rmbrick4_1125(5848, -80), 2);
    add_background_object(create_rmbrick3_1131(6256, -80), 2);
    add_background_object(create_rmgatesign_1162(6960, 360), 2);
    add_background_object(create_rmcolumn9_1163(2552, 784), 2);
    add_background_object(create_rmcolumn9_1163(2152, 1064), 2);
    add_background_object(create_rmcolumn9_1163(1272, 1104), 2);
    add_background_object(create_rmcolumn9_1163(3352, 688), 2);
    add_background_object(create_rmcolumn9_1163(3984, 664), 2);
    add_background_object(create_rmcolumn9_1163(4296, 664), 2);
    add_background_object(create_rmcolumn9_1163(4536, 232), 2);
    add_background_object(create_rmcolumn9_1163(4456, 232), 2);
    add_background_object(create_rmcolumn9_1163(4840, 384), 2);
    add_background_object(create_rmcolumn9_1163(4656, 512), 2);
    add_background_object(create_rmcolumn9_1163(4736, 512), 2);
    add_background_object(create_rmcolumn9_1163(4904, 512), 2);
    add_background_object(create_rmcolumn9_1163(5032, 512), 2);
    add_background_object(create_rmcolumn9_1163(4736, 704), 2);
    add_background_object(create_rmcolumn9_1163(5848, 168), 2);
    add_background_object(create_rmcolumn9_1163(6040, 488), 2);
    add_background_object(create_rmcolumn9_1163(6152, 488), 2);
    add_background_object(create_rmcolumn9_1163(6768, 384), 2);
    add_background_object(create_rmcolumn9_1163(6960, 488), 2);
    add_background_object(create_rmcolumn9_1163(7120, 488), 2);
    add_background_object(create_rmcolumn9_1163(7120, 328), 2);
    add_background_object(create_rmcolumn9_1163(7024, 328), 2);
    add_background_object(create_rmcolumn9_1163(7216, 136), 2);
    add_background_object(create_rmbrick9_1138(3632, 1136), 2);
    add_background_object(create_soil1_1120(3568, 1168), 2);
    add_background_object(create_soil1_1120(3696, 1168), 2);
    add_background_object(create_rmbrick9_1138(3760, 1136), 2);
    add_background_object(create_rmbrick4_1125(3528, 1104), 2);
    add_background_object(create_rmbrick4_1125(3528, 1136), 2);
    add_background_object(create_rmbrick4_1125(3528, 1040), 2);
    add_background_object(create_rmbrick4_1125(3528, 1072), 2);
    add_background_object(create_rmbrick4_1125(3528, 1008), 2);
    add_background_object(create_rmbrick3_1131(3840, 1040), 2);
    add_background_object(create_rmbrick3_1131(3840, 1008), 2);
    add_background_object(create_rmbrick3_1131(3840, 1104), 2);
    add_background_object(create_rmbrick3_1131(3840, 1072), 2);
    add_background_object(create_rmbrick3_1131(3840, 1136), 2);
    add_background_object(create_rmbrick9_1138(3568, 1136), 2);
    add_background_object(create_rmbrick3_1131(3552, 1040), 2);
    add_background_object(create_rmbrick3_1131(3552, 1008), 2);
    add_background_object(create_rmbrick3_1131(3552, 1104), 2);
    add_background_object(create_rmbrick3_1131(3552, 1072), 2);
    add_background_object(create_rmbrick3_1131(3552, 1136), 2);
    add_background_object(create_rmbrick4_1125(3816, 1104), 2);
    add_background_object(create_rmbrick4_1125(3816, 1136), 2);
    add_background_object(create_rmbrick4_1125(3816, 1040), 2);
    add_background_object(create_rmbrick4_1125(3816, 1072), 2);
    add_background_object(create_rmbrick4_1125(3816, 1008), 2);
    add_background_object(create_rmbrick3_1131(3744, 1104), 2);
    add_background_object(create_rmbrick4_1125(3720, 1104), 2);
    add_background_object(create_rmbrick7_1130(3744, 1072), 2);
    add_background_object(create_rmbrick6_1129(3720, 1072), 2);
    add_background_object(create_rmbrick7_1130(3696, 1136), 2);
    add_background_object(create_rmbrick6_1129(3736, 1136), 2);
    add_background_object(create_rmhandlebar_1164(4136, 616), 2);
    add_background_object(create_rmbrick9_1138(7432, 400), 2);
    add_background_object(create_rmbrick9_1138(7496, 400), 2);
    add_object(create_objectdigspot_734(5272, 584), 2);
    add_object(create_objectdigspot_734(3616, 824), 2);
    add_object(create_objectdigspot_734(2312, 1096), 2);
    add_object(create_minibossrailing_923(7080, 272), 2);
    add_object(create_minibossrailing_923(7080, 320), 2);
    add_object(create_minibossrailing_923(7080, 368), 2);
    add_object(create_minibossrailing2_1165(7112, 272), 2);
    add_object(create_gimmickfireballturretback_1166(6272, 580), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9912, 87), 2);
    add_object(create_playerstartingpoint_358(101, 997), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_yellowspringup_434(3016, 912), 2);
    add_object(create_laddertop_357(1748, 711), 2);
    add_object(create_monitorrings_407(2264, 1072), 2);
    add_object(create_switchpressureplate_752(1944, 1456), 2);
    add_object(create_switchwallplate_1167(2200, 928), 2);
    add_object(create_enemyhopper_1168(1719, 1056), 2);
    add_object(create_switchcolumnfront1_1169(1880, 1048), 2);
    add_object(create_yellowspringup_434(2056, 1080), 2);
    add_object(create_objectcrystal_279(1837, 794), 2);
    add_object(create_objectcrystal_279(1877, 810), 2);
    add_object(create_objectcrystal_279(1797, 786), 2);
    add_object(create_enemyhopper_1168(1991, 1016), 2);
    add_object(create_yellowspringup_434(2520, 616), 2);
    add_object(create_gimmickrollingplatform2_1170(2792, 494), 2);
    add_object(create_objectcrystal_279(1037, 1090), 2);
    add_object(create_objectcrystal_279(1077, 1058), 2);
    add_object(create_objectcrystal_279(1117, 1026), 2);
    add_object(create_objectcrystal_279(1973, 954), 2);
    add_object(create_objectcrystal_279(861, 1114), 2);
    add_object(create_objectcrystal_279(813, 1090), 2);
    add_object(create_objectcrystal_279(773, 1058), 2);
    add_object(create_objectcrystal_279(1941, 954), 2);
    add_object(create_objectcrystal_279(1909, 954), 2);
    add_object(create_gimmickrollingplatform_1171(2984, 494), 2);
    add_object(create_objectcrystal_279(2981, 618), 2);
    add_object(create_objectcrystal_279(2925, 610), 2);
    add_object(create_objectcrystal_279(3037, 610), 2);
    add_object(create_objectcrystal_279(2877, 578), 2);
    add_object(create_objectcrystal_279(3085, 578), 2);
    add_object(create_objectcodec_354(4393, 84), 2);
    add_object(create_hazardspikesup_1172(2656, 408), 2);
    add_object(create_objectcodec_354(3337, 564), 2);
    add_object(create_laddertop_357(4372, 567), 2);
    add_object(create_objectpetal_302(4001, 289), 2);
    add_object(create_objectpetal_302(4081, 289), 2);
    add_object(create_objectpetal_302(4041, 241), 2);
    add_object(create_gimmickhangingmovingbar_1173(3824, 328), 2);
    add_object(create_gimmickhangingmovingsensor_1174(3849, 388), 2);
    add_object(create_gimmickspinball_1175(4160, 768), 2);
    add_object(create_yellowspringupright_433(4056, 840), 2);
    add_object(create_yellowspringupleft_432(4232, 840), 2);
    add_object(create_objectcrystal_279(4789, 546), 2);
    add_object(create_objectcrystal_279(4805, 522), 2);
    add_object(create_objectcrystal_279(4821, 546), 2);
    add_object(create_objectcrystal_279(4805, 570), 2);
    add_object(create_enemyextractorbase_1176(5184, 568), 2);
    add_object(create_enemyextractorhead_1177(5184, 568), 2);
    add_object(create_yellowspringleft_436(5576, 456), 2);
    add_object(create_objectcrystal_279(4461, 362), 2);
    add_object(create_objectcrystal_279(4493, 402), 2);
    add_object(create_objectcrystal_279(4493, 362), 2);
    add_object(create_objectcrystal_279(4525, 402), 2);
    add_object(create_objectcrystal_279(4461, 282), 2);
    add_object(create_objectcrystal_279(4493, 282), 2);
    add_object(create_objectcrystal_279(4493, 242), 2);
    add_object(create_objectcrystal_279(4525, 242), 2);
    add_object(create_gimmickrollingplatform2_1170(5144, 294), 2);
    add_object(create_gimmickrollingplatform_1171(5336, 294), 2);
    add_object(create_objectcrystal_279(5333, 410), 2);
    add_object(create_objectcrystal_279(5277, 402), 2);
    add_object(create_objectcrystal_279(5389, 402), 2);
    add_object(create_objectcrystal_279(5229, 370), 2);
    add_object(create_objectcrystal_279(5437, 370), 2);
    add_object(create_gimmickrelicpanel_1178(5968, 336), 2);
    add_object(create_objectcrystal_279(3101, 898), 2);
    add_object(create_objectcrystal_279(3101, 850), 2);
    add_object(create_objectcrystal_279(3069, 898), 2);
    add_object(create_objectcrystal_279(3085, 874), 2);
    add_object(create_objectcrystal_279(3069, 850), 2);
    add_object(create_objectcrystal_279(2533, 458), 2);
    add_object(create_objectcrystal_279(2533, 418), 2);
    add_object(create_objectcrystal_279(2533, 378), 2);
    add_object(create_objectcrystal_279(2549, 826), 2);
    add_object(create_objectcrystal_279(2581, 826), 2);
    add_object(create_objectcrystal_279(2613, 826), 2);
    add_object(create_yellowspringleft_436(4824, 720), 2);
    add_object(create_enemyhopper_1168(5807, 240), 2);
    add_object(create_objectcrystal_279(413, 1058), 2);
    add_object(create_objectcrystal_279(453, 1058), 2);
    add_object(create_gimmickfireballspawner_1179(6272, 440), 2);
    add_object(create_gimmickfireballturret1_1180(6224, -184), 2);
    add_object(create_gimmickfireballturret2_1181(6248, 528), 2);
    add_object(create_gimmickfireballspawner_1179(6120, 440), 2);
    add_object(create_gimmickfireballspawner_1179(4296, 440), 2);
    add_object(create_enemyextractorbase_1176(6600, 482), 2);
    add_object(create_enemyextractorhead_1177(6600, 482), 2);
    add_object(create_gimmickhangingidlesensor_740(4161, 640), 2);
    add_object(create_objectcrystal_279(4109, 650), 2);
    add_object(create_objectcrystal_279(4069, 666), 2);
    add_object(create_objectcrystal_279(4213, 650), 2);
    add_object(create_objectcrystal_279(4253, 666), 2);
    add_object(create_minibossbarrier_924(7072, 280), 2);
    add_object(create_minibossbarrier_924(7072, 328), 2);
    add_object(create_minibossbarrier_924(7072, 360), 2);
    add_object(create_laddertop_357(6836, 255), 2);
    add_object(create_objectcrystal_279(3757, 394), 2);
    add_object(create_objectcrystal_279(3941, 394), 2);
    add_object(create_objectcrystal_279(3765, 354), 2);
    add_object(create_objectcrystal_279(3765, 434), 2);
    add_object(create_objectcrystal_279(3933, 354), 2);
    add_object(create_objectcrystal_279(3933, 434), 2);
    add_object(create_gimmickhangingmovingbar_1173(912, 864), 2);
    add_object(create_gimmickhangingmovingsensor_1174(937, 924), 2);
    add_object(create_objectpetal_302(913, 793), 2);
    add_object(create_objectpetal_302(961, 793), 2);
    add_object(create_objectcodec_354(937, 788), 2);
    add_object(create_objectcrystal_279(4429, 322), 2);
    add_object(create_objectcrystal_279(4461, 322), 2);
    add_object(create_objectpetal_302(6073, 249), 2);
    add_object(create_objectpetal_302(6073, 153), 2);
    add_object(create_objectpetal_302(6073, 201), 2);
    add_object(create_enemyslug_1182(2143, 676), 2);
    add_object(create_enemyiris_1183(2672, 748), 2);
    add_object(create_enemyslug_1182(3759, 844), 2);
    add_object(create_enemyslug_1182(3335, 428), 2);
    add_object(create_enemyiris_1183(7064, 452), 2);
    add_object(create_enemyiris_1183(4848, 476), 2);
    add_object(create_enemyiris_1183(7264, 100), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_breakableruins_1184(4920, 328), 2);
    add_object(create_breakableruins_1184(4920, 360), 2);
    add_object(create_minibossrailing2_1165(7112, 320), 2);
    add_object(create_minibossrailing2_1165(7112, 368), 2);
    add_object(create_minibossbarrier_924(7104, 280), 2);
    add_object(create_minibossbarrier_924(7104, 328), 2);
    add_object(create_minibossbarrier_924(7104, 360), 2);
    add_object(create_objectcrystal_279(4525, 442), 2);
    add_object(create_objectcrystal_279(4557, 442), 2);
    add_object(create_monitor1up_410(4824, 392), 2);
    add_object(create_monitorkeystone_562(4336, 336), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldmagnetic_317(-68, 348), 2);
    add_object(create_shieldflamefront_316(-116, 348), 2);
    add_object(create_shieldwater_318(-84, 332), 2);
    add_object(create_monitorcrate_409(3128, 896), 2);
    add_object(create_monitorcrystals_324(4856, 392), 2);
    add_object(create_enemylimiter_350(2029, 674), 2);
    add_object(create_objectpot_1185(2888, 854), 2);
    add_object(create_objectpot_1185(2792, 854), 2);
    add_object(create_objectpot_1185(3528, 844), 2);
    add_object(create_objectpot_1185(4112, 566), 2);
    add_object(create_objectcrystal_279(2933, 146), 2);
    add_object(create_objectcrystal_279(3029, 146), 2);
    add_object(create_objectcrystal_279(3029, 178), 2);
    add_object(create_objectcrystal_279(2933, 178), 2);
    add_object(create_objectcrystal_279(2965, 146), 2);
    add_object(create_objectcrystal_279(2965, 178), 2);
    add_object(create_objectcrystal_279(2997, 146), 2);
    add_object(create_objectcrystal_279(2997, 178), 2);
    add_object(create_objectcrystal_279(2949, 162), 2);
    add_object(create_objectcrystal_279(2981, 162), 2);
    add_object(create_objectcrystal_279(3013, 162), 2);
    add_object(create_objectcrystal_279(2917, 162), 2);
    add_object(create_objectcrystal_279(3045, 162), 2);
    add_object(create_objectdigspot_734(1280, 1104), 2);
    add_object(create_digspothole_1186(3600, 856), 2);
    add_object(create_gimmickrelicpanel_1178(3648, 1088), 2);
    add_object(create_objectpetal_302(3777, 1089), 2);
    add_object(create_objectpetal_302(3809, 1089), 2);
    add_object(create_objectpetal_302(3809, 1121), 2);
    add_object(create_objectpetal_302(3777, 1121), 2);
    add_object(create_objectpetal_302(3705, 1121), 2);
    add_object(create_redspringup_440(3616, 1120), 2);
    add_object(create_objectpetal_302(3673, 1121), 2);
    add_object(create_objectpetal_302(3593, 1121), 2);
    add_object(create_objectpetal_302(3777, 1057), 2);
    add_object(create_objectpetal_302(3809, 1057), 2);
    add_object(create_objectpetal_302(3777, 1025), 2);
    add_object(create_objectpetal_302(3809, 1025), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_soil1_1120(3568, 872), 3);
    add_background_object(create_soil10_1159(4032, 768), 3);
    add_background_object(create_soil12_1160(4160, 768), 3);
    add_background_object(create_soil1_1120(4032, 896), 3);
    add_background_object(create_soil1_1120(4160, 896), 3);
    add_background_object(create_soil3_1141(3976, 872), 3);
    add_background_object(create_soil3_1141(4240, 872), 3);
    add_background_object(create_rmgrass6_1147(4328, 784), 3);
    add_background_object(create_rmgrass5_1146(4344, 784), 3);
    add_background_object(create_rmbush1_1119(4312, 720), 3);
    add_background_object(create_rmgrass5_1146(4352, 784), 3);
    add_background_object(create_rmentrywayright3_1187(7272, 80), 3);
    add_background_object(create_rmentrywayright3_1187(7272, 432), 3);
    add_background_object(create_rmbrick13_1116(7304, 80), 3);
    add_background_object(create_rmbrick13_1116(7304, 432), 3);
    add_background_object(create_rmbrick1_1121(7368, 464), 3);
    add_background_object(create_rmbrick1_1121(7368, 336), 3);
    add_background_object(create_rmbrick1_1121(7368, 208), 3);
    add_background_object(create_rmbrick1_1121(7368, 80), 3);
    add_background_object(create_rmbrick1_1121(7368, -48), 3);
    add_background_object(create_rmbush2_1118(6744, 496), 3);
    add_background_object(create_rmbrick7_1130(6784, 560), 3);
    add_background_object(create_rmbrick6_1129(6760, 560), 3);
    add_background_object(create_rmbrick5_1136(7304, 208), 3);
    add_background_object(create_rmbrick9_1138(7304, 400), 3);
    add_background_object(create_rmbrick5_1136(7304, 560), 3);
    add_background_object(create_rmentrypurple_1188(7288, 96), 3);
    add_background_object(create_rmentryyellow_1189(7288, 448), 3);
    add_background_object(create_rmentrywayright3_1187(7272, 272), 3);
    add_background_object(create_rmbrick13_1116(7304, 272), 3);
    add_background_object(create_rmplant2_1190(7264, 248), 3);
    add_background_object(create_rmplant1_1139(7312, 224), 3);
    add_background_object(create_rmplant2_1190(6392, 280), 3);
    add_background_object(create_rmplant1_1139(6504, 288), 3);
    add_background_object(create_rmplant2_1190(6008, 72), 3);
    add_background_object(create_rmplant1_1139(5984, 88), 3);
    add_background_object(create_rmplant1_1139(6064, 48), 3);
    add_background_object(create_rmplant1_1139(6032, 40), 3);
    add_background_object(create_rmplant1_1139(6096, 32), 3);
    add_background_object(create_rmplant1_1139(5912, 96), 3);
    add_background_object(create_rmplant1_1139(5896, 80), 3);
    add_background_object(create_rmplant2_1190(4408, 144), 3);
    add_background_object(create_rmplant1_1139(4384, 144), 3);
    add_background_object(create_rmplant1_1139(4528, 152), 3);
    add_background_object(create_rmplant2_1190(3576, 512), 3);
    add_background_object(create_rmplant1_1139(3648, 472), 3);
    add_background_object(create_rmplant1_1139(3560, 448), 3);
    add_background_object(create_rmsoilceiling_1191(3568, 992), 3);
    add_background_object(create_rmsoilceiling_1191(3696, 992), 3);
    add_background_object(create_soil3_1141(3544, 856), 3);
    add_background_object(create_soil3_1141(3608, 856), 3);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitorkeystone_562(-216, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_1172(-208, 392), 5);
    add_object(create_hazardspikesdown_1192(-168, 392), 5);
    add_object(create_hazardspikesleft_1193(-128, 392), 5);
    add_object(create_hazardspikesright_1194(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingmovingsensor_1174(794, -116), 5);
    add_object(create_gimmickhangingmovingbar_1173(787, -141), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-584, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-408, 32), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-76, 224), 5);
    add_object(create_playerdig_448(-64, 225), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(264, -48), 6);
    add_object(create_guikeystone_455(248, -48), 6);
    add_object(create_guikeystone_455(232, -48), 6);
    add_object(create_guikeystone_455(216, -48), 6);
    add_object(create_guikeystone_455(200, -48), 6);
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_hopper_running = false;
    loop_hopper_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_spark_down_running = false;
    loop_spark_down_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_hopper_spore_running = false;
    loop_hopper_spore_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
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
    loop_relicpanel_running = false;
    loop_relicpanel_index = 0;
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
    loop_slug_running = false;
    loop_slug_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_fireball_launcher_running = false;
    loop_fireball_launcher_index = 0;
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
    loop_pot_running = false;
    loop_pot_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
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
    loop_hopper_floor_running = false;
    loop_hopper_floor_index = 0;
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
    loop_slug_floor_running = false;
    loop_slug_floor_index = 0;
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
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
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
    loop_spark_up_running = false;
    loop_spark_up_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_24, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_24, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_24, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_24, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_24, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_24, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_24, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_24, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_24, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_24, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_24, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_24, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_24, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_24, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_24, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_24, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_24, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_24, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_24, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_24, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_24, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_24, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_24, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_24, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_24, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_24, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_24, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_24, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_24, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_24, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_24, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_24, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_24, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_24, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_24, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_24, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_24, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_24, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_24, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_24, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_24, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_24, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_24, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_24, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1529_13 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1550_16 = loop_count;
    once_condition_56_13 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1408_24 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_554_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
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
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    not_always_1411_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
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
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
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
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_540_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_5389()
{
    // event 1663_25
    {
        if (!(group_main_engine_1)) goto event_1663_25_end;
        next_frame = 24 + 0;    
    
    }
    event_1663_25_end: ;
}
void Frames::loop_death_25()
{
    event_func_5389();
}
void Frames::event_func_5390()
{
    // event 1884_25
    {
        if (!(group_pause_1)) goto event_1884_25_end;
        next_frame = 24 + 0;    
    
    }
    event_1884_25_end: ;
}
void Frames::loop_restart_25()
{
    event_func_5390();
    event_func_86();
    event_func_1171();
}
void Frames::event_func_5391()
{
    // event 1447_25
    {
        if (!(group_main_engine_1)) goto event_1447_25_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1447_25_end: ;
}
void Frames::loop_floorswitch_25()
{
    event_func_5391();
}
void Frames::event_func_5392()
{
    // event 1488_25
    {
        if (!(group_main_engine_1)) goto event_1488_25_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        gimmickfireballturret2_1181_instances.clear_selection();
        if (!check_overlap(gimmickfireballturretback_1166_instances, gimmickfireballturret2_1181_instances)) goto event_1488_25_end;
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto event_1488_25_end;
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1488_25_end: ;
}
void Frames::loop_fireball_launcher_25()
{
    event_func_5159();
    event_func_5392();
    event_func_5161();
    event_func_5162();
}
void Frames::loop_wrapper_sound_kick1_25(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_25(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_25(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_25(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_25(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_25(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_25(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
