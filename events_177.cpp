#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13846()
{
    // event 1767_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1767_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1767_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 2);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1767_64_end: ;
}
void Frames::event_func_13847()
{
    // event 1768_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1768_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1768_64_end;
        if (not_always_1768_64 > loop_count) {
            not_always_1768_64 = loop_count + 2;
            goto event_1768_64_end;
        }
        not_always_1768_64 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bossshadebeasttoptooth_3363_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasttoptooth_3363_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastbottomtooth_3364_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bossshadebeastmouth_3361_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastmouth_3361_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_da_dail_no_ogg_218, 28-1);
    }
    event_1768_64_end: ;
}
void Frames::event_func_13848()
{
    // event 1769_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1769_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1769_64_end;
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        bossshadebeastmouth_3361_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastmouth_3361_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        bossshadebeasttoptooth_3363_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasttoptooth_3363_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastbottomtooth_3364_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1769_64_end: ;
}
void Frames::event_func_13849()
{
    // event 1770_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1770_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1770_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 9);
        }
            group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(6);
        }
        {
            FrameObject * parent = ((Active*)get_single(bossdail_3359_instances));
            if (parent == NULL) goto pos_end_1770_64_0;
            ((Active*)get_instance(bossdailfall_3366_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1770_64_0: ;
        }
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(0, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(1, ((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->values.get(24));
        ((Active*)get_instance(bossdailfall_3366_instances))->set_visible(true);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(2, ((Active*)get_instance(bossdailfall_3366_instances))->get_x());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(3, ((Active*)get_instance(bossdailfall_3366_instances))->get_y());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(4, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(5, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(bossvortex1_3362_instances))->set_visible(false);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_visible(false);
    }
    event_1770_64_end: ;
}
void Frames::event_func_13850()
{
    // event 1771_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1771_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1771_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -80);
        }
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1771_64_end: ;
}
void Frames::event_func_13851()
{
    // event 1772_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1772_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1772_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (-6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1772_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1.5);
        }
    }
    event_1772_64_end: ;
}
void Frames::event_func_13852()
{
    // event 1773_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1773_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1773_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_x(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(2));
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(2, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(3, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1)+0.3, 15));
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1773_64_end: ;
}
void Frames::event_func_13853()
{
    // event 1774_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1774_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1774_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(0)) < (0))) goto event_1774_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(0);
    }
    event_1774_64_end: ;
}
void Frames::event_func_13854()
{
    // event 1775_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1775_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1775_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(0)) > (0))) goto event_1775_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(16);
    }
    event_1775_64_end: ;
}
void Frames::event_func_13855()
{
    // event 1776_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1776_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1776_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(2)) <= (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+32))) goto event_1776_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+32);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(0, 0);
    }
    event_1776_64_end: ;
}
void Frames::event_func_13856()
{
    // event 1777_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1777_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1777_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(2)) >= (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-32))) goto event_1777_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-32);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(0, 0);
    }
    event_1777_64_end: ;
}
void Frames::event_func_13857()
{
    // event 1778_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1778_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(5)) == (1))) goto event_1778_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(3)) >= (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1778_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->force_animation(10);
    }
    event_1778_64_end: ;
}
void Frames::event_func_13858()
{
    // event 1779_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1779_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (60))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1779_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_05_03_ogg_219, 28-1);
        media.lock(28-1);
    }
    event_1779_64_end: ;
}
void Frames::event_func_13859()
{
    // event 1780_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1780_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1780_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1780_64_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1780_64_0_end;
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
        dynamic_1780_64_0_end: ;
        FrameObject * single_instance_1780_64_1; single_instance_1780_64_1 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectvortexburst_3350(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1780_64_1 == NULL)
                    single_instance_1780_64_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1780_64_1))->set_x(((Active*)single_instance_1780_64_1)->get_x()-60+randrange(121));
        ((Active*)((Active*)single_instance_1780_64_1))->set_y(((Active*)single_instance_1780_64_1)->get_y()-60+randrange(121));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
    }
    event_1780_64_end: ;
}
void Frames::event_func_13860()
{
    // event 1781_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1781_64_end;
        if (!((global_values->get(3)%math_helper%6) == (3))) goto event_1781_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1781_64_end;
        FrameObject * single_instance_1781_64_0; single_instance_1781_64_0 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectvortexburst_3350(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1781_64_0 == NULL)
                    single_instance_1781_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1781_64_0))->set_x(((Active*)single_instance_1781_64_0)->get_x()-60+randrange(121));
        ((Active*)((Active*)single_instance_1781_64_0))->set_y(((Active*)single_instance_1781_64_0)->get_y()-60+randrange(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_y()-((Active*)get_single(bossshadebeast_3357_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
    }
    event_1781_64_end: ;
}
void Frames::event_func_13861()
{
    // event 1782_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1782_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1782_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1782_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        FrameObject * single_instance_1782_64_0; single_instance_1782_64_0 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1782_64_0 == NULL)
                    single_instance_1782_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1782_64_0))->set_y(((Active*)single_instance_1782_64_0)->get_y()-60+randrange(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_y()-((Active*)get_single(bossshadebeast_3357_instances, default_active_instance))->get_y()));
        ((Active*)((Active*)single_instance_1782_64_0))->set_x(((Active*)single_instance_1782_64_0)->get_x()-60+randrange(121));
    }
    event_1782_64_end: ;
}
void Frames::event_func_13862()
{
    // event 1783_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1783_64_end;
        if (!((global_values->get(3)%math_helper%6) == (3))) goto event_1783_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1783_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        FrameObject * single_instance_1783_64_0; single_instance_1783_64_0 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1783_64_0 == NULL)
                    single_instance_1783_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1783_64_0))->set_y(((Active*)single_instance_1783_64_0)->get_y()-60+randrange(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_y()-((Active*)get_single(bossshadebeast_3357_instances, default_active_instance))->get_y()));
        ((Active*)((Active*)single_instance_1783_64_0))->set_x(((Active*)single_instance_1783_64_0)->get_x()-60+randrange(121));
    }
    event_1783_64_end: ;
}
void Frames::event_func_13863()
{
    // event 1784_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1784_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (400))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1784_64_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
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
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
            group_pause_1 = false;
    
        media.unlock(28-1);
    }
    event_1784_64_end: ;
}
void Frames::event_func_13864()
{
    // event 1785_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1785_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (100))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1785_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1785_64_end: ;
}
void Frames::event_func_13865()
{
    // event 1786_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1786_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1786_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1786_64_end: ;
}
void Frames::event_func_13866()
{
    // event 1787_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1787_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (19))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1787_64_end;
        if (once_condition_1787_64) goto event_1787_64_end;
        once_condition_1787_64 = true;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 1460);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1192);
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
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-100);
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossdailcardtrail_3351_instances.clear_selection();
        for (ObjectIterator it(bossdailcardtrail_3351_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossshadebeastmouth_3361_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastmouth_3361_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossshadebeasttoptooth_3363_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasttoptooth_3363_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastbottomtooth_3364_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossvortexhitzone_3349_instances.clear_selection();
        for (ObjectIterator it(bossvortexhitzone_3349_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bossdailfall_3366_instances))->set_layer(3-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_x(((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()+128);
        ((Active*)get_instance(bossdailfall_3366_instances))->force_animation(7);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(0);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(false);
    }
    event_1787_64_end: ;
}
void Frames::event_func_13867()
{
    // event 1788_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1788_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (20))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1788_64_end;
        if (once_condition_1788_64) goto event_1788_64_end;
        once_condition_1788_64 = true;
        FrameObject * single_instance_1788_64_0; single_instance_1788_64_0 = NULL;
        // select single: true false false
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + -48, parent->y + -14), parent->layer);
                if (single_instance_1788_64_0 == NULL)
                    single_instance_1788_64_0 = new_obj;
            }
        }
        FrameObject * single_instance_1788_64_1; single_instance_1788_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + -48, parent->y + -14), parent->layer);
                if (single_instance_1788_64_1 == NULL)
                    single_instance_1788_64_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_64_1))->set_visible(true);
        ((Active*)((Active*)single_instance_1788_64_0))->set_visible(true);
        ((Active*)((Active*)single_instance_1788_64_1))->set_direction(0);
            group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 = false;
    
        FrameObject * single_instance_1788_64_2; single_instance_1788_64_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 72, parent->y + -14), parent->layer);
                if (single_instance_1788_64_2 == NULL)
                    single_instance_1788_64_2 = new_obj;
            }
        }
        FrameObject * single_instance_1788_64_3; single_instance_1788_64_3 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 72, parent->y + -14), parent->layer);
                if (single_instance_1788_64_3 == NULL)
                    single_instance_1788_64_3 = new_obj;
            }
        }
        FrameObject * single_instance_1788_64_4; single_instance_1788_64_4 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 32, parent->y + -14), parent->layer);
                if (single_instance_1788_64_4 == NULL)
                    single_instance_1788_64_4 = new_obj;
            }
        }
        FrameObject * single_instance_1788_64_5; single_instance_1788_64_5 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + -96, parent->y + -14), parent->layer);
                if (single_instance_1788_64_5 == NULL)
                    single_instance_1788_64_5 = new_obj;
            }
        }
        FrameObject * single_instance_1788_64_6; single_instance_1788_64_6 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + -96, parent->y + -14), parent->layer);
                if (single_instance_1788_64_6 == NULL)
                    single_instance_1788_64_6 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_64_3))->set_visible(true);
        ((Active*)((Active*)single_instance_1788_64_3))->set_direction(16);
        ((Active*)((Active*)single_instance_1788_64_6))->set_visible(true);
        ((Active*)((Active*)single_instance_1788_64_6))->set_direction(0);
        ((Active*)((Active*)single_instance_1788_64_4))->set_visible(true);
        ((Active*)((Active*)single_instance_1788_64_4))->set_direction(16);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
        FrameObject * single_instance_1788_64_7; single_instance_1788_64_7 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(cameralimitbossbottom_420_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + -32, parent->y + -291), parent->layer);
                if (single_instance_1788_64_7 == NULL)
                    single_instance_1788_64_7 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_64_7))->set_visible(false);
        ((Active*)((Active*)single_instance_1788_64_7))->set_direction(0);
        ((Active*)((Active*)single_instance_1788_64_7))->force_animation(24);
    }
    event_1788_64_end: ;
}
void Frames::event_func_13868()
{
    // event 1789_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1789_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (100))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1789_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1789_64_end: ;
}
void Frames::event_func_13869()
{
    // event 1790_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1790_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (164))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1790_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1790_64_end: ;
}
void Frames::event_func_13870()
{
    // event 1791_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1791_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (164))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1791_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1791_64_end: ;
}
void Frames::event_func_13871()
{
    // event 1792_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1792_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (174))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1792_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1792_64_end: ;
}
void Frames::event_func_13872()
{
    // event 1793_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1793_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (184))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1793_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1793_64_end: ;
}
void Frames::event_func_13873()
{
    // event 1794_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1794_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (204))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1794_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1794_64_end: ;
}
void Frames::event_func_13874()
{
    // event 1795_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1795_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (224))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (244))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1795_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 10);
    }
    event_1795_64_end: ;
}
void Frames::event_func_13875()
{
    // event 1796_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1796_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (304))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (344))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1796_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 10);
    }
    event_1796_64_end: ;
}
void Frames::event_func_13876()
{
    // event 1797_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1797_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (404))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (425))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1797_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 10);
    }
    event_1797_64_end: ;
}
void Frames::event_func_13877()
{
    // event 1798_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1798_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (374))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1798_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1798_64_end: ;
}
void Frames::event_func_13878()
{
    // event 1799_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1799_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (384))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1799_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1799_64_end: ;
}
void Frames::event_func_13879()
{
    // event 1800_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1800_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (394))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1800_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1800_64_end: ;
}
void Frames::event_func_13880()
{
    // event 1801_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1801_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (414))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1801_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1801_64_end: ;
}
void Frames::event_func_13881()
{
    // event 1802_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1802_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (445))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1802_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_awyeah_ogg_203, 28-1);
    }
    event_1802_64_end: ;
}
void Frames::event_func_13882()
{
    // event 1803_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1803_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (455))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1803_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_milla_yay_ogg_160, 27-1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(3)+str_1_128);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1803_64_end: ;
}
void Frames::event_func_13883()
{
    // event 1804_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1804_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (465))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1804_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_woohoo_ogg_134, 26-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_to_torque_objcomplete_ogg_220, 25-1);
        ((Active*)get_instance(levelcardactclear1_847_instances))->force_animation(7);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(true);
    }
    event_1804_64_end: ;
}
void Frames::event_func_13884()
{
    // event 1805_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1805_64_end;
        if (!(((Active*)get_instance(levelcardactclear1_847_instances))->is_animation_finished(7))) goto event_1805_64_end;
        ((Active*)get_instance(levelcardactclear1_847_instances))->force_animation(8);
    }
    event_1805_64_end: ;
}
void Frames::event_func_13885()
{
    // event 1806_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1806_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (580))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1806_64_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->force_animation(0);
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
        ((Active*)get_instance(bossvortex1_3362_instances))->set_layer(((Active*)get_instance(bossdailfall_3366_instances))->layer->index+1-1);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_layer(((Active*)get_instance(bossdailfall_3366_instances))->layer->index+1-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(1, -10);
        ((Active*)get_instance(bossvortex1_3362_instances))->set_scale(1);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_visible(true);
        ((Active*)get_instance(bossvortex1_3362_instances))->set_visible(true);
    }
    event_1806_64_end: ;
}
void Frames::event_func_13886()
{
    // event 1807_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1807_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (580))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1807_64_end;
        {
            FrameObject * parent = ((Active*)get_instance(bossdailfall_3366_instances));
            if (parent == NULL) goto pos_end_1807_64_0;
            ((Active*)get_instance(bossvortex1_3362_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1807_64_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bossvortex1_3362_instances));
            if (parent == NULL) goto pos_end_1807_64_1;
            ((Active*)get_instance(bossvortex2_3365_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1807_64_1: ;
        }
        ((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.set(0, (((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.get(0)+15)%math_helper%360);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_scale(1.25-cos_deg(((Active*)get_instance(bossvortex2_3365_instances))->alterables->values.get(0))*0.25);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(bossdailfall_3366_instances))->get_y()+((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1));
        ((Active*)get_instance(bossvortex1_3362_instances))->set_angle(((Active*)get_instance(bossvortex1_3362_instances))->get_angle()-20, 0);
    }
    event_1807_64_end: ;
}
void Frames::event_func_13887()
{
    // event 1808_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1808_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (580))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1808_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1)) < (0))) goto event_1808_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1)+0.3, -1));
    }
    event_1808_64_end: ;
}
void Frames::event_func_13888()
{
    // event 1809_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1809_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (580))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1809_64_end;
        FrameObject * single_instance_1809_64_0; single_instance_1809_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossvortex2_3365_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossvortexstar_3348(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1809_64_0 == NULL)
                    single_instance_1809_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1809_64_0))->alterables->values.set(1, (((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->values.get(5)*3*13)%math_helper%360);
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(leveldarksky_2069_instances))->blend_color.get_semi_transparency()-1, 64));
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
    }
    event_1809_64_end: ;
}
void Frames::event_func_13889()
{
    // event 1810_64
    bool or_result_1810_64 = false;
    bool or_temp_result_1810_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1810_64_0_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (580))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto or_event_1810_64_0_end;
        or_result_1810_64 = true;
        or_temp_result_1810_64_0 = true;
    }
    or_event_1810_64_0_end: ;
    bossdail_3359_instances.clear_saved_selection();
    if (or_temp_result_1810_64_0) {
        bossdail_3359_instances.save_selection();
    }
    // event 1810_64
    bool or_temp_result_1810_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1810_64_1_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (10))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto or_event_1810_64_1_end;
        or_result_1810_64 = true;
        or_temp_result_1810_64_1 = true;
        or_event_1810_64_1_end: ;
        if (or_temp_result_1810_64_1) {
            bossdail_3359_instances.save_selection();
        }
        if (!or_result_1810_64) goto or_final_or_event_1810_64_1_end;
        bossdail_3359_instances.empty_selection();
        if (or_temp_result_1810_64_0 || or_temp_result_1810_64_1) {
            bossdail_3359_instances.restore_selection();
        }
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossvortex1_3362_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bossvortex1_3362_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0)-2);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+355)%math_helper%360);
            ((Active*)*it)->alterables->values.sub(0, 12);
            ((Active*)*it)->set_scale(get_min(1, ((Active*)*it)->alterables->values.get(0)*0.007));
        }
    }
    or_final_or_event_1810_64_1_end: ;
}
void Frames::event_func_13890()
{
    // event 1811_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1811_64_end;
        bossvortexstar_3348_instances.clear_selection();
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossvortexstar_3348_instances.has_selection()) goto event_1811_64_end;
        for (ObjectIterator it(bossvortexstar_3348_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1811_64_end: ;
}
void Frames::event_func_13891()
{
    // event 1812_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1812_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (590))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1812_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(10);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(10);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_01_07_ogg_221, 28-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_06_13_ogg_222, 27-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_gasp1_ogg_223, 26-1);
    }
    event_1812_64_end: ;
}
void Frames::event_func_13892()
{
    // event 1813_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1813_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (610))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (618))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1813_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(1);
        }
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(11);
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(45, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-6);
        }
        {
            FrameObject * parent = ((Active*)get_single(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_1813_64_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1813_64_0: ;
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
    }
    event_1813_64_end: ;
}
void Frames::event_func_13893()
{
    // event 1814_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1814_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (613))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (624))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1814_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
    }
    event_1814_64_end: ;
}
void Frames::event_func_13894()
{
    // event 1815_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1815_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (624))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1815_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1815_64_end: ;
}
void Frames::event_func_13895()
{
    // event 1816_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1816_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (640))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (724))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1816_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1.4);
    }
    event_1816_64_end: ;
}
void Frames::event_func_13896()
{
    // event 1817_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1817_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (724))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (784))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1817_64_end;
        if (!((((Active*)get_single(bossdail_3359_instances, default_active_instance))->alterables->values.get(5)%math_helper%7) == (0))) goto event_1817_64_end;
        FrameObject * single_instance_1817_64_0; single_instance_1817_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossdailfall_3366_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->x + -150, parent->y + -182), parent->layer);
                if (single_instance_1817_64_0 == NULL)
                    single_instance_1817_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1817_64_0))->alterables->values.set(0, ((Active*)single_instance_1817_64_0)->get_x());
        ((Active*)((Active*)single_instance_1817_64_0))->alterables->values.set(1, ((Active*)single_instance_1817_64_0)->get_y());
        ((Active*)((Active*)single_instance_1817_64_0))->alterables->values.set(2, 8);
        ((Active*)((Active*)single_instance_1817_64_0))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1817_64_0))->alterables->values.set(6, 1);
    }
    event_1817_64_end: ;
}
void Frames::event_func_13897()
{
    // event 1819_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1819_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (784))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1819_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->force_animation(0);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(16);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(2, ((Active*)get_instance(bossdailfall_3366_instances))->get_x());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(3, ((Active*)get_instance(bossdailfall_3366_instances))->get_y());
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1819_64_end: ;
}
void Frames::event_func_13898()
{
    // event 1820_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1820_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (11))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1820_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_x(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(2));
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(2, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(3, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1));
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(1)+0.3, 15));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 4);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 3);
    }
    event_1820_64_end: ;
}
void Frames::event_func_13899()
{
    // event 1821_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1821_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (11))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1821_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(3)) >= (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1821_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_y(((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->force_animation(11);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(16);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1821_64_end: ;
}
void Frames::event_func_13900()
{
    // event 1822_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1822_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1822_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1822_64_end: ;
}
void Frames::event_func_13901()
{
    // event 1823_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1823_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (60))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1823_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 1);
    }
    event_1823_64_end: ;
}
void Frames::event_func_13902()
{
    // event 1824_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1824_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (60))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1824_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_direction(1);
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
        FrameObject * single_instance_1824_64_0; single_instance_1824_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossdailfall_3366_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -32), parent->layer);
                if (single_instance_1824_64_0 == NULL)
                    single_instance_1824_64_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_1824_64_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_1824_64_end: ;
}
void Frames::event_func_13903()
{
    // event 1825_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1825_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (60))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1825_64_end;
        FrameObject * single_instance_1825_64_0; single_instance_1825_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossdailfall_3366_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1825_64_0 == NULL)
                    single_instance_1825_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1825_64_0))->set_direction(10);
        ((Active*)((Active*)single_instance_1825_64_0))->move_back();
        ((Active*)get_instance(bossdailfall_3366_instances))->set_x(((Active*)get_instance(bossdailfall_3366_instances))->get_x()+15);
    }
    event_1825_64_end: ;
}
void Frames::event_func_13904()
{
    // event 1826_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1826_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (120))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1826_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->set_visible(false);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1826_64_end: ;
}
void Frames::event_func_13905()
{
    // event 1827_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1827_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (20))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1827_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1827_64_end: ;
}
void Frames::event_func_13906()
{
    // event 1828_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1828_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (30))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1828_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1828_64_end: ;
}
void Frames::event_func_13907()
{
    // event 1829_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1829_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (80))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1829_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
    }
    event_1829_64_end: ;
}
void Frames::event_func_13908()
{
    // event 1830_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1830_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (80))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1830_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1830_64_end: ;
}
void Frames::event_func_13909()
{
    // event 1831_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1831_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (87))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1831_64_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
    }
    event_1831_64_end: ;
}
void Frames::event_func_13910()
{
    // event 1832_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1832_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (87))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1832_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1832_64_end: ;
}
void Frames::event_func_13911()
{
    // event 1833_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1833_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1833_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1833_64_end: ;
}
void Frames::event_func_13912()
{
    // event 1834_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1834_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (13))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1834_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+11);
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+15, ((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()));
        }
    }
    event_1834_64_end: ;
}
void Frames::event_func_13913()
{
    // event 1835_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1835_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (13))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1835_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1835_64_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(9);
        }
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1835_64_end: ;
}
void Frames::event_func_13914()
{
    // event 1836_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1836_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1836_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1836_64_end: ;
}
void Frames::event_func_13915()
{
    // event 1837_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1837_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (30))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1837_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        FrameObject * single_instance_1837_64_0; single_instance_1837_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1837_64_0 == NULL)
                    single_instance_1837_64_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_1837_64_0)->set_shader(Render::ADDITIVE);
        }
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
    }
    event_1837_64_end: ;
}
void Frames::event_func_13916()
{
    // event 1838_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1838_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (70))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1838_64_end;
        FrameObject * single_instance_1838_64_0; single_instance_1838_64_0 = NULL;
        // select single: true false false
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1838_64_0 == NULL)
                    single_instance_1838_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1838_64_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1838_64_0))->move_back();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
    }
    event_1838_64_end: ;
}
void Frames::event_func_13917()
{
    // event 1839_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1839_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1839_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1839_64_end: ;
}
void Frames::event_func_13918()
{
    // event 1840_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1840_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (80))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1840_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1840_64_end: ;
}
void Frames::event_func_13919()
{
    // event 1841_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1841_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (90))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1841_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1841_64_end: ;
}
void Frames::event_func_13920()
{
    // event 1842_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1842_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (120))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1842_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1842_64_end: ;
}
void Frames::event_func_13921()
{
    // event 1843_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1843_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (120))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1843_64_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1843_64_0; single_instance_1843_64_0 = NULL;
        // select single: true false false
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator p_it(playerskintorque_450_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1843_64_0 == NULL)
                    single_instance_1843_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1843_64_0))->set_x_scale(0.5);
    }
    event_1843_64_end: ;
}
void Frames::event_func_13922()
{
    // event 1844_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1844_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (120))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1844_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1844_64_end: ;
}
void Frames::event_func_13923()
{
    // event 1845_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1845_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (130))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1845_64_end;
        if (!group_main_engine_level_specific_methods_stage_clear_1) {
            group_main_engine_level_specific_methods_stage_clear_1 = true;
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
    }
    event_1845_64_end: ;
}
void Frames::event_func_13924()
{
    // event 1847_64
    {
        if (!(group_main_engine_1)) goto event_1847_64_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1847_64_end;
        if (once_condition_1847_64) goto event_1847_64_end;
        once_condition_1847_64 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 52)) == (0))) goto event_1847_64_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (720000))) goto event_1847_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 52);
    }
    event_1847_64_end: ;
}
void Frames::event_func_13925()
{
    // event 1848_64
    {
        if (!(group_main_engine_1)) goto event_1848_64_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1848_64_end;
        if (once_condition_1848_64) goto event_1848_64_end;
        once_condition_1848_64 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 32)) == (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 91)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 92)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 93)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 94)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 95)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 96)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 97)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 98)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 99)) > (0))) goto event_1848_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 100)) > (0))) goto event_1848_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 32);
    }
    event_1848_64_end: ;
}
void Frames::event_func_13926()
{
    // event 1849_64
    {
        if (!(group_main_engine_1)) goto event_1849_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1849_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1849_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1849_64_end: ;
}
void Frames::event_func_13927()
{
    // event 1850_64
    {
        if (!(group_main_engine_1)) goto event_1850_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1850_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1850_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1850_64_end: ;
}
void Frames::event_func_13928()
{
    // event 1851_64
    {
        if (!(group_main_engine_1)) goto event_1851_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1851_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1851_64_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1851_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1851_64_end: ;
}
void Frames::event_func_13929()
{
    // event 1852_64
    {
        if (!(group_main_engine_1)) goto event_1852_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1852_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1852_64_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1852_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1852_64_end: ;
}
void Frames::event_func_13930()
{
    // event 1853_64
    {
        if (!(group_main_engine_1)) goto event_1853_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1853_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1853_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1853_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1853_64_end: ;
}
void Frames::event_func_13931()
{
    // event 1854_64
    {
        if (!(group_main_engine_1)) goto event_1854_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1854_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1854_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1854_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1854_64_end: ;
}
void Frames::event_func_13932()
{
    // event 1855_64
    {
        if (!(group_main_engine_1)) goto event_1855_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1855_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1855_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1855_64_end: ;
}
void Frames::event_func_13933()
{
    // event 1856_64
    {
        if (!(group_main_engine_1)) goto event_1856_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1856_64_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossdail_3359_instances)) goto event_1856_64_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1856_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1856_64_end: ;
}
void Frames::event_func_13934()
{
    // event 1857_64
    {
        if (!(group_main_engine_1)) goto event_1857_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1857_64_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, bossdail_3359_instances)) goto event_1857_64_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1857_64_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_1857_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1857_64_end: ;
}
void Frames::event_func_13935()
{
    // event 2061_64
    {
        if (!(group_main_engine_1)) goto event_2061_64_end;
        ((Active*)get_instance(liftoffjet1_3354_instances))->set_x(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_x());
        ((Active*)get_instance(liftoffjet1_3354_instances))->set_y(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_y());
        ((Active*)get_instance(liftoffjet2_3355_instances))->set_x(((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->get_x());
        ((Active*)get_instance(liftoffjet2_3355_instances))->set_y(((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->get_y());
    }
    event_2061_64_end: ;
}
void Frames::event_func_13936()
{
    // event 2086_64
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2086_64_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2086_64_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_2086_64_0; single_instance_2086_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyleftarm_3328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2086_64_0 == NULL)
                    single_instance_2086_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2086_64_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)((Active*)single_instance_2086_64_0))->alterables->flags.enable(2);
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 8);
            ((Active*)*it)->alterables->flags.toggle(2);
        }
    }
    event_2086_64_end: ;
}
void Frames::event_func_13937()
{
    // event 2087_64
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2087_64_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2087_64_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_2087_64_0; single_instance_2087_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyrightarm_3329_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2087_64_0 == NULL)
                    single_instance_2087_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2087_64_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        ((Active*)((Active*)single_instance_2087_64_0))->alterables->flags.enable(2);
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 8);
            ((Active*)*it)->alterables->flags.toggle(2);
        }
    }
    event_2087_64_end: ;
}
void Frames::event_func_13938()
{
    // event 2156_64
    {
        if (!(group_pause_1)) goto event_2156_64_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2156_64_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2156_64_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2156_64_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2156_64_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(brevonmechbackground_2513_instances))->stop_animation();
        parallaxthundercarrierarm_3290_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(effectwarning_1065_instances))->stop_animation();
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bossvortex2_3365_instances))->stop_animation();
        ((Active*)get_instance(bossdailfall_3366_instances))->stop_animation();
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossdailcardeffect_3352_instances.clear_selection();
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
        ((Active*)get_instance(liftoffjet1_3354_instances))->stop_animation();
        ((Active*)get_instance(liftoffjet2_3355_instances))->stop_animation();
    }
    event_2156_64_end: ;
}
void Frames::event_func_13939()
{
    // event 2157_64
    bool or_result_2157_64 = false;
    bool or_temp_result_2157_64_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2157_64_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2157_64_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2157_64_0_end;
        or_result_2157_64 = true;
        or_temp_result_2157_64_0 = true;
    }
    or_event_2157_64_0_end: ;
    // event 2157_64
    bool or_temp_result_2157_64_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2157_64_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2157_64_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2157_64_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2157_64_1_end;
        or_result_2157_64 = true;
        or_temp_result_2157_64_1 = true;
        or_event_2157_64_1_end: ;
        if (!or_result_2157_64) goto or_final_or_event_2157_64_1_end;
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(brevonmechbackground_2513_instances))->start_animation();
        parallaxthundercarrierarm_3290_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(effectwarning_1065_instances))->start_animation();
        bossdailcard_3360_instances.clear_selection();
        for (ObjectIterator it(bossdailcard_3360_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bossvortex2_3365_instances))->start_animation();
        ((Active*)get_instance(bossdailfall_3366_instances))->start_animation();
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossdailcardeffect_3352_instances.clear_selection();
        for (ObjectIterator it(bossdailcardeffect_3352_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
        ((Active*)get_instance(liftoffjet1_3354_instances))->start_animation();
        ((Active*)get_instance(liftoffjet2_3355_instances))->start_animation();
    }
    or_final_or_event_2157_64_1_end: ;
}
void Frames::event_func_13940()
{
    // event 2168_64
    {
        if (!(group_pause_1)) goto event_2168_64_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2168_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2168_64_end;
        if (!(((Active*)get_instance(bossdailfall_3366_instances))->alterables->flags.is_off(14))) goto event_2168_64_end;
        {
            loop_restart_running = true;
            int times = int(1);
            loop_restart_index = 0;
            while (loop_restart_index < times) {
                loop_restart_16();
                if (!loop_restart_running) break;
                loop_restart_index++;
            }
        }
    }
    event_2168_64_end: ;
}
void Frames::event_func_13941()
{
    // event 2170_64
    {
        if (!(group_pause_1)) goto event_2170_64_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2170_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2170_64_end;
        if (!(((Active*)get_instance(bossdailfall_3366_instances))->alterables->flags.is_off(14))) goto event_2170_64_end;
        {
            loop_return_running = true;
            int times = int(1);
            loop_return_index = 0;
            while (loop_return_index < times) {
                loop_return_0();
                if (!loop_return_running) break;
                loop_return_index++;
            }
        }
    }
    event_2170_64_end: ;
}
void Frames::event_func_13942()
{
    // event 2171_64
    {
        if (!(group_pause_1)) goto event_2171_64_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_2171_64_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (4))) goto event_2171_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2171_64_end;
        if (!(((Active*)get_instance(bossdailfall_3366_instances))->alterables->flags.is_on(14))) goto event_2171_64_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        next_frame = 8 + 0;    
    
    }
    event_2171_64_end: ;
}
void Frames::event_func_13943()
{
    // event 2173_64
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2173_64_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2173_64_end;
        if (not_always_2173_64 > loop_count) {
            not_always_2173_64 = loop_count + 2;
            goto event_2173_64_end;
        }
        not_always_2173_64 = loop_count + 2;
            group_main_engine_1 = false;
    
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2173_64_end: ;
}
void Frames::event_func_13944()
{
    // event 2174_64
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2174_64_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2174_64_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2174_64_end;
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2174_64_end: ;
}
void Frames::handle_frame_65_events()
{
    test_collisions_64();
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
    event_func_4203();
    event_func_4205();
    event_func_13884();
    event_func_2650();
    event_func_4187();
    event_func_4188();
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
    event_func_6053();
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
    event_func_1703();
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
    event_func_6058();
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
    event_func_6066();
    event_func_2980();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_13559();
    event_func_10999();
    event_func_11000();
    event_func_13560();
    event_func_13561();
    event_func_13562();
    event_func_13563();
    event_func_13564();
    event_func_13565();
    event_func_13566();
    event_func_13567();
    event_func_13568();
    event_func_13569();
    event_func_13570();
    event_func_13571();
    event_func_13572();
    event_func_13573();
    event_func_13574();
    event_func_13575();
    event_func_13576();
    event_func_13577();
    event_func_13578();
    event_func_13579();
    event_func_13580();
    event_func_13581();
    event_func_13582();
    if (!group_main_engine_level_specific_methods_stage_clear_1) goto group_main_engine_level_specific_methods_stage_clear_1_end;
    event_func_4197();
    event_func_4198();
    event_func_4199();
    event_func_10115();
    event_func_10116();
    event_func_4202();
    event_func_4204();
    event_func_4206();
    event_func_4207();
    event_func_4208();
    event_func_4209();
    event_func_4210();
    event_func_4211();
    if (!group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1) goto group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end;
    event_func_4214();
    event_func_4215();
    event_func_4216();
    event_func_4217();
    event_func_4218();
    event_func_4219();
    event_func_4220();
    event_func_4221();
    event_func_4222();
    event_func_4223();
    event_func_4945();
    event_func_13583();
    event_func_13584();
    event_func_13585();
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1_end: ;
    group_main_engine_level_specific_methods_stage_clear_1_end: ;
    if (!group_main_engine_level_specific_methods_frame_transition_1) goto group_main_engine_level_specific_methods_frame_transition_1_end;
    event_func_7944();
    event_func_7945();
    event_func_7946();
    group_main_engine_level_specific_methods_frame_transition_1_end: ;
    event_func_6082();
    event_func_2491();
    event_func_3000();
    event_func_13586();
    event_func_13587();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_3861();
    event_func_13588();
    event_func_13589();
    event_func_13247();
    event_func_13248();
    event_func_13249();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_1) goto group_main_engine_level_specific_methods_cutscenes_team_meeting_1_end;
    event_func_13590();
    event_func_13591();
    event_func_13592();
    event_func_13593();
    event_func_13594();
    event_func_13595();
    event_func_13596();
    event_func_13597();
    event_func_13598();
    event_func_13599();
    event_func_13600();
    event_func_13601();
    event_func_13602();
    event_func_13603();
    event_func_13604();
    event_func_13605();
    event_func_13606();
    event_func_13607();
    if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_13608();
    event_func_13609();
    event_func_13610();
    event_func_13611();
    event_func_13612();
    event_func_13613();
    event_func_13614();
    event_func_13615();
    event_func_13616();
    event_func_13617();
    event_func_13618();
    event_func_13619();
    event_func_13620();
    event_func_13621();
    event_func_13622();
    group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_13623();
    if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1_end;
    event_func_13624();
    event_func_13625();
    event_func_13626();
    event_func_13627();
    event_func_13628();
    event_func_13629();
    event_func_13630();
    event_func_13631();
    event_func_13632();
    event_func_13633();
    event_func_13634();
    event_func_13635();
    event_func_13636();
    event_func_13637();
    event_func_13638();
    group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1_end: ;
    event_func_13639();
    event_func_13640();
    event_func_13641();
    event_func_13642();
    event_func_13643();
    event_func_13644();
    event_func_13645();
    event_func_13646();
    event_func_13647();
    event_func_13648();
    event_func_13649();
    event_func_13650();
    event_func_13651();
    event_func_13652();
    event_func_13653();
    event_func_13654();
    event_func_13655();
    event_func_13656();
    event_func_13657();
    event_func_13658();
    event_func_13659();
    event_func_13660();
    event_func_13661();
    event_func_13662();
    event_func_13663();
    event_func_13664();
    event_func_13665();
    event_func_13666();
    event_func_13667();
    event_func_13668();
    event_func_13669();
    event_func_13670();
    event_func_13671();
    event_func_13672();
    event_func_13673();
    event_func_13674();
    event_func_13675();
    event_func_13676();
    event_func_13677();
    event_func_13678();
    event_func_13679();
    event_func_13680();
    event_func_13681();
    event_func_13682();
    event_func_13683();
    event_func_13684();
    event_func_13685();
    event_func_13686();
    event_func_13687();
    event_func_13688();
    event_func_13689();
    event_func_13690();
    event_func_13691();
    event_func_13692();
    event_func_13693();
    event_func_13694();
    event_func_13695();
    event_func_13696();
    event_func_13697();
    event_func_13698();
    event_func_13699();
    event_func_13700();
    group_main_engine_level_specific_methods_cutscenes_team_meeting_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1) goto group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1_end;
    event_func_13701();
    event_func_13702();
    event_func_13703();
    event_func_13704();
    event_func_13705();
    event_func_13706();
    event_func_13707();
    event_func_13708();
    event_func_13709();
    group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_13710();
    event_func_13711();
    event_func_13712();
    event_func_13713();
    if (!group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1) goto group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1_end;
    event_func_13714();
    event_func_13715();
    event_func_13716();
    event_func_13717();
    event_func_13718();
    event_func_13719();
    event_func_13720();
    event_func_13721();
    event_func_13722();
    event_func_13723();
    event_func_13724();
    event_func_13725();
    event_func_13726();
    event_func_13727();
    event_func_13728();
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1) goto group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1_end;
    event_func_13729();
    event_func_13730();
    if (!group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1) goto group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1_end;
    event_func_13731();
    event_func_13732();
    event_func_13733();
    event_func_13734();
    event_func_13735();
    event_func_13736();
    event_func_13737();
    event_func_13738();
    event_func_13739();
    event_func_13740();
    event_func_13741();
    event_func_13742();
    event_func_13743();
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1_end: ;
    event_func_13744();
    event_func_13745();
    event_func_13746();
    event_func_13747();
    event_func_13748();
    event_func_13749();
    event_func_13750();
    event_func_13751();
    event_func_13752();
    event_func_13753();
    event_func_13754();
    event_func_13755();
    event_func_13756();
    event_func_13757();
    event_func_13758();
    event_func_13759();
    event_func_13760();
    event_func_13761();
    event_func_13762();
    event_func_13763();
    event_func_13764();
    event_func_13765();
    event_func_13766();
    event_func_13767();
    event_func_13768();
    event_func_13769();
    event_func_13770();
    event_func_13771();
    event_func_13772();
    event_func_13773();
    event_func_13774();
    event_func_13775();
    event_func_13776();
    event_func_13777();
    event_func_13778();
    event_func_13779();
    event_func_13780();
    event_func_13781();
    event_func_13782();
    event_func_13783();
    event_func_13784();
    event_func_13785();
    event_func_13786();
    event_func_13787();
    event_func_13788();
    event_func_13789();
    event_func_13790();
    event_func_13791();
    event_func_13792();
    event_func_13793();
    event_func_13794();
    event_func_13795();
    event_func_13796();
    event_func_13797();
    event_func_13798();
    event_func_13799();
    event_func_13800();
    event_func_13801();
    event_func_13802();
    event_func_13803();
    event_func_13804();
    event_func_13805();
    event_func_13806();
    event_func_13807();
    event_func_13808();
    event_func_13809();
    event_func_13810();
    event_func_13811();
    event_func_13812();
    event_func_13813();
    event_func_13814();
    event_func_13815();
    event_func_13816();
    event_func_13817();
    event_func_13818();
    event_func_13819();
    event_func_13820();
    event_func_13821();
    event_func_13822();
    event_func_13823();
    event_func_13824();
    event_func_13825();
    event_func_13826();
    event_func_13827();
    event_func_13828();
    event_func_13829();
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1_end: ;
    event_func_13830();
    event_func_13831();
    event_func_13832();
    event_func_13833();
    event_func_13834();
    event_func_13835();
    event_func_13836();
    event_func_13837();
    event_func_13838();
    event_func_13839();
    event_func_13840();
    event_func_13841();
    event_func_13842();
    event_func_13843();
    event_func_13844();
    event_func_13845();
    event_func_13846();
    event_func_13847();
    event_func_13848();
    event_func_13849();
    event_func_13850();
    event_func_13851();
    event_func_13852();
    event_func_13853();
    event_func_13854();
    event_func_13855();
    event_func_13856();
    event_func_13857();
    event_func_13858();
    event_func_13859();
    event_func_13860();
    event_func_13861();
    event_func_13862();
    event_func_13863();
    event_func_13864();
    event_func_13865();
    event_func_13866();
    event_func_13867();
    event_func_13868();
    event_func_13869();
    event_func_13870();
    event_func_13871();
    event_func_13872();
    event_func_13873();
    event_func_13874();
    event_func_13875();
    event_func_13876();
    event_func_13877();
    event_func_13878();
    event_func_13879();
    event_func_13880();
    event_func_13881();
    event_func_13882();
    event_func_13883();
    event_func_13885();
    event_func_13886();
    event_func_13887();
    event_func_13888();
    event_func_13889();
    event_func_13890();
    event_func_13891();
    event_func_13892();
    event_func_13893();
    event_func_13894();
    event_func_13895();
    event_func_13896();
    event_func_13897();
    event_func_13898();
    event_func_13899();
    event_func_13900();
    event_func_13901();
    event_func_13902();
    event_func_13903();
    event_func_13904();
    event_func_13905();
    event_func_13906();
    event_func_13907();
    event_func_13908();
    event_func_13909();
    event_func_13910();
    event_func_13911();
    event_func_13912();
    event_func_13913();
    event_func_13914();
    event_func_13915();
    event_func_13916();
    event_func_13917();
    event_func_13918();
    event_func_13919();
    event_func_13920();
    event_func_13921();
    event_func_13922();
    event_func_13923();
    group_main_engine_level_specific_methods_bosses_1_end: ;
    event_func_13924();
    event_func_13925();
    event_func_13926();
    event_func_13927();
    event_func_13928();
    event_func_13929();
    event_func_13930();
    event_func_13931();
    event_func_13932();
    event_func_13933();
    event_func_13934();
    event_func_2519();
    event_func_3234();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
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
    if (!group_main_engine_interface_and_post_processing_methods_me_music_engine_1) goto group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end;
    event_func_11346();
    event_func_11347();
    event_func_11348();
    event_func_11349();
    event_func_11350();
    event_func_11351();
    event_func_11352();
    event_func_11353();
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end: ;
    event_func_3246();
    event_func_13497();
    event_func_13498();
    event_func_13935();
    event_func_13499();
    event_func_13500();
    event_func_13501();
    event_func_13502();
    event_func_13503();
    event_func_13504();
    event_func_13505();
    event_func_13506();
    if (!group_main_engine_player_sparky_player_sparky_controls_1) goto group_main_engine_player_sparky_player_sparky_controls_1_end;
    event_func_13507();
    event_func_13508();
    event_func_13509();
    event_func_13510();
    event_func_13511();
    event_func_13512();
    event_func_13513();
    event_func_13514();
    event_func_13515();
    event_func_13516();
    event_func_13517();
    event_func_13518();
    event_func_13519();
    event_func_13520();
    event_func_13936();
    event_func_13937();
    event_func_13523();
    event_func_13524();
    event_func_13525();
    event_func_13526();
    group_main_engine_player_sparky_player_sparky_controls_1_end: ;
    event_func_13527();
    event_func_13528();
    event_func_13377();
    event_func_13378();
    event_func_13379();
    event_func_13380();
    event_func_13529();
    event_func_13530();
    event_func_13383();
    event_func_13531();
    event_func_13532();
    event_func_13384();
    event_func_13387();
    event_func_13388();
    event_func_13389();
    event_func_13390();
    event_func_13391();
    event_func_13392();
    event_func_13393();
    event_func_13394();
    event_func_13395();
    event_func_13396();
    event_func_13397();
    event_func_13398();
    event_func_13399();
    event_func_13400();
    event_func_13401();
    event_func_13402();
    event_func_13403();
    event_func_13404();
    event_func_13405();
    event_func_13406();
    event_func_13407();
    event_func_13408();
    event_func_13409();
    event_func_13410();
    event_func_13411();
    event_func_13412();
    event_func_13413();
    event_func_13414();
    event_func_13415();
    event_func_13416();
    event_func_13417();
    event_func_13418();
    event_func_13419();
    event_func_13420();
    event_func_13421();
    event_func_13422();
    event_func_13423();
    event_func_13424();
    event_func_13425();
    event_func_13426();
    event_func_13427();
    event_func_13428();
    event_func_13429();
    event_func_13430();
    event_func_13431();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_13938();
    event_func_13939();
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
    event_func_13940();
    event_func_13941();
    event_func_13942();
    group_pause_1_end: ;
    event_func_4314();
    event_func_13943();
    event_func_13944();
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
