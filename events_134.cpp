#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10814()
{
    // event 1568_44
    {
        if (!(group_main_engine_1)) goto event_1568_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1568_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1568_44_end: ;
}
void Frames::event_func_10815()
{
    // event 1569_44
    {
        if (!(group_main_engine_1)) goto event_1569_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1569_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5))*40);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+2.5)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-1, 0));
        }
    }
    event_1569_44_end: ;
}
void Frames::event_func_10816()
{
    // event 1570_44
    {
        if (!(group_main_engine_1)) goto event_1570_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-150))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1570_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1570_44_end: ;
}
void Frames::event_func_10817()
{
    // event 1571_44
    {
        if (!(group_main_engine_1)) goto event_1571_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1571_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5))*40);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+2.5)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-1, 0));
        }
    }
    event_1571_44_end: ;
}
void Frames::event_func_10818()
{
    // event 1572_44
    {
        if (!(group_main_engine_1)) goto event_1572_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+150))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1572_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1572_44_end: ;
}
void Frames::event_func_10819()
{
    // event 1573_44
    {
        if (!(group_main_engine_1)) goto event_1573_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1573_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1573_44_end: ;
}
void Frames::event_func_10820()
{
    // event 1574_44
    {
        if (!(group_main_engine_1)) goto event_1574_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1574_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 0.5);
        }
    }
    event_1574_44_end: ;
}
void Frames::event_func_10821()
{
    // event 1575_44
    {
        if (!(group_main_engine_1)) goto event_1575_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1575_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1575_44_end: ;
}
void Frames::event_func_10822()
{
    // event 1576_44
    {
        if (!(group_main_engine_1)) goto event_1576_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (20))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1576_44_end;
        FrameObject * single_instance_1576_44_0; single_instance_1576_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyhomingbullet_2568(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1576_44_0 == NULL)
                    single_instance_1576_44_0 = new_obj;
            }
        }
        media.play_id(SOUND_SLUG_ATTACK_59, -1, 1);
        ((Active*)((Active*)single_instance_1576_44_0))->set_direction(((Active*)get_single(enemyseeker_2648_instances, default_active_instance))->get_direction());
    }
    event_1576_44_end: ;
}
void Frames::event_func_10823()
{
    // event 1577_44
    {
        if (!(group_main_engine_1)) goto event_1577_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1577_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1577_44_end: ;
}
void Frames::event_func_10824()
{
    // event 1578_44
    {
        if (!(group_main_engine_1)) goto event_1578_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1578_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 0.5);
        }
    }
    event_1578_44_end: ;
}
void Frames::event_func_10825()
{
    // event 1579_44
    {
        if (!(group_main_engine_1)) goto event_1579_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (5))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1579_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1579_44_end: ;
}
void Frames::event_func_10826()
{
    // event 1580_44
    {
        if (!(group_main_engine_1)) goto event_1580_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1580_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1580_44_end: ;
}
void Frames::event_func_10827()
{
    // event 1581_44
    {
        if (!(group_main_engine_1)) goto event_1581_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1581_44_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1581_44_end;
        FrameObject * single_instance_1581_44_0; single_instance_1581_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1581_44_0 == NULL)
                    single_instance_1581_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1581_44_0))->set_direction(2);
        FrameObject * single_instance_1581_44_1; single_instance_1581_44_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1581_44_1 == NULL)
                    single_instance_1581_44_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1581_44_2; single_instance_1581_44_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1581_44_2 == NULL)
                    single_instance_1581_44_2 = new_obj;
            }
        }
        FrameObject * single_instance_1581_44_3; single_instance_1581_44_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1581_44_3 == NULL)
                    single_instance_1581_44_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1581_44_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1581_44_2))->move_back();
        ((Active*)((Active*)single_instance_1581_44_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1581_44_end: ;
}
void Frames::event_func_10828()
{
    // event 1582_44
    bool or_result_1582_44 = false;
    bool or_temp_result_1582_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_44_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1582_44_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1582_44_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1582_44_0_end;
        or_result_1582_44 = true;
        or_temp_result_1582_44_0 = true;
    }
    or_event_1582_44_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1582_44_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1582_44
    bool or_temp_result_1582_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_44_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1582_44_1_end;
        or_result_1582_44 = true;
        or_temp_result_1582_44_1 = true;
        or_event_1582_44_1_end: ;
        if (or_temp_result_1582_44_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1582_44) goto or_final_or_event_1582_44_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1582_44_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1582_44_0 || or_temp_result_1582_44_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1582_44_0; single_instance_1582_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1582_44_0 == NULL)
                    single_instance_1582_44_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_44();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1582_44_1_end: ;
}
void Frames::event_func_10829()
{
    // event 1584_44
    {
        if (!(group_main_engine_1)) goto event_1584_44_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1584_44_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1584_44_0; single_instance_1584_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1584_44_0 == NULL)
                    single_instance_1584_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1584_44_0))->set_direction(2);
    }
    event_1584_44_end: ;
}
void Frames::event_func_10830()
{
    // event 1585_44
    {
        if (!(group_main_engine_1)) goto event_1585_44_end;
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+30, 0);
        }
    }
    event_1585_44_end: ;
}
void Frames::event_func_10831()
{
    // event 1586_44
    {
        if (!(group_main_engine_1)) goto event_1586_44_end;
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-40))) { it.deselect(); continue; }
        }
        if (!enemyhomingbullet_2568_instances.has_selection()) goto event_1586_44_end;
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1586_44_end: ;
}
void Frames::event_func_10832()
{
    // event 1592_44
    {
        if (!(group_main_engine_1)) goto event_1592_44_end;
        enemypushup_2656_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemypushup_2656_instances, enemylimiter_350_instances)) goto event_1592_44_end;
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()+1)%math_helper%2);
        }
    }
    event_1592_44_end: ;
}
void Frames::event_func_10833()
{
    // event 1593_44
    {
        if (!(group_main_engine_1)) goto event_1593_44_end;
        {
            enemypushup_2656_instances.clear_selection();
            SavedSelection extra_enemypushup_2656_instances(enemypushup_2656_instances);
            for (SavedIterator it(extra_enemypushup_2656_instances); !it.end(); ++it) {
                foreach_instance_pushup = ((Active*)*it);
                foreach_pushup_44();
            }
        }
    }
    event_1593_44_end: ;
}
void Frames::event_func_10834()
{
    // event 1594_44
    {
        if (!(group_main_engine_1)) goto event_1594_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1594_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1594_44_end: ;
}
void Frames::event_func_10835()
{
    // event 1595_44
    {
        if (!(group_main_engine_1)) goto event_1595_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (80))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1595_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()+1)%math_helper%2);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1595_44_end: ;
}
void Frames::event_func_10836()
{
    // event 1596_44
    {
        if (!(group_main_engine_1)) goto event_1596_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1596_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1596_44_end: ;
}
void Frames::event_func_10837()
{
    // event 1597_44
    {
        if (!(group_main_engine_1)) goto event_1597_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(5))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1597_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_frame(7);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1597_44_end: ;
}
void Frames::event_func_10838()
{
    // event 1598_44
    {
        if (!(group_main_engine_1)) goto event_1598_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1598_44_end;
        FrameObject * single_instance_1598_44_0; single_instance_1598_44_0 = pick_random(enemypushup_2656_instances);
        if (single_instance_1598_44_0 == NULL) goto event_1598_44_end;
        ((Active*)((Active*)single_instance_1598_44_0))->alterables->flags.enable(2);
        media.play_id(SOUND_COMMON_BLASTER6_439, -1, 1);
        FrameObject * single_instance_1598_44_1; single_instance_1598_44_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser_2570(((Active*)single_instance_1598_44_0)->get_action_x() - ((Active*)single_instance_1598_44_0)->layer->off_x + 0, ((Active*)single_instance_1598_44_0)->get_action_y() - ((Active*)single_instance_1598_44_0)->layer->off_y + 20), ((Active*)single_instance_1598_44_0)->layer);
            if (single_instance_1598_44_1 == NULL)
                single_instance_1598_44_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1598_44_1))->set_direction(24);
    }
    event_1598_44_end: ;
}
void Frames::event_func_10839()
{
    // event 1599_44
    {
        if (!(group_main_engine_1)) goto event_1599_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1599_44_end;
        FrameObject * single_instance_1599_44_0; single_instance_1599_44_0 = pick_random(enemypushup_2656_instances);
        if (single_instance_1599_44_0 == NULL) goto event_1599_44_end;
        ((Active*)((Active*)single_instance_1599_44_0))->alterables->flags.enable(2);
        FrameObject * single_instance_1599_44_1; single_instance_1599_44_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemypushuplaser_2570(((Active*)single_instance_1599_44_0)->get_action_x() - ((Active*)single_instance_1599_44_0)->layer->off_x + 0, ((Active*)single_instance_1599_44_0)->get_action_y() - ((Active*)single_instance_1599_44_0)->layer->off_y + -16), ((Active*)single_instance_1599_44_0)->layer);
            if (single_instance_1599_44_1 == NULL)
                single_instance_1599_44_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1599_44_1))->set_direction(8);
        media.play_id(SOUND_COMMON_BLASTER6_439, -1, 1);
    }
    event_1599_44_end: ;
}
void Frames::event_func_10840()
{
    // event 1600_44
    {
        if (!(group_main_engine_1)) goto event_1600_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (0))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1600_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1600_44_end: ;
}
void Frames::event_func_10841()
{
    // event 1603_44
    {
        if (!(group_main_engine_1)) goto event_1603_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1603_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1603_44_end: ;
}
void Frames::event_func_10842()
{
    // event 1604_44
    {
        if (!(group_main_engine_1)) goto event_1604_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1604_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1604_44_end: ;
}
void Frames::event_func_10843()
{
    // event 1605_44
    {
        if (!(group_main_engine_1)) goto event_1605_44_end;
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemypushup_2656_instances.has_selection()) goto event_1605_44_end;
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_p_debris_running = true;
            int times = int(6);
            loop_p_debris_index = 0;
            while (loop_p_debris_index < times) {
                loop_p_debris_44();
                if (!loop_p_debris_running) break;
                loop_p_debris_index++;
            }
        }
    }
    event_1605_44_end: ;
}
void Frames::event_func_10844()
{
    // event 1609_44
    {
        if (!(group_main_engine_1)) goto event_1609_44_end;
        enemypushupdebris_2569_instances.clear_selection();
        for (ObjectIterator it(enemypushupdebris_2569_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-40))) { it.deselect(); continue; }
        }
        if (!enemypushupdebris_2569_instances.has_selection()) goto event_1609_44_end;
        for (ObjectIterator it(enemypushupdebris_2569_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1609_44_end: ;
}
void Frames::event_func_10845()
{
    // event 1610_44
    {
        if (!(group_main_engine_1)) goto event_1610_44_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto event_1610_44_end;
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1610_44_end: ;
}
void Frames::event_func_10846()
{
    // event 1611_44
    {
        if (!(group_main_engine_1)) goto event_1611_44_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto event_1611_44_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemypushuphitbox_2653_instances, qualifier_19)) goto event_1611_44_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1611_44_0; single_instance_1611_44_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_44_0 == NULL)
                    single_instance_1611_44_0 = new_obj;
            }
        }
        FrameObject * single_instance_1611_44_1; single_instance_1611_44_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_44_1 == NULL)
                    single_instance_1611_44_1 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1611_44_0))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1611_44_0))->move_back();
        ((Active*)((Active*)single_instance_1611_44_1))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        FrameObject * single_instance_1611_44_2; single_instance_1611_44_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushuphitbox_2653_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_44_2 == NULL)
                    single_instance_1611_44_2 = new_obj;
            }
        }
        FrameObject * single_instance_1611_44_3; single_instance_1611_44_3 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushuphitbox_2653_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_44_3 == NULL)
                    single_instance_1611_44_3 = new_obj;
            }
        }
    }
    event_1611_44_end: ;
}
void Frames::event_func_10847()
{
    // event 1612_44
    bool or_result_1612_44 = false;
    bool or_temp_result_1612_44_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1612_44_0_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto or_event_1612_44_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemypushuphitbox_2653_instances, qualifier_7)) goto or_event_1612_44_0_end;
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto or_event_1612_44_0_end;
        or_result_1612_44 = true;
        or_temp_result_1612_44_0 = true;
    }
    or_event_1612_44_0_end: ;
    enemypushuphitbox_2653_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1612_44_0) {
        enemypushuphitbox_2653_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1612_44
    bool or_temp_result_1612_44_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1612_44_1_end;
        enemypushuphitbox_2653_instances.clear_selection();
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypushuphitbox_2653_instances.has_selection()) goto or_event_1612_44_1_end;
        or_result_1612_44 = true;
        or_temp_result_1612_44_1 = true;
        or_event_1612_44_1_end: ;
        if (or_temp_result_1612_44_1) {
            enemypushuphitbox_2653_instances.save_selection();
        }
        if (!or_result_1612_44) goto or_final_or_event_1612_44_1_end;
        qualifier_7.empty_selection();
        enemypushuphitbox_2653_instances.empty_selection();
        if (or_temp_result_1612_44_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1612_44_0 || or_temp_result_1612_44_1) {
            enemypushuphitbox_2653_instances.restore_selection();
        }
        FrameObject * single_instance_1612_44_0; single_instance_1612_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushuphitbox_2653_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1612_44_0 == NULL)
                    single_instance_1612_44_0 = new_obj;
            }
        }
        FrameObject * single_instance_1612_44_1; single_instance_1612_44_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushuphitbox_2653_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1612_44_1 == NULL)
                    single_instance_1612_44_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
        for (ObjectIterator it(enemypushuphitbox_2653_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1612_44_1_end: ;
}
void Frames::event_func_10848()
{
    // event 1615_44
    {
        if (!(group_main_engine_1)) goto event_1615_44_end;
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1615_44_end: ;
}
void Frames::event_func_10849()
{
    // event 1616_44
    {
        if (!(group_main_engine_1)) goto event_1616_44_end;
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemypushuplaser2_2571_instances.has_selection()) goto event_1616_44_end;
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -3);
        }
        FrameObject * single_instance_1616_44_0; single_instance_1616_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypushuplaser2_2571_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypushuplaser3_2572(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1616_44_0 == NULL)
                    single_instance_1616_44_0 = new_obj;
            }
        }
    }
    event_1616_44_end: ;
}
void Frames::event_func_10850()
{
    // event 1617_44
    {
        if (!(group_main_engine_1)) goto event_1617_44_end;
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemypushuplaser2_2571_instances.has_selection()) goto event_1617_44_end;
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1617_44_end: ;
}
void Frames::event_func_10851()
{
    // event 1631_44
    {
        if (!(group_main_engine_1)) goto event_1631_44_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-48))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1631_44_end;
        FrameObject * single_instance_1631_44_0; single_instance_1631_44_0 = pick_random(objectkeycard_2643_instances);
        if (single_instance_1631_44_0 == NULL) goto event_1631_44_end;
        media.play_id(SOUND_ITEM_PETALGET_2_37, -1, 1);
        ((Active*)((Active*)single_instance_1631_44_0))->alterables->values.set(0, 3);
        ((Active*)((Active*)single_instance_1631_44_0))->set_layer(7-1);
        ((Active*)((Active*)single_instance_1631_44_0))->alterables->values.set(8, get_min((((Active*)get_instance(guikeycardicon_2674_instances))->get_x()-((Active*)single_instance_1631_44_0)->get_x())*0.06, -1));
        ((Active*)((Active*)single_instance_1631_44_0))->alterables->values.set(9, get_max((((Active*)get_instance(guikeycardicon_2674_instances))->get_y()-((Active*)single_instance_1631_44_0)->get_y())*0.06, -1));
    }
    event_1631_44_end: ;
}
void Frames::event_func_10852()
{
    // event 1632_44
    {
        if (!(group_main_engine_1)) goto event_1632_44_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1632_44_end;
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(8), ((Active*)get_instance(guikeycardicon_2674_instances))->get_x()));
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(9), ((Active*)get_instance(guikeycardicon_2674_instances))->get_y()));
        }
    }
    event_1632_44_end: ;
}
void Frames::event_func_10853()
{
    // event 1633_44
    {
        if (!(group_main_engine_1)) goto event_1633_44_end;
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectkeycard_2643_instances.has_selection()) goto event_1633_44_end;
        guikeycardicon_2674_instances.clear_selection();
        if (!check_overlap(objectkeycard_2643_instances, guikeycardicon_2674_instances)) goto event_1633_44_end;
        FrameObject * single_instance_1633_44_0; single_instance_1633_44_0 = pick_random(objectkeycard_2643_instances);
        if (single_instance_1633_44_0 == NULL) goto event_1633_44_end;
        media.play_id(SOUND_COMMON_KEYCARD_287, -1, 1);
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(objectpetal_302_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_instance(objectpetal_302_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x()-frame_left());
        }
        ((Active*)((Active*)single_instance_1633_44_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1633_44_0))->destroy();
        ((Counter*)get_instance(guikeycards_2673_instances))->add(1);
        ((Active*)get_instance(guikeycardicon_2674_instances))->force_animation(0);
        ((Active*)get_instance(guikeycardicon_2674_instances))->force_animation(7);
    }
    event_1633_44_end: ;
}
void Frames::event_func_10854()
{
    // event 1634_44
    {
        if (!(group_main_engine_1)) goto event_1634_44_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) <= (0))) goto event_1634_44_end;
        if (not_always_1634_44 > loop_count) {
            not_always_1634_44 = loop_count + 2;
            goto event_1634_44_end;
        }
        not_always_1634_44 = loop_count + 2;
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_visible(false);
        ((Counter*)get_instance(guikeycards_2673_instances))->set_visible(false);
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1634_44_end: ;
}
void Frames::event_func_10855()
{
    // event 1635_44
    {
        if (!(group_main_engine_1)) goto event_1635_44_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) > (0))) goto event_1635_44_end;
        if (not_always_1635_44 > loop_count) {
            not_always_1635_44 = loop_count + 2;
            goto event_1635_44_end;
        }
        not_always_1635_44 = loop_count + 2;
        ((Counter*)get_instance(guikeycards_2673_instances))->set_visible(true);
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_visible(true);
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1635_44_end: ;
}
void Frames::event_func_10856()
{
    // event 1639_44
    {
        if (!(group_main_engine_1)) goto event_1639_44_end;
        {
            lockeddoorterminal_2606_instances.clear_selection();
            SavedSelection extra_lockeddoorterminal_2606_instances(lockeddoorterminal_2606_instances);
            for (SavedIterator it(extra_lockeddoorterminal_2606_instances); !it.end(); ++it) {
                foreach_instance_door = ((Active*)*it);
                foreach_door_44();
            }
        }
    }
    event_1639_44_end: ;
}
void Frames::event_func_10857()
{
    // event 1644_44
    {
        if (!(group_main_engine_1)) goto event_1644_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1644_44_end;
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!lockeddoorterminal_2606_instances.has_selection()) goto event_1644_44_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) > (0))) goto event_1644_44_end;
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->force_animation(7);
        }
        ((Counter*)get_instance(guikeycards_2673_instances))->subtract(1);
        media.play_id(SOUND_COMMON_DOORUNLOCK_288, -1, 1);
    }
    event_1644_44_end: ;
}
void Frames::event_func_10858()
{
    // event 1645_44
    {
        if (!(group_main_engine_1)) goto event_1645_44_end;
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!lockeddoorterminal_2606_instances.has_selection()) goto event_1645_44_end;
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1645_44_end: ;
}
void Frames::event_func_10859()
{
    // event 1646_44
    {
        if (!(group_main_engine_1)) goto event_1646_44_end;
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (30))) { it.deselect(); continue; }
        }
        if (!lockeddoorterminal_2606_instances.has_selection()) goto event_1646_44_end;
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1646_44_end: ;
}
void Frames::event_func_10860()
{
    // event 1647_44
    {
        if (!(group_main_engine_1)) goto event_1647_44_end;
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!lockeddoorseal_2672_instances.has_selection()) goto event_1647_44_end;
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1647_44_0; single_instance_1647_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(lockeddoorseal_2672_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1647_44_0 == NULL)
                    single_instance_1647_44_0 = new_obj;
            }
        }
    }
    event_1647_44_end: ;
}
void Frames::event_func_10861()
{
    // event 1648_44
    {
        if (!(group_main_engine_1)) goto event_1648_44_end;
        lockeddoorbarrier_2667_instances.clear_selection();
        for (ObjectIterator it(lockeddoorbarrier_2667_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockeddoorbarrier_2667_instances.has_selection()) goto event_1648_44_end;
        for (ObjectIterator it(lockeddoorbarrier_2667_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1648_44_end: ;
}
void Frames::event_func_10862()
{
    // event 1649_44
    {
        if (!(group_main_engine_1)) goto event_1649_44_end;
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockeddoorback_2605_instances.has_selection()) goto event_1649_44_end;
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1649_44_end: ;
}
void Frames::event_func_10863()
{
    // event 1650_44
    {
        if (!(group_main_engine_1)) goto event_1650_44_end;
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!lockeddoorfront_2671_instances.has_selection()) goto event_1650_44_end;
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
    }
    event_1650_44_end: ;
}
void Frames::event_func_10864()
{
    // event 1651_44
    {
        if (!(group_main_engine_1)) goto event_1651_44_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1651_44_end;
        FrameObject * single_instance_1651_44_0; single_instance_1651_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bubblepatch_806_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1651_44_0 == NULL)
                    single_instance_1651_44_0 = new_obj;
            }
        }
    }
    event_1651_44_end: ;
}
void Frames::event_func_10865()
{
    // event 1652_44
    {
        if (!(group_main_engine_1)) goto event_1652_44_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1652_44_end;
        FrameObject * single_instance_1652_44_0; single_instance_1652_44_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bubblepatch_806_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1652_44_0 == NULL)
                    single_instance_1652_44_0 = new_obj;
            }
        }
    }
    event_1652_44_end: ;
}
void Frames::event_func_10866()
{
    // event 1653_44
    {
        if (!(group_main_engine_1)) goto event_1653_44_end;
        if (!((global_values->get(3)%math_helper%60) == (0))) goto event_1653_44_end;
        ((Active*)get_instance(bubblepatch_806_instances))->set_x(frame_left()+randrange(global_values->get(16)));
    }
    event_1653_44_end: ;
}
void Frames::event_func_10867()
{
    // event 1654_44
    {
        if (!(group_main_engine_1)) goto event_1654_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1654_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(3, 0.5+randrange(20)*0.1);
            ((Active*)*it)->alterables->values.set(4, -0.5-randrange(20)*0.1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-20+randrange(40));
            ((Active*)*it)->set_blend_color(make_color_int(128, 128, 255));
        }
    }
    event_1654_44_end: ;
}
void Frames::event_func_10868()
{
    // event 1655_44
    {
        if (!(group_main_engine_1)) goto event_1655_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1655_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(3, 0.5+randrange(20)*0.1);
            ((Active*)*it)->alterables->values.set(4, -0.5-randrange(20)*0.1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-20+randrange(40));
            ((Active*)*it)->set_blend_color(make_color_int(128, 128, 255));
            ((Active*)*it)->force_frame(1+randrange(3));
        }
    }
    event_1655_44_end: ;
}
void Frames::event_func_10869()
{
    // event 1656_44
    {
        if (!(group_main_engine_1)) goto event_1656_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1656_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1656_44_end: ;
}
void Frames::event_func_10870()
{
    // event 1658_44
    {
        if (!(group_main_engine_1)) goto event_1658_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (frame_top()-32))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1658_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1658_44_end: ;
}
void Frames::event_func_10871()
{
    // event 1660_44
    {
        if (!(group_main_engine_1)) goto event_1660_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-32))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1660_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_right()+32);
        }
    }
    event_1660_44_end: ;
}
void Frames::event_func_10872()
{
    // event 1662_44
    {
        if (!(group_main_engine_1)) goto event_1662_44_end;
        if (!((((Active*)get_instance(bubblepatch_806_instances))->get_x()) < (frame_left()-32))) goto event_1662_44_end;
        ((Active*)get_instance(bubblepatch_806_instances))->set_x(frame_right()+32);
    }
    event_1662_44_end: ;
}
void Frames::event_func_10873()
{
    // event 1663_44
    {
        if (!(group_main_engine_1)) goto event_1663_44_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+32))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1663_44_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-32);
        }
    }
    event_1663_44_end: ;
}
void Frames::event_func_10874()
{
    // event 1665_44
    {
        if (!(group_main_engine_1)) goto event_1665_44_end;
        if (!((((Active*)get_instance(bubblepatch_806_instances))->get_x()) > (frame_right()+32))) goto event_1665_44_end;
        ((Active*)get_instance(bubblepatch_806_instances))->set_x(frame_left()-32);
    }
    event_1665_44_end: ;
}
void Frames::event_func_10875()
{
    // event 1666_44
    {
        if (!(group_main_engine_1)) goto event_1666_44_end;
        tbwalllightanim_2603_instances.clear_selection();
        for (ObjectIterator it(tbwalllightanim_2603_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%12);
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1666_44_end: ;
}
void Frames::event_func_10876()
{
    // event 1667_44
    {
        if (!(group_main_engine_1)) goto event_1667_44_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1667_44_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1667_44_end: ;
}
void Frames::event_func_10877()
{
    // event 1668_44
    {
        if (!(group_main_engine_1)) goto event_1668_44_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1668_44_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1668_44_end: ;
}
void Frames::event_func_10878()
{
    // event 1669_44
    {
        if (!(group_main_engine_1)) goto event_1669_44_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(metaldoorback_2604_instances, default_active_instance))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1669_44_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1669_44_end: ;
}
void Frames::event_func_10879()
{
    // event 1670_44
    {
        if (!(group_main_engine_1)) goto event_1670_44_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1670_44_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
        }
    }
    event_1670_44_end: ;
}
void Frames::event_func_10880()
{
    // event 1671_44
    {
        if (!(group_main_engine_1)) goto event_1671_44_end;
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!metaldoorback_2604_instances.has_selection()) goto event_1671_44_end;
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1671_44_end: ;
}
void Frames::event_func_10881()
{
    // event 1672_44
    {
        if (!(group_main_engine_1)) goto event_1672_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1672_44_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1672_44_end: ;
}
void Frames::event_func_10882()
{
    // event 1673_44
    {
        if (!(group_main_engine_1)) goto event_1673_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1673_44_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1673_44_end: ;
}
void Frames::event_func_10883()
{
    // event 1674_44
    {
        if (!(group_main_engine_1)) goto event_1674_44_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(metaldoorfront_2670_instances, default_active_instance))->get_y()-60))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1674_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1674_44_end: ;
}
void Frames::event_func_10884()
{
    // event 1675_44
    {
        if (!(group_main_engine_1)) goto event_1675_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1675_44_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.5, 10));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1675_44_end: ;
}
void Frames::event_func_10885()
{
    // event 1676_44
    {
        if (!(group_main_engine_1)) goto event_1676_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (10))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1676_44_end;
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1676_44_end: ;
}
void Frames::event_func_10886()
{
    // event 1677_44
    {
        if (!(group_main_engine_1)) goto event_1677_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1677_44_end;
        if (not_always_1677_44 > loop_count) {
            not_always_1677_44 = loop_count + 2;
            goto event_1677_44_end;
        }
        not_always_1677_44 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1677_44_end: ;
}
void Frames::event_func_10887()
{
    // event 1678_44
    {
        if (!(group_main_engine_1)) goto event_1678_44_end;
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!metaldoorfront_2670_instances.has_selection()) goto event_1678_44_end;
        if (not_always_1678_44 > loop_count) {
            not_always_1678_44 = loop_count + 2;
            goto event_1678_44_end;
        }
        not_always_1678_44 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_CLOSE_282, -1, 1);
    }
    event_1678_44_end: ;
}
void Frames::event_func_10888()
{
    // event 1681_44
    {
        if (!(group_main_engine_1)) goto event_1681_44_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+150))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1681_44_end;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1681_44_end: ;
}
void Frames::event_func_10889()
{
    // event 1682_44
    {
        if (!(group_main_engine_1)) goto event_1682_44_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (50))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1682_44_end;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1682_44_end: ;
}
void Frames::event_func_10890()
{
    // event 1683_44
    {
        if (!(group_main_engine_1)) goto event_1683_44_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (49))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1683_44_end;
        if (!((global_values->get(23)) == (1))) goto event_1683_44_end;
        if (once_condition_1683_44) goto event_1683_44_end;
        once_condition_1683_44 = true;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        media.play(str_data_voices_eng_sx_sx_intrusion_ogg_197, 20-1);
    }
    event_1683_44_end: ;
}
void Frames::event_func_10891()
{
    // event 1684_44
    {
        if (!(group_main_engine_1)) goto event_1684_44_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1684_44_end;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->alterables->values.get(0)-30, get_min(((Active*)*it)->alterables->values.get(0)+(((Active*)get_instance(player_389_instances))->get_x()-((Active*)*it)->get_x())*0.25, ((Active*)*it)->alterables->values.get(0)+30)));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->alterables->values.get(1)-30, get_min(((Active*)*it)->alterables->values.get(1)+(((Active*)get_instance(player_389_instances))->get_y()-((Active*)*it)->get_y())*0.25, ((Active*)*it)->alterables->values.get(1)+30)));
        }
    }
    event_1684_44_end: ;
}
void Frames::event_func_10892()
{
    // event 1685_44
    {
        if (!(group_main_engine_1)) goto event_1685_44_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!npcsyntaxeye_2609_instances.has_selection()) goto event_1685_44_end;
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1685_44_end: ;
}
void Frames::event_func_10893()
{
    // event 1687_44
    {
        if (!(group_main_engine_1)) goto event_1687_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1687_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1687_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-100))) goto event_1687_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1687_44_end;
        if (once_condition_1687_44) goto event_1687_44_end;
        once_condition_1687_44 = true;
        if (!group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1) {
            group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 = true;
        }
    }
    event_1687_44_end: ;
}
void Frames::event_func_10894()
{
    // event 1688_44
    {
        if (!(group_main_engine_1)) goto event_1688_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1688_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1688_44_end: ;
}
void Frames::event_func_10895()
{
    // event 1689_44
    {
        if (!(group_main_engine_1)) goto event_1689_44_end;
        if (!((global_values->get(4)) < (2))) goto event_1689_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6823))) goto event_1689_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7250))) goto event_1689_44_end;
        global_values->set(4, 2);
        global_values->set(5, 6932);
        global_values->set(6, 2026);
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
    event_1689_44_end: ;
}
void Frames::event_func_10896()
{
    // event 1690_44
    {
        if (!(group_main_engine_1)) goto event_1690_44_end;
        if (!((global_values->get(4)) < (3))) goto event_1690_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (9814))) goto event_1690_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10014))) goto event_1690_44_end;
        global_values->set(4, 3);
        global_values->set(5, 9914);
        global_values->set(6, 1374);
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
    event_1690_44_end: ;
}
void Frames::event_func_10897()
{
    // event 1691_44
    {
        if (!(group_main_engine_1)) goto event_1691_44_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1691_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1691_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()+240))) goto event_1691_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1691_44_end;
        if (not_always_1691_44 > loop_count) {
            not_always_1691_44 = loop_count + 2;
            goto event_1691_44_end;
        }
        not_always_1691_44 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1691_44_end: ;
}
void Frames::event_func_10898()
{
    // event 1692_44
    {
        if (!(group_main_engine_1)) goto event_1692_44_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) > (0))) goto event_1692_44_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()+240))) goto event_1692_44_end;
        if (not_always_1692_44 > loop_count) {
            not_always_1692_44 = loop_count + 2;
            goto event_1692_44_end;
        }
        not_always_1692_44 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1692_44_end: ;
}
void Frames::event_func_10899()
{
    // event 1693_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1693_44_end;
        bosstailtracker_2057_instances.clear_selection();
        spread_value(bosstailtracker_2057_instances, 0, 0);
    }
    event_1693_44_end: ;
}
void Frames::event_func_10900()
{
    // event 1694_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1694_44_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (84))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1694_44_end;
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1694_44_end: ;
}
void Frames::event_func_10901()
{
    // event 1695_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1695_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1695_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 4);
        }
    }
    event_1695_44_end: ;
}
void Frames::event_func_10902()
{
    // event 1696_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1)) goto event_1696_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1696_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, -4);
        }
    }
    event_1696_44_end: ;
}
void Frames::event_func_10903()
{
    // event 1697_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_movement_ai_1)) goto event_1697_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1697_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, cos_deg(((Active*)*it)->alterables->values.get(7))*3);
            ((Active*)*it)->alterables->values.add(6, sin_deg(((Active*)*it)->alterables->values.get(7))*-3);
        }
    }
    event_1697_44_end: ;
}
void Frames::event_func_10904()
{
    // event 1698_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_movement_ai_1)) goto event_1698_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1698_44_end: ;
}
void Frames::event_func_10905()
{
    // event 1699_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_movement_ai_1)) goto event_1699_44_end;
        bossroboshrimpblocker_2642_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpblocker_2642_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bossroboshrimp_2658_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossroboshrimp_2658_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossroboshrimp_2658_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bossroboshrimp_2658_instances, default_active_instance))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpblocker_2642_instances.has_selection()) goto event_1699_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1699_44_end: ;
}
void Frames::event_func_10906()
{
    // event 1700_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_movement_ai_1)) goto event_1700_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1700_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        bossroboshrimplightning_2659_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimplightning_2659_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1700_44_end: ;
}
void Frames::event_func_10907()
{
    // event 1701_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_movement_ai_1)) goto event_1701_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1701_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0-((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(10, 0+((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(11, (((Active*)*it)->alterables->values.get(11)+10)%math_helper%20);
        }
    }
    event_1701_44_end: ;
}
void Frames::event_func_10908()
{
    // event 1702_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1702_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1702_44_end;
        FrameObject * single_instance_1702_44_0; single_instance_1702_44_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossroboshrimp_2658_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosstailtracker_2057(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1702_44_0 == NULL)
                    single_instance_1702_44_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1702_44_0))->alterables->values.set(1, ((Active*)get_single(bossroboshrimp_2658_instances, default_active_instance))->alterables->values.get(7));
    }
    event_1702_44_end: ;
}
void Frames::event_func_10909()
{
    // event 1703_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1703_44_end;
        bossroboshrimp_2658_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossroboshrimp_2658_instances.has_selection()) goto event_1703_44_end;
        for (ObjectIterator it(bossroboshrimp_2658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(7), 0);
        }
    }
    event_1703_44_end: ;
}
void Frames::event_func_10910()
{
    // event 1704_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1704_44_end;
        bossroboshrimptail_2660_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimptail_2660_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(7), 0);
        }
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(7), 0);
        }
        bossroboshrimplightning_2659_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimplightning_2659_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossroboshrimptail_2660_instances, it.current_index));
            if (parent == NULL) goto pos_end_1704_44_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1704_44_0: ;
        }
        for (ObjectIterator it(bossroboshrimplightning_2659_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossroboshrimptail_2660_instances, it.current_index, default_active_instance))->alterables->values.get(7), 0);
        }
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/20+((Active*)*it)->alterables->values.get(8))%math_helper%5);
        }
    }
    event_1704_44_end: ;
}
void Frames::event_func_10911()
{
    // event 1705_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1705_44_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1705_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1705_44_end;
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1705_44_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1705_44_0: ;
        }
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1705_44_end: ;
}
void Frames::event_func_10912()
{
    // event 1706_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1706_44_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (24))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1706_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1706_44_end;
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1706_44_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1706_44_0: ;
        }
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1706_44_end: ;
}
void Frames::event_func_10913()
{
    // event 1707_44
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_1 && group_main_engine_level_specific_methods_bosses_boss_roboshrimp_boss_roboshrimp_positions_and_rotations_1)) goto event_1707_44_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (36))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1707_44_end;
        bossroboshrimpsegment_2657_instances.clear_selection();
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!bossroboshrimpsegment_2657_instances.has_selection()) goto event_1707_44_end;
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1707_44_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1707_44_0: ;
        }
        for (ObjectIterator it(bossroboshrimpsegment_2657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1707_44_end: ;
}
