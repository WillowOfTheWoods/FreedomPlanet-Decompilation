#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7808()
{
    // event 1807_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1807_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (320))) goto event_1807_33_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(16);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1807_33_end: ;
}
void Frames::event_func_7809()
{
    // event 1808_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1808_33_end;
        set_display_center(-1, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-120+randrange(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1808_33_end: ;
}
void Frames::event_func_7810()
{
    // event 1809_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1809_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (360))) goto event_1809_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(10, frame_left()-700);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_visible(true);
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_visible(true);
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_visible(true);
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_visible(true);
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_visible(true);
    }
    event_1809_33_end: ;
}
void Frames::event_func_7811()
{
    // event 1810_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1810_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) > (360))) goto event_1810_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(1)) == (0))) goto event_1810_33_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) < (frame_left()-50))) goto event_1810_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 16-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*16);
    }
    event_1810_33_end: ;
}
void Frames::event_func_7812()
{
    // event 1811_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1811_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) > (100))) goto event_1811_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) < (360))) goto event_1811_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+0.2, 10));
    }
    event_1811_33_end: ;
}
void Frames::event_func_7813()
{
    // event 1812_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1812_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (280))) goto event_1812_33_end;
        if (once_condition_1812_33) goto event_1812_33_end;
        once_condition_1812_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1812_33_end: ;
}
void Frames::event_func_7814()
{
    // event 1813_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1813_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (320))) goto event_1813_33_end;
        if (once_condition_1813_33) goto event_1813_33_end;
        once_condition_1813_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1813_33_end: ;
}
void Frames::event_func_7815()
{
    // event 1814_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1814_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (330))) goto event_1814_33_end;
        if (once_condition_1814_33) goto event_1814_33_end;
        once_condition_1814_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1814_33_end: ;
}
void Frames::event_func_7816()
{
    // event 1815_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1815_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (340))) goto event_1815_33_end;
        if (once_condition_1815_33) goto event_1815_33_end;
        once_condition_1815_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1815_33_end: ;
}
void Frames::event_func_7817()
{
    // event 1816_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1816_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (350))) goto event_1816_33_end;
        if (once_condition_1816_33) goto event_1816_33_end;
        once_condition_1816_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1816_33_end: ;
}
void Frames::event_func_7818()
{
    // event 1817_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1817_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (360))) goto event_1817_33_end;
        if (once_condition_1817_33) goto event_1817_33_end;
        once_condition_1817_33 = true;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
    }
    event_1817_33_end: ;
}
void Frames::event_func_7819()
{
    // event 1818_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1818_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) > (360))) goto event_1818_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(1)) == (0))) goto event_1818_33_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) >= (frame_left()-50))) goto event_1818_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)) < (1))) goto event_1818_33_end;
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.add(0, 0.025);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(11, 0.25);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, 8-((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)*8);
    }
    event_1818_33_end: ;
}
void Frames::event_func_7820()
{
    // event 1819_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1819_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) > (360))) goto event_1819_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(1)) == (0))) goto event_1819_33_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)) >= (frame_left()-50))) goto event_1819_33_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13)) > (0))) goto event_1819_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.sub(13, 0.25);
    }
    event_1819_33_end: ;
}
void Frames::event_func_7821()
{
    // event 1820_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1820_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (380))) goto event_1820_33_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(10);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(10);
        }
    }
    event_1820_33_end: ;
}
void Frames::event_func_7822()
{
    // event 1821_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1821_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (440))) goto event_1821_33_end;
        if (not_always_1821_33 > loop_count) {
            not_always_1821_33 = loop_count + 2;
            goto event_1821_33_end;
        }
        not_always_1821_33 = loop_count + 2;
        media.play_id(SOUND_SERP_MADLAUGH_193, -1, 1);
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_direction(2);
    }
    event_1821_33_end: ;
}
void Frames::event_func_7823()
{
    // event 1822_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1822_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (400))) goto event_1822_33_end;
        if (not_always_1822_33 > loop_count) {
            not_always_1822_33 = loop_count + 2;
            goto event_1822_33_end;
        }
        not_always_1822_33 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1822_33_end: ;
}
void Frames::event_func_7824()
{
    // event 1823_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1823_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (490))) goto event_1823_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1823_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1823_33_end: ;
}
void Frames::event_func_7825()
{
    // event 1824_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1824_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (484))) goto event_1824_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1824_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->alterables->flags.enable(8);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
        FrameObject * single_instance_1824_33_0; single_instance_1824_33_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1824_33_0 == NULL)
                    single_instance_1824_33_0 = new_obj;
            }
        }
        global_values->set(1, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
    }
    event_1824_33_end: ;
}
void Frames::event_func_7826()
{
    // event 1825_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1825_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) >= (484))) goto event_1825_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1825_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1825_33_end;
        if (once_condition_1825_33) goto event_1825_33_end;
        once_condition_1825_33 = true;
        FrameObject * single_instance_1825_33_0; single_instance_1825_33_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1825_33_0 == NULL)
                    single_instance_1825_33_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1825_33_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_1825_33_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 2);
    }
    event_1825_33_end: ;
}
void Frames::event_func_7827()
{
    // event 1826_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1826_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) >= (484))) goto event_1826_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1826_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 0.1);
    }
    event_1826_33_end: ;
}
void Frames::event_func_7828()
{
    // event 1827_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1827_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (484))) goto event_1827_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1827_33_end: ;
}
void Frames::event_func_7829()
{
    // event 1828_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1828_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) >= (484))) goto event_1828_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-4, -100));
    }
    event_1828_33_end: ;
}
void Frames::event_func_7830()
{
    // event 1829_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1829_33_end;
        if (!((((Active*)get_instance(ship2_1985_instances))->alterables->values.get(1)) == (520))) goto event_1829_33_end;
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.set(1, 1);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(13, 3);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(12, 90);
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_direction(0);
    }
    event_1829_33_end: ;
}
void Frames::event_func_7831()
{
    // event 1830_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1830_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(1)) == (1))) goto event_1830_33_end;
        if (!((((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13)) < (15))) goto event_1830_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(13, 0.2);
    }
    event_1830_33_end: ;
}
void Frames::event_func_7832()
{
    // event 1831_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1)) goto event_1831_33_end;
        if (!((((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(1)) == (1))) goto event_1831_33_end;
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.add(10, ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(13));
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosspanthershoulderf2_1999_instances))->alterables->values.get(0)-0.05, 0));
    }
    event_1831_33_end: ;
}
void Frames::event_func_7833()
{
    // event 1849_33
    {
        if (!(group_main_engine_1)) goto event_1849_33_end;
        if (!((global_values->get(4)) < (2))) goto event_1849_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8430))) goto event_1849_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (9430))) goto event_1849_33_end;
        global_values->set(4, 2);
        global_values->set(5, 8430);
        global_values->set(6, 608);
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
    event_1849_33_end: ;
}
void Frames::event_func_7834()
{
    // event 1850_33
    {
        if (!(group_main_engine_1)) goto event_1850_33_end;
        if (!((global_values->get(4)) < (3))) goto event_1850_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10560))) goto event_1850_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (11560))) goto event_1850_33_end;
        global_values->set(4, 3);
        global_values->set(5, 10880);
        global_values->set(6, 560);
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
    event_1850_33_end: ;
}
void Frames::event_func_7835()
{
    // event 1851_33
    {
        if (!(group_main_engine_1)) goto event_1851_33_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1851_33_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_x()) > (((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->get_x()-240))) goto event_1851_33_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_x()) < (((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->get_x()+240))) goto event_1851_33_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_y()) > (((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->get_y()))) goto event_1851_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1851_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1851_33_end;
        if (!((global_values->get(4)) < (3))) goto event_1851_33_end;
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_23();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_1 = true;
        }
    }
    event_1851_33_end: ;
}
void Frames::event_func_7836()
{
    // event 1854_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1854_33_end;
        if (once_condition_1854_33) goto event_1854_33_end;
        once_condition_1854_33 = true;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->get_x());
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->set_visible(true);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->set_visible(true);
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->set_visible(true);
    }
    event_1854_33_end: ;
}
void Frames::event_func_7837()
{
    // event 1855_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1855_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1855_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 336);
    }
    event_1855_33_end: ;
}
void Frames::event_func_7838()
{
    // event 1856_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1856_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3)))) goto event_1856_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(3));
    }
    event_1856_33_end: ;
}
void Frames::event_func_7839()
{
    // event 1857_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1857_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(8))*8);
        }
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->set_angle(((Active*)get_instance(minibosssamuwheel_1873_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->alterables->values.set(0, (((Active*)get_instance(minibosssamuwheel_1873_instances))->alterables->values.get(0)+12)%math_helper%360);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3)+((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(8)-60)*8);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3)+((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(8)-60)*8);
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(8))*8);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->set_angle(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2), 0);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->set_angle(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2), 0);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(9), 0);
        }
        ((Active*)get_instance(bossgate_1878_instances))->move_back();
    }
    event_1857_33_end: ;
}
void Frames::event_func_7840()
{
    // event 1861_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1861_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(8))*-10+((Active*)get_instance(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(5)*-2.5);
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(5)*-2.5);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*-56+sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*-56+cos_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(8))*10+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(5)*-2.5);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*56+sin_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*56+cos_deg(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(9))*40);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+8)%math_helper%360);
        }
    }
    event_1861_33_end: ;
}
void Frames::event_func_7841()
{
    // event 1869_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1869_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1869_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 8);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1 = true;
        }
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+120);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1869_33_end: ;
}
void Frames::event_func_7842()
{
    // event 1870_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1870_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1870_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1 = true;
        }
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+120);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1870_33_end: ;
}
void Frames::event_func_7843()
{
    // event 1871_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1)) goto event_1871_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1871_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 10);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = true;
        }
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_x(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_y(((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(4)+120);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1871_33_end: ;
}
void Frames::event_func_7844()
{
    // event 1873_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1873_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)) < (0))) goto event_1873_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+0.2, 0));
    }
    event_1873_33_end: ;
}
void Frames::event_func_7845()
{
    // event 1874_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1874_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)) > (0))) goto event_1874_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_1874_33_end: ;
}
void Frames::event_func_7846()
{
    // event 1875_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1875_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)) < (0))) goto event_1875_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+0.2, 0));
    }
    event_1875_33_end: ;
}
void Frames::event_func_7847()
{
    // event 1876_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1876_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)) > (0))) goto event_1876_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_1876_33_end: ;
}
void Frames::event_func_7848()
{
    // event 1877_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1877_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1877_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)-4, -40));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1877_33_end: ;
}
void Frames::event_func_7849()
{
    // event 1878_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1878_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) < (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1878_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)-4, -40));
    }
    event_1878_33_end: ;
}
void Frames::event_func_7850()
{
    // event 1883_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1883_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1883_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)) > (-40))) goto event_1883_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)+16, 72));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)-4, -40));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.enable(1);
    }
    event_1883_33_end: ;
}
void Frames::event_func_7851()
{
    // event 1884_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1884_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1884_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)) > (-40))) goto event_1884_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)+16, 72));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)-4, -40));
    }
    event_1884_33_end: ;
}
void Frames::event_func_7852()
{
    // event 1885_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1885_33_end;
        minibosssamulefthand_1874_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, breakablefloor2_1761_instances)) goto event_1885_33_end;
        if (!(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.is_on(1))) goto event_1885_33_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1885_33_end: ;
}
void Frames::event_func_7853()
{
    // event 1886_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1886_33_end;
        minibosssamulefthand_1874_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, breakablefloor1_1760_instances)) goto event_1886_33_end;
        if (!(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.is_on(1))) goto event_1886_33_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1886_33_end: ;
}
void Frames::event_func_7854()
{
    // event 1887_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1887_33_end;
        minibosssamulefthand_1874_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosssamulefthand_1874_instances, playercharactersensor_383_instances)) goto event_1887_33_end;
        if (!(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.is_on(1))) goto event_1887_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()))) goto event_1887_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1887_33_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1887_33_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-8);
    }
    event_1887_33_end: ;
}
void Frames::event_func_7855()
{
    // event 1888_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1888_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1888_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)) > (0))) goto event_1888_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1888_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(0)+5, -30));
    }
    event_1888_33_end: ;
}
void Frames::event_func_7856()
{
    // event 1889_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1889_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1889_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)) > (0))) goto event_1889_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1889_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(0)-5, 30));
    }
    event_1889_33_end: ;
}
void Frames::event_func_7857()
{
    // event 1890_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1890_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1890_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.disable(1);
    }
    event_1890_33_end: ;
}
void Frames::event_func_7858()
{
    // event 1892_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1892_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1892_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)) > (-40))) goto event_1892_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)-8, -40));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(0)-4, -56));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)+16, 72));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.enable(1);
    }
    event_1892_33_end: ;
}
void Frames::event_func_7859()
{
    // event 1893_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1893_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1893_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)) > (-40))) goto event_1893_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+4);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)+16, 72));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)-8, -40));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(0)+4, 56));
    }
    event_1893_33_end: ;
}
void Frames::event_func_7860()
{
    // event 1894_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1894_33_end;
        minibosssamurighthand_1875_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, breakablefloor2_1761_instances)) goto event_1894_33_end;
        if (!(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.is_on(1))) goto event_1894_33_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1894_33_end: ;
}
void Frames::event_func_7861()
{
    // event 1895_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1895_33_end;
        minibosssamurighthand_1875_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, breakablefloor1_1760_instances)) goto event_1895_33_end;
        if (!(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.is_on(1))) goto event_1895_33_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1895_33_end: ;
}
void Frames::event_func_7862()
{
    // event 1896_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1896_33_end;
        minibosssamurighthand_1875_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosssamurighthand_1875_instances, playercharactersensor_383_instances)) goto event_1896_33_end;
        if (!(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.is_on(1))) goto event_1896_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()))) goto event_1896_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1896_33_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1896_33_end;
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-8);
    }
    event_1896_33_end: ;
}
void Frames::event_func_7863()
{
    // event 1897_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1897_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1897_33_end;
        if (!((((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)) > (0))) goto event_1897_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1897_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(0)-5, 30));
    }
    event_1897_33_end: ;
}
void Frames::event_func_7864()
{
    // event 1898_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1898_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (90))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1898_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)) > (0))) goto event_1898_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1898_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(0)+5, -30));
    }
    event_1898_33_end: ;
}
void Frames::event_func_7865()
{
    // event 1899_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1899_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1899_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)-4, 40));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(0)+4, 56));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 6);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)+10, 40));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.disable(1);
    }
    event_1899_33_end: ;
}
void Frames::event_func_7866()
{
    // event 1900_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_1900_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1900_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 6);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(1)-4, 40));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(0)-4, -56));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(1)+10, 40));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->flags.disable(1);
    }
    event_1900_33_end: ;
}
void Frames::event_func_7867()
{
    // event 1903_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1903_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1903_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 135));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), -135));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1903_33_end: ;
}
void Frames::event_func_7868()
{
    // event 1904_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1904_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1904_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)) >= (135))) goto event_1904_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1904_33_end: ;
}
void Frames::event_func_7869()
{
    // event 1906_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1906_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1906_33_end;
        FrameObject * single_instance_1906_33_0; single_instance_1906_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1906_33_0 == NULL)
                    single_instance_1906_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1906_33_1; single_instance_1906_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1906_33_1 == NULL)
                    single_instance_1906_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1906_33_1))->set_angle(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1906_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1906_33_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_1906_33_0))->set_direction(8);
    }
    event_1906_33_end: ;
}
void Frames::event_func_7870()
{
    // event 1907_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1907_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1907_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1907_33_0; single_instance_1907_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1907_33_0 == NULL)
                    single_instance_1907_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1907_33_1; single_instance_1907_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1907_33_1 == NULL)
                    single_instance_1907_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1907_33_1))->set_angle(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1907_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_1907_33_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_1907_33_0))->set_direction(24);
    }
    event_1907_33_end: ;
}
void Frames::event_func_7871()
{
    // event 1908_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1908_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1908_33_end;
        FrameObject * single_instance_1908_33_0; single_instance_1908_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1908_33_0 == NULL)
                    single_instance_1908_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1908_33_1; single_instance_1908_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1908_33_1 == NULL)
                    single_instance_1908_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1908_33_1))->set_angle(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1908_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1908_33_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_1908_33_0))->set_direction(8);
    }
    event_1908_33_end: ;
}
void Frames::event_func_7872()
{
    // event 1909_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1909_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1909_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1909_33_0; single_instance_1909_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1909_33_0 == NULL)
                    single_instance_1909_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1909_33_1; single_instance_1909_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1909_33_1 == NULL)
                    single_instance_1909_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1909_33_1))->set_angle(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1909_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_1909_33_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_1909_33_0))->set_direction(24);
    }
    event_1909_33_end: ;
}
void Frames::event_func_7873()
{
    // event 1910_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1910_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (21))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1910_33_end;
        FrameObject * single_instance_1910_33_0; single_instance_1910_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1910_33_0 == NULL)
                    single_instance_1910_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1910_33_1; single_instance_1910_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamulefthand_1874_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1910_33_1 == NULL)
                    single_instance_1910_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1910_33_1))->set_angle(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1910_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1910_33_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_1910_33_0))->set_direction(8);
    }
    event_1910_33_end: ;
}
void Frames::event_func_7874()
{
    // event 1911_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1911_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (21))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1911_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1911_33_0; single_instance_1911_33_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1911_33_0 == NULL)
                    single_instance_1911_33_0 = new_obj;
            }
        }
        FrameObject * single_instance_1911_33_1; single_instance_1911_33_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosssamurighthand_1875_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1911_33_1 == NULL)
                    single_instance_1911_33_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1911_33_1))->set_angle(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_1911_33_0))->alterables->values.set(1, ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_1911_33_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_1911_33_0))->set_direction(24);
    }
    event_1911_33_end: ;
}
void Frames::event_func_7875()
{
    // event 1913_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1913_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1913_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 0));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 0));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1913_33_end: ;
}
void Frames::event_func_7876()
{
    // event 1914_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_1914_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1914_33_end;
        if (!((((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)) <= (0))) goto event_1914_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = true;
        }
    }
    event_1914_33_end: ;
}
void Frames::event_func_7877()
{
    // event 1918_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_1918_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1918_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), -90));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10)*0.25);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
    }
    event_1918_33_end: ;
}
void Frames::event_func_7878()
{
    // event 1919_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_1919_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1919_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 90));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10)*0.25);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
    }
    event_1919_33_end: ;
}
void Frames::event_func_7879()
{
    // event 1923_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_1923_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1923_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        ((Active*)get_instance(minibosssamuwheel_1873_instances))->alterables->values.add(0, 4);
    }
    event_1923_33_end: ;
}
void Frames::event_func_7880()
{
    // event 1931_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_1931_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1931_33_end;
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 0));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_min(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10)*0.25, 0));
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
    }
    event_1931_33_end: ;
}
void Frames::event_func_7881()
{
    // event 1932_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_1932_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1932_33_end;
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10), 0));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, get_max(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, default_active_instance))->alterables->values.get(10)*0.25, 0));
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, cos_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, sin_deg(0-((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.get(2)*0.75)*40);
    }
    event_1932_33_end: ;
}
void Frames::event_func_7882()
{
    // event 1934_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1934_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1934_33_end;
        if (not_always_1934_33 > loop_count) {
            not_always_1934_33 = loop_count + 2;
            goto event_1934_33_end;
        }
        not_always_1934_33 = loop_count + 2;
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1 = true;
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->force_animation(8);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->force_animation(8);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(0, -56);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(1, -20);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(0, 56);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(1, -20);
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->alterables->values.set(2, -45);
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->alterables->values.set(2, 45);
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1934_33_end: ;
}
void Frames::event_func_7883()
{
    // event 1938_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1938_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (26))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1938_33_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.2, -12));
        }
    }
    event_1938_33_end: ;
}
void Frames::event_func_7884()
{
    // event 1941_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1941_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1941_33_end;
        ((Active*)get_instance(bossgate_1878_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(bossgate_1878_instances))->set_y(((Active*)get_instance(bossgate_1878_instances))->get_y()-4);
    }
    event_1941_33_end: ;
}
void Frames::event_func_7885()
{
    // event 1942_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1942_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1942_33_end;
        if (!((((Active*)get_instance(bossgate_1878_instances))->alterables->values.get(0)) >= (24))) goto event_1942_33_end;
        if (once_condition_1942_33) goto event_1942_33_end;
        once_condition_1942_33 = true;
        enemysuperturretus_1828_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysuperturretus_1828(10813, 509), 3);
            enemysuperturretus_1828_instances.add_back();
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
    }
    event_1942_33_end: ;
}
void Frames::event_func_7886()
{
    // event 1943_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1943_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1943_33_end;
        if (!((((Active*)get_instance(bossgate_1878_instances))->alterables->values.get(0)) >= (48))) goto event_1943_33_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        enemysuperturretus_1828_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysuperturretus_1828(10931, 550), 3);
            enemysuperturretus_1828_instances.add_back();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
    }
    event_1943_33_end: ;
}
void Frames::event_func_7887()
{
    // event 1944_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1944_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1944_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
    }
    event_1944_33_end: ;
}
void Frames::event_func_7888()
{
    // event 1945_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1945_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1945_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (240))) goto event_1945_33_end;
        if (not_always_1945_33 > loop_count) {
            not_always_1945_33 = loop_count + 2;
            goto event_1945_33_end;
        }
        not_always_1945_33 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, frame_bottom());
    }
    event_1945_33_end: ;
}
void Frames::event_func_7889()
{
    // event 1946_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_1946_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_1946_33_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (240))) goto event_1946_33_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-2, 240));
    }
    event_1946_33_end: ;
}
void Frames::event_func_7890()
{
    // event 1947_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1947_33_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->get_y()-140);
        }
    }
    event_1947_33_end: ;
}
void Frames::event_func_7891()
{
    // event 1949_33
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_1949_33_end;
        minibosssamufloorcheck_1877_instances.clear_selection();
        if (!check_not_overlap(minibosssamufloorcheck_1877_instances, qualifier_7)) goto event_1949_33_end;
        if (((Active*)get_instance(minibosssamufloorcheck_1877_instances))->overlaps_background()) goto event_1949_33_end;
        ((Active*)get_instance(minibosssamufloorcheck_1877_instances))->set_y(((Active*)get_instance(minibosssamufloorcheck_1877_instances))->get_y()+2);
    }
    event_1949_33_end: ;
}
void Frames::event_func_7892()
{
    // event 2165_33
    {
        if (!(group_pause_1)) goto event_2165_33_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2165_33_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2165_33_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2165_33_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2165_33_end;
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
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectparasol_1959_instances.clear_selection();
        for (ObjectIterator it(objectparasol_1959_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->stop_animation();
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->stop_animation();
        objectdiscoball_1955_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball_1955_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectdiscoball2_1956_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball2_1956_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2165_33_end: ;
}
void Frames::event_func_7893()
{
    // event 2166_33
    bool or_result_2166_33 = false;
    bool or_temp_result_2166_33_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2166_33_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2166_33_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2166_33_0_end;
        or_result_2166_33 = true;
        or_temp_result_2166_33_0 = true;
    }
    or_event_2166_33_0_end: ;
    // event 2166_33
    bool or_temp_result_2166_33_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2166_33_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2166_33_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2166_33_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2166_33_1_end;
        or_result_2166_33 = true;
        or_temp_result_2166_33_1 = true;
        or_event_2166_33_1_end: ;
        if (!or_result_2166_33) goto or_final_or_event_2166_33_1_end;
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
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        effectgunspark_1836_instances.clear_selection();
        for (ObjectIterator it(effectgunspark_1836_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectparasol_1959_instances.clear_selection();
        for (ObjectIterator it(objectparasol_1959_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(minibosssamurighthand_1875_instances))->start_animation();
        ((Active*)get_instance(minibosssamulefthand_1874_instances))->start_animation();
        objectdiscoball_1955_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball_1955_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectdiscoball2_1956_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball2_1956_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2166_33_1_end: ;
}
void Frames::handle_frame_34_events()
{
    test_collisions_33();
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
    event_func_6749();
    event_func_6752();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_7530();
    event_func_7531();
    event_func_7532();
    event_func_7533();
    event_func_7534();
    event_func_7535();
    event_func_7536();
    event_func_7537();
    event_func_7538();
    event_func_7539();
    event_func_5399();
    event_func_7601();
    event_func_5401();
    event_func_7096();
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
    event_func_7540();
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
    event_func_6649();
    event_func_6650();
    event_func_6651();
    event_func_2774();
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
    event_func_7541();
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
    event_func_7542();
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
    event_func_7543();
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
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_6059();
    event_func_4748();
    event_func_7744();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
    event_func_7551();
    event_func_7552();
    event_func_7553();
    event_func_7554();
    event_func_7555();
    event_func_7556();
    event_func_7557();
    event_func_7558();
    event_func_7559();
    event_func_7560();
    event_func_7561();
    event_func_7562();
    event_func_7563();
    event_func_7564();
    event_func_7565();
    event_func_7566();
    event_func_7745();
    event_func_6680();
    event_func_7746();
    event_func_6682();
    event_func_6683();
    event_func_6684();
    event_func_6685();
    event_func_6686();
    event_func_6687();
    event_func_6688();
    event_func_7747();
    event_func_7748();
    event_func_6691();
    event_func_6692();
    event_func_7568();
    event_func_7569();
    event_func_7570();
    event_func_7571();
    event_func_7572();
    event_func_7573();
    event_func_4152();
    event_func_5214();
    event_func_7574();
    event_func_7575();
    event_func_7576();
    event_func_7577();
    event_func_7578();
    event_func_6996();
    event_func_7579();
    event_func_6666();
    event_func_7749();
    event_func_7750();
    event_func_7580();
    event_func_7581();
    event_func_7582();
    event_func_7583();
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_7584();
    event_func_7751();
    event_func_7586();
    event_func_7587();
    event_func_7588();
    event_func_7589();
    event_func_7590();
    event_func_7591();
    event_func_7592();
    event_func_7593();
    event_func_7594();
    event_func_7595();
    event_func_7596();
    event_func_7597();
    event_func_7598();
    event_func_7599();
    event_func_7600();
    event_func_7112();
    event_func_7113();
    event_func_7114();
    event_func_7115();
    event_func_7116();
    event_func_7117();
    event_func_7118();
    event_func_7119();
    event_func_7120();
    event_func_7121();
    event_func_7122();
    event_func_7123();
    event_func_7124();
    event_func_7125();
    event_func_7126();
    event_func_7127();
    event_func_7128();
    event_func_7129();
    event_func_7130();
    event_func_7131();
    event_func_7132();
    event_func_7133();
    event_func_7602();
    event_func_7603();
    event_func_7604();
    event_func_7605();
    event_func_7606();
    event_func_7607();
    event_func_7608();
    event_func_7609();
    event_func_7610();
    event_func_7611();
    event_func_7752();
    event_func_7753();
    event_func_7616();
    event_func_7617();
    event_func_7618();
    event_func_7619();
    event_func_7620();
    event_func_7621();
    event_func_7622();
    event_func_7623();
    event_func_7624();
    event_func_7625();
    event_func_7626();
    event_func_7627();
    event_func_7628();
    event_func_7629();
    event_func_7630();
    event_func_7631();
    event_func_7632();
    event_func_7754();
    event_func_7755();
    event_func_7756();
    event_func_7757();
    event_func_7758();
    event_func_7759();
    event_func_7760();
    event_func_7761();
    event_func_7762();
    event_func_7763();
    event_func_7764();
    event_func_7765();
    event_func_7766();
    event_func_7767();
    event_func_7768();
    event_func_7769();
    event_func_7770();
    event_func_7771();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_6740();
    event_func_6741();
    event_func_6742();
    event_func_6743();
    event_func_6744();
    event_func_6745();
    event_func_6746();
    event_func_6747();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_6754();
    event_func_6755();
    event_func_6756();
    event_func_6757();
    event_func_6758();
    event_func_6759();
    event_func_6760();
    event_func_6761();
    event_func_6762();
    event_func_6763();
    event_func_6764();
    event_func_6765();
    event_func_6766();
    event_func_6767();
    event_func_7653();
    event_func_6769();
    event_func_6770();
    event_func_6771();
    event_func_6772();
    event_func_6773();
    event_func_6774();
    event_func_6775();
    event_func_6776();
    event_func_7661();
    event_func_7662();
    event_func_7663();
    event_func_7664();
    event_func_7665();
    event_func_7666();
    event_func_7667();
    event_func_7668();
    event_func_7669();
    event_func_7670();
    event_func_7671();
    event_func_7672();
    event_func_7673();
    event_func_7674();
    event_func_7675();
    event_func_7676();
    event_func_7677();
    event_func_7678();
    event_func_7679();
    event_func_7680();
    event_func_7680();
    event_func_7681();
    event_func_7682();
    event_func_7683();
    event_func_7684();
    event_func_7685();
    event_func_7686();
    event_func_7687();
    event_func_7688();
    event_func_7689();
    event_func_7690();
    event_func_7691();
    event_func_7692();
    event_func_7693();
    event_func_7694();
    event_func_6999();
    event_func_7000();
    event_func_7001();
    event_func_7002();
    event_func_7003();
    event_func_7004();
    event_func_7005();
    event_func_7006();
    event_func_7695();
    event_func_7008();
    event_func_7009();
    event_func_7010();
    event_func_7011();
    event_func_7012();
    event_func_7013();
    event_func_7014();
    event_func_7015();
    event_func_7016();
    event_func_7017();
    event_func_7018();
    event_func_7019();
    event_func_7020();
    event_func_7021();
    event_func_7022();
    event_func_7023();
    event_func_7024();
    event_func_7025();
    event_func_7026();
    event_func_7027();
    event_func_7028();
    event_func_7029();
    event_func_7030();
    event_func_7031();
    event_func_7032();
    event_func_7033();
    event_func_7034();
    event_func_7696();
    event_func_7036();
    event_func_7697();
    event_func_7698();
    event_func_7699();
    event_func_7700();
    event_func_7701();
    event_func_7702();
    event_func_7703();
    event_func_7704();
    event_func_7705();
    event_func_7706();
    event_func_7707();
    event_func_7708();
    event_func_7709();
    event_func_7710();
    event_func_7711();
    event_func_7712();
    event_func_5707();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_3000();
    event_func_7772();
    event_func_7773();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1) goto group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1_end;
    event_func_7774();
    event_func_7775();
    event_func_7776();
    event_func_7777();
    event_func_7778();
    event_func_7779();
    event_func_7780();
    event_func_7781();
    event_func_7782();
    event_func_7783();
    event_func_7784();
    group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1_end: ;
    event_func_7785();
    event_func_7786();
    event_func_7787();
    if (!group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1) goto group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1_end;
    event_func_7788();
    event_func_7789();
    event_func_7790();
    event_func_7791();
    event_func_7792();
    event_func_7793();
    event_func_7794();
    event_func_7795();
    event_func_7796();
    event_func_7797();
    event_func_7798();
    event_func_7799();
    event_func_7800();
    event_func_7801();
    event_func_7802();
    event_func_7803();
    event_func_7804();
    event_func_7805();
    event_func_7806();
    event_func_7807();
    event_func_7808();
    event_func_7809();
    event_func_7810();
    event_func_7811();
    event_func_7812();
    event_func_7813();
    event_func_7814();
    event_func_7815();
    event_func_7816();
    event_func_7817();
    event_func_7818();
    event_func_7819();
    event_func_7820();
    event_func_7821();
    event_func_7822();
    event_func_7823();
    event_func_7824();
    event_func_7825();
    event_func_7826();
    event_func_7827();
    event_func_7828();
    event_func_7829();
    event_func_7830();
    event_func_7831();
    event_func_7832();
    group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1_end: ;
    event_func_7715();
    event_func_7716();
    event_func_7717();
    event_func_7718();
    event_func_7719();
    event_func_7720();
    event_func_7721();
    event_func_7722();
    event_func_7723();
    event_func_7724();
    event_func_7725();
    event_func_7726();
    event_func_7727();
    event_func_7728();
    event_func_7729();
    event_func_7833();
    event_func_7834();
    event_func_7835();
    event_func_5013();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_1_end;
    event_func_7836();
    event_func_7837();
    event_func_7838();
    event_func_7839();
    event_func_7394();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1_end;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1_end;
    event_func_7395();
    event_func_7396();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1_end;
    event_func_7840();
    event_func_7398();
    event_func_7399();
    event_func_7400();
    event_func_7401();
    event_func_7402();
    event_func_7403();
    event_func_7404();
    event_func_7841();
    event_func_7842();
    event_func_7843();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1_end;
    event_func_7408();
    event_func_7844();
    event_func_7845();
    event_func_7846();
    event_func_7847();
    event_func_7848();
    event_func_7849();
    event_func_7415();
    event_func_7416();
    event_func_7417();
    event_func_7418();
    event_func_7850();
    event_func_7851();
    event_func_7852();
    event_func_7853();
    event_func_7854();
    event_func_7855();
    event_func_7856();
    event_func_7857();
    event_func_7427();
    event_func_7858();
    event_func_7859();
    event_func_7860();
    event_func_7861();
    event_func_7862();
    event_func_7863();
    event_func_7864();
    event_func_7865();
    event_func_7866();
    event_func_7437();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1_end;
    event_func_7438();
    event_func_7867();
    event_func_7868();
    event_func_7441();
    event_func_7869();
    event_func_7870();
    event_func_7871();
    event_func_7872();
    event_func_7873();
    event_func_7874();
    event_func_7448();
    event_func_7875();
    event_func_7876();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1_end;
    event_func_7451();
    event_func_7452();
    event_func_7453();
    event_func_7877();
    event_func_7878();
    event_func_7456();
    event_func_7457();
    event_func_7458();
    event_func_7879();
    event_func_7460();
    event_func_7461();
    event_func_7462();
    event_func_7463();
    event_func_7464();
    event_func_7465();
    event_func_7466();
    event_func_7880();
    event_func_7881();
    event_func_7469();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1_end: ;
    event_func_7882();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1_end;
    event_func_7471();
    event_func_7472();
    event_func_7883();
    event_func_7474();
    event_func_7475();
    event_func_7884();
    event_func_7885();
    event_func_7886();
    event_func_7887();
    event_func_7888();
    event_func_7889();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1_end: ;
    event_func_7890();
    event_func_7482();
    event_func_7891();
    event_func_7482();
    event_func_7891();
    group_main_engine_level_specific_methods_bosses_boss_samu_1_end: ;
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_6812();
    event_func_7730();
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
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
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
    event_func_2603();
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
    event_func_7892();
    event_func_7893();
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
void Frames::handle_frame_34_pre_events()
{
}
void Frames::event_func_7894()
{
    // event 17_33
    {
        if (!(group_main_engine_1)) goto event_17_33_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 39);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 16);
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_17_33_end: ;
}
void Frames::event_func_7895()
{
    // event 1490_33
    {
        if (!(group_main_engine_1)) goto event_1490_33_end;
        carousel_1988_instances.clear_selection();
        for (ObjectIterator it(carousel_1988_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        spread_value(carousel_1988_instances, 1, 0);
        for (ObjectIterator it(carousel_1988_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)%math_helper%6)*60);
        }
    }
    event_1490_33_end: ;
}
void Frames::event_func_7896()
{
    // event 1589_33
    {
        if (!(group_main_engine_1)) goto event_1589_33_end;
        gimmickelevator_2020_instances.clear_selection();
        for (ObjectIterator it(gimmickelevator_2020_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        gimmickpolepodcaseinner_2013_instances.clear_selection();
        for (ObjectIterator it(gimmickpolepodcaseinner_2013_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        gimmickelevatordoor_2019_instances.clear_selection();
        for (ObjectIterator it(gimmickelevatordoor_2019_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+32);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(7, 2);
            ((Active*)*it)->alterables->values.set(8, 3);
            ((Active*)*it)->alterables->values.set(10, 0.15);
        }
    }
    event_1589_33_end: ;
}
void Frames::event_func_7897()
{
    // event 1772_33
    {
        if (!(group_main_engine_1)) goto event_1772_33_end;
        ((Active*)get_instance(bosspantherrider_1989_instances))->set_visible(false);
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_visible(false);
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_visible(false);
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_visible(false);
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(10, ((Active*)get_instance(bosspanthershoulderf_1998_instances))->get_x());
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(11, ((Active*)get_single(bosspantherribs_1990_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.set(13, 16);
        spread_value(bosspantherribs_1990_instances, 0, 0);
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(1-(((Active*)*it)->alterables->values.get(0)*0.08));
        }
        spread_value(bosspanthertail_2002_instances, 0, 1);
    }
    event_1772_33_end: ;
}
void Frames::on_frame_34_start_events()
{
    event_func_5881();
    event_func_4133();
    event_func_7894();
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
    event_func_7734();
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
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_7735();
    event_func_6941();
    event_func_7895();
    event_func_7736();
    event_func_7737();
    event_func_7738();
    event_func_7896();
    event_func_7739();
    event_func_7740();
    event_func_7061();
    event_func_7062();
    event_func_7741();
    event_func_2686();
    event_func_2687();
    event_func_7897();
    event_func_7743();
    event_func_6946();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_7063();
    event_func_4145();
    event_func_4146();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_34_init()
{
    index = 33;
    width = 15200;
    height = 1280;
    virtual_width = 15200;
    virtual_height = 1280;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &escalatorleft_1951_instances, &levelwaterplatform_1954_instances, &levelmovingplatform1_1965_instances, &escalatorright_1966_instances, &carouselplatform_2015_instances, NULL};
    qualifier_8.set(18, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &hazardspikesup_558_instances, &escalatorleft_1951_instances, &levelwaterplatform_1954_instances, &turningspring_1960_instances, &levelmovingplatform1_1965_instances, &escalatorright_1966_instances, &carouselplatform_2015_instances, NULL};
    qualifier_9.set(42, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&lamppostfront_1778_instances, &enemycoilhead_1782_instances, &enemyflarecannon_1820_instances, &enemysuperturretus_1828_instances, &minibosssamu_1876_instances, &enemyroller_1943_instances, &enemyballoon_1947_instances, &enemyduster_1958_instances, &enemyghettoshell_1971_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0m_1881_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, &gimmicklanternbridge3_1729_instances, &gimmicklanternbridge4_1730_instances, &gimmicklanternbridge5_1731_instances, &gimmicklanternbridge6_1732_instances, &gimmicklanternbridge7_1733_instances, &gimmicklanternbridge8_1734_instances, &breakablewall_1748_instances, &hazardspikesup_558_instances, &gimmickteetertotter_1827_instances, &keyboard_1940_instances, &turningspring_1960_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &bossgate_1878_instances, &gimmickelevator_2020_instances, NULL};
    qualifier_7.set(42, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidleswitch_1257_instances, &gimmickhangingmovingsensor_1962_instances, &gimmickhangingidleballoon_1973_instances, NULL};
    qualifier_23.set(3, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, &restroommen_1941_instances, &restroomwomen_1942_instances, NULL};
    qualifier_22.set(3, &qualifier_22_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &levelmovingplatform1_1965_instances, NULL};
    qualifier_13.set(6, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0m_1881(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_1882(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_1883(0, 312), 0);
    add_object(create_shipcable2_1979(212, 148), 0);
    add_object(create_ship1_1982(157, 60), 0);
    add_object(create_shipcable_1983(212, 88), 0);
    add_object(create_ship2_1985(211, 56), 0);
    add_background_object(create_mosaicwall1_1886(11776, 64), 2);
    add_background_object(create_mosaicwall1_1886(11648, 64), 2);
    add_background_object(create_ferriswheelbase2_1644(232, 160), 2);
    add_background_object(create_ferriswheelbase2_1644(232, 224), 2);
    add_background_object(create_ferriswheelbase2_1644(232, 288), 2);
    add_background_object(create_rooftop4_1652(12136, 80), 2);
    add_background_object(create_fnredcolumnback_1646(12120, 96), 2);
    add_background_object(create_fnrooftop2_1687(11968, -32), 2);
    add_background_object(create_mallentrance4_1841(11896, 96), 2);
    add_background_object(create_mallentrance4_1841(11896, 0), 2);
    add_background_object(create_mosaicwall1_1886(11520, 64), 2);
    add_background_object(create_mosaicwall1_1886(11392, 64), 2);
    add_background_object(create_carouselbase_1986(8992, 944), 2);
    add_background_object(create_carouselbase_1986(8992, 832), 2);
    add_background_object(create_carouselbase_1986(8992, 720), 2);
    add_background_object(create_carouselbase_1986(8992, 608), 2);
    add_background_object(create_carouselbase_1986(8992, 496), 2);
    add_background_object(create_fnmallglass_1987(10048, 288), 2);
    add_background_object(create_fnmallglass_1987(10048, 416), 2);
    add_background_object(create_fnmallglass_1987(10048, 544), 2);
    add_background_object(create_fnmallglass_1987(10048, 672), 2);
    add_background_object(create_fnmallglass_1987(10048, 800), 2);
    add_background_object(create_fnmallglass_1987(9920, 416), 2);
    add_background_object(create_fnmallglass_1987(9920, 544), 2);
    add_background_object(create_fnmallglass_1987(9920, 672), 2);
    add_background_object(create_fnmallglass_1987(9920, 800), 2);
    add_background_object(create_fnmallglass_1987(10048, 928), 2);
    add_background_object(create_fnmallglass_1987(9920, 928), 2);
    add_background_object(create_fnmallglass_1987(10176, 288), 2);
    add_background_object(create_fnmallglass_1987(10176, 416), 2);
    add_background_object(create_fnmallglass_1987(10176, 544), 2);
    add_background_object(create_fnmallglass_1987(10176, 672), 2);
    add_background_object(create_fnmallglass_1987(10176, 800), 2);
    add_background_object(create_fnmallglass_1987(10176, 928), 2);
    add_background_object(create_fnmallglass_1987(10304, 288), 2);
    add_background_object(create_fnmallglass_1987(10304, 416), 2);
    add_background_object(create_fnmallglass_1987(10304, 544), 2);
    add_background_object(create_fnmallglass_1987(10304, 672), 2);
    add_background_object(create_fnmallglass_1987(10304, 800), 2);
    add_background_object(create_fnmallglass_1987(10304, 928), 2);
    add_background_object(create_fnmallglass_1987(9920, 288), 2);
    add_background_object(create_fnmallglass_1987(9920, 160), 2);
    add_background_object(create_fnmallglass_1987(9920, 32), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 896), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 832), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 512), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 480), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 576), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 544), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 640), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 608), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 704), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 672), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 768), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 736), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 800), 2);
    add_background_object(create_mallscalecolumn1_1888(1904, 864), 2);
    add_object(create_gimmickhangingswitch_1842(6351, 848), 2);
    add_object(create_gachaponwheel_1843(6272, 927), 2);
    add_object(create_arrowlight_1896(232, 280), 2);
    add_object(create_platformstilt1_1892(1736, 920), 2);
    add_object(create_platformstilt2_1893(1847, 920), 2);
    add_object(create_platformstilt3_1894(1847, 936), 2);
    add_object(create_platformstilt4_1895(1736, 952), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1152), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 1040), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 928), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 816), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 704), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 592), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 480), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_carousel_1988(248, 368), 2);
    add_object(create_platformstilt1_1892(1864, 920), 2);
    add_object(create_platformstilt2_1893(1975, 920), 2);
    add_object(create_platformstilt3_1894(1975, 936), 2);
    add_object(create_platformstilt4_1895(1864, 952), 2);
    add_object(create_platformstilt1_1892(1992, 920), 2);
    add_object(create_platformstilt2_1893(2103, 920), 2);
    add_object(create_platformstilt3_1894(2103, 936), 2);
    add_object(create_platformstilt4_1895(1992, 952), 2);
    add_object(create_platformstilt1_1892(2120, 920), 2);
    add_object(create_platformstilt2_1893(2231, 920), 2);
    add_object(create_platformstilt3_1894(2231, 936), 2);
    add_object(create_platformstilt4_1895(2120, 952), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 432), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 544), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 320), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 208), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 768), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(4568, 656), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 800), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_carousel_1988(5432, 704), 2);
    add_object(create_platformstilt1_1892(5576, 1240), 2);
    add_object(create_platformstilt2_1893(5687, 1240), 2);
    add_object(create_platformstilt3_1894(5687, 1256), 2);
    add_object(create_platformstilt4_1895(5576, 1272), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 896), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1008), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5432, 1104), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1024), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_carousel_1988(5128, 1136), 2);
    add_object(create_bosspantherrider_1989(11885, 64), 2);
    add_object(create_bosspantherribs_1990(11698, 96), 2);
    add_object(create_bosspantherribs_1990(11722, 96), 2);
    add_object(create_bosspantherribs_1990(11746, 96), 2);
    add_object(create_bosspantherribs_1990(11770, 96), 2);
    add_object(create_bosspantherribs_1990(11794, 96), 2);
    add_object(create_bosspantherribs_1990(11818, 96), 2);
    add_object(create_bosspantherribs_1990(11842, 96), 2);
    add_object(create_bosspantherfootfl_1991(11704, 216), 2);
    add_object(create_bosspantherhead_1992(11856, 88), 2);
    add_object(create_bosspantherjaw_1993(11927, 109), 2);
    add_object(create_bosspantherfrontcannon_1994(11900, 124), 2);
    add_object(create_bosspantherhipf_1995(11697, 97), 2);
    add_object(create_bosspantherkneef_1996(11702, 145), 2);
    add_object(create_bosspantherlegfl_1997(11673, 185), 2);
    add_object(create_bosspanthershoulderf_1998(11868, 116), 2);
    add_object(create_bosspanthershoulderf2_1999(11875, 128), 2);
    add_object(create_bosspantherfootfr_2000(11864, 216), 2);
    add_object(create_bosspantherlegfr_2001(11832, 172), 2);
    add_object(create_bosspanthertail_2002(12336, -104), 2);
    add_object(create_bosspanthertail_2002(12336, -128), 2);
    add_object(create_bosspanthertail_2002(12336, -152), 2);
    add_object(create_bosspanthertail_2002(12336, -176), 2);
    add_object(create_bosspanthertail_2002(12336, -200), 2);
    add_object(create_bosspanthertail_2002(12336, -224), 2);
    add_object(create_bosspanthervalues_2003(12488, -80), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 768), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 656), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 544), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 432), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 320), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 208), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7512, 96), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 768), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 656), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_carousel_1988(7944, 544), 2);
    add_object(create_paperlantern_527(6352, 784), 2);
    add_object(create_paperlantern_527(6448, 784), 2);
    add_object(create_paperlantern_527(6640, 784), 2);
    add_object(create_paperlantern_527(6160, 784), 2);
    add_object(create_paperlantern_527(6544, 784), 2);
    add_object(create_paperlantern_527(6736, 784), 2);
    add_object(create_paperlantern_527(6304, 784), 2);
    add_object(create_paperlantern_527(6208, 784), 2);
    add_object(create_paperlantern_527(8336, 760), 2);
    add_object(create_paperlantern_527(8288, 760), 2);
    add_object(create_paperlantern_527(8240, 760), 2);
    add_object(create_paperlantern_527(8192, 760), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 960), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 848), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 736), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 624), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_carousel_1988(9088, 512), 2);
    add_object(create_gimmickhangingswitch_1842(9167, 368), 2);
    add_object(create_gachaponwheel_1843(9088, 447), 2);
    add_background_object(create_mosaicwall1_1886(5952, 992), 3);
    add_background_object(create_mosaicwall2_1887(6048, 992), 3);
    add_background_object(create_backdrop_2004(6056, 1024), 3);
    add_background_object(create_backdrop_2004(6056, 896), 3);
    add_background_object(create_backdrop_2004(5768, -24), 3);
    add_background_object(create_fngianttv_1899(9288, 960), 3);
    add_background_object(create_floor30_1707(11048, 480), 3);
    add_background_object(create_mallfloor8_1928(8752, 1008), 3);
    add_background_object(create_carouselbase_1986(7712, 912), 3);
    add_background_object(create_floor31_1708(8608, 750), 3);
    add_background_object(create_floor31_1708(8840, 966), 3);
    add_background_object(create_fnmallglass_1987(8000, 96), 3);
    add_background_object(create_fnmallglass_1987(8128, 96), 3);
    add_background_object(create_fnmallglass_1987(8256, 96), 3);
    add_background_object(create_fnmallglass_1987(8000, 200), 3);
    add_background_object(create_fnmallglass_1987(8128, 160), 3);
    add_background_object(create_fnmallglass_1987(8256, 200), 3);
    add_background_object(create_ferriswheelbase2_1644(6496, 696), 3);
    add_background_object(create_ferriswheelbase2_1644(7136, 696), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 864), 3);
    add_background_object(create_mosaicwall1_1886(2752, 944), 3);
    add_background_object(create_mosaicwall2_1887(2752, 944), 3);
    add_background_object(create_mosaicwall2_1887(2864, 944), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 1072), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 1040), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 1008), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 976), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 944), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 880), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 848), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 784), 3);
    add_background_object(create_mallscalecolumn1_1888(2680, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 1072), 3);
    add_background_object(create_floor31_1708(2624, 990), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 1040), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 1008), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 976), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 944), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 880), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 848), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 784), 3);
    add_background_object(create_mallscalecolumn1_1888(2872, 752), 3);
    add_background_object(create_floor30_1707(2920, 982), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 288), 3);
    add_background_object(create_mallscalecolumn1_1888(8096, 864), 3);
    add_background_object(create_floor31_1708(7192, 784), 3);
    add_background_object(create_quickbackdrop_2005(11904, 224), 3);
    add_background_object(create_riverbridge2_1799(4872, 112), 3);
    add_background_object(create_riverbridge2_1799(4976, 112), 3);
    add_background_object(create_riverbridge7_1801(5120, 120), 3);
    add_background_object(create_riverbridge6_1802(4744, 120), 3);
    add_background_object(create_riverbridgebase3_1808(5096, 152), 3);
    add_background_object(create_riverbridgebase1_1806(4768, 152), 3);
    add_background_object(create_floor33_1674(3256, 240), 3);
    add_background_object(create_floor30_1707(9448, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(5920, 736), 3);
    add_background_object(create_mosaicwall1_1886(7552, 896), 3);
    add_background_object(create_mosaicwall2_1887(7648, 896), 3);
    add_background_object(create_mosaicwall1_1886(7424, 896), 3);
    add_background_object(create_mosaicwall1_1886(7296, 896), 3);
    add_background_object(create_mosaicwall2_1887(7312, 896), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 680), 3);
    add_background_object(create_mosaicwall1_1886(6336, 992), 3);
    add_background_object(create_mosaicwall2_1887(6432, 992), 3);
    add_background_object(create_mosaicwall2_1887(5952, 992), 3);
    add_background_object(create_mosaicwall1_1886(6080, 992), 3);
    add_background_object(create_mosaicwall1_1886(6208, 992), 3);
    add_background_object(create_mosaicwall1_1886(4656, 1088), 3);
    add_background_object(create_mosaicwall2_1887(4704, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 672), 3);
    add_background_object(create_mallfloor3_1890(4288, 640), 3);
    add_background_object(create_gimmickelevatorpoleflat_2006(4112, 704), 3);
    add_background_object(create_floor33_1674(3768, 192), 3);
    add_background_object(create_mallfloor1_1891(3904, 192), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 160), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 128), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 96), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 64), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 32), 3);
    add_background_object(create_mallscalecolumn1_1888(4160, 0), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 416), 3);
    add_background_object(create_mallfloor1_1891(4288, 336), 3);
    add_background_object(create_mallfloor1_1891(4288, 240), 3);
    add_background_object(create_mallfloor3_1890(4288, 192), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 848), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 576), 3);
    add_background_object(create_ferriswheelbase2_1644(4720, 368), 3);
    add_background_object(create_ferriswheelbase2_1644(4752, 368), 3);
    add_background_object(create_mosaicwall1_1886(5104, 528), 3);
    add_background_object(create_mosaicwall1_1886(5232, 528), 3);
    add_background_object(create_mosaicwall1_1886(5360, 528), 3);
    add_background_object(create_mosaicwall2_1887(5456, 528), 3);
    add_background_object(create_mosaicwall2_1887(5200, 528), 3);
    add_background_object(create_mallfloor3_1890(5200, 448), 3);
    add_background_object(create_mallfloor3_1890(5200, 208), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 848), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 160), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 128), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 96), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 64), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 32), 3);
    add_background_object(create_mallscalecolumn1_1888(4304, 0), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 832), 3);
    add_background_object(create_mosaicwall1_1886(1664, 272), 3);
    add_background_object(create_mosaicwall1_1886(1536, 272), 3);
    add_background_object(create_mosaicwall2_1887(1776, 272), 3);
    add_background_object(create_mosaicwall2_1887(1536, 272), 3);
    add_background_object(create_fnlullaby_1900(1504, 296), 3);
    add_background_object(create_mallscalecolumn1_1888(1464, 304), 3);
    add_background_object(create_mallscalecolumn1_1888(1464, 368), 3);
    add_background_object(create_mallscalecolumn1_1888(1464, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(1464, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(1464, 272), 3);
    add_background_object(create_mallscalecolumn2_1889(1464, 256), 3);
    add_background_object(create_mallscalecolumn1_1888(1784, 304), 3);
    add_background_object(create_mallscalecolumn1_1888(1784, 368), 3);
    add_background_object(create_mallscalecolumn1_1888(1784, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(1784, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(1784, 272), 3);
    add_background_object(create_mallscalecolumn2_1889(1784, 256), 3);
    add_background_object(create_mallfloor10_2007(3072, 736), 3);
    add_background_object(create_mallfloor10_2007(3072, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 672), 3);
    add_background_object(create_mosaicwall1_1886(2352, 704), 3);
    add_background_object(create_mosaicwall2_1887(2384, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 832), 3);
    add_background_object(create_mosaicwall1_1886(2480, 704), 3);
    add_background_object(create_floor31_1708(1048, 776), 3);
    add_background_object(create_floor30_1707(968, 464), 3);
    add_background_object(create_ferriswheelbase2_1644(872, 288), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 384), 3);
    add_background_object(create_mallfloor3_1890(704, 1152), 3);
    add_background_object(create_mallfloor3_1890(704, 576), 3);
    add_background_object(create_mallfloor3_1890(704, 432), 3);
    add_background_object(create_mallfloor3_1890(576, 336), 3);
    add_background_object(create_mallfloor3_1890(448, 336), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 424), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 360), 3);
    add_background_object(create_ferriswheelbase_1664(216, 152), 3);
    add_background_object(create_ferriswheelbase2_1644(872, 160), 3);
    add_background_object(create_ferriswheelbase2_1644(872, 224), 3);
    add_background_object(create_ferriswheelbase_1664(856, 152), 3);
    add_background_object(create_mallfloor1_1891(64, 1248), 3);
    add_background_object(create_lamppostback_1709(560, 1168), 3);
    add_background_object(create_mallfloor1_1891(192, 1248), 3);
    add_background_object(create_mallfloor1_1891(320, 1248), 3);
    add_background_object(create_mallfloor1_1891(448, 1248), 3);
    add_background_object(create_gimmickelevatorpolebend_2008(4080, 688), 3);
    add_background_object(create_gimmickelevatorpolebend_2008(1144, -80), 3);
    add_background_object(create_mallfloor3_1890(6336, 960), 3);
    add_background_object(create_mallfloor5_1913(6464, 960), 3);
    add_background_object(create_escalatorback4_1915(6688, 1120), 3);
    add_background_object(create_escalatorback5_1916(6656, 1088), 3);
    add_background_object(create_escalatorback6_1917(6504, 936), 3);
    add_background_object(create_escalatorback5_1916(6624, 1056), 3);
    add_background_object(create_escalatorback5_1916(6592, 1024), 3);
    add_background_object(create_escalatorback5_1916(6560, 992), 3);
    add_background_object(create_escalatorback5_1916(6528, 960), 3);
    add_background_object(create_mallfloor1_1891(6592, 1152), 3);
    add_background_object(create_mallfloor1_1891(6720, 1152), 3);
    add_background_object(create_redcarpet_1919(64, 1248), 3);
    add_background_object(create_switchwallbase_1921(6832, 1104), 3);
    add_background_object(create_mallfloor1_1891(-64, 1248), 3);
    add_background_object(create_mallfloor1_1891(-160, 1152), 3);
    add_background_object(create_mallfloor1_1891(-160, 1056), 3);
    add_background_object(create_mallfloor1_1891(-160, 960), 3);
    add_background_object(create_redcarpet_1919(192, 1248), 3);
    add_background_object(create_redcarpet_1919(320, 1248), 3);
    add_background_object(create_redcarpet_1919(6592, 1152), 3);
    add_background_object(create_redcarpet_1919(6720, 1152), 3);
    add_background_object(create_parasolbase_1906(1640, 800), 3);
    add_background_object(create_parasolbase2_1907(1616, 832), 3);
    add_background_object(create_gachaponbase_1850(6208, 800), 3);
    add_background_object(create_stopperback_1927(240, 176), 3);
    add_background_object(create_mallfloor1_1891(6848, 1056), 3);
    add_background_object(create_mallfloor3_1890(6848, 1152), 3);
    add_background_object(create_mallfloor6_1920(6848, 1104), 3);
    add_background_object(create_discoballbase_1908(3160, 208), 3);
    add_background_object(create_ferriswheelbase_1664(6816, 328), 3);
    add_background_object(create_keyboardback_1936(1232, 856), 3);
    add_background_object(create_keyboardback_1936(1328, 856), 3);
    add_background_object(create_keyboardback_1936(1424, 856), 3);
    add_background_object(create_keyboardback_1936(1520, 856), 3);
    add_background_object(create_keyboardsharpnote_1937(1264, 856), 3);
    add_background_object(create_keyboardsharpnote_1937(1360, 856), 3);
    add_background_object(create_keyboardsharpnote_1937(1408, 856), 3);
    add_background_object(create_keyboardsharpnote_1937(1504, 856), 3);
    add_background_object(create_keyboardsharpnote_1937(1552, 856), 3);
    add_background_object(create_carouselbase_1986(152, 912), 3);
    add_background_object(create_carouselbase_1986(152, 688), 3);
    add_background_object(create_redcarpet_1919(448, 336), 3);
    add_background_object(create_redcarpet_1919(576, 336), 3);
    add_background_object(create_mallfloor1_1891(704, 1200), 3);
    add_background_object(create_mallfloor1_1891(704, 1056), 3);
    add_background_object(create_mallfloor1_1891(704, 480), 3);
    add_background_object(create_mallfloor1_1891(704, 336), 3);
    add_background_object(create_redcarpet_1919(704, 336), 3);
    add_background_object(create_mallfloor1_1891(576, 1248), 3);
    add_background_object(create_redcarpet_1919(448, 1248), 3);
    add_background_object(create_redcarpet_1919(576, 1248), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 416), 3);
    add_background_object(create_mallscalecolumn2_1889(472, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 416), 3);
    add_background_object(create_mallscalecolumn2_1889(600, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1216), 3);
    add_background_object(create_mosaicwall1_1886(512, 176), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 208), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 176), 3);
    add_background_object(create_mallscalecolumn2_1889(448, 160), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 272), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 240), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 304), 3);
    add_background_object(create_mosaicwall2_1887(528, 176), 3);
    add_background_object(create_mosaicwall1_1886(640, 176), 3);
    add_background_object(create_mallscalecolumn1_1888(752, 208), 3);
    add_background_object(create_mallscalecolumn1_1888(752, 272), 3);
    add_background_object(create_mallscalecolumn1_1888(752, 240), 3);
    add_background_object(create_mallscalecolumn1_1888(752, 304), 3);
    add_background_object(create_mosaicwall2_1887(736, 176), 3);
    add_background_object(create_mallscalecolumn1_1888(752, 176), 3);
    add_background_object(create_mallfloor6_1920(704, 432), 3);
    add_background_object(create_mallfloor6_1920(704, 384), 3);
    add_background_object(create_mallfloor6_1920(704, 528), 3);
    add_background_object(create_mallfloor6_1920(704, 480), 3);
    add_background_object(create_mallfloor6_1920(704, 1056), 3);
    add_background_object(create_mallfloor6_1920(704, 576), 3);
    add_background_object(create_mallfloor6_1920(704, 1152), 3);
    add_background_object(create_mallfloor6_1920(704, 1104), 3);
    add_background_object(create_mallfloor6_1920(704, 1200), 3);
    add_background_object(create_mallfloor3_1890(832, 336), 3);
    add_background_object(create_mallfloor1_1891(832, 1248), 3);
    add_background_object(create_mallfloor1_1891(832, 1104), 3);
    add_background_object(create_mallfloor1_1891(832, 528), 3);
    add_background_object(create_mallfloor1_1891(832, 384), 3);
    add_background_object(create_mallfloor3_1890(832, 480), 3);
    add_background_object(create_mallfloor3_1890(832, 1056), 3);
    add_background_object(create_mallfloor3_1890(832, 1200), 3);
    add_background_object(create_redcarpet_1919(832, 336), 3);
    add_background_object(create_mallscalecolumn2_1889(752, 160), 3);
    add_background_object(create_mallfloor1_1891(704, 624), 3);
    add_background_object(create_mallfloor6_1920(704, 672), 3);
    add_background_object(create_mallfloor6_1920(704, 624), 3);
    add_background_object(create_mallfloor1_1891(832, 672), 3);
    add_background_object(create_mallfloor3_1890(832, 624), 3);
    add_background_object(create_mallfloor3_1890(704, 864), 3);
    add_background_object(create_mallfloor1_1891(704, 768), 3);
    add_background_object(create_mallfloor6_1920(704, 816), 3);
    add_background_object(create_mallfloor6_1920(704, 768), 3);
    add_background_object(create_mallfloor6_1920(704, 864), 3);
    add_background_object(create_mallfloor1_1891(832, 816), 3);
    add_background_object(create_mallfloor3_1890(832, 768), 3);
    add_background_object(create_mallfloor3_1890(704, 1008), 3);
    add_background_object(create_mallfloor1_1891(704, 912), 3);
    add_background_object(create_mallfloor6_1920(704, 960), 3);
    add_background_object(create_mallfloor6_1920(704, 912), 3);
    add_background_object(create_mallfloor6_1920(704, 1008), 3);
    add_background_object(create_mallfloor1_1891(832, 960), 3);
    add_background_object(create_mallfloor3_1890(832, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(472, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(600, 1024), 3);
    add_background_object(create_mallfloor3_1890(704, 720), 3);
    add_background_object(create_mallfloor6_1920(704, 720), 3);
    add_background_object(create_carouselbase_1986(152, 464), 3);
    add_background_object(create_mallfloor8_1928(672, 664), 3);
    add_background_object(create_mallfloor8_1928(672, 688), 3);
    add_background_object(create_fnladder_1662(56, 352), 3);
    add_background_object(create_fnladder_1662(56, 384), 3);
    add_background_object(create_fnladder_1662(56, 416), 3);
    add_background_object(create_fnladder_1662(56, 448), 3);
    add_background_object(create_fnladder_1662(56, 480), 3);
    add_background_object(create_lamppostback_1709(432, 1168), 3);
    add_background_object(create_fncable_1922(752, 176), 3);
    add_background_object(create_fncable_1922(816, 176), 3);
    add_background_object(create_fncable_1922(696, 176), 3);
    add_background_object(create_fncable_1922(632, 176), 3);
    add_background_object(create_fncable_1922(568, 176), 3);
    add_background_object(create_fncable_1922(504, 176), 3);
    add_background_object(create_fncable_1922(440, 176), 3);
    add_background_object(create_fncable_1922(376, 176), 3);
    add_background_object(create_fncable_1922(312, 176), 3);
    add_background_object(create_fncable_1922(248, 176), 3);
    add_background_object(create_floor25_1654(960, 336), 3);
    add_background_object(create_mallfloor1_1891(960, 480), 3);
    add_background_object(create_mallfloor3_1890(960, 576), 3);
    add_background_object(create_mallfloor1_1891(960, 624), 3);
    add_background_object(create_mallfloor6_1920(1072, 480), 3);
    add_background_object(create_mallfloor6_1920(1072, 528), 3);
    add_background_object(create_mallfloor6_1920(1072, 576), 3);
    add_background_object(create_mallfloor6_1920(1072, 624), 3);
    add_background_object(create_mallfloor6_1920(1072, 672), 3);
    add_background_object(create_mallfloor3_1890(960, 720), 3);
    add_background_object(create_mallfloor6_1920(1072, 720), 3);
    add_background_object(create_mallfloor1_1891(960, 768), 3);
    add_background_object(create_mallfloor6_1920(1072, 768), 3);
    add_background_object(create_mallfloor6_1920(1072, 816), 3);
    add_background_object(create_mallfloor3_1890(960, 864), 3);
    add_background_object(create_mallfloor3_1890(1088, 864), 3);
    add_background_object(create_mallfloor3_1890(1216, 864), 3);
    add_background_object(create_mallfloor3_1890(1344, 864), 3);
    add_background_object(create_edgeoverlay_1805(224, 776), 3);
    add_background_object(create_mallfloor3_1890(1472, 864), 3);
    add_background_object(create_mallfloor3_1890(1600, 864), 3);
    add_background_object(create_mallfloor3_1890(2240, 864), 3);
    add_background_object(create_mallfloor3_1890(2368, 864), 3);
    add_background_object(create_mallfloor3_1890(2240, 720), 3);
    add_background_object(create_mallfloor3_1890(2368, 720), 3);
    add_background_object(create_mallfloor3_1890(2496, 720), 3);
    add_background_object(create_mallfloor6_1920(944, 384), 3);
    add_background_object(create_mallfloor6_1920(944, 432), 3);
    add_background_object(create_parasolbase_1906(1192, 800), 3);
    add_background_object(create_parasolbase2_1907(1168, 832), 3);
    add_background_object(create_mallfloor1_1891(2752, 816), 3);
    add_background_object(create_mallfloor1_1891(2752, 720), 3);
    add_background_object(create_mallfloor3_1890(2624, 720), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 672), 3);
    add_background_object(create_mallfountain1_1910(2496, 624), 3);
    add_background_object(create_fnstonetreebase_1898(2400, 704), 3);
    add_background_object(create_birchtree_1846(2384, 576), 3);
    add_background_object(create_fnstonetreebase_1898(2656, 704), 3);
    add_background_object(create_birchtree_1846(2640, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(2744, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(2304, 480), 3);
    add_background_object(create_mallfloor3_1890(2240, 432), 3);
    add_background_object(create_mallfloor3_1890(2368, 432), 3);
    add_background_object(create_mallfloor3_1890(2496, 432), 3);
    add_background_object(create_mallfloor3_1890(2624, 432), 3);
    add_background_object(create_mallfloor3_1890(2752, 432), 3);
    add_background_object(create_mallfloor6_1920(2240, 864), 3);
    add_background_object(create_mallfloor6_1920(2240, 432), 3);
    add_background_object(create_mallfloor6_1920(2240, 720), 3);
    add_background_object(create_mallfloor6_1920(2752, 768), 3);
    add_background_object(create_mallfloor6_1920(2752, 816), 3);
    add_background_object(create_mallfloor3_1890(2880, 720), 3);
    add_background_object(create_mallfloor10_2007(3184, 736), 3);
    add_background_object(create_mallfloor13_2009(3184, 672), 3);
    add_background_object(create_mallfloor3_1890(3136, 864), 3);
    add_background_object(create_mallfloor3_1890(3264, 864), 3);
    add_background_object(create_mallfloor10_2007(3184, 800), 3);
    add_background_object(create_mallfloor3_1890(1344, 432), 3);
    add_background_object(create_mallfloor3_1890(1472, 432), 3);
    add_background_object(create_mallfloor3_1890(1600, 432), 3);
    add_background_object(create_mallfloor3_1890(1728, 432), 3);
    add_background_object(create_mallfloor3_1890(1856, 432), 3);
    add_background_object(create_mallfloor6_1920(1344, 432), 3);
    add_background_object(create_mallfloor6_1920(1968, 432), 3);
    add_background_object(create_mallfloor3_1890(3008, 864), 3);
    add_background_object(create_mallfloor3_1890(3008, 720), 3);
    add_background_object(create_mallfloor6_1920(3120, 720), 3);
    add_background_object(create_mallfloor3_1890(3392, 864), 3);
    add_background_object(create_mallfloor3_1890(3520, 864), 3);
    add_background_object(create_mallfloor3_1890(3648, 864), 3);
    add_background_object(create_mallfloor3_1890(3776, 864), 3);
    add_background_object(create_mallfloor1_1891(960, 912), 3);
    add_background_object(create_mallfloor1_1891(1088, 912), 3);
    add_background_object(create_mallfloor1_1891(1216, 912), 3);
    add_background_object(create_mallfloor1_1891(960, 1008), 3);
    add_background_object(create_mallfloor1_1891(1088, 1008), 3);
    add_background_object(create_mallfloor1_1891(1216, 1008), 3);
    add_background_object(create_mallfloor1_1891(960, 1104), 3);
    add_background_object(create_mallfloor1_1891(1088, 1104), 3);
    add_background_object(create_mallfloor1_1891(1216, 1104), 3);
    add_background_object(create_mallfloor1_1891(960, 1200), 3);
    add_background_object(create_mallfloor1_1891(1088, 1200), 3);
    add_background_object(create_mallfloor1_1891(1216, 1200), 3);
    add_background_object(create_mallfloor1_1891(1344, 912), 3);
    add_background_object(create_mallfloor1_1891(1472, 912), 3);
    add_background_object(create_mallfloor1_1891(1600, 912), 3);
    add_background_object(create_mallfloor1_1891(1344, 1008), 3);
    add_background_object(create_mallfloor1_1891(1472, 1008), 3);
    add_background_object(create_mallfloor1_1891(1600, 1008), 3);
    add_background_object(create_mallfloor1_1891(1344, 1104), 3);
    add_background_object(create_mallfloor1_1891(1472, 1104), 3);
    add_background_object(create_mallfloor1_1891(1600, 1104), 3);
    add_background_object(create_mallfloor1_1891(1344, 1200), 3);
    add_background_object(create_mallfloor1_1891(1472, 1200), 3);
    add_background_object(create_mallfloor1_1891(1600, 1200), 3);
    add_background_object(create_mallfloor1_1891(1728, 912), 3);
    add_background_object(create_mallfloor1_1891(1856, 912), 3);
    add_background_object(create_mallfloor1_1891(1984, 912), 3);
    add_background_object(create_mallfloor1_1891(1728, 1008), 3);
    add_background_object(create_mallfloor1_1891(1856, 1008), 3);
    add_background_object(create_mallfloor1_1891(1984, 1008), 3);
    add_background_object(create_mallfloor1_1891(1728, 1104), 3);
    add_background_object(create_mallfloor1_1891(1856, 1104), 3);
    add_background_object(create_mallfloor1_1891(1984, 1104), 3);
    add_background_object(create_mallfloor1_1891(1728, 1200), 3);
    add_background_object(create_mallfloor1_1891(1856, 1200), 3);
    add_background_object(create_mallfloor1_1891(1984, 1200), 3);
    add_background_object(create_mallfloor1_1891(2112, 912), 3);
    add_background_object(create_mallfloor1_1891(2240, 912), 3);
    add_background_object(create_mallfloor1_1891(2368, 912), 3);
    add_background_object(create_mallfloor1_1891(2112, 1008), 3);
    add_background_object(create_mallfloor1_1891(2240, 1008), 3);
    add_background_object(create_mallfloor1_1891(2368, 1008), 3);
    add_background_object(create_mallfloor1_1891(2112, 1104), 3);
    add_background_object(create_mallfloor1_1891(2240, 1104), 3);
    add_background_object(create_mallfloor1_1891(2368, 1104), 3);
    add_background_object(create_mallfloor1_1891(2112, 1200), 3);
    add_background_object(create_mallfloor1_1891(2240, 1200), 3);
    add_background_object(create_mallfloor1_1891(2368, 1200), 3);
    add_background_object(create_mallfloor1_1891(2752, 912), 3);
    add_background_object(create_mallfloor1_1891(2496, 1008), 3);
    add_background_object(create_mallfloor1_1891(2496, 1104), 3);
    add_background_object(create_mallfloor1_1891(2624, 1104), 3);
    add_background_object(create_mallfloor1_1891(2496, 1200), 3);
    add_background_object(create_mallfloor1_1891(2624, 1200), 3);
    add_background_object(create_mallfloor1_1891(2752, 1200), 3);
    add_background_object(create_mallfloor1_1891(3008, 912), 3);
    add_background_object(create_mallfloor1_1891(3136, 912), 3);
    add_background_object(create_mallfloor1_1891(3008, 1008), 3);
    add_background_object(create_mallfloor1_1891(3136, 1008), 3);
    add_background_object(create_mallfloor1_1891(3008, 1104), 3);
    add_background_object(create_mallfloor1_1891(3136, 1104), 3);
    add_background_object(create_mallfloor1_1891(2880, 1200), 3);
    add_background_object(create_mallfloor1_1891(3008, 1200), 3);
    add_background_object(create_mallfloor1_1891(3136, 1200), 3);
    add_background_object(create_mallfloor1_1891(3264, 912), 3);
    add_background_object(create_mallfloor1_1891(3392, 912), 3);
    add_background_object(create_mallfloor1_1891(3520, 912), 3);
    add_background_object(create_mallfloor1_1891(3264, 1008), 3);
    add_background_object(create_mallfloor1_1891(3392, 1008), 3);
    add_background_object(create_mallfloor1_1891(3520, 1008), 3);
    add_background_object(create_mallfloor1_1891(3264, 1104), 3);
    add_background_object(create_mallfloor1_1891(3392, 1104), 3);
    add_background_object(create_mallfloor1_1891(3520, 1104), 3);
    add_background_object(create_mallfloor1_1891(3264, 1200), 3);
    add_background_object(create_mallfloor1_1891(3392, 1200), 3);
    add_background_object(create_mallfloor1_1891(3520, 1200), 3);
    add_background_object(create_mallfloor1_1891(3648, 912), 3);
    add_background_object(create_mallfloor1_1891(3776, 912), 3);
    add_background_object(create_mallfloor1_1891(3648, 1008), 3);
    add_background_object(create_mallfloor1_1891(3776, 1008), 3);
    add_background_object(create_mallfloor1_1891(3648, 1104), 3);
    add_background_object(create_mallfloor1_1891(3776, 1104), 3);
    add_background_object(create_mallfloor1_1891(3648, 1200), 3);
    add_background_object(create_mallfloor1_1891(3776, 1200), 3);
    add_background_object(create_redcarpet_1919(2368, 720), 3);
    add_background_object(create_redcarpet_1919(2496, 720), 3);
    add_background_object(create_redcarpet_1919(2624, 720), 3);
    add_background_object(create_mallfloor6_1920(2864, 432), 3);
    add_background_object(create_mallfloor1_1891(2752, 336), 3);
    add_background_object(create_mallfloor3_1890(2752, 288), 3);
    add_background_object(create_mallfloor6_1920(2752, 288), 3);
    add_background_object(create_mallfloor3_1890(2880, 288), 3);
    add_background_object(create_mallfloor3_1890(3008, 288), 3);
    add_background_object(create_mallfloor6_1920(2752, 336), 3);
    add_background_object(create_mallfloor6_1920(2752, 384), 3);
    add_background_object(create_mallfloor3_1890(3136, 288), 3);
    add_background_object(create_mallfloor3_1890(3264, 288), 3);
    add_background_object(create_mallfloor1_1891(3392, 240), 3);
    add_background_object(create_mallfloor6_1920(3392, 240), 3);
    add_background_object(create_mallfloor3_1890(3520, 240), 3);
    add_background_object(create_mallfloor3_1890(3648, 240), 3);
    add_background_object(create_mallfloor6_1920(2864, 336), 3);
    add_background_object(create_mallfloor6_1920(2864, 384), 3);
    add_background_object(create_mallfloor8_1928(1984, 456), 3);
    add_background_object(create_discoballbase_1908(2776, 208), 3);
    add_background_object(create_keyboardback_1936(2832, 280), 3);
    add_background_object(create_keyboardback_1936(2928, 280), 3);
    add_background_object(create_keyboardback_1936(3024, 280), 3);
    add_background_object(create_keyboardback_1936(3120, 280), 3);
    add_background_object(create_keyboardsharpnote_1937(2864, 280), 3);
    add_background_object(create_keyboardsharpnote_1937(2960, 280), 3);
    add_background_object(create_keyboardsharpnote_1937(3008, 280), 3);
    add_background_object(create_keyboardsharpnote_1937(3104, 280), 3);
    add_background_object(create_keyboardsharpnote_1937(3152, 280), 3);
    add_background_object(create_mallfountain1_1910(1472, 336), 3);
    add_background_object(create_mallfountain1_1910(1728, 336), 3);
    add_background_object(create_redcarpet_1919(1424, 432), 3);
    add_background_object(create_redcarpet_1919(1680, 432), 3);
    add_background_object(create_redcarpet_1919(1552, 432), 3);
    add_background_object(create_redcarpet_1919(1808, 432), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(1344, 800), 3);
    add_background_object(create_restroomback_1930(560, 272), 3);
    add_background_object(create_restroomback_1930(672, 272), 3);
    add_background_object(create_mallfloor3_1890(3776, 240), 3);
    add_background_object(create_mallfloor6_1920(4016, 240), 3);
    add_background_object(create_mallfloor1_1891(4160, 288), 3);
    add_background_object(create_mallfloor1_1891(4160, 192), 3);
    add_background_object(create_mallfloor1_1891(4192, 96), 3);
    add_background_object(create_mallfloor1_1891(4192, 0), 3);
    add_background_object(create_mallfloor3_1890(4160, 384), 3);
    add_background_object(create_mallfloor6_1920(4192, 0), 3);
    add_background_object(create_mallfloor6_1920(4192, 48), 3);
    add_background_object(create_mallfloor6_1920(4192, 96), 3);
    add_background_object(create_mallfloor6_1920(4192, 144), 3);
    add_background_object(create_mallfloor6_1920(4160, 192), 3);
    add_background_object(create_mallfloor6_1920(4160, 240), 3);
    add_background_object(create_mallfloor6_1920(4160, 288), 3);
    add_background_object(create_mallfloor6_1920(4160, 336), 3);
    add_background_object(create_mallfloor6_1920(4160, 384), 3);
    add_background_object(create_carouselbase_1986(4472, 528), 3);
    add_background_object(create_carouselbase_1986(4472, 304), 3);
    add_background_object(create_mallfloor3_1890(4032, 640), 3);
    add_background_object(create_escalatorback2_1912(3872, 672), 3);
    add_background_object(create_escalatorback2_1912(3840, 704), 3);
    add_background_object(create_escalatorback2_1912(3808, 736), 3);
    add_background_object(create_escalatorback2_1912(3744, 800), 3);
    add_background_object(create_escalatorback2_1912(3904, 640), 3);
    add_background_object(create_escalatorback3_1914(3936, 616), 3);
    add_background_object(create_escalatorback1_1911(3712, 832), 3);
    add_background_object(create_mallfloor9_1929(3960, 640), 3);
    add_background_object(create_escalatorback2_1912(3776, 768), 3);
    add_background_object(create_mallfloor3_1890(3904, 864), 3);
    add_background_object(create_mallfloor1_1891(3904, 912), 3);
    add_background_object(create_mallfloor1_1891(3904, 1008), 3);
    add_background_object(create_mallfloor1_1891(3904, 1104), 3);
    add_background_object(create_mallfloor1_1891(3904, 1200), 3);
    add_background_object(create_mallfloor3_1890(4032, 864), 3);
    add_background_object(create_mallfloor1_1891(4032, 912), 3);
    add_background_object(create_mallfloor1_1891(4032, 1008), 3);
    add_background_object(create_mallfloor1_1891(4032, 1104), 3);
    add_background_object(create_mallfloor1_1891(4032, 1200), 3);
    add_background_object(create_mallfloor3_1890(4160, 864), 3);
    add_background_object(create_mallfloor1_1891(4160, 912), 3);
    add_background_object(create_mallfloor1_1891(4160, 1008), 3);
    add_background_object(create_mallfloor1_1891(4160, 1104), 3);
    add_background_object(create_mallfloor1_1891(4160, 1200), 3);
    add_background_object(create_carouselbase_1986(4472, 752), 3);
    add_background_object(create_mallfloor3_1890(4288, 864), 3);
    add_background_object(create_mallfloor1_1891(4288, 912), 3);
    add_background_object(create_mallfloor1_1891(4288, 1008), 3);
    add_background_object(create_mallfloor1_1891(4288, 1104), 3);
    add_background_object(create_mallfloor1_1891(4288, 1200), 3);
    add_background_object(create_mallfloor3_1890(4416, 864), 3);
    add_background_object(create_mallfloor1_1891(4416, 912), 3);
    add_background_object(create_mallfloor1_1891(4416, 1008), 3);
    add_background_object(create_mallfloor1_1891(4416, 1104), 3);
    add_background_object(create_mallfloor1_1891(4416, 1200), 3);
    add_background_object(create_mallfloor3_1890(4544, 864), 3);
    add_background_object(create_mallfloor1_1891(4544, 1200), 3);
    add_background_object(create_mallfloor3_1890(4720, 640), 3);
    add_background_object(create_mallfloor3_1890(4720, 416), 3);
    add_background_object(create_mallfloor6_1920(4720, 416), 3);
    add_background_object(create_mallfloor6_1920(4720, 640), 3);
    add_background_object(create_mallfloor6_1920(4400, 640), 3);
    add_background_object(create_mallfloor6_1920(4400, 384), 3);
    add_background_object(create_mallfloor6_1920(4400, 336), 3);
    add_background_object(create_mallfloor6_1920(4400, 288), 3);
    add_background_object(create_mallfloor6_1920(4400, 240), 3);
    add_background_object(create_mallfloor6_1920(4400, 192), 3);
    add_background_object(create_mallfloor6_1920(4304, 144), 3);
    add_background_object(create_mallfloor6_1920(4304, 96), 3);
    add_background_object(create_mallfloor6_1920(4304, 48), 3);
    add_background_object(create_mallfloor6_1920(4304, 0), 3);
    add_background_object(create_mallfloor1_1891(4848, 368), 3);
    add_background_object(create_mallfloor6_1920(4848, 368), 3);
    add_background_object(create_mallfloor3_1890(4848, 640), 3);
    add_background_object(create_mallfloor1_1891(5072, 544), 3);
    add_background_object(create_mallfloor3_1890(4976, 640), 3);
    add_background_object(create_mallfloor3_1890(5072, 496), 3);
    add_background_object(create_mallfloor1_1891(5200, 352), 3);
    add_background_object(create_mallfloor1_1891(5200, 256), 3);
    add_background_object(create_mallfloor8_1928(4752, 192), 3);
    add_background_object(create_hamstertunnel8_1905(2696, 304), 3);
    add_background_object(create_hamstertunnel9_1902(2624, 376), 3);
    add_background_object(create_hamstertunnel1_1923(2704, 384), 3);
    add_background_object(create_edgeoverlay2_1925(2624, 376), 3);
    add_background_object(create_edgeoverlay3_1926(2704, 304), 3);
    add_background_object(create_hamstertunnel9_1902(2560, 376), 3);
    add_background_object(create_edgeoverlay2_1925(2560, 376), 3);
    add_background_object(create_hamstertunnel1_1923(2504, 384), 3);
    add_background_object(create_hamstertunnel3_1924(2496, 368), 3);
    add_background_object(create_mallfloor6_1920(4960, 416), 3);
    add_background_object(create_mallfloor6_1920(4960, 368), 3);
    add_background_object(create_mallfloor6_1920(5072, 544), 3);
    add_background_object(create_mallfloor6_1920(5072, 592), 3);
    add_background_object(create_mallfloor6_1920(5200, 448), 3);
    add_background_object(create_mallfloor6_1920(5200, 400), 3);
    add_background_object(create_mallfloor6_1920(5200, 352), 3);
    add_background_object(create_mallfloor6_1920(5200, 208), 3);
    add_background_object(create_mallfloor6_1920(5200, 304), 3);
    add_background_object(create_mallfloor6_1920(5200, 256), 3);
    add_background_object(create_mallfloor8_1928(4720, 192), 3);
    add_background_object(create_mallfloor1_1891(5584, 256), 3);
    add_background_object(create_mallfloor1_1891(5584, 400), 3);
    add_background_object(create_mallfloor3_1890(5584, 352), 3);
    add_background_object(create_mallfloor3_1890(5584, 208), 3);
    add_background_object(create_mosaicwall1_1886(4784, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(4896, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(4896, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(4896, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(4896, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(4896, 480), 3);
    add_background_object(create_mallscalecolumn2_1889(4720, 464), 3);
    add_background_object(create_mallscalecolumn2_1889(4896, 464), 3);
    add_background_object(create_mosaicwall2_1887(4800, 480), 3);
    add_background_object(create_mosaicwall2_1887(4880, 480), 3);
    add_background_object(create_birchtree_1846(5072, 352), 3);
    add_background_object(create_fnstonetreebase_1898(5088, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 608), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 720), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 784), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 512), 3);
    add_background_object(create_mallfloor3_1890(5584, 496), 3);
    add_background_object(create_mallfloor1_1891(5840, 256), 3);
    add_background_object(create_mallfloor1_1891(5840, 112), 3);
    add_background_object(create_mallfloor3_1890(5840, 64), 3);
    add_background_object(create_mallfloor3_1890(5840, 208), 3);
    add_background_object(create_mallfloor1_1891(5840, 400), 3);
    add_background_object(create_mallfloor3_1890(5840, 352), 3);
    add_background_object(create_mallfloor3_1890(5840, 496), 3);
    add_background_object(create_mallfloor1_1891(5840, -32), 3);
    add_background_object(create_mallfloor6_1920(5696, 208), 3);
    add_background_object(create_mallfloor6_1920(5696, 256), 3);
    add_background_object(create_mallfloor6_1920(5696, 304), 3);
    add_background_object(create_mallfloor6_1920(5696, 352), 3);
    add_background_object(create_mallfloor6_1920(5696, 400), 3);
    add_background_object(create_mallfloor6_1920(5696, 448), 3);
    add_background_object(create_mallfloor6_1920(5696, 496), 3);
    add_background_object(create_mallfloor6_1920(5840, 496), 3);
    add_background_object(create_mallfloor6_1920(5840, 448), 3);
    add_background_object(create_mallfloor6_1920(5840, 400), 3);
    add_background_object(create_mallfloor6_1920(5840, 352), 3);
    add_background_object(create_mallfloor6_1920(5840, 304), 3);
    add_background_object(create_mallfloor6_1920(5840, 256), 3);
    add_background_object(create_mallfloor6_1920(5840, 208), 3);
    add_background_object(create_mallfloor6_1920(5840, 160), 3);
    add_background_object(create_mallfloor6_1920(5840, 112), 3);
    add_background_object(create_mallfloor6_1920(5840, 64), 3);
    add_background_object(create_mallscalecolumn1_1888(5472, 592), 3);
    add_background_object(create_mallscalecolumn1_1888(5472, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(5472, 656), 3);
    add_background_object(create_ferriswheelbase2_1644(4720, 240), 3);
    add_background_object(create_ferriswheelbase2_1644(4752, 240), 3);
    add_background_object(create_ferriswheelbase2_1644(4720, 304), 3);
    add_background_object(create_ferriswheelbase2_1644(4752, 304), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 352), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 320), 3);
    add_background_object(create_mallscalecolumn2_1889(3928, 288), 3);
    add_background_object(create_mallscalecolumn1_1888(4336, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 784), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 720), 3);
    add_background_object(create_mallscalecolumn1_1888(4224, 816), 3);
    add_background_object(create_mallfloor6_1920(4016, 192), 3);
    add_background_object(create_mallfloor6_1920(3904, 192), 3);
    add_background_object(create_mallfloor3_1890(4160, 640), 3);
    add_background_object(create_mallfloor3_1890(5744, 688), 3);
    add_background_object(create_mallfloor3_1890(5872, 688), 3);
    add_background_object(create_mallfloor1_1891(5104, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(5472, 560), 3);
    add_background_object(create_mallscalecolumn2_1889(5472, 544), 3);
    add_background_object(create_mallfloor6_1920(5184, 544), 3);
    add_background_object(create_mallfloor6_1920(5184, 592), 3);
    add_background_object(create_mallfloor6_1920(5216, 640), 3);
    add_background_object(create_mallfloor3_1890(5200, 496), 3);
    add_background_object(create_mallfloor1_1891(5696, 1200), 3);
    add_background_object(create_mallfloor6_1920(5104, 688), 3);
    add_background_object(create_redcarpet_1919(4160, 640), 3);
    add_background_object(create_redcarpet_1919(4288, 640), 3);
    add_background_object(create_redcarpet_1919(5072, 496), 3);
    add_background_object(create_mallfloor6_1920(5072, 496), 3);
    add_background_object(create_fnstonetreebase_1898(4880, 352), 3);
    add_background_object(create_birchtree_1846(4864, 224), 3);
    add_background_object(create_mallfloor1_1891(5824, 1104), 3);
    add_background_object(create_mallfloor3_1890(5952, 1152), 3);
    add_background_object(create_mallfloor1_1891(5952, 1200), 3);
    add_background_object(create_mallfloor6_1920(5984, 688), 3);
    add_background_object(create_mallfloor3_1890(6080, 1152), 3);
    add_background_object(create_mallfloor1_1891(6080, 1200), 3);
    add_background_object(create_mallfloor3_1890(6208, 1152), 3);
    add_background_object(create_mallfloor1_1891(6208, 1200), 3);
    add_background_object(create_mallfloor6_1920(5952, 496), 3);
    add_background_object(create_mallfloor6_1920(5952, 448), 3);
    add_background_object(create_mallfloor6_1920(5952, 400), 3);
    add_background_object(create_mallfloor6_1920(5952, 352), 3);
    add_background_object(create_mallfloor6_1920(5952, 304), 3);
    add_background_object(create_mallfloor6_1920(5952, 256), 3);
    add_background_object(create_mallfloor6_1920(5952, 208), 3);
    add_background_object(create_mallfloor6_1920(5952, 160), 3);
    add_background_object(create_mallfloor6_1920(5952, 112), 3);
    add_background_object(create_mallfloor6_1920(5952, 64), 3);
    add_background_object(create_mallfloor6_1920(5952, 16), 3);
    add_background_object(create_mallfloor6_1920(5840, 16), 3);
    add_background_object(create_mallfloor1_1891(6144, 648), 3);
    add_background_object(create_redcarpet_1919(6208, 1152), 3);
    add_background_object(create_carouselbase_1986(4472, 80), 3);
    add_background_object(create_mallfloor3_1890(4800, 1248), 3);
    add_background_object(create_mallfloor3_1890(4928, 1248), 3);
    add_background_object(create_mallfloor3_1890(5056, 1248), 3);
    add_background_object(create_mallfloor3_1890(5184, 1248), 3);
    add_background_object(create_mallfloor3_1890(5616, 688), 3);
    add_background_object(create_fnstonetreebase_1898(2336, 416), 3);
    add_background_object(create_birchtree_1846(2320, 288), 3);
    add_background_object(create_mallfloor1_1891(5696, 768), 3);
    add_background_object(create_mallfloor1_1891(5696, 864), 3);
    add_background_object(create_mallfloor1_1891(5696, 960), 3);
    add_background_object(create_mallfloor1_1891(5696, 1056), 3);
    add_background_object(create_mallfloor3_1890(5696, 720), 3);
    add_background_object(create_mallfloor3_1890(5696, 1152), 3);
    add_background_object(create_mallfloor1_1891(5328, 256), 3);
    add_background_object(create_mallfloor1_1891(5328, 400), 3);
    add_background_object(create_mallfloor3_1890(5328, 352), 3);
    add_background_object(create_mallfloor3_1890(5328, 208), 3);
    add_background_object(create_mallfloor3_1890(5328, 496), 3);
    add_background_object(create_mallfloor3_1890(5456, 304), 3);
    add_background_object(create_mallfloor1_1891(5456, 352), 3);
    add_background_object(create_mallfloor1_1891(5456, 208), 3);
    add_background_object(create_mallfloor3_1890(5456, 448), 3);
    add_background_object(create_mallfloor3_1890(5456, 496), 3);
    add_background_object(create_mallfloor3_1890(4672, 1248), 3);
    add_background_object(create_mallfloor1_1891(4672, 816), 3);
    add_background_object(create_mallfloor3_1890(4672, 768), 3);
    add_background_object(create_gimmickelevatorpoleflat_2006(4888, 1216), 3);
    add_background_object(create_gimmickelevatorpolebend_2008(4856, 1200), 3);
    add_background_object(create_mallfloor1_1891(5440, 1200), 3);
    add_background_object(create_mallfloor3_1890(5312, 1200), 3);
    add_background_object(create_mallfloor6_1920(5552, 1200), 3);
    add_background_object(create_mallfloor6_1920(5696, 1200), 3);
    add_background_object(create_mallfloor1_1891(4544, 912), 3);
    add_background_object(create_mallfloor1_1891(4544, 1008), 3);
    add_background_object(create_mallfloor1_1891(4544, 1104), 3);
    add_background_object(create_mallfloor1_1891(4672, 912), 3);
    add_background_object(create_mallfloor6_1920(4672, 768), 3);
    add_background_object(create_mallfloor6_1920(4672, 816), 3);
    add_background_object(create_mallfloor6_1920(4784, 816), 3);
    add_background_object(create_mallfloor6_1920(4784, 768), 3);
    add_background_object(create_mallfloor6_1920(4784, 864), 3);
    add_background_object(create_mallfloor6_1920(4784, 912), 3);
    add_background_object(create_mallfloor6_1920(4784, 960), 3);
    add_background_object(create_mallfloor1_1891(4672, 1008), 3);
    add_background_object(create_mallfloor6_1920(4784, 1008), 3);
    add_background_object(create_mallfloor6_1920(4784, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 1120), 3);
    add_background_object(create_mallscalecolumn2_1889(4720, 1104), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(4720, 704), 3);
    add_background_object(create_mallscalecolumn2_1889(4720, 688), 3);
    add_background_object(create_mallfloor6_1920(5312, 1200), 3);
    add_background_object(create_mallfloor1_1891(5312, 1248), 3);
    add_background_object(create_mallfloor1_1891(5568, 1248), 3);
    add_background_object(create_mallfloor6_1920(5696, 1056), 3);
    add_background_object(create_mallfloor6_1920(5696, 1104), 3);
    add_background_object(create_mallfloor6_1920(5696, 1008), 3);
    add_background_object(create_mallfloor6_1920(5696, 960), 3);
    add_background_object(create_mallfloor6_1920(5696, 912), 3);
    add_background_object(create_mallfloor6_1920(5696, 864), 3);
    add_background_object(create_mallfloor6_1920(5696, 816), 3);
    add_background_object(create_mallfloor6_1920(5696, 768), 3);
    add_background_object(create_mallfloor1_1891(5824, 720), 3);
    add_background_object(create_mallfloor1_1891(5824, 816), 3);
    add_background_object(create_mallfloor1_1891(5824, 912), 3);
    add_background_object(create_mallfloor1_1891(5824, 1008), 3);
    add_background_object(create_mallfloor1_1891(5824, 1200), 3);
    add_background_object(create_mallfloor6_1920(5936, 1056), 3);
    add_background_object(create_mallfloor6_1920(5936, 1104), 3);
    add_background_object(create_mallfloor6_1920(5936, 1008), 3);
    add_background_object(create_mallfloor6_1920(5936, 912), 3);
    add_background_object(create_mallfloor6_1920(5936, 864), 3);
    add_background_object(create_mallfloor6_1920(5936, 816), 3);
    add_background_object(create_mallfloor6_1920(5936, 768), 3);
    add_background_object(create_mallfloor6_1920(5936, 1152), 3);
    add_background_object(create_gimmickelevatorpoleflat_2006(5016, 1216), 3);
    add_background_object(create_gimmickelevatorpoleflat_2006(5144, 1216), 3);
    add_background_object(create_gimmickelevatorpoleflat_2006(5184, 1216), 3);
    add_background_object(create_mallfloor8_1928(5584, 688), 3);
    add_background_object(create_mallfloor8_1928(5584, 712), 3);
    add_background_object(create_fnladder_1662(5232, 688), 3);
    add_background_object(create_fnladder_1662(5232, 720), 3);
    add_background_object(create_fnladder_1662(5232, 752), 3);
    add_background_object(create_fnladder_1662(5232, 784), 3);
    add_background_object(create_fnladder_1662(5232, 816), 3);
    add_background_object(create_fnladder_1662(5232, 848), 3);
    add_background_object(create_fnladder_1662(5232, 880), 3);
    add_background_object(create_mallfloor6_1920(5216, 688), 3);
    add_background_object(create_mallfloor6_1920(5616, 688), 3);
    add_background_object(create_carouselbase_1986(5032, 1008), 3);
    add_background_object(create_carouselbase_1986(5032, 1120), 3);
    add_background_object(create_carouselbase_1986(5032, 1232), 3);
    add_background_object(create_edgeoverlay_1805(5416, 1176), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(5128, 736), 3);
    add_background_object(create_mallfloor6_1920(5696, 1152), 3);
    add_background_object(create_mallfloor3_1890(6336, 1152), 3);
    add_background_object(create_mallfloor1_1891(6336, 1200), 3);
    add_background_object(create_redcarpet_1919(6336, 1152), 3);
    add_background_object(create_mallfloor3_1890(6464, 1152), 3);
    add_background_object(create_mallfloor1_1891(6464, 1200), 3);
    add_background_object(create_redcarpet_1919(6464, 1152), 3);
    add_background_object(create_mallfloor3_1890(6592, 1248), 3);
    add_background_object(create_mallfloor3_1890(6720, 1248), 3);
    add_background_object(create_mallfloor1_1891(6848, 1200), 3);
    add_background_object(create_mallfloor6_1920(6848, 1056), 3);
    add_background_object(create_mallfloor1_1891(6976, 1104), 3);
    add_background_object(create_mallfloor3_1890(6976, 1200), 3);
    add_background_object(create_mallfloor1_1891(6976, 1248), 3);
    add_background_object(create_mallfloor3_1890(6208, 960), 3);
    add_background_object(create_mallfloor3_1890(6080, 960), 3);
    add_background_object(create_mallfloor3_1890(5952, 960), 3);
    add_background_object(create_fntreeshadow_1909(6112, 1008), 3);
    add_background_object(create_fnstonetreebase_1898(6144, 1136), 3);
    add_background_object(create_birchtree_1846(6128, 1008), 3);
    add_background_object(create_mallscalecolumn1_1888(6448, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(6448, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(6448, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(6448, 1024), 3);
    add_background_object(create_mallscalecolumn2_1889(6448, 1008), 3);
    add_background_object(create_fntreeshadow_1909(6288, 1008), 3);
    add_background_object(create_fnstonetreebase_1898(6320, 1136), 3);
    add_background_object(create_birchtree_1846(6304, 1008), 3);
    add_background_object(create_mallfloor6_1920(6144, 648), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 552), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 616), 3);
    add_background_object(create_mallfloor1_1891(7104, 1056), 3);
    add_background_object(create_mallfloor3_1890(7104, 1152), 3);
    add_background_object(create_mallfloor1_1891(7104, 1200), 3);
    add_background_object(create_mallfloor1_1891(7232, 1104), 3);
    add_background_object(create_mallfloor3_1890(7232, 1200), 3);
    add_background_object(create_mallfloor1_1891(7232, 1248), 3);
    add_background_object(create_mallfloor3_1890(7232, 1056), 3);
    add_background_object(create_mallfloor1_1891(7360, 1056), 3);
    add_background_object(create_mallfloor3_1890(7360, 1152), 3);
    add_background_object(create_mallfloor1_1891(7360, 1200), 3);
    add_background_object(create_mallfloor3_1890(7488, 864), 3);
    add_background_object(create_mallfloor3_1890(7360, 864), 3);
    add_background_object(create_mallfloor5_1913(6272, 648), 3);
    add_background_object(create_escalatorback4_1915(6408, 712), 3);
    add_background_object(create_escalatorback5_1916(6376, 680), 3);
    add_background_object(create_escalatorback5_1916(6344, 648), 3);
    add_background_object(create_escalatorback6_1917(6320, 624), 3);
    add_background_object(create_mallfloor3_1890(6144, 744), 3);
    add_background_object(create_mallfloor3_1890(6400, 744), 3);
    add_background_object(create_mallfloor6_1920(6256, 696), 3);
    add_background_object(create_mallfloor6_1920(6144, 696), 3);
    add_background_object(create_mallfloor6_1920(6144, 744), 3);
    add_background_object(create_mallfloor3_1890(6272, 744), 3);
    add_background_object(create_mallfloor3_1890(7616, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(7664, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(7664, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7664, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(7664, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(7664, 912), 3);
    add_background_object(create_mallfloor1_1891(7488, 1104), 3);
    add_background_object(create_mallfloor3_1890(7488, 1200), 3);
    add_background_object(create_mallfloor1_1891(7488, 1248), 3);
    add_background_object(create_mallfloor3_1890(7488, 1056), 3);
    add_background_object(create_mallfloor1_1891(7616, 1056), 3);
    add_background_object(create_mallfloor3_1890(7616, 1152), 3);
    add_background_object(create_mallfloor1_1891(7616, 1200), 3);
    add_background_object(create_fnladder_1662(6104, 648), 3);
    add_background_object(create_fnladder_1662(6104, 680), 3);
    add_background_object(create_fnladder_1662(6104, 712), 3);
    add_background_object(create_fnladder_1662(6104, 744), 3);
    add_background_object(create_fnladder_1662(6104, 776), 3);
    add_background_object(create_fnladder_1662(6104, 808), 3);
    add_background_object(create_fnladder_1662(6104, 840), 3);
    add_background_object(create_fnladder_1662(6104, 872), 3);
    add_background_object(create_mallfloor10_2007(5360, 16), 3);
    add_background_object(create_mallfloor10_2007(5360, 80), 3);
    add_background_object(create_mallfloor10_2007(5360, 144), 3);
    add_background_object(create_mallfloor10_2007(5584, 16), 3);
    add_background_object(create_mallfloor10_2007(5584, 80), 3);
    add_background_object(create_mallfloor10_2007(5584, 144), 3);
    add_background_object(create_mallfloor10_2007(5360, -48), 3);
    add_background_object(create_mallfloor10_2007(5584, -48), 3);
    add_background_object(create_mallfloor6_1920(4656, 1104), 3);
    add_background_object(create_mallfloor6_1920(4656, 1152), 3);
    add_background_object(create_mallfloor6_1920(4656, 1200), 3);
    add_background_object(create_mallfloor1_1891(7744, 1104), 3);
    add_background_object(create_mallfloor3_1890(7744, 1200), 3);
    add_background_object(create_mallfloor1_1891(7744, 1248), 3);
    add_background_object(create_mosaicwall1_1886(8192, 896), 3);
    add_background_object(create_mosaicwall2_1887(8304, 896), 3);
    add_background_object(create_mosaicwall1_1886(8064, 896), 3);
    add_background_object(create_mosaicwall1_1886(7936, 896), 3);
    add_background_object(create_mosaicwall2_1887(7952, 896), 3);
    add_background_object(create_mallfloor1_1891(7872, 1056), 3);
    add_background_object(create_mallfloor3_1890(7872, 1152), 3);
    add_background_object(create_mallfloor1_1891(7872, 1200), 3);
    add_background_object(create_mallfloor3_1890(8000, 864), 3);
    add_background_object(create_mallfloor3_1890(7872, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(7872, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(7872, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7872, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(7872, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(7872, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(8312, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(8312, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(8312, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(8312, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(8312, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(8312, 880), 3);
    add_background_object(create_mallfloor1_1891(8000, 1104), 3);
    add_background_object(create_mallfloor3_1890(8000, 1200), 3);
    add_background_object(create_mallfloor1_1891(8000, 1248), 3);
    add_background_object(create_mallfloor3_1890(8000, 1056), 3);
    add_background_object(create_mallfloor1_1891(8128, 1056), 3);
    add_background_object(create_mallfloor3_1890(8128, 1152), 3);
    add_background_object(create_mallfloor1_1891(8128, 1200), 3);
    add_background_object(create_mallfloor1_1891(8256, 1104), 3);
    add_background_object(create_mallfloor3_1890(8256, 1200), 3);
    add_background_object(create_mallfloor1_1891(8256, 1248), 3);
    add_background_object(create_mallfloor3_1890(8256, 1056), 3);
    add_background_object(create_mallstorebase_1932(8016, 976), 3);
    add_background_object(create_fntreeshadow_1909(7440, 912), 3);
    add_background_object(create_fnstonetreebase_1898(7472, 1040), 3);
    add_background_object(create_birchtree_1846(7456, 912), 3);
    add_background_object(create_restroomback_1930(7392, 992), 3);
    add_background_object(create_restroomback_1930(7568, 992), 3);
    add_background_object(create_mallfloor3_1890(9024, 1056), 3);
    add_background_object(create_mallfloor3_1890(8384, 864), 3);
    add_background_object(create_mallfloor3_1890(8768, 1056), 3);
    add_background_object(create_mallfloor3_1890(8512, 1056), 3);
    add_background_object(create_mallfloor1_1891(8384, 1056), 3);
    add_background_object(create_mallfloor3_1890(8384, 1152), 3);
    add_background_object(create_mallfloor1_1891(8384, 1200), 3);
    add_background_object(create_mallfloor1_1891(8512, 1104), 3);
    add_background_object(create_mallfloor3_1890(8512, 1200), 3);
    add_background_object(create_mallfloor1_1891(8512, 1248), 3);
    add_background_object(create_mallfloor1_1891(8640, 1056), 3);
    add_background_object(create_mallfloor3_1890(8640, 1152), 3);
    add_background_object(create_mallfloor1_1891(8640, 1200), 3);
    add_background_object(create_mallfloor1_1891(8768, 1104), 3);
    add_background_object(create_mallfloor3_1890(8768, 1200), 3);
    add_background_object(create_mallfloor1_1891(8768, 1248), 3);
    add_background_object(create_mallfloor1_1891(8896, 1056), 3);
    add_background_object(create_mallfloor3_1890(8896, 1152), 3);
    add_background_object(create_mallfloor1_1891(8896, 1200), 3);
    add_background_object(create_mallfloor1_1891(9024, 1104), 3);
    add_background_object(create_mallfloor3_1890(9024, 1200), 3);
    add_background_object(create_mallfloor1_1891(9024, 1248), 3);
    add_background_object(create_mallfloor1_1891(9152, 1056), 3);
    add_background_object(create_mallfloor3_1890(9152, 1152), 3);
    add_background_object(create_mallfloor1_1891(9152, 1200), 3);
    add_background_object(create_mallfloor3_1890(9280, 1056), 3);
    add_background_object(create_mallfloor1_1891(9280, 1104), 3);
    add_background_object(create_mallfloor3_1890(9280, 1200), 3);
    add_background_object(create_mallfloor1_1891(9280, 1248), 3);
    add_background_object(create_mallfloor1_1891(9408, 1056), 3);
    add_background_object(create_mallfloor3_1890(9408, 1152), 3);
    add_background_object(create_mallfloor1_1891(9408, 1200), 3);
    add_background_object(create_mallfloor1_1891(9536, 960), 3);
    add_background_object(create_mallfloor3_1890(9536, 1056), 3);
    add_background_object(create_mallfloor1_1891(9536, 1104), 3);
    add_background_object(create_mallfloor3_1890(9536, 1200), 3);
    add_background_object(create_mallfloor1_1891(9536, 1248), 3);
    add_background_object(create_mallfloor6_1920(9536, 960), 3);
    add_background_object(create_mallfloor6_1920(9536, 1008), 3);
    add_background_object(create_mallfloor1_1891(9664, 1056), 3);
    add_background_object(create_mallfloor3_1890(9664, 1152), 3);
    add_background_object(create_mallfloor1_1891(9664, 1200), 3);
    add_background_object(create_mallfloor3_1890(9792, 1056), 3);
    add_background_object(create_mallfloor1_1891(9792, 1104), 3);
    add_background_object(create_mallfloor3_1890(9792, 1200), 3);
    add_background_object(create_mallfloor1_1891(9792, 1248), 3);
    add_background_object(create_mallfloor6_1920(3504, 288), 3);
    add_background_object(create_mallfloor1_1891(9920, 1056), 3);
    add_background_object(create_mallfloor3_1890(9920, 1152), 3);
    add_background_object(create_mallfloor1_1891(9920, 1200), 3);
    add_background_object(create_mallfloor1_1891(9664, 912), 3);
    add_background_object(create_mallfloor3_1890(9664, 1008), 3);
    add_background_object(create_mallfloor1_1891(9664, 768), 3);
    add_background_object(create_mallfloor3_1890(9664, 864), 3);
    add_background_object(create_mallfloor1_1891(7872, 0), 3);
    add_background_object(create_mallfloor1_1891(8000, 0), 3);
    add_background_object(create_mallfloor1_1891(8128, 0), 3);
    add_background_object(create_mallfloor1_1891(8256, 0), 3);
    add_background_object(create_mallfloor8_1928(6976, 1080), 3);
    add_background_object(create_mallfloor8_1928(7008, 1080), 3);
    add_background_object(create_mallfloor8_1928(7040, 1080), 3);
    add_background_object(create_mallfloor8_1928(7072, 1080), 3);
    add_background_object(create_mallfloor11_2010(6976, 1056), 3);
    add_background_object(create_mallfloor6_1920(6960, 1056), 3);
    add_background_object(create_mallfloor6_1920(7104, 1056), 3);
    add_background_object(create_carouselbase_1986(7416, 752), 3);
    add_background_object(create_mallfloor1_1891(7664, 720), 3);
    add_background_object(create_mallfloor1_1891(7664, 624), 3);
    add_background_object(create_mallfloor1_1891(7664, 528), 3);
    add_background_object(create_mallfloor3_1890(7664, 480), 3);
    add_background_object(create_mallfloor3_1890(7744, 864), 3);
    add_background_object(create_carouselbase_1986(7848, 752), 3);
    add_background_object(create_fnfloor12_1659(11904, 224), 3);
    add_background_object(create_fnfloor12_1659(12032, 224), 3);
    add_background_object(create_fnfloor12_1659(12160, 224), 3);
    add_background_object(create_fnfloor12_1659(12288, 224), 3);
    add_background_object(create_fnfloor12_1659(12672, 224), 3);
    add_background_object(create_fnfloor12_1659(12544, 224), 3);
    add_background_object(create_fnfloor12_1659(12416, 224), 3);
    add_background_object(create_mallfloor1_1891(11776, 224), 3);
    add_background_object(create_mallfloor1_1891(11776, 320), 3);
    add_background_object(create_mallfloor1_1891(11776, 416), 3);
    add_background_object(create_mallfloor1_1891(11648, 224), 3);
    add_background_object(create_mallfloor1_1891(11648, 320), 3);
    add_background_object(create_mallfloor1_1891(11648, 416), 3);
    add_background_object(create_mallfloor1_1891(11520, 224), 3);
    add_background_object(create_mallfloor1_1891(11520, 320), 3);
    add_background_object(create_mallfloor1_1891(11520, 416), 3);
    add_background_object(create_mallfloor1_1891(11520, -32), 3);
    add_background_object(create_mallfloor1_1891(11648, -32), 3);
    add_background_object(create_mallfloor1_1891(11776, -32), 3);
    add_background_object(create_mallfloor1_1891(11392, -32), 3);
    add_background_object(create_mallfloor1_1891(11392, 224), 3);
    add_background_object(create_mallfloor1_1891(11392, 320), 3);
    add_background_object(create_mallfloor1_1891(11392, 416), 3);
    add_background_object(create_fnfloor12_1659(13056, 224), 3);
    add_background_object(create_fnfloor12_1659(12928, 224), 3);
    add_background_object(create_fnfloor12_1659(12800, 224), 3);
    add_background_object(create_fnfloor12_1659(13440, 224), 3);
    add_background_object(create_fnfloor12_1659(13312, 224), 3);
    add_background_object(create_fnfloor12_1659(13184, 224), 3);
    add_background_object(create_fnfloor12_1659(13568, 224), 3);
    add_background_object(create_mallfloor1_1891(11264, 224), 3);
    add_background_object(create_mallfloor1_1891(11264, 320), 3);
    add_background_object(create_mallfloor1_1891(11264, 416), 3);
    add_background_object(create_mallfloor1_1891(11136, 224), 3);
    add_background_object(create_mallfloor1_1891(11136, 320), 3);
    add_background_object(create_mallfloor1_1891(11136, 416), 3);
    add_background_object(create_riverbridge8_1800(5104, 112), 3);
    add_background_object(create_riverbridgebase2_1807(4896, 152), 3);
    add_background_object(create_riverbridgebase2_1807(4960, 152), 3);
    add_background_object(create_riverbridgebase2_1807(5024, 152), 3);
    add_background_object(create_riverbridgebase2_1807(5056, 152), 3);
    add_background_object(create_mallfloor8_1928(4752, 216), 3);
    add_background_object(create_mallfloor8_1928(4720, 216), 3);
    add_background_object(create_fnfloor12_1659(13952, 224), 3);
    add_background_object(create_fnfloor12_1659(13824, 224), 3);
    add_background_object(create_fnfloor12_1659(13696, 224), 3);
    add_background_object(create_fnfloor12_1659(14080, 224), 3);
    add_background_object(create_fnfloor12_1659(14208, 224), 3);
    add_background_object(create_fnfloor12_1659(14336, 224), 3);
    add_background_object(create_fnfloor12_1659(14464, 224), 3);
    add_background_object(create_fnfloor12_1659(14592, 224), 3);
    add_background_object(create_fnfloor12_1659(14720, 224), 3);
    add_background_object(create_fnfloor12_1659(14848, 224), 3);
    add_background_object(create_fnfloor12_1659(14976, 224), 3);
    add_background_object(create_fnfloor12_1659(15104, 224), 3);
    add_background_object(create_mallscalecolumn1_1888(7232, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(7232, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7232, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(7232, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(7232, 912), 3);
    add_background_object(create_mallfloor3_1890(7232, 864), 3);
    add_background_object(create_mallfloor6_1920(7232, 864), 3);
    add_background_object(create_mallfloor3_1890(6528, 744), 3);
    add_background_object(create_carouselbase_1986(7416, 416), 3);
    add_background_object(create_mallfloor1_1891(7104, 792), 3);
    add_background_object(create_mallfloor1_1891(6976, 792), 3);
    add_background_object(create_mallfloor8_1928(7200, 888), 3);
    add_background_object(create_mallfloor8_1928(7168, 888), 3);
    add_background_object(create_mallfloor8_1928(7136, 888), 3);
    add_background_object(create_mallfloor8_1928(7104, 888), 3);
    add_background_object(create_mallfloor8_1928(7072, 888), 3);
    add_background_object(create_mallfloor8_1928(7040, 888), 3);
    add_background_object(create_mallfloor8_1928(7008, 888), 3);
    add_background_object(create_mallfloor8_1928(6976, 888), 3);
    add_background_object(create_mallfloor8_1928(6944, 792), 3);
    add_background_object(create_mallfloor6_1920(6976, 792), 3);
    add_background_object(create_mallfloor6_1920(6976, 840), 3);
    add_background_object(create_mallfloor8_1928(6944, 816), 3);
    add_background_object(create_mallfloor8_1928(6944, 840), 3);
    add_background_object(create_mallfloor8_1928(6944, 864), 3);
    add_background_object(create_mallfloor8_1928(6944, 888), 3);
    add_background_object(create_mallscalecolumn1_1888(6944, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(6944, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(6944, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(6944, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(6944, 912), 3);
    add_background_object(create_birchtree_1846(6984, 928), 3);
    add_background_object(create_carouselbase_1986(7848, 640), 3);
    add_background_object(create_mallfloor3_1890(8096, 480), 3);
    add_background_object(create_mallfloor1_1891(8096, 624), 3);
    add_background_object(create_mallfloor1_1891(8096, 528), 3);
    add_background_object(create_mallfloor3_1890(8128, 720), 3);
    add_background_object(create_mallfloor3_1890(7744, 1056), 3);
    add_background_object(create_mallfloor3_1890(8256, 720), 3);
    add_background_object(create_mallfloor3_1890(8384, 816), 3);
    add_background_object(create_mallfloor1_1891(8384, 912), 3);
    add_background_object(create_mallfloor3_1890(8384, 1008), 3);
    add_background_object(create_mallfloor8_1928(8096, 720), 3);
    add_background_object(create_mallfloor8_1928(8096, 744), 3);
    add_background_object(create_mallfloor3_1890(7040, 744), 3);
    add_background_object(create_mallfloor6_1920(7216, 792), 3);
    add_background_object(create_mallfloor6_1920(7216, 840), 3);
    add_background_object(create_mallfloor6_1920(7152, 744), 3);
    add_background_object(create_ferriswheelbase2_1644(6496, 568), 3);
    add_background_object(create_ferriswheelbase2_1644(6496, 632), 3);
    add_background_object(create_ferriswheelbase_1664(6480, 528), 3);
    add_background_object(create_ferriswheelbase2_1644(7136, 568), 3);
    add_background_object(create_ferriswheelbase2_1644(7136, 632), 3);
    add_background_object(create_ferriswheelbase_1664(7120, 528), 3);
    add_background_object(create_stopperback_1927(6504, 552), 3);
    add_background_object(create_fncable_1922(7016, 552), 3);
    add_background_object(create_fncable_1922(7080, 552), 3);
    add_background_object(create_fncable_1922(6960, 552), 3);
    add_background_object(create_fncable_1922(6896, 552), 3);
    add_background_object(create_fncable_1922(6704, 552), 3);
    add_background_object(create_fncable_1922(6640, 552), 3);
    add_background_object(create_fncable_1922(6576, 552), 3);
    add_background_object(create_fncable_1922(6512, 552), 3);
    add_background_object(create_ferriswheelbase2_1644(6832, 488), 3);
    add_background_object(create_mallfloor6_1920(7664, 624), 3);
    add_background_object(create_mallfloor6_1920(7664, 576), 3);
    add_background_object(create_mallfloor6_1920(7664, 528), 3);
    add_background_object(create_mallfloor6_1920(7664, 480), 3);
    add_background_object(create_mallfloor1_1891(7616, 0), 3);
    add_background_object(create_mallfloor1_1891(7744, 0), 3);
    add_background_object(create_mallfloor1_1891(7360, 0), 3);
    add_background_object(create_mallfloor1_1891(7488, 0), 3);
    add_background_object(create_mallfloor1_1891(7104, 0), 3);
    add_background_object(create_mallfloor1_1891(7232, 0), 3);
    add_background_object(create_mallfloor1_1891(6848, 0), 3);
    add_background_object(create_mallfloor1_1891(6976, 0), 3);
    add_background_object(create_mallfloor1_1891(6720, 0), 3);
    add_background_object(create_mallfloor1_1891(6464, 0), 3);
    add_background_object(create_mallfloor1_1891(6592, 0), 3);
    add_background_object(create_mallfloor1_1891(6336, 0), 3);
    add_background_object(create_mallfloor1_1891(6208, 0), 3);
    add_background_object(create_mallfloor6_1920(6208, 48), 3);
    add_background_object(create_mallfloor6_1920(6208, 0), 3);
    add_background_object(create_carouselbase_1986(7416, 304), 3);
    add_background_object(create_carouselbase_1986(7416, 192), 3);
    add_background_object(create_mallfloor8_1928(7168, 768), 3);
    add_background_object(create_mallfloor8_1928(7200, 768), 3);
    add_background_object(create_mallfloor8_1928(7200, 744), 3);
    add_background_object(create_mallfloor8_1928(7168, 744), 3);
    add_background_object(create_mallfloor6_1920(7776, 528), 3);
    add_background_object(create_mallfloor6_1920(7776, 480), 3);
    add_background_object(create_mallfloor6_1920(7776, 576), 3);
    add_background_object(create_mallfloor6_1920(7776, 624), 3);
    add_background_object(create_mallfloor6_1920(7776, 672), 3);
    add_background_object(create_mallfloor6_1920(7776, 720), 3);
    add_background_object(create_mallfloor6_1920(7776, 768), 3);
    add_background_object(create_mallfloor6_1920(8112, 864), 3);
    add_background_object(create_mallfloor6_1920(8384, 960), 3);
    add_background_object(create_mallfloor6_1920(8384, 1008), 3);
    add_background_object(create_mallfloor6_1920(8384, 912), 3);
    add_background_object(create_mallfloor6_1920(8384, 864), 3);
    add_background_object(create_mallfloor6_1920(8384, 816), 3);
    add_background_object(create_mallfloor6_1920(8128, 720), 3);
    add_background_object(create_mallfloor6_1920(8096, 672), 3);
    add_background_object(create_mallfloor6_1920(8096, 624), 3);
    add_background_object(create_mallfloor6_1920(8096, 576), 3);
    add_background_object(create_mallfloor6_1920(8096, 528), 3);
    add_background_object(create_mallfloor6_1920(8096, 480), 3);
    add_background_object(create_edgeoverlay_1805(7736, 456), 3);
    add_background_object(create_edgeoverlay_1805(8112, 456), 3);
    add_background_object(create_mallscalecolumn1_1888(7688, 832), 3);
    add_background_object(create_mallscalecolumn2_1889(7688, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(8096, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(8096, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(8096, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(3928, 448), 3);
    add_background_object(create_mallfloor3_1890(8000, 288), 3);
    add_background_object(create_mallfloor3_1890(8128, 288), 3);
    add_background_object(create_mallfloor3_1890(8256, 288), 3);
    add_background_object(create_mallfloor6_1920(8000, 288), 3);
    add_background_object(create_fncable_1922(6768, 552), 3);
    add_background_object(create_fncable_1922(6832, 552), 3);
    add_background_object(create_mallfloor1_1891(8384, 0), 3);
    add_background_object(create_mallfloor1_1891(8512, 0), 3);
    add_background_object(create_mallscalecolumn1_1888(8120, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(8120, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(8120, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(8120, 352), 3);
    add_background_object(create_mallscalecolumn2_1889(8120, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 368), 3);
    add_background_object(create_mallscalecolumn2_1889(8304, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 432), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 464), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 496), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 528), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 560), 3);
    add_background_object(create_mallscalecolumn1_1888(8304, 592), 3);
    add_background_object(create_mallfloor1_1891(8224, 624), 3);
    add_background_object(create_mallfloor1_1891(8352, 624), 3);
    add_background_object(create_mallfloor6_1920(8464, 624), 3);
    add_background_object(create_mallfloor6_1920(8464, 672), 3);
    add_background_object(create_mallfloor8_1928(8480, 696), 3);
    add_background_object(create_mallfloor8_1928(8480, 672), 3);
    add_background_object(create_mallfloor8_1928(8480, 648), 3);
    add_background_object(create_mallfloor8_1928(8480, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 768), 3);
    add_background_object(create_mallfloor6_1920(3008, 864), 3);
    add_background_object(create_mallfloor6_1920(3008, 912), 3);
    add_background_object(create_mallfloor6_1920(3008, 960), 3);
    add_background_object(create_mallfloor6_1920(3008, 1008), 3);
    add_background_object(create_mallfloor6_1920(3008, 1056), 3);
    add_background_object(create_mallfloor6_1920(2752, 816), 3);
    add_background_object(create_mallfloor6_1920(2752, 864), 3);
    add_background_object(create_mallfloor6_1920(2752, 912), 3);
    add_background_object(create_mallfloor6_1920(2752, 960), 3);
    add_background_object(create_mallfloor6_1920(2864, 816), 3);
    add_background_object(create_mallfloor6_1920(2864, 864), 3);
    add_background_object(create_mallfloor6_1920(2864, 912), 3);
    add_background_object(create_mallfloor6_1920(2864, 960), 3);
    add_background_object(create_mallfloor6_1920(2864, 768), 3);
    add_background_object(create_mallfloor6_1920(2752, 720), 3);
    add_background_object(create_floor34_1657(2792, 1080), 3);
    add_background_object(create_floor34_1657(2760, 1080), 3);
    add_background_object(create_floor34_1657(2824, 1080), 3);
    add_background_object(create_floor34_1657(2856, 1080), 3);
    add_background_object(create_floor34_1657(2888, 1080), 3);
    add_background_object(create_mallfloor1_1891(2880, 1104), 3);
    add_background_object(create_mallfloor1_1891(2752, 1104), 3);
    add_background_object(create_mallfloor6_1920(2480, 864), 3);
    add_background_object(create_floor25_1654(2528, 864), 3);
    add_background_object(create_floor34_1657(2496, 864), 3);
    add_background_object(create_mallfloor8_1928(4752, 240), 3);
    add_background_object(create_mallfloor8_1928(4720, 240), 3);
    add_background_object(create_parasolbase_1906(3304, 800), 3);
    add_background_object(create_parasolbase2_1907(3280, 832), 3);
    add_background_object(create_parasolbase_1906(3624, 800), 3);
    add_background_object(create_parasolbase2_1907(3600, 832), 3);
    add_background_object(create_parasolbase_1906(4520, 800), 3);
    add_background_object(create_parasolbase2_1907(4496, 832), 3);
    add_background_object(create_mallfloor8_1928(6656, 768), 3);
    add_background_object(create_mallfloor8_1928(6688, 768), 3);
    add_background_object(create_mallfloor8_1928(6720, 768), 3);
    add_background_object(create_mallfloor8_1928(6752, 768), 3);
    add_background_object(create_mallfloor8_1928(6912, 768), 3);
    add_background_object(create_mallfloor8_1928(6944, 768), 3);
    add_background_object(create_mallfloor8_1928(6976, 768), 3);
    add_background_object(create_mallfloor8_1928(7008, 768), 3);
    add_background_object(create_mallfloor6_1920(7040, 744), 3);
    add_background_object(create_mallfloor6_1920(6640, 744), 3);
    add_background_object(create_mallfloor11_2010(6656, 744), 3);
    add_background_object(create_mallfloor11_2010(6912, 744), 3);
    add_background_object(create_mallfloor8_1928(6784, 768), 3);
    add_background_object(create_mallfloor8_1928(6816, 768), 3);
    add_background_object(create_mallfloor8_1928(6848, 768), 3);
    add_background_object(create_mallfloor8_1928(6880, 768), 3);
    add_background_object(create_mallfloor11_2010(6784, 744), 3);
    add_background_object(create_birchtree_1846(6704, 616), 3);
    add_background_object(create_birchtree_1846(6896, 616), 3);
    add_background_object(create_lamppostback_1709(6624, 664), 3);
    add_background_object(create_lamppostback_1709(7040, 664), 3);
    add_background_object(create_lamppostback_1709(6544, 664), 3);
    add_background_object(create_lamppostback_1709(6160, 568), 3);
    add_background_object(create_lamppostback_1709(6224, 568), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 480), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 480), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 544), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 544), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 608), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 608), 3);
    add_background_object(create_malllogo_1918(3384, 456), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 672), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 672), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 736), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 736), 3);
    add_background_object(create_ferriswheelbase2_1644(3416, 800), 3);
    add_background_object(create_ferriswheelbase2_1644(3512, 800), 3);
    add_background_object(create_mallfloor3_1890(9792, 912), 3);
    add_background_object(create_mallfloor1_1891(9792, 960), 3);
    add_background_object(create_mallfloor3_1890(9920, 1008), 3);
    add_background_object(create_mallfloor3_1890(9792, 768), 3);
    add_background_object(create_mallfloor1_1891(9792, 816), 3);
    add_background_object(create_mallfloor3_1890(10048, 1056), 3);
    add_background_object(create_mallfloor1_1891(10048, 1104), 3);
    add_background_object(create_mallfloor3_1890(10048, 1200), 3);
    add_background_object(create_mallfloor1_1891(10048, 1248), 3);
    add_background_object(create_mallfloor1_1891(10176, 1056), 3);
    add_background_object(create_mallfloor3_1890(10176, 1152), 3);
    add_background_object(create_mallfloor1_1891(10176, 1200), 3);
    add_background_object(create_mallfloor3_1890(9920, 960), 3);
    add_background_object(create_mallfloor1_1891(10048, 960), 3);
    add_background_object(create_mallfloor3_1890(10176, 1008), 3);
    add_background_object(create_mallfloor3_1890(9792, 624), 3);
    add_background_object(create_mallfloor1_1891(9792, 672), 3);
    add_background_object(create_mallfloor3_1890(9792, 480), 3);
    add_background_object(create_mallfloor1_1891(9792, 528), 3);
    add_background_object(create_mallfloor3_1890(10304, 1056), 3);
    add_background_object(create_mallfloor1_1891(10304, 1104), 3);
    add_background_object(create_mallfloor3_1890(10304, 1200), 3);
    add_background_object(create_mallfloor1_1891(10304, 1248), 3);
    add_background_object(create_mallfloor1_1891(10432, 1056), 3);
    add_background_object(create_mallfloor3_1890(10432, 1152), 3);
    add_background_object(create_mallfloor1_1891(10432, 1200), 3);
    add_background_object(create_mallfloor3_1890(10176, 960), 3);
    add_background_object(create_mallfloor1_1891(10304, 960), 3);
    add_background_object(create_mallfloor1_1891(10432, 912), 3);
    add_background_object(create_mallfloor3_1890(10432, 1008), 3);
    add_background_object(create_mallfloor3_1890(9792, 336), 3);
    add_background_object(create_mallfloor1_1891(9792, 384), 3);
    add_background_object(create_mallfloor1_1891(10560, 960), 3);
    add_background_object(create_mallfloor3_1890(10560, 1056), 3);
    add_background_object(create_mallfloor1_1891(10560, 1104), 3);
    add_background_object(create_mallfloor1_1891(10560, 816), 3);
    add_background_object(create_mallfloor3_1890(10560, 912), 3);
    add_background_object(create_mallfloor1_1891(10560, 672), 3);
    add_background_object(create_mallfloor3_1890(10560, 768), 3);
    add_background_object(create_mallfloor3_1890(10560, 1200), 3);
    add_background_object(create_mallfloor1_1891(10560, 1248), 3);
    add_background_object(create_mallfloor3_1890(10560, 624), 3);
    add_background_object(create_mallfloor3_1890(10560, 576), 3);
    add_background_object(create_mallfloor1_1891(10560, 240), 3);
    add_background_object(create_mallfloor3_1890(10560, 336), 3);
    add_background_object(create_mallfloor1_1891(10560, 96), 3);
    add_background_object(create_mallfloor3_1890(10560, 192), 3);
    add_background_object(create_mallfloor3_1890(10560, 48), 3);
    add_background_object(create_mallfloor1_1891(10560, -48), 3);
    add_background_object(create_mallfloor6_1920(9664, 912), 3);
    add_background_object(create_mallfloor6_1920(9664, 864), 3);
    add_background_object(create_mallfloor6_1920(9664, 816), 3);
    add_background_object(create_mallfloor6_1920(9792, 720), 3);
    add_background_object(create_mallfloor6_1920(9792, 672), 3);
    add_background_object(create_mallfloor6_1920(9792, 624), 3);
    add_background_object(create_mallfloor6_1920(9792, 576), 3);
    add_background_object(create_mallfloor6_1920(9792, 528), 3);
    add_background_object(create_mallfloor6_1920(9792, 480), 3);
    add_background_object(create_mallfloor6_1920(9792, 432), 3);
    add_background_object(create_mallfloor6_1920(9792, 384), 3);
    add_background_object(create_mallfloor1_1891(10432, 768), 3);
    add_background_object(create_mallfloor3_1890(10432, 864), 3);
    add_background_object(create_mallfloor1_1891(10432, 624), 3);
    add_background_object(create_mallfloor3_1890(10432, 720), 3);
    add_background_object(create_mallfloor3_1890(10432, 576), 3);
    add_background_object(create_mallfloor1_1891(10432, 336), 3);
    add_background_object(create_mallfloor3_1890(10432, 432), 3);
    add_background_object(create_mallfloor1_1891(10432, 192), 3);
    add_background_object(create_mallfloor3_1890(10432, 288), 3);
    add_background_object(create_mallfloor1_1891(10432, 48), 3);
    add_background_object(create_mallfloor3_1890(10432, 144), 3);
    add_background_object(create_mallfloor3_1890(10432, 0), 3);
    add_background_object(create_mallfloor6_1920(9904, 384), 3);
    add_background_object(create_mallfloor6_1920(9904, 432), 3);
    add_background_object(create_mallfloor6_1920(9904, 480), 3);
    add_background_object(create_mallfloor6_1920(9904, 528), 3);
    add_background_object(create_mallfloor6_1920(10432, 336), 3);
    add_background_object(create_mallfloor6_1920(10432, 384), 3);
    add_background_object(create_mallfloor6_1920(10432, 432), 3);
    add_background_object(create_mallfloor6_1920(10432, 288), 3);
    add_background_object(create_mallfloor6_1920(9904, 912), 3);
    add_background_object(create_mallfloor6_1920(10432, 912), 3);
    add_background_object(create_mallfloor3_1890(10304, 240), 3);
    add_background_object(create_mallfloor1_1891(10304, 144), 3);
    add_background_object(create_mallfloor3_1890(10304, 96), 3);
    add_background_object(create_mallfloor1_1891(10304, 0), 3);
    add_background_object(create_mallfloor3_1890(10176, 0), 3);
    add_background_object(create_mallfloor1_1891(10176, 192), 3);
    add_background_object(create_mallfloor3_1890(10176, 144), 3);
    add_background_object(create_mallfloor1_1891(10176, 48), 3);
    add_background_object(create_mallfloor3_1890(10048, 240), 3);
    add_background_object(create_mallfloor1_1891(10048, 144), 3);
    add_background_object(create_mallfloor3_1890(10048, 96), 3);
    add_background_object(create_mallfloor1_1891(10048, 0), 3);
    add_background_object(create_mallfloor1_1891(10688, 624), 3);
    add_background_object(create_mallfloor3_1890(10688, 576), 3);
    add_background_object(create_mallfloor1_1891(10816, 672), 3);
    add_background_object(create_mallfloor3_1890(10816, 624), 3);
    add_background_object(create_mallfloor3_1890(10816, 576), 3);
    add_background_object(create_mallfloor3_1890(10688, 720), 3);
    add_background_object(create_mallfloor1_1891(10944, 624), 3);
    add_background_object(create_mallfloor3_1890(10944, 576), 3);
    add_background_object(create_mallfloor1_1891(11072, 672), 3);
    add_background_object(create_mallfloor3_1890(11072, 624), 3);
    add_background_object(create_mallfloor3_1890(11072, 576), 3);
    add_background_object(create_mallfloor3_1890(10944, 720), 3);
    add_background_object(create_mallfloor1_1891(10688, 768), 3);
    add_background_object(create_mallfloor1_1891(10816, 816), 3);
    add_background_object(create_mallfloor3_1890(10816, 768), 3);
    add_background_object(create_mallfloor3_1890(10688, 864), 3);
    add_background_object(create_mallfloor1_1891(10944, 768), 3);
    add_background_object(create_mallfloor1_1891(11072, 816), 3);
    add_background_object(create_mallfloor3_1890(11072, 768), 3);
    add_background_object(create_mallfloor3_1890(10944, 864), 3);
    add_background_object(create_mallfloor3_1890(11136, 528), 3);
    add_background_object(create_mallfloor3_1890(9920, 0), 3);
    add_background_object(create_mallfloor6_1920(9920, 0), 3);
    add_background_object(create_mallfloor1_1891(8512, 912), 3);
    add_background_object(create_mallfloor3_1890(8512, 1008), 3);
    add_background_object(create_mallfloor1_1891(8512, 816), 3);
    add_background_object(create_mallfloor1_1891(8640, 912), 3);
    add_background_object(create_mallfloor3_1890(8640, 1008), 3);
    add_background_object(create_floor25_1654(8512, 624), 3);
    add_background_object(create_mallfloor3_1890(8512, 768), 3);
    add_background_object(create_floor25_1654(8744, 840), 3);
    add_background_object(create_mallfloor6_1920(8624, 768), 3);
    add_background_object(create_fnmallglass_1987(7744, 928), 3);
    add_background_object(create_fnstonetreebase_1898(9536, 944), 3);
    add_background_object(create_birchtree_1846(9520, 816), 3);
    add_background_object(create_mallfloor8_1928(8768, 1032), 3);
    add_background_object(create_mallfloor8_1928(8800, 1032), 3);
    add_background_object(create_mallfloor8_1928(8832, 1032), 3);
    add_background_object(create_mallfloor8_1928(8864, 1032), 3);
    add_background_object(create_mallfloor8_1928(8784, 1008), 3);
    add_background_object(create_mallfloor8_1928(8816, 1008), 3);
    add_background_object(create_mallfloor8_1928(8848, 1008), 3);
    add_background_object(create_mallfloor8_1928(8768, 984), 3);
    add_background_object(create_mallfloor8_1928(8800, 984), 3);
    add_background_object(create_mallfloor8_1928(8832, 984), 3);
    add_background_object(create_mallfloor8_1928(8752, 960), 3);
    add_background_object(create_mallfloor8_1928(8784, 960), 3);
    add_background_object(create_mallfloor8_1928(8816, 960), 3);
    add_background_object(create_mallfloor8_1928(8768, 936), 3);
    add_background_object(create_mallfloor8_1928(8800, 936), 3);
    add_background_object(create_mallfloor8_1928(8832, 936), 3);
    add_background_object(create_mallfloor8_1928(8752, 912), 3);
    add_background_object(create_mallfloor8_1928(8784, 912), 3);
    add_background_object(create_mallfloor8_1928(8816, 912), 3);
    add_background_object(create_mallfloor8_1928(8768, 888), 3);
    add_background_object(create_mallfloor8_1928(8800, 888), 3);
    add_background_object(create_mallfloor8_1928(8752, 864), 3);
    add_background_object(create_mallfloor3_1890(8640, 864), 3);
    add_background_object(create_mallfloor8_1928(8640, 840), 3);
    add_background_object(create_mallfloor8_1928(8672, 840), 3);
    add_background_object(create_mallfloor8_1928(8624, 816), 3);
    add_background_object(create_mallfloor8_1928(2976, 1080), 3);
    add_background_object(create_mallfloor8_1928(2624, 1080), 3);
    add_background_object(create_mallfloor8_1928(2656, 1080), 3);
    add_background_object(create_mallfloor8_1928(2608, 1056), 3);
    add_background_object(create_mallfloor8_1928(2640, 1056), 3);
    add_background_object(create_mallfloor8_1928(2624, 1032), 3);
    add_background_object(create_mallfloor8_1928(2608, 1008), 3);
    add_background_object(create_mallfloor1_1891(2496, 912), 3);
    add_background_object(create_mallfloor6_1920(2608, 960), 3);
    add_background_object(create_mallfloor6_1920(2608, 912), 3);
    add_background_object(create_mallfloor8_1928(2528, 888), 3);
    add_background_object(create_mallfloor8_1928(2496, 888), 3);
    add_background_object(create_fnmallglass_1987(11264, 96), 3);
    add_background_object(create_mallfloor1_1891(11264, 0), 3);
    add_background_object(create_mallfloor6_1920(11376, 48), 3);
    add_background_object(create_mallfloor6_1920(11376, 0), 3);
    add_background_object(create_mallfloor6_1920(11392, 16), 3);
    add_background_object(create_mallfloor6_1920(11136, 224), 3);
    add_background_object(create_mallfloor6_1920(11136, 272), 3);
    add_background_object(create_mallfloor6_1920(11136, 320), 3);
    add_background_object(create_mallfloor6_1920(11136, 368), 3);
    add_background_object(create_mallfloor6_1920(11136, 416), 3);
    add_background_object(create_mallfloor6_1920(11136, 464), 3);
    add_background_object(create_mallfloor1_1891(11136, 0), 3);
    add_background_object(create_fnmallglass_1987(11136, 96), 3);
    add_background_object(create_ferriswheelbase2_1644(10816, 384), 3);
    add_background_object(create_ferriswheelbase2_1644(10912, 384), 3);
    add_background_object(create_ferriswheelbase2_1644(10816, 448), 3);
    add_background_object(create_ferriswheelbase2_1644(10912, 448), 3);
    add_background_object(create_ferriswheelbase2_1644(10816, 512), 3);
    add_background_object(create_ferriswheelbase2_1644(10912, 512), 3);
    add_background_object(create_malllogo_1918(10784, 360), 3);
    add_background_object(create_mallfloor1_1891(11200, 624), 3);
    add_background_object(create_mallfloor3_1890(11200, 576), 3);
    add_background_object(create_mallfloor1_1891(11328, 672), 3);
    add_background_object(create_mallfloor3_1890(11328, 624), 3);
    add_background_object(create_mallfloor3_1890(11328, 576), 3);
    add_background_object(create_mallfloor3_1890(11200, 720), 3);
    add_background_object(create_mallfloor1_1891(11200, 768), 3);
    add_background_object(create_mallfloor1_1891(11328, 816), 3);
    add_background_object(create_mallfloor3_1890(11328, 768), 3);
    add_background_object(create_mallfloor3_1890(11200, 864), 3);
    add_background_object(create_mallfloor3_1890(11264, 528), 3);
    add_background_object(create_mallfloor1_1891(11456, 624), 3);
    add_background_object(create_mallfloor3_1890(11456, 576), 3);
    add_background_object(create_mallfloor1_1891(11584, 672), 3);
    add_background_object(create_mallfloor3_1890(11584, 624), 3);
    add_background_object(create_mallfloor3_1890(11584, 576), 3);
    add_background_object(create_mallfloor3_1890(11456, 720), 3);
    add_background_object(create_mallfloor1_1891(11456, 768), 3);
    add_background_object(create_mallfloor1_1891(11584, 816), 3);
    add_background_object(create_mallfloor3_1890(11584, 768), 3);
    add_background_object(create_mallfloor3_1890(11456, 864), 3);
    add_background_object(create_mallfloor3_1890(11520, 528), 3);
    add_background_object(create_mallfloor3_1890(11392, 528), 3);
    add_background_object(create_mallfountain1_1910(10688, 480), 3);
    add_background_object(create_redcarpet_1919(10816, 576), 3);
    add_background_object(create_redcarpet_1919(10944, 576), 3);
    add_background_object(create_redcarpet_1919(10688, 576), 3);
    add_background_object(create_redcarpet_1919(10560, 576), 3);
    add_background_object(create_redcarpet_1919(11072, 576), 3);
    add_background_object(create_redcarpet_1919(9792, 336), 3);
    add_background_object(create_mallfloor6_1920(9904, 336), 3);
    add_background_object(create_mallfloor6_1920(9792, 336), 3);
    add_background_object(create_redcarpet_1919(9664, 768), 3);
    add_background_object(create_mallfloor6_1920(9664, 768), 3);
    add_background_object(create_velvetrope_1931(7480, 832), 3);
    add_background_object(create_velvetrope_1931(7424, 832), 3);
    add_background_object(create_velvetrope_1931(7536, 832), 3);
    add_background_object(create_velvetrope_1931(7592, 832), 3);
    add_background_object(create_velvetrope_1931(7368, 832), 3);
    add_background_object(create_velvetrope_1931(9320, 1024), 3);
    add_background_object(create_velvetrope_1931(9264, 1024), 3);
    add_background_object(create_velvetrope_1931(9376, 1024), 3);
    add_background_object(create_velvetrope_1931(9728, 736), 3);
    add_background_object(create_velvetrope_1931(9672, 736), 3);
    add_background_object(create_mallfountain1_1910(11200, 128), 3);
    add_background_object(create_fntreeshadow_1909(11392, 80), 3);
    add_background_object(create_fnstonetreebase_1898(11424, 208), 3);
    add_background_object(create_birchtree_1846(11408, 80), 3);
    add_background_object(create_fntreeshadow_1909(11520, 80), 3);
    add_background_object(create_fnstonetreebase_1898(11552, 208), 3);
    add_background_object(create_birchtree_1846(11536, 80), 3);
    add_background_object(create_fntreeshadow_1909(11648, 80), 3);
    add_background_object(create_fnstonetreebase_1898(11680, 208), 3);
    add_background_object(create_birchtree_1846(11664, 80), 3);
    add_background_object(create_fntreeshadow_1909(11776, 80), 3);
    add_background_object(create_fnstonetreebase_1898(11808, 208), 3);
    add_background_object(create_birchtree_1846(11792, 80), 3);
    add_background_object(create_gachaponbase_1850(9024, 320), 3);
    add_background_object(create_mallfloor12_2011(3136, 656), 3);
    add_background_object(create_lamppostback_1709(12304, 144), 3);
    add_background_object(create_lamppostback_1709(12496, 144), 3);
    add_background_object(create_lamppostback_1709(12688, 144), 3);
    add_background_object(create_lamppostback_1709(12880, 144), 3);
    add_background_object(create_lamppostback_1709(13072, 144), 3);
    add_background_object(create_lamppostback_1709(13264, 144), 3);
    add_background_object(create_lamppostback_1709(13456, 144), 3);
    add_background_object(create_lamppostback_1709(13648, 144), 3);
    add_background_object(create_lamppostback_1709(13840, 144), 3);
    add_background_object(create_lamppostback_1709(14032, 144), 3);
    add_background_object(create_lamppostback_1709(14224, 144), 3);
    add_background_object(create_lamppostback_1709(14416, 144), 3);
    add_background_object(create_lamppostback_1709(14608, 144), 3);
    add_background_object(create_lamppostback_1709(14800, 144), 3);
    add_background_object(create_lamppostback_1709(14992, 144), 3);
    add_background_object(create_backdrop_2004(4080, 0), 3);
    add_background_object(create_backdrop_2004(4080, 128), 3);
    add_background_object(create_backdrop_2004(4080, 256), 3);
    add_background_object(create_backdrop_2004(4080, 384), 3);
    add_background_object(create_backdrop_2004(4080, 512), 3);
    add_background_object(create_backdrop_2004(4856, 688), 3);
    add_background_object(create_backdrop_2004(4856, 816), 3);
    add_background_object(create_backdrop_2004(4856, 944), 3);
    add_background_object(create_backdrop_2004(4856, 1072), 3);
    add_background_object(create_backdrop_2004(5768, 560), 3);
    add_background_object(create_backdrop_2004(5768, 432), 3);
    add_background_object(create_backdrop_2004(5768, 304), 3);
    add_background_object(create_backdrop_2004(5768, 176), 3);
    add_background_object(create_backdrop_2004(5768, 48), 3);
    add_background_object(create_backdrop_2004(6056, 0), 3);
    add_background_object(create_backdrop_2004(6056, 128), 3);
    add_background_object(create_backdrop_2004(6056, 256), 3);
    add_background_object(create_backdrop_2004(6056, 384), 3);
    add_background_object(create_backdrop_2004(6056, 512), 3);
    add_background_object(create_backdrop_2004(6056, 640), 3);
    add_background_object(create_backdrop_2004(6056, 768), 3);
    add_background_object(create_mallfloor6_1920(10672, 336), 3);
    add_background_object(create_mallfloor6_1920(10672, 288), 3);
    add_background_object(create_mallfloor6_1920(10672, 240), 3);
    add_background_object(create_mallfloor6_1920(10672, 192), 3);
    add_background_object(create_mallfloor6_1920(10672, 144), 3);
    add_background_object(create_mallfloor6_1920(10672, 96), 3);
    add_background_object(create_mallfloor6_1920(10672, 48), 3);
    add_background_object(create_mallfloor6_1920(10672, 0), 3);
    add_background_object(create_mallfloor1_1891(10560, 384), 3);
    add_background_object(create_mallfloor6_1920(10672, 384), 3);
    add_background_object(create_mallfloor6_1920(10672, 432), 3);
    add_background_object(create_edgeoverlay_1805(4008, 640), 3);
    add_background_object(create_edgeoverlay_1805(6256, 648), 3);
    add_background_object(create_edgeoverlay_1805(6448, 960), 3);
    add_object(create_enemydusterarm2_1938(3459, 842), 3);
    add_object(create_enemydusterarm2_1938(5267, 970), 3);
    add_object(create_enemydusterarm2_1938(4563, 170), 3);
    add_object(create_enemydusterarm1_1939(3472, 807), 3);
    add_object(create_enemydusterarm1_1939(5280, 935), 3);
    add_object(create_enemydusterarm1_1939(4576, 135), 3);
    add_object(create_objectjumppad_1510(8352, 1056), 3);
    add_object(create_objectjumppad_1510(7952, 1056), 3);
    add_object(create_objectjumppad_1510(7536, 1056), 3);
    add_object(create_objectjumppad_1510(7184, 1056), 3);
    add_object(create_restroommen_1941(7416, 1024), 3);
    add_object(create_restroomwomen_1942(7592, 1024), 3);
    add_object(create_levelmovingplatform1_1965(5568, 1200), 3);
    add_object(create_paperlantern_527(5296, 1000), 3);
    add_object(create_paperlantern_527(5536, 1000), 3);
    add_object(create_paperlantern_527(5344, 1000), 3);
    add_object(create_paperlantern_527(5488, 1000), 3);
    add_object(create_paperlantern_527(5416, 1000), 3);
    add_object(create_paperlantern_527(112, 1144), 3);
    add_object(create_paperlantern_527(352, 1144), 3);
    add_object(create_paperlantern_527(160, 1144), 3);
    add_object(create_paperlantern_527(304, 1144), 3);
    add_object(create_paperlantern_527(232, 1144), 3);
    add_object(create_paperlantern_527(112, 360), 3);
    add_object(create_paperlantern_527(352, 360), 3);
    add_object(create_paperlantern_527(160, 360), 3);
    add_object(create_paperlantern_527(304, 360), 3);
    add_object(create_paperlantern_527(232, 360), 3);
    add_object(create_paperlantern_527(112, 584), 3);
    add_object(create_paperlantern_527(352, 584), 3);
    add_object(create_paperlantern_527(160, 584), 3);
    add_object(create_paperlantern_527(304, 584), 3);
    add_object(create_paperlantern_527(232, 584), 3);
    add_object(create_paperlantern_527(112, 808), 3);
    add_object(create_paperlantern_527(352, 808), 3);
    add_object(create_paperlantern_527(160, 808), 3);
    add_object(create_paperlantern_527(304, 808), 3);
    add_object(create_paperlantern_527(232, 808), 3);
    add_object(create_discolight_1944(0, 0), 3);
    add_object(create_enemyballoon_1947(3608, 344), 3);
    add_object(create_sign_351(15288, -59), 3);
    add_object(create_playerstartingpoint_358(45, 1229), 3);
    add_object(create_link_352(88, -96), 3);
    add_object(create_objectcrystal_279(-275, 82), 3);
    add_object(create_objectcodec_354(-295, 108), 3);
    add_object(create_breakablewall_1748(-160, 560), 3);
    add_object(create_shieldearth_314(-140, 348), 3);
    add_object(create_shieldflameback_315(-96, 344), 3);
    add_object(create_shieldwood_313(-148, 340), 3);
    add_object(create_shieldmagnetic_317(-132, 348), 3);
    add_object(create_shieldwater_318(-84, 348), 3);
    add_object(create_shieldflamefront_316(-100, 348), 3);
    add_object(create_monitorkeystone_562(-216, 168), 3);
    add_object(create_objectjumppad_1510(-296, 168), 3);
    add_object(create_lamppostfront_1778(576, 1186), 3);
    add_object(create_gimmickpolepodcaseinner_2013(4056, 168), 3);
    add_object(create_gimmickpolepodstopper_2014(1088, -192), 3);
    add_object(create_escalatorfront2_1950(6672, 1120), 3);
    add_object(create_escalatorleft_1951(6668, 1120), 3);
    add_object(create_escalatorfront2_1950(6640, 1088), 3);
    add_object(create_escalatorfront2_1950(6608, 1056), 3);
    add_object(create_escalatorfront2_1950(6576, 1024), 3);
    add_object(create_escalatorfront2_1950(6544, 992), 3);
    add_object(create_escalatorfront2_1950(6512, 960), 3);
    add_object(create_switchwallplate_1167(6832, 1104), 3);
    add_object(create_gimmickteetertotter_1827(11408, -200), 3);
    add_object(create_enemyroller_1943(4087, 840), 3);
    add_object(create_objectparasol_1959(1648, 784), 3);
    add_object(create_effectflareburst_1788(-328, 1104), 3);
    add_object(create_gimmickhangingidleswitch_1257(6353, 848), 3);
    add_object(create_gachapondoor_1858(6272, 928), 3);
    add_object(create_gachaponfront_1859(6311, 888), 3);
    add_object(create_gimmickhangingmovingstopper_1961(888, 184), 3);
    add_object(create_gimmickhangingmovingsensor_1962(249, 245), 3);
    add_object(create_gimmickhangingmovingbar_1963(248, 184), 3);
    add_object(create_gimmickhangingmovingwheel_1964(248, 184), 3);
    add_object(create_enemydustermouth_1957(3489, 846), 3);
    add_object(create_enemyduster_1958(3444, 848), 3);
    add_object(create_levelmovingplatform1_1965(1728, 864), 3);
    add_object(create_enemycoilpiece1_1751(248, 1136), 3);
    add_object(create_enemycoilpiece3_1752(247, 1136), 3);
    add_object(create_enemycoilpiece2_1753(248, 1136), 3);
    add_object(create_enemycoilpiece4_1754(247, 1136), 3);
    add_object(create_enemycoil_1755(248, 1136), 3);
    add_object(create_enemylimiter_350(125, 1122), 3);
    add_object(create_enemycoilflip_1756(-280, 1008), 3);
    add_object(create_gimmicklanternbridge1_1727(5152, 1248), 3);
    add_object(create_gimmicklanternbridge2_1728(4928, 1248), 3);
    add_object(create_gimmicklanternbridge3_1729(4960, 1248), 3);
    add_object(create_gimmicklanternbridge4_1730(4992, 1248), 3);
    add_object(create_gimmicklanternbridge5_1731(5024, 1248), 3);
    add_object(create_gimmicklanternbridge6_1732(5056, 1248), 3);
    add_object(create_gimmicklanternbridge7_1733(5088, 1248), 3);
    add_object(create_gimmicklanternbridge8_1734(5120, 1248), 3);
    add_object(create_objectdiscoball_1955(3185, 192), 3);
    add_object(create_objectdiscoball2_1956(3200, 264), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheelpiece_1720(6848, 360), 3);
    add_object(create_levelferriswheel1_1765(6848, 360), 3);
    add_object(create_levelferriswheel2_1766(6848, 360), 3);
    add_object(create_levelferriswheel3_1767(6848, 360), 3);
    add_object(create_levelferriswheel4_1768(6848, 360), 3);
    add_object(create_keyboard_1940(1568, 856), 3);
    add_object(create_keyboard_1940(1520, 856), 3);
    add_object(create_keyboard_1940(1472, 856), 3);
    add_object(create_keyboard_1940(1424, 856), 3);
    add_object(create_keyboard_1940(1376, 856), 3);
    add_object(create_keyboard_1940(1328, 856), 3);
    add_object(create_keyboard_1940(1280, 856), 3);
    add_object(create_keyboard_1940(1232, 856), 3);
    add_object(create_gimmickclothesline_1970(352, 180), 3);
    add_object(create_gimmickhanginglongsensor2_1741(792, 188), 3);
    add_object(create_gimmickhanginglongsensor2_1741(272, 188), 3);
    add_object(create_gimmickclothesline_1970(424, 180), 3);
    add_object(create_gimmickclothesline_1970(496, 180), 3);
    add_object(create_gimmickclothesline_1970(568, 180), 3);
    add_object(create_gimmickclothesline_1970(640, 180), 3);
    add_object(create_gimmickclothesline_1970(712, 180), 3);
    add_object(create_gimmickclothesline_1970(784, 180), 3);
    add_object(create_carouselplatform_2015(96, 1024), 3);
    add_object(create_carouselplatform_2015(96, 1136), 3);
    add_object(create_carouselplatform_2015(96, 800), 3);
    add_object(create_enemyghettoshell_1971(247, 560), 3);
    add_object(create_turningspring_1960(48, 1032), 3);
    add_object(create_turningspring_1960(448, 808), 3);
    add_object(create_carouselplatform_2015(96, 576), 3);
    add_object(create_yellowspringupleft_432(672, 632), 3);
    add_object(create_carouselplatform_2015(96, 352), 3);
    add_object(create_laddertop_357(76, 375), 3);
    add_object(create_yellowspringupleft_432(672, 1216), 3);
    add_object(create_lamppostfront_1778(448, 1186), 3);
    add_object(create_enemyflarecannon_1820(244, 776), 3);
    add_object(create_enemylimiter_350(157, 1122), 3);
    add_object(create_enemylimiter_350(365, 1122), 3);
    add_object(create_enemylimiter_350(397, 1122), 3);
    add_object(create_enemycoilpiece1_1751(344, 1024), 3);
    add_object(create_enemycoilpiece3_1752(343, 1024), 3);
    add_object(create_enemycoilpiece2_1753(344, 1024), 3);
    add_object(create_enemycoilpiece4_1754(343, 1024), 3);
    add_object(create_enemycoil_1755(344, 1024), 3);
    add_object(create_enemylimiter_350(125, 1010), 3);
    add_object(create_enemylimiter_350(157, 1010), 3);
    add_object(create_enemylimiter_350(365, 1010), 3);
    add_object(create_enemylimiter_350(397, 1010), 3);
    add_object(create_levelmovingplatform1_1965(1856, 864), 3);
    add_object(create_levelmovingplatform1_1965(1984, 864), 3);
    add_object(create_levelmovingplatform1_1965(2112, 864), 3);
    add_object(create_objectparasol_1959(1200, 784), 3);
    add_object(create_enemylimiter_350(3333, 850), 3);
    add_object(create_enemylimiter_350(3365, 850), 3);
    add_object(create_enemylimiter_350(3605, 850), 3);
    add_object(create_enemylimiter_350(3637, 850), 3);
    add_object(create_monitorinvincibility_408(3056, 832), 3);
    add_object(create_fountainfront_1952(2544, 640), 3);
    add_object(create_fountainfront2_1953(2520, 640), 3);
    add_object(create_fountainfront2_1953(2592, 640), 3);
    add_object(create_levelwaterplatform_1954(2520, 640), 3);
    add_object(create_objectcrystal_279(2541, 626), 3);
    add_object(create_objectcrystal_279(2581, 626), 3);
    add_object(create_objectcrystal_279(2213, 698), 3);
    add_object(create_objectcrystal_279(2181, 706), 3);
    add_object(create_objectcrystal_279(2149, 714), 3);
    add_object(create_objectcrystal_279(2117, 722), 3);
    add_object(create_objectcrystal_279(2085, 730), 3);
    add_object(create_objectcrystal_279(2053, 738), 3);
    add_object(create_objectcrystal_279(2021, 746), 3);
    add_object(create_objectcrystal_279(1989, 754), 3);
    add_object(create_objectcrystal_279(1957, 762), 3);
    add_object(create_objectcrystal_279(1925, 770), 3);
    add_object(create_objectcrystal_279(1893, 778), 3);
    add_object(create_objectcrystal_279(1861, 786), 3);
    add_object(create_objectcrystal_279(1829, 794), 3);
    add_object(create_objectcrystal_279(1797, 802), 3);
    add_object(create_objectcrystal_279(1765, 810), 3);
    add_object(create_enemysuperturretus_1828(2307, 680), 3);
    add_object(create_objectcrystal_279(3109, 698), 3);
    add_object(create_objectcrystal_279(3141, 698), 3);
    add_object(create_objectcrystal_279(3173, 690), 3);
    add_object(create_objectcrystal_279(3205, 674), 3);
    add_object(create_objectcrystal_279(3229, 650), 3);
    add_object(create_objectcrystal_279(3253, 626), 3);
    add_object(create_redspringupright_438(1984, 424), 3);
    add_object(create_objectdiscoball_1955(2801, 192), 3);
    add_object(create_objectdiscoball2_1956(2816, 264), 3);
    add_object(create_keyboard_1940(3168, 280), 3);
    add_object(create_keyboard_1940(3120, 280), 3);
    add_object(create_keyboard_1940(3072, 280), 3);
    add_object(create_keyboard_1940(3024, 280), 3);
    add_object(create_keyboard_1940(2976, 280), 3);
    add_object(create_keyboard_1940(2928, 280), 3);
    add_object(create_keyboard_1940(2880, 280), 3);
    add_object(create_keyboard_1940(2832, 280), 3);
    add_object(create_fountainfront_1952(1520, 352), 3);
    add_object(create_fountainfront2_1953(1496, 352), 3);
    add_object(create_fountainfront2_1953(1568, 352), 3);
    add_object(create_levelwaterplatform_1954(1496, 352), 3);
    add_object(create_fountainfront_1952(1776, 352), 3);
    add_object(create_fountainfront2_1953(1752, 352), 3);
    add_object(create_fountainfront2_1953(1824, 352), 3);
    add_object(create_levelwaterplatform_1954(1752, 352), 3);
    add_object(create_restroommen_1941(584, 304), 3);
    add_object(create_restroomwomen_1942(696, 304), 3);
    add_object(create_objectchair_1779(2461, 697), 3);
    add_object(create_objectchair_1779(2717, 697), 3);
    add_object(create_paperlantern_527(4432, 424), 3);
    add_object(create_paperlantern_527(4672, 424), 3);
    add_object(create_paperlantern_527(4480, 424), 3);
    add_object(create_paperlantern_527(4624, 424), 3);
    add_object(create_paperlantern_527(4552, 424), 3);
    add_object(create_carouselplatform_2015(4416, 416), 3);
    add_object(create_escalatorfront1_1949(3888, 672), 3);
    add_object(create_escalatorfront1_1949(3856, 704), 3);
    add_object(create_escalatorfront1_1949(3824, 736), 3);
    add_object(create_escalatorfront1_1949(3760, 800), 3);
    add_object(create_escalatorfront1_1949(3728, 832), 3);
    add_object(create_escalatorfront1_1949(3920, 640), 3);
    add_object(create_escalatorright_1966(3772, 832), 3);
    add_object(create_escalatorfront1_1949(3792, 768), 3);
    add_object(create_paperlantern_527(4432, 648), 3);
    add_object(create_paperlantern_527(4672, 648), 3);
    add_object(create_paperlantern_527(4480, 648), 3);
    add_object(create_paperlantern_527(4624, 648), 3);
    add_object(create_paperlantern_527(4552, 648), 3);
    add_object(create_paperlantern_527(4432, 200), 3);
    add_object(create_paperlantern_527(4672, 200), 3);
    add_object(create_paperlantern_527(4480, 200), 3);
    add_object(create_paperlantern_527(4624, 200), 3);
    add_object(create_paperlantern_527(4552, 200), 3);
    add_object(create_carouselplatform_2015(4416, 192), 3);
    add_object(create_carouselplatform_2015(4416, 640), 3);
    add_object(create_enemyroller_1943(4271, 840), 3);
    add_object(create_enemyroller_1943(4455, 840), 3);
    add_object(create_enemysuperturretus_1828(4027, 600), 3);
    add_object(create_enemysuperturretus_1828(3891, 488), 3);
    add_object(create_yellowspringup_434(4416, 400), 3);
    add_object(create_objectcrystal_279(1501, 218), 3);
    add_object(create_objectcrystal_279(1821, 218), 3);
    add_object(create_objectcrystal_279(1541, 218), 3);
    add_object(create_objectcrystal_279(1781, 218), 3);
    add_object(create_objectcrystal_279(1581, 218), 3);
    add_object(create_objectcrystal_279(1741, 218), 3);
    add_object(create_objectcrystal_279(1621, 218), 3);
    add_object(create_objectcrystal_279(1701, 218), 3);
    add_object(create_objectcrystal_279(1661, 218), 3);
    add_object(create_objectcrystal_279(1501, 178), 3);
    add_object(create_objectcrystal_279(1821, 178), 3);
    add_object(create_objectcrystal_279(1541, 178), 3);
    add_object(create_objectcrystal_279(1781, 178), 3);
    add_object(create_objectcrystal_279(1581, 178), 3);
    add_object(create_objectcrystal_279(1741, 178), 3);
    add_object(create_objectcrystal_279(1621, 178), 3);
    add_object(create_objectcrystal_279(1701, 178), 3);
    add_object(create_objectcrystal_279(1661, 178), 3);
    add_object(create_objectpetal_302(2529, 409), 3);
    add_object(create_objectpetal_302(2593, 409), 3);
    add_object(create_objectpetal_302(2657, 409), 3);
    add_object(create_objectpetal_302(2729, 409), 3);
    add_object(create_redspringup_440(5168, 480), 3);
    add_object(create_objectpetal_302(3857, 841), 3);
    add_object(create_objectpetal_302(3913, 841), 3);
    add_object(create_objectcrystal_279(5181, 258), 3);
    add_object(create_objectcrystal_279(5181, 290), 3);
    add_object(create_objectcrystal_279(5181, 322), 3);
    add_object(create_objectcrystal_279(5181, 354), 3);
    add_object(create_monitorrings_407(4352, 160), 3);
    add_object(create_objectcrystal_279(5325, 666), 3);
    add_object(create_objectcrystal_279(5301, 666), 3);
    add_object(create_objectcrystal_279(5277, 666), 3);
    add_object(create_objectcrystal_279(5253, 666), 3);
    add_object(create_yellowspringup_434(5040, 624), 3);
    add_object(create_gimmickpolepodstopper_2014(3864, -88), 3);
    add_object(create_yellowspringup_434(4448, 400), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, 96), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_carousel_1988(4568, -16), 3);
    add_object(create_paperlantern_527(5296, 696), 3);
    add_object(create_paperlantern_527(5536, 696), 3);
    add_object(create_paperlantern_527(5344, 696), 3);
    add_object(create_paperlantern_527(5488, 696), 3);
    add_object(create_paperlantern_527(5416, 696), 3);
    add_object(create_carouselplatform_2015(5280, 688), 3);
    add_object(create_carouselplatform_2015(5280, 992), 3);
    add_object(create_laddertop_357(5252, 711), 3);
    add_object(create_redspringleft_442(5296, 1216), 3);
    add_object(create_carouselplatform_2015(4976, 992), 3);
    add_object(create_enemyflarecannon_1820(5436, 1176), 3);
    add_object(create_enemydustermouth_1957(5297, 974), 3);
    add_object(create_enemyduster_1958(5252, 976), 3);
    add_object(create_enemylimiter_350(5085, 978), 3);
    add_object(create_enemylimiter_350(5117, 978), 3);
    add_object(create_enemylimiter_350(5517, 978), 3);
    add_object(create_enemylimiter_350(5485, 978), 3);
    add_object(create_enemycoilpiece1_1751(5536, 688), 3);
    add_object(create_enemycoilpiece3_1752(5535, 688), 3);
    add_object(create_enemycoilpiece2_1753(5536, 688), 3);
    add_object(create_enemycoilpiece4_1754(5535, 688), 3);
    add_object(create_enemycoil_1755(5536, 688), 3);
    add_object(create_enemylimiter_350(5413, 674), 3);
    add_object(create_enemylimiter_350(5445, 674), 3);
    add_object(create_enemylimiter_350(5653, 674), 3);
    add_object(create_enemylimiter_350(5685, 674), 3);
    add_object(create_monitormetalshield_329(5200, 608), 3);
    add_object(create_objectcrystal_279(5029, 778), 3);
    add_object(create_objectcrystal_279(5013, 802), 3);
    add_object(create_objectcrystal_279(5045, 802), 3);
    add_object(create_objectcrystal_279(4997, 826), 3);
    add_object(create_objectcrystal_279(5061, 826), 3);
    add_object(create_objectcrystal_279(5013, 850), 3);
    add_object(create_objectcrystal_279(5045, 850), 3);
    add_object(create_objectcrystal_279(5029, 874), 3);
    add_object(create_objectchair_1779(6269, 1129), 3);
    add_object(create_objectchair_1779(5989, 1129), 3);
    add_object(create_objectfuel_528(292, 340), 3);
    add_object(create_escalatorfront2_1950(6392, 712), 3);
    add_object(create_escalatorfront2_1950(6360, 680), 3);
    add_object(create_escalatorfront2_1950(6328, 648), 3);
    add_object(create_escalatorleft_1951(6380, 712), 3);
    add_object(create_laddertop_357(6124, 671), 3);
    add_object(create_objectcodec_354(4730, 1181), 3);
    add_object(create_enemydustermouth_1957(4593, 174), 3);
    add_object(create_enemyduster_1958(4548, 176), 3);
    add_object(create_enemylimiter_350(4453, 178), 3);
    add_object(create_enemylimiter_350(4485, 178), 3);
    add_object(create_enemylimiter_350(4709, 178), 3);
    add_object(create_enemylimiter_350(4677, 178), 3);
    add_object(create_objectjumppad_1510(4624, 864), 3);
    add_object(create_objectjumppad_1510(4144, 864), 3);
    add_object(create_enemysuperturretus_1828(7195, 984), 3);
    add_object(create_enemysuperturretus_1828(7315, 936), 3);
    add_object(create_enemysuperturretus_1828(7451, 1024), 3);
    add_object(create_enemysuperturretus_1828(7579, 984), 3);
    add_object(create_carouselplatform_2015(7360, 528), 3);
    add_object(create_carouselplatform_2015(7360, 640), 3);
    add_object(create_carouselplatform_2015(7792, 528), 3);
    add_object(create_cameratriggerboss_424(11760, 48), 3);
    add_object(create_minibosssamuwheel_1873(10176, 168), 3);
    add_object(create_minibosssamulefthand_1874(10120, 216), 3);
    add_object(create_minibosssamurighthand_1875(10231, 216), 3);
    add_object(create_minibosssamu_1876(10176, 176), 3);
    add_object(create_minibosssamufloorcheck_1877(9876, -136), 3);
    add_object(create_breakablefloor1_2016(9920, 576), 3);
    add_object(create_breakablefloor2_2017(9984, 576), 3);
    add_object(create_breakablefloor1_2016(9920, 624), 3);
    add_object(create_breakablefloor2_2017(9984, 624), 3);
    add_object(create_breakablefloor1_2016(9920, 672), 3);
    add_object(create_breakablefloor2_2017(9984, 672), 3);
    add_object(create_breakablefloor1_2016(9920, 720), 3);
    add_object(create_breakablefloor2_2017(9984, 720), 3);
    add_object(create_carouselplatform_2015(8128, 864), 3);
    add_object(create_yellowspringup_434(7912, 848), 3);
    add_object(create_yellowspringup_434(7944, 848), 3);
    add_object(create_objectfuel_528(6308, 732), 3);
    add_object(create_gimmickhangingmovingstopper_1961(7152, 560), 3);
    add_object(create_gimmickhangingmovingsensor_1962(6513, 621), 3);
    add_object(create_gimmickhangingmovingbar_1963(6512, 560), 3);
    add_object(create_gimmickhangingmovingwheel_1964(6516, 556), 3);
    add_object(create_gimmickclothesline_1970(6616, 556), 3);
    add_object(create_gimmickhanginglongsensor2_1741(7056, 560), 3);
    add_object(create_gimmickhanginglongsensor2_1741(6536, 560), 3);
    add_object(create_gimmickclothesline_1970(6688, 556), 3);
    add_object(create_gimmickclothesline_1970(6760, 556), 3);
    add_object(create_gimmickclothesline_1970(6832, 556), 3);
    add_object(create_gimmickclothesline_1970(6904, 556), 3);
    add_object(create_gimmickclothesline_1970(6976, 556), 3);
    add_object(create_gimmickclothesline_1970(7048, 556), 3);
    add_object(create_objectcrystal_279(6837, 194), 3);
    add_object(create_redspringleft_442(7648, 656), 3);
    add_object(create_redspringleft_442(7648, 688), 3);
    add_object(create_redspringleft_442(7648, 720), 3);
    add_object(create_redspringleft_442(7648, 752), 3);
    add_object(create_redspringleft_442(7648, 784), 3);
    add_object(create_objectcrystal_279(6813, 194), 3);
    add_object(create_objectcrystal_279(6861, 194), 3);
    add_object(create_objectcrystal_279(6885, 194), 3);
    add_object(create_objectcrystal_279(6789, 202), 3);
    add_object(create_objectcrystal_279(6909, 202), 3);
    add_object(create_objectcrystal_279(6765, 218), 3);
    add_object(create_objectcrystal_279(6933, 218), 3);
    add_object(create_objectcrystal_279(6741, 242), 3);
    add_object(create_objectcrystal_279(6957, 242), 3);
    add_object(create_enemyghettoshell_1971(7943, 512), 3);
    add_object(create_enemyflarecannon_1820(7756, 456), 3);
    add_object(create_enemyflarecannon_1820(8132, 456), 3);
    add_object(create_objectcrystal_279(7925, 674), 3);
    add_object(create_objectcrystal_279(7965, 674), 3);
    add_object(create_objectcrystal_279(7925, 714), 3);
    add_object(create_objectcrystal_279(7965, 714), 3);
    add_object(create_objectcrystal_279(7925, 754), 3);
    add_object(create_objectcrystal_279(7965, 754), 3);
    add_object(create_objectcrystal_279(7925, 634), 3);
    add_object(create_objectcrystal_279(7965, 634), 3);
    add_object(create_objectcrystal_279(8333, 842), 3);
    add_object(create_objectcrystal_279(8301, 842), 3);
    add_object(create_objectcrystal_279(8269, 842), 3);
    add_object(create_objectcrystal_279(8237, 842), 3);
    add_object(create_objectcrystal_279(8205, 842), 3);
    add_object(create_objectcrystal_279(8173, 842), 3);
    add_object(create_arrowlight_1896(8336, 976), 3);
    add_object(create_arrowlight_1896(8336, 912), 3);
    add_object(create_yellowspringupleft_432(4816, 384), 3);
    add_object(create_objectcodec_354(2818, 1053), 3);
    add_object(create_objectparasol_1959(3312, 784), 3);
    add_object(create_objectparasol_1959(3632, 784), 3);
    add_object(create_objectparasol_1959(4528, 784), 3);
    add_object(create_objectchair_1779(6797, 721), 3);
    add_object(create_lamppostfront_1778(6640, 682), 3);
    add_object(create_lamppostfront_1778(7056, 682), 3);
    add_object(create_lamppostfront_1778(6560, 682), 3);
    add_object(create_lamppostfront_1778(6176, 586), 3);
    add_object(create_lamppostfront_1778(6240, 586), 3);
    add_object(create_yellowspringup_434(9632, 944), 3);
    add_object(create_gimmickairballoon_1972(9728, 640), 3);
    add_object(create_gimmickhangingidleballoon_1973(9729, 688), 3);
    add_object(create_breakablefloor1_2016(10048, 576), 3);
    add_object(create_breakablefloor2_2017(10112, 576), 3);
    add_object(create_breakablefloor1_2016(10176, 576), 3);
    add_object(create_breakablefloor2_2017(10240, 576), 3);
    add_object(create_breakablefloor1_2016(10048, 624), 3);
    add_object(create_breakablefloor2_2017(10112, 624), 3);
    add_object(create_breakablefloor1_2016(10176, 624), 3);
    add_object(create_breakablefloor2_2017(10240, 624), 3);
    add_object(create_breakablefloor1_2016(10048, 672), 3);
    add_object(create_breakablefloor2_2017(10112, 672), 3);
    add_object(create_breakablefloor1_2016(10176, 672), 3);
    add_object(create_breakablefloor2_2017(10240, 672), 3);
    add_object(create_breakablefloor1_2016(10048, 720), 3);
    add_object(create_breakablefloor2_2017(10112, 720), 3);
    add_object(create_breakablefloor1_2016(10176, 720), 3);
    add_object(create_breakablefloor2_2017(10240, 720), 3);
    add_object(create_breakablefloor1_2016(10304, 576), 3);
    add_object(create_breakablefloor2_2017(10368, 576), 3);
    add_object(create_breakablefloor1_2016(10304, 624), 3);
    add_object(create_breakablefloor2_2017(10368, 624), 3);
    add_object(create_breakablefloor1_2016(10304, 672), 3);
    add_object(create_breakablefloor2_2017(10368, 672), 3);
    add_object(create_breakablefloor1_2016(10304, 720), 3);
    add_object(create_breakablefloor2_2017(10368, 720), 3);
    add_object(create_breakablefloor1_2016(9920, 768), 3);
    add_object(create_breakablefloor2_2017(9984, 768), 3);
    add_object(create_breakablefloor1_2016(9920, 816), 3);
    add_object(create_breakablefloor2_2017(9984, 816), 3);
    add_object(create_breakablefloor1_2016(10048, 768), 3);
    add_object(create_breakablefloor2_2017(10112, 768), 3);
    add_object(create_breakablefloor1_2016(10176, 768), 3);
    add_object(create_breakablefloor2_2017(10240, 768), 3);
    add_object(create_breakablefloor1_2016(10048, 816), 3);
    add_object(create_breakablefloor2_2017(10112, 816), 3);
    add_object(create_breakablefloor1_2016(10176, 816), 3);
    add_object(create_breakablefloor2_2017(10240, 816), 3);
    add_object(create_breakablefloor1_2016(10304, 768), 3);
    add_object(create_breakablefloor2_2017(10368, 768), 3);
    add_object(create_breakablefloor1_2016(10304, 816), 3);
    add_object(create_breakablefloor2_2017(10368, 816), 3);
    add_object(create_breakablefloor1_2016(9920, 864), 3);
    add_object(create_breakablefloor2_2017(9984, 864), 3);
    add_object(create_breakablefloor1_2016(10048, 864), 3);
    add_object(create_breakablefloor2_2017(10112, 864), 3);
    add_object(create_breakablefloor1_2016(10176, 864), 3);
    add_object(create_breakablefloor2_2017(10240, 864), 3);
    add_object(create_breakablefloor1_2016(10304, 864), 3);
    add_object(create_breakablefloor2_2017(10368, 864), 3);
    add_object(create_hazardspikesup_1769(9920, 928), 3);
    add_object(create_hazardspikesup_1769(9952, 928), 3);
    add_object(create_hazardspikesup_1769(9984, 928), 3);
    add_object(create_hazardspikesup_1769(10016, 928), 3);
    add_object(create_hazardspikesup_1769(10048, 928), 3);
    add_object(create_hazardspikesup_1769(10080, 928), 3);
    add_object(create_hazardspikesup_1769(10112, 928), 3);
    add_object(create_hazardspikesup_1769(10144, 928), 3);
    add_object(create_hazardspikesup_1769(10176, 928), 3);
    add_object(create_hazardspikesup_1769(10208, 928), 3);
    add_object(create_hazardspikesup_1769(10240, 928), 3);
    add_object(create_hazardspikesup_1769(10272, 928), 3);
    add_object(create_hazardspikesup_1769(10304, 928), 3);
    add_object(create_hazardspikesup_1769(10336, 928), 3);
    add_object(create_hazardspikesup_1769(10368, 928), 3);
    add_object(create_hazardspikesup_1769(10400, 928), 3);
    add_object(create_carouselplatform_2015(8936, 480), 3);
    add_object(create_bossgate_2018(10432, 480), 3);
    add_object(create_gimmickairballoon_1972(11040, 448), 3);
    add_object(create_gimmickhangingidleballoon_1973(11041, 496), 3);
    add_object(create_monitorwatershield_327(8544, 736), 3);
    add_object(create_objectpetal_302(8041, 265), 3);
    add_object(create_objectpetal_302(8089, 265), 3);
    add_object(create_objectpetal_302(8169, 265), 3);
    add_object(create_objectpetal_302(8217, 265), 3);
    add_object(create_objectpetal_302(8297, 265), 3);
    add_object(create_objectpetal_302(8345, 265), 3);
    add_object(create_objectpetal_302(9833, 313), 3);
    add_object(create_objectpetal_302(9881, 313), 3);
    add_object(create_fountainfront_1952(10736, 496), 3);
    add_object(create_fountainfront2_1953(10712, 496), 3);
    add_object(create_fountainfront2_1953(10784, 496), 3);
    add_object(create_levelwaterplatform_1954(10712, 496), 3);
    add_object(create_objectpetal_302(11457, 137), 3);
    add_object(create_objectpetal_302(11585, 137), 3);
    add_object(create_fountainfront_1952(11248, 144), 3);
    add_object(create_fountainfront2_1953(11224, 144), 3);
    add_object(create_fountainfront2_1953(11296, 144), 3);
    add_object(create_levelwaterplatform_1954(11224, 144), 3);
    add_object(create_objectpetal_302(11713, 137), 3);
    add_object(create_objectpetal_302(11841, 137), 3);
    add_object(create_gimmickhangingidleswitch_1257(9169, 368), 3);
    add_object(create_gachapondoor_1858(9088, 448), 3);
    add_object(create_gachaponfront_1859(9127, 408), 3);
    add_object(create_monitorcrate_409(7792, 1024), 3);
    add_object(create_lamppostfront_1778(12320, 162), 3);
    add_object(create_lamppostfront_1778(12512, 162), 3);
    add_object(create_lamppostfront_1778(12704, 162), 3);
    add_object(create_lamppostfront_1778(12896, 162), 3);
    add_object(create_lamppostfront_1778(13088, 162), 3);
    add_object(create_lamppostfront_1778(13280, 162), 3);
    add_object(create_lamppostfront_1778(13472, 162), 3);
    add_object(create_lamppostfront_1778(13664, 162), 3);
    add_object(create_lamppostfront_1778(13856, 162), 3);
    add_object(create_lamppostfront_1778(14048, 162), 3);
    add_object(create_lamppostfront_1778(14240, 162), 3);
    add_object(create_lamppostfront_1778(14432, 162), 3);
    add_object(create_lamppostfront_1778(14624, 162), 3);
    add_object(create_lamppostfront_1778(14816, 162), 3);
    add_object(create_lamppostfront_1778(15008, 162), 3);
    add_object(create_gimmickpolepodcaseinner_2013(5744, 184), 3);
    add_object(create_gimmickpolepodcaseinner_2013(6032, 664), 3);
    add_object(create_gimmickpolepodcaseinner_2013(4832, 744), 3);
    add_object(create_gimmickelevatordoor_2019(4056, 168), 3);
    add_object(create_gimmickelevatordoor_2019(4832, 744), 3);
    add_object(create_gimmickelevatordoor_2019(5744, 184), 3);
    add_object(create_gimmickelevator_2020(4056, 168), 3);
    add_object(create_gimmickelevator_2020(4832, 744), 3);
    add_object(create_gimmickelevator_2020(5744, 184), 3);
    add_object(create_gimmickelevator_2020(6032, 664), 3);
    add_object(create_gimmickelevatordoor_2019(6032, 664), 3);
    add_object(create_escalatorright_1966(3804, 800), 3);
    add_object(create_escalatorright_1966(3836, 768), 3);
    add_object(create_escalatorright_1966(3868, 736), 3);
    add_object(create_escalatorright_1966(3900, 704), 3);
    add_object(create_escalatorright_1966(3932, 672), 3);
    add_object(create_escalatorright_1966(3964, 640), 3);
    add_object(create_escalatorleft_1951(6636, 1088), 3);
    add_object(create_escalatorleft_1951(6348, 680), 3);
    add_object(create_escalatorleft_1951(6604, 1056), 3);
    add_object(create_escalatorleft_1951(6316, 648), 3);
    add_object(create_escalatorleft_1951(6572, 1024), 3);
    add_object(create_escalatorleft_1951(6540, 992), 3);
    add_object(create_escalatorleft_1951(6508, 960), 3);
    add_object(create_enemycoilhead_1782(5536, 648), 3);
    add_object(create_enemycoilhead_1782(344, 984), 3);
    add_object(create_enemycoilhead_1782(248, 1096), 3);
    add_object(create_savedata_28(-104, 16), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_escalatorback4_1915(6648, 1120), 4);
    add_background_object(create_escalatorback5_1916(6616, 1088), 4);
    add_background_object(create_escalatorback6_1917(6464, 936), 4);
    add_background_object(create_escalatorback5_1916(6584, 1056), 4);
    add_background_object(create_escalatorback5_1916(6552, 1024), 4);
    add_background_object(create_escalatorback5_1916(6520, 992), 4);
    add_background_object(create_escalatorback5_1916(6488, 960), 4);
    add_background_object(create_teetertotteraxle_824(11392, -216), 4);
    add_background_object(create_escalatorback1_1911(3752, 832), 4);
    add_background_object(create_escalatorback2_1912(3944, 640), 4);
    add_background_object(create_escalatorback2_1912(3912, 672), 4);
    add_background_object(create_escalatorback2_1912(3880, 704), 4);
    add_background_object(create_escalatorback2_1912(3848, 736), 4);
    add_background_object(create_escalatorback2_1912(3784, 800), 4);
    add_background_object(create_escalatorback3_1914(3976, 616), 4);
    add_background_object(create_escalatorback2_1912(3816, 768), 4);
    add_background_object(create_hamstertunnel6_1975(2688, 368), 4);
    add_background_object(create_hamstertunnel5_1976(2624, 376), 4);
    add_background_object(create_hamstertunnel7_1977(2696, 304), 4);
    add_background_object(create_hamstertunnel5_1976(2560, 376), 4);
    add_background_object(create_hamstertunnel2_1974(2496, 368), 4);
    add_background_object(create_mallfloor3_1890(4032, 640), 4);
    add_background_object(create_redcarpet_1919(4032, 640), 4);
    add_background_object(create_mallfloor3_1890(5952, 1152), 4);
    add_background_object(create_mallfloor3_1890(6080, 1152), 4);
    add_background_object(create_redcarpet_1919(5952, 1152), 4);
    add_background_object(create_redcarpet_1919(6080, 1152), 4);
    add_background_object(create_mallfloor3_1890(6080, 960), 4);
    add_background_object(create_mallfloor3_1890(5952, 960), 4);
    add_background_object(create_escalatorback6_1917(6272, 624), 4);
    add_background_object(create_escalatorback5_1916(6296, 648), 4);
    add_background_object(create_escalatorback5_1916(6328, 680), 4);
    add_background_object(create_escalatorback4_1915(6360, 712), 4);
    add_background_object(create_riverbridge3_1830(4768, 120), 4);
    add_background_object(create_riverbridge4_1831(5096, 120), 4);
    add_background_object(create_riverbridge1_1832(4960, 112), 4);
    add_background_object(create_riverbridge1_1832(4896, 112), 4);
    add_background_object(create_riverbridge5_1833(5080, 112), 4);
    add_background_object(create_mallfloor8_1928(4752, 192), 4);
    add_background_object(create_mallfloor8_1928(4720, 192), 4);
    add_background_object(create_mallfloor3_1890(5200, 208), 4);
    add_background_object(create_mallfloor6_1920(5200, 208), 4);
    add_background_object(create_mallfloor8_1928(4752, 216), 4);
    add_background_object(create_mallfloor8_1928(4720, 216), 4);
    add_background_object(create_mallfloor3_1890(8384, 864), 4);
    add_background_object(create_mallfloor6_1920(8384, 864), 4);
    add_background_object(create_mallfloor3_1890(10176, 0), 4);
    add_background_object(create_mallfloor1_1891(10176, 192), 4);
    add_background_object(create_mallfloor3_1890(10176, 144), 4);
    add_background_object(create_mallfloor1_1891(10176, 48), 4);
    add_background_object(create_mallfloor3_1890(10048, 240), 4);
    add_background_object(create_mallfloor1_1891(10048, 144), 4);
    add_background_object(create_mallfloor3_1890(10048, 96), 4);
    add_background_object(create_mallfloor1_1891(10048, 0), 4);
    add_background_object(create_mallfloor6_1920(10048, 240), 4);
    add_background_object(create_mallfloor6_1920(10048, 192), 4);
    add_background_object(create_mallfloor6_1920(10048, 144), 4);
    add_background_object(create_mallfloor6_1920(10048, 96), 4);
    add_background_object(create_mallfloor6_1920(10048, 48), 4);
    add_background_object(create_fnmallglass_1987(5712, 32), 4);
    add_background_object(create_fnmallglass_1987(5712, 160), 4);
    add_background_object(create_fnmallglass_1987(5712, 288), 4);
    add_background_object(create_fnmallglass_1987(5712, 416), 4);
    add_background_object(create_mallfloor3_1890(5712, -16), 4);
    add_background_object(create_mallfloor8_1928(5680, 8), 4);
    add_background_object(create_mallfloor8_1928(5680, -16), 4);
    add_background_object(create_mallfloor1_1891(8384, 720), 4);
    add_background_object(create_mallfloor6_1920(8384, 768), 4);
    add_background_object(create_mallfloor6_1920(8496, 720), 4);
    add_background_object(create_mallfloor3_1890(8384, 816), 4);
    add_background_object(create_mallfloor6_1920(8384, 816), 4);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(12472, 239), 5);
    add_object(create_cameralimitbossleft_421(11904, 152), 5);
    add_object(create_cameralimitbossright_422(12943, 128), 5);
    add_object(create_cameralimitbosstop_423(12464, 8), 5);
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
    add_object(create_layerchangeswitch2_1239(-328, -8), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_playerskintorquearm_449(-88, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(304, -96), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(288, -96), 6);
    add_object(create_guikeystone_455(272, -96), 6);
    add_object(create_guikeystone_455(256, -96), 6);
    add_object(create_guikeystone_455(240, -96), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
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
    loop_lamp_running = false;
    loop_lamp_index = 0;
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
    loop_p3_running = false;
    loop_p3_index = 0;
    loop_rise_running = false;
    loop_rise_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_p6_running = false;
    loop_p6_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_p7_running = false;
    loop_p7_index = 0;
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
    loop_p4_running = false;
    loop_p4_index = 0;
    loop_p5_running = false;
    loop_p5_index = 0;
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
    loop_sink_running = false;
    loop_sink_index = 0;
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
    loop_p2_running = false;
    loop_p2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
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
    loop_p0_running = false;
    loop_p0_index = 0;
    loop_p1_running = false;
    loop_p1_index = 0;
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
    loop_samu_running = false;
    loop_samu_index = 0;
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
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_33, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_33, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_33, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_33, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_33, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_33, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_33, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_33, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_33, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_33, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("cp", 2)].set(&loop_wrapper_cp_33, &loop_cp_running, &loop_cp_index);
        frame_loops[std::string("Player01_Interruption_Action", 28)].set(&loop_wrapper_player01_interruption_action_33, &loop_player01_interruption_action_running, &loop_player01_interruption_action_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_33, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_33, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("iterate.pushables", 17)].set(&loop_wrapper_iterate_pushables_33, &loop_iterate_pushables_running, &loop_iterate_pushables_index);
        frame_loops[std::string("Player01DetectAngle", 19)].set(&loop_wrapper_player01detectangle_33, &loop_player01detectangle_running, &loop_player01detectangle_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_33, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_33, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_33, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_33, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_33, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_33, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_33, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_33, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("Player01SlopesDown", 18)].set(&loop_wrapper_player01slopesdown_33, &loop_player01slopesdown_running, &loop_player01slopesdown_index);
        frame_loops[std::string("Player01AllSensors", 18)].set(&loop_wrapper_player01allsensors_33, &loop_player01allsensors_running, &loop_player01allsensors_index);
        frame_loops[std::string("import.deadzones", 16)].set(&loop_wrapper_import_deadzones_33, &loop_import_deadzones_running, &loop_import_deadzones_index);
        frame_loops[std::string("sound_stoppush", 14)].set(&loop_wrapper_sound_stoppush_33, &loop_sound_stoppush_running, &loop_sound_stoppush_index);
        frame_loops[std::string("stop_voices", 11)].set(&loop_wrapper_stop_voices_33, &loop_stop_voices_running, &loop_stop_voices_index);
        frame_loops[std::string("Rings_RingLoss_Step", 19)].set(&loop_wrapper_rings_ringloss_step_33, &loop_rings_ringloss_step_running, &loop_rings_ringloss_step_index);
        frame_loops[std::string("p3", 2)].set(&loop_wrapper_p3_33, &loop_p3_running, &loop_p3_index);
        frame_loops[std::string("sound_pounce", 12)].set(&loop_wrapper_sound_pounce_33, &loop_sound_pounce_running, &loop_sound_pounce_index);
        frame_loops[std::string("p0", 2)].set(&loop_wrapper_p0_33, &loop_p0_running, &loop_p0_index);
        frame_loops[std::string("Player01DetectSensorMain", 24)].set(&loop_wrapper_player01detectsensormain_33, &loop_player01detectsensormain_running, &loop_player01detectsensormain_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_33, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_33, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_33, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_33, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_jump", 10)].set(&loop_wrapper_sound_jump_33, &loop_sound_jump_running, &loop_sound_jump_index);
        frame_loops[std::string("p6", 2)].set(&loop_wrapper_p6_33, &loop_p6_running, &loop_p6_index);
        frame_loops[std::string("p7", 2)].set(&loop_wrapper_p7_33, &loop_p7_running, &loop_p7_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_33, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_33, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_33, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("p1", 2)].set(&loop_wrapper_p1_33, &loop_p1_running, &loop_p1_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_33, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_33, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_33, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("p5", 2)].set(&loop_wrapper_p5_33, &loop_p5_running, &loop_p5_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_33, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_33, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("Player01DetectSensorAngles", 26)].set(&loop_wrapper_player01detectsensorangles_33, &loop_player01detectsensorangles_running, &loop_player01detectsensorangles_index);
        frame_loops[std::string("GUI_shiftup", 11)].set(&loop_wrapper_gui_shiftup_33, &loop_gui_shiftup_running, &loop_gui_shiftup_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_33, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_33, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("Player01_Interruption_Control", 29)].set(&loop_wrapper_player01_interruption_control_33, &loop_player01_interruption_control_running, &loop_player01_interruption_control_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_33, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("Player01Up", 10)].set(&loop_wrapper_player01up_33, &loop_player01up_running, &loop_player01up_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_33, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_33, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_33, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_33, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("spawn.crystals", 14)].set(&loop_wrapper_spawn_crystals_33, &loop_spawn_crystals_running, &loop_spawn_crystals_index);
        frame_loops[std::string("SpawnDebris", 11)].set(&loop_wrapper_spawndebris_33, &loop_spawndebris_running, &loop_spawndebris_index);
        frame_loops[std::string("Player01DetectSensorSlope", 25)].set(&loop_wrapper_player01detectsensorslope_33, &loop_player01detectsensorslope_running, &loop_player01detectsensorslope_index);
        frame_loops[std::string("start_player", 12)].set(&loop_wrapper_start_player_33, &loop_start_player_running, &loop_start_player_index);
        frame_loops[std::string("sound_help", 10)].set(&loop_wrapper_sound_help_33, &loop_sound_help_running, &loop_sound_help_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_33, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("petal_loss", 10)].set(&loop_wrapper_petal_loss_33, &loop_petal_loss_running, &loop_petal_loss_index);
        frame_loops[std::string("Player01Down", 12)].set(&loop_wrapper_player01down_33, &loop_player01down_running, &loop_player01down_index);
        frame_loops[std::string("spawn.rings", 11)].set(&loop_wrapper_spawn_rings_33, &loop_spawn_rings_running, &loop_spawn_rings_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_33, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("Player01SlopesUp", 16)].set(&loop_wrapper_player01slopesup_33, &loop_player01slopesup_running, &loop_player01slopesup_index);
        frame_loops[std::string("lamp", 4)].set(&loop_wrapper_lamp_33, &loop_lamp_running, &loop_lamp_index);
        frame_loops[std::string("Player01DetectSensorEdges", 25)].set(&loop_wrapper_player01detectsensoredges_33, &loop_player01detectsensoredges_running, &loop_player01detectsensoredges_index);
        frame_loops[std::string("Player01DetectSensorBottom", 26)].set(&loop_wrapper_player01detectsensorbottom_33, &loop_player01detectsensorbottom_running, &loop_player01detectsensorbottom_index);
        frame_loops[std::string("Player01DetectSensorLeft", 24)].set(&loop_wrapper_player01detectsensorleft_33, &loop_player01detectsensorleft_running, &loop_player01detectsensorleft_index);
        frame_loops[std::string("iterate.query.ME.stop", 21)].set(&loop_wrapper_iterate_query_me_stop_33, &loop_iterate_query_me_stop_running, &loop_iterate_query_me_stop_index);
        frame_loops[std::string("Plaftorms_UpdatePosition", 24)].set(&loop_wrapper_plaftorms_updateposition_33, &loop_plaftorms_updateposition_running, &loop_plaftorms_updateposition_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_33, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("record.inputs", 13)].set(&loop_wrapper_record_inputs_33, &loop_record_inputs_running, &loop_record_inputs_index);
        frame_loops[std::string("stop_player", 11)].set(&loop_wrapper_stop_player_33, &loop_stop_player_running, &loop_stop_player_index);
        frame_loops[std::string("reposition.skin", 15)].set(&loop_wrapper_reposition_skin_33, &loop_reposition_skin_running, &loop_reposition_skin_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_33, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_33, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_33, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_33, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_33, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_33, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_33, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_33, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("weapon", 6)].set(&loop_wrapper_weapon_33, &loop_weapon_running, &loop_weapon_index);
        frame_loops[std::string("Player01WallCollision", 21)].set(&loop_wrapper_player01wallcollision_33, &loop_player01wallcollision_running, &loop_player01wallcollision_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_33, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("Player01DetectCharacterSensor", 29)].set(&loop_wrapper_player01detectcharactersensor_33, &loop_player01detectcharactersensor_running, &loop_player01detectcharactersensor_index);
        frame_loops[std::string("p2", 2)].set(&loop_wrapper_p2_33, &loop_p2_running, &loop_p2_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_33, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("Player01DetectSensorRight", 25)].set(&loop_wrapper_player01detectsensorright_33, &loop_player01detectsensorright_running, &loop_player01detectsensorright_index);
        frame_loops[std::string("p4", 2)].set(&loop_wrapper_p4_33, &loop_p4_running, &loop_p4_index);
        frame_loops[std::string("Player01DetectSensorTop", 23)].set(&loop_wrapper_player01detectsensortop_33, &loop_player01detectsensortop_running, &loop_player01detectsensortop_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_33, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_33, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    not_always_1822_33 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    once_condition_1942_33 = false;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1393_28 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_64_0 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1785_33 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    once_condition_1815_33 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    once_condition_1580_32 = false;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    once_condition_1813_33 = false;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1784_33 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_138_0 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1 = true;
    once_condition_1787_33 = false;
    not_always_789_13 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    once_condition_1814_33 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    not_always_1449_32 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1945_33 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1729_32 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    once_condition_1854_33 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1934_33 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    once_condition_1816_33 = false;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_1579_32 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_1528_13 = loop_count;
    not_always_1773_33 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_scenery_shift_old_1 = false;
    not_always_121_0 = loop_count;
    once_condition_1817_33 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = false;
    once_condition_1812_33 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1821_33 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    once_condition_1793_33 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_robopanther_appears_1 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
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
    once_condition_47_13 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1469_32 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_1 = false;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1416_33 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1774_33 = loop_count;
    once_condition_1825_33 = false;
    not_always_1415_22 = loop_count;
    not_always_1444_32 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_7898()
{
    // event 1764_34
    {
        if (!(group_main_engine_1)) goto event_1764_34_end;
        global_values->set(4, 2);
        next_frame = (index+1-0)-1-1 + 0;    
    
    }
    event_1764_34_end: ;
}
void Frames::loop_death_34()
{
    event_func_7898();
}
void Frames::event_func_7899()
{
    // event 1997_34
    {
        if (!(group_pause_1)) goto event_1997_34_end;
        global_values->set(4, 2);
        next_frame = (index+1-0)-1-1 + 0;    
    
    }
    event_1997_34_end: ;
}
void Frames::loop_restart_34()
{
    event_func_7899();
    event_func_86();
    event_func_1171();
}
void Frames::loop_wrapper_sound_hurt1_34(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_34(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
