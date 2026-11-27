#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5208()
{
    // event 1399_24
    bool or_result_1399_24 = false;
    bool or_temp_result_1399_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1399_24_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1399_24_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1399_24_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakableruins_1184_instances)) goto or_event_1399_24_0_end;
        or_result_1399_24 = true;
        or_temp_result_1399_24_0 = true;
    }
    or_event_1399_24_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    breakableruins_1184_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1399_24_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableruins_1184_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1399_24
    bool or_temp_result_1399_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1399_24_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1399_24_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1399_24_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakableruins_1184_instances)) goto or_event_1399_24_1_end;
        or_result_1399_24 = true;
        or_temp_result_1399_24_1 = true;
    }
    or_event_1399_24_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1399_24_1) {
        playersensorrightbig_393_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableruins_1184_instances.save_selection();
    }
    // event 1399_24
    bool or_temp_result_1399_24_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1399_24_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakableruins_1184_instances)) goto or_event_1399_24_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1399_24_2_end;
        or_result_1399_24 = true;
        or_temp_result_1399_24_2 = true;
    }
    or_event_1399_24_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1399_24_2) {
        playermovementvalues_245_instances.save_selection();
        breakableruins_1184_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1399_24
    bool or_temp_result_1399_24_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1399_24_3_end;
        playerreflect_447_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakableruins_1184_instances)) goto or_event_1399_24_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1399_24_3_end;
        or_result_1399_24 = true;
        or_temp_result_1399_24_3 = true;
    }
    or_event_1399_24_3_end: ;
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1399_24_3) {
        breakableruins_1184_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1399_24
    bool or_temp_result_1399_24_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1399_24_4_end;
        thunderspark_339_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakableruins_1184_instances)) goto or_event_1399_24_4_end;
        or_result_1399_24 = true;
        or_temp_result_1399_24_4 = true;
        or_event_1399_24_4_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1399_24_4) {
            thunderspark_339_instances.save_selection();
            breakableruins_1184_instances.save_selection();
        }
        if (!or_result_1399_24) goto or_final_or_event_1399_24_4_end;
        playersensorrightbig_393_instances.empty_selection();
        breakableruins_1184_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        thunderspark_339_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1399_24_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1399_24_0 || or_temp_result_1399_24_1 || or_temp_result_1399_24_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1399_24_4) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1399_24_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1399_24_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1399_24_0 || or_temp_result_1399_24_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1399_24_0 || or_temp_result_1399_24_1 || or_temp_result_1399_24_2 || or_temp_result_1399_24_3 || or_temp_result_1399_24_4) {
            breakableruins_1184_instances.restore_selection();
        }
        if (or_temp_result_1399_24_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1399_24_4_end: ;
}
void Frames::event_func_5209()
{
    // event 1400_24
    bool or_result_1400_24 = false;
    bool or_temp_result_1400_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1400_24_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1400_24_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1400_24_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakableruins_1184_instances)) goto or_event_1400_24_0_end;
        or_result_1400_24 = true;
        or_temp_result_1400_24_0 = true;
    }
    or_event_1400_24_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakableruins_1184_instances.clear_saved_selection();
    if (or_temp_result_1400_24_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableruins_1184_instances.save_selection();
    }
    // event 1400_24
    bool or_temp_result_1400_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1400_24_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1400_24_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1400_24_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakableruins_1184_instances)) goto or_event_1400_24_1_end;
        or_result_1400_24 = true;
        or_temp_result_1400_24_1 = true;
        or_event_1400_24_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1400_24_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            breakableruins_1184_instances.save_selection();
        }
        if (!or_result_1400_24) goto or_final_or_event_1400_24_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakableruins_1184_instances.empty_selection();
        if (or_temp_result_1400_24_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1400_24_0 || or_temp_result_1400_24_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1400_24_0 || or_temp_result_1400_24_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1400_24_0 || or_temp_result_1400_24_1) {
            breakableruins_1184_instances.restore_selection();
        }
        if (or_temp_result_1400_24_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1400_24_1_end: ;
}
void Frames::event_func_5210()
{
    // event 1401_24
    {
        if (!(group_main_engine_1)) goto event_1401_24_end;
        monitoricon_331_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakableruins_1184_instances)) goto event_1401_24_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1401_24_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1401_24_end: ;
}
void Frames::event_func_5211()
{
    // event 1402_24
    {
        if (!(group_main_engine_1)) goto event_1402_24_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1402_24_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakableruins_1184_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 16, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 16, parent->y + 28), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 16, parent->y + 44), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 17, parent->y + 60), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1402_24_end: ;
}
void Frames::event_func_5212()
{
    // event 1403_24
    {
        if (!(group_main_engine_1)) goto event_1403_24_end;
        breakableruinspiece_1102_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1403_24_end: ;
}
void Frames::event_func_5213()
{
    // event 1404_24
    {
        if (!(group_main_engine_1)) goto event_1404_24_end;
        breakableruinspiece_1102_instances.clear_selection();
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakableruinspiece_1102_instances.has_selection()) goto event_1404_24_end;
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1404_24_end: ;
}
void Frames::event_func_5214()
{
    // event 1407_24
    bool or_result_1407_24 = false;
    bool or_temp_result_1407_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1407_24_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1407_24_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1407_24_0_end;
        or_result_1407_24 = true;
        or_temp_result_1407_24_0 = true;
    }
    or_event_1407_24_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    switchwallplate_814_instances.clear_saved_selection();
    if (or_temp_result_1407_24_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchwallplate_814_instances.save_selection();
    }
    // event 1407_24
    bool or_temp_result_1407_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1407_24_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1407_24_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1407_24_1_end;
        or_result_1407_24 = true;
        or_temp_result_1407_24_1 = true;
    }
    or_event_1407_24_1_end: ;
    if (or_temp_result_1407_24_1) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchwallplate_814_instances.save_selection();
    }
    // event 1407_24
    bool or_temp_result_1407_24_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1407_24_2_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1407_24_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1407_24_2_end;
        or_result_1407_24 = true;
        or_temp_result_1407_24_2 = true;
        or_event_1407_24_2_end: ;
        if (or_temp_result_1407_24_2) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            switchwallplate_814_instances.save_selection();
        }
        if (!or_result_1407_24) goto or_final_or_event_1407_24_2_end;
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1407_24_0 || or_temp_result_1407_24_1 || or_temp_result_1407_24_2) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1407_24_0 || or_temp_result_1407_24_1 || or_temp_result_1407_24_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1407_24_0 || or_temp_result_1407_24_1 || or_temp_result_1407_24_2) {
            switchwallplate_814_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1407_24_2_end: ;
}
void Frames::event_func_5215()
{
    // event 1408_24
    {
        if (!(group_main_engine_1)) goto event_1408_24_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1408_24_end;
        if (not_always_1408_24 > loop_count) {
            not_always_1408_24 = loop_count + 2;
            goto event_1408_24_end;
        }
        not_always_1408_24 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.set(3, 0);
        media.play_id(SOUND_DRAG2_62, -1, 0);
    }
    event_1408_24_end: ;
}
void Frames::event_func_5216()
{
    // event 1409_24
    bool or_result_1409_24 = false;
    bool or_temp_result_1409_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1409_24_0_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1409_24_0_end;
        if (!media.is_sample_playing(SOUND_DRAG2_62)) goto or_event_1409_24_0_end;
        or_result_1409_24 = true;
        or_temp_result_1409_24_0 = true;
    }
    or_event_1409_24_0_end: ;
    switchwallplate_814_instances.clear_saved_selection();
    if (or_temp_result_1409_24_0) {
        switchwallplate_814_instances.save_selection();
    }
    // event 1409_24
    bool or_temp_result_1409_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1409_24_1_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (160))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1409_24_1_end;
        if (!media.is_sample_playing(SOUND_DRAG2_62)) goto or_event_1409_24_1_end;
        or_result_1409_24 = true;
        or_temp_result_1409_24_1 = true;
        or_event_1409_24_1_end: ;
        if (or_temp_result_1409_24_1) {
            switchwallplate_814_instances.save_selection();
        }
        if (!or_result_1409_24) goto or_final_or_event_1409_24_1_end;
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1409_24_0 || or_temp_result_1409_24_1) {
            switchwallplate_814_instances.restore_selection();
        }
        media.stop_sample(SOUND_DRAG2_62);
    }
    or_final_or_event_1409_24_1_end: ;
}
void Frames::event_func_5217()
{
    // event 1410_24
    {
        if (!(group_main_engine_1)) goto event_1410_24_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1410_24_end;
        if (!((((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2)) < (160))) goto event_1410_24_end;
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.add(2, 4);
        ((Active*)get_instance(switchcolumnback1_1099_instances))->set_y(((Active*)get_instance(switchcolumnback1_1099_instances))->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
        switchcolumnback2_1100_instances.clear_selection();
        for (ObjectIterator it(switchcolumnback2_1100_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(switchcolumnfront1_1169_instances))->set_y(((Active*)get_instance(switchcolumnfront1_1169_instances))->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
    }
    event_1410_24_end: ;
}
void Frames::event_func_5218()
{
    // event 1411_24
    {
        if (!(group_main_engine_1)) goto event_1411_24_end;
        playersensorbottombig_397_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchcolumnfront1_1169_instances)) goto event_1411_24_end;
        if (!((((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2)) > (0))) goto event_1411_24_end;
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.enable(1);
    }
    event_1411_24_end: ;
}
void Frames::event_func_5219()
{
    // event 1412_24
    {
        if (!(group_main_engine_1)) goto event_1412_24_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_off(0))) goto event_1412_24_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(1))) goto event_1412_24_end;
        if (!((((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2)) > (0))) goto event_1412_24_end;
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.set(2, get_max(((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(3), 0));
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.set(3, get_min(((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(3)+0.01, 2));
        ((Active*)get_instance(switchcolumnback1_1099_instances))->set_y(((Active*)get_instance(switchcolumnback1_1099_instances))->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
        switchcolumnback2_1100_instances.clear_selection();
        for (ObjectIterator it(switchcolumnback2_1100_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(switchcolumnfront1_1169_instances))->set_y(((Active*)get_instance(switchcolumnfront1_1169_instances))->alterables->values.get(0)-((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2));
    }
    event_1412_24_end: ;
}
void Frames::event_func_5220()
{
    // event 1414_24
    {
        if (!(group_main_engine_1)) goto event_1414_24_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1414_24_end;
        gimmickhangingmovingsensor_737_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingsensor_737_instances.has_selection()) goto event_1414_24_end;
        for (ObjectIterator it(gimmickhangingmovingsensor_737_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1414_24_end: ;
}
void Frames::event_func_5221()
{
    // event 1416_24
    {
        if (!(group_main_engine_1)) goto event_1416_24_end;
        if (!((((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)) > (0))) goto event_1416_24_end;
        if (!((((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)) < (180))) goto event_1416_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_x(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(0)+cos_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3))*((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(4));
    }
    event_1416_24_end: ;
}
void Frames::event_func_5222()
{
    // event 1417_24
    {
        if (!(group_main_engine_1)) goto event_1417_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_y(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(2))*((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(4));
    }
    event_1417_24_end: ;
}
void Frames::event_func_5223()
{
    // event 1418_24
    {
        if (!(group_main_engine_1)) goto event_1418_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.add(2, 3);
    }
    event_1418_24_end: ;
}
void Frames::event_func_5224()
{
    // event 1419_24
    {
        if (!(group_main_engine_1)) goto event_1419_24_end;
        if (!((((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)) < (270))) goto event_1419_24_end;
        if (!(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->flags.is_off(0))) goto event_1419_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.add(3, 3);
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_angle(((Active*)get_instance(gimmickspinball_1175_instances))->get_angle()+get_max(0, sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)*0.5+45)*8), 0);
    }
    event_1419_24_end: ;
}
void Frames::event_func_5225()
{
    // event 1420_24
    bool or_result_1420_24 = false;
    bool or_temp_result_1420_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1420_24_0_end;
        gimmickspinball_1175_instances.clear_selection();
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gimmickspinball_1175_instances.has_selection()) goto or_event_1420_24_0_end;
        or_result_1420_24 = true;
        or_temp_result_1420_24_0 = true;
    }
    or_event_1420_24_0_end: ;
    gimmickspinball_1175_instances.clear_saved_selection();
    if (or_temp_result_1420_24_0) {
        gimmickspinball_1175_instances.save_selection();
    }
    // event 1420_24
    bool or_temp_result_1420_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1420_24_1_end;
        gimmickspinball_1175_instances.clear_selection();
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!gimmickspinball_1175_instances.has_selection()) goto or_event_1420_24_1_end;
        or_result_1420_24 = true;
        or_temp_result_1420_24_1 = true;
        or_event_1420_24_1_end: ;
        if (or_temp_result_1420_24_1) {
            gimmickspinball_1175_instances.save_selection();
        }
        if (!or_result_1420_24) goto or_final_or_event_1420_24_1_end;
        gimmickspinball_1175_instances.empty_selection();
        if (or_temp_result_1420_24_0 || or_temp_result_1420_24_1) {
            gimmickspinball_1175_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickspinball_1175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(0);
        }
    }
    or_final_or_event_1420_24_1_end: ;
}
void Frames::event_func_5226()
{
    // event 1421_24
    {
        if (!(group_main_engine_1)) goto event_1421_24_end;
        if (!((((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)) > (-90))) goto event_1421_24_end;
        if (!(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->flags.is_on(0))) goto event_1421_24_end;
        ((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.sub(3, 3);
        ((Active*)get_instance(gimmickspinball_1175_instances))->set_angle(((Active*)get_instance(gimmickspinball_1175_instances))->get_angle()-get_max(0, sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)*0.5+45)*8), 0);
    }
    event_1421_24_end: ;
}
void Frames::event_func_5227()
{
    // event 1422_24
    {
        if (!(group_main_engine_1)) goto event_1422_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1422_24_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1422_24_end;
        playercharactersensor_383_instances.clear_selection();
        gimmickspinball_1175_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, gimmickspinball_1175_instances)) goto event_1422_24_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5+get_max(0, sin_deg(((Active*)get_instance(gimmickspinball_1175_instances))->alterables->values.get(3)*0.5+45)*10));
    }
    event_1422_24_end: ;
}
void Frames::event_func_5228()
{
    // event 1423_24
    {
        if (!(group_main_engine_1)) goto event_1423_24_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrelicpanel_1178_instances)) goto event_1423_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1423_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1423_24_end: ;
}
void Frames::event_func_5229()
{
    // event 1424_24
    {
        if (!(group_main_engine_1)) goto event_1424_24_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrelicpanel_1178_instances)) goto event_1424_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1424_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_1424_24_end: ;
}
void Frames::event_func_5230()
{
    // event 1425_24
    {
        if (!(group_main_engine_1)) goto event_1425_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1425_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1425_24_end: ;
}
void Frames::event_func_5231()
{
    // event 1426_24
    {
        if (!(group_main_engine_1)) goto event_1426_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(8))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1426_24_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(gimmickrelicpanel_1178_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + 16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_max(((Active*)*it)->get_direction()-1, 0));
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->flags.enable(10);
        }
    }
    event_1426_24_end: ;
}
void Frames::event_func_5232()
{
    // event 1427_24
    {
        if (!(group_main_engine_1)) goto event_1427_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1427_24_end;
        FrameObject * single_instance_1427_24_0; single_instance_1427_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickrelicpanel_1178_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1427_24_0 == NULL)
                    single_instance_1427_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1427_24_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1427_24_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1427_24_0))->alterables->flags.enable(10);
    }
    event_1427_24_end: ;
}
void Frames::event_func_5233()
{
    // event 1428_24
    {
        if (!(group_main_engine_1)) goto event_1428_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1428_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(0);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_direction(get_max(((Active*)*it)->get_direction()-1, 0));
        }
    }
    event_1428_24_end: ;
}
void Frames::event_func_5234()
{
    // event 1429_24
    {
        if (!(group_main_engine_1)) goto event_1429_24_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(10))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1429_24_end;
        if (!check_not_overlap(objectcrystal_279_instances, gimmickrelicpanel_1178_instances)) goto event_1429_24_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(10);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1429_24_end: ;
}
void Frames::event_func_5235()
{
    // event 1430_24
    {
        if (!(group_main_engine_1)) goto event_1430_24_end;
        gimmickrelicpanel_1178_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanel_1178_instances.has_selection()) goto event_1430_24_end;
        for (ObjectIterator it(gimmickrelicpanel_1178_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        {
            loop_relicpanel_running = true;
            int times = int(12);
            loop_relicpanel_index = 0;
            while (loop_relicpanel_index < times) {
                loop_relicpanel_24();
                if (!loop_relicpanel_running) break;
                loop_relicpanel_index++;
            }
        }
        media.play_id(SOUND_COMMON_COLLAPSE_428, -1, 1);
    }
    event_1430_24_end: ;
}
void Frames::event_func_5236()
{
    // event 1433_24
    {
        if (!(group_main_engine_1)) goto event_1433_24_end;
        gimmickrelicpanelpiece_1097_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanelpiece_1097_instances.has_selection()) goto event_1433_24_end;
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1433_24_end: ;
}
void Frames::event_func_5237()
{
    // event 1434_24
    {
        if (!(group_main_engine_1)) goto event_1434_24_end;
        gimmickrelicpanelpiece_1097_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanelpiece_1097_instances.has_selection()) goto event_1434_24_end;
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.25, 15));
        }
    }
    event_1434_24_end: ;
}
void Frames::event_func_5238()
{
    // event 1435_24
    {
        if (!(group_main_engine_1)) goto event_1435_24_end;
        gimmickrelicpanelpiece_1097_instances.clear_selection();
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+40))) { it.deselect(); continue; }
        }
        if (!gimmickrelicpanelpiece_1097_instances.has_selection()) goto event_1435_24_end;
        for (ObjectIterator it(gimmickrelicpanelpiece_1097_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1435_24_end: ;
}
void Frames::event_func_5239()
{
    // event 1436_24
    bool or_result_1436_24 = false;
    bool or_temp_result_1436_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1436_24_0_end;
        gimmickfireballspawner_1179_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballspawner_1179_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
        }
        if (!gimmickfireballspawner_1179_instances.has_selection()) goto or_event_1436_24_0_end;
        or_result_1436_24 = true;
        or_temp_result_1436_24_0 = true;
    }
    or_event_1436_24_0_end: ;
    gimmickfireballspawner_1179_instances.clear_saved_selection();
    if (or_temp_result_1436_24_0) {
        gimmickfireballspawner_1179_instances.save_selection();
    }
    // event 1436_24
    bool or_temp_result_1436_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1436_24_1_end;
        gimmickfireballturretback_1166_instances.clear_selection();
        for (ObjectIterator it(gimmickfireballturretback_1166_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!gimmickfireballturretback_1166_instances.has_selection()) goto or_event_1436_24_1_end;
        or_result_1436_24 = true;
        or_temp_result_1436_24_1 = true;
        or_event_1436_24_1_end: ;
        gimmickfireballturretback_1166_instances.clear_saved_selection();
        if (or_temp_result_1436_24_1) {
            gimmickfireballturretback_1166_instances.save_selection();
        }
        if (!or_result_1436_24) goto or_final_or_event_1436_24_1_end;
        gimmickfireballturretback_1166_instances.empty_selection();
        gimmickfireballspawner_1179_instances.empty_selection();
        if (or_temp_result_1436_24_0) {
            gimmickfireballspawner_1179_instances.restore_selection();
        }
        if (or_temp_result_1436_24_1) {
            gimmickfireballturretback_1166_instances.restore_selection();
        }
        {
            loop_fireball_launcher_running = true;
            int times = int(1);
            loop_fireball_launcher_index = 0;
            while (loop_fireball_launcher_index < times) {
                loop_fireball_launcher_24();
                if (!loop_fireball_launcher_running) break;
                loop_fireball_launcher_index++;
            }
        }
    }
    or_final_or_event_1436_24_1_end: ;
}
void Frames::event_func_5240()
{
    // event 1441_24
    {
        if (!(group_main_engine_1)) goto event_1441_24_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1441_24_end;
        if (!((gimmickfireball_1096_instances.size()) > (0))) goto event_1441_24_end;
        FrameObject * single_instance_1441_24_0; single_instance_1441_24_0 = NULL;
        // select single: true false false
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator p_it(gimmickfireball_1096_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectember_970(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1441_24_0 == NULL)
                    single_instance_1441_24_0 = new_obj;
            }
        }
    }
    event_1441_24_end: ;
}
void Frames::event_func_5241()
{
    // event 1442_24
    {
        if (!(group_main_engine_1)) goto event_1442_24_end;
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!effectember_970_instances.has_selection()) goto event_1442_24_end;
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8+randrange(17));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8+randrange(17));
        }
    }
    event_1442_24_end: ;
}
void Frames::event_func_5242()
{
    // event 1443_24
    {
        if (!(group_main_engine_1)) goto event_1443_24_end;
        gimmickfireball_1096_instances.clear_selection();
        gimmickfireballturretback_1166_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1443_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_y()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1443_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_y());
        }
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->force_animation(10);
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1443_24_end: ;
}
void Frames::event_func_5243()
{
    // event 1444_24
    {
        if (!(group_main_engine_1)) goto event_1444_24_end;
        if (!(((Active*)get_instance(gimmickfireballturretback_1166_instances))->is_animation_finished(10))) goto event_1444_24_end;
        gimmickfireball_1096_instances.clear_selection();
        gimmickfireballturretback_1166_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1444_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_direction());
        }
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->force_animation(6);
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_action_y());
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1444_24_end: ;
}
void Frames::event_func_5244()
{
    // event 1445_24
    {
        if (!(group_main_engine_1)) goto event_1445_24_end;
        if (!(((Active*)get_instance(gimmickfireballturretback_1166_instances))->test_animation(6))) goto event_1445_24_end;
        gimmickfireball_1096_instances.clear_selection();
        gimmickfireballturretback_1166_instances.clear_selection();
        if (!check_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1445_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->set_direction(((Active*)get_instance(gimmickfireballturretback_1166_instances))->get_direction());
        }
    }
    event_1445_24_end: ;
}
void Frames::event_func_5245()
{
    // event 1446_24
    {
        if (!(group_main_engine_1)) goto event_1446_24_end;
        if (!(((Active*)get_instance(gimmickfireballturretback_1166_instances))->is_animation_finished(6))) goto event_1446_24_end;
        ((Active*)get_instance(gimmickfireballturretback_1166_instances))->force_animation(11);
    }
    event_1446_24_end: ;
}
void Frames::event_func_5246()
{
    // event 1447_24
    {
        if (!(group_main_engine_1)) goto event_1447_24_end;
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1447_24_end;
        if (!check_not_overlap(gimmickfireball_1096_instances, gimmickfireballturretback_1166_instances)) goto event_1447_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1447_24_end: ;
}
void Frames::event_func_5247()
{
    // event 1450_24
    {
        if (!(group_main_engine_1)) goto event_1450_24_end;
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1450_24_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1450_24_end: ;
}
void Frames::event_func_5248()
{
    // event 1455_24
    {
        if (!(group_main_engine_1)) goto event_1455_24_end;
        objectpot_1185_instances.clear_selection();
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (5))) { it.deselect(); continue; }
        }
        if (!objectpot_1185_instances.has_selection()) goto event_1455_24_end;
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_POTBREAK_2_213, -1, 1);
        FrameObject * single_instance_1455_24_0; single_instance_1455_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectpot_1185_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1455_24_0 == NULL)
                    single_instance_1455_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1455_24_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1455_24_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1455_24_0))->set_direction(8);
        {
            loop_pot_running = true;
            int times = int(5);
            loop_pot_index = 0;
            while (loop_pot_index < times) {
                loop_pot_24();
                if (!loop_pot_running) break;
                loop_pot_index++;
            }
        }
    }
    event_1455_24_end: ;
}
void Frames::event_func_5249()
{
    // event 1457_24
    {
        if (!(group_main_engine_1)) goto event_1457_24_end;
        objectpot_1185_instances.clear_selection();
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (5))) { it.deselect(); continue; }
        }
        if (!objectpot_1185_instances.has_selection()) goto event_1457_24_end;
        for (ObjectIterator it(objectpot_1185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1457_24_end: ;
}
void Frames::event_func_5250()
{
    // event 1458_24
    {
        if (!(group_main_engine_1)) goto event_1458_24_end;
        gimmickrollingplatform2_1170_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatform2_1170_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickrollingplatform_1171_instances, it.current_index));
            if (parent == NULL) goto pos_end_1458_24_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1458_24_0: ;
        }
        for (ObjectIterator it(gimmickrollingplatform2_1170_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(gimmickrollingplatform_1171_instances, it.current_index, default_active_instance))->alterables->values.get(1)*4), 0);
        }
    }
    event_1458_24_end: ;
}
void Frames::event_func_5251()
{
    // event 1465_24
    {
        if (!(group_main_engine_1)) goto event_1465_24_end;
        {
            loop_hopper_running = true;
            int times = int(1);
            loop_hopper_index = 0;
            while (loop_hopper_index < times) {
                loop_hopper_24();
                if (!loop_hopper_running) break;
                loop_hopper_index++;
            }
        }
    }
    event_1465_24_end: ;
}
void Frames::event_func_5252()
{
    // event 1482_24
    {
        if (!(group_main_engine_1)) goto event_1482_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1482_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(10);
        }
    }
    event_1482_24_end: ;
}
void Frames::event_func_5253()
{
    // event 1483_24
    {
        if (!(group_main_engine_1)) goto event_1483_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1483_24_end;
        if (!check_not_overlap(enemyhopper_1168_instances, qualifier_7)) goto event_1483_24_end;
        if (!check_not_overlap(enemyhopper_1168_instances, qualifier_8)) goto event_1483_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.25, 12));
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1483_24_end: ;
}
void Frames::event_func_5254()
{
    // event 1484_24
    {
        if (!(group_main_engine_1)) goto event_1484_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1484_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1484_24_end: ;
}
void Frames::event_func_5255()
{
    // event 1485_24
    {
        if (!(group_main_engine_1)) goto event_1485_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1485_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1485_24_end: ;
}
void Frames::event_func_5256()
{
    // event 1486_24
    {
        if (!(group_main_engine_1)) goto event_1486_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(12))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1486_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
            ((Active*)*it)->alterables->values.set(9, 2);
        }
        {
            loop_hopper_spore_running = true;
            int times = int(2);
            loop_hopper_spore_index = 0;
            while (loop_hopper_spore_index < times) {
                loop_hopper_spore_24();
                if (!loop_hopper_spore_running) break;
                loop_hopper_spore_index++;
            }
        }
    }
    event_1486_24_end: ;
}
void Frames::event_func_5257()
{
    // event 1487_24
    {
        if (!(group_main_engine_1)) goto event_1487_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1487_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1487_24_end: ;
}
void Frames::event_func_5258()
{
    // event 1488_24
    {
        if (!(group_main_engine_1)) goto event_1488_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1488_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->flags.disable(12);
        }
    }
    event_1488_24_end: ;
}
void Frames::event_func_5259()
{
    // event 1489_24
    {
        if (!(group_main_engine_1)) goto event_1489_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1489_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->flags.disable(12);
        }
    }
    event_1489_24_end: ;
}
void Frames::event_func_5260()
{
    // event 1490_24
    {
        if (!(group_main_engine_1)) goto event_1490_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1490_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1490_24_end: ;
}
void Frames::event_func_5261()
{
    // event 1491_24
    {
        if (!(group_main_engine_1)) goto event_1491_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (9))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1491_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(6, -7);
            ((Active*)*it)->alterables->values.set(5, ((((Active*)*it)->get_direction()/math_helper/8)-1)*-1);
        }
    }
    event_1491_24_end: ;
}
void Frames::event_func_5262()
{
    // event 1492_24
    {
        if (!(group_main_engine_1)) goto event_1492_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1492_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.25, 12));
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1492_24_end: ;
}
void Frames::event_func_5263()
{
    // event 1493_24
    bool or_result_1493_24 = false;
    bool or_temp_result_1493_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_24_0_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1493_24_0_end;
        or_result_1493_24 = true;
        or_temp_result_1493_24_0 = true;
    }
    or_event_1493_24_0_end: ;
    enemyhopper_1168_instances.clear_saved_selection();
    if (or_temp_result_1493_24_0) {
        enemyhopper_1168_instances.save_selection();
    }
    // event 1493_24
    bool or_temp_result_1493_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_24_1_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1493_24_1_end;
        or_result_1493_24 = true;
        or_temp_result_1493_24_1 = true;
        or_event_1493_24_1_end: ;
        if (or_temp_result_1493_24_1) {
            enemyhopper_1168_instances.save_selection();
        }
        if (!or_result_1493_24) goto or_final_or_event_1493_24_1_end;
        enemyhopper_1168_instances.empty_selection();
        if (or_temp_result_1493_24_0 || or_temp_result_1493_24_1) {
            enemyhopper_1168_instances.restore_selection();
        }
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5));
        }
    }
    or_final_or_event_1493_24_1_end: ;
}
void Frames::event_func_5264()
{
    // event 1494_24
    {
        if (!(group_main_engine_1)) goto event_1494_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1494_24_end;
        if (!(test_obstacle(((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyhopper_1168_instances, default_active_instance))->get_box_index(1)+8))) goto event_1494_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1494_24_end: ;
}
void Frames::event_func_5265()
{
    // event 1495_24
    {
        if (!(group_main_engine_1)) goto event_1495_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1495_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, -80);
        }
        media.play_id(SOUND_LAND_2_54, -1, 1);
    }
    event_1495_24_end: ;
}
void Frames::event_func_5266()
{
    // event 1496_24
    {
        if (!(group_main_engine_1)) goto event_1496_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1496_24_end;
        FrameObject * single_instance_1496_24_0; single_instance_1496_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1496_24_0 == NULL)
                    single_instance_1496_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1496_24_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1496_24_0))->force_frame(17);
    }
    event_1496_24_end: ;
}
void Frames::event_func_5267()
{
    // event 1497_24
    {
        if (!(group_main_engine_1)) goto event_1497_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1497_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
        }
        FrameObject * single_instance_1497_24_0; single_instance_1497_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1497_24_0 == NULL)
                    single_instance_1497_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1497_24_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1497_24_0))->force_frame(16);
    }
    event_1497_24_end: ;
}
void Frames::event_func_5268()
{
    // event 1498_24
    {
        if (!(group_main_engine_1)) goto event_1498_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1498_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_1498_24_end: ;
}
void Frames::event_func_5269()
{
    // event 1499_24
    bool or_result_1499_24 = false;
    bool or_temp_result_1499_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_24_0_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1499_24_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto or_event_1499_24_0_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1499_24_0_end;
        or_result_1499_24 = true;
        or_temp_result_1499_24_0 = true;
    }
    or_event_1499_24_0_end: ;
    enemyhopper_1168_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1499_24_0) {
        enemyhopper_1168_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1499_24
    bool or_temp_result_1499_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_24_1_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1499_24_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto or_event_1499_24_1_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1499_24_1_end;
        or_result_1499_24 = true;
        or_temp_result_1499_24_1 = true;
    }
    or_event_1499_24_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1499_24_1) {
        enemyhopper_1168_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1499_24
    bool or_temp_result_1499_24_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_24_2_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1499_24_2_end;
        or_result_1499_24 = true;
        or_temp_result_1499_24_2 = true;
        or_event_1499_24_2_end: ;
        if (or_temp_result_1499_24_2) {
            enemyhopper_1168_instances.save_selection();
        }
        if (!or_result_1499_24) goto or_final_or_event_1499_24_2_end;
        qualifier_8.empty_selection();
        enemyhopper_1168_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1499_24_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1499_24_0 || or_temp_result_1499_24_1 || or_temp_result_1499_24_2) {
            enemyhopper_1168_instances.restore_selection();
        }
        if (or_temp_result_1499_24_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1499_24_0; single_instance_1499_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1499_24_0 == NULL)
                    single_instance_1499_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1499_24_0))->set_direction(2);
        FrameObject * single_instance_1499_24_1; single_instance_1499_24_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1499_24_1 == NULL)
                    single_instance_1499_24_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
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
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1499_24_2_end: ;
}
void Frames::event_func_5270()
{
    // event 1501_24
    {
        if (!(group_main_engine_1)) goto event_1501_24_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1501_24_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1501_24_end: ;
}
void Frames::event_func_5271()
{
    // event 1512_24
    {
        if (!(group_main_engine_1)) goto event_1512_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1512_24_end;
        {
            loop_slug_running = true;
            int times = int(1);
            loop_slug_index = 0;
            while (loop_slug_index < times) {
                loop_slug_24();
                if (!loop_slug_running) break;
                loop_slug_index++;
            }
        }
    }
    event_1512_24_end: ;
}
void Frames::event_func_5272()
{
    // event 1513_24
    {
        if (!(group_main_engine_1)) goto event_1513_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1513_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
        }
    }
    event_1513_24_end: ;
}
void Frames::event_func_5273()
{
    // event 1514_24
    {
        if (!(group_main_engine_1)) goto event_1514_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1514_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_direction(8);
        }
    }
    event_1514_24_end: ;
}
void Frames::event_func_5274()
{
    // event 1515_24
    {
        if (!(group_main_engine_1)) goto event_1515_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(24);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1515_24_end: ;
}
void Frames::event_func_5275()
{
    // event 1516_24
    {
        if (!(group_main_engine_1)) goto event_1516_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1516_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1516_24_end: ;
}
void Frames::event_func_5276()
{
    // event 1517_24
    {
        if (!(group_main_engine_1)) goto event_1517_24_end;
        enemyslug_1182_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, qualifier_7)) goto event_1517_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1517_24_end: ;
}
void Frames::event_func_5277()
{
    // event 1518_24
    {
        if (!(group_main_engine_1)) goto event_1518_24_end;
        enemyslug_1182_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, qualifier_8)) goto event_1518_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1518_24_end: ;
}
void Frames::event_func_5278()
{
    // event 1519_24
    {
        if (!(group_main_engine_1)) goto event_1519_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1519_24_end: ;
}
void Frames::event_func_5279()
{
    // event 1520_24
    {
        if (!(group_main_engine_1)) goto event_1520_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1520_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.25-(((Active*)*it)->alterables->flags.get(1)*0.2), 12));
        }
    }
    event_1520_24_end: ;
}
void Frames::event_func_5280()
{
    // event 1521_24
    bool or_result_1521_24 = false;
    bool or_temp_result_1521_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1521_24_0_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1521_24_0_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1521_24_0_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1521_24_0_end;
        or_result_1521_24 = true;
        or_temp_result_1521_24_0 = true;
    }
    or_event_1521_24_0_end: ;
    enemyslug_1182_instances.clear_saved_selection();
    masterlevel_37_instances.clear_saved_selection();
    if (or_temp_result_1521_24_0) {
        enemyslug_1182_instances.save_selection();
        masterlevel_37_instances.save_selection();
    }
    // event 1521_24
    bool or_temp_result_1521_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1521_24_1_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1521_24_1_end;
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!masterlevel_37_instances.has_selection()) goto or_event_1521_24_1_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1521_24_1_end;
        or_result_1521_24 = true;
        or_temp_result_1521_24_1 = true;
        or_event_1521_24_1_end: ;
        if (or_temp_result_1521_24_1) {
            enemyslug_1182_instances.save_selection();
            masterlevel_37_instances.save_selection();
        }
        if (!or_result_1521_24) goto or_final_or_event_1521_24_1_end;
        enemyslug_1182_instances.empty_selection();
        masterlevel_37_instances.empty_selection();
        if (or_temp_result_1521_24_0 || or_temp_result_1521_24_1) {
            enemyslug_1182_instances.restore_selection();
        }
        if (or_temp_result_1521_24_0 || or_temp_result_1521_24_1) {
            masterlevel_37_instances.restore_selection();
        }
        FrameObject * single_instance_1521_24_0; single_instance_1521_24_0 = NULL;
        // select single: true false false
        playerstartingpoint_358_instances.clear_selection();
        for (ObjectIterator p_it(playerstartingpoint_358_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1521_24_0 == NULL)
                    single_instance_1521_24_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        ((Active*)((Active*)single_instance_1521_24_0))->set_x(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1521_24_0))->set_y(((Active*)get_single(masterlevel_37_instances, default_active_instance))->alterables->values.get(2));
    }
    or_final_or_event_1521_24_1_end: ;
}
void Frames::event_func_5281()
{
    // event 1522_24
    {
        if (!(group_main_engine_1)) goto event_1522_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1522_24_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1522_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1522_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1522_24_end: ;
}
void Frames::event_func_5282()
{
    // event 1523_24
    {
        if (!(group_main_engine_1)) goto event_1523_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1523_24_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1523_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1523_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1523_24_end: ;
}
void Frames::event_func_5283()
{
    // event 1524_24
    {
        if (!(group_main_engine_1)) goto event_1524_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1524_24_end;
        if (!(test_obstacle(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(0)-4, ((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(3)-8))) goto event_1524_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1524_24_end: ;
}
void Frames::event_func_5284()
{
    // event 1525_24
    {
        if (!(group_main_engine_1)) goto event_1525_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1525_24_end;
        if (!(test_obstacle(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(2)+4, ((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(3)-8))) goto event_1525_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1525_24_end: ;
}
void Frames::event_func_5285()
{
    // event 1527_24
    bool or_result_1527_24 = false;
    bool or_temp_result_1527_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1527_24_0_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1527_24_0_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, yellowspringupleft_432_instances)) goto or_event_1527_24_0_end;
        or_result_1527_24 = true;
        or_temp_result_1527_24_0 = true;
    }
    or_event_1527_24_0_end: ;
    enemyslug_1182_instances.clear_saved_selection();
    yellowspringupleft_432_instances.clear_saved_selection();
    if (or_temp_result_1527_24_0) {
        enemyslug_1182_instances.save_selection();
        yellowspringupleft_432_instances.save_selection();
    }
    // event 1527_24
    bool or_temp_result_1527_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1527_24_1_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1527_24_1_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, yellowspringupright_433_instances)) goto or_event_1527_24_1_end;
        or_result_1527_24 = true;
        or_temp_result_1527_24_1 = true;
        or_event_1527_24_1_end: ;
        yellowspringupright_433_instances.clear_saved_selection();
        if (or_temp_result_1527_24_1) {
            yellowspringupright_433_instances.save_selection();
            enemyslug_1182_instances.save_selection();
        }
        if (!or_result_1527_24) goto or_final_or_event_1527_24_1_end;
        yellowspringupright_433_instances.empty_selection();
        yellowspringupleft_432_instances.empty_selection();
        enemyslug_1182_instances.empty_selection();
        if (or_temp_result_1527_24_1) {
            yellowspringupright_433_instances.restore_selection();
        }
        if (or_temp_result_1527_24_0 || or_temp_result_1527_24_1) {
            enemyslug_1182_instances.restore_selection();
        }
        if (or_temp_result_1527_24_0) {
            yellowspringupleft_432_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
    }
    or_final_or_event_1527_24_1_end: ;
}
void Frames::event_func_5286()
{
    // event 1528_24
    {
        if (!(group_main_engine_1)) goto event_1528_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1528_24_end;
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, yellowspringupleft_432_instances)) goto event_1528_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
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
    event_1528_24_end: ;
}
void Frames::event_func_5287()
{
    // event 1529_24
    {
        if (!(group_main_engine_1)) goto event_1529_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1529_24_end;
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, yellowspringupright_433_instances)) goto event_1529_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
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
    event_1529_24_end: ;
}
void Frames::event_func_5288()
{
    // event 1530_24
    {
        if (!(group_main_engine_1)) goto event_1530_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1530_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1530_24_end: ;
}
void Frames::event_func_5289()
{
    // event 1531_24
    {
        if (!(group_main_engine_1)) goto event_1531_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1531_24_end;
        {
            loop_slug_floor_running = true;
            int times = int(get_max(get_ceil(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->alterables->values.get(5)), 2));
            loop_slug_floor_index = 0;
            while (loop_slug_floor_index < times) {
                loop_slug_floor_24();
                if (!loop_slug_floor_running) break;
                loop_slug_floor_index++;
            }
        }
    }
    event_1531_24_end: ;
}
void Frames::event_func_5290()
{
    // event 1535_24
    {
        if (!(group_main_engine_1)) goto event_1535_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1535_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1535_24_end: ;
}
void Frames::event_func_5291()
{
    // event 1536_24
    {
        if (!(group_main_engine_1)) goto event_1536_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1536_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1536_24_end: ;
}
void Frames::event_func_5292()
{
    // event 1537_24
    {
        if (!(group_main_engine_1)) goto event_1537_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1537_24_end;
        if (test_obstacle(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(0)-2, ((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(3)+2)) goto event_1537_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
        }
    }
    event_1537_24_end: ;
}
void Frames::event_func_5293()
{
    // event 1538_24
    {
        if (!(group_main_engine_1)) goto event_1538_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1538_24_end;
        if (test_obstacle(((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(2)+2, ((Active*)get_single(enemyslug_1182_instances, default_active_instance))->get_box_index(3)+2)) goto event_1538_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
        }
    }
    event_1538_24_end: ;
}
void Frames::event_func_5294()
{
    // event 1540_24
    {
        if (!(group_main_engine_1)) goto event_1540_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1540_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -90);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1540_24_end: ;
}
void Frames::event_func_5295()
{
    // event 1541_24
    {
        if (!(group_main_engine_1)) goto event_1541_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1541_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -90);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1541_24_end: ;
}
void Frames::event_func_5296()
{
    // event 1542_24
    {
        if (!(group_main_engine_1)) goto event_1542_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1542_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1542_24_end: ;
}
void Frames::event_func_5297()
{
    // event 1543_24
    {
        if (!(group_main_engine_1)) goto event_1543_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1543_24_end;
        FrameObject * single_instance_1543_24_0; single_instance_1543_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslug_1182_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyfiresprite_1095(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1543_24_0 == NULL)
                    single_instance_1543_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1543_24_0))->set_direction(2+((Active*)get_single(enemyslug_1182_instances, default_active_instance))->alterables->values.get(9));
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 2);
        }
        media.stop_sample(SOUND_SLUG_ATTACK_59);
        media.play_id(SOUND_SLUG_ATTACK_59, -1, 1);
        ((Active*)((Active*)single_instance_1543_24_0))->get_movement()->set_speed(((Active*)single_instance_1543_24_0)->get_movement()->get_speed()-((Active*)get_single(enemyslug_1182_instances, default_active_instance))->alterables->values.get(9)*1.5);
    }
    event_1543_24_end: ;
}
void Frames::event_func_5298()
{
    // event 1544_24
    {
        if (!(group_main_engine_1)) goto event_1544_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1544_24_end;
        FrameObject * single_instance_1544_24_0; single_instance_1544_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslug_1182_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyfiresprite_1095(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1544_24_0 == NULL)
                    single_instance_1544_24_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1544_24_0))->set_direction(14-((Active*)get_single(enemyslug_1182_instances, default_active_instance))->alterables->values.get(9));
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 2);
        }
        media.stop_sample(SOUND_SLUG_ATTACK_59);
        media.play_id(SOUND_SLUG_ATTACK_59, -1, 1);
        ((Active*)((Active*)single_instance_1544_24_0))->get_movement()->set_speed(((Active*)single_instance_1544_24_0)->get_movement()->get_speed()-((Active*)get_single(enemyslug_1182_instances, default_active_instance))->alterables->values.get(9)*1.5);
    }
    event_1544_24_end: ;
}
void Frames::event_func_5299()
{
    // event 1545_24
    {
        if (!(group_main_engine_1)) goto event_1545_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1545_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1545_24_end: ;
}
void Frames::event_func_5300()
{
    // event 1546_24
    {
        if (!(group_main_engine_1)) goto event_1546_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1546_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1546_24_end: ;
}
void Frames::event_func_5301()
{
    // event 1547_24
    {
        if (!(group_main_engine_1)) goto event_1547_24_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto event_1547_24_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1547_24_end: ;
}
void Frames::event_func_5302()
{
    // event 1548_24
    bool or_result_1548_24 = false;
    bool or_temp_result_1548_24_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_24_0_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1548_24_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyslug_1182_instances, qualifier_7)) goto or_event_1548_24_0_end;
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1548_24_0_end;
        or_result_1548_24 = true;
        or_temp_result_1548_24_0 = true;
    }
    or_event_1548_24_0_end: ;
    enemyslug_1182_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1548_24_0) {
        enemyslug_1182_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1548_24
    bool or_temp_result_1548_24_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_24_1_end;
        enemyslug_1182_instances.clear_selection();
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslug_1182_instances.has_selection()) goto or_event_1548_24_1_end;
        or_result_1548_24 = true;
        or_temp_result_1548_24_1 = true;
        or_event_1548_24_1_end: ;
        if (or_temp_result_1548_24_1) {
            enemyslug_1182_instances.save_selection();
        }
        if (!or_result_1548_24) goto or_final_or_event_1548_24_1_end;
        enemyslug_1182_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1548_24_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1548_24_0 || or_temp_result_1548_24_1) {
            enemyslug_1182_instances.restore_selection();
        }
        for (ObjectIterator it(enemyslug_1182_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1548_24_0; single_instance_1548_24_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslug_1182_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1548_24_0 == NULL)
                    single_instance_1548_24_0 = new_obj;
            }
        }
        FrameObject * single_instance_1548_24_1; single_instance_1548_24_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslug_1182_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1548_24_1 == NULL)
                    single_instance_1548_24_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1548_24_1_end: ;
}
void Frames::event_func_5303()
{
    // event 1549_24
    {
        if (!(group_main_engine_1)) goto event_1549_24_end;
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemyfiresprite_1095_instances.has_selection()) goto event_1549_24_end;
        media.play_id(SOUND_ZAPPER_60, -1, 1);
    }
    event_1549_24_end: ;
}
void Frames::event_func_5304()
{
    // event 1550_24
    {
        if (!(group_main_engine_1)) goto event_1550_24_end;
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemyfiresprite_1095_instances.has_selection()) goto event_1550_24_end;
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1550_24_end: ;
}
void Frames::event_func_5305()
{
    // event 1551_24
    {
        if (!(group_main_engine_1)) goto event_1551_24_end;
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!enemyfiresprite_1095_instances.has_selection()) goto event_1551_24_end;
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1551_24_end: ;
}
void Frames::event_func_5306()
{
    // event 1552_24
    {
        if (!(group_main_engine_1)) goto event_1552_24_end;
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (64))) { it.deselect(); continue; }
        }
        if (!enemyfiresprite_1095_instances.has_selection()) goto event_1552_24_end;
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1552_24_end: ;
}
void Frames::event_func_5307()
{
    // event 1553_24
    {
        if (!(group_main_engine_1)) goto event_1553_24_end;
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemyfiresprite_1095_instances.has_selection()) goto event_1553_24_end;
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1553_24_end: ;
}
