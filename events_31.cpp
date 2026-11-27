#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_voice_14()
{
    event_func_2703();
    event_func_2704();
    event_func_2705();
    event_func_2706();
}
void Frames::event_func_2707()
{
    // event 1374_14
    {
        if (!(group_main_engine_1)) goto event_1374_14_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_floor(((Active*)*it)->alterables->values.get(12)));
            ((Active*)*it)->set_y(get_floor(((Active*)*it)->alterables->values.get(13)));
        }
    }
    event_1374_14_end: ;
}
void Frames::loop_plaftorms_updateposition_14()
{
    event_func_2707();
}
void Frames::event_func_2708()
{
    // event 1727_14
    {
        if (!(group_main_engine_1)) goto event_1727_14_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1727_14_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()-1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()-1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()-1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()-1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.add(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
        ((Counter*)get_instance(guicrystal_121_instances))->set_y(((Counter*)get_instance(guicrystal_121_instances))->get_y()-1);
        ((Active*)get_instance(guitimer_564_instances))->set_y(((Active*)get_instance(guitimer_564_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()-1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()-1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()-1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()-1);
    }
    event_1727_14_end: ;
}
void Frames::loop_gui_shiftup_14()
{
    event_func_2708();
}
void Frames::event_func_2709()
{
    // event 1385_14
    {
        if (!(group_main_engine_1)) goto event_1385_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1385_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1385_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridgelog_412_instances, gimmickbridge12logs_353_instances)) goto event_1385_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_gimmik_bridge12_leftside_index))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1385_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(180-((Active*)get_single(gimmickbridge12logs_353_instances, it.current_index, default_active_instance))->alterables->values.get(2))*((Active*)get_single(gimmickbridge12logs_353_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1385_14_end: ;
}
void Frames::event_func_2710()
{
    // event 1386_14
    {
        if (!(group_main_engine_1)) goto event_1386_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1386_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1386_14_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1386_14_end: ;
}
void Frames::loop_gimmik_bridge12_leftside_14()
{
    event_func_2709();
    event_func_2710();
}
void Frames::event_func_2711()
{
    // event 1193_14
    bool or_result_1193_14 = false;
    bool or_temp_result_1193_14_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1193_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1193_14_0_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_19)) goto or_event_1193_14_0_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1193_14_0_end;
        or_result_1193_14 = true;
        or_temp_result_1193_14_0 = true;
    }
    or_event_1193_14_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    qualifier_19.clear_saved_selection();
    if (or_temp_result_1193_14_0) {
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        qualifier_19.save_selection();
    }
    // event 1193_14
    bool or_temp_result_1193_14_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1193_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1193_14_1_end;
        playercharactersensor_383_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, qualifier_19)) goto or_event_1193_14_1_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1193_14_1_end;
        or_result_1193_14 = true;
        or_temp_result_1193_14_1 = true;
        or_event_1193_14_1_end: ;
        playercharactersensor_383_instances.clear_saved_selection();
        if (or_temp_result_1193_14_1) {
            playercharactersensor_383_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            qualifier_19.save_selection();
        }
        if (!or_result_1193_14) goto or_final_or_event_1193_14_1_end;
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        qualifier_19.empty_selection();
        playercharactersensor_383_instances.empty_selection();
        if (or_temp_result_1193_14_0 || or_temp_result_1193_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1193_14_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1193_14_0 || or_temp_result_1193_14_1) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_1193_14_1) {
            playercharactersensor_383_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1193_14_1_end: ;
}
void Frames::event_func_2712()
{
    // event 1303_14
    {
        if (!(group_main_engine_1)) goto event_1303_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1303_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1303_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1303_14_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringup_440_instances)) goto event_1303_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1303_14_0; single_instance_1303_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringup_440_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1303_14_0 == NULL)
                    single_instance_1303_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1303_14_0))->set_layer(((Active*)get_single(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1303_14_end: ;
}
void Frames::event_func_2713()
{
    // event 1304_14
    {
        if (!(group_main_engine_1)) goto event_1304_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1304_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1304_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1304_14_end;
        playersensorleftbig_391_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, redspringright_441_instances)) goto event_1304_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1304_14_0; single_instance_1304_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringright_441_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1304_14_0 == NULL)
                    single_instance_1304_14_0 = new_obj;
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
            ((Active*)*it)->set_layer(((Active*)get_instance(redspringup_440_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1304_14_end: ;
}
void Frames::event_func_2714()
{
    // event 1305_14
    {
        if (!(group_main_engine_1)) goto event_1305_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1305_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1305_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1305_14_end;
        playersensorrightbig_393_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, redspringleft_442_instances)) goto event_1305_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1305_14_0; single_instance_1305_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringleft_442_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1305_14_0 == NULL)
                    single_instance_1305_14_0 = new_obj;
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
            ((Active*)*it)->set_layer(((Active*)get_instance(redspringup_440_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1305_14_end: ;
}
void Frames::event_func_2715()
{
    // event 1306_14
    {
        if (!(group_main_engine_1)) goto event_1306_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1306_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1306_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1306_14_end;
        playersensortopbig_395_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, redspringdown_443_instances)) goto event_1306_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 18);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1306_14_0; single_instance_1306_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringdown_443_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1306_14_0 == NULL)
                    single_instance_1306_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1306_14_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1306_14_end: ;
}
void Frames::event_func_2716()
{
    // event 1307_14
    {
        if (!(group_main_engine_1)) goto event_1307_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1307_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1307_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1307_14_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupright_438_instances)) goto event_1307_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1307_14_0; single_instance_1307_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupright_438_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1307_14_0 == NULL)
                    single_instance_1307_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1307_14_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1307_14_end: ;
}
void Frames::event_func_2717()
{
    // event 1308_14
    {
        if (!(group_main_engine_1)) goto event_1308_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1308_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1308_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1308_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1308_14_end;
        playersensorleftbig_391_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, redspringupright_438_instances)) goto event_1308_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1308_14_0; single_instance_1308_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupright_438_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1308_14_0 == NULL)
                    single_instance_1308_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1308_14_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1308_14_end: ;
}
void Frames::event_func_2718()
{
    // event 1309_14
    {
        if (!(group_main_engine_1)) goto event_1309_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1309_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1309_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1309_14_end;
        playersensorbottombig_397_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, redspringupleft_439_instances)) goto event_1309_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1309_14_0; single_instance_1309_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupleft_439_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1309_14_0 == NULL)
                    single_instance_1309_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1309_14_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1309_14_end: ;
}
void Frames::event_func_2719()
{
    // event 1310_14
    {
        if (!(group_main_engine_1)) goto event_1310_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1310_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1310_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1310_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1310_14_end;
        playersensorrightbig_393_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, redspringupleft_439_instances)) goto event_1310_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1310_14_0; single_instance_1310_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(redspringupleft_439_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1310_14_0 == NULL)
                    single_instance_1310_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1310_14_0))->set_layer(((Active*)get_instance(redspringup_440_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1310_14_end: ;
}
void Frames::event_func_2720()
{
    // event 1311_14
    {
        if (!(group_main_engine_1)) goto event_1311_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1311_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1311_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1311_14_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringup_434_instances)) goto event_1311_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1311_14_0; single_instance_1311_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringup_434_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1311_14_0 == NULL)
                    single_instance_1311_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1311_14_0))->set_layer(((Active*)get_single(yellowspringup_434_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1311_14_end: ;
}
void Frames::event_func_2721()
{
    // event 1312_14
    {
        if (!(group_main_engine_1)) goto event_1312_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1312_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1312_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1312_14_end;
        playersensorleftbig_391_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, yellowspringright_435_instances)) goto event_1312_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1312_14_0; single_instance_1312_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringright_435_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1312_14_0 == NULL)
                    single_instance_1312_14_0 = new_obj;
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
            ((Active*)*it)->set_layer(((Active*)get_instance(yellowspringright_435_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1312_14_end: ;
}
void Frames::event_func_2722()
{
    // event 1313_14
    {
        if (!(group_main_engine_1)) goto event_1313_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1313_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1313_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1313_14_end;
        playersensorrightbig_393_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, yellowspringleft_436_instances)) goto event_1313_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -10);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1313_14_0; single_instance_1313_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringleft_436_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1313_14_0 == NULL)
                    single_instance_1313_14_0 = new_obj;
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
            ((Active*)*it)->set_layer(((Active*)get_instance(yellowspringleft_436_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1313_14_end: ;
}
void Frames::event_func_2723()
{
    // event 1314_14
    {
        if (!(group_main_engine_1)) goto event_1314_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1314_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1314_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1314_14_end;
        playersensortopbig_395_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, yellowspringdown_437_instances)) goto event_1314_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 11);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1314_14_0; single_instance_1314_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringdown_437_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1314_14_0 == NULL)
                    single_instance_1314_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1314_14_0))->set_layer(((Active*)get_single(yellowspringdown_437_instances, default_active_instance))->layer->index+1-1);
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1314_14_end: ;
}
void Frames::event_func_2724()
{
    // event 1315_14
    {
        if (!(group_main_engine_1)) goto event_1315_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1315_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1315_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1315_14_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupright_433_instances)) goto event_1315_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1315_14_0; single_instance_1315_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupright_433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1315_14_0 == NULL)
                    single_instance_1315_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1315_14_0))->set_layer(((Active*)get_single(yellowspringupright_433_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1315_14_end: ;
}
void Frames::event_func_2725()
{
    // event 1316_14
    {
        if (!(group_main_engine_1)) goto event_1316_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1316_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1316_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1316_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1316_14_end;
        playersensorleftbig_391_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, yellowspringupright_433_instances)) goto event_1316_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1316_14_0; single_instance_1316_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupright_433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1316_14_0 == NULL)
                    single_instance_1316_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1316_14_0))->set_layer(((Active*)get_single(yellowspringupright_433_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, 5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1316_14_end: ;
}
void Frames::event_func_2726()
{
    // event 1317_14
    {
        if (!(group_main_engine_1)) goto event_1317_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1317_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1317_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1317_14_end;
        playersensorbottombig_397_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, yellowspringupleft_432_instances)) goto event_1317_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1317_14_0; single_instance_1317_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupleft_432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1317_14_0 == NULL)
                    single_instance_1317_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1317_14_0))->set_layer(((Active*)get_single(yellowspringupleft_432_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1317_14_end: ;
}
void Frames::event_func_2727()
{
    // event 1318_14
    {
        if (!(group_main_engine_1)) goto event_1318_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1318_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1318_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1318_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1318_14_end;
        playersensorrightbig_393_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, yellowspringupleft_432_instances)) goto event_1318_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1318_14_0; single_instance_1318_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringupleft_432_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1318_14_0 == NULL)
                    single_instance_1318_14_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1318_14_0))->set_layer(((Active*)get_single(yellowspringupleft_432_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(14, -5);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1318_14_end: ;
}
void Frames::loop_player01_interruption_control_14()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_2711();
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
}
void Frames::loop_wrapper_sound_kick1_14(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_14(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_14(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_14(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_14(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_14(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_14(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_14(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_14(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_14(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_14(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_14(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_14(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_14(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_14(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_14(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_14(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_14(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_14(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_14();
}
void Frames::loop_wrapper_play_music_6_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_14();
}
void Frames::loop_wrapper_sound_go0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_14(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_14();
}
void Frames::loop_wrapper_process_call_unqueue_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_14(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_14(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_14()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 536870912, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 268435456, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 67108864, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 33554432, 2, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
}
void Frames::event_func_2728()
{
    // event 38_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_38_14_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_38_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (1))) goto event_38_14_end;
        if (once_condition_38_14) goto event_38_14_end;
        once_condition_38_14 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(104, 200, 248), make_color_int(120, 252, 64));
            ((Active*)*it)->replace_color(make_color_int(0, 144, 248), make_color_int(40, 184, 0));
            ((Active*)*it)->replace_color(make_color_int(0, 108, 200), make_color_int(24, 148, 56));
            ((Active*)*it)->replace_color(make_color_int(0, 64, 168), make_color_int(0, 124, 80));
            ((Active*)*it)->replace_color(make_color_int(0, 36, 88), make_color_int(0, 64, 48));
        }
    }
    event_38_14_end: ;
}
void Frames::event_func_2729()
{
    // event 39_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_39_14_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_39_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (2))) goto event_39_14_end;
        if (once_condition_39_14) goto event_39_14_end;
        once_condition_39_14 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(104, 200, 248), make_color_int(248, 132, 248));
            ((Active*)*it)->replace_color(make_color_int(0, 144, 248), make_color_int(248, 32, 244));
            ((Active*)*it)->replace_color(make_color_int(0, 108, 200), make_color_int(200, 0, 180));
            ((Active*)*it)->replace_color(make_color_int(0, 64, 168), make_color_int(144, 0, 104));
            ((Active*)*it)->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 64));
        }
    }
    event_39_14_end: ;
}
void Frames::event_func_2730()
{
    // event 40_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_40_14_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_40_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (3))) goto event_40_14_end;
        if (once_condition_40_14) goto event_40_14_end;
        once_condition_40_14 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(104, 200, 248), make_color_int(248, 200, 40));
            ((Active*)*it)->replace_color(make_color_int(0, 144, 248), make_color_int(248, 152, 0));
            ((Active*)*it)->replace_color(make_color_int(0, 108, 200), make_color_int(200, 80, 0));
            ((Active*)*it)->replace_color(make_color_int(0, 64, 168), make_color_int(160, 0, 32));
            ((Active*)*it)->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 40));
        }
    }
    event_40_14_end: ;
}
void Frames::event_func_2731()
{
    // event 41_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_41_14_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_41_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (4))) goto event_41_14_end;
        if (once_condition_41_14) goto event_41_14_end;
        once_condition_41_14 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(104, 200, 248), make_color_int(160, 160, 128));
            ((Active*)*it)->replace_color(make_color_int(0, 144, 248), make_color_int(100, 100, 80));
            ((Active*)*it)->replace_color(make_color_int(0, 108, 200), make_color_int(72, 72, 72));
            ((Active*)*it)->replace_color(make_color_int(0, 64, 168), make_color_int(32, 32, 64));
            ((Active*)*it)->replace_color(make_color_int(0, 36, 88), make_color_int(8, 8, 32));
        }
    }
    event_41_14_end: ;
}
void Frames::event_func_2732()
{
    // event 57_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_57_14_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_57_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (1))) goto event_57_14_end;
        if (once_condition_57_14) goto event_57_14_end;
        once_condition_57_14 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 248, 0));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(216, 216, 0));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(160, 160, 0));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 100, 0));
        }
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 248, 0));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(216, 216, 0));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(160, 160, 0));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 100, 0));
        }
    }
    event_57_14_end: ;
}
void Frames::event_func_2733()
{
    // event 58_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_58_14_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_58_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (2))) goto event_58_14_end;
        if (once_condition_58_14) goto event_58_14_end;
        once_condition_58_14 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 176, 248));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(168, 36, 168));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 0, 100));
        }
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 176, 248));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(168, 36, 168));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 0, 100));
        }
    }
    event_58_14_end: ;
}
void Frames::event_func_2734()
{
    // event 59_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_59_14_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_59_14_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (3))) goto event_59_14_end;
        if (once_condition_59_14) goto event_59_14_end;
        once_condition_59_14 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(0, 200, 240));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(0, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(0, 0, 248));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(0, 0, 128));
        }
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(0, 200, 240));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(0, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(0, 0, 248));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(0, 0, 128));
        }
    }
    event_59_14_end: ;
}
void Frames::event_func_2735()
{
    // event 168_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_168_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_168_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_168_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (-1.75))) goto event_168_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_168_14_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_168_14_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 180);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 180);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_168_14_end: ;
}
void Frames::event_func_2736()
{
    // event 191_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_191_14_end;
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_191_14_end: ;
}
void Frames::event_func_2737()
{
    // event 192_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_192_14_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_14();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_192_14_end: ;
}
void Frames::event_func_2738()
{
    // event 217_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_217_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_217_14_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_217_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_217_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_217_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_217_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0), 80));
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_14();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_217_14_end: ;
}
void Frames::event_func_2739()
{
    // event 218_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_218_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_218_14_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_218_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_218_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_218_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_14();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_218_14_end: ;
}
void Frames::event_func_2740()
{
    // event 219_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_219_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_219_14_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_219_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_219_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_219_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_219_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0), 80));
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_14();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_219_14_end: ;
}
void Frames::event_func_2741()
{
    // event 220_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_220_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_220_14_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (1))) goto event_220_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_220_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_220_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_14();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_220_14_end: ;
}
void Frames::event_func_2742()
{
    // event 232_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_232_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_232_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_232_14_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_232_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_232_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_232_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        {
            loop_bs_running = true;
            int times = int(1);
            loop_bs_index = 0;
            while (loop_bs_index < times) {
                loop_bs_14();
                if (!loop_bs_running) break;
                loop_bs_index++;
            }
        }
    }
    event_232_14_end: ;
}
void Frames::event_func_2743()
{
    // event 240_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_240_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_240_14_end;
        if (not_always_240_14 > loop_count) {
            not_always_240_14 = loop_count + 2;
            goto event_240_14_end;
        }
        not_always_240_14 = loop_count + 2;
            group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    
        if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) {
            group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = true;
        }
        ((Active*)get_instance(guitimer_564_instances))->set_direction(2);
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
        guikeystone_455_instances.clear_selection();
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        spread_value(guikeystone_455_instances, 0, 0);
        for (ObjectIterator it(guikeystone_455_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 10+((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_240_14_end: ;
}
void Frames::event_func_2744()
{
    // event 242_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_242_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_242_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(13, 1);
        }
    }
    event_242_14_end: ;
}
void Frames::event_func_2745()
{
    // event 254_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_254_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_254_14_end;
        if (!((effectscolordot_308_instances.size()) == (0))) goto event_254_14_end;
        FrameObject * single_instance_254_14_0; single_instance_254_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectscolordot_308(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_254_14_0 == NULL)
                    single_instance_254_14_0 = new_obj;
            }
        }
    }
    event_254_14_end: ;
}
void Frames::event_func_2746()
{
    // event 255_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_255_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_255_14_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-8);
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+cos_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-8);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-20, 0);
        }
        ((Active*)get_instance(guienergy_124_instances))->force_animation(11);
    }
    event_255_14_end: ;
}
void Frames::event_func_2747()
{
    // event 256_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_256_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_256_14_end;
        if (!((effectscolordot_308_instances.size()) > (0))) goto event_256_14_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_256_14_end: ;
}
void Frames::event_func_2748()
{
    // event 257_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_257_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_257_14_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) == (0))) goto event_257_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_257_14_end: ;
}
void Frames::event_func_2749()
{
    // event 311_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_311_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (0))) goto event_311_14_end;
        if (not_always_311_14 > loop_count) {
            not_always_311_14 = loop_count + 2;
            goto event_311_14_end;
        }
        not_always_311_14 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_311_14_end: ;
}
void Frames::event_func_2750()
{
    // event 318_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_318_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_318_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) == (500))) goto event_318_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_318_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_318_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(12, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
            ((Active*)*it)->alterables->flags.disable(19);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
    }
    event_318_14_end: ;
}
void Frames::event_func_2751()
{
    // event 319_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_319_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_319_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(12)) == (500))) goto event_319_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_319_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_319_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(12, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min((((Active*)*it)->alterables->values.get(9)+1), 8));
            ((Active*)*it)->alterables->flags.disable(19);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+4);
        }
    }
    event_319_14_end: ;
}
void Frames::event_func_2752()
{
    // event 340_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_340_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_340_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_340_14_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (100))) goto event_340_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        }
    }
    event_340_14_end: ;
}
void Frames::event_func_2753()
{
    // event 341_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_341_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_341_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_341_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_341_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(15)) >= (10))) goto event_341_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_341_14_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_341_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_341_14_end: ;
}
void Frames::event_func_2754()
{
    // event 342_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_342_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_342_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_342_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_342_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_342_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) >= (2))) goto event_342_14_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_342_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_342_14_end: ;
}
void Frames::event_func_2755()
{
    // event 374_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1)) goto event_374_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_374_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_374_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_374_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(15)) >= (3))) goto event_374_14_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) == (0))) goto event_374_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)+((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)*get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -3)*-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_374_14_end: ;
}
