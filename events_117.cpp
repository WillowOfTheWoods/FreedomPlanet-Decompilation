#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9471()
{
    // event 1448_39
    {
        if (!(group_main_engine_1)) goto event_1448_39_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto event_1448_39_end;
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 0.1);
        }
    }
    event_1448_39_end: ;
}
void Frames::event_func_9472()
{
    // event 1449_39
    {
        if (!(group_main_engine_1)) goto event_1449_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (97))) goto event_1449_39_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto event_1449_39_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(9);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(9);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(9);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(9);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(9);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(9);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->alterables->values.get(4))*40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->get_y()+cos_deg(((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->alterables->values.get(4))*40);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, (((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->alterables->values.get(4)+360)%math_helper%360);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, (((Active*)get_instance(gimmickflyingseed_2327_instances, default_active_instance))->alterables->values.get(4)+360)%math_helper%360);
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.05, 4));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(gimmickflyingseed_2327_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1449_39_end: ;
}
void Frames::event_func_9473()
{
    // event 1450_39
    bool or_result_1450_39 = false;
    bool or_temp_result_1450_39_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_0_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto or_event_1450_39_0_end;
        playersensorleftbig_391_instances.clear_selection();
        for (ObjectIterator it(playersensorleftbig_391_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorleftbig_391_instances.has_selection()) goto or_event_1450_39_0_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_0 = true;
    }
    or_event_1450_39_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    gimmickflyingseed_2327_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1450_39_0) {
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
        gimmickflyingseed_2327_instances.save_selection();
    }
    // event 1450_39
    bool or_temp_result_1450_39_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_1_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto or_event_1450_39_1_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_1450_39_1_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_1 = true;
    }
    or_event_1450_39_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1450_39_1) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        gimmickflyingseed_2327_instances.save_selection();
    }
    // event 1450_39
    bool or_temp_result_1450_39_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_2_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto or_event_1450_39_2_end;
        playersensortopbig_395_instances.clear_selection();
        for (ObjectIterator it(playersensortopbig_395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensortopbig_395_instances.has_selection()) goto or_event_1450_39_2_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_2 = true;
    }
    or_event_1450_39_2_end: ;
    playersensortopbig_395_instances.clear_saved_selection();
    if (or_temp_result_1450_39_2) {
        playersensortopbig_395_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        gimmickflyingseed_2327_instances.save_selection();
    }
    // event 1450_39
    bool or_temp_result_1450_39_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_3_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto or_event_1450_39_3_end;
        playersensorbottombig_397_instances.clear_selection();
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1450_39_3_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_3 = true;
    }
    or_event_1450_39_3_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_1450_39_3) {
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        gimmickflyingseed_2327_instances.save_selection();
    }
    // event 1450_39
    bool or_temp_result_1450_39_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_4_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_4_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1450_39_4_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_4 = true;
    }
    or_event_1450_39_4_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_1450_39_4) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1450_39
    bool or_temp_result_1450_39_5 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_39_5_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (97))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_39_5_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto or_event_1450_39_5_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_8)) goto or_event_1450_39_5_end;
        or_result_1450_39 = true;
        or_temp_result_1450_39_5 = true;
        or_event_1450_39_5_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1450_39_5) {
            gimmickflyingseed_2327_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1450_39) goto or_final_or_event_1450_39_5_end;
        qualifier_8.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        gimmickflyingseed_2327_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1450_39_3 || or_temp_result_1450_39_5) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1450_39_5) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1450_39_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1450_39_2) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1450_39_0 || or_temp_result_1450_39_1 || or_temp_result_1450_39_2 || or_temp_result_1450_39_3 || or_temp_result_1450_39_4 || or_temp_result_1450_39_5) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1450_39_0 || or_temp_result_1450_39_1 || or_temp_result_1450_39_2 || or_temp_result_1450_39_3 || or_temp_result_1450_39_5) {
            gimmickflyingseed_2327_instances.restore_selection();
        }
        if (or_temp_result_1450_39_4) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1450_39_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 1);
            ((Active*)*it)->alterables->values.set(19, 1);
        }
    }
    or_final_or_event_1450_39_5_end: ;
}
void Frames::event_func_9474()
{
    // event 1451_39
    {
        if (!(group_main_engine_1)) goto event_1451_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (97))) goto event_1451_39_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1451_39_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1451_39_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-1))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto event_1451_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4.5);
    }
    event_1451_39_end: ;
}
void Frames::event_func_9475()
{
    // event 1452_39
    {
        if (!(group_main_engine_1)) goto event_1452_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (97))) goto event_1452_39_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1452_39_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) != (0))) goto event_1452_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1452_39_end: ;
}
void Frames::event_func_9476()
{
    // event 1453_39
    {
        if (!(group_main_engine_1)) goto event_1453_39_end;
        gimmickflyingseed_2327_instances.clear_selection();
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-80))) { it.deselect(); continue; }
        }
        if (!gimmickflyingseed_2327_instances.has_selection()) goto event_1453_39_end;
        for (ObjectIterator it(gimmickflyingseed_2327_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1453_39_end: ;
}
void Frames::event_func_9477()
{
    // event 1454_39
    {
        if (!(group_main_engine_1)) goto event_1454_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1454_39_end;
        playersensorbottombig_397_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, jcslidingplatform_2414_instances)) goto event_1454_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1454_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1);
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->get_x()+150);
        }
        media.play_id(SOUND_COMMON_COLLAPSE_428, -1, 1);
    }
    event_1454_39_end: ;
}
void Frames::event_func_9478()
{
    // event 1455_39
    {
        if (!(group_main_engine_1)) goto event_1455_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) < (10))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1455_39_end;
        FrameObject * single_instance_1455_39_0; single_instance_1455_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(jcslidingplatform_2414_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1455_39_0 == NULL)
                    single_instance_1455_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1455_39_0))->set_y(((Active*)single_instance_1455_39_0)->get_y()+((Active*)get_single(jcslidingplatform_2414_instances, default_active_instance))->alterables->values.get(20)*15);
        ((Active*)((Active*)single_instance_1455_39_0))->set_x(((Active*)single_instance_1455_39_0)->get_x()+((Active*)get_single(jcslidingplatform_2414_instances, default_active_instance))->alterables->values.get(20)*15);
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(20, 1);
        }
        ((Active*)((Active*)single_instance_1455_39_0))->set_angle(randrange(360), 0);
    }
    event_1455_39_end: ;
}
void Frames::event_func_9479()
{
    // event 1456_39
    {
        if (!(group_main_engine_1)) goto event_1456_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1456_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(16));
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(17));
            ((Active*)*it)->alterables->values.add(16, 0.1);
            ((Active*)*it)->alterables->values.add(17, 0.1);
        }
        FrameObject * single_instance_1456_39_0; single_instance_1456_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(jcslidingplatform_2414_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1456_39_0 == NULL)
                    single_instance_1456_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1456_39_0))->alterables->values.set(0, randrange(154));
        ((Active*)((Active*)single_instance_1456_39_0))->set_y(((Active*)single_instance_1456_39_0)->get_y()+((Active*)single_instance_1456_39_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1456_39_0))->set_x(((Active*)single_instance_1456_39_0)->get_x()+((Active*)single_instance_1456_39_0)->alterables->values.get(0));
    }
    event_1456_39_end: ;
}
void Frames::event_func_9480()
{
    // event 1457_39
    {
        if (!(group_main_engine_1)) goto event_1457_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (((Active*)*it)->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1457_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(16));
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(17));
            ((Active*)*it)->alterables->values.add(17, 0.2);
            ((Active*)*it)->alterables->values.set(17, get_min(((Active*)*it)->alterables->values.get(17)+0.1, 15));
        }
    }
    event_1457_39_end: ;
}
void Frames::event_func_9481()
{
    // event 1459_39
    {
        if (!(group_main_engine_1)) goto event_1459_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)*it)->alterables->values.get(19)))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1459_39_end;
        jcslidingplatformlandpoint_2415_instances.clear_selection();
        if (!check_overlap(jcslidingplatform_2414_instances, jcslidingplatformlandpoint_2415_instances)) goto event_1459_39_end;
        for (ObjectIterator it(jcslidingplatformlandpoint_2415_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 180);
        }
    }
    event_1459_39_end: ;
}
void Frames::event_func_9482()
{
    // event 1460_39
    {
        if (!(group_main_engine_1)) goto event_1460_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1460_39_end;
        jcslidingplatformlandpoint_2415_instances.clear_selection();
        if (!check_overlap(jcslidingplatform_2414_instances, jcslidingplatformlandpoint_2415_instances)) goto event_1460_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_single(jcslidingplatformlandpoint_2415_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1460_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 2);
            ((Active*)*it)->alterables->values.set(9, ((Active*)get_single(jcslidingplatformlandpoint_2415_instances, it.current_index, default_active_instance))->get_y());
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), ((Active*)get_single(jcslidingplatform_2414_instances, default_active_instance))->alterables->values.get(17)*0.5));
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 0);
        }
    }
    event_1460_39_end: ;
}
void Frames::event_func_9483()
{
    // event 1461_39
    {
        if (!(group_main_engine_1)) goto event_1461_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (2))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1461_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(16));
            ((Active*)*it)->alterables->values.set(16, get_max(((Active*)*it)->alterables->values.get(16)-0.1, 0));
        }
    }
    event_1461_39_end: ;
}
void Frames::event_func_9484()
{
    // event 1462_39
    {
        if (!(group_main_engine_1)) goto event_1462_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1462_39_end;
        if (!check_not_overlap(jcslidingplatform_2414_instances, jcslidingplatformlandpoint_2415_instances)) goto event_1462_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1);
        }
    }
    event_1462_39_end: ;
}
void Frames::event_func_9485()
{
    // event 1463_39
    {
        if (!(group_main_engine_1)) goto event_1463_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1463_39_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1463_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)-(((Active*)*it)->get_action_y()-((Active*)*it)->get_y())))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1463_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 3);
            ((Active*)*it)->alterables->values.set(17, ((Active*)*it)->alterables->values.get(17)*0.5);
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
    }
    event_1463_39_end: ;
}
void Frames::event_func_9486()
{
    // event 1464_39
    {
        if (!(group_main_engine_1)) goto event_1464_39_end;
        jcslidingplatform_2414_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)-(((Active*)*it)->get_action_y()-((Active*)*it)->get_y())))) { it.deselect(); continue; }
        }
        if (!jcslidingplatform_2414_instances.has_selection()) goto event_1464_39_end;
        for (ObjectIterator it(jcslidingplatform_2414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(16));
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(17));
            ((Active*)*it)->alterables->values.set(17, get_max(((Active*)*it)->alterables->values.get(17)-0.1, -1));
            ((Active*)*it)->alterables->values.set(16, get_max(((Active*)*it)->alterables->values.get(16)-0.04, 0));
        }
    }
    event_1464_39_end: ;
}
void Frames::event_func_9487()
{
    // event 1465_39
    {
        if (!(group_main_engine_1)) goto event_1465_39_end;
        jcslidingplatformmask_2363_instances.clear_selection();
        for (ObjectIterator it(jcslidingplatformmask_2363_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(jcslidingplatform_2414_instances, it.current_index));
            if (parent == NULL) goto pos_end_1465_39_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1465_39_0: ;
        }
    }
    event_1465_39_end: ;
}
void Frames::event_func_9488()
{
    // event 1471_39
    {
        if (!(group_main_engine_1)) goto event_1471_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1471_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-200);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-200);
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1471_39_end: ;
}
void Frames::event_func_9489()
{
    // event 1472_39
    {
        if (!(group_main_engine_1)) goto event_1472_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_top()-30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1472_39_end;
        FrameObject * single_instance_1472_39_0; single_instance_1472_39_0 = pick_random(enemymeteorroller_2421_instances);
        if (single_instance_1472_39_0 == NULL) goto event_1472_39_end;
        ((Active*)((Active*)single_instance_1472_39_0))->alterables->values.set(3, 2);
        ((Active*)((Active*)single_instance_1472_39_0))->force_animation(8);
        ((Active*)((Active*)single_instance_1472_39_0))->set_visible(true);
        FrameObject * single_instance_1472_39_1; single_instance_1472_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectwarning_1513(((Active*)single_instance_1472_39_0)->x + 0, ((Active*)single_instance_1472_39_0)->y + 0), ((Active*)single_instance_1472_39_0)->layer);
            if (single_instance_1472_39_1 == NULL)
                single_instance_1472_39_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1472_39_1))->set_x(((Active*)single_instance_1472_39_0)->alterables->values.get(4));
        ((Active*)((Active*)single_instance_1472_39_1))->set_y(((Active*)single_instance_1472_39_0)->alterables->values.get(5)+20);
        ((Active*)((Active*)single_instance_1472_39_1))->set_visible(true);
        ((Active*)((Active*)single_instance_1472_39_0))->alterables->flags.disable(6);
        ((Active*)((Active*)single_instance_1472_39_0))->alterables->flags.disable(16);
    }
    event_1472_39_end: ;
}
void Frames::event_func_9490()
{
    // event 1473_39
    {
        if (!(group_main_engine_1)) goto event_1473_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1473_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+5, ((Active*)*it)->alterables->values.get(4)));
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+5, ((Active*)*it)->alterables->values.get(5)));
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1473_39_end: ;
}
void Frames::event_func_9491()
{
    // event 1474_39
    {
        if (!(group_main_engine_1)) goto event_1474_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1474_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(5);
        }
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1474_39_end: ;
}
void Frames::event_func_9492()
{
    // event 1475_39
    {
        if (!(group_main_engine_1)) goto event_1475_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (8))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1475_39_end;
        FrameObject * single_instance_1475_39_0; single_instance_1475_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1475_39_0 == NULL)
                    single_instance_1475_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1475_39_0))->alterables->values.set(0, cos_deg(((Active*)get_single(enemymeteorroller_2421_instances, default_active_instance))->alterables->values.get(8)*45)*6);
        ((Active*)((Active*)single_instance_1475_39_0))->alterables->values.set(1, sin_deg(((Active*)get_single(enemymeteorroller_2421_instances, default_active_instance))->alterables->values.get(8)*45)*6);
        ((Active*)((Active*)single_instance_1475_39_0))->force_speed(50);
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1475_39_end: ;
}
void Frames::event_func_9493()
{
    // event 1476_39
    {
        if (!(group_main_engine_1)) goto event_1476_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1476_39_end;
        effectwarning_1065_instances.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, effectwarning_1065_instances)) goto event_1476_39_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1476_39_end: ;
}
void Frames::event_func_9494()
{
    // event 1477_39
    {
        if (!(group_main_engine_1)) goto event_1477_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) < (2))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1477_39_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, playercharactersensor_383_instances)) goto event_1477_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1477_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1477_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1477_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1477_39_end: ;
}
void Frames::event_func_9495()
{
    // event 1478_39
    {
        if (!(group_main_engine_1)) goto event_1478_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1478_39_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_19)) goto event_1478_39_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1478_39_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1478_39_end: ;
}
void Frames::event_func_9496()
{
    // event 1479_39
    {
        if (!(group_main_engine_1)) goto event_1479_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1479_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1479_39_end: ;
}
void Frames::event_func_9497()
{
    // event 1480_39
    {
        if (!(group_main_engine_1)) goto event_1480_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1480_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1480_39_end: ;
}
void Frames::event_func_9498()
{
    // event 1481_39
    {
        if (!(group_main_engine_1)) goto event_1481_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1481_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1481_39_end: ;
}
void Frames::event_func_9499()
{
    // event 1483_39
    {
        if (!(group_main_engine_1)) goto event_1483_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1483_39_end;
        if (test_obstacle(((Active*)get_single(enemymeteorroller_2421_instances, default_active_instance))->get_x(), ((Active*)get_single(enemymeteorroller_2421_instances, default_active_instance))->get_box_index(3)-1)) goto event_1483_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+(0.5-(((Active*)*it)->alterables->flags.get(1)*0.45)), 12));
        }
    }
    event_1483_39_end: ;
}
void Frames::event_func_9500()
{
    // event 1484_39
    {
        if (!(group_main_engine_1)) goto event_1484_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1484_39_end;
        {
            SavedSelection extra_enemymeteorroller_2421_instances(enemymeteorroller_2421_instances);
            for (SavedIterator it(extra_enemymeteorroller_2421_instances); !it.end(); ++it) {
                foreach_instance_mfloor = ((Active*)*it);
                foreach_mfloor_39();
            }
        }
    }
    event_1484_39_end: ;
}
void Frames::event_func_9501()
{
    // event 1486_39
    {
        if (!(group_main_engine_1)) goto event_1486_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1486_39_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1486_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1486_39_end;
        FrameObject * single_instance_1486_39_0; single_instance_1486_39_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1486_39_0 == NULL)
                    single_instance_1486_39_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        ((Active*)((Active*)single_instance_1486_39_0))->set_x(((Active*)get_single(enemymeteorroller_2421_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1486_39_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1486_39_end: ;
}
void Frames::event_func_9502()
{
    // event 1487_39
    {
        if (!(group_main_engine_1)) goto event_1487_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1487_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->force_animation(9);
        }
    }
    event_1487_39_end: ;
}
void Frames::event_func_9503()
{
    // event 1488_39
    bool or_result_1488_39 = false;
    bool or_temp_result_1488_39_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1488_39_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1488_39_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1488_39_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1488_39_0_end;
        or_result_1488_39 = true;
        or_temp_result_1488_39_0 = true;
    }
    or_event_1488_39_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1488_39_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1488_39
    bool or_temp_result_1488_39_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1488_39_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1488_39_1_end;
        or_result_1488_39 = true;
        or_temp_result_1488_39_1 = true;
        or_event_1488_39_1_end: ;
        if (or_temp_result_1488_39_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1488_39) goto or_final_or_event_1488_39_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1488_39_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1488_39_0 || or_temp_result_1488_39_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1488_39_0; single_instance_1488_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1488_39_0 == NULL)
                    single_instance_1488_39_0 = new_obj;
            }
        }
        FrameObject * single_instance_1488_39_1; single_instance_1488_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1488_39_1 == NULL)
                    single_instance_1488_39_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_39();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1488_39_1_end: ;
}
void Frames::event_func_9504()
{
    // event 1491_39
    {
        if (!(group_main_engine_1)) goto event_1491_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1491_39_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1491_39_end: ;
}
void Frames::event_func_9505()
{
    // event 1492_39
    {
        if (!(group_main_engine_1)) goto event_1492_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemymeteorroller_2421_instances, it.current_index));
            if (parent == NULL) goto pos_end_1492_39_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1492_39_0: ;
        }
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(enemymeteorroller_2421_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemymeteorroller_2421_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->set_visible(false);
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1492_39_end: ;
}
void Frames::event_func_9506()
{
    // event 1493_39
    {
        if (!(group_main_engine_1)) goto event_1493_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymeteorrollerflame_2420_instances.has_selection()) goto event_1493_39_end;
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1493_39_end: ;
}
void Frames::event_func_9507()
{
    // event 1494_39
    {
        if (!(group_main_engine_1)) goto event_1494_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymeteorrollerflame_2420_instances.has_selection()) goto event_1494_39_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymeteorrollerflame_2420_instances, playercharactersensor_383_instances)) goto event_1494_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1494_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1494_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1494_39_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 15);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, default_active_instance))->alterables->values.get(9)));
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, default_active_instance))->alterables->values.get(9)));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(enemymeteorrollerflame_2420_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
    }
    event_1494_39_end: ;
}
void Frames::event_func_9508()
{
    // event 1495_39
    {
        if (!(group_main_engine_1)) goto event_1495_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymeteorrollerflame_2420_instances.has_selection()) goto event_1495_39_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1495_39_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymeteorrollerflame_2420_instances, playercharactersensor_383_instances)) goto event_1495_39_end;
        FrameObject * single_instance_1495_39_0; single_instance_1495_39_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1495_39_0 == NULL)
                    single_instance_1495_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1495_39_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1495_39_0))->set_x(((Active*)single_instance_1495_39_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1495_39_0))->set_y(((Active*)single_instance_1495_39_0)->get_y()-10+randrange(21));
    }
    event_1495_39_end: ;
}
void Frames::event_func_9509()
{
    // event 1496_39
    {
        if (!(group_main_engine_1)) goto event_1496_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymeteorrollerflame_2420_instances.has_selection()) goto event_1496_39_end;
        if (!check_not_overlap(enemymeteorrollerflame_2420_instances, playercharactersensor_383_instances)) goto event_1496_39_end;
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1496_39_end: ;
}
void Frames::event_func_9510()
{
    // event 1497_39
    {
        if (!(group_main_engine_1)) goto event_1497_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (60))) { it.deselect(); continue; }
        }
        if (!enemymeteorrollerflame_2420_instances.has_selection()) goto event_1497_39_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1497_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1497_39_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1497_39_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
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
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
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
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1497_39_end: ;
}
void Frames::event_func_9511()
{
    // event 1498_39
    {
        if (!(group_main_engine_1)) goto event_1498_39_end;
        if (!((enemymeteorrollerflame_2420_instances.size()) > (enemymeteorroller_2421_instances.size()))) goto event_1498_39_end;
        enemymeteorrollerflame_2420_instances.clear_selection();
        FrameObject * single_instance_1498_39_0; single_instance_1498_39_0 = pick_random(enemymeteorrollerflame_2420_instances);
        if (single_instance_1498_39_0 == NULL) goto event_1498_39_end;
        ((Active*)((Active*)single_instance_1498_39_0))->destroy();
    }
    event_1498_39_end: ;
}
void Frames::event_func_9512()
{
    // event 1499_39
    {
        if (!(group_main_engine_1)) goto event_1499_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1499_39_end;
        // icache destruction
        bossneerahitbox_2465_instances.clear_selection();
        enemyballoon_1947_instances.clear_selection();
        enemydrone_2222_instances.clear_selection();
        bosscrystalbasherface_3192_instances.clear_selection();
        gimmickspikechain1_3844_instances.clear_selection();
        minibossganseki_1490_instances.clear_selection();
        enemyseeker2_2711_instances.clear_selection();
        enemybuoybuoy_2418_instances.clear_selection();
        enemysporepod_1005_instances.clear_selection();
        enemyseeker_2648_instances.clear_selection();
        minibosstredd_1044_instances.clear_selection();
        minibossbulldozerdoor_1718_instances.clear_selection();
        enemyobelisk_3035_instances.clear_selection();
        bossmserphead_3585_instances.clear_selection();
        enemylavasquiddebris_2677_instances.clear_selection();
        bossroboshrimpsegment_2657_instances.clear_selection();
        enemybladeorbiter_3153_instances.clear_selection();
        enemyufo_4156_instances.clear_selection();
        enemymallet_3939_instances.clear_selection();
        enemysharktorpedo_2423_instances.clear_selection();
        bossroboshrimp_2658_instances.clear_selection();
        enemysunflora_2960_instances.clear_selection();
        enemyextractorhead_1177_instances.clear_selection();
        enemyduster_1958_instances.clear_selection();
        enemydragonfly_944_instances.clear_selection();
        enemytankbot_2821_instances.clear_selection();
        enemybeastiris_3353_instances.clear_selection();
        bossmantalithhead_1598_instances.clear_selection();
        enemyorb_4152_instances.clear_selection();
        bossmmillahead_3680_instances.clear_selection();
        bosspantherhitbox_2034_instances.clear_selection();
        enemygansekijr_816_instances.clear_selection();
        minibosschomperball_811_instances.clear_selection();
        minibossironworm_675_instances.clear_selection();
        minibossufo_1763_instances.clear_selection();
        minibosswretchnidweakspot_954_instances.clear_selection();
        enemywallpusher_2723_instances.clear_selection();
        bossmantalithhitbox2_1604_instances.clear_selection();
        objecttarget_367_instances.clear_selection();
        enemylavasquid_2721_instances.clear_selection();
        enemystingernest_2961_instances.clear_selection();
        bossrobosquid_2752_instances.clear_selection();
        parallaxorb_3289_instances.clear_selection();
        bossgunshiphitbox_2536_instances.clear_selection();
        enemystarflounder_1006_instances.clear_selection();
        enemywallstinger_3006_instances.clear_selection();
        bossholodragonhitspot3_3071_instances.clear_selection();
        enemytrafficle2_1758_instances.clear_selection();
        enemygatlinggun_3650_instances.clear_selection();
        enemyrotorbladedeath_2126_instances.clear_selection();
        objectwastebin_1948_instances.clear_selection();
        enemybikeninjamask_3171_instances.clear_selection();
        bossholodragonhitspot1_3069_instances.clear_selection();
        bossholodragoneye2_3072_instances.clear_selection();
        enemyterreonleftleg_2983_instances.clear_selection();
        enemytrafficle3_1759_instances.clear_selection();
        bosssnakebody_995_instances.clear_selection();
        enemydrillsat_3281_instances.clear_selection();
        enemyplantturretus_2365_instances.clear_selection();
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        enemytrafficle1_1757_instances.clear_selection();
        enemyrotorblade_2205_instances.clear_selection();
        enemybubblorbiter_2443_instances.clear_selection();
        bosskujackertailtarget_2109_instances.clear_selection();
        caravanengine_1395_instances.clear_selection();
        gimmickboostblock_1747_instances.clear_selection();
        enemycacteon_990_instances.clear_selection();
        bosssatellite_2251_instances.clear_selection();
        enemyroller_1943_instances.clear_selection();
        bosscancerforcehead_4170_instances.clear_selection();
        enemyterreon_2985_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        shrine3_1390_instances.clear_selection();
        enemyghettoshell_1971_instances.clear_selection();
        bosssnakehitbox_999_instances.clear_selection();
        hazardorbitbeambase_3633_instances.clear_selection();
        enemyhopper_1168_instances.clear_selection();
        enemypelletizer_2304_instances.clear_selection();
        enemysaucer_2812_instances.clear_selection();
        hazardgiantsword_3043_instances.clear_selection();
        enemysentinel_1496_instances.clear_selection();
        parallaxthundercarrier_3291_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        bossdail_3359_instances.clear_selection();
        minibosssamu_1876_instances.clear_selection();
        enemysaucerdebris_2761_instances.clear_selection();
        enemyrocketpuncher_3160_instances.clear_selection();
        enemyseeker3_2710_instances.clear_selection();
        bosslaseriris_3102_instances.clear_selection();
        enemyorb2_4162_instances.clear_selection();
        enemyrocketpunchershield_3162_instances.clear_selection();
        enemydnacannon_2264_instances.clear_selection();
        enemyterreonrightleg_2984_instances.clear_selection();
        enemyslug_1182_instances.clear_selection();
        minibossbulldozer_1719_instances.clear_selection();
        bossclawhitbox_1388_instances.clear_selection();
        bosssyntaxspider_2743_instances.clear_selection();
        bossserphitbox_1867_instances.clear_selection();
        bossgrappler_2316_instances.clear_selection();
        enemyspiderbeamer_3729_instances.clear_selection();
        enemybullfrag_2417_instances.clear_selection();
        enemyhoppermkii_2200_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
        minibossbonegolem_1576_instances.clear_selection();
        minibossgolem_1252_instances.clear_selection();
        enemypounder_3419_instances.clear_selection();
        enemysuperturretus_1828_instances.clear_selection();
        enemythundercarrier_4153_instances.clear_selection();
        bossboulder_1064_instances.clear_selection();
        bosskujackerhead_2113_instances.clear_selection();
        brevonmechweakspot_3316_instances.clear_selection();
        objectbluepot_1565_instances.clear_selection();
        hazardspinmine_3326_instances.clear_selection();
        enemymetalpup_3149_instances.clear_selection();
        bosschopper_2216_instances.clear_selection();
        bossspadehitbox_2232_instances.clear_selection();
        bossholodragonhitspot2_3070_instances.clear_selection();
        minibosschomperhitbox_818_instances.clear_selection();
        enemycoilhead_1782_instances.clear_selection();
        enemymagmeon_2208_instances.clear_selection();
        chancecube_366_instances.clear_selection();
        bossmantalithhitbox1_1603_instances.clear_selection();
        enemyshockpuppet_3150_instances.clear_selection();
        enemymagnetizer_2300_instances.clear_selection();
        objectpot_1185_instances.clear_selection();
        lamppostfront_1778_instances.clear_selection();
        enemypushuphitbox_2653_instances.clear_selection();
        enemyhoppermissile_3942_instances.clear_selection();
        enemystinger_2891_instances.clear_selection();
        bossholodragonclaw_3068_instances.clear_selection();
        enemyiris_1183_instances.clear_selection();
        enemyturretus_938_instances.clear_selection();
        parallaxufo_3292_instances.clear_selection();
        enemyaxleturret_2201_instances.clear_selection();
        syntax_4163_instances.clear_selection();
        enemyfirefly_742_instances.clear_selection();
        bosssparky_3327_instances.clear_selection();
        brevonhitbox_3781_instances.clear_selection();
        enemyslime_741_instances.clear_selection();
        hazardshuriken_3154_instances.clear_selection();
        enemyflarecannon_1820_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        enemyfirespitter_1385_instances.clear_selection();
        enemyelitemask_2511_instances.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_20)) goto event_1499_39_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1499_39_end;
        FrameObject * single_instance_1499_39_0; single_instance_1499_39_0 = pick_random(qualifier_20);
        if (single_instance_1499_39_0 == NULL) goto event_1499_39_end;
        ((Active*)((Active*)single_instance_1499_39_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1499_39_0))->alterables->values.set(23, -6);
        ((Active*)((Active*)single_instance_1499_39_0))->alterables->values.set(24, 6);
        ((Active*)((Active*)single_instance_1499_39_0))->alterables->values.sub(0, 5);
        {
            ((Active*)single_instance_1499_39_0)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_1499_39_end: ;
}
void Frames::event_func_9513()
{
    // event 1501_39
    {
        if (!(group_main_engine_1)) goto event_1501_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1501_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1501_39_end: ;
}
void Frames::event_func_9514()
{
    // event 1502_39
    {
        if (!(group_main_engine_1)) goto event_1502_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1502_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(10)-1);
        }
    }
    event_1502_39_end: ;
}
void Frames::event_func_9515()
{
    // event 1503_39
    {
        if (!(group_main_engine_1)) goto event_1503_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1503_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(8)+((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9)+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1503_39_end: ;
}
void Frames::event_func_9516()
{
    // event 1504_39
    {
        if (!(group_main_engine_1)) goto event_1504_39_end;
        enemyplantturretushat_2366_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyplantturretus_2365_instances, it.current_index));
            if (parent == NULL) goto pos_end_1504_39_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1504_39_0: ;
        }
        for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            enemyplantturretus_2365_instances.clear_selection();
            ObjectIterator other_it(enemyplantturretus_2365_instances);
            for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1504_39_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1504_39_1_end: ;
        for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        enemyplantturretusstalk_2364_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretusstalk_2364_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemyplantturretus_2365_instances, it.current_index, default_active_instance))->get_x());
        }
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1, 0);
        }
    }
    event_1504_39_end: ;
}
void Frames::event_func_9517()
{
    // event 1505_39
    {
        if (!(group_main_engine_1)) goto event_1505_39_end;
        enemyplantturretusstalk_2364_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretusstalk_2364_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretusstalk_2364_instances.has_selection()) goto event_1505_39_end;
        for (ObjectIterator it(enemyplantturretusstalk_2364_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1505_39_end: ;
}
void Frames::event_func_9518()
{
    // event 1506_39
    {
        if (!(group_main_engine_1)) goto event_1506_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1506_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1506_39_end: ;
}
void Frames::event_func_9519()
{
    // event 1507_39
    {
        if (!(group_main_engine_1)) goto event_1507_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1507_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1507_39_end: ;
}
void Frames::event_func_9520()
{
    // event 1508_39
    {
        if (!(group_main_engine_1)) goto event_1508_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1508_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
        }
    }
    event_1508_39_end: ;
}
void Frames::event_func_9521()
{
    // event 1509_39
    {
        if (!(group_main_engine_1)) goto event_1509_39_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1509_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-100))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1509_39_end;
        FrameObject * single_instance_1509_39_0; single_instance_1509_39_0 = pick_random(enemyplantturretus_2365_instances);
        if (single_instance_1509_39_0 == NULL) goto event_1509_39_end;
        ((Active*)((Active*)single_instance_1509_39_0))->alterables->values.set(4, 1);
    }
    event_1509_39_end: ;
}
void Frames::event_func_9522()
{
    // event 1510_39
    {
        if (!(group_main_engine_1)) goto event_1510_39_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1510_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1510_39_end;
        FrameObject * single_instance_1510_39_0; single_instance_1510_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectfallingleaf_2323(parent->x + 0, parent->y + -6), parent->layer);
                if (single_instance_1510_39_0 == NULL)
                    single_instance_1510_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1510_39_0))->set_x(((Active*)single_instance_1510_39_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1510_39_0))->set_angle(randrange(360), 0);
        ((Active*)single_instance_1510_39_0)->move_front(((Active*)get_single(enemyplantturretus_2365_instances)));
    }
    event_1510_39_end: ;
}
void Frames::event_func_9523()
{
    // event 1511_39
    {
        if (!(group_main_engine_1)) goto event_1511_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1511_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-2, 0));
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1511_39_end: ;
}
void Frames::event_func_9524()
{
    // event 1512_39
    {
        if (!(group_main_engine_1)) goto event_1512_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1512_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-2, 0));
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1512_39_end: ;
}
void Frames::event_func_9525()
{
    // event 1513_39
    {
        if (!(group_main_engine_1)) goto event_1513_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1513_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(4, 2);
        }
    }
    event_1513_39_end: ;
}
void Frames::event_func_9526()
{
    // event 1514_39
    {
        if (!(group_main_engine_1)) goto event_1514_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1514_39_end;
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1514_39_0; single_instance_1514_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1514_39_0 == NULL)
                    single_instance_1514_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1514_39_0))->set_direction(((Active*)get_single(enemyplantturretus_2365_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 3);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(3)*-4);
        }
    }
    event_1514_39_end: ;
}
void Frames::event_func_9527()
{
    // event 1515_39
    {
        if (!(group_main_engine_1)) goto event_1515_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1515_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    event_1515_39_end: ;
}
void Frames::event_func_9528()
{
    // event 1516_39
    {
        if (!(group_main_engine_1)) goto event_1516_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1516_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1516_39_end: ;
}
void Frames::event_func_9529()
{
    // event 1517_39
    {
        if (!(group_main_engine_1)) goto event_1517_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1517_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1517_39_end: ;
}
void Frames::event_func_9530()
{
    // event 1518_39
    {
        if (!(group_main_engine_1)) goto event_1518_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1518_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+2, 80));
        }
    }
    event_1518_39_end: ;
}
void Frames::event_func_9531()
{
    // event 1519_39
    {
        if (!(group_main_engine_1)) goto event_1519_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (80))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1519_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 60);
        }
    }
    event_1519_39_end: ;
}
void Frames::event_func_9532()
{
    // event 1520_39
    {
        if (!(group_main_engine_1)) goto event_1520_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1520_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(4, 6);
        }
    }
    event_1520_39_end: ;
}
void Frames::event_func_9533()
{
    // event 1521_39
    bool or_result_1521_39 = false;
    bool or_temp_result_1521_39_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1521_39_0_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1521_39_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyplantturretus_2365_instances, qualifier_7)) goto or_event_1521_39_0_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1521_39_0_end;
        or_result_1521_39 = true;
        or_temp_result_1521_39_0 = true;
    }
    or_event_1521_39_0_end: ;
    qualifier_7.clear_saved_selection();
    enemyplantturretus_2365_instances.clear_saved_selection();
    if (or_temp_result_1521_39_0) {
        qualifier_7.save_selection();
        enemyplantturretus_2365_instances.save_selection();
    }
    // event 1521_39
    bool or_temp_result_1521_39_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1521_39_1_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto or_event_1521_39_1_end;
        or_result_1521_39 = true;
        or_temp_result_1521_39_1 = true;
        or_event_1521_39_1_end: ;
        if (or_temp_result_1521_39_1) {
            enemyplantturretus_2365_instances.save_selection();
        }
        if (!or_result_1521_39) goto or_final_or_event_1521_39_1_end;
        enemyplantturretus_2365_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1521_39_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1521_39_0 || or_temp_result_1521_39_1) {
            enemyplantturretus_2365_instances.restore_selection();
        }
        FrameObject * single_instance_1521_39_0; single_instance_1521_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1521_39_0 == NULL)
                    single_instance_1521_39_0 = new_obj;
            }
        }
        FrameObject * single_instance_1521_39_1; single_instance_1521_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1521_39_1 == NULL)
                    single_instance_1521_39_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_39();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1521_39_1_end: ;
}
void Frames::event_func_9534()
{
    // event 1523_39
    {
        if (!(group_main_engine_1)) goto event_1523_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1523_39_end;
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->set_x(-99);
        }
    }
    event_1523_39_end: ;
}
void Frames::event_func_9535()
{
    // event 1524_39
    {
        if (!(group_main_engine_1)) goto event_1524_39_end;
        enemyplantturretushat_2366_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!enemyplantturretushat_2366_instances.has_selection()) goto event_1524_39_end;
        for (ObjectIterator it(enemyplantturretushat_2366_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1524_39_end: ;
}
void Frames::event_func_9536()
{
    // event 1526_39
    {
        if (!(group_main_engine_1)) goto event_1526_39_end;
        effectfallingleaf_2323_instances.clear_selection();
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (120))) { it.deselect(); continue; }
        }
        if (!effectfallingleaf_2323_instances.has_selection()) goto event_1526_39_end;
        for (ObjectIterator it(effectfallingleaf_2323_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1526_39_end: ;
}
void Frames::event_func_9537()
{
    // event 1531_39
    {
        if (!(group_main_engine_1)) goto event_1531_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1531_39_end;
        if (not_always_1531_39 > loop_count) {
            not_always_1531_39 = loop_count + 2;
            goto event_1531_39_end;
        }
        not_always_1531_39 = loop_count + 2;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1531_39_end: ;
}
void Frames::event_func_9538()
{
    // event 1532_39
    {
        if (!(group_main_engine_1)) goto event_1532_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1532_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1532_39_end: ;
}
void Frames::event_func_9539()
{
    // event 1533_39
    {
        if (!(group_main_engine_1)) goto event_1533_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1533_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1533_39_end: ;
}
void Frames::event_func_9540()
{
    // event 1534_39
    {
        if (!(group_main_engine_1)) goto event_1534_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1534_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1534_39_end: ;
}
void Frames::event_func_9541()
{
    // event 1535_39
    {
        if (!(group_main_engine_1)) goto event_1535_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1535_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1535_39_end: ;
}
void Frames::event_func_9542()
{
    // event 1536_39
    {
        if (!(group_main_engine_1)) goto event_1536_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1536_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1536_39_end: ;
}
void Frames::event_func_9543()
{
    // event 1537_39
    {
        if (!(group_main_engine_1)) goto event_1537_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1537_39_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1537_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1537_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_BUBBLEBEAM_277, -1, 1);
    }
    event_1537_39_end: ;
}
void Frames::event_func_9544()
{
    // event 1538_39
    {
        if (!(group_main_engine_1)) goto event_1538_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1538_39_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1538_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1538_39_0; single_instance_1538_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybullfragbubble_2324(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1538_39_0 == NULL)
                    single_instance_1538_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1538_39_0))->alterables->values.set(2, ((Active*)get_single(enemybullfrag_2417_instances, default_active_instance))->alterables->values.get(3)*(3+((Active*)get_single(enemybullfrag_2417_instances, default_active_instance))->alterables->values.get(5)*0.5));
    }
    event_1538_39_end: ;
}
void Frames::event_func_9545()
{
    // event 1539_39
    {
        if (!(group_main_engine_1)) goto event_1539_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (9))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1539_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -70);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1539_39_end: ;
}
void Frames::event_func_9546()
{
    // event 1540_39
    {
        if (!(group_main_engine_1)) goto event_1540_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1540_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_1540_39_end: ;
}
void Frames::event_func_9547()
{
    // event 1541_39
    {
        if (!(group_main_engine_1)) goto event_1541_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1541_39_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1541_39_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1541_39_0; single_instance_1541_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1541_39_0 == NULL)
                    single_instance_1541_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1541_39_0))->set_x(((Active*)single_instance_1541_39_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1541_39_0))->set_y(((Active*)single_instance_1541_39_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
    }
    event_1541_39_end: ;
}
void Frames::event_func_9548()
{
    // event 1542_39
    {
        if (!(group_main_engine_1)) goto event_1542_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1542_39_end;
        FrameObject * single_instance_1542_39_0; single_instance_1542_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1542_39_0 == NULL)
                    single_instance_1542_39_0 = new_obj;
            }
        }
        FrameObject * single_instance_1542_39_1; single_instance_1542_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1542_39_1 == NULL)
                    single_instance_1542_39_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1542_39_1))->set_direction(2);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_39();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1542_39_2_end;
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
        dynamic_1542_39_2_end: ;
    }
    event_1542_39_end: ;
}
void Frames::event_func_9549()
{
    // event 1544_39
    {
        if (!(group_main_engine_1)) goto event_1544_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1544_39_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1544_39_end: ;
}
void Frames::event_func_9550()
{
    // event 1545_39
    bool or_result_1545_39 = false;
    bool or_temp_result_1545_39_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_39_0_end;
        enemybullfragmask_2419_instances.clear_selection();
        for (ObjectIterator it(enemybullfragmask_2419_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemybullfragmask_2419_instances.has_selection()) goto or_event_1545_39_0_end;
        enemybullfrag_2417_instances.clear_selection();
        if (!check_overlap(enemybullfragmask_2419_instances, enemybullfrag_2417_instances)) goto or_event_1545_39_0_end;
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto or_event_1545_39_0_end;
        or_result_1545_39 = true;
        or_temp_result_1545_39_0 = true;
    }
    or_event_1545_39_0_end: ;
    enemybullfrag_2417_instances.clear_saved_selection();
    enemybullfragmask_2419_instances.clear_saved_selection();
    if (or_temp_result_1545_39_0) {
        enemybullfrag_2417_instances.save_selection();
        enemybullfragmask_2419_instances.save_selection();
    }
    // event 1545_39
    bool or_temp_result_1545_39_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_39_1_end;
        enemybullfragmask_2419_instances.clear_selection();
        for (ObjectIterator it(enemybullfragmask_2419_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemybullfragmask_2419_instances.has_selection()) goto or_event_1545_39_1_end;
        if (!check_not_overlap(enemybullfragmask_2419_instances, enemybullfrag_2417_instances)) goto or_event_1545_39_1_end;
        or_result_1545_39 = true;
        or_temp_result_1545_39_1 = true;
        or_event_1545_39_1_end: ;
        if (or_temp_result_1545_39_1) {
            enemybullfragmask_2419_instances.save_selection();
        }
        if (!or_result_1545_39) goto or_final_or_event_1545_39_1_end;
        enemybullfrag_2417_instances.empty_selection();
        enemybullfragmask_2419_instances.empty_selection();
        if (or_temp_result_1545_39_0) {
            enemybullfrag_2417_instances.restore_selection();
        }
        if (or_temp_result_1545_39_0 || or_temp_result_1545_39_1) {
            enemybullfragmask_2419_instances.restore_selection();
        }
        for (ObjectIterator it(enemybullfragmask_2419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1545_39_1_end: ;
}
void Frames::event_func_9551()
{
    // event 1546_39
    {
        if (!(group_main_engine_1)) goto event_1546_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1546_39_end;
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1546_39_end: ;
}
void Frames::event_func_9552()
{
    // event 1547_39
    {
        if (!(group_main_engine_1)) goto event_1547_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1547_39_end;
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.12, -15));
        }
    }
    event_1547_39_end: ;
}
void Frames::event_func_9553()
{
    // event 1548_39
    {
        if (!(group_main_engine_1)) goto event_1548_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1548_39_end;
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, 0));
        }
    }
    event_1548_39_end: ;
}
void Frames::event_func_9554()
{
    // event 1549_39
    {
        if (!(group_main_engine_1)) goto event_1549_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1549_39_end;
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 0));
        }
    }
    event_1549_39_end: ;
}
void Frames::event_func_9555()
{
    // event 1550_39
    {
        if (!(group_main_engine_1)) goto event_1550_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1550_39_end;
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        FrameObject * single_instance_1550_39_0; single_instance_1550_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfragbubble_2324_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1550_39_0 == NULL)
                    single_instance_1550_39_0 = new_obj;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1550_39_end: ;
}
void Frames::event_func_9556()
{
    // event 1553_39
    {
        if (!(group_main_engine_1)) goto event_1553_39_end;
        enemybullfragbubble_2324_instances.clear_selection();
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!enemybullfragbubble_2324_instances.has_selection()) goto event_1553_39_end;
        qualifier_20.clear_selection();
        if (!check_overlap(enemybullfragbubble_2324_instances, qualifier_20)) goto event_1553_39_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1553_39_end;
        FrameObject * single_instance_1553_39_0; single_instance_1553_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfragbubble_2324_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1553_39_0 == NULL)
                    single_instance_1553_39_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemybullfragbubble_2324_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(enemybullfragbubble_2324_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(enemybullfragbubble_2324_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.sub(0, 5);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
    }
    event_1553_39_end: ;
}
void Frames::event_func_9557()
{
    // event 1555_39
    {
        if (!(group_main_engine_1)) goto event_1555_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1555_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
    }
    event_1555_39_end: ;
}
void Frames::event_func_9558()
{
    // event 1556_39
    {
        if (!(group_main_engine_1)) goto event_1556_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1556_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(6))*((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+1)%math_helper%360);
        }
    }
    event_1556_39_end: ;
}
void Frames::event_func_9559()
{
    // event 1557_39
    {
        if (!(group_main_engine_1)) goto event_1557_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (20))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1557_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1557_39_end: ;
}
void Frames::event_func_9560()
{
    // event 1558_39
    {
        if (!(group_main_engine_1)) goto event_1558_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (20))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1558_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1558_39_end: ;
}
void Frames::event_func_9561()
{
    // event 1559_39
    {
        if (!(group_main_engine_1)) goto event_1559_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1559_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1559_39_end: ;
}
void Frames::event_func_9562()
{
    // event 1560_39
    {
        if (!(group_main_engine_1)) goto event_1560_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (10))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1560_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 2);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        FrameObject * single_instance_1560_39_0; single_instance_1560_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybuoybullet_2325(parent->x + 10, parent->y + -10), parent->layer);
                if (single_instance_1560_39_0 == NULL)
                    single_instance_1560_39_0 = new_obj;
            }
        }
        media.play_id(SOUND_ZAPPER_60, -1, 1);
        FrameObject * single_instance_1560_39_1; single_instance_1560_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybuoybullet2_2326(parent->x + -10, parent->y + -10), parent->layer);
                if (single_instance_1560_39_1 == NULL)
                    single_instance_1560_39_1 = new_obj;
            }
        }
    }
    event_1560_39_end: ;
}
void Frames::event_func_9563()
{
    // event 1561_39
    {
        if (!(group_main_engine_1)) goto event_1561_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1561_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1561_39_end: ;
}
void Frames::event_func_9564()
{
    // event 1562_39
    {
        if (!(group_main_engine_1)) goto event_1562_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (80))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1562_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(8, -60);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1562_39_end: ;
}
void Frames::event_func_9565()
{
    // event 1563_39
    {
        if (!(group_main_engine_1)) goto event_1563_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (4))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1563_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_1563_39_end: ;
}
void Frames::event_func_9566()
{
    // event 1564_39
    {
        if (!(group_main_engine_1)) goto event_1564_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1564_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1564_39_end: ;
}
void Frames::event_func_9567()
{
    // event 1565_39
    {
        if (!(group_main_engine_1)) goto event_1565_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1565_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1565_39_end: ;
}
void Frames::event_func_9568()
{
    // event 1566_39
    bool or_result_1566_39 = false;
    bool or_temp_result_1566_39_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1566_39_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1566_39_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1566_39_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1566_39_0_end;
        or_result_1566_39 = true;
        or_temp_result_1566_39_0 = true;
    }
    or_event_1566_39_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1566_39_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1566_39
    bool or_temp_result_1566_39_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1566_39_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1566_39_1_end;
        or_result_1566_39 = true;
        or_temp_result_1566_39_1 = true;
        or_event_1566_39_1_end: ;
        if (or_temp_result_1566_39_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1566_39) goto or_final_or_event_1566_39_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1566_39_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1566_39_0 || or_temp_result_1566_39_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1566_39_0; single_instance_1566_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_39_0 == NULL)
                    single_instance_1566_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1566_39_0))->set_direction(2);
        FrameObject * single_instance_1566_39_1; single_instance_1566_39_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_39_1 == NULL)
                    single_instance_1566_39_1 = new_obj;
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
                loop_spawndebris_39();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1566_39_1_end: ;
}
void Frames::event_func_9569()
{
    // event 1568_39
    {
        if (!(group_main_engine_1)) goto event_1568_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1568_39_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1568_39_end: ;
}
void Frames::event_func_9570()
{
    // event 1569_39
    {
        if (!(group_main_engine_1)) goto event_1569_39_end;
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1569_39_end: ;
}
