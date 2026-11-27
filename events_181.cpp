#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14115()
{
    // event 11_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_11_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_11_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_11_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_11_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10, frame_left()));
    }
    event_11_66_end: ;
}
void Frames::event_func_14116()
{
    // event 12_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_12_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_12_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_12_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (31))) goto event_12_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-5, frame_left()));
    }
    event_12_66_end: ;
}
void Frames::event_func_14117()
{
    // event 13_66
    bool or_result_13_66 = false;
    bool or_temp_result_13_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto or_event_13_66_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_13_66_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_13_66_0_end;
        or_result_13_66 = true;
        or_temp_result_13_66_0 = true;
    }
    or_event_13_66_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_13_66_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 13_66
    bool or_temp_result_13_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto or_event_13_66_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_13_66_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_13_66_1_end;
        or_result_13_66 = true;
        or_temp_result_13_66_1 = true;
        or_event_13_66_1_end: ;
        if (or_temp_result_13_66_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_13_66) goto or_final_or_event_13_66_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_13_66_0 || or_temp_result_13_66_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_13_66_0 || or_temp_result_13_66_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1), 5.05));
            ((Active*)*it)->alterables->values.sub(1, 0.2);
        }
    }
    or_final_or_event_13_66_1_end: ;
}
void Frames::event_func_14118()
{
    // event 14_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_14_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_14_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_14_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_14_66_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_14_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (10))) goto event_14_66_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_14_66_end: ;
}
void Frames::event_func_14119()
{
    // event 15_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_15_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_15_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_15_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_15_66_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_15_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 0.2);
    }
    event_15_66_end: ;
}
void Frames::event_func_14120()
{
    // event 16_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_16_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_16_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_16_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_16_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_16_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10);
    }
    event_16_66_end: ;
}
void Frames::event_func_14121()
{
    // event 17_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_17_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (4))) goto event_17_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_17_66_end: ;
}
void Frames::event_func_14122()
{
    // event 18_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_18_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(14, 15);
        scrollingfloor_3439_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor_3439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15);
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_x()-cos_deg(0)*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()+sin_deg(0)*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->move_back();
        }
        scrollingfloor2_3440_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor2_3440_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15);
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_x()-cos_deg(0)*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-208+sin_deg(0)*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->move_back();
        }
    }
    event_18_66_end: ;
}
void Frames::event_func_14123()
{
    // event 19_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_19_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(14)) >= (128))) goto event_19_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.sub(14, 128);
        FrameObject * single_instance_19_66_0; single_instance_19_66_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxvalues_3458_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_scrollingfloor_3439(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_19_66_0 == NULL)
                    single_instance_19_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_19_66_0))->alterables->values.set(0, ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(14));
        FrameObject * single_instance_19_66_1; single_instance_19_66_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxvalues_3458_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_scrollingfloor2_3440(parent->x + 0, parent->y + -208), parent->layer);
                if (single_instance_19_66_1 == NULL)
                    single_instance_19_66_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_19_66_1))->alterables->values.set(0, ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(14));
    }
    event_19_66_end: ;
}
void Frames::event_func_14124()
{
    // event 20_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_20_66_end;
        scrollingfloor_3439_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor_3439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (800))) { it.deselect(); continue; }
        }
        if (!scrollingfloor_3439_instances.has_selection()) goto event_20_66_end;
        for (ObjectIterator it(scrollingfloor_3439_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_20_66_end: ;
}
void Frames::event_func_14125()
{
    // event 21_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_21_66_end;
        scrollingfloor2_3440_instances.clear_selection();
        for (ObjectIterator it(scrollingfloor2_3440_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (800))) { it.deselect(); continue; }
        }
        if (!scrollingfloor2_3440_instances.has_selection()) goto event_21_66_end;
        for (ObjectIterator it(scrollingfloor2_3440_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_21_66_end: ;
}
void Frames::event_func_14126()
{
    // event 22_66
    {
        if (!(group_main_engine_1 && group_main_engine_scrolling_floor_1)) goto event_22_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_22_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_22_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+18))) goto event_22_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+18);
    }
    event_22_66_end: ;
}
void Frames::event_func_14127()
{
    // event 1475_66
    {
        if (!(group_main_engine_1)) goto event_1475_66_end;
        hazardzapbeam_3388_instances.clear_selection();
        if (!check_not_overlap(hazardzapbeam_3388_instances, playerreflect_447_instances)) goto event_1475_66_end;
        for (ObjectIterator it(hazardzapbeam_3388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(((Active*)*it)->y_scale+1, 48));
        }
    }
    event_1475_66_end: ;
}
void Frames::event_func_14128()
{
    // event 1476_66
    {
        if (!(group_main_engine_1)) goto event_1476_66_end;
        hazardzapbeamhitbox_3421_instances.clear_selection();
        if (!check_not_overlap(hazardzapbeamhitbox_3421_instances, playerreflect_447_instances)) goto event_1476_66_end;
        for (ObjectIterator it(hazardzapbeamhitbox_3421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(((Active*)*it)->y_scale+1, 48));
        }
    }
    event_1476_66_end: ;
}
void Frames::event_func_14129()
{
    // event 1503_66
    {
        if (!(group_main_engine_1)) goto event_1503_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1503_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) < (1))) goto event_1503_66_end;
        if (!((global_values->get(4)) < (2))) goto event_1503_66_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_04_ogg_229, 29-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(0, 1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(1, 0);
    }
    event_1503_66_end: ;
}
void Frames::event_func_14130()
{
    // event 1505_66
    {
        if (!(group_main_engine_1)) goto event_1505_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (1))) goto event_1505_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (180))) goto event_1505_66_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
        media.unlock(29-1);
    }
    event_1505_66_end: ;
}
void Frames::event_func_14131()
{
    // event 1506_66
    {
        if (!(group_main_engine_1)) goto event_1506_66_end;
        airlock1_3453_instances.clear_selection();
        for (ObjectIterator it(airlock1_3453_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        airlock4_3454_instances.clear_selection();
        for (ObjectIterator it(airlock4_3454_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        airlock2_3451_instances.clear_selection();
        for (ObjectIterator it(airlock2_3451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
        airlock3_3452_instances.clear_selection();
        for (ObjectIterator it(airlock3_3452_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(airlockbase_3455_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1506_66_end: ;
}
void Frames::event_func_14132()
{
    // event 1507_66
    {
        if (!(group_main_engine_1)) goto event_1507_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1507_66_end;
        if (not_always_1507_66 > loop_count) {
            not_always_1507_66 = loop_count + 2;
            goto event_1507_66_end;
        }
        not_always_1507_66 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1507_66_end: ;
}
void Frames::event_func_14133()
{
    // event 1508_66
    {
        if (!(group_main_engine_1)) goto event_1508_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1508_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1508_66_end: ;
}
void Frames::event_func_14134()
{
    // event 1509_66
    {
        if (!(group_main_engine_1)) goto event_1509_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1509_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+16, 192));
        }
    }
    event_1509_66_end: ;
}
void Frames::event_func_14135()
{
    // event 1510_66
    {
        if (!(group_main_engine_1)) goto event_1510_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (192))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1510_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 192));
        }
    }
    event_1510_66_end: ;
}
void Frames::event_func_14136()
{
    // event 1511_66
    {
        if (!(group_main_engine_1)) goto event_1511_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (192))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1511_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+16, 192));
        }
    }
    event_1511_66_end: ;
}
void Frames::event_func_14137()
{
    // event 1512_66
    {
        if (!(group_main_engine_1)) goto event_1512_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1512_66_end;
        if (not_always_1512_66 > loop_count) {
            not_always_1512_66 = loop_count + 2;
            goto event_1512_66_end;
        }
        not_always_1512_66 = loop_count + 2;
        media.play_id(SOUND_AIRLOCK_383, -1, 1);
    }
    event_1512_66_end: ;
}
void Frames::event_func_14138()
{
    // event 1513_66
    {
        if (!(group_main_engine_1)) goto event_1513_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1513_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1513_66_end: ;
}
void Frames::event_func_14139()
{
    // event 1514_66
    {
        if (!(group_main_engine_1)) goto event_1514_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1514_66_end;
        {
            SavedSelection extra_airlockbase_3455_instances(airlockbase_3455_instances);
            for (SavedIterator it(extra_airlockbase_3455_instances); !it.end(); ++it) {
                foreach_instance_air = ((Active*)*it);
                foreach_air_66();
            }
        }
    }
    event_1514_66_end: ;
}
void Frames::event_func_14140()
{
    // event 1516_66
    {
        if (!(group_main_engine_1)) goto event_1516_66_end;
        effectairlockwind_3438_instances.clear_selection();
        for (ObjectIterator it(effectairlockwind_3438_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
        }
        {
            airlockbase_3455_instances.clear_selection();
            SavedSelection extra_airlockbase_3455_instances(airlockbase_3455_instances);
            for (SavedIterator it(extra_airlockbase_3455_instances); !it.end(); ++it) {
                foreach_instance_airlock = ((Active*)*it);
                foreach_airlock_66();
            }
        }
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1516_66_end: ;
}
void Frames::event_func_14141()
{
    // event 1517_66
    {
        if (!(group_main_engine_1)) goto event_1517_66_end;
        effectairlockwind_3438_instances.clear_selection();
        for (ObjectIterator it(effectairlockwind_3438_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+30))) { it.deselect(); continue; }
        }
        if (!effectairlockwind_3438_instances.has_selection()) goto event_1517_66_end;
        for (ObjectIterator it(effectairlockwind_3438_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1517_66_end: ;
}
void Frames::event_func_14142()
{
    // event 1518_66
    {
        if (!(group_main_engine_1)) goto event_1518_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-112))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+112))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1518_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(6, 0.3);
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1518_66_end: ;
}
void Frames::event_func_14143()
{
    // event 1519_66
    {
        if (!(group_main_engine_1)) goto event_1519_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1519_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1519_66_end: ;
}
void Frames::event_func_14144()
{
    // event 1520_66
    {
        if (!(group_main_engine_1)) goto event_1520_66_end;
        airlockbase_3455_instances.clear_selection();
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!airlockbase_3455_instances.has_selection()) goto event_1520_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (15))) goto event_1520_66_end;
        player_389_instances.clear_selection();
        if (!check_not_overlap(player_389_instances, gimmickclothesline_1970_instances)) goto event_1520_66_end;
        for (ObjectIterator it(airlockbase_3455_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.3, 30));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, ((Active*)get_single(airlockbase_3455_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1520_66_end: ;
}
void Frames::event_func_14145()
{
    // event 1525_66
    {
        if (!(group_main_engine_1)) goto event_1525_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
        }
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1525_66_end: ;
}
void Frames::event_func_14146()
{
    // event 1526_66
    {
        if (!(group_main_engine_1)) goto event_1526_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_y()-240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!pressuredoor1_3446_instances.has_selection()) goto event_1526_66_end;
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1526_66_end: ;
}
void Frames::event_func_14147()
{
    // event 1527_66
    {
        if (!(group_main_engine_1)) goto event_1527_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!pressuredoor1_3446_instances.has_selection()) goto event_1527_66_end;
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+16, 0));
        }
    }
    event_1527_66_end: ;
}
void Frames::event_func_14148()
{
    // event 1528_66
    {
        if (!(group_main_engine_1)) goto event_1528_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!pressuredoor1_3446_instances.has_selection()) goto event_1528_66_end;
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
    }
    event_1528_66_end: ;
}
void Frames::event_func_14149()
{
    // event 1529_66
    {
        if (!(group_main_engine_1)) goto event_1529_66_end;
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_y()-240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!pressuredoor2_3447_instances.has_selection()) goto event_1529_66_end;
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1529_66_end: ;
}
void Frames::event_func_14150()
{
    // event 1530_66
    {
        if (!(group_main_engine_1)) goto event_1530_66_end;
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!pressuredoor2_3447_instances.has_selection()) goto event_1530_66_end;
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-16, 0));
        }
    }
    event_1530_66_end: ;
}
void Frames::event_func_14151()
{
    // event 1531_66
    {
        if (!(group_main_engine_1)) goto event_1531_66_end;
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!pressuredoor2_3447_instances.has_selection()) goto event_1531_66_end;
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1531_66_end: ;
}
void Frames::event_func_14152()
{
    // event 1532_66
    {
        if (!(group_main_engine_1)) goto event_1532_66_end;
        pressuredoor3_3473_instances.clear_selection();
        for (ObjectIterator it(pressuredoor3_3473_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_y()-240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!pressuredoor3_3473_instances.has_selection()) goto event_1532_66_end;
        for (ObjectIterator it(pressuredoor3_3473_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1532_66_end: ;
}
void Frames::event_func_14153()
{
    // event 1533_66
    {
        if (!(group_main_engine_1)) goto event_1533_66_end;
        pressuredoor1_3446_instances.clear_selection();
        for (ObjectIterator it(pressuredoor1_3446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!pressuredoor1_3446_instances.has_selection()) goto event_1533_66_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1533_66_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_1533_66_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, pressuredoor1_3446_instances)) goto event_1533_66_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, pressuredoor1_3446_instances)) goto event_1533_66_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1533_66_end: ;
}
void Frames::event_func_14154()
{
    // event 1534_66
    {
        if (!(group_main_engine_1)) goto event_1534_66_end;
        pressuredoor2_3447_instances.clear_selection();
        for (ObjectIterator it(pressuredoor2_3447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!pressuredoor2_3447_instances.has_selection()) goto event_1534_66_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1534_66_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_1534_66_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, pressuredoor2_3447_instances)) goto event_1534_66_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, pressuredoor2_3447_instances)) goto event_1534_66_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1534_66_end: ;
}
void Frames::event_func_14155()
{
    // event 1666_66
    {
        if (!(group_main_engine_1)) goto event_1666_66_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1666_66_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1666_66_0; single_instance_1666_66_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyfirespitter_1385(parent->x + 0, parent->y + -15), parent->layer);
                if (single_instance_1666_66_0 == NULL)
                    single_instance_1666_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1666_66_0))->move_back();
    }
    event_1666_66_end: ;
}
void Frames::event_func_14156()
{
    // event 1865_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1865_66_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1865_66_end;
        if (not_always_1865_66 > loop_count) {
            not_always_1865_66 = loop_count + 2;
            goto event_1865_66_end;
        }
        not_always_1865_66 = loop_count + 2;
        if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) {
            group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = true;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(10, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
    }
    event_1865_66_end: ;
}
void Frames::event_func_14157()
{
    // event 1888_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1888_66_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1888_66_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1888_66_end: ;
}
void Frames::event_func_14158()
{
    // event 1895_66
    {
        if (!(group_main_engine_1)) goto event_1895_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+120))) goto event_1895_66_end;
        alarmlight_3476_instances.clear_selection();
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!alarmlight_3476_instances.has_selection()) goto event_1895_66_end;
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_x_scale(43);
            ((Active*)*it)->set_y_scale(24);
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_COMMON_TBALARM2_312, -1, 1);
    }
    event_1895_66_end: ;
}
void Frames::event_func_14159()
{
    // event 1896_66
    {
        if (!(group_main_engine_1)) goto event_1896_66_end;
        alarmlight_3476_instances.clear_selection();
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!alarmlight_3476_instances.has_selection()) goto event_1896_66_end;
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(get_max(cos_deg(((Active*)*it)->alterables->values.get(0))*200+180, 0));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+5)%math_helper%360);
        }
    }
    event_1896_66_end: ;
}
void Frames::event_func_14160()
{
    // event 1897_66
    {
        if (!(group_main_engine_1)) goto event_1897_66_end;
        alarmlight_3476_instances.clear_selection();
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!alarmlight_3476_instances.has_selection()) goto event_1897_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibosspushbeamcannon_3474_instances.has_selection()) goto event_1897_66_end;
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1897_66_end: ;
}
void Frames::event_func_14161()
{
    // event 1898_66
    {
        if (!(group_main_engine_1)) goto event_1898_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosspushbeamcannon_3474_instances.has_selection()) goto event_1898_66_end;
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4+((Active*)*it)->alterables->values.get(0));
        }
        minibosspushbeam_3475_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeam_3475_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibosspushbeamcannon_3474_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    event_1898_66_end: ;
}
void Frames::event_func_14162()
{
    // event 1899_66
    {
        if (!(group_main_engine_1)) goto event_1899_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosspushbeamcannon_3474_instances.has_selection()) goto event_1899_66_end;
        player_389_instances.clear_selection();
        minibosspushbeam_3475_instances.clear_selection();
        if (!check_overlap(player_389_instances, minibosspushbeam_3475_instances)) goto event_1899_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_single(minibosspushbeam_3475_instances, default_active_instance))->get_x()+10));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), get_max(5, ((Active*)get_single(minibosspushbeamcannon_3474_instances, default_active_instance))->alterables->values.get(0))));
    }
    event_1899_66_end: ;
}
void Frames::event_func_14163()
{
    // event 1900_66
    {
        if (!(group_main_engine_1)) goto event_1900_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!minibosspushbeamcannon_3474_instances.has_selection()) goto event_1900_66_end;
        minibosspushbeam_3475_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosspushbeam_3475_instances, playercharactersensor_383_instances)) goto event_1900_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1900_66_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1900_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 5);
    }
    event_1900_66_end: ;
}
void Frames::event_func_14164()
{
    // event 1901_66
    {
        if (!(group_main_engine_1)) goto event_1901_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14400))) goto event_1901_66_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1901_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+8))) { it.deselect(); continue; }
        }
        if (!minibosspushbeamcannon_3474_instances.has_selection()) goto event_1901_66_end;
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()+4, frame_left()+8));
        }
    }
    event_1901_66_end: ;
}
void Frames::event_func_14165()
{
    // event 1902_66
    {
        if (!(group_main_engine_1)) goto event_1902_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14400))) goto event_1902_66_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1902_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+4, frame_left()+8));
        }
    }
    event_1902_66_end: ;
}
void Frames::event_func_14166()
{
    // event 1903_66
    {
        if (!(group_main_engine_1)) goto event_1903_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (14400))) goto event_1903_66_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1903_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 0.1);
    }
    event_1903_66_end: ;
}
void Frames::event_func_14167()
{
    // event 1904_66
    {
        if (!(group_main_engine_1)) goto event_1904_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) < (5))) goto event_1904_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (13400))) goto event_1904_66_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(1));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(0, 5);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_03_ogg_227, 29-1);
        media.lock(29-1);
    }
    event_1904_66_end: ;
}
void Frames::event_func_14168()
{
    // event 1905_66
    {
        if (!(group_main_engine_1)) goto event_1905_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (5))) goto event_1905_66_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(1, 1);
    }
    event_1905_66_end: ;
}
void Frames::event_func_14169()
{
    // event 1906_66
    {
        if (!(group_main_engine_1)) goto event_1906_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(0)) == (5))) goto event_1906_66_end;
        if (!((((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.get(1)) > (250))) goto event_1906_66_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->alterables->values.add(0, 1);
        media.unlock(29-1);
    }
    event_1906_66_end: ;
}
void Frames::event_func_14170()
{
    // event 1909_66
    {
        if (!(group_main_engine_1)) goto event_1909_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(3))) goto event_1909_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (12575))) goto event_1909_66_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, frame_top());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, frame_top()+global_values->get(17));
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.enable(3);
        ((SystemBox*)get_instance(levelparallaxtunnel2_3436_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxtunnel1_3437_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
    }
    event_1909_66_end: ;
}
void Frames::event_func_14171()
{
    // event 1910_66
    {
        if (!(group_main_engine_1)) goto event_1910_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_on(3))) goto event_1910_66_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+2, ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-2, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1910_66_end: ;
}
void Frames::event_func_14172()
{
    // event 1911_66
    {
        if (!(group_main_engine_1)) goto event_1911_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (16380))) goto event_1911_66_end;
        if (once_condition_1911_66) goto event_1911_66_end;
        once_condition_1911_66 = true;
        if (!group_main_engine_scrolling_floor_1) {
            group_main_engine_scrolling_floor_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, global_values->get(16));
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((SystemBox*)get_instance(levelparallaxtunnel2_3436_instances))->alterables->values.set(6, -8);
        ((SystemBox*)get_instance(levelparallaxtunnel1_3437_instances))->alterables->values.set(6, -12);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(6, -5);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(6, -3);
        ((SystemBox*)get_instance(levelparallaxpiece1_466_instances))->alterables->values.set(6, -1);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(6, -3);
        if (!group_main_engine_level_specific_methods_bosses_boss_morpher_1) {
            group_main_engine_level_specific_methods_bosses_boss_morpher_1 = true;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        alarmlight_3476_instances.clear_selection();
        for (ObjectIterator it(alarmlight_3476_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(0);
            ((Active*)*it)->alterables->values.set(0, -4);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1911_66_end: ;
}
void Frames::event_func_14173()
{
    // event 1913_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1913_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) < (12))) goto event_1913_66_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
    }
    event_1913_66_end: ;
}
void Frames::event_func_14174()
{
    // event 1914_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1914_66_end;
        minibosspushbeamcannon_3474_instances.clear_selection();
        for (ObjectIterator it(minibosspushbeamcannon_3474_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(sin_deg(global_values->get(3))*16-8);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), frame_right()));
    }
    event_1914_66_end: ;
}
void Frames::event_func_14175()
{
    // event 1915_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1915_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(9)) < (12))) goto event_1915_66_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1915_66_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1915_66_end: ;
}
void Frames::event_func_14176()
{
    // event 1916_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1)) goto event_1916_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1916_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1916_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1916_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1916_66_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
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
            ((Active*)*it)->set_direction(0-((Active*)*it)->alterables->values.get(5));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0+get_min(((Active*)*it)->alterables->values.get(0), 1));
        }
    }
    event_1916_66_end: ;
}
void Frames::event_func_14177()
{
    // event 1917_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_scrolling_floor_movement_1)) goto event_1917_66_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (frame_right()-24))) goto event_1917_66_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, frame_right()-24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 10));
    }
    event_1917_66_end: ;
}
void Frames::event_func_14178()
{
    // event 1918_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1918_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-20, 0);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-20, 0);
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(12, (((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)+5)%math_helper%360);
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-30, 0);
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-30, 0);
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-30, 0);
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-30, 0);
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1918_66_end: ;
}
void Frames::event_func_14179()
{
    // event 1919_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1919_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(5)) < (1))) goto event_1919_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) < (1))) goto event_1919_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(11, ((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-56-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)*64-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)*40-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)*(32+get_abs(sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*64))-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)*32);
    }
    event_1919_66_end: ;
}
void Frames::event_func_14180()
{
    // event 1920_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1920_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1920_66_end;
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1920_66_end: ;
}
void Frames::event_func_14181()
{
    // event 1921_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1921_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(5)) < (1))) goto event_1921_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1921_66_end;
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
            ((Active*)*it)->set_direction(0);
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11));
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1921_66_end: ;
}
void Frames::event_func_14182()
{
    // event 1922_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(5)) == (0))) goto event_1922_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) == (0))) goto event_1922_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(12, 0);
    }
    event_1922_66_end: ;
}
void Frames::event_func_14183()
{
    // event 1923_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1923_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1923_66_end;
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-36*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+36*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0));
        }
    }
    event_1923_66_end: ;
}
void Frames::event_func_14184()
{
    // event 1924_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1924_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1924_66_end;
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+36*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-36*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1));
        }
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1), 0);
        }
    }
    event_1924_66_end: ;
}
void Frames::event_func_14185()
{
    // event 1925_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1925_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1925_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+64*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+64*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+64*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+80*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+56*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+72*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+72*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+96*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+72*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.3*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-(24-cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(64+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(32+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(64+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+68*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+84*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+100*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+84*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+28*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(4+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(58+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+90*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2), 0);
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*20)*1.1*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2));
        }
    }
    event_1925_66_end: ;
}
void Frames::event_func_14186()
{
    // event 1926_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1926_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) > (0))) goto event_1926_66_end;
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(270, 0);
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1926_66_end: ;
}
void Frames::event_func_14187()
{
    // event 1927_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1927_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) >= (1))) goto event_1927_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1927_66_end: ;
}
void Frames::event_func_14188()
{
    // event 1928_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1928_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1928_66_end;
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(80+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*16)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(56+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*8)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+44*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(64+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*12)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(80+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*16)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(56+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*2)*8)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(3));
        }
    }
    event_1928_66_end: ;
}
void Frames::event_func_14189()
{
    // event 1929_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1929_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)) >= (1))) goto event_1929_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1929_66_end: ;
}
void Frames::event_func_14190()
{
    // event 1930_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1930_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1930_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+270*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
        }
        bossmorpherpelvis_3459_instances.clear_selection();
        for (ObjectIterator it(bossmorpherpelvis_3459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+270*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+24*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode1_3469_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+270*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator it(bossmorphernode2_3468_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+270*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+20*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+7*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-7*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*14*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+40*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*14*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorpherwheel1_3463_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel1_3463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-30)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-40*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+180*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
        }
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-90*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4), 0);
        }
        bossmorpherwheel2_3462_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel2_3462_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-30)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+40*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorpherwheel3_3461_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel3_3461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-48*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-60)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorpherwheel4_3460_instances.clear_selection();
        for (ObjectIterator it(bossmorpherwheel4_3460_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-48*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-60)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+52*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-64*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-90)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-56*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-64*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)-90)*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+56*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        for (ObjectIterator it(bossmorpherhead_3471_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12))*10*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(4));
        }
    }
    event_1930_66_end: ;
}
void Frames::event_func_14191()
{
    // event 1931_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1931_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1931_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1931_66_end: ;
}
void Frames::event_func_14192()
{
    // event 1932_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1932_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1932_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4)*16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4)*16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+180)*16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+180)*16*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+180)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+180)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+90)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+90)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+cos_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+270)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+270)*32*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6));
        }
    }
    event_1932_66_end: ;
}
void Frames::event_func_14193()
{
    // event 1933_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1933_66_end;
        bossmorphertube1_3464_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube1_3464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+225)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+45)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4+135)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
        bossmorphergrill1_3467_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill1_3467_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4-45)*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(12)*4*((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6), 0);
        }
    }
    event_1933_66_end: ;
}
void Frames::event_func_14194()
{
    // event 1934_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1934_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) > (0))) goto event_1934_66_end;
        bossmorphergrill2_3466_instances.clear_selection();
        for (ObjectIterator it(bossmorphergrill2_3466_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bossmorphertube2_3465_instances.clear_selection();
        for (ObjectIterator it(bossmorphertube2_3465_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1934_66_end: ;
}
void Frames::event_func_14195()
{
    // event 1935_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1935_66_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1935_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1935_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)) >= (((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-57))) goto event_1935_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1935_66_end;
        FrameObject * single_instance_1935_66_0; single_instance_1935_66_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxvalues_3458_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgroundspark_2025(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1935_66_0 == NULL)
                    single_instance_1935_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1935_66_0))->set_angle(165+5-randrange(11), 0);
        ((Active*)((Active*)single_instance_1935_66_0))->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, default_active_instance))->get_x());
    }
    event_1935_66_end: ;
}
void Frames::event_func_14196()
{
    // event 1936_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1936_66_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1936_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(6)) >= (1))) goto event_1936_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(11)) <= (((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_y()-119))) goto event_1936_66_end;
        if (!(((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->flags.is_off(6))) goto event_1936_66_end;
        FrameObject * single_instance_1936_66_0; single_instance_1936_66_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxvalues_3458_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgroundspark_2025(parent->x + 0, parent->y + -176), parent->layer);
                if (single_instance_1936_66_0 == NULL)
                    single_instance_1936_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1936_66_0))->set_angle(345+5-randrange(11), 0);
        ((Active*)((Active*)single_instance_1936_66_0))->set_x(((Active*)get_instance(bossmorpherhead_3471_instances, default_active_instance))->get_x());
    }
    event_1936_66_end: ;
}
void Frames::event_func_14197()
{
    // event 1937_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1)) goto event_1937_66_end;
        bossmorpherorb1_3457_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb1_3457_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
        bossmorpherorb2_3456_instances.clear_selection();
        for (ObjectIterator it(bossmorpherorb2_3456_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1937_66_end: ;
}
void Frames::event_func_14198()
{
    // event 1938_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1938_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)) < (1))) goto event_1938_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)) < (1))) goto event_1938_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1938_66_end: ;
}
void Frames::event_func_14199()
{
    // event 1939_66
    bool or_result_1939_66 = false;
    bool or_temp_result_1939_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1939_66_0_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1939_66_0_end;
        or_result_1939_66 = true;
        or_temp_result_1939_66_0 = true;
    }
    or_event_1939_66_0_end: ;
    bosssyntaxvalues_3458_instances.clear_saved_selection();
    if (or_temp_result_1939_66_0) {
        bosssyntaxvalues_3458_instances.save_selection();
    }
    // event 1939_66
    bool or_temp_result_1939_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1939_66_1_end;
        bosssyntaxvalues_3458_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxvalues_3458_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxvalues_3458_instances.has_selection()) goto or_event_1939_66_1_end;
        or_result_1939_66 = true;
        or_temp_result_1939_66_1 = true;
        or_event_1939_66_1_end: ;
        if (or_temp_result_1939_66_1) {
            bosssyntaxvalues_3458_instances.save_selection();
        }
        if (!or_result_1939_66) goto or_final_or_event_1939_66_1_end;
        bosssyntaxvalues_3458_instances.empty_selection();
        if (or_temp_result_1939_66_0 || or_temp_result_1939_66_1) {
            bosssyntaxvalues_3458_instances.restore_selection();
        }
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    or_final_or_event_1939_66_1_end: ;
}
void Frames::event_func_14200()
{
    // event 1940_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1940_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1940_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)) >= (1))) goto event_1940_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        enemyelitechargeglow_2507_instances.empty_selection();
        // select single: false true false
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->x + -4, parent->y + -16), parent->layer);
                enemyelitechargeglow_2507_instances.add_back();
            }
        }
        // select single: false true true
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode2_3468_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->x + 4, parent->y + -16), parent->layer);
                enemyelitechargeglow_2507_instances.add_back();
            }
        }
    }
    event_1940_66_end: ;
}
void Frames::event_func_14201()
{
    // event 1941_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1941_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (120))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1941_66_end;
        if (!((((Active*)get_single(bossmorpherbody_3470_instances, default_active_instance))->alterables->values.get(1)%math_helper%8) == (1))) goto event_1941_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)) >= (1))) goto event_1941_66_end;
        FrameObject * single_instance_1941_66_0; single_instance_1941_66_0 = NULL;
        // select single: true false false
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytrooperlaser_2508(parent->x + -4, parent->y + -48), parent->layer);
                if (single_instance_1941_66_0 == NULL)
                    single_instance_1941_66_0 = new_obj;
            }
        }
        ((Active*)single_instance_1941_66_0)->move_back(((Active*)get_single(bossmorphernode1_3469_instances)));
        ((Active*)((Active*)single_instance_1941_66_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1941_66_0))->alterables->values.set(1, 270);
        ((Active*)((Active*)single_instance_1941_66_0))->alterables->values.set(0, 15);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1941_66_end: ;
}
void Frames::event_func_14202()
{
    // event 1942_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1942_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (120))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1942_66_end;
        if (!((((Active*)get_single(bossmorpherbody_3470_instances, default_active_instance))->alterables->values.get(1)%math_helper%8) == (5))) goto event_1942_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(0)) >= (1))) goto event_1942_66_end;
        FrameObject * single_instance_1942_66_0; single_instance_1942_66_0 = NULL;
        // select single: true false false
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode2_3468_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytrooperlaser_2508(parent->x + 4, parent->y + -48), parent->layer);
                if (single_instance_1942_66_0 == NULL)
                    single_instance_1942_66_0 = new_obj;
            }
        }
        ((Active*)single_instance_1942_66_0)->move_back(((Active*)get_single(bossmorphernode2_3468_instances)));
        ((Active*)((Active*)single_instance_1942_66_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1942_66_0))->alterables->values.set(1, 270);
        ((Active*)((Active*)single_instance_1942_66_0))->alterables->values.set(0, 15);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1942_66_end: ;
}
void Frames::event_func_14203()
{
    // event 1943_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1943_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1943_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)) >= (1))) goto event_1943_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        enemyelitechargeglow_2507_instances.empty_selection();
        // select single: false true false
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->x + 4, parent->y + 16), parent->layer);
                enemyelitechargeglow_2507_instances.add_back();
            }
        }
        // select single: false true true
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode2_3468_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitechargeglow_2507(parent->x + -4, parent->y + 16), parent->layer);
                enemyelitechargeglow_2507_instances.add_back();
            }
        }
    }
    event_1943_66_end: ;
}
void Frames::event_func_14204()
{
    // event 1944_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1944_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (120))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1944_66_end;
        if (!((((Active*)get_single(bossmorpherbody_3470_instances, default_active_instance))->alterables->values.get(1)%math_helper%8) == (1))) goto event_1944_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)) >= (1))) goto event_1944_66_end;
        FrameObject * single_instance_1944_66_0; single_instance_1944_66_0 = NULL;
        // select single: true false false
        bossmorphernode1_3469_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode1_3469_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytrooperlaser_2508(parent->x + 4, parent->y + 48), parent->layer);
                if (single_instance_1944_66_0 == NULL)
                    single_instance_1944_66_0 = new_obj;
            }
        }
        ((Active*)single_instance_1944_66_0)->move_back(((Active*)get_single(bossmorphernode1_3469_instances)));
        ((Active*)((Active*)single_instance_1944_66_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1944_66_0))->alterables->values.set(1, 90);
        ((Active*)((Active*)single_instance_1944_66_0))->alterables->values.set(0, 15);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1944_66_end: ;
}
void Frames::event_func_14205()
{
    // event 1945_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1945_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (120))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1945_66_end;
        if (!((((Active*)get_single(bossmorpherbody_3470_instances, default_active_instance))->alterables->values.get(1)%math_helper%8) == (5))) goto event_1945_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(1)) >= (1))) goto event_1945_66_end;
        FrameObject * single_instance_1945_66_0; single_instance_1945_66_0 = NULL;
        // select single: true false false
        bossmorphernode2_3468_instances.clear_selection();
        for (ObjectIterator p_it(bossmorphernode2_3468_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemytrooperlaser_2508(parent->x + -4, parent->y + 48), parent->layer);
                if (single_instance_1945_66_0 == NULL)
                    single_instance_1945_66_0 = new_obj;
            }
        }
        ((Active*)single_instance_1945_66_0)->move_back(((Active*)get_single(bossmorphernode2_3468_instances)));
        ((Active*)((Active*)single_instance_1945_66_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1945_66_0))->alterables->values.set(1, 90);
        ((Active*)((Active*)single_instance_1945_66_0))->alterables->values.set(0, 15);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1945_66_end: ;
}
void Frames::event_func_14206()
{
    // event 1946_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1946_66_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1946_66_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, qualifier_7)) goto event_1946_66_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1946_66_0; single_instance_1946_66_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1946_66_0 == NULL)
                    single_instance_1946_66_0 = new_obj;
            }
        }
    }
    event_1946_66_end: ;
}
void Frames::event_func_14207()
{
    // event 1947_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1947_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_x()-380))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1947_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(16, 1);
    }
    event_1947_66_end: ;
}
void Frames::event_func_14208()
{
    // event 1948_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1948_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(bosssyntaxvalues_3458_instances))->get_x()-380))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1948_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.set(16, -1);
    }
    event_1948_66_end: ;
}
void Frames::event_func_14209()
{
    // event 1949_66
    bool or_result_1949_66 = false;
    bool or_temp_result_1949_66_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1949_66_0_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto or_event_1949_66_0_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)) > (0))) goto or_event_1949_66_0_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)) < (frame_left()+346))) goto or_event_1949_66_0_end;
        or_result_1949_66 = true;
        or_temp_result_1949_66_0 = true;
    }
    or_event_1949_66_0_end: ;
    bossmorpherbody_3470_instances.clear_saved_selection();
    if (or_temp_result_1949_66_0) {
        bossmorpherbody_3470_instances.save_selection();
    }
    // event 1949_66
    bool or_temp_result_1949_66_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto or_event_1949_66_1_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto or_event_1949_66_1_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)) < (0))) goto or_event_1949_66_1_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)) > (frame_left()+80))) goto or_event_1949_66_1_end;
        or_result_1949_66 = true;
        or_temp_result_1949_66_1 = true;
        or_event_1949_66_1_end: ;
        if (or_temp_result_1949_66_1) {
            bossmorpherbody_3470_instances.save_selection();
        }
        if (!or_result_1949_66) goto or_final_or_event_1949_66_1_end;
        bossmorpherbody_3470_instances.clear_selection();
        if (or_temp_result_1949_66_0 || or_temp_result_1949_66_1) {
            bossmorpherbody_3470_instances.restore_selection();
        }
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(10, ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(16)*3);
    }
    or_final_or_event_1949_66_1_end: ;
}
void Frames::event_func_14210()
{
    // event 1950_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1950_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) >= (1))) goto event_1950_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(10)) > (frame_left()+50))) goto event_1950_66_end;
        ((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.add(10, -3);
    }
    event_1950_66_end: ;
}
void Frames::event_func_14211()
{
    // event 1951_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1951_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) < (1))) goto event_1951_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1951_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1951_66_end: ;
}
void Frames::event_func_14212()
{
    // event 1952_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1952_66_end;
        if (!((((Active*)get_instance(bosssyntaxvalues_3458_instances))->alterables->values.get(2)) >= (1))) goto event_1952_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1952_66_end: ;
}
void Frames::event_func_14213()
{
    // event 1953_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1953_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (41))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1953_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(0)/math_helper/2)%math_helper%2);
        }
    }
    event_1953_66_end: ;
}
void Frames::event_func_14214()
{
    // event 1954_66
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_1 && group_main_engine_level_specific_methods_bosses_boss_morpher_attacks_1)) goto event_1954_66_end;
        bossmorpherbody_3470_instances.clear_selection();
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (30))) { it.deselect(); continue; }
        }
        if (!bossmorpherbody_3470_instances.has_selection()) goto event_1954_66_end;
        for (ObjectIterator it(bossmorpherbody_3470_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        FrameObject * single_instance_1954_66_0; single_instance_1954_66_0 = NULL;
        // select single: true false false
        bossmorpherhead_3471_instances.clear_selection();
        for (ObjectIterator p_it(bossmorpherhead_3471_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosstrainbream_3441(parent->x + 16, parent->y + 0), parent->layer);
                if (single_instance_1954_66_0 == NULL)
                    single_instance_1954_66_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1954_66_0))->move_back();
        media.play_id(SOUND_MORPHER3_386, -1, 1);
    }
    event_1954_66_end: ;
}
