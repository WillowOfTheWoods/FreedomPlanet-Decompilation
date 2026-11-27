#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11880()
{
    // event 20_51
    {
        if (!(group_main_engine_1)) goto event_20_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_20_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(13, 1);
        }
    }
    event_20_51_end: ;
}
void Frames::event_func_11881()
{
    // event 21_51
    {
        if (!(group_main_engine_1)) goto event_21_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_21_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(9))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(9))*((Active*)*it)->alterables->values.get(2)*-1);
            ((Active*)*it)->alterables->values.sub(9, 0.4);
        }
    }
    event_21_51_end: ;
}
void Frames::event_func_11882()
{
    // event 24_51
    {
        if (!(group_main_engine_1)) goto event_24_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_24_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (99))) goto event_24_51_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, cos_deg(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(9))*((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, sin_deg(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(9))*((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->alterables->values.get(2)*-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_24_51_end: ;
}
void Frames::event_func_11883()
{
    // event 25_51
    {
        if (!(group_main_engine_1)) goto event_25_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickbowarrow_2979_instances.has_selection()) goto event_25_51_end;
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 4);
        }
        FrameObject * single_instance_25_51_0; single_instance_25_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickbowarrow_2979_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickbowarrowplatform_2970(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_25_51_0 == NULL)
                    single_instance_25_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_25_51_0))->set_angle(((Active*)get_single(gimmickbowarrow_2979_instances, default_active_instance))->get_angle(), 0);
        media.play_id(SOUND_ARROW_LAND_328, -1, 1);
    }
    event_25_51_end: ;
}
void Frames::event_func_11884()
{
    // event 1474_51
    {
        if (!(group_main_engine_1)) goto event_1474_51_end;
        breakableplrock_2987_instances.clear_selection();
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1474_51_end: ;
}
void Frames::event_func_11885()
{
    // event 1475_51
    bool or_result_1475_51 = false;
    bool or_temp_result_1475_51_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1475_51_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1475_51_0_end;
        or_result_1475_51 = true;
        or_temp_result_1475_51_0 = true;
    }
    or_event_1475_51_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1475_51_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1475_51
    bool or_temp_result_1475_51_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1475_51_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1475_51_1_end;
        or_result_1475_51 = true;
        or_temp_result_1475_51_1 = true;
    }
    or_event_1475_51_1_end: ;
    if (or_temp_result_1475_51_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1475_51
    bool or_temp_result_1475_51_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1475_51_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1475_51_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) > (5))) goto or_event_1475_51_2_end;
        or_result_1475_51 = true;
        or_temp_result_1475_51_2 = true;
        or_event_1475_51_2_end: ;
        if (or_temp_result_1475_51_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1475_51) goto or_final_or_event_1475_51_2_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1475_51_0 || or_temp_result_1475_51_1 || or_temp_result_1475_51_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakableplrock_2987_instances.clear_selection();
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1475_51_2_end: ;
}
void Frames::event_func_11886()
{
    // event 1477_51
    bool or_result_1477_51 = false;
    bool or_temp_result_1477_51_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1477_51_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1477_51_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1477_51_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakableplrock_2987_instances)) goto or_event_1477_51_0_end;
        or_result_1477_51 = true;
        or_temp_result_1477_51_0 = true;
    }
    or_event_1477_51_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    breakableplrock_2987_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1477_51_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableplrock_2987_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1477_51
    bool or_temp_result_1477_51_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1477_51_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1477_51_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1477_51_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakableplrock_2987_instances)) goto or_event_1477_51_1_end;
        or_result_1477_51 = true;
        or_temp_result_1477_51_1 = true;
    }
    or_event_1477_51_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1477_51_1) {
        playersensorrightbig_393_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableplrock_2987_instances.save_selection();
    }
    // event 1477_51
    bool or_temp_result_1477_51_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1477_51_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakableplrock_2987_instances)) goto or_event_1477_51_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1477_51_2_end;
        or_result_1477_51 = true;
        or_temp_result_1477_51_2 = true;
    }
    or_event_1477_51_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1477_51_2) {
        breakableplrock_2987_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1477_51
    bool or_temp_result_1477_51_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1477_51_3_end;
        playerreflect_447_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakableplrock_2987_instances)) goto or_event_1477_51_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1477_51_3_end;
        or_result_1477_51 = true;
        or_temp_result_1477_51_3 = true;
    }
    or_event_1477_51_3_end: ;
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1477_51_3) {
        breakableplrock_2987_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1477_51
    bool or_temp_result_1477_51_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1477_51_4_end;
        thunderspark_339_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakableplrock_2987_instances)) goto or_event_1477_51_4_end;
        or_result_1477_51 = true;
        or_temp_result_1477_51_4 = true;
        or_event_1477_51_4_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1477_51_4) {
            thunderspark_339_instances.save_selection();
            breakableplrock_2987_instances.save_selection();
        }
        if (!or_result_1477_51) goto or_final_or_event_1477_51_4_end;
        playersensorrightbig_393_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        breakableplrock_2987_instances.empty_selection();
        thunderspark_339_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1477_51_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1477_51_0 || or_temp_result_1477_51_1 || or_temp_result_1477_51_2 || or_temp_result_1477_51_3 || or_temp_result_1477_51_4) {
            breakableplrock_2987_instances.restore_selection();
        }
        if (or_temp_result_1477_51_0 || or_temp_result_1477_51_1 || or_temp_result_1477_51_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1477_51_4) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1477_51_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1477_51_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1477_51_0 || or_temp_result_1477_51_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1477_51_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1477_51_4_end: ;
}
void Frames::event_func_11887()
{
    // event 1478_51
    bool or_result_1478_51 = false;
    bool or_temp_result_1478_51_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1478_51_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1478_51_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1478_51_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakableplrock_2987_instances)) goto or_event_1478_51_0_end;
        or_result_1478_51 = true;
        or_temp_result_1478_51_0 = true;
    }
    or_event_1478_51_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakableplrock_2987_instances.clear_saved_selection();
    if (or_temp_result_1478_51_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableplrock_2987_instances.save_selection();
    }
    // event 1478_51
    bool or_temp_result_1478_51_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1478_51_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1478_51_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1478_51_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakableplrock_2987_instances)) goto or_event_1478_51_1_end;
        or_result_1478_51 = true;
        or_temp_result_1478_51_1 = true;
        or_event_1478_51_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1478_51_1) {
            playerothers_123_instances.save_selection();
            breakableplrock_2987_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_1478_51) goto or_final_or_event_1478_51_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakableplrock_2987_instances.empty_selection();
        if (or_temp_result_1478_51_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1478_51_0 || or_temp_result_1478_51_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1478_51_0 || or_temp_result_1478_51_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1478_51_0 || or_temp_result_1478_51_1) {
            breakableplrock_2987_instances.restore_selection();
        }
        if (or_temp_result_1478_51_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1478_51_1_end: ;
}
void Frames::event_func_11888()
{
    // event 1479_51
    {
        if (!(group_main_engine_1)) goto event_1479_51_end;
        monitoricon_331_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakableplrock_2987_instances)) goto event_1479_51_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1479_51_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1479_51_end: ;
}
void Frames::event_func_11889()
{
    // event 1480_51
    {
        if (!(group_main_engine_1)) goto event_1480_51_end;
        breakableplrock_2987_instances.clear_selection();
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakableplrock_2987_instances.has_selection()) goto event_1480_51_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakableplrock_2987_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakableplrockpiece_2971_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakableplrock_2987_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 12, parent->y + 12), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 30, parent->y + 16), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 21, parent->y + 35), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 15, parent->y + 52), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableplrockpiece_2971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakableplrock_2987_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakableplrock_2987_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        // select single: false true true
        for (ObjectIterator p_it(breakableplrock_2987_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 32, parent->y + 63), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 15, parent->y + 84), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 34, parent->y + 97), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableplrockpiece_2971(parent->x + 23, parent->y + 117), parent->layer);
                breakableplrockpiece_2971_instances.add_back();
            }
        }
    }
    event_1480_51_end: ;
}
void Frames::event_func_11890()
{
    // event 1481_51
    {
        if (!(group_main_engine_1)) goto event_1481_51_end;
        breakableplrockpiece_2971_instances.clear_selection();
        for (ObjectIterator it(breakableplrockpiece_2971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1481_51_end: ;
}
void Frames::event_func_11891()
{
    // event 1482_51
    {
        if (!(group_main_engine_1)) goto event_1482_51_end;
        breakableplrockpiece_2971_instances.clear_selection();
        for (ObjectIterator it(breakableplrockpiece_2971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakableplrockpiece_2971_instances.has_selection()) goto event_1482_51_end;
        for (ObjectIterator it(breakableplrockpiece_2971_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1482_51_end: ;
}
void Frames::event_func_11892()
{
    // event 1583_51
    {
        if (!(group_main_engine_1)) goto event_1583_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)-16+cos_deg(((Active*)*it)->alterables->values.get(9))*24);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(10+cos_deg(((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*-20, 0));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(-10+cos_deg(((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*20, 0));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(frame_left()+20, get_min(((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->get_x(), frame_left()+global_values->get(16)-20)));
            ((Active*)*it)->alterables->values.set(1, get_max(frame_top()+20, get_min(((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->get_y(), frame_top()+global_values->get(17)-20)));
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1583_51_end: ;
}
void Frames::event_func_11893()
{
    // event 1584_51
    {
        if (!(group_main_engine_1)) goto event_1584_51_end;
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (7))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftleg_2983_instances.has_selection()) goto event_1584_51_end;
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(4)-32-cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*16);
            ((Active*)*it)->set_y(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
    }
    event_1584_51_end: ;
}
void Frames::event_func_11894()
{
    // event 1585_51
    {
        if (!(group_main_engine_1)) goto event_1585_51_end;
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (7))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightleg_2984_instances.has_selection()) goto event_1585_51_end;
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(4)+32+cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*16);
            ((Active*)*it)->set_y(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
    }
    event_1585_51_end: ;
}
void Frames::event_func_11895()
{
    // event 1586_51
    {
        if (!(group_main_engine_1)) goto event_1586_51_end;
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (7))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftshoulder_2981_instances.has_selection()) goto event_1586_51_end;
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(4)-16-cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*8);
            ((Active*)*it)->set_y(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(5)+cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*8);
        }
    }
    event_1586_51_end: ;
}
void Frames::event_func_11896()
{
    // event 1587_51
    {
        if (!(group_main_engine_1)) goto event_1587_51_end;
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (7))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightshoulder_2982_instances.has_selection()) goto event_1587_51_end;
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(4)+16+cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*8);
            ((Active*)*it)->set_y(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(5)+cos_deg(((Active*)get_instance(enemyterreon_2985_instances, it.current_index, default_active_instance))->alterables->values.get(9))*8);
        }
    }
    event_1587_51_end: ;
}
void Frames::event_func_11897()
{
    // event 1588_51
    {
        if (!(group_main_engine_1)) goto event_1588_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1588_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 1);
        }
    }
    event_1588_51_end: ;
}
void Frames::event_func_11898()
{
    // event 1589_51
    {
        if (!(group_main_engine_1)) goto event_1589_51_end;
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!effectterreonwarning_2986_instances.has_selection()) goto event_1589_51_end;
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1589_51_end: ;
}
void Frames::event_func_11899()
{
    // event 1590_51
    {
        if (!(group_main_engine_1)) goto event_1590_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (120))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1590_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange(50));
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1590_51_end: ;
}
void Frames::event_func_11900()
{
    // event 1591_51
    {
        if (!(group_main_engine_1)) goto event_1591_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1591_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1591_51_end: ;
}
void Frames::event_func_11901()
{
    // event 1592_51
    {
        if (!(group_main_engine_1)) goto event_1592_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-1200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1592_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1592_51_end: ;
}
void Frames::event_func_11902()
{
    // event 1593_51
    {
        if (!(group_main_engine_1)) goto event_1593_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (15))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1593_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(10, -10-randrange(30));
        }
    }
    event_1593_51_end: ;
}
void Frames::event_func_11903()
{
    // event 1594_51
    {
        if (!(group_main_engine_1)) goto event_1594_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1594_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, (((Active*)*it)->alterables->values.get(9)+10)%math_helper%360);
        }
    }
    event_1594_51_end: ;
}
void Frames::event_func_11904()
{
    // event 1595_51
    {
        if (!(group_main_engine_1)) goto event_1595_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (240))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1595_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(7, -10);
            ((Active*)*it)->alterables->values.set(6, get_max(-15, get_min((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)*it)->alterables->values.get(4))*0.03, 15)));
        }
        media.play_id(SOUND_MANTALITH_JUMP_147, -1, 1);
    }
    event_1595_51_end: ;
}
void Frames::event_func_11905()
{
    // event 1596_51
    {
        if (!(group_main_engine_1)) goto event_1596_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1596_51_end;
        {
            SavedSelection extra_enemyterreon_2985_instances(enemyterreon_2985_instances);
            for (SavedIterator it(extra_enemyterreon_2985_instances); !it.end(); ++it) {
                foreach_instance_tr = ((Active*)*it);
                foreach_tr_51();
            }
        }
    }
    event_1596_51_end: ;
}
void Frames::event_func_11906()
{
    // event 1601_51
    {
        if (!(group_main_engine_1)) goto event_1601_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1601_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+10, 180));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.4, 15));
        }
    }
    event_1601_51_end: ;
}
void Frames::event_func_11907()
{
    // event 1605_51
    {
        if (!(group_main_engine_1)) goto event_1605_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1605_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, (((Active*)*it)->alterables->values.get(9)+10)%math_helper%360);
        }
    }
    event_1605_51_end: ;
}
void Frames::event_func_11908()
{
    // event 1606_51
    {
        if (!(group_main_engine_1)) goto event_1606_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (80))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1606_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 300);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1606_51_end: ;
}
void Frames::event_func_11909()
{
    // event 1607_51
    {
        if (!(group_main_engine_1)) goto event_1607_51_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_1607_51_end: ;
}
void Frames::event_func_11910()
{
    // event 1608_51
    {
        if (!(group_main_engine_1)) goto event_1608_51_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1608_51_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1608_51_end: ;
}
void Frames::event_func_11911()
{
    // event 1609_51
    {
        if (!(group_main_engine_1)) goto event_1609_51_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1609_51_end;
        if (!check_not_overlap(hazardshockwave_1524_instances, qualifier_7)) goto event_1609_51_end;
        if (!check_not_overlap(hazardshockwave_1524_instances, qualifier_8)) goto event_1609_51_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1609_51_end: ;
}
void Frames::event_func_11912()
{
    // event 1610_51
    {
        if (!(group_main_engine_1)) goto event_1610_51_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1610_51_end: ;
}
void Frames::event_func_11913()
{
    // event 1611_51
    {
        if (!(group_main_engine_1)) goto event_1611_51_end;
        hazardshockwave_1524_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardshockwave_1524_instances, playercharactersensor_383_instances)) goto event_1611_51_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1611_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1611_51_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1611_51_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(hazardshockwave_1524_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1611_51_end: ;
}
void Frames::event_func_11914()
{
    // event 1613_51
    {
        if (!(group_main_engine_1)) goto event_1613_51_end;
        enemyterreon_2985_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(enemyterreon_2985_instances, player_389_instances)) goto event_1613_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1613_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (26))) goto event_1613_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (99))) goto event_1613_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1613_51_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1613_51_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1613_51_end: ;
}
void Frames::event_func_11915()
{
    // event 1614_51
    {
        if (!(group_main_engine_1)) goto event_1614_51_end;
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (240))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftleg_2983_instances.has_selection()) goto event_1614_51_end;
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1614_51_end: ;
}
void Frames::event_func_11916()
{
    // event 1615_51
    {
        if (!(group_main_engine_1)) goto event_1615_51_end;
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (240))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightleg_2984_instances.has_selection()) goto event_1615_51_end;
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1615_51_end: ;
}
void Frames::event_func_11917()
{
    // event 1616_51
    {
        if (!(group_main_engine_1)) goto event_1616_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1616_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1616_51_end: ;
}
void Frames::event_func_11918()
{
    // event 1617_51
    {
        if (!(group_main_engine_1)) goto event_1617_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1617_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1617_51_end: ;
}
void Frames::event_func_11919()
{
    // event 1618_51
    {
        if (!(group_main_engine_1)) goto event_1618_51_end;
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftleg_2983_instances.has_selection()) goto event_1618_51_end;
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1618_51_end: ;
}
void Frames::event_func_11920()
{
    // event 1619_51
    {
        if (!(group_main_engine_1)) goto event_1619_51_end;
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftleg_2983_instances.has_selection()) goto event_1619_51_end;
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1619_51_end: ;
}
void Frames::event_func_11921()
{
    // event 1620_51
    {
        if (!(group_main_engine_1)) goto event_1620_51_end;
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightleg_2984_instances.has_selection()) goto event_1620_51_end;
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1620_51_end: ;
}
void Frames::event_func_11922()
{
    // event 1621_51
    {
        if (!(group_main_engine_1)) goto event_1621_51_end;
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightleg_2984_instances.has_selection()) goto event_1621_51_end;
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1621_51_end: ;
}
void Frames::event_func_11923()
{
    // event 1622_51
    {
        if (!(group_main_engine_1)) goto event_1622_51_end;
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftshoulder_2981_instances.has_selection()) goto event_1622_51_end;
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1622_51_end: ;
}
void Frames::event_func_11924()
{
    // event 1623_51
    {
        if (!(group_main_engine_1)) goto event_1623_51_end;
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftshoulder_2981_instances.has_selection()) goto event_1623_51_end;
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1623_51_end: ;
}
void Frames::event_func_11925()
{
    // event 1624_51
    {
        if (!(group_main_engine_1)) goto event_1624_51_end;
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightshoulder_2982_instances.has_selection()) goto event_1624_51_end;
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1624_51_end: ;
}
void Frames::event_func_11926()
{
    // event 1625_51
    {
        if (!(group_main_engine_1)) goto event_1625_51_end;
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightshoulder_2982_instances.has_selection()) goto event_1625_51_end;
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1625_51_end: ;
}
void Frames::event_func_11927()
{
    // event 1626_51
    {
        if (!(group_main_engine_1)) goto event_1626_51_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1626_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1626_51_end;
        FrameObject * single_instance_1626_51_0; single_instance_1626_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1626_51_0 == NULL)
                    single_instance_1626_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1626_51_0))->set_x(((Active*)single_instance_1626_51_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1626_51_0))->set_y(((Active*)single_instance_1626_51_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1626_51_1_end;
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
        dynamic_1626_51_1_end: ;
    }
    event_1626_51_end: ;
}
void Frames::event_func_11928()
{
    // event 1627_51
    {
        if (!(group_main_engine_1)) goto event_1627_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (12))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1627_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 7);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1627_51_0; single_instance_1627_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1627_51_0 == NULL)
                    single_instance_1627_51_0 = new_obj;
            }
        }
        FrameObject * single_instance_1627_51_1; single_instance_1627_51_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1627_51_1 == NULL)
                    single_instance_1627_51_1 = new_obj;
            }
        }
        FrameObject * single_instance_1627_51_2; single_instance_1627_51_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1627_51_2 == NULL)
                    single_instance_1627_51_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1627_51_1))->set_direction(1);
    }
    event_1627_51_end: ;
}
void Frames::event_func_11929()
{
    // event 1628_51
    {
        if (!(group_main_engine_1)) goto event_1628_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1628_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1628_51_0; single_instance_1628_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyterreondebris_2972(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1628_51_0 == NULL)
                    single_instance_1628_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1628_51_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1628_51_0))->alterables->values.set(0, -8);
        ((Active*)((Active*)single_instance_1628_51_0))->alterables->values.set(1, -6);
    }
    event_1628_51_end: ;
}
void Frames::event_func_11930()
{
    // event 1629_51
    {
        if (!(group_main_engine_1)) goto event_1629_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1629_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1629_51_0; single_instance_1629_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyterreondebris_2972(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1629_51_0 == NULL)
                    single_instance_1629_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1629_51_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1629_51_0))->alterables->values.set(0, -5);
    }
    event_1629_51_end: ;
}
void Frames::event_func_11931()
{
    // event 1630_51
    {
        if (!(group_main_engine_1)) goto event_1630_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1630_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1630_51_0; single_instance_1630_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyterreondebris_2972(parent->x + 40, parent->y + 0), parent->layer);
                if (single_instance_1630_51_0 == NULL)
                    single_instance_1630_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1630_51_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1630_51_0))->alterables->values.set(0, 8);
        ((Active*)((Active*)single_instance_1630_51_0))->alterables->values.set(1, -6);
    }
    event_1630_51_end: ;
}
void Frames::event_func_11932()
{
    // event 1631_51
    {
        if (!(group_main_engine_1)) goto event_1631_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1631_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1631_51_0; single_instance_1631_51_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyterreon_2985_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyterreondebris_2972(parent->x + 40, parent->y + 0), parent->layer);
                if (single_instance_1631_51_0 == NULL)
                    single_instance_1631_51_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1631_51_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1631_51_0))->alterables->values.set(0, 5);
    }
    event_1631_51_end: ;
}
void Frames::event_func_11933()
{
    // event 1632_51
    {
        if (!(group_main_engine_1)) goto event_1632_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (3))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1632_51_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1632_51_end: ;
}
void Frames::event_func_11934()
{
    // event 1633_51
    {
        if (!(group_main_engine_1)) goto event_1633_51_end;
        if (!((enemyterreonleftleg_2983_instances.size()) > (enemyterreon_2985_instances.size()))) goto event_1633_51_end;
        enemyterreonleftleg_2983_instances.clear_selection();
        FrameObject * single_instance_1633_51_0; single_instance_1633_51_0 = pick_random(enemyterreonleftleg_2983_instances);
        if (single_instance_1633_51_0 == NULL) goto event_1633_51_end;
        ((Active*)((Active*)single_instance_1633_51_0))->destroy();
    }
    event_1633_51_end: ;
}
void Frames::event_func_11935()
{
    // event 1634_51
    {
        if (!(group_main_engine_1)) goto event_1634_51_end;
        if (!((enemyterreonrightleg_2984_instances.size()) > (enemyterreon_2985_instances.size()))) goto event_1634_51_end;
        enemyterreonrightleg_2984_instances.clear_selection();
        FrameObject * single_instance_1634_51_0; single_instance_1634_51_0 = pick_random(enemyterreonrightleg_2984_instances);
        if (single_instance_1634_51_0 == NULL) goto event_1634_51_end;
        ((Active*)((Active*)single_instance_1634_51_0))->destroy();
    }
    event_1634_51_end: ;
}
void Frames::event_func_11936()
{
    // event 1635_51
    {
        if (!(group_main_engine_1)) goto event_1635_51_end;
        if (!((enemyterreonleftshoulder_2981_instances.size()) > (enemyterreon_2985_instances.size()))) goto event_1635_51_end;
        enemyterreonleftshoulder_2981_instances.clear_selection();
        FrameObject * single_instance_1635_51_0; single_instance_1635_51_0 = pick_random(enemyterreonleftshoulder_2981_instances);
        if (single_instance_1635_51_0 == NULL) goto event_1635_51_end;
        ((Active*)((Active*)single_instance_1635_51_0))->destroy();
    }
    event_1635_51_end: ;
}
void Frames::event_func_11937()
{
    // event 1636_51
    {
        if (!(group_main_engine_1)) goto event_1636_51_end;
        if (!((enemyterreonrightshoulder_2982_instances.size()) > (enemyterreon_2985_instances.size()))) goto event_1636_51_end;
        enemyterreonrightshoulder_2982_instances.clear_selection();
        FrameObject * single_instance_1636_51_0; single_instance_1636_51_0 = pick_random(enemyterreonrightshoulder_2982_instances);
        if (single_instance_1636_51_0 == NULL) goto event_1636_51_end;
        ((Active*)((Active*)single_instance_1636_51_0))->destroy();
    }
    event_1636_51_end: ;
}
void Frames::event_func_11938()
{
    // event 1637_51
    {
        if (!(group_main_engine_1)) goto event_1637_51_end;
        if (!((effectterreonwarning_2986_instances.size()) > (enemyterreon_2985_instances.size()))) goto event_1637_51_end;
        effectterreonwarning_2986_instances.clear_selection();
        FrameObject * single_instance_1637_51_0; single_instance_1637_51_0 = pick_random(effectterreonwarning_2986_instances);
        if (single_instance_1637_51_0 == NULL) goto event_1637_51_end;
        ((Active*)((Active*)single_instance_1637_51_0))->destroy();
    }
    event_1637_51_end: ;
}
void Frames::event_func_11939()
{
    // event 1638_51
    {
        if (!(group_main_engine_1)) goto event_1638_51_end;
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.3, 15));
        }
    }
    event_1638_51_end: ;
}
void Frames::event_func_11940()
{
    // event 1639_51
    {
        if (!(group_main_engine_1)) goto event_1639_51_end;
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!enemyterreondebris_2972_instances.has_selection()) goto event_1639_51_end;
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1639_51_end: ;
}
void Frames::event_func_11941()
{
    // event 1653_51
    {
        if (!(group_main_engine_1)) goto event_1653_51_end;
        if (!((global_values->get(4)) < (2))) goto event_1653_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6936))) goto event_1653_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7136))) goto event_1653_51_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (444))) goto event_1653_51_end;
        global_values->set(4, 2);
        global_values->set(5, 6936);
        global_values->set(6, 414);
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
    event_1653_51_end: ;
}
void Frames::event_func_11942()
{
    // event 1862_51
    {
        if (!(group_pause_1)) goto event_1862_51_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1862_51_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1862_51_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1862_51_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1862_51_end;
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
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
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
        mastergroupsa_384_instances.clear_selection();
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
        yellowspringleft_436_instances.clear_selection();
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
        layer0loop_1742_instances.clear_selection();
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
        fdrotatingbarrier_3573_instances.clear_selection();
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
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_1862_51_end: ;
}
void Frames::event_func_11943()
{
    // event 1863_51
    bool or_result_1863_51 = false;
    bool or_temp_result_1863_51_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1863_51_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1863_51_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1863_51_0_end;
        or_result_1863_51 = true;
        or_temp_result_1863_51_0 = true;
    }
    or_event_1863_51_0_end: ;
    // event 1863_51
    bool or_temp_result_1863_51_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1863_51_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1863_51_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1863_51_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1863_51_1_end;
        or_result_1863_51 = true;
        or_temp_result_1863_51_1 = true;
        or_event_1863_51_1_end: ;
        if (!or_result_1863_51) goto or_final_or_event_1863_51_1_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1863_51_1_end: ;
}
void Frames::handle_frame_52_events()
{
    test_collisions_51();
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
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_11864();
    event_func_11865();
    event_func_11866();
    event_func_11867();
    event_func_11868();
    event_func_11869();
    event_func_11870();
    event_func_11871();
    event_func_11872();
    event_func_11873();
    event_func_11874();
    event_func_11875();
    event_func_11876();
    event_func_11877();
    event_func_11878();
    event_func_11879();
    event_func_11880();
    event_func_11881();
    event_func_11882();
    event_func_11883();
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
    event_func_5410();
    event_func_5411();
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
    event_func_11756();
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
    event_func_11757();
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
    event_func_11758();
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
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_11759();
    event_func_11760();
    event_func_11761();
    event_func_11762();
    event_func_11763();
    event_func_11764();
    event_func_11765();
    event_func_11766();
    event_func_11767();
    event_func_11768();
    event_func_11769();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_11770();
    event_func_11771();
    event_func_11772();
    event_func_11773();
    event_func_11774();
    event_func_11775();
    event_func_11776();
    event_func_11777();
    event_func_11778();
    event_func_11779();
    event_func_11780();
    event_func_11781();
    event_func_11884();
    event_func_11885();
    event_func_11886();
    event_func_11887();
    event_func_11888();
    event_func_11889();
    event_func_11890();
    event_func_11891();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_11782();
    event_func_11783();
    event_func_11784();
    event_func_11785();
    event_func_11786();
    event_func_11787();
    event_func_11788();
    event_func_11789();
    event_func_11790();
    event_func_11791();
    event_func_11792();
    event_func_11793();
    event_func_11794();
    event_func_11795();
    event_func_11796();
    event_func_11797();
    event_func_11798();
    event_func_11799();
    event_func_11800();
    event_func_11801();
    event_func_11802();
    event_func_11803();
    event_func_11804();
    event_func_11805();
    event_func_11806();
    event_func_11807();
    event_func_11808();
    event_func_11809();
    event_func_11810();
    event_func_11811();
    event_func_11812();
    event_func_11813();
    event_func_11814();
    event_func_11815();
    event_func_11816();
    event_func_11817();
    event_func_11818();
    event_func_11819();
    event_func_11820();
    event_func_11821();
    event_func_11822();
    event_func_11823();
    event_func_11824();
    event_func_11825();
    event_func_11826();
    event_func_11827();
    event_func_11828();
    event_func_11829();
    event_func_11830();
    event_func_11831();
    event_func_11832();
    event_func_11833();
    event_func_11834();
    event_func_11835();
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
    event_func_11892();
    event_func_11893();
    event_func_11894();
    event_func_11895();
    event_func_11896();
    event_func_11897();
    event_func_11898();
    event_func_11899();
    event_func_11900();
    event_func_11901();
    event_func_11902();
    event_func_11903();
    event_func_11904();
    event_func_11905();
    event_func_11906();
    event_func_11907();
    event_func_11908();
    event_func_11909();
    event_func_11910();
    event_func_11911();
    event_func_11912();
    event_func_11913();
    event_func_11914();
    event_func_11915();
    event_func_11916();
    event_func_11917();
    event_func_11918();
    event_func_11919();
    event_func_11920();
    event_func_11921();
    event_func_11922();
    event_func_11923();
    event_func_11924();
    event_func_11925();
    event_func_11926();
    event_func_11927();
    event_func_11928();
    event_func_11929();
    event_func_11930();
    event_func_11931();
    event_func_11932();
    event_func_11933();
    event_func_11934();
    event_func_11935();
    event_func_11936();
    event_func_11937();
    event_func_11938();
    event_func_11939();
    event_func_11940();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_11941();
    event_func_11837();
    event_func_11838();
    event_func_11839();
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
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
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
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
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
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_11942();
    event_func_11943();
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
void Frames::handle_frame_52_pre_events()
{
}
void Frames::event_func_11944()
{
    // event 2_51
    {
        if (!(group_main_engine_1)) goto event_2_51_end;
        gimmickbowarrow_2979_instances.clear_selection();
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        gimmickbowstring_2974_instances.clear_selection();
        spread_value(gimmickbowstring_2974_instances, 0, 0);
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%10);
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
        for (ObjectIterator it(gimmickbowarrow_2979_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(gimmickbowstring_2974_instances, 1, 0);
        for (ObjectIterator it(gimmickbowstring_2974_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_floor(((Active*)*it)->alterables->values.get(1)/math_helper/10));
        }
        spread_value(gimmickbowarrow_2979_instances, 12, 0);
    }
    event_2_51_end: ;
}
void Frames::event_func_11945()
{
    // event 27_51
    {
        if (!(group_main_engine_1)) goto event_27_51_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 83);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 33);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_27_51_end: ;
}
void Frames::event_func_11946()
{
    // event 44_51
    {
        if (!(group_main_engine_1)) goto event_44_51_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.92);
    }
    event_44_51_end: ;
}
void Frames::event_func_11947()
{
    // event 1582_51
    {
        if (!(group_main_engine_1)) goto event_1582_51_end;
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(8, randrange(60));
        }
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1582_51_end: ;
}
void Frames::event_func_11948()
{
    // event 1810_51
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1810_51_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1810_51_end: ;
}
void Frames::on_frame_52_start_events()
{
    event_func_11842();
    event_func_11944();
    event_func_4133();
    event_func_11945();
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
    event_func_11946();
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
    event_func_11845();
    event_func_9635();
    event_func_3275();
    event_func_11846();
    event_func_11847();
    event_func_11848();
    event_func_11849();
    event_func_11850();
    event_func_11947();
    event_func_2686();
    event_func_2687();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_11948();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_52_init()
{
    index = 51;
    width = 12816;
    height = 1864;
    virtual_width = 12816;
    virtual_height = 1864;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickbridgelog_412_instances, &levellagoonplatform1_2967_instances, &gimmickbowarrowplatform_2970_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickbridgelog_412_instances, &levellagoonplatform1_2967_instances, &gimmickbowarrowplatform_2970_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemycacteon_990_instances, &enemystinger_2891_instances, &enemysunflora_2960_instances, &enemystingernest_2961_instances, &enemyterreonleftleg_2983_instances, &enemyterreonrightleg_2984_instances, &enemyterreon_2985_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece3_468_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(6, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &pllayer11_2957_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, &pllayer12_2964_instances, &breakableplrock_2987_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemycacteon_990_instances, &objecttimegatepiece_2966_instances, NULL};
    qualifier_4.set(36, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer01_2958_instances, &pllayer02_2959_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &pllayer11_2957_instances, &pllayer12_2964_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levellagoonplatform1_2967_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_12.set(4, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levellagoonplatform1_2967_instances, &levellagoonplatform2_2980_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2884(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2885(0, 120), 0);
    add_background_object(create_levelparallaxpiece2_2886(0, 40), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 144), 0);
    add_background_object(create_levelparallaxpiece5_2887(0, 136), 0);
    add_background_object(create_levelparallaxpiece6_2888(0, 136), 0);
    add_background_object(create_plbackwall7_2892(112, 1280), 1);
    add_background_object(create_plbackwall7_2892(176, 1120), 1);
    add_background_object(create_plbackwall7_2892(48, 1440), 1);
    add_background_object(create_plbackwall7_2892(240, 960), 1);
    add_background_object(create_plbackwall7_2892(304, 800), 1);
    add_background_object(create_plbackwall7_2892(368, 640), 1);
    add_background_object(create_plbackwall7_2892(432, 480), 1);
    add_background_object(create_plbackwall7_2892(496, 320), 1);
    add_background_object(create_plbackwall7_2892(560, 160), 1);
    add_background_object(create_plbackwall9_2893(560, 0), 1);
    add_background_object(create_plbackwall7_2892(392, 1280), 1);
    add_background_object(create_plbackwall7_2892(456, 1120), 1);
    add_background_object(create_plbackwall7_2892(328, 1440), 1);
    add_background_object(create_plbackwall7_2892(520, 960), 1);
    add_background_object(create_plbackwall7_2892(584, 800), 1);
    add_background_object(create_plbackwall7_2892(648, 640), 1);
    add_background_object(create_plbackwall7_2892(712, 480), 1);
    add_background_object(create_plbackwall7_2892(776, 320), 1);
    add_background_object(create_plbackwall7_2892(840, 160), 1);
    add_background_object(create_plbackwall9_2893(840, 0), 1);
    add_background_object(create_plbackwall7_2892(672, 1280), 1);
    add_background_object(create_plbackwall7_2892(736, 1120), 1);
    add_background_object(create_plbackwall7_2892(608, 1440), 1);
    add_background_object(create_plbackwall7_2892(800, 960), 1);
    add_background_object(create_plbackwall7_2892(864, 800), 1);
    add_background_object(create_plbackwall7_2892(928, 640), 1);
    add_background_object(create_plbackwall7_2892(992, 480), 1);
    add_background_object(create_plbackwall7_2892(1056, 320), 1);
    add_background_object(create_plbackwall7_2892(1120, 160), 1);
    add_background_object(create_plbackwall9_2893(1120, 0), 1);
    add_background_object(create_plbackwall7_2892(944, 1280), 1);
    add_background_object(create_plbackwall7_2892(1008, 1120), 1);
    add_background_object(create_plbackwall7_2892(880, 1440), 1);
    add_background_object(create_plbackwall7_2892(1072, 960), 1);
    add_background_object(create_plbackwall7_2892(1136, 800), 1);
    add_background_object(create_plbackwall7_2892(1200, 640), 1);
    add_background_object(create_plbackwall7_2892(1264, 480), 1);
    add_background_object(create_plbackwall7_2892(1328, 320), 1);
    add_background_object(create_plbackwall7_2892(1392, 160), 1);
    add_background_object(create_plbackwall9_2893(1368, 1440), 1);
    add_background_object(create_plbackwall9_2893(1304, 1280), 1);
    add_background_object(create_plbackwall7_2892(1304, 1120), 1);
    add_background_object(create_plbackwall9_2893(1304, 960), 1);
    add_background_object(create_plbackwall7_2892(1304, 800), 1);
    add_background_object(create_plbackwall7_2892(1368, 640), 1);
    add_background_object(create_plbackwall7_2892(1432, 480), 1);
    add_background_object(create_plbackwall9_2893(1432, 320), 1);
    add_background_object(create_plbackwall9_2893(1368, 160), 1);
    add_background_object(create_plbackwall7_2892(1456, 0), 1);
    add_background_object(create_plbackwall7_2892(1368, 0), 1);
    add_background_object(create_plbackwall9_2893(1720, 1440), 1);
    add_background_object(create_plbackwall9_2893(1656, 1280), 1);
    add_background_object(create_plbackwall7_2892(1656, 1120), 1);
    add_background_object(create_plbackwall9_2893(1656, 960), 1);
    add_background_object(create_plbackwall7_2892(1656, 800), 1);
    add_background_object(create_plbackwall7_2892(1720, 640), 1);
    add_background_object(create_plbackwall7_2892(1784, 480), 1);
    add_background_object(create_plbackwall9_2893(1784, 320), 1);
    add_background_object(create_plbackwall9_2893(1720, 160), 1);
    add_background_object(create_plbackwall7_2892(1720, 0), 1);
    add_background_object(create_plbackwall7_2892(1912, 1440), 1);
    add_background_object(create_plbackwall7_2892(1976, 1280), 1);
    add_background_object(create_plbackwall7_2892(2040, 1120), 1);
    add_background_object(create_plbackwall9_2893(2040, 960), 1);
    add_background_object(create_plbackwall7_2892(2040, 800), 1);
    add_background_object(create_plbackwall9_2893(2040, 640), 1);
    add_background_object(create_plbackwall7_2892(2040, 480), 1);
    add_background_object(create_plbackwall7_2892(2104, 320), 1);
    add_background_object(create_plbackwall9_2893(2104, 160), 1);
    add_background_object(create_plbackwall9_2893(2040, 0), 1);
    add_background_object(create_plbackwall9_2893(2456, 1440), 1);
    add_background_object(create_plbackwall7_2892(2456, 640), 1);
    add_background_object(create_plbackwall7_2892(2520, 480), 1);
    add_background_object(create_plbackwall9_2893(2520, 320), 1);
    add_background_object(create_plbackwall9_2893(2456, 160), 1);
    add_background_object(create_plbackwall7_2892(2456, 0), 1);
    add_background_object(create_plbackwall9_2893(2808, 1440), 1);
    add_background_object(create_plbackwall9_2893(2744, 1280), 1);
    add_background_object(create_plbackwall7_2892(2744, 1120), 1);
    add_background_object(create_plbackwall9_2893(2744, 960), 1);
    add_background_object(create_plbackwall7_2892(2744, 800), 1);
    add_background_object(create_plbackwall7_2892(2808, 640), 1);
    add_background_object(create_plbackwall7_2892(2872, 480), 1);
    add_background_object(create_plbackwall9_2893(2872, 320), 1);
    add_background_object(create_plbackwall9_2893(2808, 160), 1);
    add_background_object(create_plbackwall7_2892(2808, 0), 1);
    add_background_object(create_plbackwall7_2892(3064, 1280), 1);
    add_background_object(create_plbackwall7_2892(3128, 1120), 1);
    add_background_object(create_plbackwall9_2893(3128, 960), 1);
    add_background_object(create_plbackwall7_2892(3128, 800), 1);
    add_background_object(create_plbackwall9_2893(3128, 640), 1);
    add_background_object(create_plbackwall7_2892(3128, 480), 1);
    add_background_object(create_plbackwall7_2892(3192, 320), 1);
    add_background_object(create_plbackwall9_2893(3192, 160), 1);
    add_background_object(create_plbackwall9_2893(3128, 0), 1);
    add_background_object(create_plbackwall9_2893(2392, 1280), 1);
    add_background_object(create_plbackwall7_2892(2392, 1120), 1);
    add_background_object(create_plbackwall9_2893(2392, 960), 1);
    add_background_object(create_plbackwall7_2892(2392, 800), 1);
    add_background_object(create_plbackwall9_2893(3064, 1440), 1);
    add_background_object(create_plbackwall9_2893(3488, 1440), 1);
    add_background_object(create_plbackwall7_2892(3488, 640), 1);
    add_background_object(create_plbackwall7_2892(3552, 480), 1);
    add_background_object(create_plbackwall9_2893(3552, 320), 1);
    add_background_object(create_plbackwall9_2893(3488, 160), 1);
    add_background_object(create_plbackwall7_2892(3488, 0), 1);
    add_background_object(create_plbackwall9_2893(3840, 1440), 1);
    add_background_object(create_plbackwall9_2893(3776, 1280), 1);
    add_background_object(create_plbackwall7_2892(3776, 1120), 1);
    add_background_object(create_plbackwall9_2893(3776, 960), 1);
    add_background_object(create_plbackwall7_2892(3776, 800), 1);
    add_background_object(create_plbackwall7_2892(3840, 640), 1);
    add_background_object(create_plbackwall7_2892(3904, 480), 1);
    add_background_object(create_plbackwall9_2893(3904, 320), 1);
    add_background_object(create_plbackwall9_2893(3840, 160), 1);
    add_background_object(create_plbackwall7_2892(3840, 0), 1);
    add_background_object(create_plbackwall7_2892(4096, 1280), 1);
    add_background_object(create_plbackwall7_2892(4160, 1120), 1);
    add_background_object(create_plbackwall9_2893(4160, 960), 1);
    add_background_object(create_plbackwall7_2892(4160, 800), 1);
    add_background_object(create_plbackwall9_2893(4160, 640), 1);
    add_background_object(create_plbackwall7_2892(4160, 480), 1);
    add_background_object(create_plbackwall7_2892(4224, 320), 1);
    add_background_object(create_plbackwall9_2893(4224, 160), 1);
    add_background_object(create_plbackwall9_2893(4160, 0), 1);
    add_background_object(create_plbackwall9_2893(3424, 1280), 1);
    add_background_object(create_plbackwall7_2892(3424, 1120), 1);
    add_background_object(create_plbackwall9_2893(3424, 960), 1);
    add_background_object(create_plbackwall7_2892(3424, 800), 1);
    add_background_object(create_plbackwall9_2893(4096, 1440), 1);
    add_background_object(create_plbackwall9_2893(4416, 1440), 1);
    add_background_object(create_plbackwall9_2893(4352, 1280), 1);
    add_background_object(create_plbackwall7_2892(4352, 1120), 1);
    add_background_object(create_plbackwall9_2893(4352, 960), 1);
    add_background_object(create_plbackwall7_2892(4352, 800), 1);
    add_background_object(create_plbackwall7_2892(4416, 640), 1);
    add_background_object(create_plbackwall7_2892(4480, 480), 1);
    add_background_object(create_plbackwall9_2893(4480, 320), 1);
    add_background_object(create_plbackwall9_2893(4416, 160), 1);
    add_background_object(create_plbackwall7_2892(4416, 0), 1);
    add_background_object(create_plbackwall7_2892(4672, 1280), 1);
    add_background_object(create_plbackwall7_2892(4736, 1120), 1);
    add_background_object(create_plbackwall9_2893(4736, 960), 1);
    add_background_object(create_plbackwall7_2892(4736, 800), 1);
    add_background_object(create_plbackwall9_2893(4736, 640), 1);
    add_background_object(create_plbackwall7_2892(4736, 480), 1);
    add_background_object(create_plbackwall7_2892(4800, 320), 1);
    add_background_object(create_plbackwall9_2893(4800, 160), 1);
    add_background_object(create_plbackwall9_2893(4736, 0), 1);
    add_background_object(create_plbackwall9_2893(4672, 1440), 1);
    add_background_object(create_plbackwall9_2893(5080, 1440), 1);
    add_background_object(create_plbackwall9_2893(5016, 1280), 1);
    add_background_object(create_plbackwall7_2892(5016, 1120), 1);
    add_background_object(create_plbackwall9_2893(5016, 960), 1);
    add_background_object(create_plbackwall7_2892(5016, 800), 1);
    add_background_object(create_plbackwall7_2892(5080, 640), 1);
    add_background_object(create_plbackwall7_2892(5144, 480), 1);
    add_background_object(create_plbackwall9_2893(5144, 320), 1);
    add_background_object(create_plbackwall9_2893(5080, 160), 1);
    add_background_object(create_plbackwall7_2892(5080, 0), 1);
    add_background_object(create_plbackwall7_2892(5336, 1280), 1);
    add_background_object(create_plbackwall7_2892(5400, 1120), 1);
    add_background_object(create_plbackwall9_2893(5400, 960), 1);
    add_background_object(create_plbackwall7_2892(5400, 800), 1);
    add_background_object(create_plbackwall9_2893(5400, 640), 1);
    add_background_object(create_plbackwall7_2892(5400, 480), 1);
    add_background_object(create_plbackwall7_2892(5464, 320), 1);
    add_background_object(create_plbackwall9_2893(5464, 160), 1);
    add_background_object(create_plbackwall9_2893(5400, 0), 1);
    add_background_object(create_plbackwall9_2893(5336, 1440), 1);
    add_background_object(create_plbackwall9_2893(5672, 1440), 1);
    add_background_object(create_plbackwall9_2893(5608, 1280), 1);
    add_background_object(create_plbackwall7_2892(5608, 1120), 1);
    add_background_object(create_plbackwall9_2893(5608, 960), 1);
    add_background_object(create_plbackwall7_2892(5608, 800), 1);
    add_background_object(create_plbackwall7_2892(5672, 640), 1);
    add_background_object(create_plbackwall7_2892(5736, 480), 1);
    add_background_object(create_plbackwall9_2893(5736, 320), 1);
    add_background_object(create_plbackwall9_2893(5672, 160), 1);
    add_background_object(create_plbackwall7_2892(5672, 0), 1);
    add_background_object(create_plbackwall7_2892(5928, 1280), 1);
    add_background_object(create_plbackwall7_2892(5992, 1120), 1);
    add_background_object(create_plbackwall9_2893(5992, 960), 1);
    add_background_object(create_plbackwall7_2892(5992, 800), 1);
    add_background_object(create_plbackwall9_2893(5992, 640), 1);
    add_background_object(create_plbackwall7_2892(5992, 480), 1);
    add_background_object(create_plbackwall7_2892(6056, 320), 1);
    add_background_object(create_plbackwall9_2893(6056, 160), 1);
    add_background_object(create_plbackwall9_2893(5992, 0), 1);
    add_background_object(create_plbackwall9_2893(5928, 1440), 1);
    add_background_object(create_plbackwall9_2893(6336, 1440), 1);
    add_background_object(create_plbackwall9_2893(6272, 1280), 1);
    add_background_object(create_plbackwall7_2892(6272, 1120), 1);
    add_background_object(create_plbackwall9_2893(6272, 960), 1);
    add_background_object(create_plbackwall7_2892(6272, 800), 1);
    add_background_object(create_plbackwall7_2892(6336, 640), 1);
    add_background_object(create_plbackwall7_2892(6400, 480), 1);
    add_background_object(create_plbackwall9_2893(6400, 320), 1);
    add_background_object(create_plbackwall9_2893(6336, 160), 1);
    add_background_object(create_plbackwall7_2892(6336, 0), 1);
    add_background_object(create_plbackwall7_2892(6592, 1280), 1);
    add_background_object(create_plbackwall7_2892(6656, 1120), 1);
    add_background_object(create_plbackwall9_2893(6656, 960), 1);
    add_background_object(create_plbackwall7_2892(6656, 800), 1);
    add_background_object(create_plbackwall9_2893(6656, 640), 1);
    add_background_object(create_plbackwall7_2892(6656, 480), 1);
    add_background_object(create_plbackwall7_2892(6720, 320), 1);
    add_background_object(create_plbackwall9_2893(6720, 160), 1);
    add_background_object(create_plbackwall9_2893(6656, 0), 1);
    add_background_object(create_plbackwall9_2893(6592, 1440), 1);
    add_background_object(create_plbackwall9_2893(6960, 1440), 1);
    add_background_object(create_plbackwall9_2893(6896, 1280), 1);
    add_background_object(create_plbackwall7_2892(6896, 1120), 1);
    add_background_object(create_plbackwall9_2893(6896, 960), 1);
    add_background_object(create_plbackwall7_2892(6896, 800), 1);
    add_background_object(create_plbackwall7_2892(6960, 640), 1);
    add_background_object(create_plbackwall7_2892(7024, 480), 1);
    add_background_object(create_plbackwall9_2893(7024, 320), 1);
    add_background_object(create_plbackwall9_2893(6960, 160), 1);
    add_background_object(create_plbackwall7_2892(6960, 0), 1);
    add_background_object(create_plbackwall7_2892(7216, 1280), 1);
    add_background_object(create_plbackwall7_2892(7280, 1120), 1);
    add_background_object(create_plbackwall9_2893(7280, 960), 1);
    add_background_object(create_plbackwall7_2892(7280, 800), 1);
    add_background_object(create_plbackwall9_2893(7280, 640), 1);
    add_background_object(create_plbackwall7_2892(7280, 480), 1);
    add_background_object(create_plbackwall7_2892(7344, 320), 1);
    add_background_object(create_plbackwall9_2893(7344, 160), 1);
    add_background_object(create_plbackwall9_2893(7280, 0), 1);
    add_background_object(create_plbackwall9_2893(7216, 1440), 1);
    add_background_object(create_plbackwall9_2893(7624, 1440), 1);
    add_background_object(create_plbackwall9_2893(7560, 1280), 1);
    add_background_object(create_plbackwall7_2892(7560, 1120), 1);
    add_background_object(create_plbackwall9_2893(7560, 960), 1);
    add_background_object(create_plbackwall7_2892(7560, 800), 1);
    add_background_object(create_plbackwall7_2892(7624, 640), 1);
    add_background_object(create_plbackwall7_2892(7688, 480), 1);
    add_background_object(create_plbackwall9_2893(7688, 320), 1);
    add_background_object(create_plbackwall9_2893(7624, 160), 1);
    add_background_object(create_plbackwall7_2892(7624, 0), 1);
    add_background_object(create_plbackwall7_2892(7880, 1280), 1);
    add_background_object(create_plbackwall7_2892(7944, 1120), 1);
    add_background_object(create_plbackwall9_2893(7944, 960), 1);
    add_background_object(create_plbackwall7_2892(7944, 800), 1);
    add_background_object(create_plbackwall9_2893(7944, 640), 1);
    add_background_object(create_plbackwall7_2892(7944, 480), 1);
    add_background_object(create_plbackwall7_2892(8008, 320), 1);
    add_background_object(create_plbackwall9_2893(8008, 160), 1);
    add_background_object(create_plbackwall9_2893(7944, 0), 1);
    add_background_object(create_plbackwall9_2893(7880, 1440), 1);
    add_background_object(create_plbackwall9_2893(8232, 1440), 1);
    add_background_object(create_plbackwall9_2893(8168, 1280), 1);
    add_background_object(create_plbackwall7_2892(8168, 1120), 1);
    add_background_object(create_plbackwall9_2893(8168, 960), 1);
    add_background_object(create_plbackwall7_2892(8168, 800), 1);
    add_background_object(create_plbackwall7_2892(8232, 640), 1);
    add_background_object(create_plbackwall7_2892(8296, 480), 1);
    add_background_object(create_plbackwall9_2893(8296, 320), 1);
    add_background_object(create_plbackwall9_2893(8232, 160), 1);
    add_background_object(create_plbackwall7_2892(8232, 0), 1);
    add_background_object(create_plbackwall7_2892(8488, 1280), 1);
    add_background_object(create_plbackwall7_2892(8552, 1120), 1);
    add_background_object(create_plbackwall9_2893(8552, 960), 1);
    add_background_object(create_plbackwall7_2892(8552, 800), 1);
    add_background_object(create_plbackwall9_2893(8552, 640), 1);
    add_background_object(create_plbackwall7_2892(8552, 480), 1);
    add_background_object(create_plbackwall7_2892(8616, 320), 1);
    add_background_object(create_plbackwall9_2893(8616, 160), 1);
    add_background_object(create_plbackwall9_2893(8552, 0), 1);
    add_background_object(create_plbackwall9_2893(8488, 1440), 1);
    add_background_object(create_plbackwall9_2893(8896, 1440), 1);
    add_background_object(create_plbackwall9_2893(8832, 1280), 1);
    add_background_object(create_plbackwall7_2892(8832, 1120), 1);
    add_background_object(create_plbackwall9_2893(8832, 960), 1);
    add_background_object(create_plbackwall7_2892(8832, 800), 1);
    add_background_object(create_plbackwall7_2892(8896, 640), 1);
    add_background_object(create_plbackwall7_2892(8960, 480), 1);
    add_background_object(create_plbackwall9_2893(8960, 320), 1);
    add_background_object(create_plbackwall9_2893(8896, 160), 1);
    add_background_object(create_plbackwall7_2892(8896, 0), 1);
    add_background_object(create_plbackwall7_2892(9152, 1280), 1);
    add_background_object(create_plbackwall7_2892(9216, 1120), 1);
    add_background_object(create_plbackwall9_2893(9216, 960), 1);
    add_background_object(create_plbackwall7_2892(9216, 800), 1);
    add_background_object(create_plbackwall9_2893(9216, 640), 1);
    add_background_object(create_plbackwall7_2892(9216, 480), 1);
    add_background_object(create_plbackwall7_2892(9280, 320), 1);
    add_background_object(create_plbackwall9_2893(9280, 160), 1);
    add_background_object(create_plbackwall9_2893(9216, 0), 1);
    add_background_object(create_plbackwall9_2893(9152, 1440), 1);
    add_background_object(create_plbackwall3_2905(11712, 336), 2);
    add_background_object(create_plruins2_2907(11632, 296), 2);
    add_background_object(create_plruins3_2902(11368, 288), 2);
    add_background_object(create_plbackwall1_2895(10648, 960), 2);
    add_background_object(create_plbackwall1_2895(10392, 832), 2);
    add_background_object(create_plbackwall1_2895(10392, 960), 2);
    add_background_object(create_plbackwall3_2905(9720, 576), 2);
    add_background_object(create_plbackwall3_2905(9592, 704), 2);
    add_background_object(create_plbackwall6_2897(9720, 704), 2);
    add_background_object(create_plbackwall1_2895(9928, 480), 2);
    add_background_object(create_plbackwall6_2897(10184, 480), 2);
    add_background_object(create_plbackwall1_2895(9928, 608), 2);
    add_background_object(create_plbackwall6_2897(10184, 608), 2);
    add_background_object(create_plbackwall1_2895(9928, 736), 2);
    add_background_object(create_plbackwall6_2897(10184, 736), 2);
    add_background_object(create_plbackwall1_2895(9928, 864), 2);
    add_background_object(create_plbackwall6_2897(10184, 864), 2);
    add_background_object(create_plbackwall1_2895(9928, 992), 2);
    add_background_object(create_plbackwall6_2897(10184, 992), 2);
    add_background_object(create_plruins5_2898(9848, 576), 2);
    add_background_object(create_plbackwall1_2895(8168, 624), 2);
    add_background_object(create_plbackwall3_2905(6624, 808), 2);
    add_background_object(create_plbackwall3_2905(6496, 424), 2);
    add_background_object(create_plbackwall1_2895(6752, 680), 2);
    add_background_object(create_plbackwall2_2903(6496, 552), 2);
    add_background_object(create_plbackwall2_2903(6624, 680), 2);
    add_background_object(create_plbackwall1_2895(6752, 552), 2);
    add_background_object(create_plruins1_2908(5616, 824), 2);
    add_background_object(create_plruins1_2908(5888, 848), 2);
    add_background_object(create_plbackwall1_2895(4408, 856), 2);
    add_background_object(create_plbackwall1_2895(4408, 728), 2);
    add_background_object(create_plbackwall1_2895(4408, 600), 2);
    add_background_object(create_plbackwall3_2905(4280, 856), 2);
    add_background_object(create_plbackwall2_2903(4280, 728), 2);
    add_background_object(create_plruins5_2898(4232, 1240), 2);
    add_background_object(create_plruins5_2898(4232, 984), 2);
    add_background_object(create_plruins5_2898(4232, 1112), 2);
    add_background_object(create_plruins5_2898(3352, 808), 2);
    add_background_object(create_plruins5_2898(1424, 1240), 2);
    add_background_object(create_plbackwall5_2896(1520, 1448), 2);
    add_background_object(create_plbackwall3_2905(1296, 1448), 2);
    add_background_object(create_plbackwall2_2903(1024, 1384), 2);
    add_background_object(create_plbackwall5_2896(1152, 1384), 2);
    add_background_object(create_plruins5_2898(592, 1704), 2);
    add_background_object(create_plbackwall6_2897(768, 1704), 2);
    add_background_object(create_plruins3_2902(264, 1680), 2);
    add_background_object(create_plbackwall6_2897(384, 1704), 2);
    add_background_object(create_plruins5_2898(592, 936), 2);
    add_background_object(create_plruins5_2898(592, 1064), 2);
    add_background_object(create_plruins5_2898(592, 1320), 2);
    add_background_object(create_plruins5_2898(592, 1448), 2);
    add_background_object(create_plbackwall1_2895(384, 1576), 2);
    add_background_object(create_plbackwall6_2897(0, 1704), 2);
    add_background_object(create_plbackwall5_2896(0, 1576), 2);
    add_background_object(create_plruins5_2898(0, 1704), 2);
    add_background_object(create_plruins5_2898(0, 1576), 2);
    add_background_object(create_plruins6_2910(0, 1512), 2);
    add_background_object(create_plbackwall5_2896(128, 1704), 2);
    add_background_object(create_plbackwall3_2905(256, 1704), 2);
    add_background_object(create_plruins5_2898(400, 1704), 2);
    add_background_object(create_plbackwall1_2895(640, 1576), 2);
    add_background_object(create_plbackwall5_2896(512, 1448), 2);
    add_background_object(create_plbackwall3_2905(640, 1448), 2);
    add_background_object(create_plbackwall4_2894(512, 1320), 2);
    add_background_object(create_plbackwall2_2903(640, 1320), 2);
    add_background_object(create_plbackwall1_2895(512, 1192), 2);
    add_background_object(create_plbackwall5_2896(896, 1704), 2);
    add_background_object(create_plruins5_2898(784, 1704), 2);
    add_background_object(create_plbackwall5_2896(640, 1064), 2);
    add_background_object(create_plbackwall5_2896(512, 936), 2);
    add_background_object(create_plbackwall6_2897(512, 1064), 2);
    add_background_object(create_plbackwall4_2894(512, 1704), 2);
    add_background_object(create_plbackwall2_2903(640, 1704), 2);
    add_background_object(create_plsignup_2916(616, 1768), 2);
    add_background_object(create_plmask_2973(416, 1720), 2);
    add_background_object(create_plruins5_2898(784, 1144), 2);
    add_background_object(create_plruins8_2911(784, 1128), 2);
    add_background_object(create_plruins5_2898(1040, 1000), 2);
    add_background_object(create_plruins5_2898(1040, 872), 2);
    add_background_object(create_plruins5_2898(1040, 1384), 2);
    add_background_object(create_plruins5_2898(1040, 1512), 2);
    add_background_object(create_plruins5_2898(1424, 1496), 2);
    add_background_object(create_plbackwall2_2903(1152, 1512), 2);
    add_background_object(create_plbackwall5_2896(1280, 1512), 2);
    add_background_object(create_plgrass_2904(456, 1800), 2);
    add_background_object(create_plgrass_2904(152, 1808), 2);
    add_background_object(create_plgrass_2904(224, 1800), 2);
    add_background_object(create_plgrass_2904(1032, 1800), 2);
    add_background_object(create_plgrass_2904(968, 1808), 2);
    add_background_object(create_plgrass_2904(768, 1168), 2);
    add_background_object(create_plgrass_2904(896, 1544), 2);
    add_background_object(create_plgrass_2904(1104, 1544), 2);
    add_background_object(create_plgrass_2904(1208, 1552), 2);
    add_background_object(create_plgrass_2904(1024, 1104), 2);
    add_background_object(create_plgrass_2904(1408, 1344), 2);
    add_background_object(create_plplant1_2899(328, 1784), 2);
    add_background_object(create_plplant2_2900(760, 1768), 2);
    add_background_object(create_plgrass_2904(720, 1808), 2);
    add_background_object(create_plplant1_2899(864, 1784), 2);
    add_background_object(create_plbackwall3_2905(2048, 1192), 2);
    add_background_object(create_plbackwall1_2895(2176, 1192), 2);
    add_background_object(create_plbackwall1_2895(2176, 1064), 2);
    add_background_object(create_plbackwall2_2903(2048, 1056), 2);
    add_background_object(create_plgrass_2904(1816, 1288), 2);
    add_background_object(create_plgrass_2904(1904, 1280), 2);
    add_background_object(create_plgrass_2904(2024, 1280), 2);
    add_background_object(create_plbackwall3_2905(2048, 936), 2);
    add_background_object(create_plbackwall1_2895(2176, 936), 2);
    add_background_object(create_plbackwall1_2895(2432, 936), 2);
    add_background_object(create_plbackwall3_2905(2176, 808), 2);
    add_background_object(create_plbackwall1_2895(2304, 808), 2);
    add_background_object(create_plbackwall2_2903(2176, 680), 2);
    add_background_object(create_plbackwall1_2895(2304, 680), 2);
    add_background_object(create_plbackwall1_2895(2560, 808), 2);
    add_background_object(create_plbackwall1_2895(2560, 680), 2);
    add_background_object(create_plbackwall3_2905(2176, 552), 2);
    add_background_object(create_plbackwall1_2895(2304, 552), 2);
    add_background_object(create_plbackwall5_2896(2560, 552), 2);
    add_background_object(create_plbackwall3_2905(2688, 552), 2);
    add_background_object(create_plbackwall5_2896(2432, 424), 2);
    add_background_object(create_plbackwall3_2905(2304, 424), 2);
    add_background_object(create_plbackwall5_2896(2816, 552), 2);
    add_background_object(create_plbackwall6_2897(2816, 680), 2);
    add_background_object(create_plbackwall5_2896(2944, 680), 2);
    add_background_object(create_plbackwall5_2896(3072, 808), 2);
    add_background_object(create_plbackwall6_2897(2944, 808), 2);
    add_background_object(create_plgrass_2904(2568, 880), 2);
    add_background_object(create_plgrass_2904(2944, 880), 2);
    add_background_object(create_plgrass_2904(3040, 896), 2);
    add_background_object(create_plgrass_2904(3256, 896), 2);
    add_background_object(create_plgrass_2904(2816, 784), 2);
    add_background_object(create_plgrass_2904(2720, 776), 2);
    add_background_object(create_plgrass_2904(2440, 1016), 2);
    add_background_object(create_plgrass_2904(2328, 1256), 2);
    add_background_object(create_plgrass_2904(2248, 1272), 2);
    add_background_object(create_plgrass_2904(3328, 824), 2);
    add_background_object(create_plruins5_2898(1424, 1112), 2);
    add_background_object(create_plruins8_2911(1424, 1096), 2);
    add_background_object(create_plruins5_2898(3352, 680), 2);
    add_background_object(create_plruins6_2910(3352, 616), 2);
    add_background_object(create_plruins5_2898(3464, 960), 2);
    add_background_object(create_plruins6_2910(3464, 896), 2);
    add_background_object(create_plruins5_2898(3936, 1184), 2);
    add_background_object(create_plruins6_2910(3936, 864), 2);
    add_background_object(create_plruins5_2898(3744, 1064), 2);
    add_background_object(create_plruins6_2910(3744, 744), 2);
    add_background_object(create_plruins5_2898(3744, 936), 2);
    add_background_object(create_plruins5_2898(3744, 808), 2);
    add_background_object(create_plruins5_2898(3936, 1056), 2);
    add_background_object(create_plruins5_2898(3936, 928), 2);
    add_background_object(create_plgrass_2904(4208, 1280), 2);
    add_background_object(create_plgrass_2904(3992, 1280), 2);
    add_background_object(create_plplant2_2900(4136, 1248), 2);
    add_background_object(create_plgrass_2904(3512, 1032), 2);
    add_background_object(create_plgrass_2904(4256, 912), 2);
    add_background_object(create_plgrass_2904(4352, 904), 2);
    add_background_object(create_plgrass_2904(4496, 888), 2);
    add_background_object(create_plgrass_2904(4600, 896), 2);
    add_background_object(create_plgrass_2904(4752, 896), 2);
    add_background_object(create_plbackwall5_2896(4664, 856), 2);
    add_background_object(create_plbackwall4_2894(4664, 728), 2);
    add_background_object(create_plbackwall5_2896(4664, 600), 2);
    add_background_object(create_plbackwall5_2896(4536, 472), 2);
    add_background_object(create_plmask_2973(1056, 1432), 2);
    add_background_object(create_plmask_2973(800, 1720), 2);
    add_background_object(create_plruins5_2898(5392, 424), 2);
    add_background_object(create_plruins5_2898(5392, 552), 2);
    add_background_object(create_plruins5_2898(5520, 424), 2);
    add_background_object(create_plruins5_2898(5520, 552), 2);
    add_background_object(create_plruins5_2898(5392, 680), 2);
    add_background_object(create_plruins5_2898(5520, 680), 2);
    add_background_object(create_plgrass_2904(5104, 904), 2);
    add_background_object(create_plgrass_2904(5224, 848), 2);
    add_background_object(create_plgrass_2904(5360, 784), 2);
    add_background_object(create_plgrass_2904(5608, 896), 2);
    add_background_object(create_plgrass_2904(5712, 904), 2);
    add_background_object(create_plgrass_2904(5928, 904), 2);
    add_background_object(create_plplant2_2900(5856, 872), 2);
    add_background_object(create_plruins5_2898(6016, 680), 2);
    add_background_object(create_plmask_2973(6032, 712), 2);
    add_background_object(create_plbackwall4_2894(6136, 552), 2);
    add_background_object(create_plbackwall4_2894(6264, 424), 2);
    add_background_object(create_plbackwall6_2897(6136, 424), 2);
    add_background_object(create_plbackwall5_2896(6496, 808), 2);
    add_background_object(create_plbackwall5_2896(6368, 680), 2);
    add_background_object(create_plbackwall3_2905(6240, 680), 2);
    add_background_object(create_plbackwall1_2895(6240, 808), 2);
    add_background_object(create_plruins5_2898(6440, 456), 2);
    add_background_object(create_plruins5_2898(6440, 584), 2);
    add_background_object(create_plruins5_2898(6440, 712), 2);
    add_background_object(create_plruins5_2898(6440, 840), 2);
    add_background_object(create_plruins5_2898(6720, 824), 2);
    add_background_object(create_plruins5_2898(6720, 696), 2);
    add_background_object(create_plruins1_2908(6784, 752), 2);
    add_background_object(create_plruins1_2908(6272, 760), 2);
    add_background_object(create_plruins1_2908(4928, 848), 2);
    add_background_object(create_plbackwall1_2895(6624, 424), 2);
    add_background_object(create_plbackwall6_2897(6624, 552), 2);
    add_background_object(create_plbackwall3_2905(6624, 296), 2);
    add_background_object(create_plbackwall1_2895(6752, 296), 2);
    add_background_object(create_plbackwall5_2896(7008, 296), 2);
    add_background_object(create_plruins6_2910(6720, 632), 2);
    add_background_object(create_plbackwall3_2905(6624, 136), 2);
    add_background_object(create_plbackwall2_2903(6624, 8), 2);
    add_background_object(create_plruins5_2898(6688, 136), 2);
    add_background_object(create_plruins5_2898(6688, 8), 2);
    add_background_object(create_plgrass_2904(7960, 568), 2);
    add_background_object(create_plgrass_2904(8208, 456), 2);
    add_background_object(create_plgrass_2904(7608, 784), 2);
    add_background_object(create_plgrass_2904(7712, 760), 2);
    add_background_object(create_plgrass_2904(8232, 712), 2);
    add_background_object(create_plbackwall1_2895(8168, 496), 2);
    add_background_object(create_plbackwall3_2905(8040, 496), 2);
    add_background_object(create_plbackwall2_2903(8040, 624), 2);
    add_background_object(create_plbackwall2_2903(7624, 512), 2);
    add_background_object(create_plbackwall2_2903(7752, 640), 2);
    add_background_object(create_plbackwall6_2897(7880, 640), 2);
    add_background_object(create_plbackwall6_2897(7752, 512), 2);
    add_background_object(create_plplant1_2899(7600, 384), 2);
    add_background_object(create_plstonewall6_2912(7920, 656), 2);
    add_background_object(create_plstonewall6_2912(7984, 632), 2);
    add_background_object(create_plbackwall5_2896(7880, 512), 2);
    add_background_object(create_plbackwall5_2896(8424, 624), 2);
    add_background_object(create_plruins5_2898(8136, 392), 2);
    add_background_object(create_plruins5_2898(8464, 232), 2);
    add_background_object(create_plruins6_2910(8136, 328), 2);
    add_background_object(create_plbackwall4_2894(8424, 496), 2);
    add_background_object(create_plruins5_2898(7064, 296), 2);
    add_background_object(create_plruins5_2898(7264, 168), 2);
    add_background_object(create_plruins5_2898(7264, 296), 2);
    add_background_object(create_plruins5_2898(7264, 424), 2);
    add_background_object(create_plruins5_2898(7264, 552), 2);
    add_background_object(create_plruins5_2898(7264, 680), 2);
    add_background_object(create_plgrass_2904(6120, 784), 2);
    add_background_object(create_plgrass_2904(6408, 400), 2);
    add_background_object(create_plgrass_2904(6208, 400), 2);
    add_background_object(create_plgrass_2904(6040, 400), 2);
    add_background_object(create_plgrass_2904(6584, 240), 2);
    add_background_object(create_plgrass_2904(6912, 400), 2);
    add_background_object(create_plgrass_2904(7000, 392), 2);
    add_background_object(create_plgrass_2904(7112, 616), 2);
    add_background_object(create_plgrass_2904(7504, 416), 2);
    add_background_object(create_plbackwall2_2903(8800, 256), 2);
    add_background_object(create_plbackwall1_2895(8800, 128), 2);
    add_background_object(create_plbackwall6_2897(8928, 256), 2);
    add_background_object(create_plbackwall3_2905(8984, 408), 2);
    add_background_object(create_plbackwall2_2903(8984, 536), 2);
    add_background_object(create_plbackwall2_2903(9112, 664), 2);
    add_background_object(create_plbackwall3_2905(9112, 792), 2);
    add_background_object(create_plbackwall3_2905(8984, 920), 2);
    add_background_object(create_plbackwall1_2895(9112, 920), 2);
    add_background_object(create_plbackwall1_2895(9240, 792), 2);
    add_background_object(create_plbackwall1_2895(9240, 664), 2);
    add_background_object(create_plbackwall1_2895(9112, 536), 2);
    add_background_object(create_plbackwall6_2897(9112, 408), 2);
    add_background_object(create_plbackwall5_2896(9240, 408), 2);
    add_background_object(create_plbackwall5_2896(9368, 536), 2);
    add_background_object(create_plbackwall5_2896(9496, 664), 2);
    add_background_object(create_plbackwall4_2894(9496, 792), 2);
    add_background_object(create_plbackwall4_2894(9368, 920), 2);
    add_background_object(create_plruins5_2898(7456, 672), 2);
    add_background_object(create_plruins5_2898(8744, 328), 2);
    add_background_object(create_plruins5_2898(8744, 200), 2);
    add_background_object(create_plmask_2973(8760, 280), 2);
    add_background_object(create_plruins5_2898(8744, 456), 2);
    add_background_object(create_plruins5_2898(8744, 584), 2);
    add_background_object(create_plruins5_2898(8744, 712), 2);
    add_background_object(create_plruins5_2898(8744, 840), 2);
    add_background_object(create_plruins1_2908(8632, 792), 2);
    add_background_object(create_plruins1_2908(8472, 664), 2);
    add_background_object(create_plruins5_2898(9848, 704), 2);
    add_background_object(create_plruins5_2898(9848, 832), 2);
    add_background_object(create_plruins5_2898(9848, 960), 2);
    add_background_object(create_plruins5_2898(9848, 448), 2);
    add_background_object(create_plruins5_2898(9528, 544), 2);
    add_background_object(create_plruins5_2898(9528, 672), 2);
    add_background_object(create_plruins5_2898(9528, 800), 2);
    add_background_object(create_plruins5_2898(10296, 576), 2);
    add_background_object(create_plruins5_2898(10296, 704), 2);
    add_background_object(create_plruins5_2898(10296, 832), 2);
    add_background_object(create_plruins5_2898(10296, 960), 2);
    add_background_object(create_plruins5_2898(10296, 448), 2);
    add_background_object(create_plruins5_2898(9128, 728), 2);
    add_background_object(create_plruins5_2898(9128, 856), 2);
    add_background_object(create_plruins5_2898(11320, 976), 2);
    add_background_object(create_plruins5_2898(11320, 800), 2);
    add_background_object(create_plruins5_2898(11320, 672), 2);
    add_background_object(create_plruins5_2898(11320, 544), 2);
    add_background_object(create_plruins5_2898(11040, 832), 2);
    add_background_object(create_plruins5_2898(11040, 704), 2);
    add_background_object(create_plbackwall5_2896(10648, 832), 2);
    add_background_object(create_plbackwall6_2897(10904, 960), 2);
    add_background_object(create_plbackwall3_2905(10776, 832), 2);
    add_background_object(create_plbackwall5_2896(10904, 832), 2);
    add_background_object(create_plbackwall3_2905(11192, 768), 2);
    add_background_object(create_plbackwall3_2905(11064, 896), 2);
    add_background_object(create_plbackwall6_2897(11192, 896), 2);
    add_background_object(create_plbackwall6_2897(11192, 1024), 2);
    add_background_object(create_plbackwall6_2897(11064, 1024), 2);
    add_background_object(create_plbackwall3_2905(11416, 576), 2);
    add_background_object(create_plbackwall2_2903(11416, 576), 2);
    add_background_object(create_plbackwall1_2895(11416, 704), 2);
    add_background_object(create_plbackwall1_2895(11416, 832), 2);
    add_background_object(create_plbackwall1_2895(11416, 960), 2);
    add_background_object(create_plbackwall1_2895(11672, 832), 2);
    add_background_object(create_plruins8_2911(11040, 688), 2);
    add_background_object(create_plruins5_2898(8744, 72), 2);
    add_background_object(create_plruins5_2898(8744, -56), 2);
    add_background_object(create_plruins5_2898(8744, 968), 2);
    add_background_object(create_plbackwall5_2896(9112, 280), 2);
    add_background_object(create_plruins5_2898(9968, 320), 2);
    add_background_object(create_plruins5_2898(10176, 352), 2);
    add_background_object(create_plruins6_2910(10176, 288), 2);
    add_background_object(create_plruins5_2898(9968, 192), 2);
    add_background_object(create_plgrass_2904(9480, 392), 2);
    add_background_object(create_plgrass_2904(9880, 392), 2);
    add_background_object(create_plgrass_2904(10056, 424), 2);
    add_background_object(create_plgrass_2904(10032, 808), 2);
    add_background_object(create_plgrass_2904(10200, 776), 2);
    add_background_object(create_plgrass_2904(9952, 1064), 2);
    add_background_object(create_plgrass_2904(10048, 1056), 2);
    add_background_object(create_plgrass_2904(10360, 1064), 2);
    add_background_object(create_plgrass_2904(10504, 1000), 2);
    add_background_object(create_plgrass_2904(10888, 1056), 2);
    add_background_object(create_plgrass_2904(10792, 1064), 2);
    add_background_object(create_plgrass_2904(11016, 936), 2);
    add_background_object(create_plgrass_2904(11152, 1056), 2);
    add_background_object(create_plgrass_2904(11248, 712), 2);
    add_background_object(create_plgrass_2904(11088, 720), 2);
    add_background_object(create_plgrass_2904(9096, 640), 2);
    add_background_object(create_plgrass_2904(9416, 528), 2);
    add_background_object(create_plgrass_2904(8920, 344), 2);
    add_background_object(create_plgrass_2904(8512, 328), 2);
    add_background_object(create_plgrass_2904(11280, 400), 2);
    add_background_object(create_plgrass_2904(11456, 408), 2);
    add_background_object(create_plgrass_2904(11560, 408), 2);
    add_background_object(create_plbackwall1_2895(10392, 704), 2);
    add_background_object(create_plbackwall4_2894(10648, 704), 2);
    add_background_object(create_plbackwall4_2894(10776, 576), 2);
    add_background_object(create_plbackwall1_2895(10392, 576), 2);
    add_background_object(create_plbackwall6_2897(10648, 576), 2);
    add_background_object(create_plbackwall1_2895(10392, 448), 2);
    add_background_object(create_plbackwall6_2897(10776, 320), 2);
    add_background_object(create_plbackwall5_2896(10904, 320), 2);
    add_background_object(create_plbackwall4_2894(10904, 448), 2);
    add_background_object(create_plbackwall1_2895(10648, 448), 2);
    add_background_object(create_plbackwall1_2895(10520, 320), 2);
    add_background_object(create_plbackwall1_2895(10520, 192), 2);
    add_background_object(create_plbackwall1_2895(10520, 64), 2);
    add_background_object(create_plbackwall3_2905(10392, 320), 2);
    add_background_object(create_plbackwall2_2903(10392, 192), 2);
    add_background_object(create_plbackwall2_2903(10264, 64), 2);
    add_background_object(create_plbackwall6_2897(10392, 64), 2);
    add_background_object(create_plbackwall6_2897(10392, -64), 2);
    add_background_object(create_plbackwall5_2896(11928, 832), 2);
    add_background_object(create_plbackwall2_2903(12152, 568), 2);
    add_background_object(create_plbackwall1_2895(12280, 568), 2);
    add_background_object(create_plbackwall5_2896(11784, 640), 2);
    add_background_object(create_plbackwall3_2905(11712, 80), 2);
    add_background_object(create_plbackwall2_2903(11712, 208), 2);
    add_background_object(create_plbackwall6_2897(11840, 80), 2);
    add_background_object(create_plbackwall6_2897(11840, 208), 2);
    add_background_object(create_plbackwall6_2897(11840, 336), 2);
    add_background_object(create_plbackwall5_2896(11968, 80), 2);
    add_background_object(create_plbackwall4_2894(11968, 208), 2);
    add_background_object(create_plbackwall5_2896(11968, 336), 2);
    add_background_object(create_plbackwall1_2895(11712, 464), 2);
    add_background_object(create_plbackwall6_2897(11968, 464), 2);
    add_background_object(create_plbackwall4_2894(11968, 592), 2);
    add_background_object(create_plbackwall2_2903(11840, 592), 2);
    add_background_object(create_plbackwall4_2894(11712, 592), 2);
    add_background_object(create_plgrass_2904(12064, 416), 2);
    add_background_object(create_plgrass_2904(12224, 408), 2);
    add_background_object(create_plgrass_2904(12304, 416), 2);
    add_background_object(create_plgrass_2904(12440, 408), 2);
    add_background_object(create_plgrass_2904(12600, 400), 2);
    add_background_object(create_plgrass_2904(12696, 416), 2);
    add_background_object(create_plgrass_2904(12512, 416), 2);
    add_background_object(create_plplant1_2899(12400, 392), 2);
    add_background_object(create_plplant2_2900(12104, 376), 2);
    add_background_object(create_plplant1_2899(11536, 384), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12984, 85), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_gimmickbowstring_2974(5478, 654), 2);
    add_object(create_gimmickbowstring_2974(5478, 670), 2);
    add_object(create_gimmickbowstring_2974(5478, 686), 2);
    add_object(create_gimmickbowstring_2974(5478, 702), 2);
    add_object(create_gimmickbowstring_2974(5478, 718), 2);
    add_object(create_gimmickbowstring_2974(5478, 734), 2);
    add_object(create_gimmickbowstring_2974(5478, 750), 2);
    add_object(create_gimmickbowstring_2974(5478, 766), 2);
    add_object(create_gimmickbowstring_2974(5478, 782), 2);
    add_object(create_gimmickbowstring_2974(5478, 798), 2);
    add_object(create_gimmickbowstring_2974(3398, 702), 2);
    add_object(create_gimmickbowstring_2974(3398, 718), 2);
    add_object(create_gimmickbowstring_2974(3398, 734), 2);
    add_object(create_gimmickbowstring_2974(3398, 750), 2);
    add_object(create_gimmickbowstring_2974(3398, 766), 2);
    add_object(create_gimmickbowstring_2974(3398, 782), 2);
    add_object(create_gimmickbowstring_2974(3398, 798), 2);
    add_object(create_gimmickbowstring_2974(3398, 814), 2);
    add_object(create_gimmickbowstring_2974(3398, 830), 2);
    add_object(create_gimmickbowstring_2974(3398, 846), 2);
    add_object(create_gimmickbowstring_2974(9886, 542), 2);
    add_object(create_gimmickbowstring_2974(9886, 558), 2);
    add_object(create_gimmickbowstring_2974(9886, 574), 2);
    add_object(create_gimmickbowstring_2974(9886, 590), 2);
    add_object(create_gimmickbowstring_2974(9886, 606), 2);
    add_object(create_gimmickbowstring_2974(9886, 622), 2);
    add_object(create_gimmickbowstring_2974(9886, 638), 2);
    add_object(create_gimmickbowstring_2974(9886, 654), 2);
    add_object(create_gimmickbowstring_2974(9886, 670), 2);
    add_object(create_gimmickbowstring_2974(9886, 686), 2);
    add_object(create_gimmickbowstring_2974(11318, 790), 2);
    add_object(create_gimmickbowstring_2974(11318, 806), 2);
    add_object(create_gimmickbowstring_2974(11318, 822), 2);
    add_object(create_gimmickbowstring_2974(11318, 838), 2);
    add_object(create_gimmickbowstring_2974(11318, 854), 2);
    add_object(create_gimmickbowstring_2974(11318, 870), 2);
    add_object(create_gimmickbowstring_2974(11318, 886), 2);
    add_object(create_gimmickbowstring_2974(11318, 902), 2);
    add_object(create_gimmickbowstring_2974(11318, 918), 2);
    add_object(create_gimmickbowstring_2974(11318, 934), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_plbrickwall5_2921(12456, 648), 3);
    add_background_object(create_plbrickwall5_2921(12392, 680), 3);
    add_background_object(create_plbrickwall5_2921(12456, 680), 3);
    add_background_object(create_plbrickwall5_2921(12328, 680), 3);
    add_background_object(create_plbrickwall3_2923(12168, 680), 3);
    add_background_object(create_plbrickwall1_2918(12200, 680), 3);
    add_background_object(create_plstonewall4_2937(12000, 448), 3);
    add_background_object(create_plstonewall11_2924(12040, 880), 3);
    add_background_object(create_plplant3_2922(11024, 896), 3);
    add_background_object(create_plplant3_2922(10536, 960), 3);
    add_background_object(create_plplant3_2922(10136, 1016), 3);
    add_background_object(create_plplant3_2922(9848, 352), 3);
    add_background_object(create_plplant3_2922(9512, 352), 3);
    add_background_object(create_plbrickwall2_2919(8712, 104), 3);
    add_background_object(create_plbrickwall2_2919(8712, -24), 3);
    add_background_object(create_plbow_2975(11312, 784), 3);
    add_background_object(create_plvine1_2938(11288, 520), 3);
    add_background_object(create_plvine2_2941(11288, 592), 3);
    add_background_object(create_plbow_2975(9880, 520), 3);
    add_background_object(create_plbrickwall4_2953(9480, 928), 3);
    add_background_object(create_plbrickwall5_2921(9512, 928), 3);
    add_background_object(create_plbrickwall5_2921(9576, 864), 3);
    add_background_object(create_plbrickwall5_2921(9544, 928), 3);
    add_background_object(create_jcbridgesegment_2425(9832, 392), 3);
    add_background_object(create_jcbridgesegment_2425(9624, 392), 3);
    add_background_object(create_plstonewall16_2933(9104, 384), 3);
    add_background_object(create_plstonewall5_2932(9040, 384), 3);
    add_background_object(create_plstonewall16_2933(8976, 384), 3);
    add_background_object(create_plstonewall5_2932(8912, 384), 3);
    add_background_object(create_plstonewall11_2924(8928, 304), 3);
    add_background_object(create_plpinwheelstalk_2920(8912, 952), 3);
    add_background_object(create_plpinwheelstalk_2920(8984, 944), 3);
    add_background_object(create_plpinwheelstalk_2920(9080, 944), 3);
    add_background_object(create_plpinwheelstalk_2920(8840, 952), 3);
    add_background_object(create_plpinwheelstalk_2920(9168, 952), 3);
    add_background_object(create_plpinwheelstalk_2920(9168, 904), 3);
    add_background_object(create_plpinwheelstalk_2920(9240, 936), 3);
    add_background_object(create_plpinwheelstalk_2920(9336, 928), 3);
    add_background_object(create_plpinwheelstalk_2920(9424, 920), 3);
    add_background_object(create_plstonewall3_2926(8776, 880), 3);
    add_background_object(create_plstonewall16_2933(8712, 960), 3);
    add_background_object(create_plstonewall10_2940(8648, 824), 3);
    add_background_object(create_plstonewall15_2942(8520, 752), 3);
    add_background_object(create_plstonewall1_2913(8448, 368), 3);
    add_background_object(create_plstonewall5_2932(7496, 448), 3);
    add_background_object(create_plstonewall16_2933(7560, 448), 3);
    add_background_object(create_plstonewall1_2913(8192, 752), 3);
    add_background_object(create_plstonewall21_2952(7168, 744), 3);
    add_background_object(create_plplant3_2922(6320, 328), 3);
    add_background_object(create_plplant3_2922(6160, 328), 3);
    add_background_object(create_plbow_2975(5472, 632), 3);
    add_background_object(create_plbrickwall3_2923(5984, 808), 3);
    add_background_object(create_plbrickwall1_2918(6016, 808), 3);
    add_background_object(create_plbrickwall2_2919(5632, 808), 3);
    add_background_object(create_plbrickwall1_2918(5504, 808), 3);
    add_background_object(create_plbrickwall4_2953(5216, 904), 3);
    add_background_object(create_plbrickwall1_2918(5376, 808), 3);
    add_background_object(create_plbrickwall1_2918(5248, 872), 3);
    add_background_object(create_plbow_2975(3392, 680), 3);
    add_background_object(create_plstonewall11_2924(4480, 856), 3);
    add_background_object(create_plbrickwall1_2918(4800, 808), 3);
    add_background_object(create_plbrickwall2_2919(4896, 808), 3);
    add_background_object(create_plbrickwall3_2923(4800, 808), 3);
    add_background_object(create_plstonewall12_2914(4224, 1000), 3);
    add_background_object(create_plstonewall16_2933(4288, 936), 3);
    add_background_object(create_plstonewall5_2932(4224, 936), 3);
    add_background_object(create_plbrickwall5_2921(3712, 1160), 3);
    add_background_object(create_plbrickwall2_2919(3968, 1256), 3);
    add_background_object(create_plbrickwall1_2918(3840, 1256), 3);
    add_background_object(create_plbrickwall1_2918(3712, 1192), 3);
    add_background_object(create_plstonewall4_2937(4328, 1064), 3);
    add_background_object(create_plstonewall1_2913(4352, 1064), 3);
    add_background_object(create_plstonewall1_2913(4608, 1064), 3);
    add_background_object(create_plstonewall3_2926(3456, 872), 3);
    add_background_object(create_plstonewall12_2914(1968, 1168), 3);
    add_background_object(create_plstonewall13_2915(2096, 1168), 3);
    add_background_object(create_plstonewall11_2924(1968, 1088), 3);
    add_background_object(create_plstonewall10_2940(2096, 1088), 3);
    add_background_object(create_plpinwheelstalk_2920(2728, 752), 3);
    add_background_object(create_plpinwheelstalk_2920(2856, 760), 3);
    add_background_object(create_plpinwheelstalk_2920(2600, 880), 3);
    add_background_object(create_plpinwheelstalk_2920(2432, 1008), 3);
    add_background_object(create_plpinwheelstalk_2920(2488, 1008), 3);
    add_background_object(create_plpinwheelstalk_2920(2064, 1264), 3);
    add_background_object(create_plpinwheelstalk_2920(1928, 1288), 3);
    add_background_object(create_plpinwheelstalk_2920(1928, 1248), 3);
    add_background_object(create_plpinwheelstalk_2920(1832, 1264), 3);
    add_background_object(create_plpinwheelstalk_2920(2000, 1264), 3);
    add_background_object(create_plpinwheelstalk_2920(2128, 1280), 3);
    add_background_object(create_plpinwheelstalk_2920(2200, 1296), 3);
    add_background_object(create_jcbridgesegment_2425(3160, 784), 3);
    add_background_object(create_jcbridgesegment_2425(2952, 784), 3);
    add_background_object(create_plstonewall3_2926(3456, 936), 3);
    add_background_object(create_plplant3_2922(1056, 1056), 3);
    add_background_object(create_plstonewall1_2913(2944, 936), 3);
    add_background_object(create_plground1_2943(2944, 912), 3);
    add_background_object(create_plstonewall3_2926(2944, 808), 3);
    add_background_object(create_plstonewall1_2913(2688, 936), 3);
    add_background_object(create_plstonewall1_2913(2688, 808), 3);
    add_background_object(create_plstonewall1_2913(1792, 1576), 3);
    add_background_object(create_plstonewall1_2913(1920, 1448), 3);
    add_background_object(create_plstonewall1_2913(2048, 1576), 3);
    add_background_object(create_plstonewall1_2913(2176, 1448), 3);
    add_background_object(create_plstonewall6_2912(2024, 1536), 3);
    add_background_object(create_plstonewall8_2927(1792, 1320), 3);
    add_background_object(create_dvceilingoverlay_915(-528, 936), 3);
    add_background_object(create_plbackwall1_2895(-528, 952), 3);
    add_background_object(create_plbackwall2_2903(-528, 960), 3);
    add_background_object(create_plbackwall3_2905(-408, 960), 3);
    add_background_object(create_plbackwall4_2894(-472, 968), 3);
    add_background_object(create_plbackwall5_2896(-464, 968), 3);
    add_background_object(create_plbackwall6_2897(-472, 968), 3);
    add_background_object(create_plbackwall7_2892(-544, 960), 3);
    add_background_object(create_plbackwall9_2893(-552, 960), 3);
    add_background_object(create_plbrickwall1_2918(-512, 976), 3);
    add_background_object(create_plbrickwall2_2919(-376, 976), 3);
    add_background_object(create_plbrickwall3_2923(-344, 968), 3);
    add_background_object(create_plgrass_2904(-472, 1032), 3);
    add_background_object(create_plground10_2948(-448, 984), 3);
    add_background_object(create_plground11_2950(-480, 976), 3);
    add_background_object(create_plground12_2949(-472, 984), 3);
    add_background_object(create_plground13_2936(-464, 1008), 3);
    add_background_object(create_plground2_2944(-464, 1024), 3);
    add_background_object(create_plground3_2939(-464, 1016), 3);
    add_background_object(create_plground4_2931(-456, 1000), 3);
    add_background_object(create_plground5_2945(-448, 1016), 3);
    add_background_object(create_plground6_2946(-408, 992), 3);
    add_background_object(create_plground7_2951(-496, 976), 3);
    add_background_object(create_plground8_2925(-440, 976), 3);
    add_background_object(create_plground9_2935(-448, 992), 3);
    add_background_object(create_plground1_2943(-456, 1016), 3);
    add_background_object(create_plplant1_2899(-432, 1024), 3);
    add_background_object(create_plplant2_2900(-400, 1008), 3);
    add_background_object(create_plplant3_2922(-464, 1008), 3);
    add_background_object(create_plruins1_2908(-456, 960), 3);
    add_background_object(create_plruins2_2907(-472, 952), 3);
    add_background_object(create_plruins3_2902(-440, 960), 3);
    add_background_object(create_plruins4_2906(-448, 960), 3);
    add_background_object(create_plruins5_2898(-480, 976), 3);
    add_background_object(create_plruins6_2910(-456, 1008), 3);
    add_background_object(create_plruins8_2911(-408, 1016), 3);
    add_background_object(create_plsignup_2916(-416, 1032), 3);
    add_background_object(create_plstonewall1_2913(-528, 1136), 3);
    add_background_object(create_plstonewall10_2940(-504, 1144), 3);
    add_background_object(create_plstonewall11_2924(-424, 1152), 3);
    add_background_object(create_plstonewall12_2914(-440, 1192), 3);
    add_background_object(create_plstonewall13_2915(-480, 1168), 3);
    add_background_object(create_plstonewall14_2934(-472, 1136), 3);
    add_background_object(create_plstonewall15_2942(-472, 1136), 3);
    add_background_object(create_plstonewall16_2933(-432, 1184), 3);
    add_background_object(create_plstonewall17_2969(-464, 1136), 3);
    add_background_object(create_plstonewall18_2968(-464, 1144), 3);
    add_background_object(create_plstonewall19_2955(-464, 1136), 3);
    add_background_object(create_plstonewall20_2930(-456, 1152), 3);
    add_background_object(create_plstonewall21_2952(-472, 1136), 3);
    add_background_object(create_plstonewall3_2926(-440, 1136), 3);
    add_background_object(create_plstonewall4_2937(-392, 1136), 3);
    add_background_object(create_plstonewall5_2932(-408, 1168), 3);
    add_background_object(create_plstonewall6_2912(-456, 1136), 3);
    add_background_object(create_plstonewall7_2947(-456, 1136), 3);
    add_background_object(create_plstonewall8_2927(-456, 1136), 3);
    add_background_object(create_plstonewall9_2928(-464, 1136), 3);
    add_background_object(create_plvine1_2938(-464, 1176), 3);
    add_background_object(create_plvine2_2941(-440, 1168), 3);
    add_background_object(create_plbrickwall1_2918(0, 1832), 3);
    add_background_object(create_plbrickwall1_2918(128, 1832), 3);
    add_background_object(create_plbrickwall1_2918(256, 1832), 3);
    add_background_object(create_plbrickwall1_2918(384, 1832), 3);
    add_background_object(create_plbrickwall1_2918(384, 1576), 3);
    add_background_object(create_plbrickwall3_2923(352, 1576), 3);
    add_background_object(create_plbrickwall4_2953(288, 1320), 3);
    add_background_object(create_plbrickwall1_2918(384, 1448), 3);
    add_background_object(create_plbrickwall3_2923(352, 1448), 3);
    add_background_object(create_plbrickwall1_2918(512, 1832), 3);
    add_background_object(create_plbrickwall1_2918(640, 1832), 3);
    add_background_object(create_plbrickwall1_2918(768, 1832), 3);
    add_background_object(create_plbrickwall1_2918(896, 1832), 3);
    add_background_object(create_plbrickwall1_2918(1024, 1832), 3);
    add_background_object(create_plbrickwall2_2919(512, 1448), 3);
    add_background_object(create_plbrickwall2_2919(512, 1576), 3);
    add_background_object(create_plbrickwall6_2954(-304, 1264), 3);
    add_background_object(create_plbrickwall3_2923(736, 1576), 3);
    add_background_object(create_plbrickwall1_2918(768, 1448), 3);
    add_background_object(create_plbrickwall3_2923(736, 1448), 3);
    add_background_object(create_plbrickwall1_2918(768, 1320), 3);
    add_background_object(create_plbrickwall3_2923(736, 1320), 3);
    add_background_object(create_plbrickwall2_2919(896, 1320), 3);
    add_background_object(create_plbrickwall2_2919(896, 1448), 3);
    add_background_object(create_plbrickwall1_2918(384, 1320), 3);
    add_background_object(create_plbrickwall3_2923(352, 1320), 3);
    add_background_object(create_plbrickwall1_2918(384, 1192), 3);
    add_background_object(create_plbrickwall3_2923(352, 1192), 3);
    add_background_object(create_plbrickwall2_2919(512, 1192), 3);
    add_background_object(create_plbrickwall2_2919(512, 1320), 3);
    add_background_object(create_plbrickwall1_2918(1152, 1832), 3);
    add_background_object(create_plbrickwall3_2923(1120, 1704), 3);
    add_background_object(create_plbrickwall1_2918(768, 1192), 3);
    add_background_object(create_plbrickwall3_2923(736, 1224), 3);
    add_background_object(create_plbrickwall2_2919(896, 1224), 3);
    add_background_object(create_plbrickwall1_2918(384, 1064), 3);
    add_background_object(create_plbrickwall3_2923(352, 1064), 3);
    add_background_object(create_plbrickwall2_2919(512, 1064), 3);
    add_background_object(create_plbrickwall1_2918(384, 936), 3);
    add_background_object(create_plbrickwall3_2923(352, 936), 3);
    add_background_object(create_plbrickwall1_2918(384, 808), 3);
    add_background_object(create_plbrickwall3_2923(352, 808), 3);
    add_background_object(create_plbrickwall1_2918(512, 808), 3);
    add_background_object(create_plbrickwall1_2918(640, 808), 3);
    add_background_object(create_plbrickwall1_2918(768, 808), 3);
    add_background_object(create_plbrickwall1_2918(896, 808), 3);
    add_background_object(create_plbrickwall1_2918(1024, 1256), 3);
    add_background_object(create_plbrickwall3_2923(992, 1256), 3);
    add_background_object(create_plbrickwall1_2918(1024, 1128), 3);
    add_background_object(create_plbrickwall3_2923(992, 1160), 3);
    add_background_object(create_plbrickwall1_2918(1024, 808), 3);
    add_background_object(create_plbrickwall2_2919(1152, 1256), 3);
    add_background_object(create_plbrickwall2_2919(1152, 1160), 3);
    add_background_object(create_plbrickwall1_2918(1408, 1368), 3);
    add_background_object(create_plbrickwall3_2923(1376, 1368), 3);
    add_background_object(create_plstonewall6_2912(24, 1832), 3);
    add_background_object(create_plstonewall6_2912(408, 1832), 3);
    add_background_object(create_plstonewall6_2912(816, 1832), 3);
    add_background_object(create_plstonewall6_2912(984, 1832), 3);
    add_background_object(create_plstonewall4_2937(1128, 1704), 3);
    add_background_object(create_plstonewall4_2937(1256, 1832), 3);
    add_background_object(create_plstonewall1_2913(1280, 1704), 3);
    add_background_object(create_plstonewall1_2913(1280, 1832), 3);
    add_background_object(create_plstonewall1_2913(1536, 1704), 3);
    add_background_object(create_plstonewall1_2913(1536, 1832), 3);
    add_background_object(create_plstonewall1_2913(1792, 1704), 3);
    add_background_object(create_plstonewall1_2913(1792, 1832), 3);
    add_background_object(create_plstonewall4_2937(1896, 1448), 3);
    add_background_object(create_plstonewall1_2913(1920, 1320), 3);
    add_background_object(create_plground2_2944(1936, 1304), 3);
    add_background_object(create_plground1_2943(1816, 1304), 3);
    add_background_object(create_plground3_2939(1792, 1304), 3);
    add_background_object(create_plbrickwall2_2919(1152, 808), 3);
    add_background_object(create_plstonewall21_2952(1152, 1704), 3);
    add_background_object(create_plstonewall6_2912(1136, 1728), 3);
    add_background_object(create_plstonewall1_2913(768, 1576), 3);
    add_background_object(create_plstonewall1_2913(1024, 1576), 3);
    add_background_object(create_plstonewall4_2937(744, 1576), 3);
    add_background_object(create_plstonewall12_2914(768, 1704), 3);
    add_background_object(create_plstonewall12_2914(1024, 1704), 3);
    add_background_object(create_plstonewall13_2915(896, 1704), 3);
    add_background_object(create_plstonewall7_2947(1144, 1704), 3);
    add_background_object(create_plstonewall7_2947(1280, 1768), 3);
    add_background_object(create_plstonewall1_2913(1280, 1576), 3);
    add_background_object(create_plstonewall1_2913(1536, 1576), 3);
    add_background_object(create_plstonewall6_2912(1904, 1528), 3);
    add_background_object(create_plground3_2939(928, 1576), 3);
    add_background_object(create_plground13_2936(952, 1576), 3);
    add_background_object(create_plground13_2936(1016, 1576), 3);
    add_background_object(create_plground13_2936(1080, 1576), 3);
    add_background_object(create_plstonewall7_2947(1088, 1592), 3);
    add_background_object(create_plstonewall7_2947(920, 1592), 3);
    add_background_object(create_plground2_2944(1144, 1568), 3);
    add_background_object(create_plground1_2943(1272, 1568), 3);
    add_background_object(create_plground2_2944(1400, 1568), 3);
    add_background_object(create_plground1_2943(1592, 1568), 3);
    add_background_object(create_plground4_2931(1888, 1576), 3);
    add_background_object(create_plstonewall1_2913(2048, 1704), 3);
    add_background_object(create_plstonewall1_2913(2048, 1832), 3);
    add_background_object(create_plstonewall7_2947(1232, 1592), 3);
    add_background_object(create_plstonewall7_2947(1384, 1608), 3);
    add_background_object(create_plstonewall7_2947(1528, 1592), 3);
    add_background_object(create_plstonewall7_2947(1688, 1600), 3);
    add_background_object(create_plstonewall7_2947(1832, 1592), 3);
    add_background_object(create_plstonewall7_2947(1944, 1440), 3);
    add_background_object(create_plstonewall7_2947(1912, 1336), 3);
    add_background_object(create_plstonewall7_2947(1960, 1560), 3);
    add_background_object(create_plstonewall1_2913(2176, 1320), 3);
    add_background_object(create_plground1_2943(2064, 1304), 3);
    add_background_object(create_plstonewall6_2912(744, 1528), 3);
    add_background_object(create_plstonewall6_2912(800, 1544), 3);
    add_background_object(create_plstonewall7_2947(768, 1576), 3);
    add_background_object(create_plstonewall7_2947(2056, 1328), 3);
    add_background_object(create_plstonewall7_2947(2208, 1336), 3);
    add_background_object(create_plstonewall11_2924(2304, 1240), 3);
    add_background_object(create_plground2_2944(2184, 1304), 3);
    add_background_object(create_plground8_2925(2304, 1184), 3);
    add_background_object(create_plstonewall1_2913(2432, 1448), 3);
    add_background_object(create_plstonewall1_2913(2432, 1320), 3);
    add_background_object(create_plstonewall1_2913(2432, 1192), 3);
    add_background_object(create_plstonewall1_2913(2432, 1064), 3);
    add_background_object(create_plstonewall1_2913(2560, 936), 3);
    add_background_object(create_plstonewall1_2913(2688, 1064), 3);
    add_background_object(create_plstonewall1_2913(2304, 1576), 3);
    add_background_object(create_plstonewall1_2913(2560, 1576), 3);
    add_background_object(create_plstonewall1_2913(2304, 1704), 3);
    add_background_object(create_plstonewall1_2913(2560, 1704), 3);
    add_background_object(create_plstonewall1_2913(2304, 1832), 3);
    add_background_object(create_plstonewall1_2913(2560, 1832), 3);
    add_background_object(create_plstonewall1_2913(2688, 1448), 3);
    add_background_object(create_plstonewall1_2913(2688, 1320), 3);
    add_background_object(create_plstonewall1_2913(2688, 1192), 3);
    add_background_object(create_plground2_2944(2432, 1040), 3);
    add_background_object(create_plstonewall6_2912(2528, 1024), 3);
    add_background_object(create_plground2_2944(2560, 912), 3);
    add_background_object(create_plstonewall4_2937(2536, 936), 3);
    add_background_object(create_plground3_2939(2536, 920), 3);
    add_background_object(create_plstonewall6_2912(2640, 1008), 3);
    add_background_object(create_plstonewall4_2937(2664, 808), 3);
    add_background_object(create_plstonewall6_2912(2672, 880), 3);
    add_background_object(create_plground3_2939(2664, 800), 3);
    add_background_object(create_plground4_2931(2944, 808), 3);
    add_background_object(create_plstonewall1_2913(2944, 1064), 3);
    add_background_object(create_plstonewall1_2913(3200, 936), 3);
    add_background_object(create_plground1_2943(3072, 920), 3);
    add_background_object(create_plground2_2944(3200, 920), 3);
    add_background_object(create_plstonewall1_2913(3200, 1064), 3);
    add_background_object(create_plstonewall1_2913(2944, 1192), 3);
    add_background_object(create_plstonewall1_2913(3200, 1192), 3);
    add_background_object(create_plstonewall7_2947(2344, 1320), 3);
    add_background_object(create_plstonewall7_2947(2424, 1216), 3);
    add_background_object(create_plstonewall7_2947(2432, 1080), 3);
    add_background_object(create_plstonewall7_2947(2560, 952), 3);
    add_background_object(create_plstonewall7_2947(2688, 824), 3);
    add_background_object(create_plstonewall7_2947(2824, 824), 3);
    add_background_object(create_plstonewall7_2947(2688, 952), 3);
    add_background_object(create_plstonewall7_2947(2568, 1080), 3);
    add_background_object(create_plstonewall7_2947(2880, 944), 3);
    add_background_object(create_plstonewall7_2947(3032, 952), 3);
    add_background_object(create_plbrickwall5_2921(320, 1320), 3);
    add_background_object(create_plbrickwall5_2921(-368, 1264), 3);
    add_background_object(create_plbrickwall4_2953(-400, 1264), 3);
    add_background_object(create_plbrickwall5_2921(512, 936), 3);
    add_background_object(create_plbrickwall6_2954(704, 936), 3);
    add_background_object(create_plbrickwall5_2921(576, 936), 3);
    add_background_object(create_plbrickwall5_2921(640, 936), 3);
    add_background_object(create_plbrickwall5_2921(512, 968), 3);
    add_background_object(create_plbrickwall5_2921(576, 968), 3);
    add_background_object(create_plbrickwall6_2954(640, 968), 3);
    add_background_object(create_plbrickwall5_2921(512, 1000), 3);
    add_background_object(create_plbrickwall6_2954(576, 1000), 3);
    add_background_object(create_plbrickwall6_2954(512, 1032), 3);
    add_background_object(create_plbrickwall4_2953(768, 1192), 3);
    add_background_object(create_plbrickwall6_2954(864, 1192), 3);
    add_background_object(create_plbrickwall4_2953(1024, 1128), 3);
    add_background_object(create_plbrickwall6_2954(1120, 1128), 3);
    add_background_object(create_plbrickwall6_2954(1536, 1464), 3);
    add_background_object(create_plbrickwall6_2954(1536, 1432), 3);
    add_background_object(create_plbrickwall6_2954(1536, 1400), 3);
    add_background_object(create_plbrickwall6_2954(1504, 1368), 3);
    add_background_object(create_plvine2_2941(1072, 1384), 3);
    add_background_object(create_plground13_2936(1824, 1576), 3);
    add_background_object(create_plground13_2936(1528, 1568), 3);
    add_background_object(create_plground13_2936(1768, 1576), 3);
    add_background_object(create_plground13_2936(1720, 1576), 3);
    add_background_object(create_plstonewall5_2932(3328, 872), 3);
    add_background_object(create_plstonewall16_2933(3392, 872), 3);
    add_background_object(create_plground1_2943(3328, 848), 3);
    add_background_object(create_plstonewall4_2937(3304, 872), 3);
    add_background_object(create_plstonewall6_2912(3304, 896), 3);
    add_background_object(create_plground3_2939(3304, 848), 3);
    add_background_object(create_plground4_2931(3456, 856), 3);
    add_background_object(create_plground3_2939(3160, 808), 3);
    add_background_object(create_plground4_2931(3184, 808), 3);
    add_background_object(create_plground10_2948(-488, 1592), 3);
    add_background_object(create_plground11_2950(-360, 1592), 3);
    add_background_object(create_plground9_2935(-360, 1696), 3);
    add_background_object(create_plground12_2949(-488, 1696), 3);
    add_background_object(create_plground13_2936(2688, 800), 3);
    add_background_object(create_plground13_2936(2880, 808), 3);
    add_background_object(create_plbrickwall4_2953(416, 776), 3);
    add_background_object(create_plbrickwall5_2921(448, 776), 3);
    add_background_object(create_plbrickwall6_2954(512, 776), 3);
    add_background_object(create_plbrickwall4_2953(608, 776), 3);
    add_background_object(create_plbrickwall5_2921(640, 776), 3);
    add_background_object(create_plbrickwall6_2954(704, 776), 3);
    add_background_object(create_plbrickwall4_2953(800, 776), 3);
    add_background_object(create_plbrickwall5_2921(832, 776), 3);
    add_background_object(create_plbrickwall6_2954(896, 776), 3);
    add_background_object(create_plbrickwall4_2953(992, 776), 3);
    add_background_object(create_plbrickwall5_2921(1024, 776), 3);
    add_background_object(create_plbrickwall6_2954(1088, 776), 3);
    add_background_object(create_plground1_2943(2752, 800), 3);
    add_background_object(create_plpinwheelstalk_2920(2000, 1224), 3);
    add_background_object(create_plpinwheelstalk_2920(2128, 1240), 3);
    add_background_object(create_plpinwheelstalk_2920(2200, 1256), 3);
    add_background_object(create_plpinwheelstalk_2920(2488, 968), 3);
    add_background_object(create_plpinwheelstalk_2920(2600, 840), 3);
    add_background_object(create_plpinwheelstalk_2920(2856, 720), 3);
    add_background_object(create_plground9_2935(1968, 1064), 3);
    add_background_object(create_plground3_2939(1944, 1144), 3);
    add_background_object(create_plground12_2949(2096, 1064), 3);
    add_background_object(create_plground4_2931(2224, 1144), 3);
    add_background_object(create_plstonewall1_2913(3456, 1064), 3);
    add_background_object(create_plstonewall1_2913(3456, 1192), 3);
    add_background_object(create_plground1_2943(3456, 1048), 3);
    add_background_object(create_plground3_2939(3432, 1048), 3);
    add_background_object(create_plstonewall3_2926(3712, 1064), 3);
    add_background_object(create_plground1_2943(3584, 1056), 3);
    add_background_object(create_plground4_2931(3712, 1064), 3);
    add_background_object(create_plstonewall1_2913(3712, 1320), 3);
    add_background_object(create_plstonewall3_2926(3712, 1192), 3);
    add_background_object(create_plstonewall1_2913(3968, 1320), 3);
    add_background_object(create_plstonewall1_2913(3968, 1448), 3);
    add_background_object(create_plground1_2943(4024, 1304), 3);
    add_background_object(create_plground3_2939(4000, 1304), 3);
    add_background_object(create_plstonewall1_2913(4224, 1320), 3);
    add_background_object(create_plstonewall1_2913(4224, 1448), 3);
    add_background_object(create_plstonewall1_2913(3456, 1320), 3);
    add_background_object(create_plstonewall1_2913(3712, 1448), 3);
    add_background_object(create_plstonewall1_2913(3968, 1576), 3);
    add_background_object(create_plstonewall7_2947(3168, 960), 3);
    add_background_object(create_plstonewall7_2947(3328, 888), 3);
    add_background_object(create_plstonewall7_2947(3304, 1016), 3);
    add_background_object(create_plstonewall7_2947(3424, 1080), 3);
    add_background_object(create_plstonewall7_2947(3568, 1096), 3);
    add_background_object(create_plstonewall1_2913(2944, 1320), 3);
    add_background_object(create_plstonewall1_2913(3200, 1320), 3);
    add_background_object(create_plstonewall1_2913(4224, 1576), 3);
    add_background_object(create_plstonewall1_2913(4352, 936), 3);
    add_background_object(create_plstonewall1_2913(4352, 1192), 3);
    add_background_object(create_plstonewall1_2913(4608, 936), 3);
    add_background_object(create_plstonewall1_2913(4608, 1192), 3);
    add_background_object(create_plground2_2944(4352, 928), 3);
    add_background_object(create_plstonewall1_2913(4864, 936), 3);
    add_background_object(create_plstonewall1_2913(4864, 1064), 3);
    add_background_object(create_plground1_2943(4736, 928), 3);
    add_background_object(create_plground2_2944(4864, 928), 3);
    add_background_object(create_plground1_2943(4992, 928), 3);
    add_background_object(create_plground2_2944(4216, 1304), 3);
    add_background_object(create_plstonewall1_2913(4480, 1448), 3);
    add_background_object(create_plstonewall1_2913(4480, 1576), 3);
    add_background_object(create_plstonewall1_2913(4736, 1448), 3);
    add_background_object(create_plstonewall1_2913(4736, 1576), 3);
    add_background_object(create_plstonewall1_2913(4480, 1320), 3);
    add_background_object(create_plstonewall1_2913(4736, 1320), 3);
    add_background_object(create_plstonewall4_2937(4328, 1192), 3);
    add_background_object(create_plstonewall4_2937(4328, 936), 3);
    add_background_object(create_plstonewall4_2937(4328, 1320), 3);
    add_background_object(create_plstonewall7_2947(3568, 1216), 3);
    add_background_object(create_plstonewall7_2947(3992, 1336), 3);
    add_background_object(create_plstonewall7_2947(4152, 1344), 3);
    add_background_object(create_plstonewall7_2947(4304, 1344), 3);
    add_background_object(create_plstonewall7_2947(4440, 1344), 3);
    add_background_object(create_plstonewall7_2947(4360, 1232), 3);
    add_background_object(create_plstonewall7_2947(4344, 976), 3);
    add_background_object(create_plstonewall7_2947(4480, 960), 3);
    add_background_object(create_plstonewall7_2947(4344, 1104), 3);
    add_background_object(create_plstonewall1_2913(4864, 1192), 3);
    add_background_object(create_plstonewall1_2913(3456, 1448), 3);
    add_background_object(create_plstonewall7_2947(3576, 1336), 3);
    add_background_object(create_plbrickwall6_2954(3840, 1192), 3);
    add_background_object(create_plbrickwall5_2921(3840, 1224), 3);
    add_background_object(create_plbrickwall6_2954(3904, 1224), 3);
    add_background_object(create_plbrickwall6_2954(3776, 1160), 3);
    add_background_object(create_plstonewall6_2912(3760, 1264), 3);
    add_background_object(create_plstonewall6_2912(3864, 1288), 3);
    add_background_object(create_plstonewall7_2947(3848, 1320), 3);
    add_background_object(create_plstonewall7_2947(3712, 1288), 3);
    add_background_object(create_plground13_2936(4152, 1312), 3);
    add_background_object(create_plground3_2939(4216, 936), 3);
    add_background_object(create_plground13_2936(4288, 936), 3);
    add_background_object(create_plground13_2936(4232, 936), 3);
    add_background_object(create_plground9_2935(4480, 848), 3);
    add_background_object(create_plstonewall10_2940(4608, 856), 3);
    add_background_object(create_plground12_2949(4608, 848), 3);
    add_background_object(create_plbrickwall5_2921(4848, 776), 3);
    add_background_object(create_plbrickwall6_2954(4880, 776), 3);
    add_background_object(create_plbrickwall4_2953(4816, 776), 3);
    add_background_object(create_plstonewall8_2927(4224, 680), 3);
    add_background_object(create_plstonewall1_2913(4224, 552), 3);
    add_background_object(create_plstonewall9_2928(4352, 680), 3);
    add_background_object(create_plstonewall9_2928(4480, 552), 3);
    add_background_object(create_plstonewall8_2927(4096, 552), 3);
    add_background_object(create_plstonewall1_2913(4096, 424), 3);
    add_background_object(create_plstonewall1_2913(4352, 424), 3);
    add_background_object(create_plstonewall1_2913(4096, 296), 3);
    add_background_object(create_plstonewall1_2913(4352, 296), 3);
    add_background_object(create_plstonewall3_2926(4608, 296), 3);
    add_background_object(create_plstonewall3_2926(4608, 424), 3);
    add_background_object(create_plstonewall4_2937(4072, 296), 3);
    add_background_object(create_plstonewall4_2937(4072, 424), 3);
    add_background_object(create_plstonewall1_2913(4096, 168), 3);
    add_background_object(create_plstonewall1_2913(4352, 168), 3);
    add_background_object(create_plstonewall1_2913(4096, 40), 3);
    add_background_object(create_plstonewall1_2913(4352, 40), 3);
    add_background_object(create_plstonewall3_2926(4608, 40), 3);
    add_background_object(create_plstonewall3_2926(4608, 168), 3);
    add_background_object(create_plstonewall4_2937(4072, 40), 3);
    add_background_object(create_plstonewall4_2937(4072, 168), 3);
    add_background_object(create_plstonewall1_2913(4096, -88), 3);
    add_background_object(create_plstonewall1_2913(4352, -88), 3);
    add_background_object(create_plstonewall3_2926(4608, -88), 3);
    add_background_object(create_plstonewall4_2937(4072, -88), 3);
    add_background_object(create_plstonewall7_2947(4176, 544), 3);
    add_background_object(create_plstonewall7_2947(4456, 472), 3);
    add_background_object(create_plstonewall7_2947(4096, 432), 3);
    add_background_object(create_plstonewall7_2947(4480, 352), 3);
    add_background_object(create_plstonewall7_2947(4096, 304), 3);
    add_background_object(create_plstonewall7_2947(4224, 424), 3);
    add_background_object(create_plstonewall7_2947(4480, 224), 3);
    add_background_object(create_plstonewall7_2947(4096, 176), 3);
    add_background_object(create_plstonewall7_2947(4480, 88), 3);
    add_background_object(create_plstonewall7_2947(4096, 40), 3);
    add_background_object(create_plstonewall6_2912(4328, 600), 3);
    add_background_object(create_plstonewall7_2947(4344, 560), 3);
    add_background_object(create_plstonewall7_2947(4288, 664), 3);
    add_background_object(create_dvceilingoverlay_915(4280, 776), 3);
    add_background_object(create_dvceilingoverlay_915(4248, 736), 3);
    add_background_object(create_dvceilingoverlay_915(4312, 736), 3);
    add_background_object(create_dvceilingoverlay_915(4344, 704), 3);
    add_background_object(create_dvceilingoverlay_915(4224, 680), 3);
    add_background_object(create_plstonewall1_2913(5120, 936), 3);
    add_background_object(create_plstonewall1_2913(5120, 1064), 3);
    add_background_object(create_plground2_2944(5120, 928), 3);
    add_background_object(create_plground1_2943(5248, 928), 3);
    add_background_object(create_plstonewall1_2913(5120, 1192), 3);
    add_background_object(create_plstonewall7_2947(4600, 936), 3);
    add_background_object(create_plstonewall7_2947(4736, 960), 3);
    add_background_object(create_plstonewall1_2913(5376, 936), 3);
    add_background_object(create_plstonewall1_2913(5376, 1064), 3);
    add_background_object(create_plground2_2944(5376, 928), 3);
    add_background_object(create_plground1_2943(5504, 928), 3);
    add_background_object(create_plstonewall1_2913(5376, 1192), 3);
    add_background_object(create_plvine1_2938(5488, 424), 3);
    add_background_object(create_plvine2_2941(5488, 496), 3);
    add_background_object(create_plbrickwall5_2921(5408, 392), 3);
    add_background_object(create_plbrickwall5_2921(5472, 392), 3);
    add_background_object(create_plbrickwall4_2953(5376, 392), 3);
    add_background_object(create_plbrickwall6_2954(5600, 392), 3);
    add_background_object(create_plbrickwall5_2921(5536, 392), 3);
    add_background_object(create_plstonewall1_2913(5632, 936), 3);
    add_background_object(create_plstonewall1_2913(5632, 1064), 3);
    add_background_object(create_plground2_2944(5632, 928), 3);
    add_background_object(create_plground1_2943(5760, 928), 3);
    add_background_object(create_plstonewall1_2913(5632, 1192), 3);
    add_background_object(create_plbrickwall4_2953(5216, 872), 3);
    add_background_object(create_plbrickwall4_2953(5344, 808), 3);
    add_background_object(create_plbrickwall4_2953(5344, 840), 3);
    add_background_object(create_plstonewall7_2947(4888, 952), 3);
    add_background_object(create_plstonewall7_2947(5040, 960), 3);
    add_background_object(create_plstonewall7_2947(5200, 960), 3);
    add_background_object(create_plstonewall7_2947(5344, 952), 3);
    add_background_object(create_plstonewall7_2947(5488, 960), 3);
    add_background_object(create_plstonewall7_2947(5624, 960), 3);
    add_background_object(create_plstonewall7_2947(5760, 960), 3);
    add_background_object(create_plstonewall1_2913(5888, 936), 3);
    add_background_object(create_plstonewall1_2913(5888, 1064), 3);
    add_background_object(create_plground2_2944(5888, 928), 3);
    add_background_object(create_plground1_2943(6016, 928), 3);
    add_background_object(create_plstonewall1_2913(5888, 1192), 3);
    add_background_object(create_plbrickwall1_2918(6016, 552), 3);
    add_background_object(create_plbrickwall3_2923(5984, 552), 3);
    add_background_object(create_plbrickwall1_2918(6016, 424), 3);
    add_background_object(create_plbrickwall3_2923(5984, 424), 3);
    add_background_object(create_plbrickwall4_2953(5984, 392), 3);
    add_background_object(create_plbrickwall5_2921(6016, 392), 3);
    add_background_object(create_plbrickwall6_2954(6048, 392), 3);
    add_background_object(create_plbrickwall4_2953(6144, 392), 3);
    add_background_object(create_plbrickwall5_2921(6176, 392), 3);
    add_background_object(create_plbrickwall6_2954(6208, 392), 3);
    add_background_object(create_plbrickwall5_2921(6144, 424), 3);
    add_background_object(create_plbrickwall5_2921(6208, 424), 3);
    add_background_object(create_plbrickwall2_2919(6112, 552), 3);
    add_background_object(create_plbrickwall6_2954(6112, 520), 3);
    add_background_object(create_plbrickwall6_2954(6112, 488), 3);
    add_background_object(create_plbrickwall5_2921(6144, 456), 3);
    add_background_object(create_plbrickwall5_2921(6208, 456), 3);
    add_background_object(create_plbrickwall5_2921(6272, 424), 3);
    add_background_object(create_plbrickwall5_2921(6336, 424), 3);
    add_background_object(create_plbrickwall5_2921(6272, 456), 3);
    add_background_object(create_plbrickwall5_2921(6336, 456), 3);
    add_background_object(create_plbrickwall4_2953(6304, 392), 3);
    add_background_object(create_plbrickwall5_2921(6336, 392), 3);
    add_background_object(create_plbrickwall6_2954(6368, 392), 3);
    add_background_object(create_plbrickwall1_2918(6144, 808), 3);
    add_background_object(create_plbrickwall1_2918(6144, 936), 3);
    add_background_object(create_plbrickwall1_2918(6272, 936), 3);
    add_background_object(create_plbrickwall1_2918(6144, 1064), 3);
    add_background_object(create_plbrickwall1_2918(6272, 1064), 3);
    add_background_object(create_plbrickwall1_2918(6400, 936), 3);
    add_background_object(create_plbrickwall1_2918(6528, 936), 3);
    add_background_object(create_plbrickwall1_2918(6400, 1064), 3);
    add_background_object(create_plbrickwall1_2918(6528, 1064), 3);
    add_background_object(create_plbrickwall5_2921(6272, 872), 3);
    add_background_object(create_plbrickwall5_2921(6336, 872), 3);
    add_background_object(create_plbrickwall5_2921(6272, 904), 3);
    add_background_object(create_plbrickwall5_2921(6336, 904), 3);
    add_background_object(create_plbrickwall6_2954(6272, 808), 3);
    add_background_object(create_plbrickwall6_2954(6336, 840), 3);
    add_background_object(create_plbrickwall5_2921(6272, 840), 3);
    add_background_object(create_plbrickwall5_2921(6400, 904), 3);
    add_background_object(create_plbrickwall6_2954(6400, 872), 3);
    add_background_object(create_plbrickwall6_2954(6464, 904), 3);
    add_background_object(create_plbrickwall1_2918(6656, 968), 3);
    add_background_object(create_plbrickwall1_2918(6656, 1096), 3);
    add_background_object(create_plbrickwall5_2921(6656, 936), 3);
    add_background_object(create_plbrickwall6_2954(6688, 936), 3);
    add_background_object(create_plbrickwall5_2921(6672, 952), 3);
    add_background_object(create_plbrickwall5_2921(6736, 952), 3);
    add_background_object(create_plbrickwall1_2918(6784, 936), 3);
    add_background_object(create_plbrickwall1_2918(6784, 1064), 3);
    add_background_object(create_plbrickwall1_2918(6784, 808), 3);
    add_background_object(create_plbrickwall3_2923(6784, 808), 3);
    add_background_object(create_plbrickwall1_2918(6912, 936), 3);
    add_background_object(create_plbrickwall1_2918(6912, 1064), 3);
    add_background_object(create_plbrickwall1_2918(6912, 808), 3);
    add_background_object(create_plbrickwall1_2918(7040, 680), 3);
    add_background_object(create_plbrickwall1_2918(7040, 552), 3);
    add_background_object(create_plbrickwall3_2923(7008, 680), 3);
    add_background_object(create_plbrickwall3_2923(7008, 552), 3);
    add_background_object(create_plbrickwall1_2918(7040, 936), 3);
    add_background_object(create_plbrickwall1_2918(7040, 1064), 3);
    add_background_object(create_plbrickwall1_2918(7040, 808), 3);
    add_background_object(create_plbrickwall5_2921(6400, 424), 3);
    add_background_object(create_plbrickwall5_2921(6464, 424), 3);
    add_background_object(create_plbrickwall5_2921(6400, 456), 3);
    add_background_object(create_plbrickwall5_2921(6464, 456), 3);
    add_background_object(create_plbrickwall1_2918(6912, 424), 3);
    add_background_object(create_plbrickwall3_2923(6880, 424), 3);
    add_background_object(create_plbrickwall1_2918(7040, 424), 3);
    add_background_object(create_plbrickwall6_2954(6528, 424), 3);
    add_background_object(create_plbrickwall6_2954(6528, 456), 3);
    add_background_object(create_plbrickwall2_2919(7136, 424), 3);
    add_background_object(create_plbrickwall2_2919(7136, 552), 3);
    add_background_object(create_plbrickwall2_2919(7136, 680), 3);
    add_background_object(create_plbrickwall2_2919(7136, 808), 3);
    add_background_object(create_plbrickwall2_2919(7136, 936), 3);
    add_background_object(create_plbrickwall1_2918(6912, 168), 3);
    add_background_object(create_plbrickwall1_2918(6784, 168), 3);
    add_background_object(create_plbrickwall5_2921(6720, 264), 3);
    add_background_object(create_plbrickwall5_2921(6656, 264), 3);
    add_background_object(create_plbrickwall5_2921(6592, 264), 3);
    add_background_object(create_plbrickwall4_2953(6560, 264), 3);
    add_background_object(create_plbrickwall4_2953(6752, 168), 3);
    add_background_object(create_plbrickwall4_2953(6752, 200), 3);
    add_background_object(create_plbrickwall4_2953(6752, 232), 3);
    add_background_object(create_plbrickwall3_2923(6752, 40), 3);
    add_background_object(create_plbrickwall1_2918(6912, 40), 3);
    add_background_object(create_plbrickwall1_2918(6784, 40), 3);
    add_background_object(create_plbrickwall3_2923(6624, -88), 3);
    add_background_object(create_plbrickwall1_2918(6912, -88), 3);
    add_background_object(create_plbrickwall1_2918(6656, -88), 3);
    add_background_object(create_plbrickwall1_2918(7040, 168), 3);
    add_background_object(create_plbrickwall1_2918(7040, 40), 3);
    add_background_object(create_plbrickwall1_2918(7040, -88), 3);
    add_background_object(create_plground3_2939(6880, 424), 3);
    add_background_object(create_plground13_2936(6896, 424), 3);
    add_background_object(create_plground13_2936(7080, 416), 3);
    add_background_object(create_plground4_2931(7144, 416), 3);
    add_background_object(create_plbrickwall1_2918(6784, -88), 3);
    add_background_object(create_plstonewall6_2912(6112, 936), 3);
    add_background_object(create_plstonewall6_2912(6096, 1056), 3);
    add_background_object(create_plground2_2944(6952, 416), 3);
    add_background_object(create_plbrickwall5_2921(5472, 360), 3);
    add_background_object(create_plbrickwall4_2953(5440, 360), 3);
    add_background_object(create_plbrickwall6_2954(5536, 360), 3);
    add_background_object(create_plstonewall1_2913(7168, 1064), 3);
    add_background_object(create_plstonewall1_2913(7168, 936), 3);
    add_background_object(create_plstonewall1_2913(7168, 808), 3);
    add_background_object(create_plstonewall10_2940(7296, 728), 3);
    add_background_object(create_plstonewall15_2942(7168, 656), 3);
    add_background_object(create_plground11_2950(7168, 640), 3);
    add_background_object(create_plstonewall1_2913(7424, 1064), 3);
    add_background_object(create_plstonewall1_2913(7424, 936), 3);
    add_background_object(create_plstonewall1_2913(7424, 808), 3);
    add_background_object(create_plground12_2949(7296, 712), 3);
    add_background_object(create_plground1_2943(7424, 792), 3);
    add_background_object(create_plground1_2943(7552, 800), 3);
    add_background_object(create_plstonewall12_2914(8192, 504), 3);
    add_background_object(create_plstonewall12_2914(7624, 512), 3);
    add_background_object(create_plstonewall11_2924(8192, 424), 3);
    add_background_object(create_plstonewall11_2924(7680, 744), 3);
    add_background_object(create_plstonewall10_2940(8128, 672), 3);
    add_background_object(create_plstonewall5_2932(7936, 688), 3);
    add_background_object(create_plstonewall5_2932(8064, 688), 3);
    add_background_object(create_plstonewall5_2932(7624, 448), 3);
    add_background_object(create_plstonewall16_2933(8000, 688), 3);
    add_background_object(create_plstonewall16_2933(7688, 448), 3);
    add_background_object(create_plstonewall1_2913(7936, 752), 3);
    add_background_object(create_plstonewall1_2913(8192, 880), 3);
    add_background_object(create_plstonewall1_2913(7680, 824), 3);
    add_background_object(create_plstonewall1_2913(7936, 880), 3);
    add_background_object(create_plstonewall14_2934(7808, 664), 3);
    add_background_object(create_plground1_2943(7624, 432), 3);
    add_background_object(create_plground9_2935(7680, 728), 3);
    add_background_object(create_plground9_2935(8192, 424), 3);
    add_background_object(create_plground12_2949(8136, 664), 3);
    add_background_object(create_plstonewall6_2912(7784, 752), 3);
    add_background_object(create_plstonewall6_2912(7888, 744), 3);
    add_background_object(create_plstonewall6_2912(8048, 696), 3);
    add_background_object(create_plground10_2948(7808, 656), 3);
    add_background_object(create_plstonewall7_2947(7664, 832), 3);
    add_background_object(create_plstonewall7_2947(7784, 768), 3);
    add_background_object(create_plstonewall7_2947(7880, 688), 3);
    add_background_object(create_plstonewall7_2947(8000, 664), 3);
    add_background_object(create_plstonewall7_2947(8120, 752), 3);
    add_background_object(create_plstonewall7_2947(8272, 768), 3);
    add_background_object(create_plground2_2944(7504, 432), 3);
    add_background_object(create_plstonewall12_2914(7496, 512), 3);
    add_background_object(create_plground3_2939(7488, 440), 3);
    add_background_object(create_plstonewall14_2934(8320, 368), 3);
    add_background_object(create_plground10_2948(8320, 352), 3);
    add_background_object(create_plstonewall12_2914(8320, 496), 3);
    add_background_object(create_plstonewall1_2913(7680, 952), 3);
    add_background_object(create_plbrickwall5_2921(7168, 232), 3);
    add_background_object(create_plbrickwall5_2921(7296, 136), 3);
    add_background_object(create_plbrickwall6_2954(7168, 264), 3);
    add_background_object(create_plbrickwall6_2954(7232, 232), 3);
    add_background_object(create_plbrickwall6_2954(7296, 200), 3);
    add_background_object(create_plbrickwall5_2921(7296, 168), 3);
    add_background_object(create_plbrickwall2_2919(7360, 72), 3);
    add_background_object(create_plbrickwall2_2919(7360, -56), 3);
    add_background_object(create_plbrickwall1_2918(7168, 104), 3);
    add_background_object(create_plbrickwall1_2918(7232, -24), 3);
    add_background_object(create_plbrickwall5_2921(7296, 104), 3);
    add_background_object(create_plbrickwall5_2921(7168, 72), 3);
    add_background_object(create_plbrickwall5_2921(7168, 40), 3);
    add_background_object(create_plbrickwall5_2921(7168, 8), 3);
    add_background_object(create_plbrickwall5_2921(7168, -24), 3);
    add_background_object(create_plstonewall12_2914(8448, 496), 3);
    add_background_object(create_plstonewall13_2915(8576, 496), 3);
    add_background_object(create_plground2_2944(8264, 736), 3);
    add_background_object(create_plstonewall1_2913(8448, 880), 3);
    add_background_object(create_plstonewall1_2913(8192, 1008), 3);
    add_background_object(create_plstonewall1_2913(8448, 1008), 3);
    add_background_object(create_plstonewall6_2912(8408, 800), 3);
    add_background_object(create_plstonewall6_2912(8592, 856), 3);
    add_background_object(create_plstonewall6_2912(8496, 848), 3);
    add_background_object(create_plstonewall6_2912(8424, 736), 3);
    add_background_object(create_plground11_2950(8520, 728), 3);
    add_background_object(create_plground2_2944(8392, 728), 3);
    add_background_object(create_plstonewall1_2913(8704, 1008), 3);
    add_background_object(create_plground1_2943(8448, 352), 3);
    add_background_object(create_plstonewall16_2933(8712, 896), 3);
    add_background_object(create_plstonewall6_2912(8632, 896), 3);
    add_background_object(create_plground12_2949(8648, 800), 3);
    add_background_object(create_plground4_2931(8776, 880), 3);
    add_background_object(create_plground2_2944(8832, 992), 3);
    add_background_object(create_plground3_2939(8768, 1000), 3);
    add_background_object(create_plground13_2936(8776, 1000), 3);
    add_background_object(create_plstonewall1_2913(7936, 1008), 3);
    add_background_object(create_plstonewall1_2913(8704, 1136), 3);
    add_background_object(create_plstonewall1_2913(8448, 1136), 3);
    add_background_object(create_plstonewall1_2913(8960, 992), 3);
    add_background_object(create_plstonewall1_2913(8960, 1120), 3);
    add_background_object(create_plstonewall7_2947(8416, 760), 3);
    add_background_object(create_plstonewall7_2947(8648, 896), 3);
    add_background_object(create_plstonewall7_2947(8536, 816), 3);
    add_background_object(create_plstonewall7_2947(8648, 1024), 3);
    add_background_object(create_plstonewall7_2947(8784, 1024), 3);
    add_background_object(create_plstonewall7_2947(7536, 832), 3);
    add_background_object(create_plstonewall7_2947(7392, 824), 3);
    add_background_object(create_plstonewall7_2947(7256, 824), 3);
    add_background_object(create_plstonewall7_2947(7168, 712), 3);
    add_background_object(create_plstonewall7_2947(8376, 384), 3);
    add_background_object(create_plstonewall7_2947(8520, 376), 3);
    add_background_object(create_plground2_2944(8960, 984), 3);
    add_background_object(create_plground2_2944(9088, 976), 3);
    add_background_object(create_plstonewall1_2913(9216, 976), 3);
    add_background_object(create_plstonewall1_2913(9216, 1104), 3);
    add_background_object(create_plground2_2944(9216, 968), 3);
    add_background_object(create_plground2_2944(9344, 960), 3);
    add_background_object(create_plstonewall7_2947(8920, 1016), 3);
    add_background_object(create_plstonewall7_2947(9056, 1008), 3);
    add_background_object(create_plstonewall7_2947(9200, 1000), 3);
    add_background_object(create_plstonewall7_2947(9336, 992), 3);
    add_background_object(create_plpinwheelstalk_2920(8912, 904), 3);
    add_background_object(create_plpinwheelstalk_2920(8912, 856), 3);
    add_background_object(create_plpinwheelstalk_2920(8984, 896), 3);
    add_background_object(create_plpinwheelstalk_2920(9080, 896), 3);
    add_background_object(create_plpinwheelstalk_2920(9080, 848), 3);
    add_background_object(create_plpinwheelstalk_2920(9168, 856), 3);
    add_background_object(create_plpinwheelstalk_2920(9240, 888), 3);
    add_background_object(create_plpinwheelstalk_2920(9336, 880), 3);
    add_background_object(create_plpinwheelstalk_2920(9336, 832), 3);
    add_background_object(create_plstonewall3_2926(8704, 368), 3);
    add_background_object(create_plground2_2944(8576, 352), 3);
    add_background_object(create_plground4_2931(8704, 352), 3);
    add_background_object(create_plground3_2939(8904, 384), 3);
    add_background_object(create_plground8_2925(8928, 264), 3);
    add_background_object(create_plstonewall21_2952(9056, 256), 3);
    add_background_object(create_plstonewall21_2952(9056, 128), 3);
    add_background_object(create_plstonewall22_2976(8928, 128), 3);
    add_background_object(create_plstonewall23_2977(8800, 128), 3);
    add_background_object(create_plstonewall1_2913(8800, 0), 3);
    add_background_object(create_plstonewall21_2952(9056, 0), 3);
    add_background_object(create_plstonewall4_2937(8712, 128), 3);
    add_background_object(create_plstonewall4_2937(8712, 0), 3);
    add_background_object(create_plstonewall6_2912(9016, 0), 3);
    add_background_object(create_plstonewall7_2947(8912, 0), 3);
    add_background_object(create_plstonewall7_2947(9056, 8), 3);
    add_background_object(create_plstonewall7_2947(9048, 128), 3);
    add_background_object(create_plstonewall5_2932(8736, 64), 3);
    add_background_object(create_plstonewall16_2933(8736, 0), 3);
    add_background_object(create_plstonewall5_2932(8736, 192), 3);
    add_background_object(create_plstonewall16_2933(8736, 128), 3);
    add_background_object(create_plstonewall24_2978(8736, 256), 3);
    add_background_object(create_plstonewall6_2912(8720, 0), 3);
    add_background_object(create_plstonewall7_2947(8752, 8), 3);
    add_background_object(create_plstonewall12_2914(8912, 448), 3);
    add_background_object(create_plstonewall12_2914(9040, 448), 3);
    add_background_object(create_plstonewall3_2926(9184, 0), 3);
    add_background_object(create_plstonewall3_2926(9184, 128), 3);
    add_background_object(create_plstonewall3_2926(9184, 256), 3);
    add_background_object(create_plstonewall6_2912(9080, 320), 3);
    add_background_object(create_plstonewall7_2947(9056, 256), 3);
    add_background_object(create_plbrickwall4_2953(7440, 640), 3);
    add_background_object(create_plbrickwall5_2921(7472, 640), 3);
    add_background_object(create_plbrickwall6_2954(7536, 640), 3);
    add_background_object(create_plbrickwall3_2923(8424, 104), 3);
    add_background_object(create_plbrickwall1_2918(8584, 104), 3);
    add_background_object(create_plbrickwall1_2918(8584, -24), 3);
    add_background_object(create_plbrickwall1_2918(8456, 104), 3);
    add_background_object(create_plbrickwall1_2918(8456, -24), 3);
    add_background_object(create_plbrickwall3_2923(8424, -24), 3);
    add_background_object(create_plbrickwall5_2921(8760, 664), 3);
    add_background_object(create_plbrickwall4_2953(8728, 664), 3);
    add_background_object(create_plbrickwall6_2954(8824, 664), 3);
    add_background_object(create_plbrickwall1_2918(9480, 448), 3);
    add_background_object(create_plbrickwall3_2923(9448, 416), 3);
    add_background_object(create_plbrickwall5_2921(9544, 416), 3);
    add_background_object(create_plbrickwall5_2921(9544, 576), 3);
    add_background_object(create_plbrickwall5_2921(9480, 416), 3);
    add_background_object(create_plbrickwall4_2953(9416, 576), 3);
    add_background_object(create_plbrickwall2_2919(9608, 416), 3);
    add_background_object(create_plbrickwall6_2954(9608, 544), 3);
    add_background_object(create_plbrickwall6_2954(9608, 576), 3);
    add_background_object(create_plbrickwall3_2923(9832, 416), 3);
    add_background_object(create_plbrickwall1_2918(9864, 416), 3);
    add_background_object(create_plbrickwall1_2918(9608, 832), 3);
    add_background_object(create_plbrickwall1_2918(9736, 832), 3);
    add_background_object(create_plstonewall1_2913(9472, 960), 3);
    add_background_object(create_plstonewall1_2913(9472, 1088), 3);
    add_background_object(create_plground2_2944(9472, 952), 3);
    add_background_object(create_plground4_2931(9600, 952), 3);
    add_background_object(create_plbrickwall5_2921(9544, 896), 3);
    add_background_object(create_plbrickwall4_2953(9512, 896), 3);
    add_background_object(create_plbrickwall4_2953(9544, 864), 3);
    add_background_object(create_plbrickwall4_2953(9576, 832), 3);
    add_background_object(create_plbrickwall5_2921(9864, 688), 3);
    add_background_object(create_plbrickwall4_2953(9832, 688), 3);
    add_background_object(create_plbrickwall6_2954(9928, 688), 3);
    add_background_object(create_plbrickwall1_2918(9736, 960), 3);
    add_background_object(create_plstonewall3_2926(9728, 960), 3);
    add_background_object(create_plbrickwall1_2918(9736, 1088), 3);
    add_background_object(create_plstonewall3_2926(9728, 1088), 3);
    add_background_object(create_plbrickwall1_2918(9864, 1088), 3);
    add_background_object(create_plstonewall1_2913(9480, 1216), 3);
    add_background_object(create_plstonewall1_2913(9736, 1216), 3);
    add_background_object(create_plstonewall7_2947(9480, 984), 3);
    add_background_object(create_plstonewall7_2947(9616, 976), 3);
    add_background_object(create_plbrickwall2_2919(9864, 960), 3);
    add_background_object(create_plbrickwall2_2919(9864, 832), 3);
    add_background_object(create_plbrickwall5_2921(9992, 512), 3);
    add_background_object(create_plbrickwall5_2921(9992, 480), 3);
    add_background_object(create_plbrickwall5_2921(9992, 448), 3);
    add_background_object(create_plbrickwall6_2954(9992, 416), 3);
    add_background_object(create_plbrickwall5_2921(10056, 512), 3);
    add_background_object(create_plbrickwall5_2921(10056, 480), 3);
    add_background_object(create_plbrickwall5_2921(10056, 448), 3);
    add_background_object(create_plbrickwall5_2921(10120, 512), 3);
    add_background_object(create_plbrickwall5_2921(10120, 480), 3);
    add_background_object(create_plbrickwall5_2921(10120, 448), 3);
    add_background_object(create_plbrickwall5_2921(10184, 512), 3);
    add_background_object(create_plbrickwall5_2921(10184, 480), 3);
    add_background_object(create_plbrickwall5_2921(10184, 448), 3);
    add_background_object(create_plbrickwall1_2918(10248, 416), 3);
    add_background_object(create_plbrickwall4_2953(10216, 416), 3);
    add_background_object(create_plbrickwall2_2919(10376, 416), 3);
    add_background_object(create_plbrickwall1_2918(9992, 1088), 3);
    add_background_object(create_plbrickwall1_2918(10120, 1088), 3);
    add_background_object(create_plstonewall1_2913(9992, 1216), 3);
    add_background_object(create_plbrickwall1_2918(10248, 1088), 3);
    add_background_object(create_plbrickwall1_2918(10376, 1088), 3);
    add_background_object(create_plstonewall1_2913(10248, 1216), 3);
    add_background_object(create_plbrickwall1_2918(10504, 1024), 3);
    add_background_object(create_plbrickwall1_2918(10504, 1152), 3);
    add_background_object(create_plbrickwall1_2918(10632, 1088), 3);
    add_background_object(create_plstonewall1_2913(10504, 1216), 3);
    add_background_object(create_plbrickwall6_2954(10632, 1024), 3);
    add_background_object(create_plbrickwall4_2953(10472, 1024), 3);
    add_background_object(create_plbrickwall6_2954(10632, 1056), 3);
    add_background_object(create_plbrickwall4_2953(10472, 1056), 3);
    add_background_object(create_plbrickwall5_2921(10376, 800), 3);
    add_background_object(create_plbrickwall4_2953(10152, 800), 3);
    add_background_object(create_plbrickwall6_2954(10440, 800), 3);
    add_background_object(create_plbrickwall5_2921(10248, 800), 3);
    add_background_object(create_plbrickwall5_2921(10248, 832), 3);
    add_background_object(create_plbrickwall5_2921(10184, 832), 3);
    add_background_object(create_plbrickwall5_2921(10184, 800), 3);
    add_background_object(create_plbrickwall5_2921(10120, 832), 3);
    add_background_object(create_plbrickwall6_2954(10504, 832), 3);
    add_background_object(create_plbrickwall5_2921(10056, 832), 3);
    add_background_object(create_plbrickwall4_2953(10024, 832), 3);
    add_background_object(create_plbrickwall5_2921(10376, 832), 3);
    add_background_object(create_plbrickwall5_2921(10248, 864), 3);
    add_background_object(create_plbrickwall5_2921(10184, 864), 3);
    add_background_object(create_plbrickwall5_2921(10120, 864), 3);
    add_background_object(create_plbrickwall6_2954(10504, 864), 3);
    add_background_object(create_plbrickwall5_2921(10056, 864), 3);
    add_background_object(create_plbrickwall4_2953(10024, 864), 3);
    add_background_object(create_plbrickwall5_2921(10376, 864), 3);
    add_background_object(create_plbrickwall5_2921(9176, 664), 3);
    add_background_object(create_plbrickwall5_2921(9112, 664), 3);
    add_background_object(create_plbrickwall5_2921(9112, 696), 3);
    add_background_object(create_plbrickwall5_2921(9176, 696), 3);
    add_background_object(create_plbrickwall6_2954(9208, 664), 3);
    add_background_object(create_plbrickwall6_2954(9240, 696), 3);
    add_background_object(create_plbrickwall4_2953(9080, 664), 3);
    add_background_object(create_plbrickwall4_2953(9080, 696), 3);
    add_background_object(create_plbrickwall5_2921(9480, 576), 3);
    add_background_object(create_plbrickwall5_2921(9448, 576), 3);
    add_background_object(create_plbrickwall4_2953(9448, 544), 3);
    add_background_object(create_plbrickwall1_2918(10760, 1088), 3);
    add_background_object(create_plbrickwall1_2918(10888, 1088), 3);
    add_background_object(create_plstonewall1_2913(10760, 1216), 3);
    add_background_object(create_plbrickwall1_2918(11016, 960), 3);
    add_background_object(create_plbrickwall1_2918(11016, 1088), 3);
    add_background_object(create_plbrickwall1_2918(11144, 1088), 3);
    add_background_object(create_plstonewall1_2913(11016, 1216), 3);
    add_background_object(create_plbrickwall2_2919(11144, 960), 3);
    add_background_object(create_plbrickwall3_2923(10984, 960), 3);
    add_background_object(create_plstonewall1_2913(11272, 1216), 3);
    add_background_object(create_plstonewall1_2913(11272, 1088), 3);
    add_background_object(create_plstonewall11_2924(11400, 1008), 3);
    add_background_object(create_plstonewall1_2913(11528, 960), 3);
    add_background_object(create_plstonewall1_2913(11528, 1088), 3);
    add_background_object(create_plstonewall1_2913(11528, 1216), 3);
    add_background_object(create_plstonewall4_2937(11248, 1088), 3);
    add_background_object(create_plground3_2939(11248, 1088), 3);
    add_background_object(create_plground8_2925(11400, 968), 3);
    add_background_object(create_plground13_2936(11272, 1088), 3);
    add_background_object(create_plground13_2936(11336, 1088), 3);
    add_background_object(create_plbrickwall5_2921(11352, 928), 3);
    add_background_object(create_plbrickwall6_2954(11384, 928), 3);
    add_background_object(create_plbrickwall4_2953(11320, 928), 3);
    add_background_object(create_plbrickwall5_2921(11352, 960), 3);
    add_background_object(create_plbrickwall6_2954(11384, 960), 3);
    add_background_object(create_plbrickwall4_2953(11320, 960), 3);
    add_background_object(create_plstonewall1_2913(11528, 704), 3);
    add_background_object(create_plstonewall1_2913(11528, 576), 3);
    add_background_object(create_plstonewall1_2913(11528, 448), 3);
    add_background_object(create_plstonewall1_2913(11272, 448), 3);
    add_background_object(create_plstonewall12_2914(11272, 576), 3);
    add_background_object(create_plstonewall13_2915(11400, 576), 3);
    add_background_object(create_plbrickwall5_2921(11336, 736), 3);
    add_background_object(create_plbrickwall6_2954(11400, 736), 3);
    add_background_object(create_plbrickwall4_2953(10984, 736), 3);
    add_background_object(create_plbrickwall5_2921(11336, 768), 3);
    add_background_object(create_plbrickwall6_2954(11400, 768), 3);
    add_background_object(create_plbrickwall4_2953(11304, 768), 3);
    add_background_object(create_plbrickwall5_2921(11272, 736), 3);
    add_background_object(create_plbrickwall5_2921(11208, 736), 3);
    add_background_object(create_plbrickwall5_2921(11016, 736), 3);
    add_background_object(create_plbrickwall5_2921(11080, 736), 3);
    add_background_object(create_plbrickwall5_2921(11144, 736), 3);
    add_background_object(create_plstonewall4_2937(11248, 448), 3);
    add_background_object(create_plbrickwall5_2921(10312, 800), 3);
    add_background_object(create_plbrickwall5_2921(10312, 832), 3);
    add_background_object(create_plbrickwall5_2921(10312, 864), 3);
    add_background_object(create_plstonewall12_2914(11528, 832), 3);
    add_background_object(create_plstonewall13_2915(11656, 832), 3);
    add_background_object(create_plstonewall3_2926(11528, 960), 3);
    add_background_object(create_plbrickwall1_2918(9864, 96), 3);
    add_background_object(create_plbrickwall1_2918(9992, 96), 3);
    add_background_object(create_plbrickwall1_2918(9864, -32), 3);
    add_background_object(create_plbrickwall1_2918(9992, -32), 3);
    add_background_object(create_plbrickwall1_2918(10120, -32), 3);
    add_background_object(create_plbrickwall2_2919(10120, 96), 3);
    add_background_object(create_plbrickwall3_2923(9832, 96), 3);
    add_background_object(create_plbrickwall3_2923(9832, -32), 3);
    add_background_object(create_plground3_2939(11248, 432), 3);
    add_background_object(create_plground2_2944(11272, 424), 3);
    add_background_object(create_plground1_2943(11400, 424), 3);
    add_background_object(create_plground1_2943(11528, 432), 3);
    add_background_object(create_plground2_2944(11656, 432), 3);
    add_background_object(create_plbrickwall1_2918(10248, -32), 3);
    add_background_object(create_plbrickwall2_2919(10376, -32), 3);
    add_background_object(create_plstonewall16_2933(10800, 384), 3);
    add_background_object(create_plstonewall5_2932(10736, 384), 3);
    add_background_object(create_plstonewall16_2933(10672, 384), 3);
    add_background_object(create_plstonewall5_2932(10608, 384), 3);
    add_background_object(create_plstonewall11_2924(10624, 304), 3);
    add_background_object(create_plground3_2939(10600, 384), 3);
    add_background_object(create_plground8_2925(10624, 264), 3);
    add_background_object(create_plstonewall21_2952(10752, 256), 3);
    add_background_object(create_plstonewall21_2952(10752, 128), 3);
    add_background_object(create_plstonewall22_2976(10624, 128), 3);
    add_background_object(create_plstonewall23_2977(10496, 128), 3);
    add_background_object(create_plstonewall1_2913(10496, 0), 3);
    add_background_object(create_plstonewall21_2952(10752, 0), 3);
    add_background_object(create_plstonewall4_2937(10408, 128), 3);
    add_background_object(create_plstonewall4_2937(10408, 0), 3);
    add_background_object(create_plstonewall6_2912(10712, 0), 3);
    add_background_object(create_plstonewall7_2947(10608, 0), 3);
    add_background_object(create_plstonewall7_2947(10752, 8), 3);
    add_background_object(create_plstonewall7_2947(10744, 128), 3);
    add_background_object(create_plstonewall5_2932(10432, 64), 3);
    add_background_object(create_plstonewall16_2933(10432, 0), 3);
    add_background_object(create_plstonewall5_2932(10432, 192), 3);
    add_background_object(create_plstonewall16_2933(10432, 128), 3);
    add_background_object(create_plstonewall24_2978(10432, 256), 3);
    add_background_object(create_plstonewall6_2912(10416, 0), 3);
    add_background_object(create_plstonewall7_2947(10448, 8), 3);
    add_background_object(create_plstonewall12_2914(10608, 448), 3);
    add_background_object(create_plstonewall12_2914(10736, 448), 3);
    add_background_object(create_plstonewall3_2926(10880, 0), 3);
    add_background_object(create_plstonewall3_2926(10880, 128), 3);
    add_background_object(create_plstonewall3_2926(10880, 256), 3);
    add_background_object(create_plstonewall6_2912(10776, 320), 3);
    add_background_object(create_plstonewall7_2947(10752, 256), 3);
    add_background_object(create_plbrickwall5_2921(10440, 864), 3);
    add_background_object(create_plbrickwall5_2921(10440, 832), 3);
    add_background_object(create_plstonewall1_2913(11784, 960), 3);
    add_background_object(create_plstonewall1_2913(11784, 1088), 3);
    add_background_object(create_plstonewall7_2947(11280, 456), 3);
    add_background_object(create_plstonewall7_2947(11456, 456), 3);
    add_background_object(create_plstonewall7_2947(11632, 472), 3);
    add_background_object(create_plstonewall7_2947(11528, 592), 3);
    add_background_object(create_plstonewall7_2947(11528, 704), 3);
    add_background_object(create_plstonewall7_2947(11656, 696), 3);
    add_background_object(create_plstonewall7_2947(11520, 960), 3);
    add_background_object(create_plstonewall7_2947(11520, 1080), 3);
    add_background_object(create_plstonewall7_2947(11400, 1112), 3);
    add_background_object(create_plstonewall7_2947(11272, 1120), 3);
    add_background_object(create_plground3_2939(11760, 960), 3);
    add_background_object(create_plstonewall7_2947(11656, 976), 3);
    add_background_object(create_plground2_2944(11784, 952), 3);
    add_background_object(create_plstonewall1_2913(11784, 1216), 3);
    add_background_object(create_plstonewall1_2913(12040, 960), 3);
    add_background_object(create_plstonewall1_2913(12040, 1088), 3);
    add_background_object(create_plstonewall1_2913(12040, 1216), 3);
    add_background_object(create_plstonewall7_2947(11792, 992), 3);
    add_background_object(create_plstonewall7_2947(11936, 976), 3);
    add_background_object(create_plstonewall12_2914(11784, 832), 3);
    add_background_object(create_plstonewall5_2932(11784, 768), 3);
    add_background_object(create_plstonewall16_2933(11848, 768), 3);
    add_background_object(create_plstonewall3_2926(11784, 704), 3);
    add_background_object(create_plstonewall3_2926(11784, 576), 3);
    add_background_object(create_plstonewall3_2926(11784, 448), 3);
    add_background_object(create_plground4_2931(11784, 432), 3);
    add_background_object(create_plstonewall1_2913(12168, 832), 3);
    add_background_object(create_plstonewall1_2913(12296, 960), 3);
    add_background_object(create_plstonewall1_2913(12296, 1088), 3);
    add_background_object(create_plstonewall1_2913(12296, 1216), 3);
    add_background_object(create_plstonewall1_2913(12280, 704), 3);
    add_background_object(create_plground8_2925(12040, 840), 3);
    add_background_object(create_plground1_2943(11912, 952), 3);
    add_background_object(create_plstonewall12_2914(11912, 832), 3);
    add_background_object(create_plstonewall5_2932(11912, 768), 3);
    add_background_object(create_plstonewall16_2933(11976, 768), 3);
    add_background_object(create_plground1_2943(11896, 760), 3);
    add_background_object(create_plground4_2931(12024, 768), 3);
    add_background_object(create_plground13_2936(11840, 760), 3);
    add_background_object(create_plground3_2939(11776, 760), 3);
    add_background_object(create_plground13_2936(11800, 760), 3);
    add_background_object(create_plstonewall7_2947(11656, 584), 3);
    add_background_object(create_plstonewall1_2913(12024, 448), 3);
    add_background_object(create_plstonewall1_2913(12280, 448), 3);
    add_background_object(create_plground3_2939(12000, 432), 3);
    add_background_object(create_plground1_2943(12024, 432), 3);
    add_background_object(create_plstonewall6_2912(12280, 776), 3);
    add_background_object(create_plstonewall4_2937(12512, 576), 3);
    add_background_object(create_plstonewall1_2913(12424, 832), 3);
    add_background_object(create_plstonewall1_2913(12536, 704), 3);
    add_background_object(create_plstonewall1_2913(12536, 576), 3);
    add_background_object(create_plstonewall1_2913(12536, 448), 3);
    add_background_object(create_plground13_2936(12168, 808), 3);
    add_background_object(create_plground13_2936(12216, 808), 3);
    add_background_object(create_plstonewall4_2937(12256, 704), 3);
    add_background_object(create_plground1_2943(12152, 440), 3);
    add_background_object(create_plground2_2944(12280, 440), 3);
    add_background_object(create_plstonewall6_2912(12272, 680), 3);
    add_background_object(create_plstonewall6_2912(12392, 680), 3);
    add_background_object(create_plbrickwall5_2921(12392, 648), 3);
    add_background_object(create_plbrickwall5_2921(12328, 648), 3);
    add_background_object(create_plbrickwall4_2953(12296, 648), 3);
    add_background_object(create_plstonewall1_2913(11776, 0), 3);
    add_background_object(create_plstonewall4_2937(11752, 0), 3);
    add_background_object(create_plstonewall3_2926(12032, 0), 3);
    add_background_object(create_plstonewall1_2913(12792, 448), 3);
    add_background_object(create_plstonewall1_2913(12792, 576), 3);
    add_background_object(create_plstonewall1_2913(12792, 704), 3);
    add_background_object(create_plstonewall7_2947(12080, 976), 3);
    add_background_object(create_plstonewall7_2947(12160, 848), 3);
    add_background_object(create_plstonewall7_2947(12280, 704), 3);
    add_background_object(create_plstonewall7_2947(12288, 832), 3);
    add_background_object(create_plstonewall7_2947(12208, 960), 3);
    add_background_object(create_plstonewall7_2947(12424, 712), 3);
    add_background_object(create_plstonewall7_2947(12560, 704), 3);
    add_background_object(create_plstonewall7_2947(12552, 592), 3);
    add_background_object(create_plstonewall7_2947(12144, 464), 3);
    add_background_object(create_plstonewall7_2947(12016, 456), 3);
    add_background_object(create_plground1_2943(12408, 440), 3);
    add_background_object(create_plground2_2944(12536, 440), 3);
    add_background_object(create_plground1_2943(12664, 440), 3);
    add_background_object(create_plground2_2944(12792, 440), 3);
    add_background_object(create_plstonewall7_2947(12688, 464), 3);
    add_background_object(create_plstonewall7_2947(12272, 464), 3);
    add_background_object(create_plstonewall7_2947(12408, 464), 3);
    add_background_object(create_plstonewall7_2947(12552, 472), 3);
    add_background_object(create_plground1_2943(12920, 440), 3);
    add_background_object(create_plstonewall1_2913(12680, 832), 3);
    add_background_object(create_plstonewall1_2913(12552, 960), 3);
    add_background_object(create_plstonewall1_2913(12552, 1088), 3);
    add_background_object(create_plstonewall1_2913(12552, 1216), 3);
    add_background_object(create_plstonewall1_2913(9224, 1216), 3);
    add_background_object(create_plstonewall1_2913(9480, 1344), 3);
    add_background_object(create_plstonewall1_2913(9736, 1344), 3);
    add_background_object(create_plstonewall1_2913(9992, 1344), 3);
    add_background_object(create_plstonewall1_2913(10248, 1344), 3);
    add_background_object(create_plstonewall1_2913(10504, 1344), 3);
    add_background_object(create_plstonewall1_2913(10760, 1344), 3);
    add_background_object(create_plstonewall1_2913(11016, 1344), 3);
    add_background_object(create_plstonewall1_2913(11272, 1344), 3);
    add_background_object(create_plstonewall1_2913(11528, 1344), 3);
    add_background_object(create_plstonewall1_2913(11784, 1344), 3);
    add_object(create_enemysunflora_2960(11056, 920), 3);
    add_object(create_playerstartingpoint_358(109, 1813), 3);
    add_object(create_enemysleepgas_2889(-200, 888), 3);
    add_object(create_enemycacteon_990(2608, 905), 3);
    add_object(create_layerchangeswitch2_1239(7112, -136), 3);
    add_object(create_objecttimegate_2965(961, 1776), 3);
    add_object(create_objecttimegatepiece_2966(985, 1777), 3);
    add_object(create_objecttimegatepiece_2966(993, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1001, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1009, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1017, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1025, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1033, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1041, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1049, 1777), 3);
    add_object(create_objecttimegatepiece_2966(1057, 1777), 3);
    add_object(create_gimmickbridgelog_2339(-440, 904), 3);
    add_object(create_enemystinger_2891(-585, 1296), 3);
    add_object(create_yellowspringleft_436(1104, 1800), 3);
    add_object(create_yellowspringleft_436(1104, 1768), 3);
    add_object(create_yellowspringleft_436(1104, 1736), 3);
    add_object(create_objectcyclonetop_2963(968, 1544), 3);
    add_object(create_hazardspikesup_950(1008, 1544), 3);
    add_object(create_hazardspikesup_950(1040, 1544), 3);
    add_object(create_hazardspikesup_950(1072, 1544), 3);
    add_object(create_hazardspikesup_950(1104, 1544), 3);
    add_object(create_gimmickbridge12logs_353(1184, 1312), 3);
    add_object(create_objecttimegate_2965(1473, 1072), 3);
    add_object(create_objecttimegatepiece_2966(1497, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1505, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1513, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1521, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1529, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1537, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1545, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1553, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1561, 1073), 3);
    add_object(create_objecttimegatepiece_2966(1569, 1073), 3);
    add_object(create_objectcrystal_279(637, 1690), 3);
    add_object(create_objectcrystal_279(605, 1690), 3);
    add_object(create_objectcrystal_279(669, 1690), 3);
    add_object(create_objectcrystal_279(701, 1690), 3);
    add_object(create_objectcrystal_279(573, 1690), 3);
    add_object(create_monitor1up_410(320, 1288), 3);
    add_object(create_enemystingernest_2961(1088, 1460), 3);
    add_object(create_enemysunflora_2960(1088, 1080), 3);
    add_object(create_monitorwatershield_327(1832, 1544), 3);
    add_object(create_monitorcrystals_324(1864, 1544), 3);
    add_object(create_monitorcrystals_324(1800, 1544), 3);
    add_object(create_objectcrystal_279(2405, 1066), 3);
    add_object(create_objectcrystal_279(2405, 1106), 3);
    add_object(create_objectcrystal_279(2405, 1146), 3);
    add_object(create_objectcrystal_279(2405, 1186), 3);
    add_object(create_objectcrystal_279(2405, 1226), 3);
    add_object(create_gimmickbridge12logs_353(2968, 752), 3);
    add_object(create_objectcrystal_279(3005, 850), 3);
    add_object(create_objectcrystal_279(3125, 850), 3);
    add_object(create_objectcrystal_279(3085, 850), 3);
    add_object(create_objectcrystal_279(3045, 850), 3);
    add_object(create_objectcrystal_279(3005, 778), 3);
    add_object(create_objectcrystal_279(3125, 778), 3);
    add_object(create_objectcrystal_279(3085, 778), 3);
    add_object(create_objectcrystal_279(3045, 778), 3);
    add_object(create_pllayer01_2958(-360, 1984), 3);
    add_object(create_pllayer02_2959(-488, 2064), 3);
    add_object(create_pllayer11_2957(-488, 1792), 3);
    add_object(create_pllayer12_2964(-360, 1872), 3);
    add_object(create_monitorkeystone_562(656, 744), 3);
    add_object(create_monitorkeystone_562(848, 744), 3);
    add_object(create_monitorkeystone_562(1040, 744), 3);
    add_object(create_monitorkeystone_562(464, 744), 3);
    add_object(create_enemycacteon_990(2904, 793), 3);
    add_object(create_enemycacteon_990(3208, 913), 3);
    add_object(create_enemycacteon_990(2776, 785), 3);
    add_object(create_monitorwoodshield_325(816, 1112), 3);
    add_object(create_yellowspringup_434(1456, 1352), 3);
    add_object(create_objectcrystal_279(1349, 1074), 3);
    add_object(create_objectcrystal_279(1301, 1074), 3);
    add_object(create_objectcrystal_279(1253, 1074), 3);
    add_object(create_objectcrystal_279(1205, 1074), 3);
    add_object(create_objectpinwheel_2956(1944, 1248), 3);
    add_object(create_objectpinwheel_2956(2016, 1224), 3);
    add_object(create_objectpinwheel_2956(2080, 1264), 3);
    add_object(create_objectpinwheel_2956(2144, 1240), 3);
    add_object(create_objectpinwheel_2956(2216, 1256), 3);
    add_object(create_objectpinwheel_2956(1848, 1264), 3);
    add_object(create_objectpinwheel_2956(2504, 968), 3);
    add_object(create_objectpinwheel_2956(2448, 1008), 3);
    add_object(create_objectpinwheel_2956(2616, 840), 3);
    add_object(create_objectpinwheel_2956(2872, 720), 3);
    add_object(create_objectpinwheel_2956(2744, 752), 3);
    add_object(create_yellowspringup_434(2632, 904), 3);
    add_object(create_yellowspringup_434(2504, 1032), 3);
    add_object(create_enemystinger_2891(583, 1744), 3);
    add_object(create_enemystinger_2891(727, 1744), 3);
    add_object(create_levellagoonplatform1_2967(1568, 1440), 3);
    add_object(create_gimmickbowarrow_2979(3440, 776), 3);
    add_object(create_levellagoonplatform2_2980(4072, 1120), 3);
    add_object(create_objecttimegate_2965(4865, 688), 3);
    add_object(create_objecttimegatepiece_2966(4889, 689), 3);
    add_object(create_objecttimegatepiece_2966(4897, 689), 3);
    add_object(create_objecttimegatepiece_2966(4905, 689), 3);
    add_object(create_objecttimegatepiece_2966(4913, 689), 3);
    add_object(create_objecttimegatepiece_2966(4921, 689), 3);
    add_object(create_objecttimegatepiece_2966(4929, 689), 3);
    add_object(create_objecttimegatepiece_2966(4937, 689), 3);
    add_object(create_objecttimegatepiece_2966(4945, 689), 3);
    add_object(create_objecttimegatepiece_2966(4953, 689), 3);
    add_object(create_objecttimegatepiece_2966(4961, 689), 3);
    add_object(create_enemystinger_2891(5623, 552), 3);
    add_object(create_enemystingernest_2961(5504, 572), 3);
    add_object(create_enemyterreonleftshoulder_2981(5004, 908), 3);
    add_object(create_enemyterreonrightshoulder_2982(5052, 908), 3);
    add_object(create_enemyterreonleftleg_2983(4987, 902), 3);
    add_object(create_enemyterreonrightleg_2984(5068, 902), 3);
    add_object(create_enemyterreon_2985(5027, 902), 3);
    add_object(create_effectterreonwarning_2986(5028, 848), 3);
    add_object(create_enemyterreonleftshoulder_2981(6556, 908), 3);
    add_object(create_enemyterreonrightshoulder_2982(6604, 908), 3);
    add_object(create_enemyterreonleftleg_2983(6539, 902), 3);
    add_object(create_enemyterreonrightleg_2984(6620, 902), 3);
    add_object(create_enemyterreon_2985(6579, 902), 3);
    add_object(create_gimmickbowarrow_2979(5520, 728), 3);
    add_object(create_enemyterreonleftshoulder_2981(6036, 780), 3);
    add_object(create_enemyterreonrightshoulder_2982(6084, 780), 3);
    add_object(create_enemyterreonleftleg_2983(6019, 774), 3);
    add_object(create_enemyterreonrightleg_2984(6100, 774), 3);
    add_object(create_enemyterreon_2985(6059, 774), 3);
    add_object(create_yellowspringup_434(6720, 936), 3);
    add_object(create_yellowspringup_434(6752, 936), 3);
    add_object(create_enemycacteon_990(5312, 857), 3);
    add_object(create_enemycacteon_990(5592, 793), 3);
    add_object(create_objectcrystal_279(5717, 714), 3);
    add_object(create_objectcrystal_279(5749, 714), 3);
    add_object(create_objectcrystal_279(5781, 714), 3);
    add_object(create_objectcrystal_279(5813, 714), 3);
    add_object(create_objectcrystal_279(5685, 714), 3);
    add_object(create_objectcrystal_279(6765, 778), 3);
    add_object(create_objectcrystal_279(6733, 778), 3);
    add_object(create_objectcrystal_279(6765, 738), 3);
    add_object(create_objectcrystal_279(6733, 738), 3);
    add_object(create_enemysunflora_2960(6192, 352), 3);
    add_object(create_enemysunflora_2960(6352, 352), 3);
    add_object(create_objectcyclonetop_2963(6968, 776), 3);
    add_object(create_objectcrystal_279(6765, 674), 3);
    add_object(create_objectcrystal_279(6765, 626), 3);
    add_object(create_objectcrystal_279(6765, 578), 3);
    add_object(create_objectcrystal_279(6765, 530), 3);
    add_object(create_monitorwoodshield_325(6688, 232), 3);
    add_object(create_monitorcrystals_324(6656, 232), 3);
    add_object(create_monitorcrystals_324(6624, 232), 3);
    add_object(create_monitorkeystone_562(5488, 328), 3);
    add_object(create_objectcrystal_279(7213, 442), 3);
    add_object(create_objectcrystal_279(7221, 482), 3);
    add_object(create_objectcrystal_279(7229, 522), 3);
    add_object(create_objectcrystal_279(7237, 562), 3);
    add_object(create_objectcrystal_279(7245, 602), 3);
    add_object(create_pllayer01_2958(7936, 576), 3);
    add_object(create_pllayer02_2959(8064, 504), 3);
    add_object(create_pllayer11_2957(7880, 512), 3);
    add_object(create_pllayer12_2964(7752, 440), 3);
    add_object(create_pllayer12_2964(8008, 592), 3);
    add_object(create_layerchangeto0_405(7656, 752), 3);
    add_object(create_layerchangeto0_405(7656, 688), 3);
    add_object(create_layerchangeto0_405(7656, 624), 3);
    add_object(create_layerchangeto0_405(7656, 560), 3);
    add_object(create_layerchangeswitch_404(7680, 376), 3);
    add_object(create_layerchangeswitch_404(7680, 312), 3);
    add_object(create_layerchangeswitch_404(8200, 440), 3);
    add_object(create_layerchangeswitch_404(8200, 376), 3);
    add_object(create_layerchangeswitch_404(8200, 312), 3);
    add_object(create_objectcrystal_279(7749, 418), 3);
    add_object(create_objectcrystal_279(7797, 426), 3);
    add_object(create_objectcrystal_279(7837, 442), 3);
    add_object(create_objectcrystal_279(7869, 474), 3);
    add_object(create_objectcrystal_279(7901, 506), 3);
    add_object(create_objectcrystal_279(8229, 466), 3);
    add_object(create_objectcrystal_279(8261, 442), 3);
    add_object(create_objectcrystal_279(8293, 418), 3);
    add_object(create_objectcrystal_279(8325, 386), 3);
    add_object(create_objectcrystal_279(8357, 354), 3);
    add_object(create_effectterreonwarning_2986(6060, 720), 3);
    add_object(create_effectterreonwarning_2986(6580, 848), 3);
    add_object(create_levellagoonplatform1_2967(7272, 432), 3);
    add_object(create_objecttimegate_2965(8009, 328), 3);
    add_object(create_objecttimegatepiece_2966(8033, 329), 3);
    add_object(create_objecttimegatepiece_2966(8041, 329), 3);
    add_object(create_objecttimegatepiece_2966(8049, 329), 3);
    add_object(create_objecttimegatepiece_2966(8057, 329), 3);
    add_object(create_objecttimegatepiece_2966(8065, 329), 3);
    add_object(create_objecttimegatepiece_2966(8073, 329), 3);
    add_object(create_objecttimegatepiece_2966(8081, 329), 3);
    add_object(create_objecttimegatepiece_2966(8089, 329), 3);
    add_object(create_objecttimegatepiece_2966(8097, 329), 3);
    add_object(create_objecttimegatepiece_2966(8105, 329), 3);
    add_object(create_layerchangeswitch_404(7680, 248), 3);
    add_object(create_layerchangeswitch_404(8200, 248), 3);
    add_object(create_layerchangeswitch_404(7680, 184), 3);
    add_object(create_layerchangeswitch_404(8200, 184), 3);
    add_object(create_layerchangeswitch_404(7680, 120), 3);
    add_object(create_layerchangeswitch_404(8200, 120), 3);
    add_object(create_layerchangeswitch_404(7680, 56), 3);
    add_object(create_layerchangeswitch_404(8200, 56), 3);
    add_object(create_layerchangeswitch_404(7680, -8), 3);
    add_object(create_layerchangeswitch_404(8200, -8), 3);
    add_object(create_objectpinwheel_2956(8856, 952), 3);
    add_object(create_objectpinwheel_2956(8928, 856), 3);
    add_object(create_objectpinwheel_2956(9000, 896), 3);
    add_object(create_objectpinwheel_2956(9096, 848), 3);
    add_object(create_objectpinwheel_2956(9184, 856), 3);
    add_object(create_objectpinwheel_2956(9256, 888), 3);
    add_object(create_objectpinwheel_2956(9352, 832), 3);
    add_object(create_objectpinwheel_2956(9440, 920), 3);
    add_object(create_enemystinger_2891(7567, 712), 3);
    add_object(create_enemystinger_2891(8015, 440), 3);
    add_object(create_objectcrystal_279(8813, 274), 3);
    add_object(create_objectcrystal_279(8813, 314), 3);
    add_object(create_objectcyclonetop_2963(8856, 888), 3);
    add_object(create_enemystinger_2891(7567, 592), 3);
    add_object(create_objectcyclonetop_2963(8904, 672), 3);
    add_object(create_gimmickbridge12logs_353(9640, 360), 3);
    add_object(create_gimmickbowarrow_2979(9928, 616), 3);
    add_object(create_yellowspringup_434(9704, 816), 3);
    add_object(create_yellowspringup_434(9736, 816), 3);
    add_object(create_enemycacteon_990(10152, 433), 3);
    add_object(create_enemystinger_2891(10223, 656), 3);
    add_object(create_enemystinger_2891(10335, 648), 3);
    add_object(create_enemystinger_2891(10407, 696), 3);
    add_object(create_enemystinger_2891(10479, 688), 3);
    add_object(create_enemystinger_2891(10583, 728), 3);
    add_object(create_enemystinger_2891(10559, 664), 3);
    add_object(create_enemystinger_2891(10455, 608), 3);
    add_object(create_enemystinger_2891(10287, 728), 3);
    add_object(create_enemyterreonleftshoulder_2981(10284, 1060), 3);
    add_object(create_enemyterreonrightshoulder_2982(10332, 1060), 3);
    add_object(create_enemyterreonleftleg_2983(10267, 1054), 3);
    add_object(create_enemyterreonrightleg_2984(10348, 1054), 3);
    add_object(create_enemyterreon_2985(10307, 1054), 3);
    add_object(create_effectterreonwarning_2986(10308, 1000), 3);
    add_object(create_yellowspringupright_433(9240, 664), 3);
    add_object(create_yellowspringup_434(9416, 560), 3);
    add_object(create_redspringleft_442(11304, 928), 3);
    add_object(create_redspringleft_442(11304, 960), 3);
    add_object(create_redspringright_441(11176, 960), 3);
    add_object(create_redspringright_441(11176, 992), 3);
    add_object(create_redspringright_441(11176, 1024), 3);
    add_object(create_redspringright_441(11176, 1056), 3);
    add_object(create_enemystinger_2891(10655, 696), 3);
    add_object(create_enemystinger_2891(10727, 688), 3);
    add_object(create_enemystinger_2891(10831, 728), 3);
    add_object(create_enemystinger_2891(10807, 664), 3);
    add_object(create_enemystinger_2891(10703, 608), 3);
    add_object(create_enemystinger_2891(11223, 664), 3);
    add_object(create_enemystingernest_2961(11304, 668), 3);
    add_object(create_gimmickbowarrow_2979(11360, 880), 3);
    add_object(create_objectcyclonetop_2963(11088, 672), 3);
    add_object(create_enemyterreonleftshoulder_2981(10284, 388), 3);
    add_object(create_enemyterreonrightshoulder_2982(10332, 388), 3);
    add_object(create_enemyterreonleftleg_2983(10267, 382), 3);
    add_object(create_enemyterreonrightleg_2984(10348, 382), 3);
    add_object(create_enemyterreon_2985(10307, 382), 3);
    add_object(create_effectterreonwarning_2986(10308, 328), 3);
    add_object(create_enemycacteon_990(10296, 401), 3);
    add_object(create_enemysunflora_2960(9544, 376), 3);
    add_object(create_enemysunflora_2960(9880, 376), 3);
    add_object(create_enemysunflora_2960(10168, 1040), 3);
    add_object(create_enemysunflora_2960(10568, 984), 3);
    add_object(create_yellowspringup_434(10952, 1072), 3);
    add_object(create_layerchangeswitch2_1239(8000, 200), 3);
    add_object(create_layerchangeswitch2_1239(8000, 264), 3);
    add_object(create_layerchangeswitch2_1239(8000, 336), 3);
    add_object(create_layerchangeswitch2_1239(8000, 400), 3);
    add_object(create_layerchangeswitch2_1239(8000, 464), 3);
    add_object(create_layerchangeswitch2_1239(8000, 136), 3);
    add_object(create_layerchangeswitch2_1239(8000, 72), 3);
    add_object(create_layerchangeswitch2_1239(8000, 8), 3);
    add_object(create_objectcrystal_279(11093, 602), 3);
    add_object(create_objectcrystal_279(11069, 570), 3);
    add_object(create_objectcrystal_279(11117, 570), 3);
    add_object(create_objectcrystal_279(11141, 530), 3);
    add_object(create_objectcrystal_279(11045, 530), 3);
    add_object(create_objectcrystal_279(11069, 490), 3);
    add_object(create_objectcrystal_279(11117, 490), 3);
    add_object(create_objectcrystal_279(11093, 458), 3);
    add_object(create_enemystinger_2891(11151, 608), 3);
    add_object(create_monitorcrystals_324(10712, 1056), 3);
    add_object(create_monitorcrystals_324(10840, 1056), 3);
    add_object(create_monitorcrystals_324(10392, 1056), 3);
    add_object(create_monitorcrystals_324(10216, 768), 3);
    add_object(create_monitorcrystals_324(10328, 768), 3);
    add_object(create_objectcrystal_279(10517, 274), 3);
    add_object(create_objectcrystal_279(10517, 314), 3);
    add_object(create_yellowspringupright_433(10472, 800), 3);
    add_object(create_yellowspringupright_433(10504, 800), 3);
    add_object(create_breakableplrock_2987(11528, 832), 3);
    add_object(create_breakableplrock_2987(11576, 832), 3);
    add_object(create_breakableplrock_2987(11624, 832), 3);
    add_object(create_breakableplrock_2987(11672, 832), 3);
    add_object(create_gimmickbridge12logs_353(11808, 376), 3);
    add_object(create_monitor1up_410(12392, 616), 3);
    add_object(create_redspringup_440(11872, 744), 3);
    add_object(create_redspringup_440(11840, 744), 3);
    add_object(create_redspringup_440(11808, 744), 3);
    add_object(create_yellowspringdown_437(11776, 128), 3);
    add_object(create_yellowspringdown_437(11808, 128), 3);
    add_object(create_yellowspringdown_437(11840, 128), 3);
    add_object(create_yellowspringdown_437(11872, 128), 3);
    add_object(create_yellowspringdown_437(11904, 128), 3);
    add_object(create_yellowspringdown_437(11936, 128), 3);
    add_object(create_yellowspringdown_437(11968, 128), 3);
    add_object(create_yellowspringdown_437(12000, 128), 3);
    add_object(create_laddertop_357(1088, 1351), 3);
    add_object(create_laddertop_357(5504, 399), 3);
    add_object(create_laddertop_357(11304, 567), 3);
    add_object(create_objectcodec_354(1474, 1533), 3);
    add_object(create_objectcodec_354(5546, 341), 3);
    add_object(create_objectcodec_354(12234, 637), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_plstonewall4_2937(2408, 1064), 4);
    add_background_object(create_plstonewall4_2937(2408, 1192), 4);
    add_background_object(create_plground3_2939(2408, 1048), 4);
    add_background_object(create_plground2_2944(2432, 1040), 4);
    add_background_object(create_plground2_2944(2560, 912), 4);
    add_background_object(create_plstonewall4_2937(2536, 936), 4);
    add_background_object(create_plground3_2939(2536, 920), 4);
    add_background_object(create_plstonewall4_2937(2664, 808), 4);
    add_background_object(create_plground3_2939(2664, 800), 4);
    add_background_object(create_plstonewall5_2932(7752, 456), 4);
    add_background_object(create_plstonewall12_2914(7752, 520), 4);
    add_background_object(create_plstonewall18_2968(7880, 536), 4);
    add_background_object(create_plstonewall17_2969(7752, 456), 4);
    add_background_object(create_plstonewall17_2969(8008, 608), 4);
    add_background_object(create_plground11_2950(7752, 440), 4);
    add_background_object(create_plground11_2950(8008, 592), 4);
    add_background_object(create_plground12_2949(7880, 512), 4);
    add_background_object(create_plstonewall3_2926(8800, 128), 4);
    add_background_object(create_plstonewall4_2937(9032, 128), 4);
    add_background_object(create_plstonewall4_2937(9032, 256), 4);
    add_background_object(create_plstonewall12_2914(8800, 128), 4);
    add_background_object(create_plstonewall13_2915(8928, 128), 4);
    add_background_object(create_plstonewall4_2937(11504, 960), 4);
    add_background_object(create_plstonewall4_2937(11504, 704), 4);
    add_background_object(create_plstonewall4_2937(11504, 576), 4);
    add_background_object(create_plstonewall13_2915(11656, 832), 4);
    add_background_object(create_plstonewall12_2914(11528, 832), 4);
    add_background_object(create_plstonewall4_2937(12144, 832), 4);
    add_background_object(create_plground3_2939(12144, 808), 4);
    add_background_object(create_plstonewall12_2914(12024, 576), 4);
    add_background_object(create_plstonewall13_2915(12152, 576), 4);
    add_background_object(create_plstonewall12_2914(12280, 576), 4);
    add_background_object(create_plstonewall13_2915(12408, 576), 4);
    add_background_object(create_plstonewall12_2914(11776, 128), 4);
    add_background_object(create_plstonewall13_2915(11904, 128), 4);
    add_background_object(create_plstonewall3_2926(10496, 128), 4);
    add_background_object(create_plstonewall4_2937(10728, 128), 4);
    add_background_object(create_plstonewall4_2937(10728, 256), 4);
    add_background_object(create_plstonewall12_2914(10496, 128), 4);
    add_background_object(create_plstonewall13_2915(10624, 128), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
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
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
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
    add_object(create_masterinput_20(-464, 176), 5);
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
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
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
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
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
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
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
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
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
    loop_stinger_running = false;
    loop_stinger_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_51, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_51, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_51, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_51, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_51, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_51, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_51, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_51, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_51, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_51, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_51, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_51, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_51, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_51, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_51, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_51, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_51, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_51, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_51, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_51, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_51, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_51, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_51, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_51, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_51, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_51, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_51, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_51, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_51, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_51, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_51, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_51, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_51, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_51, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_51, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_51, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_51, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_51, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_51, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_51, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_51, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_51, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_51, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_51, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_51, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_51, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_51, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_51, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_51, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_51, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_51, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_51, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_51, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_51, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1550_16 = loop_count;
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
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
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
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
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
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
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
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
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
    not_always_1741_14 = loop_count;
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
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_11949()
{
    // event 1468_52
    {
        if (!(group_main_engine_1)) goto event_1468_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1468_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1468_52_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridgelog_412_instances, gimmickbridge12logs_353_instances)) goto event_1468_52_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11-loop_gimmik_bridge12_rightside_index))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1468_52_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(4))*((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(1));
        }
    }
    event_1468_52_end: ;
}
void Frames::event_func_11950()
{
    // event 1469_52
    {
        if (!(group_main_engine_1)) goto event_1469_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1469_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1469_52_end;
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(4, ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(4)-((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(5));
    }
    event_1469_52_end: ;
}
void Frames::loop_gimmik_bridge12_rightside_52()
{
    event_func_11949();
    event_func_11950();
}
void Frames::event_func_11951()
{
    // event 1847_52
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_1847_52_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage8_ogg_205, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1847_52_end: ;
}
void Frames::loop_play_music_5_52()
{
    event_func_11951();
}
void Frames::event_func_11952()
{
    // event 1466_52
    {
        if (!(group_main_engine_1)) goto event_1466_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1466_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1466_52_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridgelog_412_instances, gimmickbridge12logs_353_instances)) goto event_1466_52_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_gimmik_bridge12_leftside_index))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1466_52_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(180-((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(2))*((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(1));
        }
    }
    event_1466_52_end: ;
}
void Frames::event_func_11953()
{
    // event 1467_52
    {
        if (!(group_main_engine_1)) goto event_1467_52_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1467_52_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1467_52_end;
        ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.set(2, ((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(2)+((Active*)get_instance(gimmickbridge12logs_353_instances))->alterables->values.get(3));
    }
    event_1467_52_end: ;
}
void Frames::loop_gimmik_bridge12_leftside_52()
{
    event_func_11952();
    event_func_11953();
}
void Frames::loop_wrapper_sound_hurt1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_52(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_52(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_sound_idle7_52(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_52(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_52(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_52(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_52(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_52(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_sound_explode8_52(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_52(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
