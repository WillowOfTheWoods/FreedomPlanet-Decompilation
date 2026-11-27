#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3603()
{
    // event 1727_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1727_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1727_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1727_15_end: ;
}
void Frames::event_func_3604()
{
    // event 1728_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1728_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1728_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (100))) goto event_1728_15_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(18);
    }
    event_1728_15_end: ;
}
void Frames::event_func_3605()
{
    // event 1729_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1729_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1729_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (100))) goto event_1729_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, (((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)-100)*0.02);
    }
    event_1729_15_end: ;
}
void Frames::event_func_3606()
{
    // event 1730_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1730_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1730_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (360))) goto event_1730_15_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1730_15_end: ;
}
void Frames::event_func_3607()
{
    // event 1731_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1731_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1731_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (360))) goto event_1731_15_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(1), 0));
        }
    }
    event_1731_15_end: ;
}
void Frames::event_func_3608()
{
    // event 1732_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1732_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1732_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (300))) goto event_1732_15_end;
        media.set_channel_volume(24-1, get_max(media.get_channel_volume(-1 +24)-1, 0));
    }
    event_1732_15_end: ;
}
void Frames::event_func_3609()
{
    // event 1733_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1733_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1733_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (400))) goto event_1733_15_end;
        next_frame = 86 + 0;    
    
        media.stop_samples();
    }
    event_1733_15_end: ;
}
void Frames::event_func_3610()
{
    // event 1734_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1734_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1734_15_end;
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_1734_15_end: ;
}
void Frames::event_func_3611()
{
    // event 1735_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1735_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1735_15_end;
        FrameObject * single_instance_1735_15_0; single_instance_1735_15_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + -6, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1735_15_0 == NULL)
                    single_instance_1735_15_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1735_15_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_1735_15_0))->set_x(((Active*)single_instance_1735_15_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_1735_15_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_1735_15_0))->force_speed(15);
        ((Active*)((Active*)single_instance_1735_15_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_1735_15_0))->restore_frame();
        ((Active*)((Active*)single_instance_1735_15_0))->set_angle(randrange(4)*90, 0);
    }
    event_1735_15_end: ;
}
void Frames::event_func_3612()
{
    // event 1736_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1736_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1736_15_end;
        FrameObject * single_instance_1736_15_0; single_instance_1736_15_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 6, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1736_15_0 == NULL)
                    single_instance_1736_15_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1736_15_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_1736_15_0))->set_x(((Active*)single_instance_1736_15_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_1736_15_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_1736_15_0))->force_speed(15);
        ((Active*)((Active*)single_instance_1736_15_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_1736_15_0))->restore_frame();
        ((Active*)((Active*)single_instance_1736_15_0))->set_angle(randrange(4)*90, 0);
    }
    event_1736_15_end: ;
}
void Frames::event_func_3613()
{
    // event 1737_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1)) goto event_1737_15_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1737_15_end;
        FrameObject * single_instance_1737_15_0; single_instance_1737_15_0 = NULL;
        // select single: true false false
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator p_it(creditstorquerocket_579_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1737_15_0 == NULL)
                    single_instance_1737_15_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1737_15_0))->set_scale(0.25);
        ((Active*)((Active*)single_instance_1737_15_0))->set_x(((Active*)single_instance_1737_15_0)->get_x()-2+randrange(5));
        ((Active*)single_instance_1737_15_0)->move_back(((Active*)get_single(creditstorquerocket_579_instances)));
        ((Active*)((Active*)single_instance_1737_15_0))->force_speed(15);
        ((Active*)((Active*)single_instance_1737_15_0))->force_frame(1+randrange(3));
        ((Active*)((Active*)single_instance_1737_15_0))->restore_frame();
        ((Active*)((Active*)single_instance_1737_15_0))->set_angle(randrange(4)*90, 0);
    }
    event_1737_15_end: ;
}
void Frames::event_func_3614()
{
    // event 1777_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1777_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1777_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1777_15_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1777_15_end;
        if (!media.is_channel_playing(20-1)) goto event_1777_15_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1777_15_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1777_15_end: ;
}
void Frames::event_func_3615()
{
    // event 1778_15
    bool or_result_1778_15 = false;
    bool or_temp_result_1778_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1778_15_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1778_15_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1778_15_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1778_15_0_end;
        or_result_1778_15 = true;
        or_temp_result_1778_15_0 = true;
    }
    or_event_1778_15_0_end: ;
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1778_15_0) {
        npcgong_634_instances.save_selection();
    }
    // event 1778_15
    bool or_temp_result_1778_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1778_15_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1778_15_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1778_15_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1778_15_1_end;
        or_result_1778_15 = true;
        or_temp_result_1778_15_1 = true;
        or_event_1778_15_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1778_15_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1778_15) goto or_final_or_event_1778_15_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1778_15_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1778_15_0 || or_temp_result_1778_15_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1778_15_1_end: ;
}
void Frames::event_func_3616()
{
    // event 1797_15
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1797_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1797_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1797_15_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1797_15_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1797_15_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1797_15_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1797_15_end: ;
}
void Frames::event_func_3617()
{
    // event 1798_15
    bool or_result_1798_15 = false;
    bool or_temp_result_1798_15_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1798_15_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1798_15_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1798_15_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1798_15_0_end;
        or_result_1798_15 = true;
        or_temp_result_1798_15_0 = true;
    }
    or_event_1798_15_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1798_15_0) {
        dialogbox_566_instances.save_selection();
        npcgong_634_instances.save_selection();
    }
    // event 1798_15
    bool or_temp_result_1798_15_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1798_15_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1798_15_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1798_15_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1798_15_1_end;
        or_result_1798_15 = true;
        or_temp_result_1798_15_1 = true;
        or_event_1798_15_1_end: ;
        if (or_temp_result_1798_15_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1798_15) goto or_final_or_event_1798_15_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1798_15_0 || or_temp_result_1798_15_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1798_15_0 || or_temp_result_1798_15_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1798_15_1_end: ;
}
void Frames::event_func_3618()
{
    // event 1806_15
    {
        if (!(group_main_engine_1)) goto event_1806_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (1))) goto event_1806_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1806_15_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(npclilac_529_instances))->get_x()-100))) goto event_1806_15_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(npclilac_529_instances))->get_x()))) goto event_1806_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1806_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1806_15_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.enable(1);
    }
    event_1806_15_end: ;
}
void Frames::event_func_3619()
{
    // event 1807_15
    {
        if (!(group_main_engine_1)) goto event_1807_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (1))) goto event_1807_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1807_15_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(npclilac_529_instances))->get_x()))) goto event_1807_15_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(npclilac_529_instances))->get_x()+100))) goto event_1807_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1807_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1807_15_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.enable(1);
    }
    event_1807_15_end: ;
}
void Frames::event_func_3620()
{
    // event 1808_15
    {
        if (!(group_main_engine_1)) goto event_1808_15_end;
        if (!(((Active*)get_instance(npclilac_529_instances))->alterables->flags.is_off(1))) goto event_1808_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_1808_15_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.disable(2);
    }
    event_1808_15_end: ;
}
void Frames::event_func_3621()
{
    // event 1809_15
    bool or_result_1809_15 = false;
    bool or_temp_result_1809_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1809_15_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1809_15_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1809_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1809_15_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (10))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1809_15_0_end;
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1809_15_0_end;
        or_result_1809_15 = true;
        or_temp_result_1809_15_0 = true;
    }
    or_event_1809_15_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1809_15_0) {
        npclilac_529_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1809_15
    bool or_temp_result_1809_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1809_15_1_end;
        player_389_instances.clear_selection();
        npclilac_529_instances.clear_selection();
        if (!check_overlap(player_389_instances, npclilac_529_instances)) goto or_event_1809_15_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_single(npclilac_529_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1809_15_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1809_15_1_end;
        or_result_1809_15 = true;
        or_temp_result_1809_15_1 = true;
        or_event_1809_15_1_end: ;
        player_389_instances.clear_saved_selection();
        if (or_temp_result_1809_15_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1809_15) goto or_final_or_event_1809_15_1_end;
        npclilac_529_instances.empty_selection();
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1809_15_0 || or_temp_result_1809_15_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1809_15_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1809_15_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1809_15_0 || or_temp_result_1809_15_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1809_15_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 50);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1809_15_1_end: ;
}
void Frames::event_func_3622()
{
    // event 1810_15
    bool or_result_1810_15 = false;
    bool or_temp_result_1810_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1810_15_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1810_15_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1810_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1810_15_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (10))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1810_15_0_end;
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1810_15_0_end;
        or_result_1810_15 = true;
        or_temp_result_1810_15_0 = true;
    }
    or_event_1810_15_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1810_15_0) {
        npclilac_529_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1810_15
    bool or_temp_result_1810_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1810_15_1_end;
        player_389_instances.clear_selection();
        npclilac_529_instances.clear_selection();
        if (!check_overlap(player_389_instances, npclilac_529_instances)) goto or_event_1810_15_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(npclilac_529_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1810_15_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1810_15_1_end;
        or_result_1810_15 = true;
        or_temp_result_1810_15_1 = true;
        or_event_1810_15_1_end: ;
        player_389_instances.clear_saved_selection();
        if (or_temp_result_1810_15_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1810_15) goto or_final_or_event_1810_15_1_end;
        npclilac_529_instances.empty_selection();
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1810_15_0 || or_temp_result_1810_15_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1810_15_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1810_15_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1810_15_0 || or_temp_result_1810_15_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1810_15_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 50);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, -1);
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1810_15_1_end: ;
}
void Frames::event_func_3623()
{
    // event 1811_15
    bool or_result_1811_15 = false;
    bool or_temp_result_1811_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1811_15_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1811_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1811_15_0_end;
        or_result_1811_15 = true;
        or_temp_result_1811_15_0 = true;
    }
    or_event_1811_15_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1811_15_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1811_15
    bool or_temp_result_1811_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1811_15_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1811_15_1_end;
        or_result_1811_15 = true;
        or_temp_result_1811_15_1 = true;
        or_event_1811_15_1_end: ;
        if (or_temp_result_1811_15_1) {
            npclilac_529_instances.save_selection();
        }
        if (!or_result_1811_15) goto or_final_or_event_1811_15_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1811_15_0 || or_temp_result_1811_15_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1811_15_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    or_final_or_event_1811_15_1_end: ;
}
void Frames::event_func_3624()
{
    // event 1812_15
    {
        if (!(group_main_engine_1)) goto event_1812_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (1))) goto event_1812_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1812_15_end;
        if (!((global_values->get(26)) == (0))) goto event_1812_15_end;
        if (not_always_1812_15 > loop_count) {
            not_always_1812_15 = loop_count + 2;
            goto event_1812_15_end;
        }
        not_always_1812_15 = loop_count + 2;
        media.play(str_voices_eng_mi_milla_hililac_ogg_118, 1-1);
    }
    event_1812_15_end: ;
}
void Frames::event_func_3625()
{
    // event 1813_15
    {
        if (!(group_main_engine_1)) goto event_1813_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (1))) goto event_1813_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (60))) goto event_1813_15_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1813_15_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8-1);
            ((Active*)*it)->force_frame(randrange(5));
        }
    }
    event_1813_15_end: ;
}
void Frames::event_func_3626()
{
    // event 1814_15
    {
        if (!(group_main_engine_1)) goto event_1814_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (60))) goto event_1814_15_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8-2);
        }
    }
    event_1814_15_end: ;
}
void Frames::event_func_3627()
{
    // event 1815_15
    {
        if (!(group_main_engine_1)) goto event_1815_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (72))) goto event_1815_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1815_15_end;
        if (!((global_values->get(26)) == (0))) goto event_1815_15_end;
        if (not_always_1815_15 > loop_count) {
            not_always_1815_15 = loop_count + 2;
            goto event_1815_15_end;
        }
        not_always_1815_15 = loop_count + 2;
        media.play(str_voices_eng_li_lilac_hellomilla_ogg_119, 1-1);
    }
    event_1815_15_end: ;
}
void Frames::event_func_3628()
{
    // event 1816_15
    {
        if (!(group_main_engine_1)) goto event_1816_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (72))) goto event_1816_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1816_15_end;
        if (!((global_values->get(26)) == (0))) goto event_1816_15_end;
        if (not_always_1816_15 > loop_count) {
            not_always_1816_15 = loop_count + 2;
            goto event_1816_15_end;
        }
        not_always_1816_15 = loop_count + 2;
        media.play(str_voices_eng_li_lilac_whatsupcarol_ogg_120, 1-1);
    }
    event_1816_15_end: ;
}
void Frames::event_func_3629()
{
    // event 1817_15
    {
        if (!(group_main_engine_1)) goto event_1817_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (70))) goto event_1817_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (140))) goto event_1817_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1817_15_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1817_15_end;
        ((Active*)get_instance(npclilac_529_instances))->set_direction(1);
        ((Active*)get_instance(npclilac_529_instances))->force_frame(randrange(5));
    }
    event_1817_15_end: ;
}
void Frames::event_func_3630()
{
    // event 1818_15
    {
        if (!(group_main_engine_1)) goto event_1818_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (70))) goto event_1818_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (140))) goto event_1818_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1818_15_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1818_15_end;
        ((Active*)get_instance(npclilac_529_instances))->set_direction(2);
        ((Active*)get_instance(npclilac_529_instances))->force_frame(randrange(5));
    }
    event_1818_15_end: ;
}
void Frames::event_func_3631()
{
    // event 1819_15
    {
        if (!(group_main_engine_1)) goto event_1819_15_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (140))) goto event_1819_15_end;
        ((Active*)get_instance(npclilac_529_instances))->force_frame(0);
    }
    event_1819_15_end: ;
}
void Frames::event_func_3632()
{
    // event 1820_15
    bool or_result_1820_15 = false;
    bool or_temp_result_1820_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1820_15_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1820_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1820_15_0_end;
        or_result_1820_15 = true;
        or_temp_result_1820_15_0 = true;
    }
    or_event_1820_15_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1820_15_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1820_15
    bool or_temp_result_1820_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1820_15_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1820_15_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1820_15_1_end;
        or_result_1820_15 = true;
        or_temp_result_1820_15_1 = true;
        or_event_1820_15_1_end: ;
        if (or_temp_result_1820_15_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1820_15) goto or_final_or_event_1820_15_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1820_15_0 || or_temp_result_1820_15_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1820_15_0 || or_temp_result_1820_15_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    or_final_or_event_1820_15_1_end: ;
}
void Frames::event_func_3633()
{
    // event 1821_15
    bool or_result_1821_15 = false;
    bool or_temp_result_1821_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1821_15_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1821_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1821_15_0_end;
        or_result_1821_15 = true;
        or_temp_result_1821_15_0 = true;
    }
    or_event_1821_15_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1821_15_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1821_15
    bool or_temp_result_1821_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1821_15_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1821_15_1_end;
        or_result_1821_15 = true;
        or_temp_result_1821_15_1 = true;
        or_event_1821_15_1_end: ;
        if (or_temp_result_1821_15_1) {
            npclilac_529_instances.save_selection();
        }
        if (!or_result_1821_15) goto or_final_or_event_1821_15_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1821_15_0 || or_temp_result_1821_15_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1821_15_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
        }
    }
    or_final_or_event_1821_15_1_end: ;
}
void Frames::event_func_3634()
{
    // event 1822_15
    {
        if (!(group_main_engine_1)) goto event_1822_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1120))) goto event_1822_15_end;
        if (!((global_values->get(4)) < (10))) goto event_1822_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1120);
    }
    event_1822_15_end: ;
}
void Frames::event_func_3635()
{
    // event 1823_15
    {
        if (!(group_main_engine_1)) goto event_1823_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1823_15_end;
        if (!((global_values->get(4)) < (10))) goto event_1823_15_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 1600-global_values->get(17));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1600);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 712);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1600-global_values->get(17)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1823_15_end: ;
}
void Frames::event_func_3636()
{
    // event 1824_15
    bool or_result_1824_15 = false;
    bool or_temp_result_1824_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1824_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1824_15_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1824_15_0_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1824_15_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_0_end;
        or_result_1824_15 = true;
        or_temp_result_1824_15_0 = true;
    }
    or_event_1824_15_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    if (or_temp_result_1824_15_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        objectchair_522_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1824_15
    bool or_temp_result_1824_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1824_15_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1824_15_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1824_15_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1824_15_1_end;
        or_result_1824_15 = true;
        or_temp_result_1824_15_1 = true;
    }
    or_event_1824_15_1_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_1824_15_1) {
        player_389_instances.save_selection();
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        objectchair_522_instances.save_selection();
    }
    // event 1824_15
    bool or_temp_result_1824_15_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1824_15_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1824_15_2_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto or_event_1824_15_2_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1824_15_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1824_15_2_end;
        or_result_1824_15 = true;
        or_temp_result_1824_15_2 = true;
        or_event_1824_15_2_end: ;
        treehouseentrancetrigger_526_instances.clear_saved_selection();
        if (or_temp_result_1824_15_2) {
            player_389_instances.save_selection();
            playerinput_19_instances.save_selection();
            treehouseentrancetrigger_526_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1824_15) goto or_final_or_event_1824_15_2_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        treehouseentrancetrigger_526_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1824_15_0 || or_temp_result_1824_15_1 || or_temp_result_1824_15_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1824_15_1 || or_temp_result_1824_15_2) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1824_15_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1824_15_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1824_15_2) {
            treehouseentrancetrigger_526_instances.restore_selection();
        }
        if (or_temp_result_1824_15_0 || or_temp_result_1824_15_1 || or_temp_result_1824_15_2) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1824_15_0 || or_temp_result_1824_15_1) {
            objectchair_522_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1824_15_2_end: ;
}
void Frames::event_func_3637()
{
    // event 1825_15
    bool or_result_1825_15 = false;
    bool or_temp_result_1825_15_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1825_15_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (1600-global_values->get(17)))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1825_15_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1825_15_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1825_15_0_end;
        player_389_instances.clear_selection();
        objectcouchspot_542_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectcouchspot_542_instances)) goto or_event_1825_15_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1825_15_0_end;
        or_result_1825_15 = true;
        or_temp_result_1825_15_0 = true;
    }
    or_event_1825_15_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    objectcouchspot_542_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1825_15_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        objectcouchspot_542_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1825_15
    bool or_temp_result_1825_15_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1825_15_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (1600-global_values->get(17)))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1825_15_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1825_15_1_end;
        player_389_instances.clear_selection();
        objectcouchspot_542_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectcouchspot_542_instances)) goto or_event_1825_15_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1825_15_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1825_15_1_end;
        or_result_1825_15 = true;
        or_temp_result_1825_15_1 = true;
        or_event_1825_15_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1825_15_1) {
            player_389_instances.save_selection();
            playerinput_19_instances.save_selection();
            objectcouchspot_542_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1825_15) goto or_final_or_event_1825_15_1_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectcouchspot_542_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1825_15_0 || or_temp_result_1825_15_1) {
            objectcouchspot_542_instances.restore_selection();
        }
        if (or_temp_result_1825_15_0 || or_temp_result_1825_15_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1825_15_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1825_15_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1825_15_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1825_15_0 || or_temp_result_1825_15_1) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1825_15_1_end: ;
}
void Frames::event_func_3638()
{
    // event 1826_15
    {
        if (!(group_main_engine_1)) goto event_1826_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1826_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1826_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (50))) goto event_1826_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1826_15_end: ;
}
void Frames::event_func_3639()
{
    // event 1827_15
    {
        if (!(group_main_engine_1)) goto event_1827_15_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)) == (0))) goto event_1827_15_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.set(0, ((Active*)get_instance(treehousedoor_525_instances))->get_x());
        ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.set(0, ((Active*)get_instance(treehousedoor2_524_instances))->get_x());
    }
    event_1827_15_end: ;
}
void Frames::event_func_3640()
{
    // event 1828_15
    {
        if (!(group_main_engine_1)) goto event_1828_15_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.disable(0);
    }
    event_1828_15_end: ;
}
void Frames::event_func_3641()
{
    // event 1829_15
    {
        if (!(group_main_engine_1)) goto event_1829_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)-40))) goto event_1829_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)+40))) goto event_1829_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(treehousedoor_525_instances))->get_box_index(1)))) goto event_1829_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(treehousedoor_525_instances))->get_box_index(3)))) goto event_1829_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1829_15_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.enable(0);
    }
    event_1829_15_end: ;
}
void Frames::event_func_3642()
{
    // event 1830_15
    {
        if (!(group_main_engine_1)) goto event_1830_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1830_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1830_15_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1830_15_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(treehousedoor_525_instances))->move_front();
        ((Active*)get_instance(treehousedoor2_524_instances))->move_front();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1830_15_end: ;
}
void Frames::event_func_3643()
{
    // event 1831_15
    {
        if (!(group_main_engine_1)) goto event_1831_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1831_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1831_15_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1831_15_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1831_15_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1831_15_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1831_15_end: ;
}
void Frames::event_func_3644()
{
    // event 1832_15
    {
        if (!(group_main_engine_1)) goto event_1832_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1832_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1832_15_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1832_15_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1832_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1832_15_end: ;
}
void Frames::event_func_3645()
{
    // event 1833_15
    {
        if (!(group_main_engine_1)) goto event_1833_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1833_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1833_15_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1833_15_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1833_15_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1833_15_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 864);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1536);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1833_15_end: ;
}
void Frames::event_func_3646()
{
    // event 1834_15
    {
        if (!(group_main_engine_1)) goto event_1834_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1834_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -2);
    }
    event_1834_15_end: ;
}
void Frames::event_func_3647()
{
    // event 1835_15
    {
        if (!(group_main_engine_1)) goto event_1835_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1835_15_end;
        if (!((((Active*)get_single(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1835_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1835_15_end: ;
}
void Frames::event_func_3648()
{
    // event 1836_15
    {
        if (!(group_main_engine_1)) goto event_1836_15_end;
        if (!(((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.is_off(0))) goto event_1836_15_end;
        ((Active*)get_instance(treehousedoor_525_instances))->set_x(get_max(((Active*)get_instance(treehousedoor_525_instances))->get_x()-1, ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)));
        ((Active*)get_instance(treehousedoor2_524_instances))->set_x(get_min(((Active*)get_instance(treehousedoor2_524_instances))->get_x()+1, ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.get(0)));
    }
    event_1836_15_end: ;
}
void Frames::event_func_3649()
{
    // event 1837_15
    {
        if (!(group_main_engine_1)) goto event_1837_15_end;
        if (!(((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.is_on(0))) goto event_1837_15_end;
        ((Active*)get_instance(treehousedoor_525_instances))->set_x(get_min(((Active*)get_instance(treehousedoor_525_instances))->get_x()+1, ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)+24));
        ((Active*)get_instance(treehousedoor2_524_instances))->set_x(get_max(((Active*)get_instance(treehousedoor2_524_instances))->get_x()-1, ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.get(0)-24));
        ((Active*)get_instance(treehousedoor_525_instances))->move_back();
        ((Active*)get_instance(treehousedoor2_524_instances))->move_back();
    }
    event_1837_15_end: ;
}
void Frames::event_func_3650()
{
    // event 1838_15
    {
        if (!(group_main_engine_1)) goto event_1838_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1838_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1838_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1838_15_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1838_15_end;
        if (not_always_1838_15 > loop_count) {
            not_always_1838_15 = loop_count + 2;
            goto event_1838_15_end;
        }
        not_always_1838_15 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1838_15_end: ;
}
void Frames::event_func_3651()
{
    // event 1839_15
    {
        if (!(group_main_engine_1)) goto event_1839_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1839_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1839_15_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1839_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1839_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1839_15_end: ;
}
void Frames::event_func_3652()
{
    // event 1840_15
    {
        if (!(group_main_engine_1)) goto event_1840_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1840_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1840_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1840_15_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1840_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1840_15_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1840_15_end: ;
}
void Frames::event_func_3653()
{
    // event 1841_15
    {
        if (!(group_main_engine_1)) goto event_1841_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1841_15_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1841_15_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1841_15_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1841_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1841_15_end;
        global_values->set(4, -1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_y()+12);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_1841_15_end: ;
}
void Frames::event_func_3654()
{
    // event 1842_15
    {
        if (!(group_main_engine_1)) goto event_1842_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1842_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_1842_15_end: ;
}
void Frames::event_func_3655()
{
    // event 1843_15
    {
        if (!(group_main_engine_1)) goto event_1843_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1843_15_end;
        if (!((((Active*)get_single(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1843_15_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1843_15_end: ;
}
void Frames::event_func_3656()
{
    // event 1845_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1845_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (0))) goto event_1845_15_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1845_15_end;
        if (not_always_1845_15 > loop_count) {
            not_always_1845_15 = loop_count + 2;
            goto event_1845_15_end;
        }
        not_always_1845_15 = loop_count + 2;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1845_15_end: ;
}
void Frames::event_func_3657()
{
    // event 1846_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1846_15_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) > (0))) goto event_1846_15_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()-10+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1846_15_end: ;
}
void Frames::event_func_3658()
{
    // event 1847_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1847_15_end;
        {
            player_389_instances.clear_selection();
            for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
            playerskinsash_418_instances.clear_selection();
            for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(1))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()+cos_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->get_angle())*-10);
            ((Active*)*it)->set_layer(((Active*)get_single(player_389_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        {
            ObjectIterator other_it(playerskinsash_418_instances);
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (other_it.end()) goto action_1847_15_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1847_15_0_end: ;
    }
    event_1847_15_end: ;
}
void Frames::event_func_3659()
{
    // event 1848_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1848_15_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1848_15_end;
        if (not_always_1848_15 > loop_count) {
            not_always_1848_15 = loop_count + 2;
            goto event_1848_15_end;
        }
        not_always_1848_15 = loop_count + 2;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1848_15_end: ;
}
void Frames::event_func_3660()
{
    // event 1849_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1849_15_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1849_15_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1849_15_end: ;
}
void Frames::event_func_3661()
{
    // event 1850_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1850_15_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1850_15_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1850_15_end: ;
}
void Frames::event_func_3662()
{
    // event 1851_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1851_15_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-2))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1851_15_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1851_15_end: ;
}
void Frames::event_func_3663()
{
    // event 1852_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1852_15_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) > (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1852_15_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+3, 0);
        }
    }
    event_1852_15_end: ;
}
void Frames::event_func_3664()
{
    // event 1853_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_all_shields_1)) goto event_1853_15_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (16))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1853_15_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1853_15_end: ;
}
void Frames::event_func_3665()
{
    // event 2041_15
    {
        if (!(group_main_engine_1)) goto event_2041_15_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)*0.5+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(frame_top()*0.9+100-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.3);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+2+sin_deg(((Active*)*it)->alterables->values.get(0))*1.5)%math_helper%360);
            ((Active*)*it)->set_scale(1+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.005);
        }
    }
    event_2041_15_end: ;
}
void Frames::event_func_3666()
{
    // event 2042_15
    {
        if (!(group_main_engine_1)) goto event_2042_15_end;
        creditstorquerocket_579_instances.clear_selection();
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!creditstorquerocket_579_instances.has_selection()) goto event_2042_15_end;
        for (ObjectIterator it(creditstorquerocket_579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()*0.8+200-((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)*0.5);
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)*0.5);
            ((Active*)*it)->move_front();
        }
    }
    event_2042_15_end: ;
}
void Frames::event_func_3667()
{
    // event 2043_15
    {
        if (!(group_pause_1)) goto event_2043_15_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2043_15_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2043_15_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2043_15_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2043_15_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(furniturefloor6_550_instances))->stop_animation();
        ((Active*)get_instance(npccouchmilla_554_instances))->stop_animation();
        ((Active*)get_instance(npccouchcarol_555_instances))->stop_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        ((Active*)get_instance(npcgong_634_instances))->stop_animation();
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2043_15_end: ;
}
void Frames::event_func_3668()
{
    // event 2044_15
    bool or_result_2044_15 = false;
    bool or_temp_result_2044_15_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2044_15_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2044_15_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2044_15_0_end;
        or_result_2044_15 = true;
        or_temp_result_2044_15_0 = true;
    }
    or_event_2044_15_0_end: ;
    // event 2044_15
    bool or_temp_result_2044_15_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2044_15_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2044_15_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2044_15_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2044_15_1_end;
        or_result_2044_15 = true;
        or_temp_result_2044_15_1 = true;
        or_event_2044_15_1_end: ;
        if (!or_result_2044_15) goto or_final_or_event_2044_15_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(furniturefloor6_550_instances))->start_animation();
        ((Active*)get_instance(npccouchmilla_554_instances))->start_animation();
        ((Active*)get_instance(npccouchcarol_555_instances))->start_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        ((Active*)get_instance(npcgong_634_instances))->start_animation();
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2044_15_1_end: ;
}
void Frames::event_func_3669()
{
    // event 2051_15
    {
        if (!(group_pause_1)) goto event_2051_15_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2051_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2051_15_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 1);
        media.stop_samples();
    }
    event_2051_15_end: ;
}
void Frames::event_func_3670()
{
    // event 2052_15
    {
        if (!(group_pause_1)) goto event_2052_15_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2052_15_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2052_15_end;
        next_frame = 29 + 0;    
    
        global_values->set(4, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        media.stop_samples();
    }
    event_2052_15_end: ;
}
void Frames::handle_frame_16_events()
{
    test_collisions_15();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_3321();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
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
    event_func_2735();
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
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_2737();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
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
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
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
    event_func_2744();
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
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
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
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
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
    event_func_2752();
    event_func_2753();
    event_func_2754();
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
    event_func_2755();
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
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
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
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
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
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_2771();
    event_func_2772();
    event_func_2773();
    event_func_2774();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
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
    event_func_1726();
    event_func_1727();
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
    event_func_2776();
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
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
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
    event_func_1777();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
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
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
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
    event_func_2823();
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
    event_func_1909();
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
    event_func_2824();
    event_func_1973();
    event_func_2825();
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
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
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
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
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
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2909();
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
    event_func_2910();
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
    event_func_2911();
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
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
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
    event_func_2939();
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
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
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
    event_func_2452();
    event_func_2956();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2960();
    event_func_2961();
    event_func_2962();
    event_func_2963();
    event_func_2964();
    event_func_2965();
    event_func_2966();
    event_func_2967();
    event_func_2968();
    event_func_2969();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_2978();
    event_func_2979();
    event_func_2980();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_3284();
    event_func_2988();
    event_func_2989();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_3285();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3000();
    event_func_3001();
    event_func_2491();
    event_func_3003();
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_1_end;
    event_func_3287();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1_end;
    event_func_3288();
    event_func_3289();
    event_func_3290();
    event_func_3291();
    event_func_3292();
    event_func_3293();
    event_func_3294();
    event_func_3295();
    event_func_3296();
    event_func_3297();
    event_func_3298();
    event_func_3299();
    event_func_3300();
    event_func_3301();
    event_func_3302();
    event_func_3303();
    event_func_3304();
    event_func_3305();
    event_func_3306();
    event_func_3307();
    event_func_3308();
    event_func_3309();
    event_func_3310();
    event_func_3311();
    event_func_3312();
    event_func_3313();
    event_func_3314();
    event_func_3315();
    event_func_3316();
    event_func_3317();
    event_func_3318();
    event_func_3319();
    event_func_3320();
    event_func_3322();
    event_func_3323();
    event_func_3324();
    event_func_3325();
    event_func_3326();
    event_func_3327();
    event_func_3328();
    event_func_3329();
    event_func_3330();
    event_func_3331();
    event_func_3332();
    event_func_3333();
    event_func_3334();
    event_func_3335();
    event_func_3336();
    event_func_3337();
    event_func_3338();
    event_func_3339();
    event_func_3340();
    event_func_3341();
    event_func_3342();
    event_func_3343();
    event_func_3344();
    event_func_3345();
    event_func_3346();
    event_func_3347();
    event_func_3348();
    event_func_3349();
    event_func_3350();
    event_func_3351();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1_end: ;
    event_func_3352();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1_end;
    event_func_3353();
    event_func_3354();
    event_func_3355();
    event_func_3356();
    event_func_3357();
    event_func_3358();
    event_func_3359();
    event_func_3360();
    event_func_3361();
    event_func_3362();
    event_func_3363();
    event_func_3364();
    event_func_3365();
    event_func_3366();
    event_func_3367();
    event_func_3368();
    event_func_3369();
    event_func_3370();
    event_func_3371();
    event_func_3372();
    event_func_3373();
    event_func_3374();
    event_func_3375();
    event_func_3376();
    event_func_3377();
    event_func_3378();
    event_func_3379();
    event_func_3380();
    event_func_3381();
    event_func_3382();
    event_func_3383();
    event_func_3384();
    event_func_3385();
    event_func_3386();
    event_func_3387();
    event_func_3388();
    event_func_3389();
    event_func_3390();
    event_func_3391();
    event_func_3392();
    event_func_3393();
    event_func_3394();
    event_func_3395();
    event_func_3396();
    event_func_3397();
    event_func_3398();
    event_func_3399();
    event_func_3400();
    event_func_3401();
    event_func_3402();
    event_func_3403();
    event_func_3404();
    event_func_3405();
    event_func_3406();
    event_func_3407();
    event_func_3408();
    event_func_3409();
    event_func_3410();
    event_func_3411();
    event_func_3412();
    event_func_3413();
    event_func_3414();
    event_func_3415();
    event_func_3416();
    event_func_3417();
    event_func_3418();
    event_func_3419();
    event_func_3420();
    event_func_3421();
    event_func_3422();
    event_func_3423();
    event_func_3424();
    event_func_3425();
    event_func_3426();
    event_func_3427();
    event_func_3428();
    event_func_3429();
    event_func_3430();
    event_func_3431();
    event_func_3432();
    event_func_3433();
    event_func_3434();
    event_func_3435();
    event_func_3436();
    event_func_3437();
    event_func_3438();
    event_func_3439();
    event_func_3440();
    event_func_3441();
    event_func_3442();
    event_func_3443();
    event_func_3444();
    event_func_3445();
    event_func_3446();
    event_func_3447();
    event_func_3448();
    event_func_3449();
    event_func_3450();
    event_func_3451();
    event_func_3452();
    event_func_3453();
    event_func_3454();
    event_func_3455();
    event_func_3456();
    event_func_3457();
    event_func_3458();
    event_func_3459();
    event_func_3460();
    event_func_3461();
    event_func_3462();
    event_func_3463();
    event_func_3464();
    event_func_3465();
    event_func_3466();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1_end: ;
    event_func_3467();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1_end;
    event_func_3468();
    event_func_3469();
    event_func_3470();
    event_func_3471();
    event_func_3472();
    event_func_3473();
    event_func_3474();
    event_func_3475();
    event_func_3476();
    event_func_3477();
    event_func_3478();
    event_func_3479();
    event_func_3480();
    event_func_3481();
    event_func_3482();
    event_func_3483();
    event_func_3484();
    event_func_3485();
    event_func_3486();
    event_func_3487();
    event_func_3488();
    event_func_3489();
    event_func_3490();
    event_func_3491();
    event_func_3492();
    event_func_3493();
    event_func_3494();
    event_func_3495();
    event_func_3496();
    event_func_3497();
    event_func_3498();
    event_func_3499();
    event_func_3500();
    event_func_3501();
    event_func_3502();
    event_func_3503();
    event_func_3504();
    event_func_3505();
    event_func_3506();
    event_func_3507();
    event_func_3508();
    event_func_3509();
    event_func_3510();
    event_func_3511();
    event_func_3512();
    event_func_3513();
    event_func_3514();
    event_func_3515();
    event_func_3516();
    event_func_3517();
    event_func_3518();
    event_func_3519();
    event_func_3520();
    event_func_3521();
    event_func_3522();
    event_func_3523();
    event_func_3524();
    event_func_3525();
    event_func_3526();
    event_func_3527();
    event_func_3528();
    event_func_3529();
    event_func_3530();
    event_func_3531();
    event_func_3532();
    event_func_3533();
    event_func_3534();
    event_func_3535();
    event_func_3536();
    event_func_3537();
    event_func_3538();
    event_func_3539();
    event_func_3540();
    event_func_3541();
    event_func_3542();
    event_func_3543();
    event_func_3544();
    event_func_3545();
    event_func_3546();
    event_func_3547();
    event_func_3548();
    event_func_3549();
    event_func_3550();
    event_func_3551();
    event_func_3552();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1_end: ;
    event_func_3553();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1_end;
    event_func_3554();
    event_func_3555();
    event_func_3556();
    event_func_3557();
    event_func_3558();
    event_func_3559();
    event_func_3560();
    event_func_3561();
    event_func_3562();
    event_func_3563();
    event_func_3564();
    event_func_3565();
    event_func_3566();
    event_func_3567();
    event_func_3568();
    event_func_3569();
    event_func_3570();
    event_func_3571();
    event_func_3572();
    event_func_3573();
    event_func_3574();
    event_func_3575();
    event_func_3576();
    event_func_3577();
    event_func_3578();
    event_func_3579();
    event_func_3580();
    event_func_3581();
    event_func_3582();
    event_func_3583();
    event_func_3584();
    event_func_3585();
    event_func_3586();
    event_func_3587();
    event_func_3588();
    event_func_3589();
    event_func_3590();
    event_func_3591();
    event_func_3592();
    event_func_3593();
    event_func_3594();
    event_func_3595();
    event_func_3596();
    event_func_3597();
    event_func_3598();
    event_func_3599();
    event_func_3600();
    event_func_3601();
    event_func_3602();
    event_func_3603();
    event_func_3604();
    event_func_3605();
    event_func_3606();
    event_func_3607();
    event_func_3608();
    event_func_3609();
    event_func_3610();
    event_func_3611();
    event_func_3612();
    event_func_3613();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1_end: ;
    event_func_3135();
    event_func_3136();
    event_func_3137();
    event_func_3138();
    event_func_3139();
    event_func_3140();
    event_func_3141();
    event_func_3142();
    event_func_3143();
    event_func_3144();
    event_func_3145();
    event_func_3146();
    event_func_3147();
    event_func_3148();
    event_func_3149();
    event_func_3150();
    event_func_3151();
    event_func_3152();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_3153();
    event_func_3154();
    event_func_3155();
    event_func_3156();
    event_func_3157();
    event_func_3158();
    event_func_3159();
    event_func_3160();
    event_func_3161();
    event_func_3162();
    event_func_3163();
    event_func_3164();
    event_func_3165();
    event_func_3166();
    event_func_3167();
    event_func_3168();
    event_func_3169();
    event_func_3170();
    event_func_3614();
    event_func_3615();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_3171();
    if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1_end;
    event_func_3172();
    event_func_3173();
    event_func_3174();
    event_func_3175();
    event_func_3176();
    event_func_3177();
    event_func_3178();
    event_func_3179();
    event_func_3180();
    event_func_3181();
    event_func_3182();
    event_func_3183();
    event_func_3184();
    event_func_3185();
    event_func_3186();
    event_func_3187();
    event_func_3188();
    event_func_3616();
    event_func_3617();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_3189();
    group_main_engine_level_specific_methods_cutscenes_story_scenes_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_after_story_scene_1) goto group_main_engine_level_specific_methods_cutscenes_after_story_scene_1_end;
    event_func_3191();
    event_func_3192();
    group_main_engine_level_specific_methods_cutscenes_after_story_scene_1_end: ;
    event_func_3193();
    event_func_3194();
    event_func_3195();
    event_func_3618();
    event_func_3619();
    event_func_3620();
    event_func_3621();
    event_func_3622();
    event_func_3623();
    event_func_3624();
    event_func_3625();
    event_func_3626();
    event_func_3627();
    event_func_3628();
    event_func_3629();
    event_func_3630();
    event_func_3631();
    event_func_3632();
    event_func_3633();
    event_func_3634();
    event_func_3635();
    event_func_3636();
    event_func_3637();
    event_func_3638();
    event_func_3639();
    event_func_3640();
    event_func_3641();
    event_func_3642();
    event_func_3643();
    event_func_3644();
    event_func_3645();
    event_func_3646();
    event_func_3647();
    event_func_3648();
    event_func_3649();
    event_func_3650();
    event_func_3651();
    event_func_3652();
    event_func_3653();
    event_func_3654();
    event_func_3655();
    if (!group_main_engine_interface_and_post_processing_methods_all_shields_1) goto group_main_engine_interface_and_post_processing_methods_all_shields_1_end;
    event_func_3656();
    event_func_3657();
    event_func_3658();
    event_func_3659();
    event_func_3660();
    event_func_3661();
    event_func_3662();
    event_func_3663();
    event_func_3664();
    group_main_engine_interface_and_post_processing_methods_all_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
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
    event_func_3240();
    event_func_3241();
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
    event_func_3242();
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
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
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
    event_func_3249();
    event_func_3665();
    event_func_3666();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_3667();
    event_func_3668();
    event_func_2644();
    event_func_3252();
    event_func_3253();
    event_func_3254();
    event_func_3255();
    event_func_3256();
    event_func_3669();
    event_func_3670();
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
void Frames::handle_frame_16_pre_events()
{
}
void Frames::event_func_3671()
{
    // event 2_15
    {
        if (!(group_main_engine_1)) goto event_2_15_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_x(((Active*)get_instance(dialogbox_566_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogbox2_567_instances))->set_x(((Active*)get_instance(dialogbox2_567_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(dialogarrow_568_instances))->set_x(((Active*)get_instance(dialogarrow_568_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_x(((TextBlitter*)get_instance(dialogtext_569_instances))->get_x()+global_values->get(16)*0.5);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->load(str_data_font_bmp_7);
        ((Active*)get_instance(yes_115_instances))->set_x(((Active*)get_instance(yes_115_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(no_646_instances))->set_x(((Active*)get_instance(no_646_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_2_15_end: ;
}
void Frames::event_func_3672()
{
    // event 1399_15
    {
        if (!(group_main_engine_1)) goto event_1399_15_end;
        if (!((global_values->get(4)) >= (0))) goto event_1399_15_end;
        if (!((global_values->get(4)) < (12))) goto event_1399_15_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1399_15_end: ;
}
void Frames::event_func_3673()
{
    // event 1405_15
    {
        if (!(group_main_engine_1)) goto event_1405_15_end;
        if (!((global_values->get(4)) > (10))) goto event_1405_15_end;
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_1 = true;
        }
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
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1405_15_end: ;
}
void Frames::event_func_3674()
{
    // event 1995_15
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1995_15_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
    }
    event_1995_15_end: ;
}
void Frames::on_frame_16_start_events()
{
    event_func_3264();
    event_func_3671();
    event_func_3266();
    event_func_2657();
    event_func_2658();
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
    event_func_3268();
    event_func_3269();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3274();
    event_func_3275();
    event_func_2686();
    event_func_3672();
    event_func_3673();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_3674();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_16_init()
{
    index = 15;
    width = 1600;
    height = 1600;
    virtual_width = 1600;
    virtual_height = 1600;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelfloatingplatform_523_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &levelfloatingplatform_523_instances, &pushableblock1_531_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_466_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(7, &qualifier_0_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&no_646_instances, &yes_115_instances, NULL};
    qualifier_1.set(2, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_7.set(27, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, &treehouseentrancetrigger_526_instances, &objectcouchspot_542_instances, NULL};
    qualifier_22.set(3, &qualifier_22_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock1_531_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelfloatingplatform_523_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_573(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_574(0, 112), 0);
    add_background_object(create_levelparallaxpiece2_575(0, 200), 0);
    add_object(create_creditstorquerocket_579(734, 640), 0);
    add_background_object(create_levelparallaxpiece3_580(0, 352), 1);
    add_background_object(create_levelparallaxpiece4_581(0, 384), 1);
    add_background_object(create_trunk4_471(640, 1024), 1);
    add_background_object(create_trunk2_472(712, 1024), 1);
    add_background_object(create_trunk11_473(848, 696), 1);
    add_background_object(create_trunk11_473(808, 608), 1);
    add_background_object(create_trunk11_473(472, 552), 1);
    add_background_object(create_trunk11_473(592, 520), 1);
    add_background_object(create_trunk11_473(752, 544), 1);
    add_background_object(create_trunk11_473(856, 504), 1);
    add_background_object(create_trunk11_473(488, 632), 1);
    add_background_object(create_trunk11_473(440, 696), 1);
    add_background_object(create_trunk6_474(824, 656), 1);
    add_background_object(create_trunk3_475(624, 784), 1);
    add_background_object(create_trunk4_471(640, 896), 1);
    add_background_object(create_trunk4_471(640, 960), 1);
    add_background_object(create_trunk2_472(712, 960), 1);
    add_background_object(create_trunk2_472(712, 896), 1);
    add_background_object(create_trunk1_476(704, 784), 1);
    add_background_object(create_backdrop4_582(568, 552), 1);
    add_background_object(create_trunk11_473(944, 552), 1);
    add_background_object(create_trunk11_473(384, 504), 1);
    add_background_object(create_trunk11_473(464, 456), 1);
    add_background_object(create_trunk11_473(296, 656), 1);
    add_background_object(create_trunk11_473(952, 672), 1);
    add_background_object(create_backdrop5_491(568, 552), 1);
    add_object(create_active3_478(712, 616), 1);
    add_object(create_pondwater_479(968, 1063), 1);
    add_object(create_objecttent_583(144, 968), 1);
    add_object(create_objecttentlight_584(144, 968), 1);
    add_object(create_objecttent2_585(-16, 968), 1);
    add_background_object(create_housefloor_586(704, 1536), 2);
    add_background_object(create_levelparallaxpiece5_587(544, 1416), 2);
    add_background_object(create_levelparallaxpiece6_588(728, 1464), 2);
    add_background_object(create_backdrop6_589(1232, 1400), 2);
    add_background_object(create_backdrop6_589(1296, 1400), 2);
    add_background_object(create_backdrop6_589(1360, 1400), 2);
    add_background_object(create_backdrop6_589(1480, 1400), 2);
    add_background_object(create_backdrop6_589(1168, 1400), 2);
    add_background_object(create_backdrop6_589(1424, 1400), 2);
    add_background_object(create_backdrop6_589(1040, 1400), 2);
    add_background_object(create_backdrop7_590(984, 1400), 2);
    add_background_object(create_backdrop8_591(1536, 1400), 2);
    add_background_object(create_backdrop6_589(1104, 1400), 2);
    add_background_object(create_backdrop_592(1304, 1536), 2);
    add_background_object(create_backdrop13_593(1128, 1536), 2);
    add_background_object(create_ltshrub2_483(1448, 976), 2);
    add_background_object(create_ltshrub2_483(1304, 984), 2);
    add_background_object(create_ltshrub1_484(1352, 952), 2);
    add_background_object(create_ltshrub2_483(856, 984), 2);
    add_background_object(create_ltshrub2_483(552, 1000), 2);
    add_background_object(create_ltshrub2_483(296, 1000), 2);
    add_background_object(create_ltshrub1_484(408, 976), 2);
    add_background_object(create_ltshrub1_484(-40, 976), 2);
    add_background_object(create_jcdirt1_594(1440, 1040), 2);
    add_background_object(create_jcdirt1_594(1216, 1056), 2);
    add_background_object(create_jcdirt1_594(704, 1056), 2);
    add_background_object(create_jcdirt1_594(-64, 1072), 2);
    add_background_object(create_dirt2_595(960, 1056), 2);
    add_background_object(create_rmgrass6_596(1200, 1048), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_levelbackdrop12_487(624, 640), 2);
    add_background_object(create_levelbackdrop9_488(624, 648), 2);
    add_background_object(create_levelbackdrop9_488(680, 648), 2);
    add_background_object(create_levelbackdrop11_489(808, 640), 2);
    add_background_object(create_levelbackdrop9_488(760, 648), 2);
    add_background_object(create_levelbackdrop10_490(624, 656), 2);
    add_background_object(create_levelbackdrop10_490(680, 656), 2);
    add_background_object(create_levelbackdrop10_490(760, 656), 2);
    add_background_object(create_levelbackdrop7_492(616, 640), 2);
    add_background_object(create_levelbackdrop7_492(816, 640), 2);
    add_background_object(create_levelbackdrop7_492(672, 640), 2);
    add_background_object(create_levelbackdrop7_492(760, 640), 2);
    add_background_object(create_levelbackdrop8_493(624, 672), 2);
    add_background_object(create_ladder_494(664, 776), 2);
    add_background_object(create_ladder_494(664, 808), 2);
    add_background_object(create_ladder_494(664, 840), 2);
    add_background_object(create_ladder_494(664, 872), 2);
    add_background_object(create_ceilingoverlay_495(704, 776), 2);
    add_background_object(create_ceilingoverlay_495(768, 776), 2);
    add_background_object(create_edgeoverlay_496(632, 776), 2);
    add_background_object(create_edgeoverlay_496(600, 776), 2);
    add_background_object(create_edgeoverlay_496(568, 776), 2);
    add_background_object(create_edgeoverlay2_497(880, 744), 2);
    add_background_object(create_edgeoverlay2_497(568, 744), 2);
    add_background_object(create_ladder_494(664, 904), 2);
    add_background_object(create_ladder_494(664, 936), 2);
    add_background_object(create_ladder_494(664, 968), 2);
    add_background_object(create_ladder_494(664, 1000), 2);
    add_background_object(create_dirt3_597(632, 1056), 2);
    add_background_object(create_dirt4_598(752, 1048), 2);
    add_background_object(create_dirt4_598(1384, 1040), 2);
    add_background_object(create_trunk8_498(920, 720), 2);
    add_background_object(create_trunk10_499(368, 616), 2);
    add_background_object(create_trunk10_499(872, 600), 2);
    add_background_object(create_edgeoverlay3_500(520, 736), 2);
    add_background_object(create_edgeoverlay3_500(848, 568), 2);
    add_background_object(create_edgeoverlay3_500(448, 688), 2);
    add_background_object(create_edgeoverlay3_500(488, 600), 2);
    add_background_object(create_edgeoverlay3_500(568, 560), 2);
    add_background_object(create_edgeoverlay3_500(624, 528), 2);
    add_background_object(create_edgeoverlay3_500(912, 536), 2);
    add_background_object(create_rmgrass5_599(960, 1048), 2);
    add_background_object(create_dvrockslope4_501(960, 1064), 2);
    add_background_object(create_dvrockslope4_600(1088, 1064), 2);
    add_background_object(create_treehousebenchnight_601(912, 1008), 2);
    add_background_object(create_jcgrass5_602(-64, 1056), 2);
    add_background_object(create_ltnightground3_603(64, 1064), 2);
    add_background_object(create_jcdirt1_594(192, 1072), 2);
    add_background_object(create_jcdirt1_594(448, 1072), 2);
    add_background_object(create_housefloor_586(472, 1536), 2);
    add_background_object(create_backdrop3_604(544, 1536), 2);
    add_background_object(create_houseceiling_605(544, 1328), 2);
    add_background_object(create_backdrop2_606(544, 1384), 2);
    add_background_object(create_housewallright_516(840, 1408), 2);
    add_background_object(create_treehousesolidblack_607(472, 1360), 2);
    add_background_object(create_treehousesolidblack_607(472, 1472), 2);
    add_background_object(create_housewallleft_608(544, 1384), 2);
    add_background_object(create_housefloor_586(544, 1536), 2);
    add_background_object(create_jcdirt1_594(960, 1120), 2);
    add_background_object(create_ltnightground2_609(448, 1056), 2);
    add_background_object(create_ltnightground2_609(576, 1048), 2);
    add_background_object(create_ltnightground3_603(704, 1048), 2);
    add_background_object(create_ltnightground3_603(832, 1048), 2);
    add_background_object(create_ltnightground4_610(1216, 1048), 2);
    add_background_object(create_ltnightground2_609(1280, 1040), 2);
    add_background_object(create_ltnightground2_609(1408, 1032), 2);
    add_background_object(create_ltnightground4_610(1536, 1032), 2);
    add_background_object(create_ltnightground3_603(192, 1064), 2);
    add_background_object(create_ltnightground3_603(320, 1064), 2);
    add_background_object(create_jcdirt1_594(1296, 1576), 2);
    add_background_object(create_jcdirt1_594(1040, 1576), 2);
    add_background_object(create_ltnightground3_603(1296, 1568), 2);
    add_background_object(create_ltnightground3_603(1424, 1568), 2);
    add_background_object(create_ltnightground3_603(1040, 1568), 2);
    add_background_object(create_ltnightground3_603(1168, 1568), 2);
    add_background_object(create_hearttank_611(1048, 1488), 2);
    add_background_object(create_ltnightground3_603(912, 1568), 2);
    add_background_object(create_ltnightground3_603(1552, 1568), 2);
    add_background_object(create_ltnightground3_603(-192, 1056), 2);
    add_background_object(create_housefloor_586(152, 1536), 2);
    add_background_object(create_backdrop3_604(152, 1536), 2);
    add_background_object(create_backdrop12_612(152, 1384), 2);
    add_background_object(create_houseceiling_605(152, 1328), 2);
    add_background_object(create_treehousesolidblack_607(96, 1360), 2);
    add_background_object(create_treehousesolidblack_607(96, 1472), 2);
    add_background_object(create_treehousesolidblack_607(40, 1472), 2);
    add_background_object(create_treehousesolidblack_607(40, 1360), 2);
    add_background_object(create_tentfloorfadeleft_613(984, 1568), 2);
    add_background_object(create_tentfloorfaderight_614(1472, 1568), 2);
    add_object(create_furniturefloor9_615(768, 1469), 2);
    add_object(create_torqueshell_616(1284, 1567), 2);
    add_object(create_torqueshell_616(1428, 1567), 2);
    add_object(create_tentlight_617(1296, 1456), 2);
    add_object(create_furniturewall3_618(288, 1448), 2);
    add_object(create_furniturefloor4_619(320, 1501), 2);
    add_object(create_furniturefloor8_620(208, 1485), 2);
    add_object(create_furniturefloor9_615(248, 1469), 2);
    add_object(create_furniturefloor10_621(272, 1539), 2);
    add_object(create_furniturefloor5_622(392, 1501), 2);
    add_object(create_objectchair_522(941, 1025), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9912, 87), 2);
    add_object(create_playerstartingpoint_358(629, 1029), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_levelfloatingplatform_523(1008, -152), 2);
    add_object(create_gimmickbridge12logs_353(8480, -216), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(684, 799), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_treehousedoor2_623(696, 712), 2);
    add_object(create_treehousedoor_525(728, 712), 2);
    add_object(create_paperlantern_527(624, 856), 2);
    add_object(create_paperlantern_527(712, 792), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldmagnetic_317(-76, 340), 2);
    add_object(create_shieldflamefront_316(-116, 348), 2);
    add_object(create_shieldwater_318(-84, 332), 2);
    add_object(create_objectchair_522(861, 753), 2);
    add_object(create_objectchair_522(613, 753), 2);
    add_object(create_objectfuel_528(860, 1036), 2);
    add_object(create_npclilac_529(940, 1035), 2);
    add_object(create_objectjumppad_530(-144, 864), 2);
    add_object(create_pushableblock1_531(-123, 1049), 2);
    add_object(create_furniturewall_624(624, 1432), 2);
    add_object(create_furniturewall2_625(688, 1456), 2);
    add_object(create_furniturefloor_626(608, 1496), 2);
    add_object(create_furniturefloor3_538(592, 1480), 2);
    add_object(create_furniturefloor2_627(560, 1504), 2);
    add_object(create_furniturefloor4_619(768, 1501), 2);
    add_object(create_objectcouchspot_542(684, 1526), 2);
    add_object(create_chips_628(608, 1551), 2);
    add_object(create_npccouchcarol_629(596, 1537), 2);
    add_object(create_objectcouchspot_542(644, 1526), 2);
    add_object(create_treehouseentrancetrigger_526(732, 760), 2);
    add_object(create_npccouchlilac_545(649, 1534), 2);
    add_object(create_gimmickbridge12logs_353(976, 992), 2);
    add_object(create_npcshellduck_533(212, 1049), 2);
    add_object(create_tentplatform_630(1104, 1536), 2);
    add_object(create_monitorcrate_409(1240, 1536), 2);
    add_object(create_monitorcrate_409(1496, 1512), 2);
    add_object(create_furniturephone_631(752, 1496), 2);
    add_object(create_torquerocket_632(184, 1063), 2);
    add_object(create_gongshield_633(-224, 1048), 2);
    add_object(create_npcgong_634(-224, 1048), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_levelbackdrop9_488(576, 764), 3);
    add_background_object(create_levelbackdrop9_488(808, 764), 3);
    add_background_object(create_levelbackdrop10_490(576, 745), 3);
    add_background_object(create_levelbackdrop10_490(808, 745), 3);
    add_background_object(create_levelbackdrop7_492(560, 741), 3);
    add_background_object(create_levelbackdrop7_492(874, 741), 3);
    add_background_object(create_levelbackdrop7_492(636, 741), 3);
    add_background_object(create_levelbackdrop7_492(796, 741), 3);
    add_background_object(create_trunk5_546(384, 576), 3);
    add_background_object(create_trunk9_547(536, 760), 3);
    add_background_object(create_trunk7_548(800, 616), 3);
    add_background_object(create_trunk10_499(840, 536), 3);
    add_background_object(create_trunk10_499(536, 512), 3);
    add_background_object(create_treehousesolidblack_607(864, 1360), 3);
    add_background_object(create_treehousesolidblack_607(864, 1472), 3);
    add_background_object(create_treehousesolidblack_607(488, 1360), 3);
    add_background_object(create_treehousesolidblack_607(488, 1472), 3);
    add_background_object(create_treehousesolidblack_607(920, 1360), 3);
    add_background_object(create_treehousesolidblack_607(920, 1472), 3);
    add_background_object(create_housewallrightfront_635(840, 1384), 3);
    add_background_object(create_treehousesolidblack2_636(1088, 1272), 3);
    add_background_object(create_treehousesolidblack2_636(1216, 1272), 3);
    add_background_object(create_treehousesolidblack2_636(1344, 1272), 3);
    add_background_object(create_treehousesolidblack2_636(1472, 1272), 3);
    add_background_object(create_treehousesolidblack_607(472, 1472), 3);
    add_background_object(create_treehousesolidblack_607(472, 1360), 3);
    add_background_object(create_treehousesolidblack2_636(960, 1272), 3);
    add_object(create_furniturefloor6_637(720, 1504), 3);
    add_object(create_objecttententrance_638(144, 968), 3);
    add_object(create_furniturefloor7_639(152, 1520), 3);
    add_object(create_npccouchmilla_554(197, 1537), 3);
    add_object(create_torquerocket3_640(136, 976), 3);
    add_object(create_torquerocket2_641(181, 980), 3);
    add_background_object(create_backdrop9_642(1480, 1536), 4);
    add_background_object(create_backdrop10_643(1536, 1400), 4);
    add_background_object(create_backdrop11_644(984, 1400), 4);
    add_background_object(create_treehousesolidblack_607(928, 1360), 4);
    add_background_object(create_treehousesolidblack_607(928, 1488), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-99, 273), 5);
    add_object(create_playerskinmillatail_381(-99, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-116, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_557(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_558(-208, 392), 5);
    add_object(create_hazardspikesdown_559(-168, 392), 5);
    add_object(create_hazardspikesleft_560(-128, 392), 5);
    add_object(create_hazardspikesright_561(-88, 392), 5);
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(1096, -73), 5);
    add_object(create_cameralimitbossleft_421(936, -192), 5);
    add_object(create_cameralimitbossright_422(1255, -192), 5);
    add_object(create_cameralimitbosstop_423(1096, -312), 5);
    add_object(create_cameratriggerboss_424(952, -200), 5);
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
    add_object(create_bigbubble_428(-497, 79), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
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
    add_object(create_objectbike_322(-216, 288), 5);
    add_object(create_monitorkeystone_562(-216, 176), 5);
    add_object(create_monitorbomb_563(-216, 208), 5);
    add_object(create_playerreflect_447(-76, 224), 5);
    add_object(create_playerdig_448(-64, 233), 5);
    add_object(create_playerskintorquearm_449(-95, 224), 5);
    add_object(create_playerskintorque_450(-76, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guitimer_564(216, -56), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(80, -32), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli_360(309, -37), 6);
    add_object(create_guitimermilli2_361(299, -37), 6);
    add_object(create_guitimers_362(283, -37), 6);
    add_object(create_guitimers2_363(273, -37), 6);
    add_object(create_guitimerm_364(257, -37), 6);
    add_object(create_guitimerm2_365(247, -37), 6);
    add_object(create_guikeystone_455(56, -32), 6);
    add_object(create_dialogdata_645(-136, 456), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_no_646(-11, 111), 6);
    add_object(create_yes_647(-11, 88), 6);
    add_object(create_locationname_570(16, 192), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_dialogbox_571(0, 184), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_dialogtext_572(0, 184), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
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
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_voice_running = false;
    loop_voice_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_15, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_15, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_15, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_15, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_15, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_15, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_15, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_15, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_15, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_15, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_15, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_15, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_15, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_15, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_15, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_15, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_15, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_15, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_15, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_15, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_15, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_15, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_15, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_15, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_15, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_15, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_15, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_15, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_15, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_15, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_15, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_15, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_15, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_15, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_15, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_15, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_15, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_15, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_15, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_15, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_15, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_15, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_15, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_15, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_15, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    once_condition_1626_15 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1845_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1494_15 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_1509_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1364_14 = loop_count;
    not_always_1545_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_809_13 = loop_count;
    once_condition_1628_15 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    once_condition_1505_15 = false;
    not_always_168_0 = loop_count;
    not_always_1484_15 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    once_condition_1687_15 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    once_condition_1619_15 = false;
    not_always_449_13 = loop_count;
    not_always_1444_15 = loop_count;
    not_always_1048_14 = loop_count;
    once_condition_1622_15 = false;
    once_condition_1498_15 = false;
    once_condition_1618_15 = false;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1420_13 = loop_count;
    not_always_68_13 = loop_count;
    once_condition_1501_15 = false;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_3_about_brevon_1 = false;
    once_condition_1653_15 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1556_15 = loop_count;
    not_always_97_0 = loop_count;
    not_always_44_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_51_13 = loop_count;
    not_always_43_13 = loop_count;
    once_condition_1504_15 = false;
    not_always_1436_15 = loop_count;
    not_always_1393_15 = loop_count;
    not_always_1492_15 = loop_count;
    not_always_1739_14 = loop_count;
    not_always_121_0 = loop_count;
    once_condition_1591_15 = false;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1562_15 = loop_count;
    not_always_1562_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_1 = false;
    not_always_1422_13 = loop_count;
    not_always_1502_15 = loop_count;
    group_main_engine_interface_and_post_processing_methods_all_shields_1 = false;
    once_condition_1635_15 = false;
    not_always_1547_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_2_lilac_s_dream_1 = false;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1511_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1495_15 = loop_count;
    once_condition_1639_15 = false;
    not_always_130_0 = loop_count;
    not_always_1493_15 = loop_count;
    not_always_1506_15 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    once_condition_1638_15 = false;
    not_always_1466_15 = loop_count;
    once_condition_1477_15 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    not_always_1584_14 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1472_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1438_15 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    once_condition_1527_15 = false;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    not_always_1548_15 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_1_torque_s_tent_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    once_condition_1633_15 = false;
    not_always_1489_15 = loop_count;
    not_always_1558_14 = loop_count;
    not_always_1559_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_1707_15 = false;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1 = false;
    once_condition_1411_15 = false;
    not_always_1549_15 = loop_count;
    once_condition_538_13 = false;
    not_always_175_8 = loop_count;
    not_always_1491_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_1719_15 = false;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    once_condition_1592_15 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_1555_14 = loop_count;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_1543_15 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    once_condition_1677_15 = false;
    once_condition_138_0 = false;
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
    not_always_1838_15 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_1569_15 = loop_count;
    once_condition_1500_15 = false;
    not_always_1812_15 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_1816_15 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    not_always_1437_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1555_15 = loop_count;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1561_15 = loop_count;
    once_condition_1595_15 = false;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_1697_15 = false;
    once_condition_63_13 = false;
    not_always_1815_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_1689_15 = false;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    once_condition_66_13 = false;
    not_always_1848_15 = loop_count;
    not_always_1741_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_1365_14 = loop_count;
    not_always_1497_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    group_main_engine_level_specific_methods_cutscenes_after_story_scene_1 = false;
    once_condition_48_13 = false;
    not_always_1510_15 = loop_count;
    not_always_103_0 = loop_count;
    not_always_174_8 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    not_always_1571_15 = loop_count;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1499_15 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    once_condition_1593_15 = false;
    once_condition_1646_15 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    once_condition_1476_15 = false;
    not_always_66_0 = loop_count;
    once_condition_1526_15 = false;
    not_always_59_13 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_1149_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_story_scenes_scene_4_ending_1 = false;
    once_condition_1655_15 = false;
    not_always_1465_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_98_0 = loop_count;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_3675()
{
    // event 1838_16
    {
        if (!(group_pause_1)) goto event_1838_16_end;
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1838_16_end: ;
}
void Frames::loop_restart_16()
{
    event_func_3675();
    event_func_86();
    event_func_1171();
}
void Frames::event_func_3676()
{
    // event 25_16
    {
        if (!(group_main_engine_1)) goto event_25_16_end;
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(14));
        global_values->set(29, ((Counter*)get_instance(guicrystal_121_instances))->value);
        global_values->set(28, manager.lives);
        global_values->set(30, ((Counter*)get_instance(guirings_122_instances))->value);
    }
    event_25_16_end: ;
}
void Frames::loop_cp_16()
{
    event_func_3676();
}
void Frames::event_func_3677()
{
    // event 1788_16
    {
        if (!(group_main_engine_1)) goto event_1788_16_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage0_ogg_121, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1788_16_end: ;
}
void Frames::loop_play_music_5_16()
{
    event_func_3677();
}
void Frames::event_func_3678()
{
    // event 1552_16
    {
        if (!(group_main_engine_1)) goto event_1552_16_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1552_16_end: ;
}
void Frames::loop_cutscene_start_16()
{
    event_func_3678();
}
void Frames::event_func_3679()
{
    // event 1731_16
    {
        if (!(group_main_engine_1)) goto event_1731_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1731_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+6+get_min(get_abs(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), 4)+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))/math_helper/1.5, ((Active*)get_instance(player_389_instances))->get_x()));
    }
    event_1731_16_end: ;
}
void Frames::event_func_3680()
{
    // event 1732_16
    {
        if (!(group_main_engine_1)) goto event_1732_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1732_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-6+get_max(0-get_abs(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)), -4)-get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))/math_helper/1.5, ((Active*)get_instance(player_389_instances))->get_x()));
    }
    event_1732_16_end: ;
}
void Frames::event_func_3681()
{
    // event 1733_16
    {
        if (!(group_main_engine_1)) goto event_1733_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1733_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))/math_helper/2.0, ((Active*)get_instance(player_389_instances))->get_y()));
    }
    event_1733_16_end: ;
}
void Frames::event_func_3682()
{
    // event 1734_16
    {
        if (!(group_main_engine_1)) goto event_1734_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1734_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-6-get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))/math_helper/2.0, ((Active*)get_instance(player_389_instances))->get_y()));
    }
    event_1734_16_end: ;
}
void Frames::event_func_3683()
{
    // event 1735_16
    {
        if (!(group_main_engine_1)) goto event_1735_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) == (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1735_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) == (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1735_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_1735_16_end: ;
}
void Frames::loop_camera_mode2_16()
{
    event_func_3679();
    event_func_3680();
    event_func_3681();
    event_func_3682();
    event_func_3683();
}
void Frames::event_func_3684()
{
    // event 1726_16
    {
        if (!(group_main_engine_1)) goto event_1726_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 1);
    }
    event_1726_16_end: ;
}
void Frames::loop_camera_mode1_16()
{
    event_func_3684();
}
void Frames::event_func_3685()
{
    // event 1700_16
    {
        if (!(group_main_engine_1)) goto event_1700_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) != (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(21)))) goto event_1700_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1700_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1700_16_end: ;
}
void Frames::event_func_3686()
{
    // event 1701_16
    {
        if (!(group_main_engine_1)) goto event_1701_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1701_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)) > (0.0))) goto event_1701_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)-4.0, 0.0));
    }
    event_1701_16_end: ;
}
void Frames::event_func_3687()
{
    // event 1702_16
    {
        if (!(group_main_engine_1)) goto event_1702_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1702_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)) < (0.0))) goto event_1702_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(22, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22)+4.0, 0.0));
    }
    event_1702_16_end: ;
}
void Frames::event_func_3688()
{
    // event 1703_16
    {
        if (!(group_main_engine_1)) goto event_1703_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1703_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(22), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)), ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)));
    }
    event_1703_16_end: ;
}
void Frames::event_func_3689()
{
    // event 1704_16
    {
        if (!(group_main_engine_1)) goto event_1704_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(8)))) goto event_1704_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1704_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(8));
    }
    event_1704_16_end: ;
}
void Frames::event_func_3690()
{
    // event 1705_16
    {
        if (!(group_main_engine_1)) goto event_1705_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(9)))) goto event_1705_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1705_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(9));
    }
    event_1705_16_end: ;
}
void Frames::event_func_3691()
{
    // event 1706_16
    {
        if (!(group_main_engine_1)) goto event_1706_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1706_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(10)))) goto event_1706_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1706_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(10));
    }
    event_1706_16_end: ;
}
void Frames::event_func_3692()
{
    // event 1707_16
    {
        if (!(group_main_engine_1)) goto event_1707_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1707_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(11)))) goto event_1707_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24)))) goto event_1707_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(11));
    }
    event_1707_16_end: ;
}
