#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13746()
{
    // event 1663_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1663_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (630))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1663_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (15))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1663_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(false);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x_scale(1);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y_scale(1);
    }
    event_1663_64_end: ;
}
void Frames::event_func_13747()
{
    // event 1664_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1664_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (150))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1664_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-80))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1664_64_end;
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
        }
    }
    event_1664_64_end: ;
}
void Frames::event_func_13748()
{
    // event 1665_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1665_64_end;
        bossshadebeasttoptooth_3363_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasttoptooth_3363_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(sin_deg((((Active*)*it)->alterables->values.get(0)/math_helper/2)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)-90)*(50-((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(4))+60)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastbottomtooth_3364_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
    }
    event_1665_64_end: ;
}
void Frames::event_func_13749()
{
    // event 1666_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1666_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (-80))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1666_64_end;
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.06, 1));
        }
    }
    event_1666_64_end: ;
}
void Frames::event_func_13750()
{
    // event 1667_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1667_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-80))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1667_64_end;
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.06, 0));
        }
    }
    event_1667_64_end: ;
}
void Frames::event_func_13751()
{
    // event 1668_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1668_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (1))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1668_64_end;
        ((Active*)get_instance(bossvortex1_3362_instances))->set_scale(((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.get(0)*0.01);
        ((Active*)get_instance(bossvortex1_3362_instances))->set_angle(((Active*)get_instance(bossvortex1_3362_instances))->get_angle()-20, 0);
        {
            FrameObject * parent = ((Active*)get_instance(bossshadebeastmouth_3361_instances));
            if (parent == NULL) goto pos_end_1668_64_0;
            ((Active*)get_instance(bossvortex1_3362_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -2);
            pos_end_1668_64_0: ;
        }
        ((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.get(0)+2, 100));
    }
    event_1668_64_end: ;
}
void Frames::event_func_13752()
{
    // event 1669_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1669_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (1))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1669_64_end;
        ((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.set(0, 20);
        {
            ((Active*)get_instance(bossvortex1_3362_instances))->set_global_position(8, -83);
            pos_end_1669_64_0: ;
        }
    }
    event_1669_64_end: ;
}
void Frames::event_func_13753()
{
    // event 1670_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1670_64_end;
        if (!((((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.get(0)) == (98))) goto event_1670_64_end;
        media.play_id(SOUND_SHADEBEAST_VORTEX_2_350, -1, 1);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_direction(0);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x_scale(43);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y_scale(24);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(true);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y(frame_top());
    }
    event_1670_64_end: ;
}
void Frames::event_func_13754()
{
    // event 1671_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1671_64_end;
        if (!((((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.get(0)) >= (100))) goto event_1671_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (480))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1671_64_end;
        {
            FrameObject * parent = ((Active*)get_instance(bossvortex1_3362_instances));
            if (parent == NULL) goto pos_end_1671_64_0;
            ((Active*)get_instance(bossvortex2_3365_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1671_64_0: ;
        }
        ((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.set(0, (((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.get(0)+15)%math_helper%360);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_scale(1.25-cos_deg(((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.get(0))*0.25);
    }
    event_1671_64_end: ;
}
void Frames::event_func_13755()
{
    // event 1672_64
    bool or_result_1672_64 = false;
    bool or_temp_result_1672_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1672_64_0_end;
        bossvortex1_3362_instances.clear_selection();
        for (ObjectIterator it(bossvortex1_3362_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
        }
        if (!bossvortex1_3362_instances.has_selection()) goto or_event_1672_64_0_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (480))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto or_event_1672_64_0_end;
        or_result_1672_64 = true;
        or_temp_result_1672_64_0 = true;
    }
    or_event_1672_64_0_end: ;
    bossdail_3359_instances.clear_saved_selection();
    bossvortex1_3362_instances.clear_saved_selection();
    if (or_temp_result_1672_64_0) {
        bossdail_3359_instances.save_selection();
        bossvortex1_3362_instances.save_selection();
    }
    // event 1672_64
    bool or_temp_result_1672_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1672_64_1_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (1))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto or_event_1672_64_1_end;
        or_result_1672_64 = true;
        or_temp_result_1672_64_1 = true;
        or_event_1672_64_1_end: ;
        bossshadebeast_3357_instances.clear_saved_selection();
        if (or_temp_result_1672_64_1) {
            bossshadebeast_3357_instances.save_selection();
        }
        if (!or_result_1672_64) goto or_final_or_event_1672_64_1_end;
        bossshadebeast_3357_instances.empty_selection();
        bossvortex1_3362_instances.empty_selection();
        bossdail_3359_instances.empty_selection();
        if (or_temp_result_1672_64_1) {
            bossshadebeast_3357_instances.restore_selection();
        }
        if (or_temp_result_1672_64_0) {
            bossdail_3359_instances.restore_selection();
        }
        if (or_temp_result_1672_64_0) {
            bossvortex1_3362_instances.restore_selection();
        }
        bossvortex2_3365_instances.clear_selection();
        for (ObjectIterator it(bossvortex2_3365_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-149, 10);
            pos_end_1672_64_0: ;
        }
        for (ObjectIterator it(bossvortex2_3365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    or_final_or_event_1672_64_1_end: ;
}
void Frames::event_func_13756()
{
    // event 1673_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1673_64_end;
        if (!((((Active*)get_instance(bossvortex1_3362_instances))->alterables->values.get(0)) >= (100))) goto event_1673_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (340))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1673_64_end;
        FrameObject * single_instance_1673_64_0; single_instance_1673_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossvortex2_3365_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossvortexstar_3348(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1673_64_0 == NULL)
                    single_instance_1673_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1673_64_0))->alterables->values.set(1, ((Active*)get_instance(bossshadebeast_3357_instances, default_active_instance))->alterables->values.get(6)*13);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(leveldarksky_2069_instances))->blend_color.get_semi_transparency()-1, 64));
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
    }
    event_1673_64_end: ;
}
void Frames::event_func_13757()
{
    // event 1674_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1674_64_end;
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossshadebeastmouth_3361_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bossshadebeastmouth_3361_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0)-2);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+355)%math_helper%360);
            ((Active*)*it)->alterables->values.sub(0, 12);
            ((Active*)*it)->set_scale(get_min(1, ((Active*)*it)->alterables->values.get(0)*0.007));
        }
    }
    event_1674_64_end: ;
}
void Frames::event_func_13758()
{
    // event 1675_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1675_64_end;
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossvortexstar_3348_instances.has_selection()) goto event_1675_64_end;
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1675_64_end: ;
}
void Frames::event_func_13759()
{
    // event 1676_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1676_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (370))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1676_64_end;
        if (once_condition_1676_64) goto event_1676_64_end;
        once_condition_1676_64 = true;
        media.play_id(SOUND_DAIL_DIEVERMIN_355, -1, 1);
    }
    event_1676_64_end: ;
}
void Frames::event_func_13760()
{
    // event 1677_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1677_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (370))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (630))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1677_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+3)%math_helper%360);
        }
    }
    event_1677_64_end: ;
}
void Frames::event_func_13761()
{
    // event 1678_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1678_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (400))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1678_64_end;
        media.play_id(SOUND_SHADEBEAST_VORTEXFADE_353, -1, 1);
    }
    event_1678_64_end: ;
}
void Frames::event_func_13762()
{
    // event 1679_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1679_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (520))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1679_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1679_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        {
            loop_vortex_running = true;
            int times = int(8);
            loop_vortex_index = 0;
            while (loop_vortex_index < times) {
                loop_vortex_64();
                if (!loop_vortex_running) break;
                loop_vortex_index++;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SHADEBEAST_VORTEXBURST_352, -1, 1);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(128);
        }
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1679_64_end: ;
}
void Frames::event_func_13763()
{
    // event 1680_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1680_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (520))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1680_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (260))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1680_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        {
            loop_vortex_running = true;
            int times = int(8);
            loop_vortex_index = 0;
            while (loop_vortex_index < times) {
                loop_vortex_64();
                if (!loop_vortex_running) break;
                loop_vortex_index++;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SHADEBEAST_VORTEXBURST_352, -1, 1);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(128);
        }
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1680_64_end: ;
}
void Frames::event_func_13764()
{
    // event 1681_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1681_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (400))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1681_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (360))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1681_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1681_64_end: ;
}
void Frames::event_func_13765()
{
    // event 1682_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1682_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (400))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1682_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (200))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1682_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1682_64_end: ;
}
void Frames::event_func_13766()
{
    // event 1683_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1683_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (630))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1683_64_end;
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(leveldarksky_2069_instances))->blend_color.get_semi_transparency()-4, 64));
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
    }
    event_1683_64_end: ;
}
void Frames::event_func_13767()
{
    // event 1685_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1685_64_end;
        bossvortexhitzone_3349_instances.clear_selection();
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+30, 0);
        }
        {
            ObjectIterator other_it(bossvortexhitzone_3349_instances);
            effectvortexburst_3350_instances.clear_selection();
            for (ObjectIterator it(effectvortexburst_3350_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1685_64_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1685_64_0_end: ;
    }
    event_1685_64_end: ;
}
void Frames::event_func_13768()
{
    // event 1686_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1686_64_end;
        bossvortexhitzone_3349_instances.clear_selection();
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossvortexhitzone_3349_instances.has_selection()) goto event_1686_64_end;
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -3);
        }
        FrameObject * single_instance_1686_64_0; single_instance_1686_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossvortexhitzone_3349_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectvortexburst_3350(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1686_64_0 == NULL)
                    single_instance_1686_64_0 = new_obj;
            }
        }
    }
    event_1686_64_end: ;
}
void Frames::event_func_13769()
{
    // event 1687_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1687_64_end;
        bossvortexhitzone_3349_instances.clear_selection();
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (200))) { it.deselect(); continue; }
        }
        if (!bossvortexhitzone_3349_instances.has_selection()) goto event_1687_64_end;
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1687_64_end: ;
}
void Frames::event_func_13770()
{
    // event 1688_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1688_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1688_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (-80))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1688_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1688_64_end: ;
}
void Frames::event_func_13771()
{
    // event 1689_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1689_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1689_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-80))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1689_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1689_64_end: ;
}
void Frames::event_func_13772()
{
    // event 1690_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1690_64_end;
        bossvortexhitzone_3349_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossvortexhitzone_3349_instances, player_389_instances)) goto event_1690_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1690_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1690_64_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 3);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 60);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(200, 0, 255));
        }
    }
    event_1690_64_end: ;
}
void Frames::event_func_13773()
{
    // event 1691_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1691_64_end;
        bossvortexhitzone_3349_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossvortexhitzone_3349_instances, player_389_instances)) goto event_1691_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1691_64_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1691_64_end: ;
}
void Frames::event_func_13774()
{
    // event 1693_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1693_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1693_64_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1693_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1693_64_end: ;
}
void Frames::event_func_13775()
{
    // event 1694_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1694_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1694_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1694_64_end: ;
}
void Frames::event_func_13776()
{
    // event 1695_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1695_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1695_64_end;
        if (once_condition_1695_64) goto event_1695_64_end;
        once_condition_1695_64 = true;
        media.play_id(SOUND_DAIL_HOWABOUTTHIS_354, -1, 1);
    }
    event_1695_64_end: ;
}
void Frames::event_func_13777()
{
    // event 1696_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1696_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1696_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -120);
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1696_64_end: ;
}
void Frames::event_func_13778()
{
    // event 1697_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1697_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (7))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1697_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1697_64_end: ;
}
void Frames::event_func_13779()
{
    // event 1698_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1698_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1698_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x()) > (((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(2)-50))) goto event_1698_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x()) < (((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(2)+50))) goto event_1698_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_SHADEBEAST_RUMBLE_351, -1, 1);
    }
    event_1698_64_end: ;
}
void Frames::event_func_13780()
{
    // event 1699_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1699_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1699_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 3);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1699_64_1; single_instance_1699_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1699_64_1 == NULL)
                    single_instance_1699_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1699_64_2; single_instance_1699_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1699_64_2 == NULL)
                    single_instance_1699_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1699_64_2))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1699_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1699_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1699_64_2))->alterables->values.set(8, 270);
    }
    event_1699_64_end: ;
}
void Frames::event_func_13781()
{
    // event 1700_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1700_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1700_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 3);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1700_64_1; single_instance_1700_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + -8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1700_64_1 == NULL)
                    single_instance_1700_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1700_64_2; single_instance_1700_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1700_64_2 == NULL)
                    single_instance_1700_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(2, -8);
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(12, -45);
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1700_64_2))->alterables->values.set(8, 225);
    }
    event_1700_64_end: ;
}
void Frames::event_func_13782()
{
    // event 1701_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1701_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1701_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 3);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1701_64_1; single_instance_1701_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1701_64_1 == NULL)
                    single_instance_1701_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1701_64_2; single_instance_1701_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1701_64_2 == NULL)
                    single_instance_1701_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(2, 8);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(12, 45);
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        ((Active*)((Active*)single_instance_1701_64_2))->alterables->values.set(8, 315);
    }
    event_1701_64_end: ;
}
void Frames::event_func_13783()
{
    // event 1702_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1702_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1702_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1702_64_end: ;
}
void Frames::event_func_13784()
{
    // event 1703_64
    bool or_result_1703_64 = false;
    bool or_temp_result_1703_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1703_64_0_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1703_64_0_end;
        or_result_1703_64 = true;
        or_temp_result_1703_64_0 = true;
    }
    or_event_1703_64_0_end: ;
    bossdailcard_3360_instances.clear_saved_selection();
    if (or_temp_result_1703_64_0) {
        bossdailcard_3360_instances.save_selection();
    }
    // event 1703_64
    bool or_temp_result_1703_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1703_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bossdailspawnpoint_3356_instances, default_active_instance))->get_y()-160))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1703_64_1_end;
        or_result_1703_64 = true;
        or_temp_result_1703_64_1 = true;
        or_event_1703_64_1_end: ;
        if (or_temp_result_1703_64_1) {
            bossdailcard_3360_instances.save_selection();
        }
        if (!or_result_1703_64) goto or_final_or_event_1703_64_1_end;
        bossdailcard_3360_instances.empty_selection();
        if (or_temp_result_1703_64_0 || or_temp_result_1703_64_1) {
            bossdailcard_3360_instances.restore_selection();
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(6, 12);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    or_final_or_event_1703_64_1_end: ;
}
void Frames::event_func_13785()
{
    // event 1704_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1704_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1704_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1704_64_end: ;
}
void Frames::event_func_13786()
{
    // event 1705_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1705_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        bossdailcardeffect_3352_instances.clear_selection();
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossdailcard_3360_instances, it.current_index));
            if (parent == NULL) goto pos_end_1705_64_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1705_64_0: ;
        }
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.1);
            ((Active*)*it)->set_angle(((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(5), 0);
        }
        bossdailcardtrail_3351_instances.clear_selection();
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(10));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->get_y());
        }
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(bossdailcard_3360_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
    }
    event_1705_64_end: ;
}
void Frames::event_func_13787()
{
    // event 1706_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1706_64_end;
        bossdailcardtrail_3351_instances.clear_selection();
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bossdailcardtrail_3351_instances.has_selection()) goto event_1706_64_end;
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
            ((Active*)*it)->set_x_scale(get_distance_int(((Active*)*it)->get_x(), ((Active*)*it)->get_y(), ((Active*)*it)->alterables->values.get(4), ((Active*)*it)->alterables->values.get(5))*0.01);
        }
    }
    event_1706_64_end: ;
}
void Frames::event_func_13788()
{
    // event 1707_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1707_64_end;
        bossdailcardtrail_3351_instances.clear_selection();
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bossdailcardtrail_3351_instances.has_selection()) goto event_1707_64_end;
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3)+180, 0);
            ((Active*)*it)->set_x_scale(get_distance_int(((Active*)*it)->get_x(), ((Active*)*it)->get_y(), ((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(2))*0.01);
        }
    }
    event_1707_64_end: ;
}
void Frames::event_func_13789()
{
    // event 1708_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1708_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1708_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1708_64_end: ;
}
void Frames::event_func_13790()
{
    // event 1709_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1709_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1709_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1709_64_end: ;
}
void Frames::event_func_13791()
{
    // event 1710_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1710_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (10))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1710_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-2, 0));
        }
    }
    event_1710_64_end: ;
}
void Frames::event_func_13792()
{
    // event 1711_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1711_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (10))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1711_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.5, 10));
        }
    }
    event_1711_64_end: ;
}
void Frames::event_func_13793()
{
    // event 1712_64
    bool or_result_1712_64 = false;
    bool or_temp_result_1712_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1712_64_0_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (30))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1712_64_0_end;
        or_result_1712_64 = true;
        or_temp_result_1712_64_0 = true;
    }
    or_event_1712_64_0_end: ;
    bossdailcard_3360_instances.clear_saved_selection();
    if (or_temp_result_1712_64_0) {
        bossdailcard_3360_instances.save_selection();
    }
    // event 1712_64
    bool or_temp_result_1712_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1712_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (1))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1712_64_1_end;
        or_result_1712_64 = true;
        or_temp_result_1712_64_1 = true;
        or_event_1712_64_1_end: ;
        if (or_temp_result_1712_64_1) {
            bossdailcard_3360_instances.save_selection();
        }
        if (!or_result_1712_64) goto or_final_or_event_1712_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        if (or_temp_result_1712_64_0 || or_temp_result_1712_64_1) {
            bossdailcard_3360_instances.restore_selection();
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+30)%math_helper%360);
        }
    }
    or_final_or_event_1712_64_1_end: ;
}
void Frames::event_func_13794()
{
    // event 1713_64
    bool or_result_1713_64 = false;
    bool or_temp_result_1713_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1713_64_0_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (40))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1713_64_0_end;
        or_result_1713_64 = true;
        or_temp_result_1713_64_0 = true;
    }
    or_event_1713_64_0_end: ;
    bossdailcard_3360_instances.clear_saved_selection();
    if (or_temp_result_1713_64_0) {
        bossdailcard_3360_instances.save_selection();
    }
    // event 1713_64
    bool or_temp_result_1713_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1713_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1713_64_1_end;
        or_result_1713_64 = true;
        or_temp_result_1713_64_1 = true;
        or_event_1713_64_1_end: ;
        if (or_temp_result_1713_64_1) {
            bossdailcard_3360_instances.save_selection();
        }
        if (!or_result_1713_64) goto or_final_or_event_1713_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        if (or_temp_result_1713_64_0 || or_temp_result_1713_64_1) {
            bossdailcard_3360_instances.restore_selection();
        }
        media.stop_sample(SOUND_BREVON_BLADE_349);
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
    }
    or_final_or_event_1713_64_1_end: ;
}
void Frames::event_func_13795()
{
    // event 1714_64
    bool or_result_1714_64 = false;
    bool or_temp_result_1714_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1714_64_0_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (2))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1714_64_0_end;
        or_result_1714_64 = true;
        or_temp_result_1714_64_0 = true;
    }
    or_event_1714_64_0_end: ;
    bossdailcard_3360_instances.clear_saved_selection();
    if (or_temp_result_1714_64_0) {
        bossdailcard_3360_instances.save_selection();
    }
    // event 1714_64
    bool or_temp_result_1714_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1714_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) < (2))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1714_64_1_end;
        or_result_1714_64 = true;
        or_temp_result_1714_64_1 = true;
        or_event_1714_64_1_end: ;
        if (or_temp_result_1714_64_1) {
            bossdailcard_3360_instances.save_selection();
        }
        if (!or_result_1714_64) goto or_final_or_event_1714_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        if (or_temp_result_1714_64_0 || or_temp_result_1714_64_1) {
            bossdailcard_3360_instances.restore_selection();
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(8)+get_max(get_min(((((get_angle_int(((Active*)*it)->get_x()-((Active*)get_instance(player_389_instances))->get_x(), ((Active*)*it)->get_y()-((Active*)get_instance(player_389_instances))->get_y())-180)-((Active*)*it)->alterables->values.get(8)+540)%math_helper%360)-180), 45), -1*45));
            ((Active*)*it)->alterables->values.set(12, 0-((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    or_final_or_event_1714_64_1_end: ;
}
void Frames::event_func_13796()
{
    // event 1715_64
    bool or_result_1715_64 = false;
    bool or_temp_result_1715_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1715_64_0_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (40))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1715_64_0_end;
        or_result_1715_64 = true;
        or_temp_result_1715_64_0 = true;
    }
    or_event_1715_64_0_end: ;
    bossdailcard_3360_instances.clear_saved_selection();
    if (or_temp_result_1715_64_0) {
        bossdailcard_3360_instances.save_selection();
    }
    // event 1715_64
    bool or_temp_result_1715_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto or_event_1715_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto or_event_1715_64_1_end;
        or_result_1715_64 = true;
        or_temp_result_1715_64_1 = true;
        or_event_1715_64_1_end: ;
        if (or_temp_result_1715_64_1) {
            bossdailcard_3360_instances.save_selection();
        }
        if (!or_result_1715_64) goto or_final_or_event_1715_64_1_end;
        bossdailcard_3360_instances.clear_selection();
        if (or_temp_result_1715_64_0 || or_temp_result_1715_64_1) {
            bossdailcard_3360_instances.restore_selection();
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(9, 2);
            ((Active*)*it)->alterables->values.set(2, cos_deg(((Active*)*it)->alterables->values.get(8))*8);
            ((Active*)*it)->alterables->values.set(3, sin_deg(((Active*)*it)->alterables->values.get(8))*-8);
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_1715_64_1_end: ;
}
void Frames::event_func_13797()
{
    // event 1716_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1716_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1716_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1716_64_end: ;
}
void Frames::event_func_13798()
{
    // event 1717_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1717_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (15))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1717_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1717_64_end: ;
}
void Frames::event_func_13799()
{
    // event 1718_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1718_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1718_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, (((Active*)*it)->alterables->values.get(10)*9+((Active*)*it)->get_x())*0.1);
            ((Active*)*it)->alterables->values.set(11, (((Active*)*it)->alterables->values.get(11)*9+((Active*)*it)->get_y())*0.1);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1718_64_end: ;
}
void Frames::event_func_13800()
{
    // event 1719_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1719_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (height))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1719_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1719_64_end: ;
}
void Frames::event_func_13801()
{
    // event 1720_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1720_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1720_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1720_64_end: ;
}
void Frames::event_func_13802()
{
    // event 1721_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1721_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1721_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1721_64_end: ;
}
void Frames::event_func_13803()
{
    // event 1722_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1722_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1722_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1722_64_end: ;
}
void Frames::event_func_13804()
{
    // event 1723_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1723_64_end;
        bossdailcardeffect_3352_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossdailcardeffect_3352_instances, player_389_instances)) goto event_1723_64_end;
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!bossdailcardeffect_3352_instances.has_selection()) goto event_1723_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1723_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1723_64_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1723_64_end: ;
}
void Frames::event_func_13805()
{
    // event 1724_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1724_64_end;
        bossdailcardtrail_3351_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bossdailcardtrail_3351_instances, player_389_instances)) goto event_1724_64_end;
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!bossdailcardtrail_3351_instances.has_selection()) goto event_1724_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1724_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1724_64_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1724_64_end: ;
}
void Frames::event_func_13806()
{
    // event 1725_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1725_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1725_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossdailcardtrail_3351_instances.clear_selection();
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossdailcardeffect_3352_instances.clear_selection();
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1725_64_end: ;
}
void Frames::event_func_13807()
{
    // event 1726_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1726_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1726_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1726_64_1; single_instance_1726_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1726_64_1 == NULL)
                    single_instance_1726_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1726_64_2; single_instance_1726_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1726_64_2 == NULL)
                    single_instance_1726_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1726_64_2))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1726_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1726_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1726_64_2))->alterables->flags.enable(1);
    }
    event_1726_64_end: ;
}
void Frames::event_func_13808()
{
    // event 1727_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1727_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1727_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1727_64_1; single_instance_1727_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + -8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1727_64_1 == NULL)
                    single_instance_1727_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1727_64_2; single_instance_1727_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1727_64_2 == NULL)
                    single_instance_1727_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->values.set(3, 7);
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->values.set(2, -3);
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->values.set(12, -45);
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1727_64_2))->alterables->flags.enable(1);
    }
    event_1727_64_end: ;
}
void Frames::event_func_13809()
{
    // event 1728_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1728_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1728_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1728_64_1; single_instance_1728_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1728_64_1 == NULL)
                    single_instance_1728_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1728_64_2; single_instance_1728_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1728_64_2 == NULL)
                    single_instance_1728_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->values.set(3, 7);
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->values.set(2, 3);
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->values.set(12, 45);
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1728_64_2))->alterables->flags.enable(1);
    }
    event_1728_64_end: ;
}
void Frames::event_func_13810()
{
    // event 1729_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1729_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1729_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1729_64_1; single_instance_1729_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + -8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1729_64_1 == NULL)
                    single_instance_1729_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1729_64_2; single_instance_1729_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1729_64_2 == NULL)
                    single_instance_1729_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->values.set(2, -6);
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->values.set(12, -45);
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1729_64_2))->alterables->flags.enable(1);
    }
    event_1729_64_end: ;
}
void Frames::event_func_13811()
{
    // event 1730_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1730_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1730_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1730_64_1; single_instance_1730_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1730_64_1 == NULL)
                    single_instance_1730_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1730_64_2; single_instance_1730_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1730_64_2 == NULL)
                    single_instance_1730_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->values.set(2, 6);
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->values.set(12, 45);
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1730_64_2))->alterables->flags.enable(1);
    }
    event_1730_64_end: ;
}
void Frames::event_func_13812()
{
    // event 1731_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1731_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1731_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1731_64_1; single_instance_1731_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + -8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1731_64_1 == NULL)
                    single_instance_1731_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1731_64_2; single_instance_1731_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1731_64_2 == NULL)
                    single_instance_1731_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->values.set(3, 3);
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->values.set(2, -9);
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->values.set(12, -45);
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1731_64_2))->alterables->flags.enable(1);
    }
    event_1731_64_end: ;
}
void Frames::event_func_13813()
{
    // event 1732_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1732_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1732_64_end;
        bossdailcardtrail_3351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bossdailcardtrail_3351(77, -49), 1);
            bossdailcardtrail_3351_instances.add_back();
        }
        FrameObject * single_instance_1732_64_1; single_instance_1732_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcardeffect_3352(parent->get_action_x() - parent->layer->off_x + 8, parent->get_action_y() - parent->layer->off_y + -2), parent->layer);
                if (single_instance_1732_64_1 == NULL)
                    single_instance_1732_64_1 = new_obj;
            }
        }
        FrameObject * single_instance_1732_64_2; single_instance_1732_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossdailcard_3360(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1732_64_2 == NULL)
                    single_instance_1732_64_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->values.set(3, 3);
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->values.set(2, 9);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->values.set(12, 45);
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->values.set(9, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->values.set(7, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->flags.get(2)*99);
        ((Active*)((Active*)single_instance_1732_64_2))->alterables->flags.enable(1);
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
    }
    event_1732_64_end: ;
}
void Frames::event_func_13814()
{
    // event 1733_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1733_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1733_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1733_64_end: ;
}
void Frames::event_func_13815()
{
    // event 1734_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1734_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1734_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(6, 10);
            ((Active*)*it)->alterables->values.set(9, 5);
        }
        media.stop_sample(SOUND_KUJACKER_CHARGELIGHTNING_273);
        media.play_id(SOUND_KUJACKER_CHARGELIGHTNING_273, -1, 1);
    }
    event_1734_64_end: ;
}
void Frames::event_func_13816()
{
    // event 1735_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1735_64_end;
        bossdailcardeffect_3352_instances.clear_selection();
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bossdailcardeffect_3352_instances.has_selection()) goto event_1735_64_end;
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1735_64_end: ;
}
void Frames::event_func_13817()
{
    // event 1736_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1736_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (90))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1736_64_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-64);
        }
    }
    event_1736_64_end: ;
}
void Frames::event_func_13818()
{
    // event 1737_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1737_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-90))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1737_64_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+64);
        }
    }
    event_1737_64_end: ;
}
void Frames::event_func_13819()
{
    // event 1738_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1738_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (6))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1738_64_end;
        {
            SavedSelection extra_bossdailcard_3360_instances(bossdailcard_3360_instances);
            for (SavedIterator it(extra_bossdailcard_3360_instances); !it.end(); ++it) {
                foreach_instance_bolt = ((Active*)*it);
                foreach_bolt_64();
            }
        }
    }
    event_1738_64_end: ;
}
void Frames::event_func_13820()
{
    // event 1741_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1741_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (5))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1741_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%4);
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
        }
    }
    event_1741_64_end: ;
}
void Frames::event_func_13821()
{
    // event 1742_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1742_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1742_64_end: ;
}
void Frames::event_func_13822()
{
    // event 1743_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1743_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1743_64_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1743_64_end: ;
}
void Frames::event_func_13823()
{
    // event 1744_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1744_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (10))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1744_64_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1744_64_end: ;
}
void Frames::event_func_13824()
{
    // event 1745_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1745_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1745_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        media.stop_sample(SOUND_KUJACKER_LIGHTNING_272);
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_direction(1);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x_scale(43);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y_scale(24);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(64);
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 15));
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y(frame_top());
    }
    event_1745_64_end: ;
}
void Frames::event_func_13825()
{
    // event 1746_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1746_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (6))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1746_64_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%6);
        }
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1746_64_end: ;
}
void Frames::event_func_13826()
{
    // event 1747_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1747_64_end;
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (60))) { it.deselect(); continue; }
        }
        if (!bossdailcard_3360_instances.has_selection()) goto event_1747_64_end;
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(false);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x_scale(1);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_y_scale(1);
    }
    event_1747_64_end: ;
}
void Frames::event_func_13827()
{
    // event 1748_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1748_64_end;
        bosslightning2_2058_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosslightning2_2058_instances, playercharactersensor_383_instances)) goto event_1748_64_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1748_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1748_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1748_64_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1748_64_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1748_64_end: ;
}
void Frames::event_func_13828()
{
    // event 1749_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1749_64_end;
        if (!((bossdailcardeffect_3352_instances.size()) > (bossdailcard_3360_instances.size()))) goto event_1749_64_end;
        bossdailcardeffect_3352_instances.clear_selection();
        FrameObject * single_instance_1749_64_0; single_instance_1749_64_0 = pick_random(bossdailcardeffect_3352_instances);
        if (single_instance_1749_64_0 == NULL) goto event_1749_64_end;
        ((Active*)((Active*)single_instance_1749_64_0))->destroy();
    }
    event_1749_64_end: ;
}
void Frames::event_func_13829()
{
    // event 1750_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1750_64_end;
        if (!((bossdailcardtrail_3351_instances.size()) > (bossdailcard_3360_instances.size()))) goto event_1750_64_end;
        bossdailcardtrail_3351_instances.clear_selection();
        FrameObject * single_instance_1750_64_0; single_instance_1750_64_0 = pick_random(bossdailcardtrail_3351_instances);
        if (single_instance_1750_64_0 == NULL) goto event_1750_64_end;
        ((Active*)((Active*)single_instance_1750_64_0))->destroy();
    }
    event_1750_64_end: ;
}
void Frames::event_func_13830()
{
    // event 1751_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1751_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1751_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1751_64_end: ;
}
void Frames::event_func_13831()
{
    // event 1752_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1752_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1752_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(0, 500);
        }
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1752_64_end: ;
}
void Frames::event_func_13832()
{
    // event 1753_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1753_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (2))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1753_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 2);
        }
        FrameObject * single_instance_1753_64_0; single_instance_1753_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossdail_3359_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldmagnetic_317(parent->x + 0, parent->y + -32), parent->layer);
                if (single_instance_1753_64_0 == NULL)
                    single_instance_1753_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1753_64_0))->alterables->flags.enable(4);
        ((Active*)((Active*)single_instance_1753_64_0))->force_animation(7);
    }
    event_1753_64_end: ;
}
void Frames::event_func_13833()
{
    // event 1754_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1754_64_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1754_64_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossdail_3359_instances, it.current_index));
            if (parent == NULL) goto pos_end_1754_64_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -32);
            pos_end_1754_64_0: ;
        }
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1754_64_end: ;
}
void Frames::event_func_13834()
{
    // event 1755_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1755_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1755_64_end;
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1755_64_end: ;
}
void Frames::event_func_13835()
{
    // event 1756_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1756_64_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1756_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1756_64_end;
        if (not_always_1756_64 > loop_count) {
            not_always_1756_64 = loop_count + 2;
            goto event_1756_64_end;
        }
        not_always_1756_64 = loop_count + 2;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1756_64_end: ;
}
void Frames::event_func_13836()
{
    // event 1757_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1757_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1757_64_end;
        {
            qualifier_21.clear_selection();
            for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(4))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        media.stop_sample(SOUND_COMMON_HIT_2_24);
        media.play_id(SOUND_ITEM_SHIELDHIT_317, -1, 1);
    }
    event_1757_64_end: ;
}
void Frames::event_func_13837()
{
    // event 1758_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1758_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1758_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->values.set(2, 30);
        }
    }
    event_1758_64_end: ;
}
void Frames::event_func_13838()
{
    // event 1759_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1759_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1759_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1759_64_end: ;
}
void Frames::event_func_13839()
{
    // event 1760_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1760_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1760_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.set(2, 120);
        }
        media.stop_sample(SOUND_COMMON_HIT_2_24);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.play_id(SOUND_DAIL_HURT1_357, -1, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1760_64_end: ;
}
void Frames::event_func_13840()
{
    // event 1761_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1761_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (8))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1761_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 3);
        }
        media.play_id(SOUND_ITEM_SHIELDMETAL_2_1, -1, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1761_64_end: ;
}
void Frames::event_func_13841()
{
    // event 1762_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1762_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1762_64_end;
        if (once_condition_1762_64) goto event_1762_64_end;
        once_condition_1762_64 = true;
        media.play_id(SOUND_DAIL_NOTFINISHED_359, -1, 1);
    }
    event_1762_64_end: ;
}
void Frames::event_func_13842()
{
    // event 1763_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1763_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (5))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1763_64_end;
        if (once_condition_1763_64) goto event_1763_64_end;
        once_condition_1763_64 = true;
        media.play_id(SOUND_DAIL_WHATISTHIS_358, -1, 1);
    }
    event_1763_64_end: ;
}
void Frames::event_func_13843()
{
    // event 1764_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1764_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)get_instance(bossdail_3359_instances, default_active_instance))->alterables->values.get(8)*12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1764_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(8, 50+(((Active*)*it)->alterables->values.get(3)%math_helper%10)*15);
        }
    }
    event_1764_64_end: ;
}
void Frames::event_func_13844()
{
    // event 1765_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1765_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1765_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1765_64_end: ;
}
void Frames::event_func_13845()
{
    // event 1766_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1766_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1766_64_end;
        if (!((((Active*)get_single(bossshadebeasteye_3346_instances, default_active_instance))->alterables->values.get(3)%math_helper%2) == (1))) goto event_1766_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (70))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1766_64_end;
        FrameObject * single_instance_1766_64_0; single_instance_1766_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossshadebeasteye_3346_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemybeastiris_3353(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1766_64_0 == NULL)
                    single_instance_1766_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1766_64_0))->alterables->values.set(4, (((Active*)get_single(bossshadebeasteye_3346_instances, default_active_instance))->get_x()-((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x())*0.05);
        ((Active*)((Active*)single_instance_1766_64_0))->alterables->values.set(22, ((((Active*)get_single(bossshadebeasteye_3346_instances, default_active_instance))->alterables->values.get(3)/math_helper/2)%math_helper%2)*3);
        ((Active*)((Active*)single_instance_1766_64_0))->alterables->values.set(3, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-25);
    }
    event_1766_64_end: ;
}
