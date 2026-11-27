#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_spark_up_24()
{
    event_func_5166();
}
void Frames::event_func_5167()
{
    // event 1474_24
    {
        if (!(group_main_engine_1)) goto event_1474_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1474_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1474_24_end: ;
}
void Frames::event_func_5168()
{
    // event 1475_24
    {
        if (!(group_main_engine_1)) goto event_1475_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1475_24_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto event_1475_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1475_24_end: ;
}
void Frames::event_func_5169()
{
    // event 1476_24
    {
        if (!(group_main_engine_1)) goto event_1476_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1476_24_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto event_1476_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1476_24_end: ;
}
void Frames::loop_hopper_floor_24()
{
    event_func_5167();
    event_func_5168();
    event_func_5169();
}
void Frames::event_func_5170()
{
    // event 1466_24
    {
        if (!(group_main_engine_1)) goto event_1466_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(9);
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1466_24_end: ;
}
void Frames::event_func_5171()
{
    // event 1467_24
    {
        if (!(group_main_engine_1)) goto event_1467_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1467_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1467_24_end: ;
}
void Frames::event_func_5172()
{
    // event 1468_24
    {
        if (!(group_main_engine_1)) goto event_1468_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto event_1468_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1468_24_end: ;
}
void Frames::event_func_5173()
{
    // event 1469_24
    {
        if (!(group_main_engine_1)) goto event_1469_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto event_1469_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1469_24_end: ;
}
void Frames::event_func_5174()
{
    // event 1470_24
    {
        if (!(group_main_engine_1)) goto event_1470_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(8);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1470_24_end: ;
}
void Frames::event_func_5175()
{
    // event 1471_24
    {
        if (!(group_main_engine_1)) goto event_1471_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1471_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        {
            loop_hopper_floor_running = true;
            int times = int(get_max(1, ((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->alterables->values.get(6)));
            loop_hopper_floor_index = 0;
            while (loop_hopper_floor_index < times) {
                loop_hopper_floor_24();
                if (!loop_hopper_floor_running) break;
                loop_hopper_floor_index++;
            }
        }
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6), 0));
        }
    }
    event_1471_24_end: ;
}
void Frames::event_func_5176()
{
    // event 1472_24
    {
        if (!(group_main_engine_1)) goto event_1472_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto event_1472_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        {
            loop_hopper_floor_running = true;
            int times = int(12);
            loop_hopper_floor_index = 0;
            while (loop_hopper_floor_index < times) {
                loop_hopper_floor_24();
                if (!loop_hopper_floor_running) break;
                loop_hopper_floor_index++;
            }
        }
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6), 0));
        }
    }
    event_1472_24_end: ;
}
void Frames::event_func_5177()
{
    // event 1473_24
    {
        if (!(group_main_engine_1)) goto event_1473_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto event_1473_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        {
            loop_hopper_floor_running = true;
            int times = int(12);
            loop_hopper_floor_index = 0;
            while (loop_hopper_floor_index < times) {
                loop_hopper_floor_24();
                if (!loop_hopper_floor_running) break;
                loop_hopper_floor_index++;
            }
        }
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6), 0));
        }
    }
    event_1473_24_end: ;
}
void Frames::event_func_5178()
{
    // event 1477_24
    {
        if (!(group_main_engine_1)) goto event_1477_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(7);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1477_24_end: ;
}
void Frames::event_func_5179()
{
    // event 1478_24
    {
        if (!(group_main_engine_1)) goto event_1478_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1478_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1478_24_end: ;
}
void Frames::event_func_5180()
{
    // event 1479_24
    {
        if (!(group_main_engine_1)) goto event_1479_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto event_1479_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1479_24_end: ;
}
void Frames::event_func_5181()
{
    // event 1480_24
    {
        if (!(group_main_engine_1)) goto event_1480_24_end;
        enemyhopper_1168_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto event_1480_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1480_24_end: ;
}
void Frames::event_func_5182()
{
    // event 1481_24
    {
        if (!(group_main_engine_1)) goto event_1481_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1481_24_end: ;
}
void Frames::loop_hopper_24()
{
    event_func_5170();
    event_func_5171();
    event_func_5172();
    event_func_5173();
    event_func_5174();
    event_func_5175();
    event_func_5176();
    event_func_5177();
    event_func_5178();
    event_func_5179();
    event_func_5180();
    event_func_5181();
    event_func_5182();
}
void Frames::loop_wrapper_sound_kick1_24(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_24(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_24(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_24(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_24(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_24(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_24(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_24(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_24(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_24(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_24(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_24(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_24(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_24(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_24(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_24(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_24(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_24(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_24(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_play_music_6_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_play_music_7_24(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_24();
}
void Frames::loop_wrapper_process_call_resume_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_process_call_unqueue_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_24(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_24(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_5183()
{
    // event 1607_24
    {
        if (!(group_main_engine_1)) goto event_1607_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1607_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1607_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1607_24_end: ;
}
void Frames::col_4_24()
{
    event_func_5183();
}
void Frames::event_func_5184()
{
    // event 1508_24
    {
        if (!(group_main_engine_1)) goto event_1508_24_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1508_24_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1508_24_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, ((Active*)col_instance_2)->alterables->values.get(2)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)col_instance_2)->alterables->values.get(3)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
    }
    event_1508_24_end: ;
}
void Frames::col_5_24()
{
    event_func_5184();
}
void Frames::event_func_5185()
{
    // event 1452_24
    {
        if (!(group_main_engine_1)) goto event_1452_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1452_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1452_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1452_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1452_24_end: ;
}
void Frames::col_11_24()
{
    event_func_5185();
}
void Frames::event_func_5186()
{
    // event 1565_24
    {
        if (!(group_main_engine_1)) goto event_1565_24_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(2))) goto event_1565_24_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(1)) > (0))) goto event_1565_24_end;
        FrameObject * single_instance_1565_24_0; single_instance_1565_24_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1565_24_0 == NULL)
                single_instance_1565_24_0 = new_obj;
        }
        FrameObject * single_instance_1565_24_1; single_instance_1565_24_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1565_24_1 == NULL)
                single_instance_1565_24_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1565_24_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1565_24_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1565_24_0))->move_back();
    }
    event_1565_24_end: ;
}
void Frames::col_12_24()
{
    event_func_5186();
}
void Frames::event_func_5187()
{
    // event 1593_24
    {
        if (!(group_main_engine_1)) goto event_1593_24_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1593_24_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) > (10))) goto event_1593_24_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1593_24_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
        ((Active*)((Active*)col_instance_2))->set_scale(1);
    }
    event_1593_24_end: ;
}
void Frames::col_14_24()
{
    event_func_5187();
}
void Frames::event_func_5188()
{
    // event 1555_24
    {
        if (!(group_main_engine_1)) goto event_1555_24_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1555_24_end;
        ((Active*)((Active*)col_instance_2))->get_movement()->bounce(true);
    }
    event_1555_24_end: ;
}
void Frames::col_15_24()
{
    event_func_5188();
}
void Frames::event_func_5189()
{
    // event 1526_24
    {
        if (!(group_main_engine_1)) goto event_1526_24_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(4, 0-((Active*)col_instance_2)->alterables->values.get(4));
    }
    event_1526_24_end: ;
}
void Frames::col_16_24()
{
    event_func_5189();
}
void Frames::event_func_5190()
{
    // event 1449_24
    {
        if (!(group_main_engine_1)) goto event_1449_24_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1449_24_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1449_24_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_speed(50);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_deceleration(0);
        ((Active*)((Active*)col_instance_2))->set_direction(((Active*)col_instance_2)->get_direction()+16);
    }
    event_1449_24_end: ;
}
void Frames::col_20_24()
{
    event_func_5190();
}
void Frames::event_func_5191()
{
    // event 1454_24
    {
        if (!(group_main_engine_1)) goto event_1454_24_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1454_24_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 0);
    }
    event_1454_24_end: ;
}
void Frames::col_25_24()
{
    event_func_5191();
}
void Frames::event_func_5192()
{
    // event 1554_24
    {
        if (!(group_main_engine_1)) goto event_1554_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1554_24_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(0))) goto event_1554_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1554_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_speed(0);
    }
    event_1554_24_end: ;
}
void Frames::col_26_24()
{
    event_func_5192();
}
void Frames::event_func_5193()
{
    // event 1448_24
    {
        if (!(group_main_engine_1)) goto event_1448_24_end;
        if (!check_not_overlap(((Active*)col_instance_1), gimmickfireballturretback_1166_instances)) goto event_1448_24_end;
        ((Active*)((Active*)col_instance_1))->get_movement()->stop(true);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
    }
    event_1448_24_end: ;
}
void Frames::col_33_24()
{
    event_func_5193();
}
void Frames::test_collisions_24()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(shieldwater_318_instances, enemysporeprojectile_969_instances, 1, 1, (EventFunction)&Frames::col_2_21);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyspark_1101_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(playerreflect_447_instances, enemysporeprojectile_969_instances, 1, 2, (EventFunction)&Frames::col_5_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, enemysporeprojectile_969_instances, 536870912, 4, (EventFunction)&Frames::col_6_21);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 134217728, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(qualifier_19, enemyiris_1183_instances, 1073741824, 1, (EventFunction)&Frames::col_12_24);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemyrock_657_instances, 8, 1, (EventFunction)&Frames::col_14_24);
    test_collisions_save(playerreflect_447_instances, enemyfiresprite_1095_instances, 16, 1, (EventFunction)&Frames::col_15_24);
    test_collisions(enemylimiter_350_instances, enemyslug_1182_instances, 1, 1, (EventFunction)&Frames::col_16_24);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemysporeprojectile_969_instances, 4, 8, (EventFunction)&Frames::col_16_21);
    test_collisions(qualifier_20, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 32, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemyrock_657_instances, 4194304, 2, (EventFunction)&Frames::col_5_16);
    test_collisions(qualifier_7, playerprojectile_320_instances, 2097152, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 8, 4, (EventFunction)&Frames::col_4_16);
    test_collisions(enemyiris_1183_instances, objectpot_1185_instances, 2, 1, (EventFunction)&Frames::col_25_24);
    test_collisions(playercharactersensor_383_instances, enemyfiresprite_1095_instances, 16, 2, (EventFunction)&Frames::col_26_24);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemyrock_657_instances.begin(); it1 != enemyrock_657_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_18_16();
    }
    for (it1 = gimmickfireball_1096_instances.begin(); it1 != gimmickfireball_1096_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background_save()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_33_24();
    }
}
void Frames::event_func_5194()
{
    // event 2_24
    {
        if (!(group_main_engine_1)) goto event_2_24_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingplatform_1171_instances)) goto event_2_24_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(21);
        }
    }
    event_2_24_end: ;
}
void Frames::event_func_5195()
{
    // event 3_24
    {
        if (!(group_main_engine_1)) goto event_3_24_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingplatform_1171_instances)) goto event_3_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_3_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(21))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto event_3_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1);
            ((Active*)*it)->alterables->flags.enable(21);
        }
    }
    event_3_24_end: ;
}
void Frames::event_func_5196()
{
    // event 4_24
    bool or_result_4_24 = false;
    bool or_temp_result_4_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_4_24_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_4_24_0_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_4_24_0_end;
        or_result_4_24 = true;
        or_temp_result_4_24_0 = true;
    }
    or_event_4_24_0_end: ;
    gimmickrollingplatform_1171_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_4_24_0) {
        gimmickrollingplatform_1171_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 4_24
    bool or_temp_result_4_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_4_24_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_4_24_1_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_4_24_1_end;
        or_result_4_24 = true;
        or_temp_result_4_24_1 = true;
        or_event_4_24_1_end: ;
        if (or_temp_result_4_24_1) {
            gimmickrollingplatform_1171_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_4_24) goto or_final_or_event_4_24_1_end;
        gimmickrollingplatform_1171_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_4_24_0 || or_temp_result_4_24_1) {
            gimmickrollingplatform_1171_instances.restore_selection();
        }
        if (or_temp_result_4_24_0 || or_temp_result_4_24_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->flags.enable(21);
        }
    }
    or_final_or_event_4_24_1_end: ;
}
void Frames::event_func_5197()
{
    // event 5_24
    {
        if (!(group_main_engine_1)) goto event_5_24_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto event_5_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.05, 6));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_5_24_end: ;
}
void Frames::event_func_5198()
{
    // event 6_24
    bool or_result_6_24 = false;
    bool or_temp_result_6_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_6_24_0_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_6_24_0_end;
        or_result_6_24 = true;
        or_temp_result_6_24_0 = true;
    }
    or_event_6_24_0_end: ;
    gimmickrollingplatform_1171_instances.clear_saved_selection();
    if (or_temp_result_6_24_0) {
        gimmickrollingplatform_1171_instances.save_selection();
    }
    // event 6_24
    bool or_temp_result_6_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_6_24_1_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_6_24_1_end;
        or_result_6_24 = true;
        or_temp_result_6_24_1 = true;
        or_event_6_24_1_end: ;
        if (or_temp_result_6_24_1) {
            gimmickrollingplatform_1171_instances.save_selection();
        }
        if (!or_result_6_24) goto or_final_or_event_6_24_1_end;
        gimmickrollingplatform_1171_instances.empty_selection();
        if (or_temp_result_6_24_0 || or_temp_result_6_24_1) {
            gimmickrollingplatform_1171_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_6_24_1_end: ;
}
void Frames::event_func_5199()
{
    // event 7_24
    {
        if (!(group_main_engine_1)) goto event_7_24_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto event_7_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 360);
            ((Active*)*it)->alterables->values.add(4, 360);
        }
    }
    event_7_24_end: ;
}
void Frames::event_func_5200()
{
    // event 8_24
    bool or_result_8_24 = false;
    bool or_temp_result_8_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_8_24_0_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_8_24_0_end;
        or_result_8_24 = true;
        or_temp_result_8_24_0 = true;
    }
    or_event_8_24_0_end: ;
    gimmickrollingplatform_1171_instances.clear_saved_selection();
    if (or_temp_result_8_24_0) {
        gimmickrollingplatform_1171_instances.save_selection();
    }
    // event 8_24
    bool or_temp_result_8_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_8_24_1_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto or_event_8_24_1_end;
        or_result_8_24 = true;
        or_temp_result_8_24_1 = true;
        or_event_8_24_1_end: ;
        if (or_temp_result_8_24_1) {
            gimmickrollingplatform_1171_instances.save_selection();
        }
        if (!or_result_8_24) goto or_final_or_event_8_24_1_end;
        gimmickrollingplatform_1171_instances.empty_selection();
        if (or_temp_result_8_24_0 || or_temp_result_8_24_1) {
            gimmickrollingplatform_1171_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, -6));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_8_24_1_end: ;
}
void Frames::event_func_5201()
{
    // event 9_24
    {
        if (!(group_main_engine_1)) goto event_9_24_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto event_9_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.05, 0));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_9_24_end: ;
}
void Frames::event_func_5202()
{
    // event 10_24
    {
        if (!(group_main_engine_1)) goto event_10_24_end;
        gimmickrollingplatform_1171_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatform_1171_instances.has_selection()) goto event_10_24_end;
        for (ObjectIterator it(gimmickrollingplatform_1171_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    event_10_24_end: ;
}
void Frames::event_func_5203()
{
    // event 545_24
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_545_24_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_545_24_end;
        FrameObject * single_instance_545_24_0; single_instance_545_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_545_24_0 == NULL)
                    single_instance_545_24_0 = new_obj;
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
                loop_spawndebris_24();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_545_24_end: ;
}
void Frames::event_func_5204()
{
    // event 562_24
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_562_24_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_562_24_end;
        FrameObject * single_instance_562_24_0; single_instance_562_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_562_24_0 == NULL)
                    single_instance_562_24_0 = new_obj;
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
                loop_spawndebris_24();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_562_24_end: ;
}
void Frames::event_func_5205()
{
    // event 696_24
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_696_24_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_696_24_end;
        FrameObject * single_instance_696_24_0; single_instance_696_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_696_24_0 == NULL)
                    single_instance_696_24_0 = new_obj;
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
                loop_spawndebris_24();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_696_24_end: ;
}
void Frames::event_func_5206()
{
    // event 1397_24
    {
        if (!(group_main_engine_1)) goto event_1397_24_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1397_24_end: ;
}
void Frames::event_func_5207()
{
    // event 1398_24
    bool or_result_1398_24 = false;
    bool or_temp_result_1398_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1398_24_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1398_24_0_end;
        or_result_1398_24 = true;
        or_temp_result_1398_24_0 = true;
    }
    or_event_1398_24_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1398_24_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1398_24
    bool or_temp_result_1398_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1398_24_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1398_24_1_end;
        or_result_1398_24 = true;
        or_temp_result_1398_24_1 = true;
        or_event_1398_24_1_end: ;
        if (or_temp_result_1398_24_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1398_24) goto or_final_or_event_1398_24_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1398_24_0 || or_temp_result_1398_24_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1398_24_1_end: ;
}
