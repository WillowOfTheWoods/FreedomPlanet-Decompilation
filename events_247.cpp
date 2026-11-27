#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19721()
{
    // event 2095_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2095_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2095_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (260))) goto event_2095_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
    }
    event_2095_83_end: ;
}
void Frames::event_func_19722()
{
    // event 2097_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2097_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (82))) goto event_2097_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (83))) goto event_2097_83_end;
        if (!((media.get_channel_position(-1 +20)) > (4100))) goto event_2097_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 30);
    }
    event_2097_83_end: ;
}
void Frames::event_func_19723()
{
    // event 2098_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2098_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (82))) goto event_2098_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (83))) goto event_2098_83_end;
        if (!((media.get_channel_position(-1 +20)) > (8600))) goto event_2098_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
    }
    event_2098_83_end: ;
}
void Frames::event_func_19724()
{
    // event 2099_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2099_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (82))) goto event_2099_83_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_2099_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2099_83_end: ;
}
void Frames::event_func_19725()
{
    // event 2100_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2100_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (83))) goto event_2100_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2100_83_end: ;
}
void Frames::event_func_19726()
{
    // event 2101_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2101_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2101_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (82))) goto event_2101_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2101_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2101_83_end: ;
}
void Frames::event_func_19727()
{
    // event 2102_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2102_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2102_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_2102_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (83))) goto event_2102_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2102_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.stop_channel(20-1);
        media.play_id(SOUND_COMMON_GACHAPONWIN_188, -1, 1);
        FrameObject * single_instance_2102_83_0; single_instance_2102_83_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectzaobuff_3947(parent->x + 0, parent->y + -50), parent->layer);
                if (single_instance_2102_83_0 == NULL)
                    single_instance_2102_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2102_83_0))->set_direction(2);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(30);
    }
    event_2102_83_end: ;
}
void Frames::event_func_19728()
{
    // event 2103_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2103_83_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_2103_83_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_2103_83_end: ;
}
void Frames::event_func_19729()
{
    // event 2104_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2104_83_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
        }
        if (!effectzaobuff_3947_instances.has_selection()) goto event_2104_83_end;
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2104_83_end: ;
}
void Frames::event_func_19730()
{
    // event 2105_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2105_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2105_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_2105_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_2105_83_end: ;
}
void Frames::event_func_19731()
{
    // event 2106_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2106_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2106_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2106_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_2106_83_end: ;
}
void Frames::event_func_19732()
{
    // event 2108_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2108_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2108_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (84))) goto event_2108_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2108_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2108_83_end: ;
}
void Frames::event_func_19733()
{
    // event 2109_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2109_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (85))) goto event_2109_83_end;
        if (once_condition_2109_83) goto event_2109_83_end;
        once_condition_2109_83 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(0);
    }
    event_2109_83_end: ;
}
void Frames::event_func_19734()
{
    // event 2110_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2110_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2110_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (85))) goto event_2110_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (87))) goto event_2110_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2110_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.stop_channel(20-1);
    }
    event_2110_83_end: ;
}
void Frames::event_func_19735()
{
    // event 2111_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2111_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2111_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (12))) goto event_2111_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2111_83_end: ;
}
void Frames::event_func_19736()
{
    // event 2112_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2112_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2112_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (12))) goto event_2112_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_2112_83_end: ;
}
void Frames::event_func_19737()
{
    // event 2113_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2113_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2113_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2113_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2113_83_end: ;
}
void Frames::event_func_19738()
{
    // event 2114_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2114_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2114_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_2114_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(5);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
    }
    event_2114_83_end: ;
}
void Frames::event_func_19739()
{
    // event 2115_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2115_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2115_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2115_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
            ((Active*)*it)->move_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_2115_83_end: ;
}
void Frames::event_func_19740()
{
    // event 2116_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2116_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_2116_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2116_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcmayor_3950_instances))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2116_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(30);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2116_83_end: ;
}
void Frames::event_func_19741()
{
    // event 2117_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2117_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2117_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (87))) goto event_2117_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (91))) goto event_2117_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2117_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2117_83_end: ;
}
void Frames::event_func_19742()
{
    // event 2118_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2118_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (87))) goto event_2118_83_end;
        if (once_condition_2118_83) goto event_2118_83_end;
        once_condition_2118_83 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_2118_83_end: ;
}
void Frames::event_func_19743()
{
    // event 2119_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2119_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (88))) goto event_2119_83_end;
        if (once_condition_2119_83) goto event_2119_83_end;
        once_condition_2119_83 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_2119_83_end: ;
}
void Frames::event_func_19744()
{
    // event 2120_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2120_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2120_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (91))) goto event_2120_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2120_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.stop_channel(20-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(6);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_07_21_ogg_115, 21-1, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_sweet_ogg_327, 22-1, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_10_02_ogg_328, 23-1, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2120_83_end: ;
}
void Frames::event_func_19745()
{
    // event 2121_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2121_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_2121_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2121_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2121_83_end: ;
}
void Frames::event_func_19746()
{
    // event 2122_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2122_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2122_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (92))) goto event_2122_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2122_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.stop_channel(20-1);
    }
    event_2122_83_end: ;
}
void Frames::event_func_19747()
{
    // event 2123_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2123_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2123_83_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(1);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+3);
    }
    event_2123_83_end: ;
}
void Frames::event_func_19748()
{
    // event 2124_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2124_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2124_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2124_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2124_83_end: ;
}
void Frames::event_func_19749()
{
    // event 2125_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2125_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2125_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_2125_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(35);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_2125_83_end: ;
}
void Frames::event_func_19750()
{
    // event 2126_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2126_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2126_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_2126_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2126_83_end: ;
}
void Frames::event_func_19751()
{
    // event 2127_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2127_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2127_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2127_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2127_83_end: ;
}
void Frames::event_func_19752()
{
    // event 2128_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2128_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2128_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_2128_83_end;
        if (once_condition_2128_83) goto event_2128_83_end;
        once_condition_2128_83 = true;
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
    
    }
    event_2128_83_end: ;
}
void Frames::event_func_19753()
{
    // event 2129_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2129_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2129_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2129_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2129_83_end: ;
}
void Frames::event_func_19754()
{
    // event 2130_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_2130_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_2130_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2130_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2130_83_end;
        global_values->set(4, 2);
        next_frame = 79 + 0;    
    
    }
    event_2130_83_end: ;
}
void Frames::event_func_19755()
{
    // event 2132_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2132_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_2132_83_end: ;
}
void Frames::event_func_19756()
{
    // event 2133_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2133_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2133_83_end;
        if (once_condition_2133_83) goto event_2133_83_end;
        once_condition_2133_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 213);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 3940);
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->force_animation(7);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_direction(5);
        ((Active*)get_instance(npccouchlilac_545_instances))->set_visible(true);
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2133_83_end: ;
}
void Frames::event_func_19757()
{
    // event 2134_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2134_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2134_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->force_frame(2);
            ((Active*)*it)->set_x(374);
            ((Active*)*it)->set_y(((Active*)get_instance(npccouchlilac_545_instances))->get_y()-20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2134_83_end: ;
}
void Frames::event_func_19758()
{
    // event 2135_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2135_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2135_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2135_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2135_83_end: ;
}
void Frames::event_func_19759()
{
    // event 2136_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2136_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2136_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2136_83_end;
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_09_02_ogg_95, 18-1);
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2136_83_end: ;
}
void Frames::event_func_19760()
{
    // event 2137_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2137_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2137_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2137_83_end;
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
        }
    }
    event_2137_83_end: ;
}
void Frames::event_func_19761()
{
    // event 2138_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2138_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2138_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2138_83_end;
        npccouchcarol_555_instances.clear_selection();
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (4008))) { it.deselect(); continue; }
        }
        if (!npccouchcarol_555_instances.has_selection()) goto event_2138_83_end;
        for (ObjectIterator it(npccouchcarol_555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4002);
            ((Active*)*it)->set_x(((Active*)get_single(npccouchcarol_555_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2138_83_end: ;
}
void Frames::event_func_19762()
{
    // event 2139_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2139_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2139_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (130))) goto event_2139_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_12_01_ogg_329, 19-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(49);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2139_83_end: ;
}
void Frames::event_func_19763()
{
    // event 2140_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2140_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2140_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_2140_83_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(1);
    }
    event_2140_83_end: ;
}
void Frames::event_func_19764()
{
    // event 2141_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2141_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2141_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_2141_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(11);
        }
    }
    event_2141_83_end: ;
}
void Frames::event_func_19765()
{
    // event 2142_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2142_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2142_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (160))) goto event_2142_83_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(2);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(48);
        }
    }
    event_2142_83_end: ;
}
void Frames::event_func_19766()
{
    // event 2143_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2143_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_2143_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 1);
    }
    event_2143_83_end: ;
}
void Frames::event_func_19767()
{
    // event 2144_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2144_83_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(1))) goto event_2144_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) > (80))) goto event_2144_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(2, -20+randrange(50));
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_2144_83_end: ;
}
void Frames::event_func_19768()
{
    // event 2145_83
    bool or_result_2145_83 = false;
    bool or_temp_result_2145_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto or_event_2145_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2145_83_0_end;
        or_result_2145_83 = true;
        or_temp_result_2145_83_0 = true;
    }
    or_event_2145_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2145_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2145_83
    bool or_temp_result_2145_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto or_event_2145_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2145_83_1_end;
        or_result_2145_83 = true;
        or_temp_result_2145_83_1 = true;
    }
    or_event_2145_83_1_end: ;
    if (or_temp_result_2145_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2145_83
    bool or_temp_result_2145_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto or_event_2145_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2145_83_2_end;
        or_result_2145_83 = true;
        or_temp_result_2145_83_2 = true;
        or_event_2145_83_2_end: ;
        if (or_temp_result_2145_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2145_83) goto or_final_or_event_2145_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2145_83_0 || or_temp_result_2145_83_1 || or_temp_result_2145_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2145_83_2_end: ;
}
void Frames::event_func_19769()
{
    // event 2146_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2146_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2146_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_2146_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 95);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(3);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(3938);
            ((Active*)*it)->set_x(-80);
        }
    }
    event_2146_83_end: ;
}
void Frames::event_func_19770()
{
    // event 2147_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2147_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2147_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (95))) goto event_2147_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (96))) goto event_2147_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2147_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.stop_channel(20-1);
    }
    event_2147_83_end: ;
}
void Frames::event_func_19771()
{
    // event 2148_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2148_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2148_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_2148_83_end: ;
}
void Frames::event_func_19772()
{
    // event 2149_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2149_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2149_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2149_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(15);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2149_83_end: ;
}
void Frames::event_func_19773()
{
    // event 2150_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2150_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2150_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_2150_83_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->force_frame(4);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npccouchlilac_545_instances));
            if (parent == NULL) goto pos_end_2150_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -12);
            pos_end_2150_83_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2150_83_end: ;
}
void Frames::event_func_19774()
{
    // event 2151_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2151_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2151_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_2151_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_off(1))) goto event_2151_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
        }
    }
    event_2151_83_end: ;
}
void Frames::event_func_19775()
{
    // event 2152_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2152_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2152_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_off(1))) goto event_2152_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (4008))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2152_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4008);
        }
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.enable(1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_2152_83_end: ;
}
void Frames::event_func_19776()
{
    // event 2153_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2153_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2153_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_on(1))) goto event_2153_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2153_83_end: ;
}
void Frames::event_func_19777()
{
    // event 2154_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2154_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2154_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2154_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2154_83_end: ;
}
void Frames::event_func_19778()
{
    // event 2155_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2155_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2155_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_2155_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2155_83_end: ;
}
void Frames::event_func_19779()
{
    // event 2156_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2156_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2156_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_2156_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_off(2))) goto event_2156_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+3);
        }
    }
    event_2156_83_end: ;
}
void Frames::event_func_19780()
{
    // event 2157_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2157_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2157_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_off(2))) goto event_2157_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (4008))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2157_83_end;
        ((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.enable(2);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(4008);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_2157_83_end: ;
}
void Frames::event_func_19781()
{
    // event 2158_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2158_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2158_83_end;
        if (!(((Active*)get_instance(npccouchlilac_545_instances))->alterables->flags.is_on(2))) goto event_2158_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2158_83_end: ;
}
void Frames::event_func_19782()
{
    // event 2159_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2159_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2159_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_2159_83_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_2159_83_end: ;
}
void Frames::event_func_19783()
{
    // event 2160_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2160_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2160_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_2160_83_end;
        if (not_always_2160_83 > loop_count) {
            not_always_2160_83 = loop_count + 2;
            goto event_2160_83_end;
        }
        not_always_2160_83 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
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
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_2160_83_end: ;
}
void Frames::event_func_19784()
{
    // event 2161_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2161_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2161_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2161_83_end;
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
    event_2161_83_end: ;
}
void Frames::event_func_19785()
{
    // event 2162_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_ambushed_1)) goto event_2162_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2162_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2162_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2162_83_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
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
        next_frame = 35 + 0;    
    
        global_values->set(4, 0);
    }
    event_2162_83_end: ;
}
void Frames::event_func_19786()
{
    // event 2164_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2164_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_2164_83_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2164_83_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
    }
    event_2164_83_end: ;
}
void Frames::event_func_19787()
{
    // event 2165_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2165_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2165_83_end;
        if (once_condition_2165_83) goto event_2165_83_end;
        once_condition_2165_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 300);
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(336, 984);
            pos_end_2165_83_0: ;
        }
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 934);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
    }
    event_2165_83_end: ;
}
void Frames::event_func_19788()
{
    // event 2166_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2166_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2166_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_direction(16);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(986);
            ((Active*)*it)->set_x(-10);
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(986);
            ((Active*)*it)->set_x(-50);
            ((Active*)*it)->set_visible(true);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(986);
            ((Active*)*it)->set_x(-98);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(986);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(-130);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
    }
    event_2166_83_end: ;
}
void Frames::event_func_19789()
{
    // event 2167_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2167_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2167_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (8))) goto event_2167_83_end;
        if (once_condition_2167_83) goto event_2167_83_end;
        once_condition_2167_83 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_royal_palace_313+newline_character+str_shang_tu_314);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_2167_83_end: ;
}
void Frames::event_func_19790()
{
    // event 2168_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2168_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2168_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_2168_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2168_83_end: ;
}
void Frames::event_func_19791()
{
    // event 2169_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2169_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2169_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2169_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2169_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2169_83_end: ;
}
void Frames::event_func_19792()
{
    // event 2170_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2170_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2170_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2170_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_2170_83_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2170_83_end: ;
}
void Frames::event_func_19793()
{
    // event 2171_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2171_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2171_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2171_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+90))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2171_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(25);
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_2171_83_end: ;
}
void Frames::event_func_19794()
{
    // event 2172_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2172_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2172_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2172_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+90))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_2172_83_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2172_83_end: ;
}
void Frames::event_func_19795()
{
    // event 2173_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2173_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2173_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2173_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()+130))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2173_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
        }
    }
    event_2173_83_end: ;
}
void Frames::event_func_19796()
{
    // event 2174_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2174_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2174_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2174_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (frame_left()+130))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2174_83_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_2174_83_end: ;
}
void Frames::event_func_19797()
{
    // event 2175_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2175_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2175_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2175_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) < (frame_left()+170))) goto event_2175_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(30);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
    }
    event_2175_83_end: ;
}
void Frames::event_func_19798()
{
    // event 2176_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2176_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_2176_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_2176_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (frame_left()+170))) goto event_2176_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_2176_83_end: ;
}
void Frames::event_func_19799()
{
    // event 2177_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2177_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_2177_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2177_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 97);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
    }
    event_2177_83_end: ;
}
void Frames::event_func_19800()
{
    // event 2178_83
    bool or_result_2178_83 = false;
    bool or_temp_result_2178_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2178_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2178_83_0_end;
        or_result_2178_83 = true;
        or_temp_result_2178_83_0 = true;
    }
    or_event_2178_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2178_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2178_83
    bool or_temp_result_2178_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2178_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2178_83_1_end;
        or_result_2178_83 = true;
        or_temp_result_2178_83_1 = true;
    }
    or_event_2178_83_1_end: ;
    if (or_temp_result_2178_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2178_83
    bool or_temp_result_2178_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto or_event_2178_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2178_83_2_end;
        or_result_2178_83 = true;
        or_temp_result_2178_83_2 = true;
        or_event_2178_83_2_end: ;
        if (or_temp_result_2178_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2178_83) goto or_final_or_event_2178_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2178_83_0 || or_temp_result_2178_83_1 || or_temp_result_2178_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2178_83_2_end: ;
}
void Frames::event_func_19801()
{
    // event 2179_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2179_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2179_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (97))) goto event_2179_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (100))) goto event_2179_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2179_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_2179_83_end: ;
}
void Frames::event_func_19802()
{
    // event 2180_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2180_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (100))) goto event_2180_83_end;
        if (once_condition_2180_83) goto event_2180_83_end;
        once_condition_2180_83 = true;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(17);
    }
    event_2180_83_end: ;
}
void Frames::event_func_19803()
{
    // event 2181_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2181_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (100))) goto event_2181_83_end;
        if (!((media.get_channel_position(-1 +20)) > (650))) goto event_2181_83_end;
        if (once_condition_2181_83) goto event_2181_83_end;
        once_condition_2181_83 = true;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
    }
    event_2181_83_end: ;
}
void Frames::event_func_19804()
{
    // event 2182_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2182_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2182_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (100))) goto event_2182_83_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (frame_left()+170))) goto event_2182_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2182_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2182_83_end: ;
}
void Frames::event_func_19805()
{
    // event 2183_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2183_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (99))) goto event_2183_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
    }
    event_2183_83_end: ;
}
void Frames::event_func_19806()
{
    // event 2184_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2184_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2184_83_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()+2);
    }
    event_2184_83_end: ;
}
void Frames::event_func_19807()
{
    // event 2185_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2185_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2185_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (25))) goto event_2185_83_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2185_83_end: ;
}
void Frames::event_func_19808()
{
    // event 2186_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2186_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2186_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_2186_83_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2186_83_end: ;
}
void Frames::event_func_19809()
{
    // event 2187_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2187_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2187_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (65))) goto event_2187_83_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(35);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
    }
    event_2187_83_end: ;
}
void Frames::event_func_19810()
{
    // event 2188_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2188_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2188_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_2188_83_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2188_83_end: ;
}
void Frames::event_func_19811()
{
    // event 2189_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2189_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2189_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_2189_83_end;
        if (not_always_2189_83 > loop_count) {
            not_always_2189_83 = loop_count + 2;
            goto event_2189_83_end;
        }
        not_always_2189_83 = loop_count + 2;
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
    
    }
    event_2189_83_end: ;
}
void Frames::event_func_19812()
{
    // event 2190_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2190_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2190_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2190_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_2190_83_end: ;
}
void Frames::event_func_19813()
{
    // event 2191_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2191_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_2191_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2191_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2191_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_2191_83_end: ;
}
void Frames::event_func_19814()
{
    // event 2192_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2192_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2192_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 400);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(488, 368+global_values->get(17)*0.5));
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        ((Active*)get_instance(npcneera_2464_instances))->set_y(575);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(themagister_2115_instances))->get_x()+180);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(16);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
    }
    event_2192_83_end: ;
}
void Frames::event_func_19815()
{
    // event 2193_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2193_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_2193_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_2193_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_GONG_OPENDOOR_339, -1, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_2193_83_end: ;
}
void Frames::event_func_19816()
{
    // event 2194_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2194_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2194_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_2194_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(4);
    }
    event_2194_83_end: ;
}
void Frames::event_func_19817()
{
    // event 2195_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2195_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2195_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (110))) goto event_2195_83_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(0);
        ((Active*)get_instance(themagister_2115_instances))->set_direction(16);
    }
    event_2195_83_end: ;
}
void Frames::event_func_19818()
{
    // event 2196_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2196_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2196_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_2196_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (160))) goto event_2196_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_2196_83_end: ;
}
void Frames::event_func_19819()
{
    // event 2197_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2197_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2197_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) > (((Active*)get_instance(themagister_2115_instances))->get_x()+80))) goto event_2197_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(1);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(17);
        ((Active*)get_instance(npcneera_2464_instances))->set_x(((Active*)get_instance(npcneera_2464_instances))->get_x()-2);
        ((Active*)get_instance(npcneera_2464_instances))->restore_frame();
    }
    event_2197_83_end: ;
}
void Frames::event_func_19820()
{
    // event 2198_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_heroes_meet_the_magister_1)) goto event_2198_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_2198_83_end;
        if (!((((Active*)get_instance(npcneera_2464_instances))->get_x()) <= (((Active*)get_instance(themagister_2115_instances))->get_x()+80))) goto event_2198_83_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
    }
    event_2198_83_end: ;
}
