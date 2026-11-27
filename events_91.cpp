#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7522()
{
    // event 1569_32
    {
        if (!(group_main_engine_1)) goto event_1569_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD3_225, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 3);
    }
    event_1569_32_end: ;
}
void Frames::loop_p2_32()
{
    event_func_7522();
}
void Frames::event_func_7523()
{
    // event 1568_32
    {
        if (!(group_main_engine_1)) goto event_1568_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD2_224, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 2);
    }
    event_1568_32_end: ;
}
void Frames::loop_p1_32()
{
    event_func_7523();
}
void Frames::event_func_7524()
{
    // event 1931_32
    {
        if (!(group_main_engine_1)) goto event_1931_32_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage3b_ogg_153, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1931_32_end: ;
}
void Frames::loop_play_music_5_32()
{
    event_func_7524();
}
void Frames::event_func_7525()
{
    // event 1488_32
    {
        if (!(group_main_engine_1)) goto event_1488_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1488_32_end;
        playersensorbottombig_397_instances.clear_selection();
        objectparasol_1959_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectparasol_1959_instances)) goto event_1488_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_BOUNCE_212, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(objectparasol_1959_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1488_32_end: ;
}
void Frames::event_func_7526()
{
    // event 1510_32
    {
        if (!(group_main_engine_1)) goto event_1510_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1510_32_end;
        playersensortopbig_395_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, turningspring_1960_instances)) goto event_1510_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1510_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        effectsspringbeam_470_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(turningspring_1960_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -16, parent->y + 8), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -48, parent->y + 8), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 16, parent->y + 8), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
        }
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1510_32_end: ;
}
void Frames::event_func_7527()
{
    // event 1511_32
    {
        if (!(group_main_engine_1)) goto event_1511_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1511_32_end;
        playersensorbottombig_397_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, turningspring_1960_instances)) goto event_1511_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1511_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        effectsspringbeam_470_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(turningspring_1960_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -16, parent->y + -24), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -48, parent->y + -24), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 16, parent->y + -24), parent->layer);
                effectsspringbeam_470_instances.add_back();
                new_obj->set_direction(parent->direction);
            }
        }
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1511_32_end: ;
}
void Frames::event_func_7528()
{
    // event 1557_32
    {
        if (!(group_main_engine_1)) goto event_1557_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1557_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1557_32_0; single_instance_1557_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(restroommen_1941_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -16, parent->y + 0), parent->layer);
                if (single_instance_1557_32_0 == NULL)
                    single_instance_1557_32_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1557_32_end: ;
}
void Frames::event_func_7529()
{
    // event 1558_32
    {
        if (!(group_main_engine_1)) goto event_1558_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1558_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1558_32_0; single_instance_1558_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(restroomwomen_1942_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + -16, parent->y + 0), parent->layer);
                if (single_instance_1558_32_0 == NULL)
                    single_instance_1558_32_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        {
            loop_player01_interruption_action_running = true;
            int times = int(1);
            loop_player01_interruption_action_index = 0;
            while (loop_player01_interruption_action_index < times) {
                loop_player01_interruption_action_13();
                if (!loop_player01_interruption_action_running) break;
                loop_player01_interruption_action_index++;
            }
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1558_32_end: ;
}
void Frames::loop_player01_interruption_control_32()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_1308();
    event_func_2712();
    event_func_2713();
    event_func_2714();
    event_func_2715();
    event_func_2716();
    event_func_2717();
    event_func_2718();
    event_func_2719();
    event_func_2720();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_2724();
    event_func_2725();
    event_func_2726();
    event_func_2727();
    event_func_7525();
    event_func_7526();
    event_func_7527();
    event_func_7528();
    event_func_7529();
}
void Frames::loop_wrapper_sound_explode0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_kick1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_32(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_32(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_explode2_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_idle7_32(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_32(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode0_32(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_cp_32(void * frame)
{
    ((Frames*)frame)->loop_cp_16();
}
void Frames::loop_wrapper_player01_interruption_action_32(void * frame)
{
    ((Frames*)frame)->loop_player01_interruption_action_13();
}
void Frames::loop_wrapper_process_call_play_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_3_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_iterate_pushables_32(void * frame)
{
    ((Frames*)frame)->loop_iterate_pushables_13();
}
void Frames::loop_wrapper_player01detectangle_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectangle_13();
}
void Frames::loop_wrapper_sound_hurt2_32(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_explode7_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_sound_explode5_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_player01slopesdown_32(void * frame)
{
    ((Frames*)frame)->loop_player01slopesdown_13();
}
void Frames::loop_wrapper_player01allsensors_32(void * frame)
{
    ((Frames*)frame)->loop_player01allsensors_13();
}
void Frames::loop_wrapper_import_deadzones_32(void * frame)
{
    ((Frames*)frame)->loop_import_deadzones_0();
}
void Frames::loop_wrapper_sound_stoppush_32(void * frame)
{
    ((Frames*)frame)->loop_sound_stoppush_0();
}
void Frames::loop_wrapper_stop_voices_32(void * frame)
{
    ((Frames*)frame)->loop_stop_voices_8();
}
void Frames::loop_wrapper_rings_ringloss_step_32(void * frame)
{
    ((Frames*)frame)->loop_rings_ringloss_step_13();
}
void Frames::loop_wrapper_p3_32(void * frame)
{
    ((Frames*)frame)->loop_p3_32();
}
void Frames::loop_wrapper_sound_pounce_32(void * frame)
{
    ((Frames*)frame)->loop_sound_pounce_13();
}
void Frames::loop_wrapper_p0_32(void * frame)
{
    ((Frames*)frame)->loop_p0_32();
}
void Frames::loop_wrapper_player01detectsensormain_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensormain_13();
}
void Frames::loop_wrapper_sound_attack1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_32(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_jump_32(void * frame)
{
    ((Frames*)frame)->loop_sound_jump_13();
}
void Frames::loop_wrapper_p6_32(void * frame)
{
    ((Frames*)frame)->loop_p6_32();
}
void Frames::loop_wrapper_p7_32(void * frame)
{
    ((Frames*)frame)->loop_p7_32();
}
void Frames::loop_wrapper_play_music_0_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_play_music_2_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_p1_32(void * frame)
{
    ((Frames*)frame)->loop_p1_32();
}
void Frames::loop_wrapper_play_music_4_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_play_music_6_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_p5_32(void * frame)
{
    ((Frames*)frame)->loop_p5_32();
}
void Frames::loop_wrapper_play_music_8_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_process_call_me_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_player01detectsensorangles_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorangles_13();
}
void Frames::loop_wrapper_gui_shiftup_32(void * frame)
{
    ((Frames*)frame)->loop_gui_shiftup_14();
}
void Frames::loop_wrapper_process_call_unqueue_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_play_music_7_32(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_player01_interruption_control_32(void * frame)
{
    ((Frames*)frame)->loop_player01_interruption_control_32();
}
void Frames::loop_wrapper_process_call_unlock_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_player01up_32(void * frame)
{
    ((Frames*)frame)->loop_player01up_13();
}
void Frames::loop_wrapper_sound_dig2_32(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_spawn_crystals_32(void * frame)
{
    ((Frames*)frame)->loop_spawn_crystals_13();
}
void Frames::loop_wrapper_spawndebris_32(void * frame)
{
    ((Frames*)frame)->loop_spawndebris_32();
}
void Frames::loop_wrapper_player01detectsensorslope_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorslope_13();
}
void Frames::loop_wrapper_start_player_32(void * frame)
{
    ((Frames*)frame)->loop_start_player_13();
}
void Frames::loop_wrapper_sound_help_32(void * frame)
{
    ((Frames*)frame)->loop_sound_help_0();
}
void Frames::loop_wrapper_process_call_reset_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_petal_loss_32(void * frame)
{
    ((Frames*)frame)->loop_petal_loss_13();
}
void Frames::loop_wrapper_player01down_32(void * frame)
{
    ((Frames*)frame)->loop_player01down_13();
}
void Frames::loop_wrapper_spawn_rings_32(void * frame)
{
    ((Frames*)frame)->loop_spawn_rings_13();
}
void Frames::loop_wrapper_camera_mode1_32(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_player01slopesup_32(void * frame)
{
    ((Frames*)frame)->loop_player01slopesup_13();
}
void Frames::loop_wrapper_lamp_32(void * frame)
{
    ((Frames*)frame)->loop_lamp_29();
}
void Frames::loop_wrapper_player01detectsensoredges_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensoredges_13();
}
void Frames::loop_wrapper_player01detectsensorbottom_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorbottom_13();
}
void Frames::loop_wrapper_player01detectsensorleft_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorleft_13();
}
void Frames::loop_wrapper_iterate_query_me_stop_32(void * frame)
{
    ((Frames*)frame)->loop_iterate_query_me_stop_13();
}
void Frames::loop_wrapper_plaftorms_updateposition_32(void * frame)
{
    ((Frames*)frame)->loop_plaftorms_updateposition_14();
}
void Frames::loop_wrapper_process_call_fadeout_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_record_inputs_32(void * frame)
{
    ((Frames*)frame)->loop_record_inputs_0();
}
void Frames::loop_wrapper_stop_player_32(void * frame)
{
    ((Frames*)frame)->loop_stop_player_13();
}
void Frames::loop_wrapper_reposition_skin_32(void * frame)
{
    ((Frames*)frame)->loop_reposition_skin_13();
}
void Frames::loop_wrapper_sound_explode8_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_sound_uppercut3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
