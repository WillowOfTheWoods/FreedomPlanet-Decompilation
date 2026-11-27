#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16365()
{
    // event 1370_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1370_73_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1370_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1370_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1370_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1370_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_73();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1370_73_end: ;
}
void Frames::event_func_16366()
{
    // event 1371_73
    bool or_result_1371_73 = false;
    bool or_temp_result_1371_73_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1371_73_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1371_73_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1371_73_0_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1371_73_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1371_73_0_end;
        or_result_1371_73 = true;
        or_temp_result_1371_73_0 = true;
    }
    or_event_1371_73_0_end: ;
    player_389_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1371_73_0) {
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
        player_389_instances.save_selection();
        objectchair_522_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1371_73
    bool or_temp_result_1371_73_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1371_73_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1371_73_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1371_73_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1371_73_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1371_73_1_end;
        or_result_1371_73 = true;
        or_temp_result_1371_73_1 = true;
        or_event_1371_73_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1371_73_1) {
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            player_389_instances.save_selection();
            objectchair_522_instances.save_selection();
        }
        if (!or_result_1371_73) goto or_final_or_event_1371_73_1_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1371_73_0 || or_temp_result_1371_73_1) {
            objectchair_522_instances.restore_selection();
        }
        if (or_temp_result_1371_73_0 || or_temp_result_1371_73_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1371_73_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1371_73_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1371_73_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1371_73_0 || or_temp_result_1371_73_1) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1371_73_1_end: ;
}
void Frames::event_func_16367()
{
    // event 1373_73
    {
        if (!(group_main_engine_1)) goto event_1373_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (5))) goto event_1373_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (6))) goto event_1373_73_end;
        breakablerock_951_instances.clear_selection();
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1373_73_end: ;
}
void Frames::event_func_16368()
{
    // event 1374_73
    {
        if (!(group_main_engine_1)) goto event_1374_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1374_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1374_73_end;
        playersensorleftbig_391_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakablerock_951_instances)) goto event_1374_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1374_73_end: ;
}
void Frames::event_func_16369()
{
    // event 1375_73
    {
        if (!(group_main_engine_1)) goto event_1375_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1375_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1375_73_end;
        playersensorrightbig_393_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakablerock_951_instances)) goto event_1375_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.5), 3)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1375_73_end: ;
}
void Frames::event_func_16370()
{
    // event 1376_73
    {
        if (!(group_main_engine_1)) goto event_1376_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1376_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1376_73_end;
        playersensorbottombig_397_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakablerock_951_instances)) goto event_1376_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1376_73_end: ;
}
void Frames::event_func_16371()
{
    // event 1377_73
    {
        if (!(group_main_engine_1)) goto event_1377_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1377_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1377_73_end;
        playersensortopbig_395_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakablerock_951_instances)) goto event_1377_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakablerock_951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1377_73_end: ;
}
void Frames::event_func_16372()
{
    // event 1392_73
    {
        if (!(group_main_engine_1)) goto event_1392_73_end;
        if (!((global_values->get(1)) < (3))) goto event_1392_73_end;
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(3, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(8+global_values->get(1), 1)+1);
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(4, 8+global_values->get(1));
    }
    event_1392_73_end: ;
}
void Frames::event_func_16373()
{
    // event 1393_73
    {
        if (!(group_main_engine_1)) goto event_1393_73_end;
        if (!((global_values->get(1)) == (3))) goto event_1393_73_end;
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(3, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(10, 1)+1);
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(4, 10);
    }
    event_1393_73_end: ;
}
void Frames::event_func_16374()
{
    // event 1394_73
    {
        if (!(group_main_engine_1)) goto event_1394_73_end;
        if (!((global_values->get(1)) > (3))) goto event_1394_73_end;
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(3, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(7+global_values->get(1), 1)+1);
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(4, 7+global_values->get(1));
    }
    event_1394_73_end: ;
}
void Frames::event_func_16375()
{
    // event 1396_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1396_73_end;
        if (not_always_1396_73 > loop_count) {
            not_always_1396_73 = loop_count + 2;
            goto event_1396_73_end;
        }
        not_always_1396_73 = loop_count + 2;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_academy_stages_during_stage_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 39);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 53);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 565);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Counter*)get_instance(mapselect_3863_instances))->set_visible(true);
        mapicon_265_instances.clear_selection();
        spread_value(mapicon_265_instances, 0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_1396_73_0;
            ((Active*)get_instance(crystal_456_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1396_73_0: ;
        }
    }
    event_1396_73_end: ;
}
void Frames::event_func_16376()
{
    // event 1397_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1397_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) > (0))) goto event_1397_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1397_73_end: ;
}
void Frames::event_func_16377()
{
    // event 1398_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1398_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1398_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1398_73_end;
            group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = false;
    
        if (!group_main_engine_level_specific_methods_academy_stages_editor_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_1 = true;
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = false;
    
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        objectchair_522_instances.clear_selection();
        for (ObjectIterator it(objectchair_522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(levelcardselect_3857_instances))->set_direction(24);
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(mapselect_3863_instances))->set_visible(false);
        ((Active*)get_instance(return_111_instances))->set_visible(false);
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
    }
    event_1398_73_end: ;
}
void Frames::event_func_16378()
{
    // event 1399_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1399_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1399_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1399_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value%math_helper%3) == (0))) goto event_1399_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1399_73_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(return_111_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_1399_73_end: ;
}
void Frames::event_func_16379()
{
    // event 1400_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1400_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1400_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1400_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_on(0))) goto event_1400_73_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(return_111_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(8, 0);
    }
    event_1400_73_end: ;
}
void Frames::event_func_16380()
{
    // event 1401_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1401_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1401_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1401_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value%math_helper%3) != (0))) goto event_1401_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1401_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->add(1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1401_73_end: ;
}
void Frames::event_func_16381()
{
    // event 1402_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1402_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1402_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1402_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1402_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->subtract(1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1402_73_end: ;
}
void Frames::event_func_16382()
{
    // event 1403_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1403_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1403_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(11)) == (1))) goto event_1403_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1403_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->set(((Counter*)get_instance(mapselect_3863_instances))->value+3);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1403_73_end: ;
}
void Frames::event_func_16383()
{
    // event 1404_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1404_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1404_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(10)) == (1))) goto event_1404_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1404_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->set(((Counter*)get_instance(mapselect_3863_instances))->value-3);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1404_73_end: ;
}
void Frames::event_func_16384()
{
    // event 1405_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1405_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value) < (1))) goto event_1405_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->add(18);
    }
    event_1405_73_end: ;
}
void Frames::event_func_16385()
{
    // event 1406_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1406_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value) > (18))) goto event_1406_73_end;
        ((Counter*)get_instance(mapselect_3863_instances))->subtract(18);
    }
    event_1406_73_end: ;
}
void Frames::event_func_16386()
{
    // event 1407_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1407_73_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((((Counter*)get_instance(mapselect_3863_instances))->value-1)/math_helper/mapicon_265_instances.size())*mapicon_265_instances.size()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1407_73_end: ;
}
void Frames::event_func_16387()
{
    // event 1408_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1408_73_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!mapicon_265_instances.has_selection()) goto event_1408_73_end;
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(recordlabel_210_instances))->alterables->values.set(0, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value+1));
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set((((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(0)/math_helper/10)%math_helper%100);
        ((Counter*)get_instance(timerecordsec_218_instances))->set((((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(0)/math_helper/1000)%math_helper%60);
        ((Counter*)get_instance(timerecordmin_219_instances))->set((((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(0)/math_helper/60000)%math_helper%100);
    }
    event_1408_73_end: ;
}
void Frames::event_func_16388()
{
    // event 1409_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1409_73_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1409_73_end: ;
}
void Frames::event_func_16389()
{
    // event 1410_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1410_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1410_73_end;
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Counter*)get_instance(mapselect_3863_instances))->value))) { it.deselect(); continue; }
        }
        if (!mapicon_265_instances.has_selection()) goto event_1410_73_end;
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1410_73_end: ;
}
void Frames::event_func_16390()
{
    // event 1411_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1411_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value) < (((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(3)))) goto event_1411_73_end;
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(true);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(true);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(true);
    }
    event_1411_73_end: ;
}
void Frames::event_func_16391()
{
    // event 1412_73
    bool or_result_1412_73 = false;
    bool or_temp_result_1412_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto or_event_1412_73_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1412_73_0_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_1412_73_0_end;
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!return_111_instances.has_selection()) goto or_event_1412_73_0_end;
        mapselect_3863_instances.clear_selection();
        for (ObjectIterator it(mapselect_3863_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) <= (((Active*)get_instance(recordlabel_210_instances, default_active_instance))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!mapselect_3863_instances.has_selection()) goto or_event_1412_73_0_end;
        or_result_1412_73 = true;
        or_temp_result_1412_73_0 = true;
    }
    or_event_1412_73_0_end: ;
    return_111_instances.clear_saved_selection();
    inputsp1_21_instances.clear_saved_selection();
    crystal_456_instances.clear_saved_selection();
    mapselect_3863_instances.clear_saved_selection();
    if (or_temp_result_1412_73_0) {
        return_111_instances.save_selection();
        inputsp1_21_instances.save_selection();
        crystal_456_instances.save_selection();
        mapselect_3863_instances.save_selection();
    }
    // event 1412_73
    bool or_temp_result_1412_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto or_event_1412_73_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1412_73_1_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_1412_73_1_end;
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!return_111_instances.has_selection()) goto or_event_1412_73_1_end;
        mapselect_3863_instances.clear_selection();
        for (ObjectIterator it(mapselect_3863_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) <= (((Active*)get_instance(recordlabel_210_instances, default_active_instance))->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!mapselect_3863_instances.has_selection()) goto or_event_1412_73_1_end;
        or_result_1412_73 = true;
        or_temp_result_1412_73_1 = true;
        or_event_1412_73_1_end: ;
        if (or_temp_result_1412_73_1) {
            return_111_instances.save_selection();
            inputsp1_21_instances.save_selection();
            crystal_456_instances.save_selection();
            mapselect_3863_instances.save_selection();
        }
        if (!or_result_1412_73) goto or_final_or_event_1412_73_1_end;
        return_111_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        mapselect_3863_instances.empty_selection();
        crystal_456_instances.empty_selection();
        if (or_temp_result_1412_73_0 || or_temp_result_1412_73_1) {
            return_111_instances.restore_selection();
        }
        if (or_temp_result_1412_73_0 || or_temp_result_1412_73_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_1412_73_0 || or_temp_result_1412_73_1) {
            crystal_456_instances.restore_selection();
        }
        if (or_temp_result_1412_73_0 || or_temp_result_1412_73_1) {
            mapselect_3863_instances.restore_selection();
        }
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardselect_3857_instances.clear_selection();
        for (ObjectIterator it(levelcardselect_3857_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Counter*)get_single(mapselect_3863_instances, it.current_index))->value);
        }
    }
    or_final_or_event_1412_73_1_end: ;
}
void Frames::event_func_16392()
{
    // event 1413_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1413_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1413_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1413_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1413_73_end;
        
        if (!group_main_engine_level_specific_methods_academy_stages_load_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_load_stage_1 = true;
        }
            group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = false;
    
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
    }
    event_1413_73_end: ;
}
void Frames::event_func_16393()
{
    // event 1414_73
    bool or_result_1414_73 = false;
    bool or_temp_result_1414_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto or_event_1414_73_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1414_73_0_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_1414_73_0_end;
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!return_111_instances.has_selection()) goto or_event_1414_73_0_end;
        or_result_1414_73 = true;
        or_temp_result_1414_73_0 = true;
    }
    or_event_1414_73_0_end: ;
    return_111_instances.clear_saved_selection();
    inputsp1_21_instances.clear_saved_selection();
    crystal_456_instances.clear_saved_selection();
    if (or_temp_result_1414_73_0) {
        return_111_instances.save_selection();
        inputsp1_21_instances.save_selection();
        crystal_456_instances.save_selection();
    }
    // event 1414_73
    bool or_temp_result_1414_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto or_event_1414_73_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1414_73_1_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_1414_73_1_end;
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!return_111_instances.has_selection()) goto or_event_1414_73_1_end;
        or_result_1414_73 = true;
        or_temp_result_1414_73_1 = true;
    }
    or_event_1414_73_1_end: ;
    if (or_temp_result_1414_73_1) {
        return_111_instances.save_selection();
        inputsp1_21_instances.save_selection();
        crystal_456_instances.save_selection();
    }
    // event 1414_73
    bool or_temp_result_1414_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto or_event_1414_73_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1414_73_2_end;
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!crystal_456_instances.has_selection()) goto or_event_1414_73_2_end;
        return_111_instances.clear_selection();
        for (ObjectIterator it(return_111_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!return_111_instances.has_selection()) goto or_event_1414_73_2_end;
        or_result_1414_73 = true;
        or_temp_result_1414_73_2 = true;
        or_event_1414_73_2_end: ;
        if (or_temp_result_1414_73_2) {
            return_111_instances.save_selection();
            inputsp1_21_instances.save_selection();
            crystal_456_instances.save_selection();
        }
        if (!or_result_1414_73) goto or_final_or_event_1414_73_2_end;
        return_111_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        crystal_456_instances.empty_selection();
        if (or_temp_result_1414_73_0 || or_temp_result_1414_73_1 || or_temp_result_1414_73_2) {
            return_111_instances.restore_selection();
        }
        if (or_temp_result_1414_73_0 || or_temp_result_1414_73_1 || or_temp_result_1414_73_2) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_1414_73_0 || or_temp_result_1414_73_1 || or_temp_result_1414_73_2) {
            crystal_456_instances.restore_selection();
        }
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        levelcardselect_3857_instances.clear_selection();
        for (ObjectIterator it(levelcardselect_3857_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Counter*)get_instance(mapselect_3863_instances, it.current_index))->value);
        }
        media.stop_samples();
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    or_final_or_event_1414_73_2_end: ;
}
void Frames::event_func_16394()
{
    // event 1415_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1415_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1415_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1415_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_on(0))) goto event_1415_73_end;
        next_frame = 8 + 0;    
    
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_1415_73_end: ;
}
void Frames::event_func_16395()
{
    // event 1416_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_select_a_stage_1)) goto event_1416_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (1))) goto event_1416_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(13)) == (1))) goto event_1416_73_end;
        if (!(((Active*)get_instance(return_111_instances))->alterables->flags.is_off(0))) goto event_1416_73_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(return_111_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_1416_73_end: ;
}
void Frames::event_func_16396()
{
    // event 1417_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1417_73_end;
        if (!((((Active*)get_instance(levelcardselect_3857_instances))->alterables->values.get(0)) <= (0))) goto event_1417_73_end;
        if (not_always_1417_73 > loop_count) {
            not_always_1417_73 = loop_count + 2;
            goto event_1417_73_end;
        }
        not_always_1417_73 = loop_count + 2;
        ((INI*)get_instance(ini_3855_instances))->load_file(get_app_drive()+get_app_dir()+str_maps_test_map_266);
        {
            loop_load_running = true;
            int times = int(((INI*)get_instance(ini_3855_instances))->get_value(str_properties_267, str_objects_268));
            loop_load_index = 0;
            while (loop_load_index < times) {
                loop_load_73();
                if (!loop_load_running) break;
                loop_load_index++;
            }
        }
    }
    event_1417_73_end: ;
}
void Frames::event_func_16397()
{
    // event 1418_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1418_73_end;
        if (!((((Active*)get_instance(levelcardselect_3857_instances))->alterables->values.get(0)) > (0))) goto event_1418_73_end;
        if (not_always_1418_73 > loop_count) {
            not_always_1418_73 = loop_count + 2;
            goto event_1418_73_end;
        }
        not_always_1418_73 = loop_count + 2;
        
        ((INI*)get_instance(ini_3855_instances))->load_file(create_temp_file(str_c_maps_map_269+number_to_string(((Active*)get_instance(levelcardselect_3857_instances))->alterables->values.get(0))+str_map_270));
        
        {
            loop_load_running = true;
            int times = int(((INI*)get_instance(ini_3855_instances))->get_value(str_properties_267, str_objects_268));
            loop_load_index = 0;
            while (loop_load_index < times) {
                loop_load_73();
                if (!loop_load_running) break;
                loop_load_index++;
            }
        }
    }
    event_1418_73_end: ;
}
void Frames::event_func_16398()
{
    // event 1421_73
    bool or_result_1421_73 = false;
    bool or_temp_result_1421_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto or_event_1421_73_0_end;
        startlocationmaker_3830_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(startlocationmaker_3830_instances, qualifier_7)) goto or_event_1421_73_0_end;
        or_result_1421_73 = true;
        or_temp_result_1421_73_0 = true;
    }
    or_event_1421_73_0_end: ;
    startlocationmaker_3830_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1421_73_0) {
        startlocationmaker_3830_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1421_73
    bool or_temp_result_1421_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto or_event_1421_73_1_end;
        startlocationmaker_3830_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(startlocationmaker_3830_instances, qualifier_8)) goto or_event_1421_73_1_end;
        or_result_1421_73 = true;
        or_temp_result_1421_73_1 = true;
    }
    or_event_1421_73_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1421_73_1) {
        startlocationmaker_3830_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1421_73
    bool or_temp_result_1421_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto or_event_1421_73_2_end;
        startlocationmaker_3830_instances.clear_selection();
        // icache destruction
        bossmantalithleftknee_1532_instances.clear_selection();
        objectplatformmaker2_3839_instances.clear_selection();
        objecttargetmaker_3829_instances.clear_selection();
        bossmantalithleg3_1534_instances.clear_selection();
        customtile9_3807_instances.clear_selection();
        bossmantalitharm6_1599_instances.clear_selection();
        bossmantalithrightknee_1533_instances.clear_selection();
        bossmantalithneck4_1530_instances.clear_selection();
        bossmantalithdebris_1602_instances.clear_selection();
        customtile28_3826_instances.clear_selection();
        customtile8_3806_instances.clear_selection();
        laddertopmaker_3842_instances.clear_selection();
        bossmantalithneck2_1536_instances.clear_selection();
        bossmantalithleg2_1535_instances.clear_selection();
        laddermaker_3828_instances.clear_selection();
        gimmickhangingidlebar_3827_instances.clear_selection();
        bossmantalithbody_1529_instances.clear_selection();
        bossmantalithhead3_1596_instances.clear_selection();
        bossmantalithneck3_1531_instances.clear_selection();
        bossmantalithhead2_1597_instances.clear_selection();
        bossmantalithhead_1598_instances.clear_selection();
        customtile29_3837_instances.clear_selection();
        objectplatformmaker1_3838_instances.clear_selection();
        bossmantalitharm3_1600_instances.clear_selection();
        objectmonitormaker_3831_instances.clear_selection();
        objectspiketrapmask_3836_instances.clear_selection();
        bossmantalithneck1_1537_instances.clear_selection();
        objectbombmaker_3832_instances.clear_selection();
        gimmickspikechainmaker_3843_instances.clear_selection();
        bossmantalithleg1_1528_instances.clear_selection();
        if (!check_overlap(startlocationmaker_3830_instances, qualifier_29)) goto or_event_1421_73_2_end;
        or_result_1421_73 = true;
        or_temp_result_1421_73_2 = true;
        or_event_1421_73_2_end: ;
        qualifier_29.clear_saved_selection();
        if (or_temp_result_1421_73_2) {
            qualifier_29.save_selection();
        }
        if (!or_result_1421_73) goto or_final_or_event_1421_73_2_end;
        qualifier_8.empty_selection();
        qualifier_29.empty_selection();
        qualifier_7.empty_selection();
        startlocationmaker_3830_instances.empty_selection();
        if (or_temp_result_1421_73_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1421_73_0 || or_temp_result_1421_73_1) {
            startlocationmaker_3830_instances.restore_selection();
        }
        if (or_temp_result_1421_73_1) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1421_73_2) {
            qualifier_29.restore_selection();
        }
            group_main_engine_level_specific_methods_academy_stages_load_stage_1 = false;
    
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_main_engine_level_specific_methods_academy_stages_select_a_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = true;
        }
        media.play_id(SOUND_EDITOR_DELETE_144, -1, 1);
        {
            loop_delete_running = true;
            int times = int(1);
            loop_delete_index = 0;
            while (loop_delete_index < times) {
                loop_delete_73();
                if (!loop_delete_running) break;
                loop_delete_index++;
            }
        }
    }
    or_final_or_event_1421_73_2_end: ;
}
void Frames::event_func_16399()
{
    // event 1422_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1422_73_end;
        if (!((objecttargetmaker_3829_instances.size()) > (0))) goto event_1422_73_end;
        objecttargetmaker_3829_instances.clear_selection();
        for (ObjectIterator it(objecttargetmaker_3829_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1422_73_0; single_instance_1422_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttargetmaker_3829_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objecttarget_3833(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1422_73_0 == NULL)
                    single_instance_1422_73_0 = new_obj;
            }
        }
    }
    event_1422_73_end: ;
}
void Frames::event_func_16400()
{
    // event 1423_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1423_73_end;
        if (!((objectmonitormaker_3831_instances.size()) > (0))) goto event_1423_73_end;
        FrameObject * single_instance_1423_73_0; single_instance_1423_73_0 = NULL;
        // select single: true false false
        objectmonitormaker_3831_instances.clear_selection();
        for (ObjectIterator p_it(objectmonitormaker_3831_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorcrate_409(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1423_73_0 == NULL)
                    single_instance_1423_73_0 = new_obj;
            }
        }
        for (ObjectIterator it(objectmonitormaker_3831_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1423_73_end: ;
}
void Frames::event_func_16401()
{
    // event 1424_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1424_73_end;
        if (!((objectbombmaker_3832_instances.size()) > (0))) goto event_1424_73_end;
        objectbombmaker_3832_instances.clear_selection();
        for (ObjectIterator it(objectbombmaker_3832_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1424_73_0; single_instance_1424_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbombmaker_3832_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbomb_563(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1424_73_0 == NULL)
                    single_instance_1424_73_0 = new_obj;
            }
        }
    }
    event_1424_73_end: ;
}
void Frames::event_func_16402()
{
    // event 1425_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1425_73_end;
        if (!((gimmickhangingidlebar_3827_instances.size()) > (0))) goto event_1425_73_end;
        FrameObject * single_instance_1425_73_0; single_instance_1425_73_0 = NULL;
        // select single: true false false
        gimmickhangingidlebar_3827_instances.clear_selection();
        for (ObjectIterator p_it(gimmickhangingidlebar_3827_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickhangingidlesensor_3834(parent->x + 24, parent->y + 24), parent->layer);
                if (single_instance_1425_73_0 == NULL)
                    single_instance_1425_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1425_73_0))->set_layer(3-1);
    }
    event_1425_73_end: ;
}
void Frames::event_func_16403()
{
    // event 1426_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1426_73_end;
        if (!((laddertopmaker_3842_instances.size()) > (0))) goto event_1426_73_end;
        FrameObject * single_instance_1426_73_0; single_instance_1426_73_0 = NULL;
        // select single: true false false
        laddertopmaker_3842_instances.clear_selection();
        for (ObjectIterator p_it(laddertopmaker_3842_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_laddermaker_3828(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1426_73_0 == NULL)
                    single_instance_1426_73_0 = new_obj;
            }
        }
        FrameObject * single_instance_1426_73_1; single_instance_1426_73_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(laddertopmaker_3842_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_laddertop_357(parent->x + 20, parent->y + 23), parent->layer);
                if (single_instance_1426_73_1 == NULL)
                    single_instance_1426_73_1 = new_obj;
            }
        }
        for (ObjectIterator it(laddertopmaker_3842_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1426_73_end: ;
}
void Frames::event_func_16404()
{
    // event 1427_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1427_73_end;
        if (!((laddermaker_3828_instances.size()) > (0))) goto event_1427_73_end;
        laddermaker_3828_instances.clear_selection();
        for (ObjectIterator it(laddermaker_3828_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(3);
            ((Active*)*it)->destroy();
        }
    }
    event_1427_73_end: ;
}
void Frames::event_func_16405()
{
    // event 1428_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1428_73_end;
        if (!((objectspiketrapmask_3836_instances.size()) > (0))) goto event_1428_73_end;
        FrameObject * single_instance_1428_73_0; single_instance_1428_73_0 = NULL;
        // select single: true false false
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator p_it(objectspiketrapmask_3836_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectspiketrap_3835(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1428_73_0 == NULL)
                    single_instance_1428_73_0 = new_obj;
            }
        }
    }
    event_1428_73_end: ;
}
void Frames::event_func_16406()
{
    // event 1429_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1429_73_end;
        if (!((objectplatformmaker1_3838_instances.size()) > (0))) goto event_1429_73_end;
        FrameObject * single_instance_1429_73_0; single_instance_1429_73_0 = NULL;
        // select single: true false false
        objectplatformmaker1_3838_instances.clear_selection();
        for (ObjectIterator p_it(objectplatformmaker1_3838_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelmovingplatform1_3840(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1429_73_0 == NULL)
                    single_instance_1429_73_0 = new_obj;
            }
        }
        for (ObjectIterator it(objectplatformmaker1_3838_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1429_73_end: ;
}
void Frames::event_func_16407()
{
    // event 1430_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1430_73_end;
        if (!((objectplatformmaker2_3839_instances.size()) > (0))) goto event_1430_73_end;
        FrameObject * single_instance_1430_73_0; single_instance_1430_73_0 = NULL;
        // select single: true false false
        objectplatformmaker2_3839_instances.clear_selection();
        for (ObjectIterator p_it(objectplatformmaker2_3839_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelmovingplatform2_3841(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1430_73_0 == NULL)
                    single_instance_1430_73_0 = new_obj;
            }
        }
        for (ObjectIterator it(objectplatformmaker2_3839_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1430_73_end: ;
}
void Frames::event_func_16408()
{
    // event 1431_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1431_73_end;
        if (!((gimmickspikechainmaker_3843_instances.size()) > (0))) goto event_1431_73_end;
        gimmickspikechainmaker_3843_instances.clear_selection();
        spread_value(gimmickspikechainmaker_3843_instances, 1, 0);
        {
            loop_sc_running = true;
            int times = int(gimmickspikechainmaker_3843_instances.size());
            loop_sc_index = 0;
            while (loop_sc_index < times) {
                loop_sc_73();
                if (!loop_sc_running) break;
                loop_sc_index++;
            }
        }
    }
    event_1431_73_end: ;
}
void Frames::event_func_16409()
{
    // event 1437_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_load_stage_1)) goto event_1437_73_end;
        startlocationmaker_3830_instances.clear_selection();
        if (!check_not_overlap(startlocationmaker_3830_instances, qualifier_7)) goto event_1437_73_end;
        if (!check_not_overlap(startlocationmaker_3830_instances, qualifier_8)) goto event_1437_73_end;
        if (!check_not_overlap(startlocationmaker_3830_instances, qualifier_29)) goto event_1437_73_end;
        if (not_always_1437_73 > loop_count) {
            not_always_1437_73 = loop_count + 2;
            goto event_1437_73_end;
        }
        not_always_1437_73 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(false);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(startlocationmaker_3830_instances, default_active_instance))->get_x()+16);
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(startlocationmaker_3830_instances, default_active_instance))->get_y()+16);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_academy_stages_load_stage_1 = false;
    
        if (!group_main_engine_level_specific_methods_academy_stages_begin_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_begin_stage_1 = true;
        }
        objectchair_522_instances.clear_selection();
        for (ObjectIterator it(objectchair_522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(800);
        }
        ((Counter*)get_instance(guirings_122_instances))->set(((INI*)get_instance(ini_3855_instances))->get_value(str_properties_267, str_life_271));
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        global_values->set(3, 0);
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(mapselect_3863_instances))->set_visible(false);
        ((Active*)get_instance(return_111_instances))->set_visible(false);
    }
    event_1437_73_end: ;
}
void Frames::event_func_16410()
{
    // event 1438_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1438_73_end;
        if (not_always_1438_73 > loop_count) {
            not_always_1438_73 = loop_count + 2;
            goto event_1438_73_end;
        }
        not_always_1438_73 = loop_count + 2;
        ((Active*)get_instance(guitimer_564_instances))->set_visible(true);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(true);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(true);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(true);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(true);
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(true);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(true);
        set_lives(get_max(global_values->get(8), 3));
        ((Active*)get_instance(guipause_453_instances))->force_frame(3);
            group_pause_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->move_front();
    }
    event_1438_73_end: ;
}
void Frames::event_func_16411()
{
    // event 1439_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1439_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_1439_73_end;
        if (not_always_1439_73 > loop_count) {
            not_always_1439_73 = loop_count + 2;
            goto event_1439_73_end;
        }
        not_always_1439_73 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 37);
    }
    event_1439_73_end: ;
}
void Frames::event_func_16412()
{
    // event 1440_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1440_73_end;
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickspikechain1_3844_instances.has_selection()) goto event_1440_73_end;
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_1440_73_end: ;
}
void Frames::event_func_16413()
{
    // event 1441_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1441_73_end;
        ((Active*)get_instance(levelcardready2_3860_instances))->set_x_scale(((Active*)get_instance(levelcardready2_3860_instances))->alterables->values.get(0));
        gimmickhangingidlesensor_740_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlesensor_740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/6)%math_helper%9);
        }
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(23)+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.set(1, 10);
        }
        objecttarget_367_instances.clear_selection();
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->move_back();
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
        minibossgolem_1252_instances.clear_selection();
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
            ((Active*)*it)->move_back();
        }
        // icache destruction
        bossmantalithleftknee_1532_instances.clear_selection();
        objectplatformmaker2_3839_instances.clear_selection();
        objecttargetmaker_3829_instances.clear_selection();
        bossmantalithleg3_1534_instances.clear_selection();
        customtile9_3807_instances.clear_selection();
        bossmantalitharm6_1599_instances.clear_selection();
        bossmantalithrightknee_1533_instances.clear_selection();
        bossmantalithneck4_1530_instances.clear_selection();
        bossmantalithdebris_1602_instances.clear_selection();
        startlocationmaker_3830_instances.clear_selection();
        customtile28_3826_instances.clear_selection();
        customtile8_3806_instances.clear_selection();
        laddertopmaker_3842_instances.clear_selection();
        bossmantalithneck2_1536_instances.clear_selection();
        bossmantalithleg2_1535_instances.clear_selection();
        laddermaker_3828_instances.clear_selection();
        gimmickhangingidlebar_3827_instances.clear_selection();
        bossmantalithbody_1529_instances.clear_selection();
        bossmantalithhead3_1596_instances.clear_selection();
        bossmantalithneck3_1531_instances.clear_selection();
        bossmantalithhead2_1597_instances.clear_selection();
        bossmantalithhead_1598_instances.clear_selection();
        customtile29_3837_instances.clear_selection();
        objectplatformmaker1_3838_instances.clear_selection();
        bossmantalitharm3_1600_instances.clear_selection();
        objectmonitormaker_3831_instances.clear_selection();
        bossmantalithneck1_1537_instances.clear_selection();
        objectbombmaker_3832_instances.clear_selection();
        gimmickspikechainmaker_3843_instances.clear_selection();
        bossmantalithleg1_1528_instances.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1441_73_end: ;
}
void Frames::event_func_16414()
{
    // event 1442_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1442_73_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1442_73_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 3);
    }
    event_1442_73_end: ;
}
void Frames::event_func_16415()
{
    // event 1443_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1443_73_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1443_73_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 99);
    }
    event_1443_73_end: ;
}
void Frames::event_func_16416()
{
    // event 1444_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1444_73_end;
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!playerprojectile_320_instances.has_selection()) goto event_1444_73_end;
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1444_73_0; single_instance_1444_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerprojectile_320_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1444_73_0 == NULL)
                    single_instance_1444_73_0 = new_obj;
            }
        }
    }
    event_1444_73_end: ;
}
void Frames::event_func_16417()
{
    // event 1445_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1445_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1445_73_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_73();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
    }
    event_1445_73_end: ;
}
void Frames::event_func_16418()
{
    // event 1446_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1446_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1446_73_end;
        if (((Active*)get_instance(levelcardready_3859_instances))->flags & VISIBLE) goto event_1446_73_end;
        ((Active*)get_instance(levelcardready_3859_instances))->set_visible(true);
        media.play_id(SOUND_DOJO_READY_2_190, -1, 1);
    }
    event_1446_73_end: ;
}
void Frames::event_func_16419()
{
    // event 1447_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1447_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1447_73_end;
        ((Active*)get_instance(levelcardready2_3860_instances))->alterables->values.add(0, 0.01);
        ((Active*)get_instance(levelcardready2_3860_instances))->set_visible(true);
        ((Counter*)get_instance(targetsleft_3861_instances))->set(objecttarget_367_instances.size());
        ((Counter*)get_instance(targetsleft_3861_instances))->set_visible(true);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
    }
    event_1447_73_end: ;
}
void Frames::event_func_16420()
{
    // event 1448_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1)) goto event_1448_73_end;
        if (!((((Active*)get_instance(levelcardready2_3860_instances))->alterables->values.get(0)) >= (1))) goto event_1448_73_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1448_73_end;
        ((Active*)get_instance(levelcardready2_3860_instances))->set_visible(false);
        ((Active*)get_instance(levelcardready_3859_instances))->set_direction(1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
            group_main_engine_level_specific_methods_academy_stages_begin_stage_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_main_engine_level_specific_methods_academy_stages_during_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_during_stage_1 = true;
        }
        ((Active*)get_instance(levelcardready2_3860_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(levelcardready_3859_instances))->alterables->values.set(25, 8);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        media.play_id(SOUND_DOJO_GO_2_189, -1, 1);
        objecttarget_367_instances.clear_selection();
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1448_73_end: ;
}
void Frames::event_func_16421()
{
    // event 1449_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1449_73_end;
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1449_73_end: ;
}
void Frames::event_func_16422()
{
    // event 1450_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1450_73_end;
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickspikechain1_3844_instances.has_selection()) goto event_1450_73_end;
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_1450_73_end: ;
}
void Frames::event_func_16423()
{
    // event 1451_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1451_73_end;
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickspikechain1_3844_instances.has_selection()) goto event_1451_73_end;
        ((Active*)get_instance(levelcardready2_3860_instances))->set_x_scale(((Active*)get_instance(levelcardready2_3860_instances))->alterables->values.get(0));
        gimmickhangingidlesensor_740_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlesensor_740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%9);
        }
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(23)+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1451_73_end: ;
}
void Frames::event_func_16424()
{
    // event 1452_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1452_73_end;
        objecttarget_367_instances.clear_selection();
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objecttarget_367_instances.has_selection()) goto event_1452_73_end;
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1452_73_end: ;
}
void Frames::event_func_16425()
{
    // event 1454_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1454_73_end;
        objecttarget_367_instances.clear_selection();
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!objecttarget_367_instances.has_selection()) goto event_1454_73_end;
        ((Counter*)get_instance(targetsleft_3861_instances))->subtract(1);
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
        FrameObject * single_instance_1454_73_0; single_instance_1454_73_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttarget_367_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1454_73_0 == NULL)
                    single_instance_1454_73_0 = new_obj;
            }
        }
    }
    event_1454_73_end: ;
}
void Frames::event_func_16426()
{
    // event 1455_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1455_73_end;
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/6)%math_helper%9);
        }
    }
    event_1455_73_end: ;
}
void Frames::event_func_16427()
{
    // event 1456_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1456_73_end;
        player_389_instances.clear_selection();
        objectspiketrapmask_3836_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectspiketrapmask_3836_instances)) goto event_1456_73_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_single(objectspiketrapmask_3836_instances, default_active_instance))->get_y()-8))) goto event_1456_73_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(objectspiketrapmask_3836_instances, default_active_instance))->get_x()))) goto event_1456_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1456_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1456_73_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -4);
    }
    event_1456_73_end: ;
}
void Frames::event_func_16428()
{
    // event 1457_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1457_73_end;
        player_389_instances.clear_selection();
        objectspiketrapmask_3836_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectspiketrapmask_3836_instances)) goto event_1457_73_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_single(objectspiketrapmask_3836_instances, default_active_instance))->get_y()-8))) goto event_1457_73_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_single(objectspiketrapmask_3836_instances, default_active_instance))->get_x()))) goto event_1457_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1457_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1457_73_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 4);
    }
    event_1457_73_end: ;
}
void Frames::event_func_16429()
{
    // event 1458_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1458_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1458_73_end;
        if (not_always_1458_73 > loop_count) {
            not_always_1458_73 = loop_count + 2;
            goto event_1458_73_end;
        }
        not_always_1458_73 = loop_count + 2;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Counter*)get_instance(timerecordmin_219_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/60000)%math_helper%100);
        ((Counter*)get_instance(timerecordsec_218_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/1000)%math_helper%60);
        ((Counter*)get_instance(timerecordmil_216_instances))->set(get_floor(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)/math_helper/10)%math_helper%100);
        ((Active*)get_instance(levelcardready_3859_instances))->set_x(frame_left()+((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(23));
        ((Active*)get_instance(levelcardready_3859_instances))->set_y(frame_top()+((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(24));
        ((Active*)get_instance(levelcardready_3859_instances))->set_direction(2);
        ((Active*)get_instance(levelcardready_3859_instances))->alterables->values.set(25, 8);
        ((Active*)get_instance(levelcardready_3859_instances))->set_visible(true);
        ((Counter*)get_instance(mapselect_3863_instances))->add(1);
            group_pause_1 = false;
    
    }
    event_1458_73_end: ;
}
void Frames::event_func_16430()
{
    // event 1459_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1459_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1459_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 10);
    }
    event_1459_73_end: ;
}
void Frames::event_func_16431()
{
    // event 1460_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1460_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1460_73_end;
        if (!((((Counter*)get_instance(mapselect_3863_instances))->value) == (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), 1)+2))) goto event_1460_73_end;
        if (not_always_1460_73 > loop_count) {
            not_always_1460_73 = loop_count + 2;
            goto event_1460_73_end;
        }
        not_always_1460_73 = loop_count + 2;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), 1)+1, ((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), 1);
    }
    event_1460_73_end: ;
}
void Frames::event_func_16432()
{
    // event 1461_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1461_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1461_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1461_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_1461_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 48);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1461_73_end: ;
}
void Frames::event_func_16433()
{
    // event 1462_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1462_73_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (48))) goto event_1462_73_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)+1)*8+17);
        }
    }
    event_1462_73_end: ;
}
void Frames::event_func_16434()
{
    // event 1463_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1463_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1463_73_end;
        if (!(((Active*)get_instance(levelcardready_3859_instances))->flags & VISIBLE)) goto event_1463_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(25)) <= (0))) goto event_1463_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) < (200))) goto event_1463_73_end;
        ((Active*)get_instance(levelcardready_3859_instances))->alterables->values.add(0, 1);
    }
    event_1463_73_end: ;
}
void Frames::event_func_16435()
{
    // event 1464_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1464_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1464_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) == (50))) goto event_1464_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value)) <= (0))) goto event_1464_73_end;
        if (not_always_1464_73 > loop_count) {
            not_always_1464_73 = loop_count + 2;
            goto event_1464_73_end;
        }
        not_always_1464_73 = loop_count + 2;
        media.play_id(SOUND_ITEM_PETALGET2_4, -1, 1);
        ((Active*)get_instance(newrecord_3864_instances))->alterables->values.set(25, 8);
        ((Active*)get_instance(newrecord_3864_instances))->set_visible(true);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25), ((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value);
    }
    event_1464_73_end: ;
}
void Frames::event_func_16436()
{
    // event 1465_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1465_73_end;
        if (!((((Counter*)get_instance(targetsleft_3861_instances))->value) == (0))) goto event_1465_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) == (50))) goto event_1465_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value)) > (0))) goto event_1465_73_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) < (((ArrayObject*)get_instance(recorddata_34_instances))->get_value(((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value)))) goto event_1465_73_end;
        if (not_always_1465_73 > loop_count) {
            not_always_1465_73 = loop_count + 2;
            goto event_1465_73_end;
        }
        not_always_1465_73 = loop_count + 2;
        media.play_id(SOUND_ITEM_PETALGET2_4, -1, 1);
        ((Active*)get_instance(newrecord_3864_instances))->alterables->values.set(25, 8);
        ((Active*)get_instance(newrecord_3864_instances))->set_visible(true);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25), ((Active*)get_instance(recordlabel_210_instances))->alterables->values.get(4), ((Counter*)get_instance(mapselect_3863_instances))->value);
    }
    event_1465_73_end: ;
}
void Frames::event_func_16437()
{
    // event 1466_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1466_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) == (200))) goto event_1466_73_end;
        if (not_always_1466_73 > loop_count) {
            not_always_1466_73 = loop_count + 2;
            goto event_1466_73_end;
        }
        not_always_1466_73 = loop_count + 2;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1466_73_end: ;
}
void Frames::event_func_16438()
{
    // event 1467_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1467_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) == (200))) goto event_1467_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1467_73_end: ;
}
void Frames::event_func_16439()
{
    // event 1468_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1)) goto event_1468_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) == (200))) goto event_1468_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1468_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        next_frame = (index+1-0)-1 + 0;    
    
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_1468_73_end: ;
}
void Frames::event_func_16440()
{
    // event 1469_73
    {
        if (!(group_main_engine_1)) goto event_1469_73_end;
        if (!(((Active*)get_instance(levelcardready_3859_instances))->test_directions(2))) goto event_1469_73_end;
        ((Active*)get_instance(levelcardready_3859_instances))->alterables->values.add(0, 1);
    }
    event_1469_73_end: ;
}
void Frames::event_func_16441()
{
    // event 1470_73
    {
        if (!(group_main_engine_1)) goto event_1470_73_end;
        if (!(((Active*)get_instance(levelcardready_3859_instances))->test_directions(2))) goto event_1470_73_end;
        if (!((((Active*)get_instance(levelcardready_3859_instances))->alterables->values.get(0)) > (50))) goto event_1470_73_end;
        ((Active*)get_instance(levelcardready_3859_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(levelcardready_3859_instances))->set_visible(false);
        ((Active*)get_instance(levelcardready_3859_instances))->set_direction(0);
    }
    event_1470_73_end: ;
}
void Frames::event_func_16442()
{
    // event 1471_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1471_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
    }
    event_1471_73_end: ;
}
void Frames::event_func_16443()
{
    // event 1472_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1472_73_end;
        if (not_always_1472_73 > loop_count) {
            not_always_1472_73 = loop_count + 2;
            goto event_1472_73_end;
        }
        not_always_1472_73 = loop_count + 2;
        set_display_center(((Active*)get_instance(hand_292_instances))->get_x(), -1);
        set_display_center(-1, ((Active*)get_instance(hand_292_instances))->get_y());
        ((Active*)get_instance(hand_292_instances))->set_visible(true);
        {
            ((Active*)get_instance(hand_292_instances))->set_global_position(640, 540);
            pos_end_1472_73_0: ;
        }
        inventory_3858_instances.clear_selection();
        spread_value(inventory_3858_instances, 0, 0);
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(0)%math_helper%5);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)/math_helper/5);
        }
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(0, 0);
        ((Counter*)get_instance(maptoload_3862_instances))->set_visible(true);
    }
    event_1472_73_end: ;
}
void Frames::event_func_16444()
{
    // event 1473_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1473_73_end;
            group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1 = false;
    
            group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1 = false;
    
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1));
        }
            group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1 = false;
    
            group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1 = false;
    
        yellowspringdown_437_instances.clear_selection();
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 102);
        }
        yellowspringup_434_instances.clear_selection();
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 101);
        }
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 103);
        }
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 104);
        }
        yellowspringupright_433_instances.clear_selection();
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 105);
        }
        yellowspringupleft_432_instances.clear_selection();
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 106);
        }
        redspringup_440_instances.clear_selection();
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 107);
        }
        redspringdown_443_instances.clear_selection();
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 108);
        }
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 109);
        }
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 110);
        }
        redspringupleft_439_instances.clear_selection();
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 112);
        }
        redspringupright_438_instances.clear_selection();
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 111);
        }
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 113);
        }
        hazardspikesdown_559_instances.clear_selection();
        for (ObjectIterator it(hazardspikesdown_559_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 114);
        }
        hazardspikesleft_560_instances.clear_selection();
        for (ObjectIterator it(hazardspikesleft_560_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 115);
        }
        hazardspikesright_561_instances.clear_selection();
        for (ObjectIterator it(hazardspikesright_561_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 116);
        }
            group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1 = false;
    
            group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1 = false;
    
    }
    event_1473_73_end: ;
}
void Frames::event_func_16445()
{
    // event 1474_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1474_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1474_73_end;
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 29);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)-2)%math_helper%((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1474_73_end: ;
}
void Frames::event_func_16446()
{
    // event 1475_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1475_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1475_73_end;
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 22);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)-2)%math_helper%((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1475_73_end: ;
}
void Frames::event_func_16447()
{
    // event 1476_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1476_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1476_73_end;
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 4);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)-2)%math_helper%((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1476_73_end: ;
}
void Frames::event_func_16448()
{
    // event 1477_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1477_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto event_1477_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1 = true;
        }
    }
    event_1477_73_end: ;
}
void Frames::event_func_16449()
{
    // event 1478_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1478_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1478_73_end;
        ((Active*)get_instance(hand_292_instances))->set_x(((Active*)get_instance(hand_292_instances))->get_x()+3);
    }
    event_1478_73_end: ;
}
void Frames::event_func_16450()
{
    // event 1479_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1479_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1479_73_end;
        ((Active*)get_instance(hand_292_instances))->set_x(((Active*)get_instance(hand_292_instances))->get_x()-3);
    }
    event_1479_73_end: ;
}
void Frames::event_func_16451()
{
    // event 1480_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1480_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1480_73_end;
        ((Active*)get_instance(hand_292_instances))->set_y(((Active*)get_instance(hand_292_instances))->get_y()+3);
    }
    event_1480_73_end: ;
}
void Frames::event_func_16452()
{
    // event 1481_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1481_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1481_73_end;
        ((Active*)get_instance(hand_292_instances))->set_y(((Active*)get_instance(hand_292_instances))->get_y()-3);
    }
    event_1481_73_end: ;
}
void Frames::event_func_16453()
{
    // event 1482_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1482_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->flags & VISIBLE)) goto event_1482_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        set_display_center(((Active*)get_instance(hand_292_instances))->get_x(), -1);
        set_display_center(-1, ((Active*)get_instance(hand_292_instances))->get_y());
    }
    event_1482_73_end: ;
}
void Frames::event_func_16454()
{
    // event 1483_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1483_73_end;
        ((Active*)get_instance(hand_292_instances))->set_direction(8);
        ((Active*)get_instance(hand_292_instances))->alterables->flags.disable(0);
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        ((Active*)get_instance(objectinfo_3854_instances))->set_direction(0);
        ((Active*)get_instance(highlighter_36_instances))->move_front();
        ((Active*)get_instance(hand_292_instances))->move_front();
        ((Active*)get_instance(objectinfo_3854_instances))->move_front();
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
        minibossgolem_1252_instances.clear_selection();
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
            ((Active*)*it)->alterables->flags.disable(29);
        }
    }
    event_1483_73_end: ;
}
void Frames::event_func_16455()
{
    // event 1484_73
    bool or_result_1484_73 = false;
    bool or_temp_result_1484_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto or_event_1484_73_0_end;
        hand_292_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_7)) goto or_event_1484_73_0_end;
        if (not_always_1484_73 > loop_count) {
            not_always_1484_73 = loop_count + 2;
            goto or_event_1484_73_0_end;
        }
        not_always_1484_73 = loop_count + 2;
        or_result_1484_73 = true;
        or_temp_result_1484_73_0 = true;
    }
    or_event_1484_73_0_end: ;
    hand_292_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1484_73_0) {
        hand_292_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1484_73
    bool or_temp_result_1484_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto or_event_1484_73_1_end;
        hand_292_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_8)) goto or_event_1484_73_1_end;
        if (not_always_1484_73 > loop_count) {
            not_always_1484_73 = loop_count + 2;
            goto or_event_1484_73_1_end;
        }
        not_always_1484_73 = loop_count + 2;
        or_result_1484_73 = true;
        or_temp_result_1484_73_1 = true;
    }
    or_event_1484_73_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1484_73_1) {
        hand_292_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1484_73
    bool or_temp_result_1484_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto or_event_1484_73_2_end;
        hand_292_instances.clear_selection();
        qualifier_29.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_29)) goto or_event_1484_73_2_end;
        if (not_always_1484_73 > loop_count) {
            not_always_1484_73 = loop_count + 2;
            goto or_event_1484_73_2_end;
        }
        not_always_1484_73 = loop_count + 2;
        or_result_1484_73 = true;
        or_temp_result_1484_73_2 = true;
        or_event_1484_73_2_end: ;
        qualifier_29.clear_saved_selection();
        if (or_temp_result_1484_73_2) {
            qualifier_29.save_selection();
            hand_292_instances.save_selection();
        }
        if (!or_result_1484_73) goto or_final_or_event_1484_73_2_end;
        qualifier_8.empty_selection();
        qualifier_29.empty_selection();
        qualifier_7.empty_selection();
        hand_292_instances.empty_selection();
        if (or_temp_result_1484_73_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1484_73_0 || or_temp_result_1484_73_1 || or_temp_result_1484_73_2) {
            hand_292_instances.restore_selection();
        }
        if (or_temp_result_1484_73_1) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1484_73_2) {
            qualifier_29.restore_selection();
        }
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(2);
        }
    }
    or_final_or_event_1484_73_2_end: ;
}
void Frames::event_func_16456()
{
    // event 1485_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1485_73_end;
        hand_292_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_7)) goto event_1485_73_end;
        ((Active*)get_instance(highlighter_36_instances))->set_x(((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0));
        ((Active*)get_instance(highlighter_36_instances))->set_y(((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1));
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1))/math_helper/8);
        ((Active*)get_instance(hand_292_instances))->restore_frame();
        {
            FrameObject * parent = ((Active*)get_instance(hand_292_instances));
            if (parent == NULL) goto pos_end_1485_73_0;
            ((Active*)get_instance(objectinfo_3854_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1485_73_0: ;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->flags.enable(0);
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1485_73_end: ;
}
void Frames::event_func_16457()
{
    // event 1486_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1486_73_end;
        hand_292_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_8)) goto event_1486_73_end;
        ((Active*)get_instance(highlighter_36_instances))->set_x(((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0));
        ((Active*)get_instance(highlighter_36_instances))->set_y(((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1));
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1))/math_helper/8);
        ((Active*)get_instance(hand_292_instances))->restore_frame();
        {
            FrameObject * parent = ((Active*)get_instance(hand_292_instances));
            if (parent == NULL) goto pos_end_1486_73_0;
            ((Active*)get_instance(objectinfo_3854_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1486_73_0: ;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->flags.enable(0);
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1486_73_end: ;
}
void Frames::event_func_16458()
{
    // event 1487_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1487_73_end;
        hand_292_instances.clear_selection();
        qualifier_29.clear_selection();
        if (!check_overlap(hand_292_instances, qualifier_29)) goto event_1487_73_end;
        ((Active*)get_instance(highlighter_36_instances))->set_x(((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0));
        ((Active*)get_instance(highlighter_36_instances))->set_y(((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1));
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1))/math_helper/8);
        ((Active*)get_instance(hand_292_instances))->restore_frame();
        {
            FrameObject * parent = ((Active*)get_instance(hand_292_instances));
            if (parent == NULL) goto pos_end_1487_73_0;
            ((Active*)get_instance(objectinfo_3854_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1487_73_0: ;
        }
        ((Active*)get_instance(hand_292_instances))->alterables->flags.enable(0);
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(29);
        }
    }
    event_1487_73_end: ;
}
void Frames::event_func_16459()
{
    // event 1488_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1488_73_end;
        hand_292_instances.clear_selection();
        if (!check_not_overlap(hand_292_instances, qualifier_7)) goto event_1488_73_end;
        if (!check_not_overlap(hand_292_instances, qualifier_8)) goto event_1488_73_end;
        if (!check_not_overlap(hand_292_instances, qualifier_29)) goto event_1488_73_end;
        {
            ((Active*)get_instance(highlighter_36_instances))->set_global_position(-100, 0);
            pos_end_1488_73_0: ;
        }
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale(1);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale(1);
        ((Active*)get_instance(hand_292_instances))->force_frame(0);
        {
            ((Active*)get_instance(objectinfo_3854_instances))->set_global_position(-200, 0);
            pos_end_1488_73_1: ;
        }
    }
    event_1488_73_end: ;
}
void Frames::event_func_16460()
{
    // event 1489_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1489_73_end;
        hand_292_instances.clear_selection();
        startlocationmaker_3830_instances.clear_selection();
        if (!check_overlap(hand_292_instances, startlocationmaker_3830_instances)) goto event_1489_73_end;
        ((Active*)get_instance(objectinfo_3854_instances))->set_direction(31);
    }
    event_1489_73_end: ;
}
void Frames::event_func_16461()
{
    // event 1490_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1490_73_end;
        ((Active*)get_instance(hand_292_instances))->set_direction(global_values->get(1));
        {
            ((Active*)get_instance(highlighter_36_instances))->blend_color.set_semi_transparency(80+sin_deg(((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0))*5);
        }
        ((Active*)get_instance(highlighter_36_instances))->alterables->values.set(0, (((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)+8)%math_helper%360);
    }
    event_1490_73_end: ;
}
void Frames::event_func_16462()
{
    // event 1491_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1491_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1491_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1491_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_1491_73_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 0);
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_1491_73_end: ;
}
void Frames::event_func_16463()
{
    // event 1492_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1492_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1492_73_end;
        if (((Active*)get_instance(objectinfo_3854_instances))->test_directions(2147483648)) goto event_1492_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1492_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_1492_73_end;
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1492_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, ((Active*)get_single(qualifier_7, default_active_instance))->alterables->values.get(0));
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(3))*0.5);
    }
    event_1492_73_end: ;
}
void Frames::event_func_16464()
{
    // event 1493_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1493_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1493_73_end;
        if (((Active*)get_instance(objectinfo_3854_instances))->test_directions(2147483648)) goto event_1493_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1493_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_1493_73_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1493_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, ((Active*)get_single(qualifier_8, default_active_instance))->alterables->values.get(0));
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(3))*0.5);
    }
    event_1493_73_end: ;
}
