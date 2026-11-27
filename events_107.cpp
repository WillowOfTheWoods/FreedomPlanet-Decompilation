#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8686()
{
    // event 1500_36
    {
        if (!(group_main_engine_1)) goto event_1500_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-300))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1500_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1500_36_end: ;
}
void Frames::event_func_8687()
{
    // event 1501_36
    {
        if (!(group_main_engine_1)) goto event_1501_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1501_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1501_36_end: ;
}
void Frames::event_func_8688()
{
    // event 1502_36
    {
        if (!(group_main_engine_1)) goto event_1502_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1502_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1502_36_end: ;
}
void Frames::event_func_8689()
{
    // event 1503_36
    bool or_result_1503_36 = false;
    bool or_temp_result_1503_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1503_36_0_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1503_36_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_7)) goto or_event_1503_36_0_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1503_36_0_end;
        or_result_1503_36 = true;
        or_temp_result_1503_36_0 = true;
    }
    or_event_1503_36_0_end: ;
    enemydrone_2222_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1503_36_0) {
        enemydrone_2222_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1503_36
    bool or_temp_result_1503_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1503_36_1_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1503_36_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_8)) goto or_event_1503_36_1_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1503_36_1_end;
        or_result_1503_36 = true;
        or_temp_result_1503_36_1 = true;
    }
    or_event_1503_36_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1503_36_1) {
        enemydrone_2222_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1503_36
    bool or_temp_result_1503_36_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1503_36_2_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1503_36_2_end;
        or_result_1503_36 = true;
        or_temp_result_1503_36_2 = true;
        or_event_1503_36_2_end: ;
        if (or_temp_result_1503_36_2) {
            enemydrone_2222_instances.save_selection();
        }
        if (!or_result_1503_36) goto or_final_or_event_1503_36_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemydrone_2222_instances.empty_selection();
        if (or_temp_result_1503_36_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1503_36_0 || or_temp_result_1503_36_1 || or_temp_result_1503_36_2) {
            enemydrone_2222_instances.restore_selection();
        }
        if (or_temp_result_1503_36_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1503_36_0; single_instance_1503_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1503_36_0 == NULL)
                    single_instance_1503_36_0 = new_obj;
            }
        }
        FrameObject * single_instance_1503_36_1; single_instance_1503_36_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1503_36_1 == NULL)
                    single_instance_1503_36_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
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
    }
    or_final_or_event_1503_36_2_end: ;
}
void Frames::event_func_8690()
{
    // event 1505_36
    {
        if (!(group_main_engine_1)) goto event_1505_36_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto event_1505_36_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1505_36_end: ;
}
void Frames::event_func_8691()
{
    // event 1506_36
    {
        if (!(group_main_engine_1)) goto event_1506_36_end;
        enemyaxleturret2_2202_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret2_2202_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index));
            if (parent == NULL) goto pos_end_1506_36_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1506_36_0: ;
        }
        for (ObjectIterator it(enemyaxleturret2_2202_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index, default_active_instance))->alterables->values.get(3)+((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index, default_active_instance))->alterables->values.get(6)*((((Active*)get_instance(enemyaxleturret_2201_instances, it.current_index, default_active_instance))->alterables->values.get(6)%math_helper%4)*0.5-1), 0);
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->flags.enable(16);
        }
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1506_36_end: ;
}
void Frames::event_func_8692()
{
    // event 1507_36
    {
        if (!(group_main_engine_1)) goto event_1507_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1507_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1507_36_end: ;
}
void Frames::event_func_8693()
{
    // event 1508_36
    {
        if (!(group_main_engine_1)) goto event_1508_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1508_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(3)/math_helper/11.25);
        }
    }
    event_1508_36_end: ;
}
void Frames::event_func_8694()
{
    // event 1509_36
    {
        if (!(group_main_engine_1)) goto event_1509_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (70))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1509_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1509_36_end: ;
}
void Frames::event_func_8695()
{
    // event 1510_36
    {
        if (!(group_main_engine_1)) goto event_1510_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1510_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 10);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+350)%math_helper%360);
        }
    }
    event_1510_36_end: ;
}
void Frames::event_func_8696()
{
    // event 1511_36
    {
        if (!(group_main_engine_1)) goto event_1511_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (270))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1511_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(6, 10);
        }
    }
    event_1511_36_end: ;
}
void Frames::event_func_8697()
{
    // event 1512_36
    {
        if (!(group_main_engine_1)) goto event_1512_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1512_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    event_1512_36_end: ;
}
void Frames::event_func_8698()
{
    // event 1513_36
    {
        if (!(group_main_engine_1)) goto event_1513_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (8))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1513_36_end;
        FrameObject * single_instance_1513_36_0; single_instance_1513_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybullet_2098(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1513_36_0 == NULL)
                    single_instance_1513_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1513_36_0))->alterables->values.set(3, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1513_36_0))->alterables->values.set(0, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3))*30);
        ((Active*)((Active*)single_instance_1513_36_0))->alterables->values.set(1, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3))*-30);
    }
    event_1513_36_end: ;
}
void Frames::event_func_8699()
{
    // event 1514_36
    {
        if (!(group_main_engine_1)) goto event_1514_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (8))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1514_36_end;
        FrameObject * single_instance_1514_36_0; single_instance_1514_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybullet_2098(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1514_36_0 == NULL)
                    single_instance_1514_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1514_36_0))->alterables->values.set(3, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)+45);
        ((Active*)((Active*)single_instance_1514_36_0))->alterables->values.set(0, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)+45)*30);
        ((Active*)((Active*)single_instance_1514_36_0))->alterables->values.set(1, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)+45)*-30);
    }
    event_1514_36_end: ;
}
void Frames::event_func_8700()
{
    // event 1515_36
    {
        if (!(group_main_engine_1)) goto event_1515_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (8))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1515_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1515_36_0; single_instance_1515_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybullet_2098(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1515_36_0 == NULL)
                    single_instance_1515_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1515_36_0))->alterables->values.set(3, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)-45);
        ((Active*)((Active*)single_instance_1515_36_0))->alterables->values.set(0, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)-45)*30);
        ((Active*)((Active*)single_instance_1515_36_0))->alterables->values.set(1, ((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->get_y()+sin_deg(((Active*)get_single(enemyaxleturret_2201_instances, default_active_instance))->alterables->values.get(3)-45)*-30);
    }
    event_1515_36_end: ;
}
void Frames::event_func_8701()
{
    // event 1516_36
    {
        if (!(group_main_engine_1)) goto event_1516_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1516_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 6);
        }
        FrameObject * single_instance_1516_36_0; single_instance_1516_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1516_36_0 == NULL)
                    single_instance_1516_36_0 = new_obj;
            }
        }
        FrameObject * single_instance_1516_36_1; single_instance_1516_36_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1516_36_1 == NULL)
                    single_instance_1516_36_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)((Active*)single_instance_1516_36_0))->set_direction(4);
        ((Active*)((Active*)single_instance_1516_36_0))->alterables->values.set(1, -3);
    }
    event_1516_36_end: ;
}
void Frames::event_func_8702()
{
    // event 1517_36
    {
        if (!(group_main_engine_1)) goto event_1517_36_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1517_36_end;
        enemyaxleturret_2201_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (4))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret_2201_instances.has_selection()) goto event_1517_36_end;
        for (ObjectIterator it(enemyaxleturret_2201_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1517_36_0; single_instance_1517_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyaxleturret_2201_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1517_36_0 == NULL)
                    single_instance_1517_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1517_36_0))->set_x(((Active*)single_instance_1517_36_0)->get_x()-5+randrange(11));
        ((Active*)((Active*)single_instance_1517_36_0))->set_y(((Active*)single_instance_1517_36_0)->get_y()-8+randrange(17));
    }
    event_1517_36_end: ;
}
void Frames::event_func_8703()
{
    // event 1518_36
    {
        if (!(group_main_engine_1)) goto event_1518_36_end;
        enemyaxleturret2_2202_instances.clear_selection();
        for (ObjectIterator it(enemyaxleturret2_2202_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyaxleturret2_2202_instances.has_selection()) goto event_1518_36_end;
        for (ObjectIterator it(enemyaxleturret2_2202_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1518_36_end: ;
}
void Frames::event_func_8704()
{
    // event 1519_36
    {
        if (!(group_main_engine_1)) goto event_1519_36_end;
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.sub(1, sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
    }
    event_1519_36_end: ;
}
void Frames::event_func_8705()
{
    // event 1527_36
    {
        if (!(group_main_engine_1)) goto event_1527_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1527_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->move_back();
        }
        enemyrotorbladespikes_2204_instances.clear_selection();
        for (ObjectIterator it(enemyrotorbladespikes_2204_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1527_36_end: ;
}
void Frames::event_func_8706()
{
    // event 1528_36
    {
        if (!(group_main_engine_1)) goto event_1528_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1528_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, -8);
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y()-64);
            ((Active*)*it)->alterables->flags.enable(16);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
        }
    }
    event_1528_36_end: ;
}
void Frames::event_func_8707()
{
    // event 1529_36
    {
        if (!(group_main_engine_1)) goto event_1529_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1529_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+16)%math_helper%360);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, 0.3);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1529_36_end: ;
}
void Frames::event_func_8708()
{
    // event 1530_36
    {
        if (!(group_main_engine_1)) goto event_1530_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1530_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, -1);
        }
    }
    event_1530_36_end: ;
}
void Frames::event_func_8709()
{
    // event 1531_36
    {
        if (!(group_main_engine_1)) goto event_1531_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1531_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 1);
        }
    }
    event_1531_36_end: ;
}
void Frames::event_func_8710()
{
    // event 1532_36
    {
        if (!(group_main_engine_1)) goto event_1532_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1532_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        media.play_id(SOUND_LAND_2_54, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1532_36_end: ;
}
void Frames::event_func_8711()
{
    // event 1533_36
    {
        if (!(group_main_engine_1)) goto event_1533_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1533_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+360-16*((Active*)*it)->alterables->values.get(10))%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(5, get_max(0-((Active*)*it)->alterables->values.get(11), get_min(((Active*)*it)->alterables->values.get(5)+((Active*)*it)->alterables->values.get(10)*0.1, ((Active*)*it)->alterables->values.get(11))));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9)+randrange(3));
            ((Active*)*it)->alterables->values.add(12, get_min(get_abs(((Active*)*it)->alterables->values.get(5))+3, 10));
        }
    }
    event_1533_36_end: ;
}
void Frames::event_func_8712()
{
    // event 1534_36
    {
        if (!(group_main_engine_1)) goto event_1534_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (50))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1534_36_end;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1534_36_end: ;
}
void Frames::event_func_8713()
{
    // event 1535_36
    {
        if (!(group_main_engine_1)) goto event_1535_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1535_36_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1535_36_end;
        FrameObject * single_instance_1535_36_0; single_instance_1535_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrotorblade_2205_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgroundspark_2025(parent->x + 0, parent->y + 32), parent->layer);
                if (single_instance_1535_36_0 == NULL)
                    single_instance_1535_36_0 = new_obj;
            }
        }
    }
    event_1535_36_end: ;
}
void Frames::event_func_8714()
{
    // event 1536_36
    {
        if (!(group_main_engine_1)) goto event_1536_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1536_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1536_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1536_36_end: ;
}
void Frames::event_func_8715()
{
    // event 1541_36
    {
        if (!(group_main_engine_1)) goto event_1541_36_end;
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!hazardspikesup_558_instances.has_selection()) goto event_1541_36_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablespike2_2123_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(hazardspikesup_558_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike2_2123(parent->x + 4, parent->y + 16), parent->layer);
                breakablespike2_2123_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike2_2123(parent->x + 12, parent->y + 16), parent->layer);
                breakablespike2_2123_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike2_2123(parent->x + 20, parent->y + 16), parent->layer);
                breakablespike2_2123_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike2_2123(parent->x + 28, parent->y + 16), parent->layer);
                breakablespike2_2123_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablespike2_2123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardspikesup_558_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(hazardspikesup_558_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1541_36_end: ;
}
void Frames::event_func_8716()
{
    // event 1542_36
    {
        if (!(group_main_engine_1)) goto event_1542_36_end;
        breakablespike2_2123_instances.clear_selection();
        for (ObjectIterator it(breakablespike2_2123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1542_36_end: ;
}
void Frames::event_func_8717()
{
    // event 1543_36
    {
        if (!(group_main_engine_1)) goto event_1543_36_end;
        breakablespike2_2123_instances.clear_selection();
        for (ObjectIterator it(breakablespike2_2123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablespike2_2123_instances.has_selection()) goto event_1543_36_end;
        for (ObjectIterator it(breakablespike2_2123_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1543_36_end: ;
}
void Frames::event_func_8718()
{
    // event 1545_36
    {
        if (!(group_main_engine_1)) goto event_1545_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1545_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1545_36_0; single_instance_1545_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrotorblade_2205_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrotorbladedeath_2126(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_36_0 == NULL)
                    single_instance_1545_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1545_36_0))->alterables->values.set(23, ((Active*)get_single(enemyrotorblade_2205_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1545_36_0))->alterables->values.set(24, ((Active*)get_single(enemyrotorblade_2205_instances, default_active_instance))->alterables->values.get(24));
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1545_36_end: ;
}
void Frames::event_func_8719()
{
    // event 1548_36
    {
        if (!(group_main_engine_1)) goto event_1548_36_end;
        enemyrotorblade_2205_instances.clear_selection();
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1548_36_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    event_1548_36_end: ;
}
void Frames::event_func_8720()
{
    // event 1549_36
    {
        if (!(group_main_engine_1)) goto event_1549_36_end;
        enemyrotorbladedeath_2126_instances.clear_selection();
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+50))) { it.deselect(); continue; }
        }
        if (!enemyrotorbladedeath_2126_instances.has_selection()) goto event_1549_36_end;
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1549_36_end: ;
}
void Frames::event_func_8721()
{
    // event 1550_36
    bool or_result_1550_36 = false;
    bool or_temp_result_1550_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1550_36_0_end;
        enemyrotorbladedeath_2126_instances.clear_selection();
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyrotorbladedeath_2126_instances.has_selection()) goto or_event_1550_36_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyrotorbladedeath_2126_instances, qualifier_7)) goto or_event_1550_36_0_end;
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyrotorbladedeath_2126_instances.has_selection()) goto or_event_1550_36_0_end;
        or_result_1550_36 = true;
        or_temp_result_1550_36_0 = true;
    }
    or_event_1550_36_0_end: ;
    enemyrotorbladedeath_2126_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1550_36_0) {
        enemyrotorbladedeath_2126_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1550_36
    bool or_temp_result_1550_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1550_36_1_end;
        enemyrotorbladedeath_2126_instances.clear_selection();
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyrotorbladedeath_2126_instances.has_selection()) goto or_event_1550_36_1_end;
        or_result_1550_36 = true;
        or_temp_result_1550_36_1 = true;
        or_event_1550_36_1_end: ;
        if (or_temp_result_1550_36_1) {
            enemyrotorbladedeath_2126_instances.save_selection();
        }
        if (!or_result_1550_36) goto or_final_or_event_1550_36_1_end;
        qualifier_7.empty_selection();
        enemyrotorbladedeath_2126_instances.empty_selection();
        if (or_temp_result_1550_36_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1550_36_0 || or_temp_result_1550_36_1) {
            enemyrotorbladedeath_2126_instances.restore_selection();
        }
        for (ObjectIterator it(enemyrotorbladedeath_2126_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1550_36_0; single_instance_1550_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrotorbladedeath_2126_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1550_36_0 == NULL)
                    single_instance_1550_36_0 = new_obj;
            }
        }
        FrameObject * single_instance_1550_36_1; single_instance_1550_36_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyrotorbladedeath_2126_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1550_36_1 == NULL)
                    single_instance_1550_36_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1550_36_1_end: ;
}
void Frames::event_func_8722()
{
    // event 1551_36
    {
        if (!(group_main_engine_1)) goto event_1551_36_end;
        if (!((enemyrotorbladespikes_2204_instances.size()) > (enemyrotorblade_2205_instances.size()))) goto event_1551_36_end;
        enemyrotorbladespikes_2204_instances.clear_selection();
        FrameObject * single_instance_1551_36_0; single_instance_1551_36_0 = pick_random(enemyrotorbladespikes_2204_instances);
        if (single_instance_1551_36_0 == NULL) goto event_1551_36_end;
        ((Active*)((Active*)single_instance_1551_36_0))->destroy();
    }
    event_1551_36_end: ;
}
void Frames::event_func_8723()
{
    // event 1552_36
    {
        if (!(group_main_engine_1)) goto event_1552_36_end;
        enemyrotorbladespikes_2204_instances.clear_selection();
        for (ObjectIterator it(enemyrotorbladespikes_2204_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyrotorblade_2205_instances, it.current_index));
            if (parent == NULL) goto pos_end_1552_36_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1552_36_0: ;
        }
        {
            enemyrotorblade_2205_instances.clear_selection();
            ObjectIterator other_it(enemyrotorblade_2205_instances);
            for (ObjectIterator it(enemyrotorbladespikes_2204_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1552_36_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1552_36_1_end: ;
        for (ObjectIterator it(enemyrotorbladespikes_2204_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(enemyrotorblade_2205_instances, it.current_index, default_active_instance))->alterables->values.get(8), 0);
            ((Active*)*it)->set_direction((((Active*)get_single(enemyrotorblade_2205_instances, it.current_index, default_active_instance))->alterables->values.get(10)-1)*8);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyrotorblade_2205_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
    }
    event_1552_36_end: ;
}
void Frames::event_func_8724()
{
    // event 1554_36
    {
        if (!(group_main_engine_1)) goto event_1554_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1554_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1554_36_end: ;
}
void Frames::event_func_8725()
{
    // event 1555_36
    {
        if (!(group_main_engine_1)) goto event_1555_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1555_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->values.set(5, -5);
            ((Active*)*it)->alterables->values.set(8, 2+randrange(2));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1555_36_end: ;
}
void Frames::event_func_8726()
{
    // event 1556_36
    {
        if (!(group_main_engine_1)) goto event_1556_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1556_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.3, 15));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(8)*((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1556_36_end: ;
}
void Frames::event_func_8727()
{
    // event 1557_36
    bool or_result_1557_36 = false;
    bool or_temp_result_1557_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1557_36_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1557_36_0_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, enemylimiter_350_instances)) goto or_event_1557_36_0_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(enemylimiter_350_instances, default_active_instance))->get_box_index(2)))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1557_36_0_end;
        or_result_1557_36 = true;
        or_temp_result_1557_36_0 = true;
    }
    or_event_1557_36_0_end: ;
    enemylimiter_350_instances.clear_saved_selection();
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1557_36_0) {
        enemylimiter_350_instances.save_selection();
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1557_36
    bool or_temp_result_1557_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1557_36_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1557_36_1_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, enemylimiter_350_instances)) goto or_event_1557_36_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(enemylimiter_350_instances, default_active_instance))->get_box_index(0)))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1557_36_1_end;
        or_result_1557_36 = true;
        or_temp_result_1557_36_1 = true;
        or_event_1557_36_1_end: ;
        if (or_temp_result_1557_36_1) {
            enemylimiter_350_instances.save_selection();
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1557_36) goto or_final_or_event_1557_36_1_end;
        enemyhoppermkii_2200_instances.empty_selection();
        enemylimiter_350_instances.empty_selection();
        if (or_temp_result_1557_36_0 || or_temp_result_1557_36_1) {
            enemylimiter_350_instances.restore_selection();
        }
        if (or_temp_result_1557_36_0 || or_temp_result_1557_36_1) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)*it)->alterables->values.get(8)*((Active*)*it)->alterables->values.get(7));
        }
    }
    or_final_or_event_1557_36_1_end: ;
}
void Frames::event_func_8728()
{
    // event 1558_36
    {
        if (!(group_main_engine_1)) goto event_1558_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1558_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(6, 2);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1558_36_end: ;
}
void Frames::event_func_8729()
{
    // event 1559_36
    {
        if (!(group_main_engine_1)) goto event_1559_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1559_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1559_36_end: ;
}
void Frames::event_func_8730()
{
    // event 1560_36
    {
        if (!(group_main_engine_1)) goto event_1560_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1560_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1560_36_end: ;
}
void Frames::event_func_8731()
{
    // event 1561_36
    {
        if (!(group_main_engine_1)) goto event_1561_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1561_36_end;
        FrameObject * single_instance_1561_36_0; single_instance_1561_36_0 = pick_random(enemyhoppermkii_2200_instances);
        if (single_instance_1561_36_0 == NULL) goto event_1561_36_end;
        FrameObject * single_instance_1561_36_1; single_instance_1561_36_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyfragbomb_2049(((Active*)single_instance_1561_36_0)->get_action_x() - ((Active*)single_instance_1561_36_0)->layer->off_x + 0, ((Active*)single_instance_1561_36_0)->get_action_y() - ((Active*)single_instance_1561_36_0)->layer->off_y + 0), ((Active*)single_instance_1561_36_0)->layer);
            if (single_instance_1561_36_1 == NULL)
                single_instance_1561_36_1 = new_obj;
        }
        FrameObject * single_instance_1561_36_2; single_instance_1561_36_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1561_36_0)->get_action_x() - ((Active*)single_instance_1561_36_0)->layer->off_x + 0, ((Active*)single_instance_1561_36_0)->get_action_y() - ((Active*)single_instance_1561_36_0)->layer->off_y + 0), ((Active*)single_instance_1561_36_0)->layer);
            if (single_instance_1561_36_2 == NULL)
                single_instance_1561_36_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1561_36_2))->set_scale(0.6);
        ((Active*)((Active*)single_instance_1561_36_1))->alterables->values.set(0, 5*((Active*)single_instance_1561_36_0)->alterables->values.get(7));
        ((Active*)((Active*)single_instance_1561_36_1))->alterables->values.set(1, -5);
        ((Active*)((Active*)single_instance_1561_36_0))->alterables->flags.enable(2);
        media.play_id(SOUND_BLASTER_F_2_237, -1, 1);
    }
    event_1561_36_end: ;
}
void Frames::event_func_8732()
{
    // event 1562_36
    {
        if (!(group_main_engine_1)) goto event_1562_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1562_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1562_36_end: ;
}
void Frames::event_func_8733()
{
    // event 1563_36
    {
        if (!(group_main_engine_1)) goto event_1563_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1563_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1563_36_end: ;
}
void Frames::event_func_8734()
{
    // event 1564_36
    bool or_result_1564_36 = false;
    bool or_temp_result_1564_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1564_36_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1564_36_0_end;
        or_result_1564_36 = true;
        or_temp_result_1564_36_0 = true;
    }
    or_event_1564_36_0_end: ;
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1564_36_0) {
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1564_36
    bool or_temp_result_1564_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1564_36_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1564_36_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, qualifier_7)) goto or_event_1564_36_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1564_36_1_end;
        or_result_1564_36 = true;
        or_temp_result_1564_36_1 = true;
    }
    or_event_1564_36_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1564_36_1) {
        enemyhoppermkii_2200_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1564_36
    bool or_temp_result_1564_36_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1564_36_2_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1564_36_2_end;
        or_result_1564_36 = true;
        or_temp_result_1564_36_2 = true;
        or_event_1564_36_2_end: ;
        if (or_temp_result_1564_36_2) {
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1564_36) goto or_final_or_event_1564_36_2_end;
        enemyhoppermkii_2200_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1564_36_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1564_36_0 || or_temp_result_1564_36_1 || or_temp_result_1564_36_2) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        FrameObject * single_instance_1564_36_0; single_instance_1564_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1564_36_0 == NULL)
                    single_instance_1564_36_0 = new_obj;
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
                loop_spawndebris_36();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1564_36_2_end: ;
}
void Frames::event_func_8735()
{
    // event 1566_36
    {
        if (!(group_main_engine_1)) goto event_1566_36_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) > (1))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1566_36_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1566_36_0; single_instance_1566_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_36_0 == NULL)
                    single_instance_1566_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1566_36_0))->set_direction(1);
    }
    event_1566_36_end: ;
}
void Frames::event_func_8736()
{
    // event 1567_36
    {
        if (!(group_main_engine_1)) goto event_1567_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+(((Active*)*it)->alterables->values.get(0)*-2), 0);
            ((Active*)*it)->alterables->values.add(1, 0.5);
        }
    }
    event_1567_36_end: ;
}
void Frames::event_func_8737()
{
    // event 1568_36
    {
        if (!(group_main_engine_1)) goto event_1568_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!enemyfragbomb_2049_instances.has_selection()) goto event_1568_36_end;
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1568_36_end: ;
}
void Frames::event_func_8738()
{
    // event 1569_36
    {
        if (!(group_main_engine_1)) goto event_1569_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!enemyfragbomb_2049_instances.has_selection()) goto event_1569_36_end;
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1569_36_end: ;
}
void Frames::event_func_8739()
{
    // event 1574_36
    {
        if (!(group_main_engine_1)) goto event_1574_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemyfragbomb_2049_instances, playercharactersensor_383_instances)) goto event_1574_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1574_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1574_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1574_36_end: ;
}
void Frames::event_func_8740()
{
    // event 1575_36
    {
        if (!(group_main_engine_1)) goto event_1575_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfragbomb_2049_instances.has_selection()) goto event_1575_36_end;
        FrameObject * single_instance_1575_36_0; single_instance_1575_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfragbomb_2049_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1575_36_0 == NULL)
                    single_instance_1575_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1575_36_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_1575_36_0))->set_x(((Active*)single_instance_1575_36_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1575_36_0))->set_y(((Active*)single_instance_1575_36_0)->get_y()-30+randrange(41));
        ((Active*)((Active*)single_instance_1575_36_0))->set_layer(((Active*)get_single(enemyfragbomb_2049_instances, default_active_instance))->layer->index+1-1);
    }
    event_1575_36_end: ;
}
void Frames::event_func_8741()
{
    // event 1576_36
    {
        if (!(group_main_engine_1)) goto event_1576_36_end;
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemyfragbomb_2049_instances.has_selection()) goto event_1576_36_end;
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1576_36_end: ;
}
void Frames::event_func_8742()
{
    // event 1577_36
    {
        if (!(group_main_engine_1)) goto event_1577_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1577_36_end;
        {
            loop_cacteon_running = true;
            int times = int(1);
            loop_cacteon_index = 0;
            while (loop_cacteon_index < times) {
                loop_cacteon_36();
                if (!loop_cacteon_running) break;
                loop_cacteon_index++;
            }
        }
    }
    event_1577_36_end: ;
}
void Frames::event_func_8743()
{
    // event 1578_36
    {
        if (!(group_main_engine_1)) goto event_1578_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1578_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
        }
    }
    event_1578_36_end: ;
}
void Frames::event_func_8744()
{
    // event 1579_36
    {
        if (!(group_main_engine_1)) goto event_1579_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1579_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1579_36_end: ;
}
void Frames::event_func_8745()
{
    // event 1580_36
    {
        if (!(group_main_engine_1)) goto event_1580_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1580_36_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, playercharactersensor_383_instances)) goto event_1580_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1580_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1580_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1580_36_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 15);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymagmeon_2208_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
    }
    event_1580_36_end: ;
}
void Frames::event_func_8746()
{
    // event 1581_36
    {
        if (!(group_main_engine_1)) goto event_1581_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1581_36_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1581_36_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, playercharactersensor_383_instances)) goto event_1581_36_end;
        FrameObject * single_instance_1581_36_0; single_instance_1581_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1581_36_0 == NULL)
                    single_instance_1581_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1581_36_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1581_36_0))->set_x(((Active*)single_instance_1581_36_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1581_36_0))->set_y(((Active*)single_instance_1581_36_0)->get_y()-10+randrange(21));
    }
    event_1581_36_end: ;
}
void Frames::event_func_8747()
{
    // event 1582_36
    {
        if (!(group_main_engine_1)) goto event_1582_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1582_36_end;
        if (!check_not_overlap(enemymagmeon_2208_instances, playercharactersensor_383_instances)) goto event_1582_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1582_36_end: ;
}
void Frames::event_func_8748()
{
    // event 1583_36
    {
        if (!(group_main_engine_1)) goto event_1583_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (60))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1583_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1583_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1583_36_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1583_36_end;
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
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1583_36_end: ;
}
void Frames::event_func_8749()
{
    // event 1584_36
    {
        if (!(group_main_engine_1)) goto event_1584_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(24);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1584_36_end: ;
}
void Frames::event_func_8750()
{
    // event 1585_36
    {
        if (!(group_main_engine_1)) goto event_1585_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1585_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1585_36_end: ;
}
void Frames::event_func_8751()
{
    // event 1586_36
    {
        if (!(group_main_engine_1)) goto event_1586_36_end;
        enemymagmeon_2208_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, qualifier_7)) goto event_1586_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1586_36_end: ;
}
void Frames::event_func_8752()
{
    // event 1587_36
    {
        if (!(group_main_engine_1)) goto event_1587_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1587_36_end: ;
}
void Frames::event_func_8753()
{
    // event 1588_36
    {
        if (!(group_main_engine_1)) goto event_1588_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1588_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.25-(((Active*)*it)->alterables->flags.get(1)*0.2), 12));
        }
    }
    event_1588_36_end: ;
}
void Frames::event_func_8754()
{
    // event 1589_36
    bool or_result_1589_36 = false;
    bool or_temp_result_1589_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1589_36_0_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1589_36_0_end;
        if (!(test_obstacle(((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->get_box_index(0)+4, ((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->get_box_index(3)-8))) goto or_event_1589_36_0_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1589_36_0_end;
        or_result_1589_36 = true;
        or_temp_result_1589_36_0 = true;
    }
    or_event_1589_36_0_end: ;
    enemymagmeon_2208_instances.clear_saved_selection();
    if (or_temp_result_1589_36_0) {
        enemymagmeon_2208_instances.save_selection();
    }
    // event 1589_36
    bool or_temp_result_1589_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1589_36_1_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1589_36_1_end;
        if (!(test_obstacle(((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->get_box_index(2)+4, ((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->get_box_index(3)-8))) goto or_event_1589_36_1_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1589_36_1_end;
        or_result_1589_36 = true;
        or_temp_result_1589_36_1 = true;
        or_event_1589_36_1_end: ;
        if (or_temp_result_1589_36_1) {
            enemymagmeon_2208_instances.save_selection();
        }
        if (!or_result_1589_36) goto or_final_or_event_1589_36_1_end;
        enemymagmeon_2208_instances.empty_selection();
        if (or_temp_result_1589_36_0 || or_temp_result_1589_36_1) {
            enemymagmeon_2208_instances.restore_selection();
        }
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    or_final_or_event_1589_36_1_end: ;
}
void Frames::event_func_8755()
{
    // event 1590_36
    bool or_result_1590_36 = false;
    bool or_temp_result_1590_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1590_36_0_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1590_36_0_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, yellowspringupleft_432_instances)) goto or_event_1590_36_0_end;
        or_result_1590_36 = true;
        or_temp_result_1590_36_0 = true;
    }
    or_event_1590_36_0_end: ;
    enemymagmeon_2208_instances.clear_saved_selection();
    yellowspringupleft_432_instances.clear_saved_selection();
    if (or_temp_result_1590_36_0) {
        enemymagmeon_2208_instances.save_selection();
        yellowspringupleft_432_instances.save_selection();
    }
    // event 1590_36
    bool or_temp_result_1590_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1590_36_1_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1590_36_1_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, yellowspringupright_433_instances)) goto or_event_1590_36_1_end;
        or_result_1590_36 = true;
        or_temp_result_1590_36_1 = true;
        or_event_1590_36_1_end: ;
        yellowspringupright_433_instances.clear_saved_selection();
        if (or_temp_result_1590_36_1) {
            yellowspringupright_433_instances.save_selection();
            enemymagmeon_2208_instances.save_selection();
        }
        if (!or_result_1590_36) goto or_final_or_event_1590_36_1_end;
        yellowspringupright_433_instances.empty_selection();
        yellowspringupleft_432_instances.empty_selection();
        enemymagmeon_2208_instances.empty_selection();
        if (or_temp_result_1590_36_1) {
            yellowspringupright_433_instances.restore_selection();
        }
        if (or_temp_result_1590_36_0 || or_temp_result_1590_36_1) {
            enemymagmeon_2208_instances.restore_selection();
        }
        if (or_temp_result_1590_36_0) {
            yellowspringupleft_432_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
    }
    or_final_or_event_1590_36_1_end: ;
}
void Frames::event_func_8756()
{
    // event 1591_36
    {
        if (!(group_main_engine_1)) goto event_1591_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1591_36_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, yellowspringupleft_432_instances)) goto event_1591_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
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
    event_1591_36_end: ;
}
void Frames::event_func_8757()
{
    // event 1592_36
    {
        if (!(group_main_engine_1)) goto event_1592_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1592_36_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, yellowspringupright_433_instances)) goto event_1592_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
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
    event_1592_36_end: ;
}
void Frames::event_func_8758()
{
    // event 1593_36
    {
        if (!(group_main_engine_1)) goto event_1593_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1593_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1593_36_end: ;
}
void Frames::event_func_8759()
{
    // event 1594_36
    {
        if (!(group_main_engine_1)) goto event_1594_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1594_36_end;
        {
            loop_cacteon_floor_running = true;
            int times = int(get_max(get_ceil(((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->alterables->values.get(5)), 2));
            loop_cacteon_floor_index = 0;
            while (loop_cacteon_floor_index < times) {
                loop_cacteon_floor_36();
                if (!loop_cacteon_floor_running) break;
                loop_cacteon_floor_index++;
            }
        }
    }
    event_1594_36_end: ;
}
void Frames::event_func_8760()
{
    // event 1598_36
    {
        if (!(group_main_engine_1)) goto event_1598_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1598_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1598_36_end: ;
}
void Frames::event_func_8761()
{
    // event 1599_36
    {
        if (!(group_main_engine_1)) goto event_1599_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1599_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1599_36_end: ;
}
void Frames::event_func_8762()
{
    // event 1600_36
    {
        if (!(group_main_engine_1)) goto event_1600_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0.5))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1600_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1600_36_end: ;
}
void Frames::event_func_8763()
{
    // event 1601_36
    {
        if (!(group_main_engine_1)) goto event_1601_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1601_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
        }
    }
    event_1601_36_end: ;
}
void Frames::event_func_8764()
{
    // event 1602_36
    {
        if (!(group_main_engine_1)) goto event_1602_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1602_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1602_36_end: ;
}
void Frames::event_func_8765()
{
    // event 1603_36
    {
        if (!(group_main_engine_1)) goto event_1603_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1603_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -6);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1603_36_end: ;
}
void Frames::event_func_8766()
{
    // event 1604_36
    {
        if (!(group_main_engine_1)) goto event_1604_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1604_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -6);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1604_36_end: ;
}
void Frames::event_func_8767()
{
    // event 1606_36
    {
        if (!(group_main_engine_1)) goto event_1606_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1606_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1606_36_end: ;
}
void Frames::event_func_8768()
{
    // event 1607_36
    {
        if (!(group_main_engine_1)) goto event_1607_36_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1607_36_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1607_36_end: ;
}
void Frames::event_func_8769()
{
    // event 1608_36
    bool or_result_1608_36 = false;
    bool or_temp_result_1608_36_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_36_0_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1608_36_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymagmeon_2208_instances, qualifier_7)) goto or_event_1608_36_0_end;
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1608_36_0_end;
        or_result_1608_36 = true;
        or_temp_result_1608_36_0 = true;
    }
    or_event_1608_36_0_end: ;
    enemymagmeon_2208_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1608_36_0) {
        enemymagmeon_2208_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1608_36
    bool or_temp_result_1608_36_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_36_1_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto or_event_1608_36_1_end;
        or_result_1608_36 = true;
        or_temp_result_1608_36_1 = true;
        or_event_1608_36_1_end: ;
        if (or_temp_result_1608_36_1) {
            enemymagmeon_2208_instances.save_selection();
        }
        if (!or_result_1608_36) goto or_final_or_event_1608_36_1_end;
        enemymagmeon_2208_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1608_36_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1608_36_0 || or_temp_result_1608_36_1) {
            enemymagmeon_2208_instances.restore_selection();
        }
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1608_36_0; single_instance_1608_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymagmeon_2208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1608_36_0 == NULL)
                    single_instance_1608_36_0 = new_obj;
            }
        }
        FrameObject * single_instance_1608_36_1; single_instance_1608_36_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymagmeon_2208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1608_36_1 == NULL)
                    single_instance_1608_36_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1608_36_1_end: ;
}
void Frames::event_func_8770()
{
    // event 1609_36
    {
        if (!(group_main_engine_1)) goto event_1609_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1609_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1609_36_end;
        if (not_always_1609_36 > loop_count) {
            not_always_1609_36 = loop_count + 2;
            goto event_1609_36_end;
        }
        not_always_1609_36 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
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
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1609_36_end: ;
}
void Frames::event_func_8771()
{
    // event 1611_36
    {
        if (!(group_main_engine_1)) goto event_1611_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1611_36_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1611_36_end: ;
}
void Frames::event_func_8772()
{
    // event 1612_36
    {
        if (!(group_main_engine_1)) goto event_1612_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1612_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1612_36_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1612_36_end: ;
}
void Frames::event_func_8773()
{
    // event 1613_36
    {
        if (!(group_main_engine_1)) goto event_1613_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1613_36_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1613_36_end;
        global_values->set(4, -1);
        next_frame = 35 + 0;    
    
    }
    event_1613_36_end: ;
}
void Frames::event_func_8774()
{
    // event 1616_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1616_36_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1616_36_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1616_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1616_36_end;
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
    event_1616_36_end: ;
}
void Frames::event_func_8775()
{
    // event 1619_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1619_36_end;
        if (not_always_1619_36 > loop_count) {
            not_always_1619_36 = loop_count + 2;
            goto event_1619_36_end;
        }
        not_always_1619_36 = loop_count + 2;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
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
        levelsbbgplatform_2134_instances.clear_selection();
        spread_value(levelsbbgplatform_2134_instances, 0, 1);
    }
    event_1619_36_end: ;
}
void Frames::event_func_8776()
{
    // event 1620_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1620_36_end;
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (1200))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!levelsbplatform1_2096_instances.has_selection()) goto event_1620_36_end;
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(8, -160);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1620_36_end: ;
}
void Frames::event_func_8777()
{
    // event 1621_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1621_36_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1621_36_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1621_36_end: ;
}
void Frames::event_func_8778()
{
    // event 1622_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1622_36_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1622_36_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
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
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1622_36_end: ;
}
void Frames::event_func_8779()
{
    // event 1623_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1623_36_end;
        levelsbbgplatform_2134_instances.clear_selection();
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((SystemBox*)get_instance(levelparallaxzaoship_2121_instances, it.current_index, default_systembox_instance))->get_y()+242);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1623_36_end: ;
}
void Frames::event_func_8780()
{
    // event 1624_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1624_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1624_36_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1624_36_end;
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1624_36_end: ;
}
void Frames::event_func_8781()
{
    // event 1625_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1625_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1625_36_end;
        levelsbbgplatform_2134_instances.clear_selection();
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((SystemBox*)get_single(levelparallaxzaoship_2121_instances, default_systembox_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!levelsbbgplatform_2134_instances.has_selection()) goto event_1625_36_end;
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        FrameObject * single_instance_1625_36_0; single_instance_1625_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelsbbgplatform_2134_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1625_36_0 == NULL)
                    single_instance_1625_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1625_36_0))->set_scale(0.5);
        for (ObjectIterator it(levelsbbgplatform_2134_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -8);
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    event_1625_36_end: ;
}
void Frames::event_func_8782()
{
    // event 1626_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1626_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((SystemBox*)(*it))->alterables->values.get(1)) > (7))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1626_36_end;
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, 2);
        }
    }
    event_1626_36_end: ;
}
void Frames::event_func_8783()
{
    // event 1627_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1627_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1627_36_end;
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!levelsbplatform1_2096_instances.has_selection()) goto event_1627_36_end;
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    event_1627_36_end: ;
}
void Frames::event_func_8784()
{
    // event 1628_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1628_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1628_36_end;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        {
            loop_gui_shiftdown_running = true;
            int times = int(2);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1628_36_end: ;
}
void Frames::event_func_8785()
{
    // event 1629_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_fly_in_1)) goto event_1629_36_end;
        levelparallaxzaoship_2121_instances.clear_selection();
        for (ObjectIterator it(levelparallaxzaoship_2121_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!levelparallaxzaoship_2121_instances.has_selection()) goto event_1629_36_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1629_36_end;
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_fly_in_1 = false;
    
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1629_36_end: ;
}
