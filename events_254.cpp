#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20421()
{
    // event 2811_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2811_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2811_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (1020))) goto event_2811_83_end;
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        ((Active*)get_instance(npchologram1_3060_instances))->set_direction(0);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(true);
        ((Active*)get_instance(npchologram2_3074_instances))->set_direction(5);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(true);
        FrameObject * single_instance_2811_83_0; single_instance_2811_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcneera_2464_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_2811_83_0 == NULL)
                    single_instance_2811_83_0 = new_obj;
            }
        }
    }
    event_2811_83_end: ;
}
void Frames::event_func_20422()
{
    // event 2812_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2812_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2812_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (1060))) goto event_2812_83_end;
        media.play_id(SOUND_DRAGONROAR_2_335, -1, 1);
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
    event_2812_83_end: ;
}
void Frames::event_func_20423()
{
    // event 2813_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2813_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2813_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (1060))) goto event_2813_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        ((Active*)get_instance(npchologram1_3060_instances))->set_scale(1+((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(1)*0.01);
    }
    event_2813_83_end: ;
}
void Frames::event_func_20424()
{
    // event 2814_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2814_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2814_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (1060))) goto event_2814_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2814_83_end;
        ((Active*)get_instance(npchologram1_3060_instances))->set_scale(1);
        ((Active*)get_instance(npchologram1_3060_instances))->set_visible(false);
        ((Active*)get_instance(npchologram2_3074_instances))->set_visible(false);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(-100);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->set_x(590);
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 540);
    }
    event_2814_83_end: ;
}
void Frames::event_func_20425()
{
    // event 2815_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2815_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2815_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2815_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
    }
    event_2815_83_end: ;
}
void Frames::event_func_20426()
{
    // event 2816_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_hologram_grow_1)) goto event_2816_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2816_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2816_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2816_83_end: ;
}
void Frames::event_func_20427()
{
    // event 2817_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2817_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2817_83_end;
        if (not_always_2817_83 > loop_count) {
            not_always_2817_83 = loop_count + 2;
            goto event_2817_83_end;
        }
        not_always_2817_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2817_83_end: ;
}
void Frames::event_func_20428()
{
    // event 2818_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2818_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2818_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2818_83_end: ;
}
void Frames::event_func_20429()
{
    // event 2819_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_1 && group_main_engine_level_specific_methods_cutscenes_lilac_the_dragonblood_implications_1)) goto event_2819_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2819_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2819_83_end;
        global_values->set(4, 0);
        next_frame = 82 + 0;    
    
    }
    event_2819_83_end: ;
}
void Frames::event_func_20430()
{
    // event 2821_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2821_83_end;
        if (!((endingsparkle_578_instances.size()) < (400))) goto event_2821_83_end;
        endingsparkle_578_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_endingsparkle_578(0, 0), 1);
            endingsparkle_578_instances.add_back();
        }
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, endingsparkle_578_instances.size()*0.5);
            ((Active*)*it)->alterables->values.set(0, endingsparkle_578_instances.size()*37);
            ((Active*)*it)->force_speed(14+(endingsparkle_578_instances.size()%math_helper%30));
        }
    }
    event_2821_83_end: ;
}
void Frames::event_func_20431()
{
    // event 2822_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2822_83_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (128))) { it.deselect(); continue; }
        }
        if (!endingsparkle_578_instances.has_selection()) goto event_2822_83_end;
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 2);
        }
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_2822_83_end: ;
}
void Frames::event_func_20432()
{
    // event 2823_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2823_83_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)*0.5+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(frame_top()+100-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.3);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+2+sin_deg(((Active*)*it)->alterables->values.get(0))*1.5)%math_helper%360);
            ((Active*)*it)->set_scale(1+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.005);
        }
    }
    event_2823_83_end: ;
}
void Frames::event_func_20433()
{
    // event 2824_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2824_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_2824_83_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2824_83_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
    }
    event_2824_83_end: ;
}
void Frames::event_func_20434()
{
    // event 2825_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2825_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2825_83_end;
        if (once_condition_2825_83) goto event_2825_83_end;
        once_condition_2825_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
    }
    event_2825_83_end: ;
}
void Frames::event_func_20435()
{
    // event 2826_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2826_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2826_83_end;
        ((Active*)get_instance(themagister_2115_instances))->set_y(2599);
        ((Active*)get_instance(themagister_2115_instances))->set_x(572);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)get_instance(levelcardfade2_24_instances, it.current_index, default_active_instance))->blend_color.get_semi_transparency()+4);
        }
    }
    event_2826_83_end: ;
}
void Frames::event_func_20436()
{
    // event 2827_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2827_83_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2827_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2827_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2827_83_end: ;
}
void Frames::event_func_20437()
{
    // event 2828_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2828_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2828_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_2828_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
    event_2828_83_end: ;
}
void Frames::event_func_20438()
{
    // event 2829_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2829_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2829_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2829_83_end: ;
}
void Frames::event_func_20439()
{
    // event 2830_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2830_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2830_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2830_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 5300);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_height(81);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_y(frame_bottom()-100);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_width(353);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_x(((TextBlitter*)get_instance(subtitletext_3433_instances))->get_x()-16);
    }
    event_2830_83_end: ;
}
void Frames::event_func_20440()
{
    // event 2831_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2831_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2831_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2831_83_end: ;
}
void Frames::event_func_20441()
{
    // event 2832_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2832_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2832_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2832_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2832_83_end: ;
}
void Frames::event_func_20442()
{
    // event 2833_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2833_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (3))) goto event_2833_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) < (12))) goto event_2833_83_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+50-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.3);
        }
    }
    event_2833_83_end: ;
}
void Frames::event_func_20443()
{
    // event 2834_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2834_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2834_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2834_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2834_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ma_ma_en_01_ogg_341, 18-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(12));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_2834_83_end: ;
}
void Frames::event_func_20444()
{
    // event 2835_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2835_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2835_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2835_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2835_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 800);
    }
    event_2835_83_end: ;
}
void Frames::event_func_20445()
{
    // event 2836_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2836_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2836_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (300))) goto event_2836_83_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(13));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_2836_83_end: ;
}
void Frames::event_func_20446()
{
    // event 2837_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2837_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2837_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (830))) goto event_2837_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_2837_83_end: ;
}
void Frames::event_func_20447()
{
    // event 2838_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2838_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2838_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2838_83_end: ;
}
void Frames::event_func_20448()
{
    // event 2839_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2839_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2839_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2839_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_y(frame_top()+20);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 213);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 3450);
        ((Active*)get_instance(npcgong_634_instances))->set_x(432);
        ((Active*)get_instance(npcgong_634_instances))->set_y(3528);
        ((Active*)get_instance(npcgong_634_instances))->set_visible(true);
        npcshieldguard_3994_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(136, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(244, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        ((Active*)get_instance(npcdinnerneera_4119_instances))->set_visible(true);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(24);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
        ((Active*)get_instance(npcgong_634_instances))->force_speed(0);
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2839_83_end: ;
}
void Frames::event_func_20449()
{
    // event 2840_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2840_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2840_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 0.5);
    }
    event_2840_83_end: ;
}
void Frames::event_func_20450()
{
    // event 2841_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2841_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2841_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2841_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2841_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ma_ma_en_02_ogg_342, 18-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(14));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_2841_83_end: ;
}
void Frames::event_func_20451()
{
    // event 2842_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2842_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_2842_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2842_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2842_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2842_83_end: ;
}
void Frames::event_func_20452()
{
    // event 2843_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2843_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2843_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+0.5, ((Active*)get_instance(npcdinnerlilac_4106_instances))->get_x()));
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.sub(1, 0.5);
    }
    event_2843_83_end: ;
}
void Frames::event_func_20453()
{
    // event 2844_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2844_83_end;
        if (once_condition_2844_83) goto event_2844_83_end;
        once_condition_2844_83 = true;
        npcdisgruntledservant_4137_instances.clear_selection();
        spread_value(npcdisgruntledservant_4137_instances, 0, 0);
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(0);
        }
    }
    event_2844_83_end: ;
}
void Frames::event_func_20454()
{
    // event 2845_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2845_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+240))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2845_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->restore_speed();
        }
    }
    event_2845_83_end: ;
}
void Frames::event_func_20455()
{
    // event 2846_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2846_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2846_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2846_83_end: ;
}
void Frames::event_func_20456()
{
    // event 2847_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2847_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnertorque_4113_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2847_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_2847_83_end: ;
}
void Frames::event_func_20457()
{
    // event 2848_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2848_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnermilla_4109_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2848_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_2848_83_end: ;
}
void Frames::event_func_20458()
{
    // event 2849_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2849_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnerlilac_4106_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2849_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_2849_83_end: ;
}
void Frames::event_func_20459()
{
    // event 2850_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2850_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnercarol_4112_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2850_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_2850_83_end: ;
}
void Frames::event_func_20460()
{
    // event 2851_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2851_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2851_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_2851_83_end: ;
}
void Frames::event_func_20461()
{
    // event 2852_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2852_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (15))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2852_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_2852_83_end: ;
}
void Frames::event_func_20462()
{
    // event 2853_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2853_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2853_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_2853_83_end: ;
}
void Frames::event_func_20463()
{
    // event 2854_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2854_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (45))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2854_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_2854_83_end: ;
}
void Frames::event_func_20464()
{
    // event 2855_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2855_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (-40))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_2855_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2855_83_end: ;
}
void Frames::event_func_20465()
{
    // event 2856_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2856_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_2856_83_end: ;
}
void Frames::event_func_20466()
{
    // event 2857_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2857_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_2857_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_2857_83_end: ;
}
void Frames::event_func_20467()
{
    // event 2858_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2858_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_2858_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.2);
        }
    }
    event_2858_83_end: ;
}
void Frames::event_func_20468()
{
    // event 2859_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2859_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_2859_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_2859_83_end: ;
}
void Frames::event_func_20469()
{
    // event 2860_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2860_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2860_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2860_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (180))) goto event_2860_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(24+randrange(3));
    }
    event_2860_83_end: ;
}
void Frames::event_func_20470()
{
    // event 2861_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2861_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2861_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_2861_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(1);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
    }
    event_2861_83_end: ;
}
void Frames::event_func_20471()
{
    // event 2862_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2862_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2862_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2862_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_2862_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(21+randrange(3));
    }
    event_2862_83_end: ;
}
void Frames::event_func_20472()
{
    // event 2863_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2863_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2863_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2863_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2863_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (200))) goto event_2863_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(0+randrange(3));
    }
    event_2863_83_end: ;
}
void Frames::event_func_20473()
{
    // event 2864_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2864_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2864_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (200))) goto event_2864_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(0);
    }
    event_2864_83_end: ;
}
void Frames::event_func_20474()
{
    // event 2865_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2865_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2865_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (220))) goto event_2865_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(3);
    }
    event_2865_83_end: ;
}
void Frames::event_func_20475()
{
    // event 2866_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2866_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2866_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2866_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (240))) goto event_2866_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (340))) goto event_2866_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(3+randrange(3));
    }
    event_2866_83_end: ;
}
void Frames::event_func_20476()
{
    // event 2867_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2867_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2867_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (340))) goto event_2867_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(3);
    }
    event_2867_83_end: ;
}
void Frames::event_func_20477()
{
    // event 2868_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2868_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2868_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2868_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (280))) goto event_2868_83_end;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(3+randrange(3));
    }
    event_2868_83_end: ;
}
void Frames::event_func_20478()
{
    // event 2869_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2869_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2869_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2869_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (280))) goto event_2869_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (320))) goto event_2869_83_end;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(3+randrange(3));
    }
    event_2869_83_end: ;
}
void Frames::event_func_20479()
{
    // event 2870_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2870_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2870_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2870_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (320))) goto event_2870_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (420))) goto event_2870_83_end;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(21+randrange(3));
    }
    event_2870_83_end: ;
}
void Frames::event_func_20480()
{
    // event 2871_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2871_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2871_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2871_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (420))) goto event_2871_83_end;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(3+randrange(3));
    }
    event_2871_83_end: ;
}
void Frames::event_func_20481()
{
    // event 2872_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2872_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2872_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2872_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (240))) goto event_2872_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->force_frame(6+randrange(3));
    }
    event_2872_83_end: ;
}
void Frames::event_func_20482()
{
    // event 2873_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2873_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2873_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2873_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (240))) goto event_2873_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2873_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->force_frame(9+randrange(3));
    }
    event_2873_83_end: ;
}
void Frames::event_func_20483()
{
    // event 2874_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2874_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2874_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (300))) goto event_2874_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(4);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->restore_frame();
    }
    event_2874_83_end: ;
}
void Frames::event_func_20484()
{
    // event 2875_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2875_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2875_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_2875_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->restore_frame();
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->set_direction(2);
    }
    event_2875_83_end: ;
}
void Frames::event_func_20485()
{
    // event 2876_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2876_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2876_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2876_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (260))) goto event_2876_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(3+randrange(3));
    }
    event_2876_83_end: ;
}
void Frames::event_func_20486()
{
    // event 2877_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2877_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2877_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (260))) goto event_2877_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(12);
    }
    event_2877_83_end: ;
}
void Frames::event_func_20487()
{
    // event 2878_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2878_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2878_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2878_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (260))) goto event_2878_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (360))) goto event_2878_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(6+randrange(3));
    }
    event_2878_83_end: ;
}
void Frames::event_func_20488()
{
    // event 2879_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2879_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2879_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_2879_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->restore_frame();
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(2);
    }
    event_2879_83_end: ;
}
void Frames::event_func_20489()
{
    // event 2880_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2880_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2880_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (230))) goto event_2880_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(4);
    }
    event_2880_83_end: ;
}
void Frames::event_func_20490()
{
    // event 2881_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2881_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2881_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2881_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (230))) goto event_2881_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_2881_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->force_frame(0+randrange(3));
    }
    event_2881_83_end: ;
}
void Frames::event_func_20491()
{
    // event 2882_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2882_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2882_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2882_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_2882_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (330))) goto event_2882_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->force_frame(3+randrange(3));
    }
    event_2882_83_end: ;
}
void Frames::event_func_20492()
{
    // event 2883_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2883_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2883_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_2883_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->restore_frame();
    }
    event_2883_83_end: ;
}
void Frames::event_func_20493()
{
    // event 2884_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2884_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2884_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (400))) goto event_2884_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_2884_83_end: ;
}
void Frames::event_func_20494()
{
    // event 2885_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2885_83_end;
        if (!(((Active*)get_instance(npcdinnerlilac_4106_instances))->test_directions(4))) goto event_2885_83_end;
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->force_frame(((Active*)get_instance(npcdinnerlilac_4106_instances))->get_frame());
    }
    event_2885_83_end: ;
}
void Frames::event_func_20495()
{
    // event 2886_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2886_83_end;
        if (!(((Active*)get_instance(npcdinnercarol_4112_instances))->test_directions(4))) goto event_2886_83_end;
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->force_frame(((Active*)get_instance(npcdinnercarol_4112_instances))->get_frame());
    }
    event_2886_83_end: ;
}
void Frames::event_func_20496()
{
    // event 2887_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2887_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2887_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2887_83_end: ;
}
void Frames::event_func_20497()
{
    // event 2888_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2888_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_2888_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2888_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_y(frame_top()+20);
        ((Active*)get_instance(npcgong_634_instances))->set_x(432);
        ((Active*)get_instance(npcgong_634_instances))->set_y(3528);
        ((Active*)get_instance(npcgong_634_instances))->set_visible(true);
        npcshieldguard_3994_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(136, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(244, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        ((Active*)get_instance(npcdinnerneera_4119_instances))->set_visible(true);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 900);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1590);
    }
    event_2888_83_end: ;
}
void Frames::event_func_20498()
{
    // event 2889_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2889_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2889_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 0.5);
    }
    event_2889_83_end: ;
}
void Frames::event_func_20499()
{
    // event 2890_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2890_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2890_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2890_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2890_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ma_ma_en_03_ogg_343, 18-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(15));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc2_4096_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc2_4096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        kingdomstonebig_4102_instances.clear_selection();
        for (ObjectIterator it(kingdomstonebig_4102_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2890_83_end: ;
}
void Frames::event_func_20500()
{
    // event 2891_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2891_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2891_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2891_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2891_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc2_4096_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc2_4096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        kingdomstonebig_4102_instances.clear_selection();
        for (ObjectIterator it(kingdomstonebig_4102_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2891_83_end: ;
}
void Frames::event_func_20501()
{
    // event 2892_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2892_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2892_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 0.5);
    }
    event_2892_83_end: ;
}
void Frames::event_func_20502()
{
    // event 2893_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2893_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (10))) goto event_2893_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (11))) goto event_2893_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_2893_83_end: ;
}
void Frames::event_func_20503()
{
    // event 2894_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2894_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2894_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (150))) goto event_2894_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_2894_83_end;
        effectshade_356_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectshade_356(0, 1568), 3);
            effectshade_356_instances.add_back();
        }
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-30);
            ((Active*)*it)->set_y(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*20)*40);
            ((Active*)*it)->alterables->values.set(5, 89);
        }
    }
    event_2894_83_end: ;
}
void Frames::event_func_20504()
{
    // event 2895_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2895_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2895_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_2895_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (390))) goto event_2895_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2895_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 390);
    }
    event_2895_83_end: ;
}
void Frames::event_func_20505()
{
    // event 2896_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2896_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2896_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (390))) goto event_2896_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (580))) goto event_2896_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%15) == (3))) goto event_2896_83_end;
        npcsgmerc_4021_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcsgmerc_4021(688, 1639), 3);
            npcsgmerc_4021_instances.add_back();
        }
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35+sin_deg(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*56)*4);
            ((Active*)*it)->set_x(frame_left()-60);
            ((Active*)*it)->alterables->values.set(5, 5+sin_deg(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*56)*1.2);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2896_83_end: ;
}
void Frames::event_func_20506()
{
    // event 2897_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2897_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2897_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (580))) goto event_2897_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2897_83_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(16));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        media.play(str_data_voices_88+global_strings->get(11)+str_ma_ma_en_04_ogg_344, 18-1);
    }
    event_2897_83_end: ;
}
void Frames::event_func_20507()
{
    // event 2898_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2898_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2898_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (580))) goto event_2898_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2898_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
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
    event_2898_83_end: ;
}
void Frames::event_func_20508()
{
    // event 2899_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2899_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_2899_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (1200))) goto event_2899_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
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
    event_2899_83_end: ;
}
void Frames::event_func_20509()
{
    // event 2900_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2900_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2900_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2900_83_end: ;
}
void Frames::event_func_20510()
{
    // event 2901_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2901_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2901_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2901_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_y(frame_top()+20);
        npcshieldguard_3994_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(136, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npcshieldguard_4024(244, 3528), 3);
            npcshieldguard_3994_instances.add_back();
        }
        ((Active*)get_instance(npcdinnerneera_4119_instances))->set_visible(true);
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 500);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 2508);
    }
    event_2901_83_end: ;
}
void Frames::event_func_20511()
{
    // event 2902_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2902_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2902_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 0.5);
    }
    event_2902_83_end: ;
}
void Frames::event_func_20512()
{
    // event 2903_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2903_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2903_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2903_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2903_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ma_ma_en_05_ogg_345, 18-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(17));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2903_83_end: ;
}
void Frames::event_func_20513()
{
    // event 2904_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2904_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_2904_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2904_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2904_83_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 550);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2904_83_end: ;
}
void Frames::event_func_20514()
{
    // event 2905_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2905_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_2905_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (540))) goto event_2905_83_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(18));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_2905_83_end: ;
}
void Frames::event_func_20515()
{
    // event 2906_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2906_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_2906_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (720))) goto event_2906_83_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_fadeout_music_4000_162);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2906_83_end: ;
}
void Frames::event_func_20516()
{
    // event 2907_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2907_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2907_83_end;
        if (not_always_2907_83 > loop_count) {
            not_always_2907_83 = loop_count + 2;
            goto event_2907_83_end;
        }
        not_always_2907_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->move_front();
    }
    event_2907_83_end: ;
}
void Frames::event_func_20517()
{
    // event 2908_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2908_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2908_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 0.5);
        }
    }
    event_2908_83_end: ;
}
void Frames::event_func_20518()
{
    // event 2909_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2909_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2909_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (200))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2909_83_end;
        if (not_always_2909_83 > loop_count) {
            not_always_2909_83 = loop_count + 2;
            goto event_2909_83_end;
        }
        not_always_2909_83 = loop_count + 2;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
    }
    event_2909_83_end: ;
}
void Frames::event_func_20519()
{
    // event 2910_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2910_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2910_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (256))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2910_83_end;
        if (!((global_values->get(0)) != (1))) goto event_2910_83_end;
        global_values->set(4, 14);
        next_frame = 15 + 0;    
    
        media.stop_samples();
    }
    event_2910_83_end: ;
}
void Frames::event_func_20520()
{
    // event 2911_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_2911_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_2911_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (180))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2911_83_end;
        if (!((global_values->get(0)) == (1))) goto event_2911_83_end;
        next_frame = 86 + 0;    
    
        media.stop_samples();
    }
    event_2911_83_end: ;
}
