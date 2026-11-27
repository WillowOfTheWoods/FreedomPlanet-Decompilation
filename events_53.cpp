#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4481()
{
    // event 1604_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1)) goto event_1604_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1604_20_end;
            group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1 = true;
        }
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1604_20_end: ;
}
void Frames::event_func_4482()
{
    // event 1605_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1605_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (1))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1605_20_end;
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.toggle(10);
        }
    }
    event_1605_20_end: ;
}
void Frames::event_func_4483()
{
    // event 1606_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1606_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(10))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1606_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1606_20_end: ;
}
void Frames::event_func_4484()
{
    // event 1607_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1607_20_end;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(10))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidweakspot_954_instances.has_selection()) goto event_1607_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1607_20_end: ;
}
void Frames::event_func_4485()
{
    // event 1608_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1608_20_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1608_20_end;
        if (!((minibosswretchnidbase_952_instances.size()) > (0))) goto event_1608_20_end;
        FrameObject * single_instance_1608_20_0; single_instance_1608_20_0 = NULL;
        // select single: true false false
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator p_it(minibosswretchnidbase_952_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1608_20_0 == NULL)
                    single_instance_1608_20_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1608_20_0))->set_x(((Active*)single_instance_1608_20_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1608_20_0))->set_y(((Active*)single_instance_1608_20_0)->get_y()-30+randrange(61));
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1608_20_1_end;
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
        dynamic_1608_20_1_end: ;
    }
    event_1608_20_end: ;
}
void Frames::event_func_4486()
{
    // event 1609_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1609_20_end;
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (20))) { it.deselect(); continue; }
        }
        if (!minibosswretchnidbase_952_instances.has_selection()) goto event_1609_20_end;
        if (not_always_1609_20 > loop_count) {
            not_always_1609_20 = loop_count + 2;
            goto event_1609_20_end;
        }
        not_always_1609_20 = loop_count + 2;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -3);
            ((Active*)*it)->alterables->values.set(2, -5);
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -2);
            ((Active*)*it)->alterables->values.set(2, -4);
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -1);
            ((Active*)*it)->alterables->values.set(2, -2);
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->alterables->values.set(2, -5);
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->values.set(2, -4);
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
            ((Active*)*it)->alterables->values.set(2, -2);
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -6);
            ((Active*)*it)->alterables->values.set(2, -5);
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
            ((Active*)*it)->alterables->values.set(2, -4);
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -4);
            ((Active*)*it)->alterables->values.set(2, -2);
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 6);
            ((Active*)*it)->alterables->values.set(2, -5);
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
            ((Active*)*it)->alterables->values.set(2, -4);
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 4);
            ((Active*)*it)->alterables->values.set(2, -2);
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1609_20_0; single_instance_1609_20_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidbase_952_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 21), parent->layer);
                if (single_instance_1609_20_0 == NULL)
                    single_instance_1609_20_0 = new_obj;
            }
        }
        FrameObject * single_instance_1609_20_1; single_instance_1609_20_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosswretchnidbase_952_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_20_1 == NULL)
                    single_instance_1609_20_1 = new_obj;
            }
        }
    }
    event_1609_20_end: ;
}
void Frames::event_func_4487()
{
    // event 1610_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1610_20_end;
        if (!((minibosswretchnidbase_952_instances.size()) == (0))) goto event_1610_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1610_20_end: ;
}
void Frames::event_func_4488()
{
    // event 1611_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1611_20_end;
        if (!((minibosswretchnidbase_952_instances.size()) == (0))) goto event_1611_20_end;
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.4);
        }
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1611_20_end: ;
}
void Frames::event_func_4489()
{
    // event 1612_20
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 && group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1)) goto event_1612_20_end;
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (40))) { it.deselect(); continue; }
        }
        if (!minibossrailing_923_instances.has_selection()) goto event_1612_20_end;
        if (once_condition_1612_20) goto event_1612_20_end;
        once_condition_1612_20 = true;
        minibosswretchnidweakspot_954_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidweakspot_954_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        minibosswretchnidleftleg1_931_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg1_931_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidleftleg2_933_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg2_933_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidleftleg3_935_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg3_935_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg1_929_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg1_929_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg2_925_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg2_925_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg3_927_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg3_927_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidleftleg4_932_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg4_932_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidleftleg5_934_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg5_934_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidleftleg6_936_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidleftleg6_936_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg4_930_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg4_930_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg6_928_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg6_928_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosswretchnidrightleg5_926_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidrightleg5_926_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1612_20_end: ;
}
void Frames::event_func_4490()
{
    // event 1776_20
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1776_20_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1776_20_end;
        if (!((global_values->get(4)) != (0))) goto event_1776_20_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossserpentinebody_946_instances.clear_selection();
        for (ObjectIterator it(bossserpentinebody_946_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        frontrock1_945_instances.clear_selection();
        for (ObjectIterator it(frontrock1_945_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        fronttree_937_instances.clear_selection();
        for (ObjectIterator it(fronttree_937_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1776_20_end: ;
}
void Frames::event_func_4491()
{
    // event 1820_20
    {
        if (!(group_main_engine_1)) goto event_1820_20_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((frame_left()+((Active*)*it)->alterables->values.get(0))*(0.7+(((Active*)*it)->alterables->values.get(2)*0.05)));
            ((Active*)*it)->set_y((frame_top()+((Active*)*it)->alterables->values.get(1))*(0.7+(((Active*)*it)->alterables->values.get(2)*0.05)));
            ((Active*)*it)->alterables->values.add(0, 8-((Active*)*it)->alterables->values.get(2)*2+(((Active*)*it)->get_direction()*4));
            ((Active*)*it)->alterables->values.add(1, 0.25);
        }
    }
    event_1820_20_end: ;
}
void Frames::event_func_4492()
{
    // event 1821_20
    {
        if (!(group_main_engine_1)) goto event_1821_20_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1821_20_end;
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        media.play_id(SOUND_PLANE_FLYBY_102, -1, 1);
    }
    event_1821_20_end: ;
}
void Frames::event_func_4493()
{
    // event 1822_20
    {
        if (!(group_main_engine_1)) goto event_1822_20_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1822_20_end;
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+((Active*)get_single(levelbackgroundplane2_865_instances, default_active_instance))->alterables->values.get(5), 3));
    }
    event_1822_20_end: ;
}
void Frames::event_func_4494()
{
    // event 1823_20
    {
        if (!(group_main_engine_1)) goto event_1823_20_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_right()+200))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1823_20_end;
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1823_20_end: ;
}
void Frames::event_func_4495()
{
    // event 1824_20
    {
        if (!(group_pause_1)) goto event_1824_20_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1824_20_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1824_20_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1824_20_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1824_20_end;
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
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
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
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
    }
    event_1824_20_end: ;
}
void Frames::event_func_4496()
{
    // event 1825_20
    bool or_result_1825_20 = false;
    bool or_temp_result_1825_20_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1825_20_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1825_20_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1825_20_0_end;
        or_result_1825_20 = true;
        or_temp_result_1825_20_0 = true;
    }
    or_event_1825_20_0_end: ;
    // event 1825_20
    bool or_temp_result_1825_20_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1825_20_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1825_20_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1825_20_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1825_20_1_end;
        or_result_1825_20 = true;
        or_temp_result_1825_20_1 = true;
        or_event_1825_20_1_end: ;
        if (!or_result_1825_20) goto or_final_or_event_1825_20_1_end;
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
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosswretchnidturret_953_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidturret_953_instances); !it.end(); ++it) {
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
        minibosswretchnidbase_952_instances.clear_selection();
        for (ObjectIterator it(minibosswretchnidbase_952_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
    }
    or_final_or_event_1825_20_1_end: ;
}
void Frames::event_func_4497()
{
    // event 1839_20
    {
        if (!(is_key_pressed_once(SDLK_SPACE))) goto event_1839_20_end;
        set_lives(1);
    }
    event_1839_20_end: ;
}
void Frames::handle_frame_21_events()
{
    test_collisions_20();
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
    event_func_4036();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
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
    event_func_3721();
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
    event_func_1703();
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
    event_func_4342();
    event_func_4343();
    event_func_4344();
    event_func_4345();
    event_func_4346();
    event_func_4347();
    event_func_4348();
    event_func_4349();
    event_func_4350();
    event_func_4351();
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
    event_func_4352();
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
    event_func_4353();
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
    event_func_4354();
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
    event_func_4355();
    event_func_4356();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_4357();
    event_func_4358();
    event_func_4359();
    event_func_4360();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_4364();
    event_func_4365();
    event_func_4366();
    event_func_4367();
    event_func_4368();
    event_func_4369();
    event_func_4370();
    event_func_4371();
    event_func_4372();
    event_func_4373();
    event_func_4374();
    event_func_4375();
    event_func_4376();
    event_func_4377();
    event_func_4378();
    event_func_4379();
    event_func_4380();
    event_func_4381();
    event_func_4382();
    event_func_4383();
    event_func_2988();
    event_func_2989();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4384();
    event_func_4385();
    event_func_4386();
    event_func_4387();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_4394();
    event_func_4395();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_4031();
    event_func_4032();
    event_func_4033();
    event_func_4034();
    event_func_4035();
    event_func_4037();
    event_func_4038();
    event_func_4039();
    event_func_4040();
    event_func_4041();
    event_func_4042();
    event_func_4043();
    event_func_4044();
    event_func_4045();
    event_func_4046();
    event_func_4047();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1_end;
    event_func_4426();
    event_func_4427();
    event_func_4428();
    event_func_4429();
    event_func_4430();
    event_func_4431();
    event_func_4432();
    event_func_4433();
    event_func_4434();
    event_func_4435();
    event_func_4436();
    event_func_4437();
    event_func_4438();
    event_func_4439();
    event_func_4440();
    event_func_4441();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1_end;
    event_func_4442();
    event_func_4443();
    event_func_4444();
    event_func_4445();
    event_func_4446();
    event_func_4447();
    event_func_4448();
    event_func_4449();
    event_func_4450();
    event_func_4451();
    event_func_4452();
    event_func_4453();
    event_func_4454();
    event_func_4455();
    event_func_4456();
    event_func_4457();
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1_end: ;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_4458();
    event_func_4459();
    event_func_4460();
    event_func_4461();
    event_func_4462();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1) goto group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1_end;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1) goto group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1_end;
    event_func_4463();
    event_func_4464();
    event_func_4465();
    event_func_4466();
    event_func_4467();
    event_func_4468();
    event_func_4469();
    event_func_4470();
    event_func_4471();
    event_func_4472();
    event_func_4473();
    event_func_4474();
    event_func_4475();
    event_func_4476();
    event_func_4477();
    event_func_4478();
    event_func_4479();
    event_func_4480();
    event_func_4481();
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1) goto group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1_end;
    event_func_4482();
    event_func_4483();
    event_func_4484();
    event_func_4485();
    event_func_4486();
    event_func_4487();
    event_func_4488();
    event_func_4489();
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1_end: ;
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1_end: ;
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
    event_func_4119();
    event_func_2577();
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
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_4490();
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
    event_func_4491();
    event_func_4492();
    event_func_4493();
    event_func_4494();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_4495();
    event_func_4496();
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
    event_func_4497();
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
void Frames::handle_frame_21_pre_events()
{
}
void Frames::event_func_4498()
{
    // event 3_20
    {
        if (!(group_main_engine_1)) goto event_3_20_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_3_20_end: ;
}
void Frames::event_func_4499()
{
    // event 22_20
    {
        if (!(group_main_engine_1)) goto event_22_20_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.92);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.88);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.43);
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(levelbackgroundplane2_865_instances, 2, 0);
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.0-(((Active*)*it)->alterables->values.get(2)*0.2));
        }
    }
    event_22_20_end: ;
}
void Frames::event_func_4500()
{
    // event 1766_20
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1766_20_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
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
    }
    event_1766_20_end: ;
}
void Frames::on_frame_21_start_events()
{
    event_func_3980();
    event_func_4133();
    event_func_4498();
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
    event_func_4499();
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
    event_func_3273();
    event_func_3274();
    event_func_3275();
    event_func_3986();
    event_func_3987();
    event_func_2686();
    event_func_2687();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_4500();
    event_func_3999();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_21_init()
{
    index = 20;
    width = 14816;
    height = 1864;
    virtual_width = 14816;
    virtual_height = 1864;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &levelmovingplatform2_940_instances, &levelmovingplatform3_949_instances, NULL};
    qualifier_8.set(14, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &levelmovingplatform2_940_instances, &levelmovingplatform3_949_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyturretus_938_instances, &enemygansekijr_816_instances, &enemydragonfly_944_instances, &minibosswretchnidweakspot_954_instances, NULL};
    qualifier_20.set(4, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece2_861_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(9, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesup_558_instances, &breakablerock_951_instances, &spiraltunnelmask_958_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, NULL};
    qualifier_7.set(29, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibosswretchnidrightleg2_925_instances, &minibosswretchnidrightleg5_926_instances, &minibosswretchnidrightleg3_927_instances, &minibosswretchnidrightleg6_928_instances, &minibosswretchnidrightleg1_929_instances, &minibosswretchnidrightleg4_930_instances, &minibosswretchnidleftleg1_931_instances, &minibosswretchnidleftleg4_932_instances, &minibosswretchnidleftleg2_933_instances, &minibosswretchnidleftleg5_934_instances, &minibosswretchnidleftleg3_935_instances, &minibosswretchnidleftleg6_936_instances, &enemyturretus_938_instances, &enemygansekijr_816_instances, &enemydragonfly_944_instances, &bossserpentinehead_948_instances, &minibosswretchnidbase_952_instances, NULL};
    qualifier_4.set(51, &qualifier_4_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&spiraltunnelmask_958_instances, NULL};
    qualifier_27.set(1, &qualifier_27_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelvalleyplatform1_939_instances, &levelmovingplatform2_940_instances, &levelmovingplatform3_949_instances, NULL};
    qualifier_12.set(5, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelvalleyplatform1_939_instances, &levelmovingplatform2_940_instances, &levelmovingplatform3_949_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_465(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_855(0, 112), 0);
    add_background_object(create_levelparallaxpiece3_856(0, 88), 0);
    add_background_object(create_levelparallaxpiece2_857(0, 128), 0);
    add_background_object(create_levelparallaxpiece4_858(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_859(0, 256), 0);
    add_background_object(create_levelparallaxpiece6_860(0, 424), 0);
    add_background_object(create_levelparallaxpiece2_861(0, 376), 0);
    add_background_object(create_levelparallaxpiece7_862(0, 728), 0);
    add_object(create_levelbackgroundplane2_865(1312, 184), 0);
    add_object(create_levelbackgroundplane2_865(1232, 264), 0);
    add_object(create_levelbackgroundplane2_865(1176, 224), 0);
    add_background_object(create_dvbackwall_866(8096, 304), 1);
    add_background_object(create_dvbackwall_866(8096, 496), 1);
    add_background_object(create_dvhalfpipe1_867(2272, 496), 1);
    add_background_object(create_dvhalfpipe2_868(2528, 496), 1);
    add_background_object(create_dvhalfpipe1_867(11872, 384), 1);
    add_background_object(create_dvhalfpipe2_868(12128, 384), 1);
    add_background_object(create_dvhalfpipe3_869(12256, 384), 1);
    add_background_object(create_spiraltunnel2_870(8120, 448), 1);
    add_background_object(create_dvbackwall_866(4200, 536), 1);
    add_background_object(create_dvbackwall_866(6824, 864), 1);
    add_background_object(create_dvbackwall_866(7064, 832), 1);
    add_background_object(create_dvbackwall_866(7064, 1016), 1);
    add_background_object(create_dvbackwall_866(7304, 808), 1);
    add_background_object(create_dvbackwall_866(7304, 1000), 1);
    add_background_object(create_dvtree6_871(13776, 992), 2);
    add_background_object(create_dvhandlebar_872(13704, 1024), 2);
    add_background_object(create_dvhandlebar_872(13776, 1024), 2);
    add_background_object(create_dvhandlebar_872(5208, 912), 2);
    add_background_object(create_dvhandlebar_872(5272, 912), 2);
    add_background_object(create_dvhandlebar_872(5336, 912), 2);
    add_background_object(create_dvbackwall_866(4496, 552), 2);
    add_background_object(create_dvtree6_871(4928, 664), 2);
    add_background_object(create_dvtree6_871(4824, 640), 2);
    add_background_object(create_dvtree6_871(4688, 656), 2);
    add_background_object(create_dvhandlebar_872(4688, 672), 2);
    add_background_object(create_dvhandlebar_872(4768, 672), 2);
    add_background_object(create_dvhandlebar_872(4848, 672), 2);
    add_background_object(create_dvhandlebar_872(4928, 672), 2);
    add_background_object(create_dvhandlebar_872(5008, 672), 2);
    add_background_object(create_dvwall3_873(6936, 688), 2);
    add_background_object(create_dvtree4_874(1280, 632), 2);
    add_background_object(create_levelbackdrop02_875(1408, 904), 2);
    add_background_object(create_levelbackdrop02_875(1408, 840), 2);
    add_background_object(create_levelbackdrop3_876(1408, 776), 2);
    add_background_object(create_dvwall1_482(1152, 776), 2);
    add_background_object(create_dvwall1_482(12928, 1328), 2);
    add_background_object(create_dvtree6_871(1248, 552), 2);
    add_background_object(create_dvtree6_871(1392, 512), 2);
    add_background_object(create_dvtree6_871(1312, 520), 2);
    add_background_object(create_dvwall8_877(1216, 536), 2);
    add_background_object(create_levelbackdrop9_878(1664, 472), 2);
    add_background_object(create_levelbackdrop02_875(1440, 440), 2);
    add_background_object(create_levelbackdrop02_875(1472, 472), 2);
    add_background_object(create_dvtree5_879(2504, 1408), 2);
    add_background_object(create_dvtree5_879(2280, 1416), 2);
    add_background_object(create_dvtree5_879(2120, 1360), 2);
    add_background_object(create_dvtree5_879(3904, 1352), 2);
    add_background_object(create_dvtree5_879(4224, 1440), 2);
    add_background_object(create_dvtree5_879(4696, 1408), 2);
    add_background_object(create_dvtree5_879(4896, 1304), 2);
    add_background_object(create_dvtree5_879(5128, 1344), 2);
    add_background_object(create_levelbackdrop02_875(12520, 224), 2);
    add_background_object(create_dvtree5_879(12632, 416), 2);
    add_background_object(create_dvbackwall_866(12768, 512), 2);
    add_background_object(create_dvbackwall_866(12768, 320), 2);
    add_background_object(create_levelbackdrop12_880(12784, 472), 2);
    add_background_object(create_levelbackdrop02_875(12720, 464), 2);
    add_background_object(create_levelbackdrop02_875(12656, 464), 2);
    add_background_object(create_levelbackdrop02_875(12600, 464), 2);
    add_background_object(create_dvbackrock3_881(12184, 336), 2);
    add_background_object(create_levelbackdrop02_875(12392, 224), 2);
    add_background_object(create_levelbackdrop02_875(12456, 224), 2);
    add_background_object(create_dvbackrock1_882(11240, 432), 2);
    add_background_object(create_dvtree4_874(11368, 352), 2);
    add_background_object(create_dvtree2_883(11672, 408), 2);
    add_background_object(create_levelbackdrop9_878(11592, 624), 2);
    add_background_object(create_levelbackdrop02_875(11528, 624), 2);
    add_background_object(create_levelbackdrop02_875(11336, 624), 2);
    add_background_object(create_levelbackdrop02_875(11304, 560), 2);
    add_background_object(create_levelbackdrop02_875(11176, 624), 2);
    add_background_object(create_levelbackdrop02_875(11176, 560), 2);
    add_background_object(create_levelbackdrop02_875(11240, 624), 2);
    add_background_object(create_levelbackdrop02_875(11392, 400), 2);
    add_background_object(create_levelbackdrop13_884(11576, 520), 2);
    add_background_object(create_dvwall6_885(11456, 424), 2);
    add_background_object(create_dvwall2_886(11304, 392), 2);
    add_background_object(create_dvwalledge1_887(11304, 528), 2);
    add_background_object(create_levelbackdrop02_875(11400, 624), 2);
    add_background_object(create_levelbackdrop02_875(11464, 624), 2);
    add_background_object(create_levelbackdrop02_875(11584, 568), 2);
    add_background_object(create_dvfloorcurvesmallright_888(12536, 504), 2);
    add_background_object(create_dvwall9_889(12536, 584), 2);
    add_background_object(create_levelbackdrop02_875(12600, 512), 2);
    add_background_object(create_dvbackrock3_881(10024, 752), 2);
    add_background_object(create_dvbackrock2_890(10104, 696), 2);
    add_background_object(create_dvbackwall_866(9656, 744), 2);
    add_background_object(create_levelbackdrop02_875(10160, 800), 2);
    add_background_object(create_levelbackdrop02_875(10096, 800), 2);
    add_background_object(create_levelbackdrop02_875(10032, 800), 2);
    add_background_object(create_levelbackdrop02_875(9968, 800), 2);
    add_background_object(create_levelbackdrop02_875(9904, 800), 2);
    add_background_object(create_levelbackdrop02_875(10288, 736), 2);
    add_background_object(create_levelbackdrop02_875(10224, 800), 2);
    add_background_object(create_dvtree4_874(12488, 288), 2);
    add_background_object(create_dvtree6_871(12976, 368), 2);
    add_background_object(create_dvtree5_879(12840, 528), 2);
    add_background_object(create_dvtree5_879(12960, 480), 2);
    add_background_object(create_dvtree6_871(12936, 528), 2);
    add_background_object(create_dvtree6_871(12856, 568), 2);
    add_background_object(create_dvwall3_873(13048, 384), 2);
    add_background_object(create_dvtree5_879(10688, 568), 2);
    add_background_object(create_dvbackrock2_890(10744, 584), 2);
    add_background_object(create_dvtree6_871(10600, 608), 2);
    add_background_object(create_dvtree6_871(10480, 600), 2);
    add_background_object(create_dvtree5_879(10408, 664), 2);
    add_background_object(create_dvbackrock1_882(10296, 624), 2);
    add_background_object(create_levelbackdrop02_875(10480, 608), 2);
    add_background_object(create_levelbackdrop02_875(10744, 648), 2);
    add_background_object(create_levelbackdrop13_884(10808, 648), 2);
    add_background_object(create_levelbackdrop13_884(10736, 600), 2);
    add_background_object(create_dvwall9_889(10616, 584), 2);
    add_background_object(create_dvrockceiling_891(10576, 592), 2);
    add_background_object(create_dvwall7_892(10480, 480), 2);
    add_background_object(create_dvwall6_885(10624, 496), 2);
    add_background_object(create_dvbackrock3_881(12672, 976), 2);
    add_background_object(create_dvtree5_879(9944, 960), 2);
    add_background_object(create_dvtree2_883(9968, 872), 2);
    add_background_object(create_dvtree1_893(11352, 824), 2);
    add_background_object(create_dvtree5_879(11440, 976), 2);
    add_background_object(create_dvbackrock1_882(11352, 896), 2);
    add_background_object(create_dvwall1_482(11232, 1040), 2);
    add_background_object(create_dvwall1_482(11232, 1232), 2);
    add_background_object(create_dvtree5_879(9864, 976), 2);
    add_background_object(create_dvwall1_482(9952, 1040), 2);
    add_background_object(create_dvwall1_482(9952, 1232), 2);
    add_background_object(create_dvtree4_874(13024, 968), 2);
    add_background_object(create_dvtree2_883(13288, 1072), 2);
    add_background_object(create_dvbackrock2_890(13272, 1192), 2);
    add_background_object(create_dvbackrock1_882(13336, 1208), 2);
    add_background_object(create_dvtree5_879(12832, 968), 2);
    add_background_object(create_dvtree5_879(11896, 904), 2);
    add_background_object(create_dvtree5_879(12160, 1000), 2);
    add_background_object(create_dvtree5_879(12376, 984), 2);
    add_background_object(create_dvtree5_879(12488, 976), 2);
    add_background_object(create_dvtree4_874(12360, 872), 2);
    add_background_object(create_dvtree2_883(12312, 808), 2);
    add_background_object(create_dvbackrock1_882(12328, 928), 2);
    add_background_object(create_dvtree2_883(12096, 880), 2);
    add_background_object(create_dvbackrock2_890(11744, 936), 2);
    add_background_object(create_dvbackrock1_882(11944, 896), 2);
    add_background_object(create_dvwall1_482(12000, 1040), 2);
    add_background_object(create_dvwall1_482(12000, 1232), 2);
    add_background_object(create_dvwall1_482(12256, 1056), 2);
    add_background_object(create_dvwall1_482(12256, 1248), 2);
    add_background_object(create_dvwall1_482(11488, 1040), 2);
    add_background_object(create_dvwall1_482(11488, 1232), 2);
    add_background_object(create_dvwall1_482(11744, 1040), 2);
    add_background_object(create_dvwall1_482(11744, 1232), 2);
    add_background_object(create_dvwall1_482(12664, 520), 2);
    add_background_object(create_dvbackrock3_881(11288, 976), 2);
    add_background_object(create_dvtree5_879(11216, 976), 2);
    add_background_object(create_dvtree5_879(10200, 968), 2);
    add_background_object(create_dvtree5_879(10400, 984), 2);
    add_background_object(create_dvtree5_879(10704, 984), 2);
    add_background_object(create_dvtree4_874(10800, 872), 2);
    add_background_object(create_dvtree2_883(10856, 736), 2);
    add_background_object(create_dvbackrock1_882(10792, 920), 2);
    add_background_object(create_dvbackrock2_890(10480, 952), 2);
    add_background_object(create_dvwall1_482(12512, 1040), 2);
    add_background_object(create_dvwall1_482(12768, 1040), 2);
    add_background_object(create_dvwall1_482(12768, 1232), 2);
    add_background_object(create_dvwall1_482(12512, 1232), 2);
    add_background_object(create_dvwall1_482(10976, 1040), 2);
    add_background_object(create_dvwall1_482(10976, 1232), 2);
    add_background_object(create_dvwall1_482(10720, 1040), 2);
    add_background_object(create_dvwall1_482(10720, 1232), 2);
    add_background_object(create_dvwall1_482(10464, 1040), 2);
    add_background_object(create_dvwall1_482(10464, 1232), 2);
    add_background_object(create_dvwall1_482(10208, 1040), 2);
    add_background_object(create_dvwall1_482(10208, 1232), 2);
    add_background_object(create_dvwall1_482(9056, 1016), 2);
    add_background_object(create_dvwall1_482(9184, 1112), 2);
    add_background_object(create_dvwall1_482(7296, 1328), 2);
    add_background_object(create_dvbackwall_866(9656, 552), 2);
    add_background_object(create_dvwall1_482(9720, 384), 2);
    add_background_object(create_dvwall1_482(9720, 256), 2);
    add_background_object(create_dvwall1_482(9720, 64), 2);
    add_background_object(create_dvwall1_482(14408, 1224), 2);
    add_background_object(create_dvbackwall_866(14392, 848), 2);
    add_background_object(create_dvbackwall_866(14392, 656), 2);
    add_background_object(create_dvbackwall_866(14632, 656), 2);
    add_background_object(create_dvbackwall_866(14632, 848), 2);
    add_background_object(create_dvwall1_482(14208, 1296), 2);
    add_background_object(create_dvbackrock1_882(14080, 1136), 2);
    add_background_object(create_dvbackwall_866(14152, 848), 2);
    add_background_object(create_dvwall1_482(14152, 1032), 2);
    add_background_object(create_dvwall1_482(14304, 1224), 2);
    add_background_object(create_dvwall1_482(14408, 1032), 2);
    add_background_object(create_dvwall1_482(14664, 1032), 2);
    add_background_object(create_dvwall1_482(14664, 1224), 2);
    add_background_object(create_dvtree5_879(14072, 856), 2);
    add_background_object(create_dvbackwall_866(14152, 656), 2);
    add_background_object(create_dvtree6_871(7064, 88), 2);
    add_background_object(create_dvtree6_871(7000, 104), 2);
    add_background_object(create_dvbackrock2_890(13920, 792), 2);
    add_background_object(create_dvtree4_874(13808, 656), 2);
    add_background_object(create_dvtree2_883(13392, 744), 2);
    add_background_object(create_dvtree4_874(13224, 600), 2);
    add_background_object(create_dvtree6_871(13168, 752), 2);
    add_background_object(create_dvtree6_871(13232, 776), 2);
    add_background_object(create_dvtree6_871(13504, 984), 2);
    add_background_object(create_dvtree6_871(13344, 984), 2);
    add_background_object(create_dvtree6_871(13408, 1000), 2);
    add_background_object(create_dvtree5_879(13776, 920), 2);
    add_background_object(create_dvtree5_879(13840, 896), 2);
    add_background_object(create_dvtree5_879(13984, 848), 2);
    add_background_object(create_dvtree6_871(14048, 904), 2);
    add_background_object(create_dvtree6_871(13864, 984), 2);
    add_background_object(create_dvbackrock3_881(13408, 808), 2);
    add_background_object(create_dvbackrock1_882(13472, 800), 2);
    add_background_object(create_dvbackrock3_881(13616, 904), 2);
    add_background_object(create_dvbackrock2_890(13544, 856), 2);
    add_background_object(create_dvwall1_482(9440, 1112), 2);
    add_background_object(create_dvwall1_482(9312, 952), 2);
    add_background_object(create_dvbackrock1_882(8440, 160), 2);
    add_background_object(create_dvtree4_874(8360, 144), 2);
    add_background_object(create_dvbackrock3_881(8176, 96), 2);
    add_background_object(create_dvtree4_874(8080, -8), 2);
    add_background_object(create_dvbackrock3_881(7984, 144), 2);
    add_background_object(create_levelbackdrop8_894(8024, 280), 2);
    add_background_object(create_levelbackdrop9_878(8552, 304), 2);
    add_background_object(create_levelbackdrop13_884(8456, 224), 2);
    add_background_object(create_dvwall1_482(8344, 288), 2);
    add_background_object(create_levelbackdrop02_875(8144, 640), 2);
    add_background_object(create_dvwall6_885(9440, 824), 2);
    add_background_object(create_dvbackwall_866(8336, 656), 2);
    add_background_object(create_dvbackrock3_881(8456, 784), 2);
    add_background_object(create_dvtree2_883(8528, 656), 2);
    add_background_object(create_dvwall1_482(8272, 640), 2);
    add_background_object(create_dvbackwall_866(8336, 464), 2);
    add_background_object(create_levelbackdrop9_878(8344, 520), 2);
    add_background_object(create_dvwall1_482(8088, 136), 2);
    add_background_object(create_levelbackdrop02_875(7896, 384), 2);
    add_background_object(create_levelbackdrop02_875(7960, 384), 2);
    add_background_object(create_levelbackdrop02_875(8024, 384), 2);
    add_background_object(create_dvwall1_482(7832, 432), 2);
    add_background_object(create_dvbackrock2_890(13008, 744), 2);
    add_background_object(create_levelbackdrop02_875(13280, 824), 2);
    add_background_object(create_levelbackdrop02_875(13280, 888), 2);
    add_background_object(create_levelbackdrop02_875(13344, 888), 2);
    add_background_object(create_levelbackdrop02_875(13280, 952), 2);
    add_background_object(create_levelbackdrop02_875(13344, 952), 2);
    add_background_object(create_levelbackdrop02_875(13280, 760), 2);
    add_background_object(create_dvfloorcurvesmallright_888(13856, 880), 2);
    add_background_object(create_levelbackdrop02_875(14048, 896), 2);
    add_background_object(create_levelbackdrop02_875(14048, 960), 2);
    add_background_object(create_dvwalledge2_895(14096, 960), 2);
    add_background_object(create_dvwall3_873(13920, 832), 2);
    add_background_object(create_levelbackdrop02_875(13408, 832), 2);
    add_background_object(create_levelbackdrop13_884(13536, 896), 2);
    add_background_object(create_dvwall4_485(13976, 896), 2);
    add_background_object(create_levelbackdrop02_875(13344, 768), 2);
    add_background_object(create_dvtree5_879(13416, 1296), 2);
    add_background_object(create_dvtree5_879(13520, 1272), 2);
    add_background_object(create_dvtree5_879(13784, 1240), 2);
    add_background_object(create_dvtree5_879(13632, 1216), 2);
    add_background_object(create_dvtree5_879(13680, 1240), 2);
    add_background_object(create_dvbackrock3_881(7704, 272), 2);
    add_background_object(create_dvtree2_883(7696, 136), 2);
    add_background_object(create_dvbackwall_866(9656, 936), 2);
    add_background_object(create_dvtree6_871(9600, 624), 2);
    add_background_object(create_dvtree6_871(9640, 808), 2);
    add_background_object(create_dvbackrock3_881(9656, 968), 2);
    add_background_object(create_levelbackdrop13_884(12960, 960), 2);
    add_background_object(create_dvwall1_482(13696, 1296), 2);
    add_background_object(create_dvwall1_482(13952, 1296), 2);
    add_background_object(create_dvwall1_482(13440, 1328), 2);
    add_background_object(create_levelbackdrop13_884(13344, 1280), 2);
    add_background_object(create_levelbackdrop13_884(9568, 928), 2);
    add_background_object(create_levelbackdrop12_880(9632, 992), 2);
    add_background_object(create_dvrockceiling_891(9464, 616), 2);
    add_background_object(create_dvtree6_871(12848, 696), 2);
    add_background_object(create_levelbackdrop02_875(7800, 424), 2);
    add_background_object(create_dvtree5_879(7272, 432), 2);
    add_background_object(create_dvtree5_879(928, 320), 2);
    add_background_object(create_dvtree5_879(1680, 656), 2);
    add_background_object(create_dvtree5_879(1760, 624), 2);
    add_background_object(create_dvtree5_879(1184, 720), 2);
    add_background_object(create_dvtree5_879(2376, 816), 2);
    add_background_object(create_dvtree2_883(6776, 520), 2);
    add_background_object(create_dvrockslope1_896(6872, 688), 2);
    add_background_object(create_dvbackrock1_882(6224, 352), 2);
    add_background_object(create_dvbackrock2_890(5992, 392), 2);
    add_background_object(create_dvtree4_874(5984, 200), 2);
    add_background_object(create_dvbackwall_866(6192, 792), 2);
    add_background_object(create_dvbackwall_866(6016, 776), 2);
    add_background_object(create_dvbackrock3_881(6024, 888), 2);
    add_background_object(create_dvwall1_482(7192, 496), 2);
    add_background_object(create_dvbackwall_866(5776, 736), 2);
    add_background_object(create_dvbackrock3_881(6832, 816), 2);
    add_background_object(create_dvbackrock2_890(5752, 832), 2);
    add_background_object(create_levelbackdrop02_875(5632, 816), 2);
    add_background_object(create_levelbackdrop12_880(5824, 904), 2);
    add_background_object(create_dvwall6_885(5696, 816), 2);
    add_background_object(create_dvtree2_883(3720, 992), 2);
    add_background_object(create_dvtree2_883(6560, 600), 2);
    add_background_object(create_dvbackrock3_881(6560, 744), 2);
    add_background_object(create_dvwall3_873(5944, 336), 2);
    add_background_object(create_levelbackdrop02_875(6056, 352), 2);
    add_background_object(create_dvhalfpipe1_867(6424, 296), 2);
    add_background_object(create_dvhalfpipe2_868(6968, 296), 2);
    add_background_object(create_dvhalfpipe3_869(7096, 296), 2);
    add_background_object(create_dvwall1_482(6072, 496), 2);
    add_background_object(create_dvwall1_482(6328, 496), 2);
    add_background_object(create_dvtree4_874(4840, 744), 2);
    add_background_object(create_dvbackrock3_881(5256, 792), 2);
    add_background_object(create_dvbackwall_866(5512, 640), 2);
    add_background_object(create_dvbackwall_866(4496, 744), 2);
    add_background_object(create_dvbackrock1_882(4976, 968), 2);
    add_background_object(create_dvtree2_883(4848, 848), 2);
    add_background_object(create_dvbackrock2_890(4888, 992), 2);
    add_background_object(create_dvbackrock1_882(4712, 816), 2);
    add_background_object(create_dvtree1_893(2096, 1272), 2);
    add_background_object(create_dvbackwall_866(1840, 976), 2);
    add_background_object(create_dvbackwall_866(1840, 1168), 2);
    add_background_object(create_dvbackwall_866(1656, 832), 2);
    add_background_object(create_dvbackwall_866(1840, 784), 2);
    add_background_object(create_dvbackrock2_890(3128, 920), 2);
    add_background_object(create_dvbackrock3_881(2856, 832), 2);
    add_background_object(create_dvbackrock3_881(2784, 848), 2);
    add_background_object(create_dvbackrock3_881(9224, 784), 2);
    add_background_object(create_dvbackrock2_890(9128, 736), 2);
    add_background_object(create_dvbackrock3_881(8808, 784), 2);
    add_background_object(create_dvtree4_874(8952, 496), 2);
    add_background_object(create_dvwall3_873(4552, 736), 2);
    add_background_object(create_dvwall3_873(4552, 544), 2);
    add_background_object(create_dvtree1_893(5424, 1088), 2);
    add_background_object(create_dvbackrock1_882(2544, 1344), 2);
    add_background_object(create_dvtree1_893(2840, 1200), 2);
    add_background_object(create_dvtree3_897(2576, 1272), 2);
    add_background_object(create_dvtree1_893(3072, 1312), 2);
    add_background_object(create_dvtree3_897(3008, 1336), 2);
    add_background_object(create_dvbackrock2_890(5232, 1296), 2);
    add_background_object(create_dvbackrock1_882(5288, 1224), 2);
    add_background_object(create_dvtree3_897(5000, 1272), 2);
    add_background_object(create_dvbackrock3_881(5024, 1352), 2);
    add_background_object(create_dvtree1_893(5056, 1200), 2);
    add_background_object(create_dvbackrock3_881(4808, 1296), 2);
    add_background_object(create_levelbackdrop10_898(3136, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3200, 1416), 2);
    add_background_object(create_levelbackdrop10_898(3200, 1352), 2);
    add_background_object(create_levelbackdrop10_898(3264, 1288), 2);
    add_background_object(create_levelbackdrop02_875(3264, 1352), 2);
    add_background_object(create_levelbackdrop02_875(3328, 1288), 2);
    add_background_object(create_levelbackdrop02_875(2696, 1416), 2);
    add_background_object(create_levelbackdrop02_875(2760, 1352), 2);
    add_background_object(create_levelbackdrop02_875(2824, 1352), 2);
    add_background_object(create_levelbackdrop13_884(2888, 1352), 2);
    add_background_object(create_levelbackdrop13_884(2952, 1416), 2);
    add_background_object(create_levelbackdrop02_875(2888, 1416), 2);
    add_background_object(create_dvbackrock1_882(3456, 1096), 2);
    add_background_object(create_dvtree2_883(3456, 1040), 2);
    add_background_object(create_dvbackrock2_890(3392, 1192), 2);
    add_background_object(create_dvbackrock2_890(3496, 1184), 2);
    add_background_object(create_dvbackrock1_882(3448, 1168), 2);
    add_background_object(create_dvrockceiling_891(5000, 1096), 2);
    add_background_object(create_levelbackdrop02_875(5040, 1056), 2);
    add_background_object(create_dvtree1_893(3736, 1928), 2);
    add_background_object(create_levelbackdrop02_875(3968, 1416), 2);
    add_background_object(create_levelbackdrop02_875(2880, 696), 2);
    add_background_object(create_levelbackdrop02_875(2816, 696), 2);
    add_background_object(create_levelbackdrop02_875(2752, 696), 2);
    add_background_object(create_dvtree1_893(4192, 1192), 2);
    add_background_object(create_dvtree1_893(4120, 1279), 2);
    add_background_object(create_dvtree3_897(4576, 1352), 2);
    add_background_object(create_dvtree1_893(4632, 1304), 2);
    add_background_object(create_dvtree1_893(4440, 1256), 2);
    add_background_object(create_dvtree1_893(4544, 1216), 2);
    add_background_object(create_dvtree3_897(4080, 1320), 2);
    add_background_object(create_dvbackrock3_881(712, 80), 2);
    add_background_object(create_levelbackdrop02_875(4488, 1352), 2);
    add_background_object(create_dvwall1_482(3264, 1480), 2);
    add_background_object(create_levelbackdrop02_875(5568, 1200), 2);
    add_background_object(create_levelbackdrop10_898(5248, 1344), 2);
    add_background_object(create_levelbackdrop10_898(5312, 1280), 2);
    add_background_object(create_levelbackdrop10_898(5376, 1216), 2);
    add_background_object(create_levelbackdrop02_875(5504, 1216), 2);
    add_background_object(create_levelbackdrop02_875(5440, 1216), 2);
    add_background_object(create_levelbackdrop02_875(5312, 1344), 2);
    add_background_object(create_dvwall1_482(4672, 1600), 2);
    add_background_object(create_dvwall1_482(5056, 1408), 2);
    add_background_object(create_dvwall1_482(4800, 1408), 2);
    add_background_object(create_dvwall1_482(4608, 1480), 2);
    add_background_object(create_levelbackdrop02_875(4552, 1384), 2);
    add_background_object(create_levelbackdrop02_875(4552, 1416), 2);
    add_background_object(create_levelbackdrop02_875(4488, 1416), 2);
    add_background_object(create_dvwall1_482(4352, 1480), 2);
    add_background_object(create_dvwall4_485(4488, 1384), 2);
    add_background_object(create_levelbackdrop02_875(4800, 1352), 2);
    add_background_object(create_dvrockceiling_891(2280, 1072), 2);
    add_background_object(create_levelbackdrop02_875(3240, 1024), 2);
    add_background_object(create_levelbackdrop02_875(3176, 1024), 2);
    add_background_object(create_levelbackdrop02_875(3112, 1024), 2);
    add_background_object(create_levelbackdrop9_878(3304, 1024), 2);
    add_background_object(create_levelbackdrop02_875(3016, 888), 2);
    add_background_object(create_dvbackrock3_881(1120, 120), 2);
    add_background_object(create_levelbackdrop02_875(2152, 896), 2);
    add_background_object(create_levelbackdrop02_875(2216, 896), 2);
    add_background_object(create_dvtree4_874(2024, 80), 2);
    add_background_object(create_dvtree4_874(2112, 512), 2);
    add_background_object(create_dvbackrock2_890(1928, 424), 2);
    add_background_object(create_dvbackrock1_882(1872, 408), 2);
    add_background_object(create_dvbackrock3_881(2256, 816), 2);
    add_background_object(create_dvrockceiling_891(2304, 696), 2);
    add_background_object(create_dvwall1_482(2520, 896), 2);
    add_background_object(create_levelbackdrop02_875(1536, 472), 2);
    add_background_object(create_levelbackdrop02_875(1600, 472), 2);
    add_background_object(create_dvwall1_482(1728, 976), 2);
    add_background_object(create_levelbackdrop02_875(1664, 688), 2);
    add_background_object(create_levelbackdrop09_899(1536, 736), 2);
    add_background_object(create_levelbackdrop09_899(1600, 704), 2);
    add_background_object(create_levelbackdrop02_875(1664, 752), 2);
    add_background_object(create_levelbackdrop02_875(1664, 816), 2);
    add_background_object(create_levelbackdrop02_875(1600, 752), 2);
    add_background_object(create_levelbackdrop02_875(1600, 816), 2);
    add_background_object(create_levelbackdrop02_875(1536, 752), 2);
    add_background_object(create_levelbackdrop8_894(1536, 816), 2);
    add_background_object(create_dvbackrock3_881(1368, 376), 2);
    add_background_object(create_dvbackrock3_881(1280, 320), 2);
    add_background_object(create_dvtree2_883(1320, 216), 2);
    add_background_object(create_dvbackrock1_882(1216, 344), 2);
    add_background_object(create_dvbackrock2_890(1048, 432), 2);
    add_background_object(create_levelbackdrop12_880(1320, 360), 2);
    add_background_object(create_levelbackdrop12_880(1312, 344), 2);
    add_background_object(create_levelbackdrop12_880(1376, 360), 2);
    add_background_object(create_levelbackdrop02_875(1408, 472), 2);
    add_background_object(create_levelbackdrop02_875(1344, 472), 2);
    add_background_object(create_levelbackdrop02_875(1376, 408), 2);
    add_background_object(create_levelbackdrop02_875(1312, 408), 2);
    add_background_object(create_levelbackdrop02_875(1280, 472), 2);
    add_background_object(create_levelbackdrop02_875(1216, 472), 2);
    add_background_object(create_dvtree4_874(536, 504), 2);
    add_background_object(create_dvtree2_883(680, 384), 2);
    add_background_object(create_dvbackrock3_881(696, 552), 2);
    add_background_object(create_dvbackrock2_890(192, 376), 2);
    add_background_object(create_dvbackrock1_882(256, 344), 2);
    add_background_object(create_dvwall1_482(960, 728), 2);
    add_background_object(create_dvfloorcurvesmallright_888(896, 536), 2);
    add_background_object(create_levelbackdrop12_880(576, 584), 2);
    add_background_object(create_dvwall1_482(192, 488), 2);
    add_background_object(create_dvwall1_482(-64, 488), 2);
    add_background_object(create_dvwall1_482(192, 680), 2);
    add_background_object(create_dvwall1_482(-64, 680), 2);
    add_background_object(create_dvwall6_885(448, 488), 2);
    add_background_object(create_dvrockslope4_900(-64, 464), 2);
    add_background_object(create_dvrockslope4_901(320, 464), 2);
    add_background_object(create_dvrockslope4_900(192, 464), 2);
    add_background_object(create_dvrockslope4_901(64, 464), 2);
    add_background_object(create_dvwall1_482(448, 616), 2);
    add_background_object(create_dvwall1_482(704, 616), 2);
    add_background_object(create_dvwall1_482(960, 536), 2);
    add_background_object(create_dvwall4_485(376, 600), 2);
    add_background_object(create_dvwall4_485(912, 640), 2);
    add_background_object(create_dvrockslope9_902(512, 504), 2);
    add_background_object(create_dvwall6_903(440, 568), 2);
    add_background_object(create_dvrockedge2_904(1240, 168), 2);
    add_background_object(create_dvrockedge1_905(952, 168), 2);
    add_background_object(create_dvrockslope4_901(768, 592), 2);
    add_background_object(create_dvrockslope4_900(640, 592), 2);
    add_background_object(create_dvrockedge2_904(896, 600), 2);
    add_background_object(create_dvrockedge1_905(960, 528), 2);
    add_background_object(create_dvwall1_482(704, 808), 2);
    add_background_object(create_dvwall1_482(448, 808), 2);
    add_background_object(create_dvwall6_903(952, 560), 2);
    add_background_object(create_dvwall6_903(896, 752), 2);
    add_background_object(create_levelbackdrop02_875(1152, 472), 2);
    add_background_object(create_dvwall4_485(1160, 464), 2);
    add_background_object(create_dvwalledge1_887(1152, 472), 2);
    add_background_object(create_dvrockedge2_904(1056, 368), 2);
    add_background_object(create_dvrockedge1_905(896, 360), 2);
    add_background_object(create_dvrockslope4_901(928, 360), 2);
    add_background_object(create_dvwalledge1_887(1312, 344), 2);
    add_background_object(create_dvrockedge1_905(1224, 328), 2);
    add_background_object(create_dvrockedge1_905(1152, 456), 2);
    add_background_object(create_dvrockslope1_896(1256, 328), 2);
    add_background_object(create_levelbackdrop12_880(1440, 392), 2);
    add_background_object(create_levelbackdrop12_880(1504, 424), 2);
    add_background_object(create_dvwall6_903(1320, 384), 2);
    add_background_object(create_dvrockslope11_906(1320, 328), 2);
    add_background_object(create_dvwall1_482(1664, 688), 2);
    add_background_object(create_dvwalledge1_887(1312, 408), 2);
    add_background_object(create_dvrockedge2_904(1312, 464), 2);
    add_background_object(create_dvrockslope4_901(1184, 456), 2);
    add_background_object(create_dvrockedge2_904(1704, 464), 2);
    add_background_object(create_dvfloorcurveright_907(1728, 560), 2);
    add_background_object(create_dvrockedge2_904(1728, 688), 2);
    add_background_object(create_dvwall4_485(1664, 720), 2);
    add_background_object(create_dvwall6_903(1576, 752), 2);
    add_background_object(create_dvrockslope1_896(1664, 688), 2);
    add_background_object(create_dvrockedge1_905(1528, 752), 2);
    add_background_object(create_dvrockslope12_908(1536, 688), 2);
    add_background_object(create_dvfloorcurveleft_909(1472, 840), 2);
    add_background_object(create_dvwall1_482(1216, 968), 2);
    add_background_object(create_dvwall1_482(1472, 968), 2);
    add_background_object(create_dvrockedge1_905(1552, 960), 2);
    add_background_object(create_dvrockslope4_901(1584, 960), 2);
    add_background_object(create_dvrockslope4_900(1712, 960), 2);
    add_background_object(create_dvwalledge2_895(1200, 664), 2);
    add_background_object(create_dvwalledge2_895(1200, 728), 2);
    add_background_object(create_dvrockceiling_891(1344, 512), 2);
    add_background_object(create_dvrockceiling_891(1472, 512), 2);
    add_background_object(create_dvrockslope4_901(1576, 456), 2);
    add_background_object(create_dvrockslope11_906(1448, 392), 2);
    add_background_object(create_dvrockceiling_891(1600, 864), 2);
    add_background_object(create_dvrockceiling_891(1728, 864), 2);
    add_background_object(create_dvrockceiling_891(1792, 864), 2);
    add_background_object(create_dvwall9_889(1968, 272), 2);
    add_background_object(create_dvwall1_482(2520, 16), 2);
    add_background_object(create_dvwall1_482(2264, 16), 2);
    add_background_object(create_dvwall1_482(1464, -392), 2);
    add_background_object(create_dvwall1_482(960, 920), 2);
    add_background_object(create_dvwalledge2_895(2264, 8), 2);
    add_background_object(create_dvwall6_903(1104, 536), 2);
    add_background_object(create_dvwall4_485(1184, 888), 2);
    add_background_object(create_dvwall6_903(1152, 776), 2);
    add_background_object(create_dvrockedge1_905(1216, 768), 2);
    add_background_object(create_dvwall6_903(1360, 904), 2);
    add_background_object(create_dvwall4_485(1448, 992), 2);
    add_background_object(create_dvwall1_482(2280, 896), 2);
    add_background_object(create_dvwalledge2_895(1968, 1048), 2);
    add_background_object(create_dvwalledge2_895(2264, 72), 2);
    add_background_object(create_dvrockslope2_910(2272, 680), 2);
    add_background_object(create_dvtree2_883(2480, 664), 2);
    add_background_object(create_dvbackrock3_881(2504, 832), 2);
    add_background_object(create_dvbackrock1_882(2184, 752), 2);
    add_background_object(create_dvbackrock2_890(2288, 784), 2);
    add_background_object(create_dvbackrock3_881(2200, 832), 2);
    add_background_object(create_dvrockslope4_901(2312, 872), 2);
    add_background_object(create_dvwalledge1_887(2152, 896), 2);
    add_background_object(create_dvrockedge1_905(2152, 880), 2);
    add_background_object(create_dvrockslope4_900(2184, 872), 2);
    add_background_object(create_dvwall9_889(2152, 960), 2);
    add_background_object(create_dvwall4_485(2184, 912), 2);
    add_background_object(create_dvwall6_903(2440, 896), 2);
    add_background_object(create_dvrockslope2_910(2440, 880), 2);
    add_background_object(create_dvrockedge2_904(848, 128), 2);
    add_background_object(create_dvrockslope2_910(720, 128), 2);
    add_background_object(create_dvrockedge1_905(688, 128), 2);
    add_background_object(create_dvwall1_482(2776, 896), 2);
    add_background_object(create_dvrockslope4_900(2824, 880), 2);
    add_background_object(create_dvrockslope10_911(5216, 1296), 2);
    add_background_object(create_dvwall1_482(5632, 1136), 2);
    add_background_object(create_dvwall1_482(5632, 944), 2);
    add_background_object(create_levelbackdrop02_875(5568, 1264), 2);
    add_background_object(create_levelbackdrop02_875(5568, 1136), 2);
    add_background_object(create_dvrockedge2_904(5600, 1120), 2);
    add_background_object(create_dvrockedge1_905(5568, 1120), 2);
    add_background_object(create_dvwall9_889(5504, 816), 2);
    add_background_object(create_dvwalledge1_887(5632, 944), 2);
    add_background_object(create_dvwalledge1_887(5632, 1008), 2);
    add_background_object(create_dvwalledge1_887(5632, 1072), 2);
    add_background_object(create_dvfloorcurvesmallright_888(5504, 1136), 2);
    add_background_object(create_dvrockedge2_904(5536, 1200), 2);
    add_background_object(create_dvrockslope1_896(5472, 1200), 2);
    add_background_object(create_levelbackdrop13_884(3144, 936), 2);
    add_background_object(create_levelbackdrop12_880(3080, 904), 2);
    add_background_object(create_levelbackdrop12_880(3208, 1000), 2);
    add_background_object(create_levelbackdrop02_875(3016, 952), 2);
    add_background_object(create_levelbackdrop02_875(3080, 952), 2);
    add_background_object(create_levelbackdrop02_875(3016, 1016), 2);
    add_background_object(create_levelbackdrop02_875(3080, 1016), 2);
    add_background_object(create_levelbackdrop02_875(3144, 1000), 2);
    add_background_object(create_dvwall4_485(2968, 896), 2);
    add_background_object(create_dvwall6_903(3000, 968), 2);
    add_background_object(create_dvrockslope5_912(3080, 888), 2);
    add_background_object(create_dvrockslope4_901(2952, 880), 2);
    add_background_object(create_dvrockceiling_891(2920, 1072), 2);
    add_background_object(create_dvrockceiling_891(3048, 1072), 2);
    add_background_object(create_dvrockceiling_891(2792, 1072), 2);
    add_background_object(create_dvrockceiling_891(3176, 1064), 2);
    add_background_object(create_dvrockceiling_891(2664, 1072), 2);
    add_background_object(create_dvrockslope9_902(3144, 920), 2);
    add_background_object(create_dvrockslope1_896(3272, 1016), 2);
    add_background_object(create_dvrockedge2_904(3336, 1016), 2);
    add_background_object(create_dvrockceiling_891(2536, 1072), 2);
    add_background_object(create_dvrockceiling_891(2408, 1072), 2);
    add_background_object(create_levelbackdrop02_875(4488, 1288), 2);
    add_background_object(create_dvwalledge1_887(4800, 1416), 2);
    add_background_object(create_dvwalledge1_887(4800, 1352), 2);
    add_background_object(create_dvwalledge2_895(4600, 1384), 2);
    add_background_object(create_dvwalledge2_895(4600, 1416), 2);
    add_background_object(create_dvwalledge2_895(4536, 1288), 2);
    add_background_object(create_dvwalledge2_895(4536, 1320), 2);
    add_background_object(create_dvwalledge1_887(4488, 1288), 2);
    add_background_object(create_levelbackdrop02_875(4424, 1352), 2);
    add_background_object(create_dvwalledge1_887(4424, 1352), 2);
    add_background_object(create_dvgrass1_507(4424, 1336), 2);
    add_background_object(create_dvgrass2_508(4456, 1336), 2);
    add_background_object(create_levelbackdrop02_875(4424, 1416), 2);
    add_background_object(create_dvfloorcurvesmallright_888(4360, 1416), 2);
    add_background_object(create_dvwall6_903(4400, 1456), 2);
    add_background_object(create_levelbackdrop02_875(4864, 1352), 2);
    add_background_object(create_levelbackdrop02_875(4928, 1352), 2);
    add_background_object(create_levelbackdrop12_880(4992, 1368), 2);
    add_background_object(create_dvwall6_903(4824, 1392), 2);
    add_background_object(create_dvwall4_485(4976, 1400), 2);
    add_background_object(create_dvwall4_485(4816, 1480), 2);
    add_background_object(create_dvwall1_482(4928, 1600), 2);
    add_background_object(create_dvwall1_482(5312, 1408), 2);
    add_background_object(create_dvwall1_482(4424, 480), 2);
    add_background_object(create_dvwall1_482(4304, 800), 2);
    add_background_object(create_dvwall1_482(5568, 1328), 2);
    add_background_object(create_dvwall1_482(5376, 1280), 2);
    add_background_object(create_dvwall6_903(5584, 1176), 2);
    add_background_object(create_dvwall4_485(5584, 1280), 2);
    add_background_object(create_dvwall4_485(5432, 1232), 2);
    add_background_object(create_dvwall6_903(5344, 1336), 2);
    add_background_object(create_dvwall4_485(5272, 1384), 2);
    add_background_object(create_dvrockslope6_913(5344, 1200), 2);
    add_background_object(create_dvwall1_482(4096, 1480), 2);
    add_background_object(create_dvwall1_482(3648, 1288), 2);
    add_background_object(create_dvwall1_482(3392, 1288), 2);
    add_background_object(create_dvwalledge2_895(3632, 1288), 2);
    add_background_object(create_dvwalledge2_895(4016, 1408), 2);
    add_background_object(create_dvrockslope4_900(984, 160), 2);
    add_background_object(create_dvrockslope4_901(1112, 160), 2);
    add_background_object(create_dvrockslope4_901(2696, 880), 2);
    add_background_object(create_dvrockslope2_910(2568, 880), 2);
    add_background_object(create_dvwalledge1_887(2752, 696), 2);
    add_background_object(create_dvwalledge2_895(2928, 696), 2);
    add_background_object(create_dvrockedge2_904(2912, 680), 2);
    add_background_object(create_dvrockslope2_910(2784, 680), 2);
    add_background_object(create_dvrockceiling_891(2752, 736), 2);
    add_background_object(create_dvrockceiling_891(2816, 736), 2);
    add_background_object(create_levelbackdrop02_875(4976, 1056), 2);
    add_background_object(create_levelbackdrop02_875(4912, 1056), 2);
    add_background_object(create_levelbackdrop02_875(4848, 1056), 2);
    add_background_object(create_levelbackdrop9_878(5104, 1056), 2);
    add_background_object(create_dvwall1_482(4560, 928), 2);
    add_background_object(create_levelbackdrop13_884(4880, 968), 2);
    add_background_object(create_levelbackdrop12_880(4816, 936), 2);
    add_background_object(create_levelbackdrop12_880(4944, 1032), 2);
    add_background_object(create_levelbackdrop02_875(4816, 984), 2);
    add_background_object(create_levelbackdrop02_875(4816, 1048), 2);
    add_background_object(create_levelbackdrop02_875(4880, 1032), 2);
    add_background_object(create_dvwall4_485(4736, 944), 2);
    add_background_object(create_dvwall6_903(4744, 992), 2);
    add_background_object(create_dvrockslope5_912(4816, 920), 2);
    add_background_object(create_dvrockceiling_891(4784, 1104), 2);
    add_background_object(create_dvrockceiling_891(4656, 1104), 2);
    add_background_object(create_dvrockceiling_891(4912, 1096), 2);
    add_background_object(create_dvrockslope9_902(4880, 952), 2);
    add_background_object(create_dvrockedge2_904(5136, 1040), 2);
    add_background_object(create_dvrockslope4_900(3488, 1272), 2);
    add_background_object(create_dvrockslope4_901(3360, 1272), 2);
    add_background_object(create_dvrockslope4_900(5008, 1040), 2);
    add_background_object(create_dvrockslope6_913(3232, 1272), 2);
    add_background_object(create_dvrockslope5_912(2848, 1336), 2);
    add_background_object(create_dvrockslope1_896(2784, 1336), 2);
    add_background_object(create_dvladder_914(912, 264), 2);
    add_background_object(create_dvladder_914(912, 232), 2);
    add_background_object(create_dvladder_914(912, 200), 2);
    add_background_object(create_dvladder_914(912, 168), 2);
    add_background_object(create_dvladder_914(5464, 872), 2);
    add_background_object(create_dvladder_914(5464, 840), 2);
    add_background_object(create_dvladder_914(5464, 808), 2);
    add_background_object(create_dvceilingoverlay_915(4656, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4784, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4912, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5000, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(3176, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(3048, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2920, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2792, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2664, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2536, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2408, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2280, 1072), 2);
    add_background_object(create_dvceilingoverlay_915(2272, 680), 2);
    add_background_object(create_dvceilingoverlay_915(2752, 736), 2);
    add_background_object(create_dvceilingoverlay_915(2816, 736), 2);
    add_background_object(create_dvceilingoverlay_915(960, 368), 2);
    add_background_object(create_dvceilingoverlay_915(896, 368), 2);
    add_background_object(create_dvceilingoverlay_915(688, 128), 2);
    add_background_object(create_dvceilingoverlay_915(752, 128), 2);
    add_background_object(create_dvceilingoverlay_915(952, 168), 2);
    add_background_object(create_dvceilingoverlay_915(1080, 168), 2);
    add_background_object(create_dvceilingoverlay_915(1144, 168), 2);
    add_background_object(create_dvceilingoverlay2_916(1224, 328), 2);
    add_background_object(create_dvceilingoverlay2_916(1248, 328), 2);
    add_background_object(create_dvceilingoverlay_915(1976, 256), 2);
    add_background_object(create_dvwall1_482(1728, 1544), 2);
    add_background_object(create_levelbackdrop12_880(2240, 1432), 2);
    add_background_object(create_dvwall1_482(2240, 1480), 2);
    add_background_object(create_dvwall1_482(1984, 1608), 2);
    add_background_object(create_dvwall1_482(2496, 1480), 2);
    add_background_object(create_levelbackdrop10_898(2632, 1416), 2);
    add_background_object(create_levelbackdrop10_898(2696, 1352), 2);
    add_background_object(create_dvwall1_482(2752, 1480), 2);
    add_background_object(create_dvwall1_482(3008, 1480), 2);
    add_background_object(create_dvrockslope10_911(2592, 1368), 2);
    add_background_object(create_dvrockslope6_913(2656, 1336), 2);
    add_background_object(create_levelbackdrop02_875(2760, 1416), 2);
    add_background_object(create_levelbackdrop02_875(2824, 1416), 2);
    add_background_object(create_dvwall4_485(2776, 1456), 2);
    add_background_object(create_dvwall6_903(2664, 1448), 2);
    add_background_object(create_dvwall6_903(2888, 1464), 2);
    add_background_object(create_dvrockslope1_896(3040, 1464), 2);
    add_background_object(create_dvrockslope9_902(2912, 1368), 2);
    add_background_object(create_levelbackdrop02_875(3328, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3264, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3328, 1352), 2);
    add_background_object(create_dvwall4_485(3336, 1312), 2);
    add_background_object(create_dvwall6_903(3136, 1456), 2);
    add_background_object(create_dvrockslope10_911(3104, 1368), 2);
    add_background_object(create_dvwall4_485(3232, 1408), 2);
    add_background_object(create_dvwall6_903(1904, 1400), 2);
    add_background_object(create_dvladder_914(5464, 904), 2);
    add_background_object(create_dvwall1_482(5688, 544), 2);
    add_background_object(create_dvrockedge1_905(5504, 800), 2);
    add_background_object(create_dvwalledge1_887(4552, 672), 2);
    add_background_object(create_dvwalledge1_887(4552, 608), 2);
    add_background_object(create_dvwalledge1_887(4552, 544), 2);
    add_background_object(create_dvwall6_903(4552, 872), 2);
    add_background_object(create_levelbackdrop7_917(10872, 640), 2);
    add_background_object(create_levelbackdrop7_917(11080, 640), 2);
    add_background_object(create_dvtree2_883(8856, 608), 2);
    add_background_object(create_dvwall1_482(8928, 824), 2);
    add_background_object(create_dvwall1_482(9184, 824), 2);
    add_background_object(create_dvrockslope2_910(9056, 824), 2);
    add_background_object(create_dvrockslope4_900(9184, 816), 2);
    add_background_object(create_dvrockslope4_901(9312, 816), 2);
    add_background_object(create_dvbackrock3_881(8896, 776), 2);
    add_background_object(create_dvbackrock3_881(9072, 776), 2);
    add_background_object(create_dvbackrock3_881(8984, 776), 2);
    add_background_object(create_dvbackrock1_882(8976, 560), 2);
    add_background_object(create_dvbackrock1_882(8944, 616), 2);
    add_background_object(create_dvbackrock1_882(9016, 624), 2);
    add_background_object(create_dvbackrock1_882(8976, 664), 2);
    add_background_object(create_dvbackrock1_882(8896, 696), 2);
    add_background_object(create_dvbackrock1_882(9064, 696), 2);
    add_background_object(create_dvwalledge2_895(4664, 864), 2);
    add_background_object(create_dvwalledge2_895(4664, 800), 2);
    add_background_object(create_dvrockedge1_905(4656, 928), 2);
    add_background_object(create_dvwalledge2_895(4664, 736), 2);
    add_background_object(create_dvwalledge2_895(4664, 672), 2);
    add_background_object(create_levelbackdrop02_875(5400, 848), 2);
    add_background_object(create_levelbackdrop02_875(5336, 848), 2);
    add_background_object(create_levelbackdrop02_875(5272, 848), 2);
    add_background_object(create_levelbackdrop02_875(5208, 848), 2);
    add_background_object(create_dvrockceiling_891(5336, 888), 2);
    add_background_object(create_dvceilingoverlay_915(5336, 888), 2);
    add_background_object(create_dvrockslope4_900(4688, 920), 2);
    add_background_object(create_dvwall1_482(6080, 624), 2);
    add_background_object(create_dvwall1_482(4680, 480), 2);
    add_background_object(create_dvwall9_889(5944, 648), 2);
    add_background_object(create_dvrockceiling_891(6072, 760), 2);
    add_background_object(create_dvceilingoverlay_915(6072, 760), 2);
    add_background_object(create_dvrockceiling_891(4680, 648), 2);
    add_background_object(create_dvceilingoverlay_915(4680, 648), 2);
    add_background_object(create_dvrockceiling_891(4808, 648), 2);
    add_background_object(create_dvceilingoverlay_915(4808, 648), 2);
    add_background_object(create_dvwall1_482(6328, 616), 2);
    add_background_object(create_dvwall6_903(4712, 488), 2);
    add_background_object(create_dvwall4_485(4624, 544), 2);
    add_background_object(create_levelbackdrop02_875(5000, 608), 2);
    add_background_object(create_levelbackdrop02_875(4936, 608), 2);
    add_background_object(create_dvrockceiling_891(4936, 648), 2);
    add_background_object(create_dvceilingoverlay_915(4936, 648), 2);
    add_background_object(create_dvwall4_485(6456, 672), 2);
    add_background_object(create_dvceilingoverlay_915(5208, 888), 2);
    add_background_object(create_dvwalledge1_887(5208, 848), 2);
    add_background_object(create_dvrockedge1_905(5208, 840), 2);
    add_background_object(create_dvrockceiling_891(5208, 888), 2);
    add_background_object(create_dvwalledge2_895(5448, 848), 2);
    add_background_object(create_dvrockedge2_904(5432, 832), 2);
    add_background_object(create_dvrockslope1_896(5368, 832), 2);
    add_background_object(create_dvrockedge1_905(5336, 832), 2);
    add_background_object(create_dvrockedge2_904(5304, 840), 2);
    add_background_object(create_dvrockslope1_896(5240, 840), 2);
    add_background_object(create_dvwalledge2_895(5048, 608), 2);
    add_background_object(create_levelbackdrop02_875(4936, 544), 2);
    add_background_object(create_levelbackdrop02_875(5000, 544), 2);
    add_background_object(create_dvwalledge2_895(5048, 544), 2);
    add_background_object(create_dvwalledge2_895(6568, 624), 2);
    add_background_object(create_dvwalledge2_895(6568, 688), 2);
    add_background_object(create_dvwall4_485(4904, 544), 2);
    add_background_object(create_dvrockedge1_905(6584, 776), 2);
    add_background_object(create_dvrockslope1_896(6616, 776), 2);
    add_background_object(create_dvrockedge2_904(6680, 776), 2);
    add_background_object(create_dvwalledge1_887(6936, 688), 2);
    add_background_object(create_dvwalledge1_887(6936, 752), 2);
    add_background_object(create_dvwall1_482(6936, 496), 2);
    add_background_object(create_dvwalledge1_887(6936, 624), 2);
    add_background_object(create_dvwall4_485(6456, 504), 2);
    add_background_object(create_dvwalledge2_895(6568, 496), 2);
    add_background_object(create_dvwalledge2_895(6568, 560), 2);
    add_background_object(create_dvwall6_903(6360, 528), 2);
    add_background_object(create_dvwalledge2_895(6568, 712), 2);
    add_background_object(create_dvrockslope2_910(6424, 480), 2);
    add_background_object(create_dvrockslope2_910(7272, 480), 2);
    add_background_object(create_dvrockedge2_904(6552, 480), 2);
    add_background_object(create_dvwall4_485(6256, 520), 2);
    add_background_object(create_dvwall6_903(6144, 512), 2);
    add_background_object(create_dvwall3_873(5944, 456), 2);
    add_background_object(create_dvrockslope4_901(6296, 472), 2);
    add_background_object(create_dvrockslope4_900(6168, 472), 2);
    add_background_object(create_dvwall6_903(6032, 488), 2);
    add_background_object(create_dvwall6_903(5984, 576), 2);
    add_background_object(create_dvrockedge1_905(6072, 480), 2);
    add_background_object(create_dvrockslope1_896(6104, 480), 2);
    add_background_object(create_levelbackdrop9_878(6120, 352), 2);
    add_background_object(create_dvrockedge2_904(6160, 336), 2);
    add_background_object(create_dvrockslope1_896(6096, 336), 2);
    add_background_object(create_dvwalledge2_895(6056, 416), 2);
    add_background_object(create_dvrockedge1_905(6840, 688), 2);
    add_background_object(create_dvrockedge2_904(6584, 600), 2);
    add_background_object(create_dvrockslope9_902(5760, 832), 2);
    add_background_object(create_dvrockslope1_896(5520, 800), 2);
    add_background_object(create_levelbackdrop02_875(5632, 880), 2);
    add_background_object(create_dvwall6_903(5608, 808), 2);
    add_background_object(create_dvrockslope2_910(5568, 800), 2);
    add_background_object(create_dvrockslope5_912(5696, 800), 2);
    add_background_object(create_dvwall4_485(5656, 912), 2);
    add_background_object(create_dvwall1_482(5888, 944), 2);
    add_background_object(create_dvrockslope2_910(5888, 928), 2);
    add_background_object(create_dvwall1_482(5888, 624), 2);
    add_background_object(create_levelbackdrop8_894(5824, 752), 2);
    add_background_object(create_dvwall6_903(5864, 688), 2);
    add_background_object(create_dvwall4_485(5824, 648), 2);
    add_background_object(create_dvwall1_482(7576, 624), 2);
    add_background_object(create_dvwall1_482(7448, 496), 2);
    add_background_object(create_dvwall1_482(6176, 952), 2);
    add_background_object(create_dvrockslope1_896(6208, 888), 2);
    add_background_object(create_dvwall1_482(7168, 1136), 2);
    add_background_object(create_dvrockslope2_910(6016, 928), 2);
    add_background_object(create_dvhalfpipe2_868(6808, 296), 2);
    add_background_object(create_dvhalfpipe2_868(6680, 296), 2);
    add_background_object(create_dvwall3_873(6936, 112), 2);
    add_background_object(create_dvfloorcurvesmallleft_918(7064, 416), 2);
    add_background_object(create_dvrockslope2_910(7144, 480), 2);
    add_background_object(create_dvrockedge1_905(7112, 480), 2);
    add_background_object(create_dvwall4_485(6936, 464), 2);
    add_background_object(create_dvwalledge1_887(6936, 560), 2);
    add_background_object(create_dvwalledge1_887(6936, 496), 2);
    add_background_object(create_dvwalledge1_887(6936, 240), 2);
    add_background_object(create_dvwalledge1_887(6936, 176), 2);
    add_background_object(create_dvwalledge1_887(6936, 112), 2);
    add_background_object(create_dvwall1_482(6936, -80), 2);
    add_background_object(create_dvwalledge1_887(6936, 48), 2);
    add_background_object(create_dvwalledge1_887(6936, -16), 2);
    add_background_object(create_dvwall8_877(7192, -16), 2);
    add_background_object(create_dvwall4_485(6936, 24), 2);
    add_background_object(create_dvwall4_485(7088, -16), 2);
    add_background_object(create_dvwalledge2_895(7048, 240), 2);
    add_background_object(create_levelbackdrop02_875(7000, 432), 2);
    add_background_object(create_levelbackdrop02_875(6936, 432), 2);
    add_background_object(create_dvwalledge1_887(6936, 432), 2);
    add_background_object(create_dvrockedge1_905(6936, 416), 2);
    add_background_object(create_dvrockslope1_896(6968, 416), 2);
    add_background_object(create_dvrockedge2_904(7032, 416), 2);
    add_background_object(create_dvrockslope4_900(7400, 472), 2);
    add_background_object(create_dvfloorcurvesmallright_888(7640, 416), 2);
    add_background_object(create_dvrockedge2_904(7656, 480), 2);
    add_background_object(create_dvrockslope4_901(7528, 472), 2);
    add_background_object(create_dvwall3_873(7704, 312), 2);
    add_background_object(create_dvwall3_873(7704, 496), 2);
    add_background_object(create_dvwall6_903(7688, 464), 2);
    add_background_object(create_dvwall6_903(7664, 576), 2);
    add_background_object(create_dvwalledge1_887(7704, 312), 2);
    add_background_object(create_dvrockedge1_905(7704, 304), 2);
    add_background_object(create_dvwalledge1_887(7704, 368), 2);
    add_background_object(create_levelbackdrop12_880(7832, 320), 2);
    add_background_object(create_levelbackdrop02_875(7832, 360), 2);
    add_background_object(create_dvwall4_485(7800, 344), 2);
    add_background_object(create_dvwall4_485(7800, 448), 2);
    add_background_object(create_dvwall8_877(12792, 712), 2);
    add_background_object(create_dvrockedge2_904(13016, 688), 2);
    add_background_object(create_dvwall6_903(12792, 616), 2);
    add_background_object(create_dvrockslope1_896(12952, 688), 2);
    add_background_object(create_dvrockedge1_905(12920, 688), 2);
    add_background_object(create_dvwalledge2_895(12904, 648), 2);
    add_background_object(create_dvwalledge2_895(12904, 584), 2);
    add_background_object(create_dvrockceiling_891(5920, 792), 2);
    add_background_object(create_dvrockceiling_891(6048, 792), 2);
    add_background_object(create_dvceilingoverlay_915(6048, 792), 2);
    add_background_object(create_dvceilingoverlay_915(5920, 792), 2);
    add_background_object(create_dvwall1_482(9464, 448), 2);
    add_background_object(create_dvwall9_889(9336, 512), 2);
    add_background_object(create_dvrockceiling_891(9592, 616), 2);
    add_background_object(create_dvceilingoverlay_915(9592, 616), 2);
    add_background_object(create_dvceilingoverlay_915(9464, 616), 2);
    add_background_object(create_dvwall8_877(13176, 448), 2);
    add_background_object(create_dvwall4_485(13080, 448), 2);
    add_background_object(create_dvwall1_482(7832, 624), 2);
    add_background_object(create_levelbackdrop02_875(9568, 984), 2);
    add_background_object(create_levelbackdrop02_875(9632, 1032), 2);
    add_background_object(create_levelbackdrop02_875(9568, 1048), 2);
    add_background_object(create_dvrockslope9_902(9568, 920), 2);
    add_background_object(create_dvwall1_482(9696, 1040), 2);
    add_background_object(create_dvrockslope1_896(9696, 1016), 2);
    add_background_object(create_dvfloorcurvesmallright_888(12832, 960), 2);
    add_background_object(create_dvwall1_482(9696, 1232), 2);
    add_background_object(create_dvwall6_903(9584, 1048), 2);
    add_background_object(create_levelbackdrop02_875(12896, 960), 2);
    add_background_object(create_dvrockedge1_905(12896, 944), 2);
    add_background_object(create_dvwall1_482(13184, 1328), 2);
    add_background_object(create_dvfloorcurvesmallright_888(13568, 1256), 2);
    add_background_object(create_levelbackdrop02_875(13632, 1256), 2);
    add_background_object(create_dvrockedge1_905(13632, 1240), 2);
    add_background_object(create_dvwall1_482(13024, 1216), 2);
    add_background_object(create_dvwall4_485(13592, 1304), 2);
    add_background_object(create_dvrockedge2_904(13568, 1320), 2);
    add_background_object(create_dvrockslope4_900(13440, 1320), 2);
    add_background_object(create_dvwalledge2_895(13680, 1248), 2);
    add_background_object(create_dvrockedge2_904(13664, 1240), 2);
    add_background_object(create_dvrockedge1_905(13688, 1288), 2);
    add_background_object(create_dvrockslope2_910(13720, 1288), 2);
    add_background_object(create_dvwall1_482(14048, 1224), 2);
    add_background_object(create_levelbackdrop02_875(13856, 960), 2);
    add_background_object(create_levelbackdrop02_875(13792, 960), 2);
    add_background_object(create_levelbackdrop02_875(13728, 960), 2);
    add_background_object(create_levelbackdrop02_875(13664, 960), 2);
    add_background_object(create_dvwalledge1_887(13664, 960), 2);
    add_background_object(create_dvrockedge2_904(13888, 944), 2);
    add_background_object(create_dvrockceiling_891(13664, 1000), 2);
    add_background_object(create_dvrockceiling_891(13736, 1000), 2);
    add_background_object(create_dvrockceiling_891(13856, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13664, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13760, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13856, 1000), 2);
    add_background_object(create_levelbackdrop13_884(13024, 1024), 2);
    add_background_object(create_levelbackdrop13_884(13088, 1088), 2);
    add_background_object(create_levelbackdrop02_875(13024, 1088), 2);
    add_background_object(create_levelbackdrop02_875(13024, 1152), 2);
    add_background_object(create_levelbackdrop02_875(13088, 1152), 2);
    add_background_object(create_levelbackdrop02_875(13152, 1152), 2);
    add_background_object(create_levelbackdrop13_884(13216, 1152), 2);
    add_background_object(create_levelbackdrop13_884(13280, 1216), 2);
    add_background_object(create_levelbackdrop02_875(13280, 1280), 2);
    add_background_object(create_dvrockslope9_902(13056, 1040), 2);
    add_background_object(create_dvwall4_485(12848, 1016), 2);
    add_background_object(create_dvrockedge2_904(12832, 1016), 2);
    add_background_object(create_dvwall6_903(12912, 1008), 2);
    add_background_object(create_dvrockslope5_912(12928, 944), 2);
    add_background_object(create_dvwall6_903(12952, 1112), 2);
    add_background_object(create_dvwall6_903(13064, 1200), 2);
    add_background_object(create_dvwall6_903(13168, 1208), 2);
    add_background_object(create_dvrockslope5_912(13184, 1136), 2);
    add_background_object(create_dvwall4_485(13232, 1320), 2);
    add_background_object(create_dvrockslope9_902(13312, 1232), 2);
    add_background_object(create_dvrockslope4_901(13000, 824), 2);
    add_background_object(create_dvrockedge1_905(12968, 824), 2);
    add_background_object(create_dvrockedge1_905(13152, 744), 2);
    add_background_object(create_dvrockslope1_896(13312, 752), 2);
    add_background_object(create_levelbackdrop02_875(13600, 960), 2);
    add_background_object(create_levelbackdrop02_875(13536, 960), 2);
    add_background_object(create_dvrockceiling_891(13536, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13536, 1000), 2);
    add_background_object(create_levelbackdrop13_884(13408, 768), 2);
    add_background_object(create_levelbackdrop13_884(13472, 832), 2);
    add_background_object(create_dvrockslope5_912(13376, 752), 2);
    add_background_object(create_dvrockslope4_901(13760, 936), 2);
    add_background_object(create_dvrockslope4_900(13632, 936), 2);
    add_background_object(create_levelbackdrop02_875(13344, 832), 2);
    add_background_object(create_levelbackdrop02_875(13408, 896), 2);
    add_background_object(create_levelbackdrop02_875(13472, 896), 2);
    add_background_object(create_levelbackdrop02_875(13408, 960), 2);
    add_background_object(create_levelbackdrop02_875(13472, 960), 2);
    add_background_object(create_dvrockslope9_902(13504, 848), 2);
    add_background_object(create_dvrockceiling_891(13408, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13408, 1000), 2);
    add_background_object(create_dvrockslope2_910(13848, 1288), 2);
    add_background_object(create_dvwalledge1_887(14048, 1232), 2);
    add_background_object(create_dvrockedge1_905(14048, 1216), 2);
    add_background_object(create_dvwall4_485(14152, 1168), 2);
    add_background_object(create_dvwalledge1_887(13920, 832), 2);
    add_background_object(create_dvrockceiling_891(13984, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13984, 1000), 2);
    add_background_object(create_dvwalledge1_887(14152, 1160), 2);
    add_background_object(create_dvwalledge1_887(14152, 1096), 2);
    add_background_object(create_dvwalledge1_887(14152, 1032), 2);
    add_background_object(create_dvrockslope1_896(14080, 1216), 2);
    add_background_object(create_dvrockedge2_904(14144, 1216), 2);
    add_background_object(create_dvladder_914(14112, 984), 2);
    add_background_object(create_dvladder_914(14112, 1016), 2);
    add_background_object(create_dvladder_914(14112, 1048), 2);
    add_background_object(create_dvladder_914(14112, 1080), 2);
    add_background_object(create_dvwalledge2_895(14032, 832), 2);
    add_background_object(create_dvwalledge2_895(14096, 896), 2);
    add_background_object(create_dvrockedge1_905(14048, 888), 2);
    add_background_object(create_dvrockedge2_904(14080, 888), 2);
    add_background_object(create_dvladder_914(14112, 952), 2);
    add_background_object(create_dvladder_914(14112, 920), 2);
    add_background_object(create_dvladder_914(14112, 888), 2);
    add_background_object(create_dvrockedge2_904(14016, 824), 2);
    add_background_object(create_dvrockslope1_896(13952, 824), 2);
    add_background_object(create_dvrockedge1_905(13920, 824), 2);
    add_background_object(create_dvwall1_482(14152, 576), 2);
    add_background_object(create_dvwalledge1_887(14152, 704), 2);
    add_background_object(create_dvwalledge1_887(14152, 640), 2);
    add_background_object(create_dvwalledge1_887(14152, 576), 2);
    add_background_object(create_dvwall1_482(14152, 384), 2);
    add_background_object(create_dvwalledge1_887(14152, 512), 2);
    add_background_object(create_dvwalledge1_887(14152, 448), 2);
    add_background_object(create_dvwalledge1_887(14152, 384), 2);
    add_background_object(create_spiraltunnel1_919(8088, 328), 2);
    add_background_object(create_dvwall6_903(13304, 824), 2);
    add_background_object(create_dvwall6_903(13376, 896), 2);
    add_background_object(create_dvrockedge2_904(13128, 832), 2);
    add_background_object(create_dvrockedge1_905(8336, 632), 2);
    add_background_object(create_dvrockslope2_910(8368, 632), 2);
    add_background_object(create_dvwalledge1_887(13280, 760), 2);
    add_background_object(create_dvrockslope4_901(13184, 744), 2);
    add_background_object(create_dvrockceiling_891(13280, 1000), 2);
    add_background_object(create_dvceilingoverlay_915(13280, 1000), 2);
    add_background_object(create_dvwalledge1_887(13280, 824), 2);
    add_background_object(create_dvwalledge1_887(13280, 888), 2);
    add_background_object(create_dvwalledge1_887(13280, 952), 2);
    add_background_object(create_dvrockslope4_901(7736, 304), 2);
    add_background_object(create_levelbackdrop12_880(7896, 344), 2);
    add_background_object(create_dvrockslope11_906(7864, 312), 2);
    add_background_object(create_dvwall6_903(7912, 400), 2);
    add_background_object(create_dvwall6_903(7992, 408), 2);
    add_background_object(create_dvrockedge2_904(8056, 376), 2);
    add_background_object(create_dvwall4_485(7992, 480), 2);
    add_background_object(create_dvwall1_482(8088, 704), 2);
    add_background_object(create_dvwall4_485(8008, 576), 2);
    add_background_object(create_dvwall9_889(7960, 200), 2);
    add_background_object(create_dvrockedge1_905(7960, 192), 2);
    add_background_object(create_dvwall1_482(8344, 360), 2);
    add_background_object(create_dvrockceiling_891(8344, 536), 2);
    add_background_object(create_dvceilingoverlay_915(8344, 536), 2);
    add_background_object(create_dvrockceiling_891(8472, 536), 2);
    add_background_object(create_dvceilingoverlay_915(8472, 536), 2);
    add_background_object(create_dvwall4_485(8296, 664), 2);
    add_background_object(create_dvwall1_482(6912, 1136), 2);
    add_background_object(create_dvwalledge2_895(8512, 768), 2);
    add_background_object(create_dvwalledge2_895(8512, 704), 2);
    add_background_object(create_dvwalledge2_895(8512, 640), 2);
    add_background_object(create_dvrockedge2_904(8496, 632), 2);
    add_background_object(create_dvrockslope5_912(9440, 824), 2);
    add_background_object(create_dvwall4_485(8088, 624), 2);
    add_background_object(create_levelbackdrop02_875(8208, 648), 2);
    add_background_object(create_dvwall6_903(8176, 656), 2);
    add_background_object(create_dvwalledge2_895(8584, 488), 2);
    add_background_object(create_dvwalledge2_895(8584, 424), 2);
    add_background_object(create_dvwalledge2_895(8584, 360), 2);
    add_background_object(create_dvwall6_885(8344, 136), 2);
    add_background_object(create_dvwalledge1_887(8080, 136), 2);
    add_background_object(create_dvrockedge1_905(8072, 128), 2);
    add_background_object(create_dvrockslope4_900(8104, 120), 2);
    add_background_object(create_dvrockslope4_901(8232, 120), 2);
    add_background_object(create_dvwall4_485(8320, 224), 2);
    add_background_object(create_dvwall6_903(8376, 224), 2);
    add_background_object(create_dvwall6_903(8408, 256), 2);
    add_background_object(create_dvrockslope5_912(8360, 128), 2);
    add_background_object(create_dvrockslope9_902(8456, 192), 2);
    add_background_object(create_dvwalledge2_895(8584, 304), 2);
    add_background_object(create_dvrockedge2_904(8584, 288), 2);
    add_background_object(create_dvwalledge2_895(2000, -288), 2);
    add_background_object(create_dvwall4_485(9496, 1048), 2);
    add_background_object(create_dvwall4_485(9360, 952), 2);
    add_background_object(create_dvwall1_482(9464, 256), 2);
    add_background_object(create_dvwall3_873(9336, 256), 2);
    add_background_object(create_levelbackdrop02_875(9336, 448), 2);
    add_background_object(create_levelbackdrop02_875(9400, 448), 2);
    add_background_object(create_dvwall1_482(9464, 64), 2);
    add_background_object(create_dvwall3_873(9336, 64), 2);
    add_background_object(create_dvwall1_482(14152, 192), 2);
    add_background_object(create_dvwalledge1_887(14152, 320), 2);
    add_background_object(create_dvwalledge1_887(14152, 256), 2);
    add_background_object(create_dvwalledge1_887(14152, 192), 2);
    add_background_object(create_dvwall1_482(14152, 0), 2);
    add_background_object(create_dvwalledge1_887(14152, 128), 2);
    add_background_object(create_dvwalledge1_887(14152, 64), 2);
    add_background_object(create_dvwalledge1_887(14152, 0), 2);
    add_background_object(create_dvrockceiling_891(7064, 88), 2);
    add_background_object(create_dvwalledge2_895(7048, 176), 2);
    add_background_object(create_dvwalledge2_895(7048, 112), 2);
    add_background_object(create_dvceilingoverlay_915(7064, 88), 2);
    add_background_object(create_dvwall4_485(13968, 1312), 2);
    add_background_object(create_dvrockslope1_896(13976, 1288), 2);
    add_background_object(create_dvrockedge2_904(14040, 1288), 2);
    add_background_object(create_dvwall4_485(14080, 1360), 2);
    add_background_object(create_dvrockedge1_905(14152, 1016), 2);
    add_background_object(create_dvrockceiling_891(14152, 752), 2);
    add_background_object(create_dvceilingoverlay_915(14152, 752), 2);
    add_background_object(create_dvrockslope4_901(14312, 1008), 2);
    add_background_object(create_dvrockslope4_900(14184, 1008), 2);
    add_background_object(create_dvwall6_903(14224, 1320), 2);
    add_background_object(create_dvwall1_482(14408, 576), 2);
    add_background_object(create_dvwall1_482(14408, 384), 2);
    add_background_object(create_dvwall1_482(14408, 192), 2);
    add_background_object(create_dvwall1_482(14408, 0), 2);
    add_background_object(create_dvceilingoverlay_915(14536, 752), 2);
    add_background_object(create_dvrockceiling_891(14536, 752), 2);
    add_background_object(create_dvrockceiling_891(14280, 752), 2);
    add_background_object(create_dvceilingoverlay_915(14280, 752), 2);
    add_background_object(create_dvrockceiling_891(14408, 752), 2);
    add_background_object(create_dvceilingoverlay_915(14408, 752), 2);
    add_background_object(create_dvrockslope4_901(14568, 1008), 2);
    add_background_object(create_dvrockslope4_900(14440, 1008), 2);
    add_background_object(create_dvwall4_485(14448, 1200), 2);
    add_background_object(create_dvwall6_903(14352, 1168), 2);
    add_background_object(create_dvrockslope4_901(14824, 1008), 2);
    add_background_object(create_dvrockslope4_900(14696, 1008), 2);
    add_background_object(create_dvwall1_482(14664, 576), 2);
    add_background_object(create_dvwall1_482(14664, 384), 2);
    add_background_object(create_dvwall1_482(14664, 192), 2);
    add_background_object(create_dvwall1_482(14664, 0), 2);
    add_background_object(create_dvwalledge2_895(14904, 0), 2);
    add_background_object(create_dvwalledge2_895(14904, 64), 2);
    add_background_object(create_dvwalledge2_895(14904, 128), 2);
    add_background_object(create_dvwalledge2_895(14904, 192), 2);
    add_background_object(create_dvwalledge2_895(14904, 256), 2);
    add_background_object(create_dvwalledge2_895(14904, 320), 2);
    add_background_object(create_dvwalledge2_895(14904, 384), 2);
    add_background_object(create_dvwalledge2_895(14904, 448), 2);
    add_background_object(create_dvwalledge2_895(14904, 512), 2);
    add_background_object(create_dvwalledge2_895(14904, 576), 2);
    add_background_object(create_dvwalledge2_895(14904, 640), 2);
    add_background_object(create_dvwalledge2_895(14904, 704), 2);
    add_background_object(create_dvceilingoverlay_915(14792, 752), 2);
    add_background_object(create_dvrockceiling_891(14792, 752), 2);
    add_background_object(create_dvrockceiling_891(14664, 752), 2);
    add_background_object(create_dvceilingoverlay_915(14664, 752), 2);
    add_background_object(create_dvwall4_485(14368, 584), 2);
    add_background_object(create_dvrockedge1_905(14400, 1104), 2);
    add_background_object(create_dvrockedge2_904(14432, 1104), 2);
    add_background_object(create_dvwall1_482(12920, 192), 2);
    add_background_object(create_dvwall2_886(13176, 256), 2);
    add_background_object(create_dvwall4_485(13160, 352), 2);
    add_background_object(create_dvwalledge2_895(13288, 320), 2);
    add_background_object(create_dvwalledge2_895(13288, 256), 2);
    add_background_object(create_dvwalledge2_895(13288, 384), 2);
    add_background_object(create_dvwall2_886(13176, 64), 2);
    add_background_object(create_dvwall2_886(13176, -128), 2);
    add_background_object(create_dvwall1_482(12920, 64), 2);
    add_background_object(create_dvwall1_482(12920, -128), 2);
    add_background_object(create_dvwalledge2_895(13288, 128), 2);
    add_background_object(create_dvwalledge2_895(13288, 64), 2);
    add_background_object(create_dvwalledge2_895(13288, 192), 2);
    add_background_object(create_dvwalledge2_895(13288, 0), 2);
    add_background_object(create_dvwall4_485(13088, 232), 2);
    add_background_object(create_levelbackdrop02_875(9656, 776), 2);
    add_background_object(create_levelbackdrop02_875(9720, 776), 2);
    add_background_object(create_dvwall8_877(9976, 448), 2);
    add_background_object(create_dvwall4_485(9888, 440), 2);
    add_background_object(create_dvwall4_485(9672, 392), 2);
    add_background_object(create_dvwall1_482(9976, 64), 2);
    add_background_object(create_dvwalledge2_895(10216, 64), 2);
    add_background_object(create_dvwalledge2_895(10216, 128), 2);
    add_background_object(create_dvwalledge2_895(10216, 192), 2);
    add_background_object(create_dvhalfpipe2_868(10784, 832), 2);
    add_background_object(create_dvhalfpipe2_868(10528, 832), 2);
    add_background_object(create_dvhalfpipe2_868(10656, 832), 2);
    add_background_object(create_dvhalfpipe1_867(10272, 832), 2);
    add_background_object(create_dvhalfpipe3_869(10912, 832), 2);
    add_background_object(create_dvrockslope2_910(11040, 1016), 2);
    add_background_object(create_dvrockslope2_910(10464, 1040), 2);
    add_background_object(create_dvrockslope2_910(10592, 1040), 2);
    add_background_object(create_dvrockslope2_910(10720, 1040), 2);
    add_background_object(create_dvrockslope2_910(10848, 1040), 2);
    add_background_object(create_dvwall6_903(9808, 1016), 2);
    add_background_object(create_dvwall6_903(9912, 1024), 2);
    add_background_object(create_dvrockslope2_910(10272, 1016), 2);
    add_background_object(create_dvrockslope4_901(9888, 1008), 2);
    add_background_object(create_dvrockslope4_900(9760, 1008), 2);
    add_background_object(create_dvrockedge1_905(10432, 1040), 2);
    add_background_object(create_dvrockedge2_904(10976, 1040), 2);
    add_background_object(create_dvwall6_903(9640, 1152), 2);
    add_background_object(create_dvrockslope4_901(11168, 1016), 2);
    add_background_object(create_dvrockslope4_900(12704, 1016), 2);
    add_background_object(create_dvrockslope2_910(11552, 1024), 2);
    add_background_object(create_dvwall9_889(12664, 712), 2);
    add_background_object(create_dvwall1_482(12664, -56), 2);
    add_background_object(create_dvwall1_482(12664, 136), 2);
    add_background_object(create_dvwall6_903(12864, 200), 2);
    add_background_object(create_dvwall4_485(12680, 608), 2);
    add_background_object(create_dvwalledge1_887(12664, 264), 2);
    add_background_object(create_dvwalledge1_887(12664, 200), 2);
    add_background_object(create_dvwalledge1_887(12664, 136), 2);
    add_background_object(create_dvwalledge1_887(12664, 72), 2);
    add_background_object(create_dvwalledge1_887(12664, 8), 2);
    add_background_object(create_dvwalledge1_887(12664, -56), 2);
    add_background_object(create_dvrockslope1_896(12320, 1032), 2);
    add_background_object(create_dvrockslope1_896(12640, 1024), 2);
    add_background_object(create_dvwall6_903(12176, 1040), 2);
    add_background_object(create_dvwall6_903(12176, 1144), 2);
    add_background_object(create_dvwall6_903(12464, 1048), 2);
    add_background_object(create_dvwall6_903(12448, 1144), 2);
    add_background_object(create_dvrockslope4_900(12512, 1024), 2);
    add_background_object(create_dvrockslope4_901(12064, 1016), 2);
    add_background_object(create_dvrockslope4_901(12192, 1024), 2);
    add_background_object(create_dvrockslope2_910(12384, 1032), 2);
    add_background_object(create_levelbackdrop10_898(11832, 976), 2);
    add_background_object(create_levelbackdrop10_898(11872, 936), 2);
    add_background_object(create_levelbackdrop13_884(11936, 936), 2);
    add_background_object(create_levelbackdrop13_884(12000, 992), 2);
    add_background_object(create_dvwall6_903(11792, 1024), 2);
    add_background_object(create_dvrockslope4_900(11680, 1016), 2);
    add_background_object(create_dvwall6_903(11872, 984), 2);
    add_background_object(create_dvwall6_903(11912, 1008), 2);
    add_background_object(create_dvrockslope10_911(11808, 920), 2);
    add_background_object(create_dvrockslope9_902(11936, 920), 2);
    add_background_object(create_dvrockslope4_901(10016, 1016), 2);
    add_background_object(create_dvrockslope4_900(10144, 1016), 2);
    add_background_object(create_dvrockslope4_900(11296, 1016), 2);
    add_background_object(create_dvrockslope4_901(11424, 1016), 2);
    add_background_object(create_levelbackdrop8_894(9592, 776), 2);
    add_background_object(create_dvrockedge1_905(9592, 768), 2);
    add_background_object(create_levelbackdrop02_875(9784, 776), 2);
    add_background_object(create_levelbackdrop02_875(9848, 776), 2);
    add_background_object(create_dvrockceiling_891(9784, 816), 2);
    add_background_object(create_levelbackdrop9_878(9720, 576), 2);
    add_background_object(create_dvwall4_485(9632, 512), 2);
    add_background_object(create_dvrockceiling_891(9784, 552), 2);
    add_background_object(create_dvwall1_482(9720, -128), 2);
    add_background_object(create_dvwall1_482(9464, -128), 2);
    add_background_object(create_dvwall3_873(9336, -128), 2);
    add_background_object(create_dvwall1_482(9976, -128), 2);
    add_background_object(create_dvwalledge2_895(10216, -128), 2);
    add_background_object(create_dvwalledge2_895(10216, -64), 2);
    add_background_object(create_dvwalledge2_895(10216, 0), 2);
    add_background_object(create_dvwalledge1_887(9336, 456), 2);
    add_background_object(create_dvwalledge1_887(9336, 392), 2);
    add_background_object(create_dvwalledge1_887(9336, 328), 2);
    add_background_object(create_dvwalledge1_887(9336, 264), 2);
    add_background_object(create_dvwalledge1_887(9336, 200), 2);
    add_background_object(create_dvwalledge1_887(9336, 136), 2);
    add_background_object(create_dvwalledge1_887(9336, 72), 2);
    add_background_object(create_dvwalledge1_887(9336, 8), 2);
    add_background_object(create_dvrockslope4_900(9624, 760), 2);
    add_background_object(create_dvrockslope2_910(9752, 760), 2);
    add_background_object(create_dvwalledge2_895(9896, 768), 2);
    add_background_object(create_dvrockedge2_904(9880, 760), 2);
    add_background_object(create_dvceilingoverlay_915(9784, 552), 2);
    add_background_object(create_dvrockceiling_891(9656, 816), 2);
    add_background_object(create_dvrockceiling_891(9784, 816), 2);
    add_background_object(create_dvwall6_903(10536, 488), 2);
    add_background_object(create_dvrockslope5_912(10608, 480), 2);
    add_background_object(create_dvrockceiling_891(10480, 592), 2);
    add_background_object(create_dvrockceiling_891(10560, 600), 2);
    add_background_object(create_dvrockslope9_902(10736, 576), 2);
    add_background_object(create_dvrockceiling_891(10744, 688), 2);
    add_background_object(create_dvfloorcurvesmallright_888(10416, 656), 2);
    add_background_object(create_levelbackdrop02_875(10416, 736), 2);
    add_background_object(create_levelbackdrop9_878(10480, 736), 2);
    add_background_object(create_levelbackdrop02_875(10480, 672), 2);
    add_background_object(create_levelbackdrop02_875(10352, 736), 2);
    add_background_object(create_dvrockedge2_904(10384, 720), 2);
    add_background_object(create_dvrockslope1_896(10320, 720), 2);
    add_background_object(create_dvwalledge1_887(10480, 584), 2);
    add_background_object(create_dvrockslope8_920(10480, 480), 2);
    add_background_object(create_dvwalledge1_887(10480, 624), 2);
    add_background_object(create_dvrockceiling_891(12792, 312), 2);
    add_background_object(create_dvceilingoverlay_915(12792, 312), 2);
    add_background_object(create_dvrockceiling_891(12664, 312), 2);
    add_background_object(create_dvceilingoverlay_915(12664, 312), 2);
    add_background_object(create_dvwalledge1_887(12920, 320), 2);
    add_background_object(create_dvrockceiling_891(12920, 368), 2);
    add_background_object(create_dvceilingoverlay_915(12920, 368), 2);
    add_background_object(create_dvwalledge1_887(13048, 448), 2);
    add_background_object(create_dvwalledge1_887(13048, 384), 2);
    add_background_object(create_dvwalledge1_887(13048, 504), 2);
    add_background_object(create_dvrockceiling_891(13048, 552), 2);
    add_background_object(create_dvceilingoverlay_915(13048, 552), 2);
    add_background_object(create_dvwalledge2_895(12904, 520), 2);
    add_background_object(create_dvrockedge2_904(12888, 512), 2);
    add_background_object(create_dvwall4_485(12592, 512), 2);
    add_background_object(create_levelbackdrop9_878(11776, 584), 2);
    add_background_object(create_levelbackdrop02_875(11712, 584), 2);
    add_background_object(create_levelbackdrop02_875(11648, 584), 2);
    add_background_object(create_dvfloorcurvesmallright_888(11112, 608), 2);
    add_background_object(create_dvrockceiling_891(11648, 624), 2);
    add_background_object(create_dvrockceiling_891(11832, 576), 2);
    add_background_object(create_dvwalledge1_887(11176, 560), 2);
    add_background_object(create_dvwall4_485(11232, 560), 2);
    add_background_object(create_dvrockedge1_905(11176, 552), 2);
    add_background_object(create_dvrockedge1_905(12032, 376), 2);
    add_background_object(create_dvrockslope1_896(11208, 552), 2);
    add_background_object(create_dvrockedge2_904(11272, 552), 2);
    add_background_object(create_dvrockedge2_904(12320, 376), 2);
    add_background_object(create_dvrockslope2_910(11872, 568), 2);
    add_background_object(create_dvrockslope2_910(12384, 568), 2);
    add_background_object(create_dvrockslope4_900(12064, 368), 2);
    add_background_object(create_dvrockslope4_900(11744, 568), 2);
    add_background_object(create_dvrockslope4_901(12192, 368), 2);
    add_background_object(create_levelbackdrop9_878(10288, 800), 2);
    add_background_object(create_dvrockedge2_904(10256, 784), 2);
    add_background_object(create_dvrockslope4_900(10000, 784), 2);
    add_background_object(create_dvrockslope2_910(10128, 784), 2);
    add_background_object(create_dvrockslope1_896(9936, 792), 2);
    add_background_object(create_dvrockceiling_891(9904, 840), 2);
    add_background_object(create_dvrockceiling_891(10040, 840), 2);
    add_background_object(create_dvrockceiling_891(10168, 840), 2);
    add_background_object(create_dvrockceiling_891(10352, 776), 2);
    add_background_object(create_dvwalledge1_887(9904, 792), 2);
    add_background_object(create_dvrockedge1_905(9904, 792), 2);
    add_background_object(create_dvwalledge1_887(10288, 736), 2);
    add_background_object(create_dvrockedge1_905(10288, 720), 2);
    add_background_object(create_dvrockedge2_904(12512, 568), 2);
    add_background_object(create_dvrockslope5_912(11424, 384), 2);
    add_background_object(create_dvrockslope1_896(11680, 576), 2);
    add_background_object(create_dvwalledge1_887(11304, 464), 2);
    add_background_object(create_dvwalledge1_887(11304, 400), 2);
    add_background_object(create_dvrockedge1_905(11264, 376), 2);
    add_background_object(create_dvwall6_903(11376, 440), 2);
    add_background_object(create_dvwall6_903(11472, 528), 2);
    add_background_object(create_dvrockslope4_901(11296, 376), 2);
    add_background_object(create_dvrockslope9_902(11552, 480), 2);
    add_background_object(create_dvladder_914(11224, 376), 2);
    add_background_object(create_dvladder_914(11224, 408), 2);
    add_background_object(create_dvladder_914(11224, 440), 2);
    add_background_object(create_dvladder_914(11224, 472), 2);
    add_background_object(create_dvrockedge1_905(11088, 672), 2);
    add_background_object(create_dvrockedge2_904(10864, 672), 2);
    add_background_object(create_dvrockedge2_904(11120, 672), 2);
    add_background_object(create_dvrockceiling_891(11152, 664), 2);
    add_background_object(create_dvrockceiling_891(11280, 664), 2);
    add_background_object(create_dvwall4_485(11328, 520), 2);
    add_background_object(create_dvrockceiling_891(11408, 664), 2);
    add_background_object(create_dvwall6_903(11392, 536), 2);
    add_background_object(create_dvrockslope4_900(12424, 208), 2);
    add_background_object(create_dvwalledge1_887(12392, 224), 2);
    add_background_object(create_dvrockedge1_905(12392, 216), 2);
    add_background_object(create_dvrockceiling_891(12392, 264), 2);
    add_background_object(create_dvladder_914(12352, 216), 2);
    add_background_object(create_dvladder_914(12352, 248), 2);
    add_background_object(create_dvladder_914(12352, 264), 2);
    add_background_object(create_dvwalledge1_887(12600, 464), 2);
    add_background_object(create_dvrockedge1_905(12600, 456), 2);
    add_background_object(create_dvwall6_903(12672, 464), 2);
    add_background_object(create_dvrockslope4_900(12632, 448), 2);
    add_background_object(create_dvrockslope11_906(12760, 448), 2);
    add_background_object(create_dvwalledge2_895(12568, 216), 2);
    add_background_object(create_dvrockceiling_891(12456, 264), 2);
    add_background_object(create_dvrockedge2_904(12552, 208), 2);
    add_background_object(create_levelbackdrop02_875(6456, 128), 2);
    add_background_object(create_levelbackdrop9_878(6520, 128), 2);
    add_background_object(create_levelbackdrop8_894(6392, 128), 2);
    add_background_object(create_dvwall3_873(6456, -64), 2);
    add_background_object(create_levelbackdrop02_875(6392, 64), 2);
    add_background_object(create_levelbackdrop02_875(6392, 0), 2);
    add_background_object(create_levelbackdrop02_875(6392, -64), 2);
    add_background_object(create_dvwall4_485(6416, -64), 2);
    add_background_object(create_dvwall4_485(6416, 56), 2);
    add_background_object(create_dvwall4_485(6456, 16), 2);
    add_background_object(create_dvgrass1_507(4488, 1272), 2);
    add_background_object(create_dvgrass2_508(4520, 1272), 2);
    add_background_object(create_dvgrass1_507(4552, 1368), 2);
    add_background_object(create_dvgrass2_508(4584, 1368), 2);
    add_background_object(create_dvgrass1_507(3968, 1392), 2);
    add_background_object(create_dvgrass2_508(4000, 1392), 2);
    add_background_object(create_dvgrass1_507(4608, 1456), 2);
    add_background_object(create_dvgrass2_508(4768, 1464), 2);
    add_background_object(create_dvgrass3_505(4640, 1456), 2);
    add_background_object(create_dvgrass4_506(3496, 2056), 2);
    add_background_object(create_dvgrass8_921(3496, 2224), 2);
    add_background_object(create_dvgrass7_922(4960, 1336), 2);
    add_background_object(create_dvgrass5_509(4832, 1336), 2);
    add_background_object(create_dvgrass5_509(5088, 1392), 2);
    add_background_object(create_dvgrass1_507(4800, 1344), 2);
    add_background_object(create_dvgrass5_509(2336, 1456), 2);
    add_background_object(create_dvgrass3_505(2464, 1456), 2);
    add_background_object(create_dvgrass2_508(4352, 1480), 2);
    add_background_object(create_dvgrass3_505(4224, 1472), 2);
    add_background_object(create_dvgrass2_508(2592, 1464), 2);
    add_background_object(create_dvgrass2_508(5216, 1392), 2);
    add_background_object(create_dvgrass1_507(3496, 1976), 2);
    add_background_object(create_dvgrass2_508(3528, 1976), 2);
    add_background_object(create_dvgrass3_505(3496, 2016), 2);
    add_background_object(create_dvgrass5_509(3496, 2088), 2);
    add_background_object(create_dvgrass6_504(3560, 1976), 2);
    add_background_object(create_dvgrass7_922(3496, 2128), 2);
    add_background_object(create_dvceilingoverlay_915(1344, 512), 2);
    add_background_object(create_dvceilingoverlay_915(1472, 512), 2);
    add_background_object(create_dvrockslope4_900(992, 520), 2);
    add_background_object(create_dvrockedge2_904(1120, 520), 2);
    add_background_object(create_dvceilingoverlay2_916(1224, 632), 2);
    add_background_object(create_dvceilingoverlay2_916(1248, 600), 2);
    add_background_object(create_dvceilingoverlay2_916(1280, 552), 2);
    add_background_object(create_dvceilingoverlay2_916(1280, 568), 2);
    add_background_object(create_dvrockceiling_891(1544, 512), 2);
    add_background_object(create_dvwall6_903(1528, -160), 2);
    add_background_object(create_dvwall6_903(9440, 512), 2);
    add_background_object(create_dvwall6_903(9344, 416), 2);
    add_background_object(create_dvwalledge1_887(13920, 896), 2);
    add_background_object(create_dvwall6_903(8056, 208), 2);
    add_background_object(create_dvrockedge2_904(8056, 192), 2);
    add_background_object(create_dvrockslope1_896(7992, 192), 2);
    add_background_object(create_dvwall1_482(1472, 1160), 2);
    add_background_object(create_dvwall1_482(1472, 1352), 2);
    add_background_object(create_dvwall1_482(1472, 1544), 2);
    add_background_object(create_levelbackdrop02_875(1728, 1168), 2);
    add_background_object(create_levelbackdrop02_875(1792, 1168), 2);
    add_background_object(create_levelbackdrop02_875(1856, 1192), 2);
    add_background_object(create_levelbackdrop02_875(1920, 1192), 2);
    add_background_object(create_levelbackdrop02_875(1728, 1232), 2);
    add_background_object(create_levelbackdrop02_875(1728, 1296), 2);
    add_background_object(create_levelbackdrop02_875(1792, 1232), 2);
    add_background_object(create_levelbackdrop02_875(1792, 1296), 2);
    add_background_object(create_dvwalledge2_895(1848, 1296), 2);
    add_background_object(create_dvwalledge2_895(1848, 1232), 2);
    add_background_object(create_dvrockceiling_891(1856, 1248), 2);
    add_background_object(create_dvwall1_482(1216, 1160), 2);
    add_background_object(create_dvrockslope1_896(7992, 376), 2);
    add_background_object(create_dvwall4_485(8328, 312), 2);
    add_background_object(create_dvwall6_903(8328, 424), 2);
    add_background_object(create_dvrockslope1_896(8064, 376), 2);
    add_background_object(create_dvrockceiling_891(9848, 552), 2);
    add_background_object(create_dvwall1_482(5888, 1136), 2);
    add_background_object(create_dvwall1_482(14208, 1488), 2);
    add_background_object(create_dvwall1_482(13696, 1488), 2);
    add_background_object(create_dvwall1_482(13952, 1488), 2);
    add_background_object(create_dvwall1_482(13440, 1520), 2);
    add_background_object(create_dvwall1_482(13184, 1520), 2);
    add_background_object(create_dvwall2_886(9976, 256), 2);
    add_background_object(create_dvwalledge2_895(10088, 384), 2);
    add_background_object(create_dvwall8_877(10104, 256), 2);
    add_background_object(create_dvwall4_485(10016, 248), 2);
    add_background_object(create_dvwall4_485(10088, 152), 2);
    add_background_object(create_dvwall4_485(392, 504), 2);
    add_background_object(create_dvrockslope5_912(448, 472), 2);
    add_background_object(create_dvwall4_485(1336, 784), 2);
    add_background_object(create_dvrockslope4_901(1248, 768), 2);
    add_background_object(create_dvrockedge2_904(1376, 776), 2);
    add_background_object(create_dvladder_914(5464, 936), 2);
    add_background_object(create_dvrockedge2_904(1952, 952), 2);
    add_background_object(create_dvrockslope4_900(1840, 952), 2);
    add_background_object(create_levelbackdrop02_875(1976, 504), 2);
    add_background_object(create_levelbackdrop02_875(2040, 568), 2);
    add_background_object(create_levelbackdrop02_875(1976, 568), 2);
    add_background_object(create_levelbackdrop13_884(2040, 504), 2);
    add_background_object(create_levelbackdrop13_884(2104, 568), 2);
    add_background_object(create_dvrockslope5_912(2016, 488), 2);
    add_background_object(create_dvwall2_886(1856, 496), 2);
    add_background_object(create_dvrockslope4_901(1888, 480), 2);
    add_background_object(create_dvrockedge1_905(1856, 480), 2);
    add_background_object(create_dvwalledge1_887(1856, 504), 2);
    add_background_object(create_dvwalledge1_887(1856, 568), 2);
    add_background_object(create_dvwalledge1_887(1856, 632), 2);
    add_background_object(create_levelbackdrop02_875(2200, 208), 2);
    add_background_object(create_dvwalledge1_887(2200, 208), 2);
    add_background_object(create_dvrockedge1_905(2200, 192), 2);
    add_background_object(create_dvrockedge2_904(2232, 192), 2);
    add_background_object(create_dvrockslope1_896(1976, 256), 2);
    add_background_object(create_dvrockedge1_905(1968, 256), 2);
    add_background_object(create_dvwalledge2_895(1904, 800), 2);
    add_background_object(create_dvwalledge2_895(1904, 736), 2);
    add_background_object(create_dvwalledge2_895(1904, 688), 2);
    add_background_object(create_levelbackdrop02_875(1856, 1160), 2);
    add_background_object(create_levelbackdrop02_875(1920, 1160), 2);
    add_background_object(create_dvwalledge2_895(1968, 1176), 2);
    add_background_object(create_dvwalledge2_895(1968, 1112), 2);
    add_background_object(create_dvfloorcurvesmallright_888(3648, 1208), 2);
    add_background_object(create_dvrockceiling_891(2048, 696), 2);
    add_background_object(create_dvwall1_482(1872, 592), 2);
    add_background_object(create_dvwall4_485(2000, 568), 2);
    add_background_object(create_dvwall4_485(1904, 568), 2);
    add_background_object(create_dvrockceiling_891(1872, 768), 2);
    add_background_object(create_dvrockceiling_891(2000, 768), 2);
    add_background_object(create_dvbackwall_866(1840, 1360), 2);
    add_background_object(create_dvwall1_482(1728, 1360), 2);
    add_background_object(create_dvgrass1_507(1856, 1360), 2);
    add_background_object(create_levelbackdrop02_875(1984, 1360), 2);
    add_background_object(create_dvgrass2_508(2016, 1360), 2);
    add_background_object(create_dvgrass4_506(1888, 1360), 2);
    add_background_object(create_dvwalledge2_895(2032, 1384), 2);
    add_background_object(create_dvwall1_482(1984, 1416), 2);
    add_background_object(create_dvwall6_903(2192, 1448), 2);
    add_background_object(create_dvgrass7_922(2208, 1400), 2);
    add_background_object(create_dvgrass1_507(2048, 1408), 2);
    add_background_object(create_dvtree3_897(2008, 1256), 2);
    add_background_object(create_dvgrass5_509(2080, 1400), 2);
    add_background_object(create_levelbackdrop02_875(2128, 640), 2);
    add_background_object(create_levelbackdrop13_884(2128, 592), 2);
    add_background_object(create_levelbackdrop13_884(2192, 648), 2);
    add_background_object(create_dvrockslope9_902(2144, 584), 2);
    add_background_object(create_dvrockceiling_891(2176, 696), 2);
    add_background_object(create_dvwall1_482(2520, 208), 2);
    add_background_object(create_dvrockceiling_891(2600, 384), 2);
    add_background_object(create_levelbackdrop02_875(2096, 272), 2);
    add_background_object(create_dvrockslope4_900(2040, 248), 2);
    add_background_object(create_levelbackdrop02_875(2160, 272), 2);
    add_background_object(create_dvrockedge2_904(2168, 248), 2);
    add_background_object(create_levelbackdrop02_875(2096, 336), 2);
    add_background_object(create_levelbackdrop02_875(2160, 336), 2);
    add_background_object(create_levelbackdrop02_875(2224, 336), 2);
    add_background_object(create_levelbackdrop02_875(2224, 272), 2);
    add_background_object(create_dvwall1_482(2264, 208), 2);
    add_background_object(create_dvwalledge2_895(2264, 136), 2);
    add_background_object(create_dvrockceiling_891(2344, 384), 2);
    add_background_object(create_dvrockceiling_891(2216, 384), 2);
    add_background_object(create_dvrockceiling_891(2088, 384), 2);
    add_background_object(create_dvwall1_482(2264, -176), 2);
    add_background_object(create_dvwalledge2_895(2264, -48), 2);
    add_background_object(create_dvwall1_482(2520, -176), 2);
    add_background_object(create_dvrockceiling_891(2472, 384), 2);
    add_background_object(create_dvwall1_482(3520, 1480), 2);
    add_background_object(create_dvwall4_485(3424, 1480), 2);
    add_background_object(create_dvwall1_482(3776, 1480), 2);
    add_background_object(create_dvwall1_482(3712, 1160), 2);
    add_background_object(create_dvwall4_485(3688, 1272), 2);
    add_background_object(create_dvrockedge1_905(3712, 1160), 2);
    add_background_object(create_dvrockslope4_900(3744, 1152), 2);
    add_background_object(create_dvrockedge2_904(3936, 1296), 2);
    add_background_object(create_dvrockslope1_896(3872, 1152), 2);
    add_background_object(create_dvrockedge2_904(3616, 1272), 2);
    add_background_object(create_levelbackdrop02_875(3216, 656), 2);
    add_background_object(create_levelbackdrop02_875(3280, 656), 2);
    add_background_object(create_dvrockedge1_905(3216, 648), 2);
    add_background_object(create_levelbackdrop02_875(3344, 656), 2);
    add_background_object(create_dvrockceiling_891(3216, 696), 2);
    add_background_object(create_dvrockceiling_891(3280, 696), 2);
    add_background_object(create_dvtree2_883(3952, 688), 2);
    add_background_object(create_dvwall3_873(4264, 480), 2);
    add_background_object(create_levelbackdrop02_875(3968, 872), 2);
    add_background_object(create_levelbackdrop02_875(4032, 872), 2);
    add_background_object(create_levelbackdrop02_875(4200, 744), 2);
    add_background_object(create_levelbackdrop02_875(4200, 808), 2);
    add_background_object(create_dvwalledge1_887(3968, 872), 2);
    add_background_object(create_dvwalledge1_887(4200, 744), 2);
    add_background_object(create_dvwalledge1_887(4264, 552), 2);
    add_background_object(create_dvrockedge1_905(3968, 856), 2);
    add_background_object(create_dvrockedge1_905(4200, 728), 2);
    add_background_object(create_dvfloorcurvesmallright_888(4136, 800), 2);
    add_background_object(create_dvwall6_903(4264, 816), 2);
    add_background_object(create_dvwalledge2_895(4376, 680), 2);
    add_background_object(create_dvwalledge2_895(4376, 616), 2);
    add_background_object(create_dvwall1_482(3904, 1480), 2);
    add_background_object(create_dvgrass1_507(4000, 1464), 2);
    add_background_object(create_dvgrass6_504(4032, 1464), 2);
    add_background_object(create_dvgrass3_505(4096, 1464), 2);
    add_background_object(create_dvwalledge2_895(3952, 1288), 2);
    add_background_object(create_dvwalledge2_895(3952, 1224), 2);
    add_background_object(create_dvwalledge2_895(3952, 1160), 2);
    add_background_object(create_dvrockedge2_904(3936, 1152), 2);
    add_background_object(create_levelbackdrop02_875(3904, 1416), 2);
    add_background_object(create_levelbackdrop02_875(3904, 1352), 2);
    add_background_object(create_dvwalledge2_895(3952, 1352), 2);
    add_background_object(create_dvbackrock3_881(3248, 608), 2);
    add_background_object(create_dvrockslope4_901(3248, 648), 2);
    add_background_object(create_dvrockedge2_904(3376, 656), 2);
    add_background_object(create_dvbackrock2_890(6576, 984), 2);
    add_background_object(create_levelbackdrop02_875(6336, 920), 2);
    add_background_object(create_levelbackdrop02_875(6336, 968), 2);
    add_background_object(create_levelbackdrop12_880(6528, 1064), 2);
    add_background_object(create_dvwall6_885(6336, 904), 2);
    add_background_object(create_dvwall1_482(6264, 1040), 2);
    add_background_object(create_dvwalledge1_887(6336, 1160), 2);
    add_background_object(create_dvwall6_903(6248, 896), 2);
    add_background_object(create_dvrockslope5_912(6336, 888), 2);
    add_background_object(create_dvrockceiling_891(6176, 792), 2);
    add_background_object(create_dvceilingoverlay_915(6176, 792), 2);
    add_background_object(create_dvrockceiling_891(6304, 792), 2);
    add_background_object(create_dvceilingoverlay_915(6304, 792), 2);
    add_background_object(create_dvrockceiling_891(6432, 792), 2);
    add_background_object(create_dvceilingoverlay_915(6432, 792), 2);
    add_background_object(create_dvfloorcurvesmallright_888(6656, 1016), 2);
    add_background_object(create_dvrockslope2_910(6856, 864), 2);
    add_background_object(create_dvwall1_482(6520, 1080), 2);
    add_background_object(create_dvrockedge2_904(6656, 1080), 2);
    add_background_object(create_dvwall1_482(4312, 928), 2);
    add_background_object(create_dvwall4_485(6080, 584), 2);
    add_background_object(create_dvwall1_482(4264, 288), 2);
    add_background_object(create_dvwall1_482(4264, 96), 2);
    add_background_object(create_dvwall1_482(4264, -96), 2);
    add_background_object(create_dvwall1_482(4416, 1672), 2);
    add_background_object(create_dvwall1_482(4160, 1672), 2);
    add_background_object(create_dvwall1_482(3904, 1672), 2);
    add_background_object(create_dvwall1_482(3648, 1672), 2);
    add_background_object(create_dvwall1_482(5184, 1600), 2);
    add_background_object(create_dvwall1_482(6144, 1136), 2);
    add_background_object(create_dvwall4_485(6336, 1096), 2);
    add_background_object(create_dvwall4_485(4520, 992), 2);
    add_background_object(create_dvrockceiling_891(4400, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4400, 1104), 2);
    add_background_object(create_dvrockceiling_891(4528, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4528, 1104), 2);
    add_background_object(create_levelbackdrop02_875(4096, 936), 2);
    add_background_object(create_levelbackdrop02_875(4096, 880), 2);
    add_background_object(create_dvrockedge2_904(4128, 864), 2);
    add_background_object(create_dvrockslope4_901(4000, 856), 2);
    add_background_object(create_dvwall9_889(3968, 936), 2);
    add_background_object(create_dvwall1_482(4160, 880), 2);
    add_background_object(create_dvwall6_903(4192, 848), 2);
    add_background_object(create_dvwall6_903(4368, 904), 2);
    add_background_object(create_dvwall3_873(4264, 672), 2);
    add_background_object(create_dvwall4_485(4216, 736), 2);
    add_background_object(create_dvrockedge2_904(4232, 728), 2);
    add_background_object(create_dvwall1_482(4296, 616), 2);
    add_background_object(create_dvwall6_903(4296, 600), 2);
    add_background_object(create_dvwall6_903(4352, 528), 2);
    add_background_object(create_dvwall6_903(4368, 424), 2);
    add_background_object(create_dvwalledge1_887(4264, 616), 2);
    add_background_object(create_dvwalledge1_887(4264, 680), 2);
    add_background_object(create_dvwalledge1_887(4264, 744), 2);
    add_background_object(create_levelbackdrop02_875(4096, 1000), 2);
    add_background_object(create_dvwall4_485(4056, 904), 2);
    add_background_object(create_levelbackdrop02_875(4288, 1056), 2);
    add_background_object(create_dvwall2_886(4136, 152), 2);
    add_background_object(create_dvwall2_886(4136, 336), 2);
    add_background_object(create_dvwall2_886(4136, -40), 2);
    add_background_object(create_dvwalledge1_887(4136, 256), 2);
    add_background_object(create_dvwalledge1_887(4136, 312), 2);
    add_background_object(create_dvwalledge1_887(4136, 376), 2);
    add_background_object(create_dvwalledge1_887(4136, 0), 2);
    add_background_object(create_dvwalledge1_887(4136, 64), 2);
    add_background_object(create_dvwalledge1_887(4136, 128), 2);
    add_background_object(create_dvwalledge1_887(4136, 192), 2);
    add_background_object(create_dvwalledge1_887(4136, 440), 2);
    add_background_object(create_dvwall9_889(4136, 504), 2);
    add_background_object(create_dvwalledge1_887(4136, 456), 2);
    add_background_object(create_dvwall4_485(4192, 464), 2);
    add_background_object(create_dvwall3_873(5816, 352), 2);
    add_background_object(create_dvwall6_903(5840, 424), 2);
    add_background_object(create_dvrockslope4_901(5968, 328), 2);
    add_background_object(create_dvwall2_886(2728, 208), 2);
    add_background_object(create_dvwall2_886(2728, 16), 2);
    add_background_object(create_dvwall2_886(2728, -176), 2);
    add_background_object(create_dvrockedge1_905(6824, 864), 2);
    add_background_object(create_dvwall1_482(6776, 944), 2);
    add_background_object(create_dvwall1_482(6400, 1224), 2);
    add_background_object(create_dvwall1_482(6656, 1136), 2);
    add_background_object(create_dvwall1_482(6912, 944), 2);
    add_background_object(create_dvrockslope4_901(6816, 936), 2);
    add_background_object(create_dvrockslope2_910(6944, 944), 2);
    add_background_object(create_dvrockslope2_910(7040, 944), 2);
    add_background_object(create_dvwall1_482(7040, 1328), 2);
    add_background_object(create_dvwall1_482(7424, 1144), 2);
    add_background_object(create_dvrockslope4_901(7424, 1136), 2);
    add_background_object(create_dvwall1_482(7744, 1016), 2);
    add_background_object(create_dvwall1_482(7936, 1144), 2);
    add_background_object(create_dvwall4_485(6488, 1080), 2);
    add_background_object(create_dvwall4_485(6656, 1128), 2);
    add_background_object(create_dvwall4_485(6888, 1016), 2);
    add_background_object(create_dvwalledge1_887(6936, 816), 2);
    add_background_object(create_dvwall1_482(8192, 1144), 2);
    add_background_object(create_dvwall6_903(8200, 712), 2);
    add_background_object(create_dvwall1_482(8256, 952), 2);
    add_background_object(create_dvwall1_482(8000, 816), 2);
    add_background_object(create_dvwall1_482(8256, 816), 2);
    add_background_object(create_dvwall1_482(8800, 1016), 2);
    add_background_object(create_dvwall1_482(8544, 1016), 2);
    add_background_object(create_dvwall1_482(8512, 824), 2);
    add_background_object(create_dvwall1_482(8768, 824), 2);
    add_background_object(create_dvrockslope2_910(8928, 824), 2);
    add_background_object(create_dvrockslope4_901(8800, 816), 2);
    add_background_object(create_dvrockslope4_900(8672, 816), 2);
    add_background_object(create_dvrockslope2_910(8544, 824), 2);
    add_background_object(create_dvrockedge1_905(8528, 824), 2);
    add_background_object(create_dvwall6_903(8376, 792), 2);
    add_background_object(create_dvwall6_903(8488, 1000), 2);
    add_background_object(create_dvwall6_903(8616, 1000), 2);
    add_background_object(create_dvwall6_903(8744, 1000), 2);
    add_background_object(create_dvwall6_903(8872, 1000), 2);
    add_background_object(create_dvwall6_903(8088, 792), 2);
    add_background_object(create_dvwall6_903(8216, 792), 2);
    add_background_object(create_dvwall6_903(8336, 784), 2);
    add_background_object(create_dvwall1_482(8000, 952), 2);
    add_background_object(create_dvrockedge2_904(7904, 1016), 2);
    add_background_object(create_dvwalledge1_887(8000, 1016), 2);
    add_background_object(create_dvwalledge1_887(8000, 952), 2);
    add_background_object(create_dvwalledge1_887(8000, 888), 2);
    add_background_object(create_dvwalledge1_887(8000, 824), 2);
    add_background_object(create_dvwall1_482(7080, 640), 2);
    add_background_object(create_dvwall1_482(7448, 688), 2);
    add_background_object(create_dvrockceiling_891(7320, 816), 2);
    add_background_object(create_dvceilingoverlay_915(7320, 816), 2);
    add_background_object(create_dvrockceiling_891(7448, 864), 2);
    add_background_object(create_dvceilingoverlay_915(7448, 864), 2);
    add_background_object(create_dvrockceiling_891(7576, 864), 2);
    add_background_object(create_dvceilingoverlay_915(7576, 864), 2);
    add_background_object(create_dvwall4_485(7648, 680), 2);
    add_background_object(create_dvrockceiling_891(7704, 800), 2);
    add_background_object(create_dvceilingoverlay_915(7704, 800), 2);
    add_background_object(create_dvrockceiling_891(7872, 800), 2);
    add_background_object(create_dvceilingoverlay_915(7872, 800), 2);
    add_background_object(create_dvtree2_883(7752, 848), 2);
    add_background_object(create_levelbackdrop02_875(7936, 952), 2);
    add_background_object(create_dvrockedge1_905(7936, 944), 2);
    add_background_object(create_dvrockedge2_904(7968, 944), 2);
    add_background_object(create_dvbackrock1_882(7584, 1016), 2);
    add_background_object(create_dvrockslope4_900(7552, 1136), 2);
    add_background_object(create_dvfloorcurvesmallright_888(7680, 1072), 2);
    add_background_object(create_dvwall1_482(7680, 1144), 2);
    add_background_object(create_dvrockedge2_904(7680, 1136), 2);
    add_background_object(create_dvwall1_482(5432, 544), 2);
    add_background_object(create_dvwall6_903(5936, 368), 2);
    add_background_object(create_dvwall2_886(5304, 544), 2);
    add_background_object(create_dvwall6_885(7168, 944), 2);
    add_background_object(create_dvrockslope5_912(7168, 944), 2);
    add_background_object(create_levelbackdrop02_875(7168, 1072), 2);
    add_background_object(create_levelbackdrop02_875(7232, 1072), 2);
    add_background_object(create_levelbackdrop13_884(7296, 1072), 2);
    add_background_object(create_dvrockslope9_902(7296, 1040), 2);
    add_background_object(create_dvwall6_903(7160, 1040), 2);
    add_background_object(create_dvrockceiling_891(7376, 976), 2);
    add_background_object(create_dvceilingoverlay_915(7376, 976), 2);
    add_background_object(create_dvrockceiling_891(7504, 976), 2);
    add_background_object(create_dvceilingoverlay_915(7504, 976), 2);
    add_background_object(create_dvrockceiling_891(7568, 968), 2);
    add_background_object(create_dvceilingoverlay_915(7568, 968), 2);
    add_background_object(create_dvrockedge2_904(7664, 960), 2);
    add_background_object(create_dvrockslope4_900(7536, 960), 2);
    add_background_object(create_dvrockslope2_910(7408, 968), 2);
    add_background_object(create_dvrockedge1_905(7376, 968), 2);
    add_background_object(create_levelbackdrop9_878(7128, 824), 2);
    add_background_object(create_dvceilingoverlay_915(7192, 816), 2);
    add_background_object(create_dvrockceiling_891(7192, 816), 2);
    add_background_object(create_dvwalledge1_887(7448, 808), 2);
    add_background_object(create_dvwalledge1_887(7448, 680), 2);
    add_background_object(create_dvwalledge1_887(7744, 1008), 2);
    add_background_object(create_dvwalledge1_887(7744, 1072), 2);
    add_background_object(create_levelbackdrop02_875(7064, 824), 2);
    add_background_object(create_dvrockceiling_891(7000, 864), 2);
    add_background_object(create_dvrockceiling_891(7000, 864), 2);
    add_background_object(create_dvceilingoverlay_915(7000, 864), 2);
    add_background_object(create_dvrockceiling_891(6936, 864), 2);
    add_background_object(create_dvrockceiling_891(6936, 864), 2);
    add_background_object(create_dvceilingoverlay_915(6936, 864), 2);
    add_background_object(create_levelbackdrop02_875(7336, 696), 2);
    add_background_object(create_levelbackdrop02_875(7400, 696), 2);
    add_background_object(create_levelbackdrop02_875(7336, 760), 2);
    add_background_object(create_levelbackdrop02_875(7400, 760), 2);
    add_background_object(create_dvwalledge1_887(7448, 760), 2);
    add_background_object(create_dvwalledge1_887(7448, 696), 2);
    add_background_object(create_dvwall6_903(7328, 1192), 2);
    add_background_object(create_dvwall6_903(7328, 648), 2);
    add_background_object(create_dvwall6_903(7048, 720), 2);
    add_background_object(create_levelbackdrop02_875(6720, 952), 2);
    add_background_object(create_levelbackdrop02_875(6720, 1016), 2);
    add_background_object(create_dvrockedge1_905(6720, 936), 2);
    add_background_object(create_dvrockslope1_896(6752, 936), 2);
    add_background_object(create_dvwalledge1_887(6720, 960), 2);
    add_background_object(create_dvwalledge1_887(6720, 1024), 2);
    add_background_object(create_dvwalledge1_887(6720, 1088), 2);
    add_background_object(create_dvrockslope1_896(6592, 1080), 2);
    add_background_object(create_dvwall6_903(6240, 1008), 2);
    add_background_object(create_dvwall4_485(6424, 1056), 2);
    add_background_object(create_levelbackdrop13_884(6464, 984), 2);
    add_background_object(create_dvrockslope9_902(6464, 984), 2);
    add_background_object(create_dvwall4_485(6360, 1008), 2);
    add_background_object(create_dvwall4_485(6112, 1032), 2);
    add_background_object(create_levelbackdrop02_875(6144, 952), 2);
    add_background_object(create_levelbackdrop02_875(6144, 1016), 2);
    add_background_object(create_dvrockedge2_904(6144, 928), 2);
    add_background_object(create_levelbackdrop02_875(6192, 912), 2);
    add_background_object(create_dvwalledge1_887(6176, 912), 2);
    add_background_object(create_dvrockedge1_905(6176, 888), 2);
    add_background_object(create_dvrockslope2_910(6208, 888), 2);
    add_background_object(create_dvwall6_903(6184, 960), 2);
    add_background_object(create_dvwall4_485(1936, 1432), 2);
    add_background_object(create_dvwall4_485(1840, 1112), 2);
    add_background_object(create_dvwall4_485(1728, 1120), 2);
    add_background_object(create_dvwall4_485(1800, 656), 2);
    add_background_object(create_dvwall4_485(2048, 272), 2);
    add_background_object(create_dvwall4_485(2240, 272), 2);
    add_background_object(create_dvwall4_485(1888, 1520), 2);
    add_background_object(create_dvwall4_485(3816, 1344), 2);
    add_background_object(create_dvrockceiling_891(5432, 712), 2);
    add_background_object(create_dvrockceiling_891(5560, 712), 2);
    add_background_object(create_dvceilingoverlay_915(5432, 712), 2);
    add_background_object(create_dvceilingoverlay_915(5560, 712), 2);
    add_background_object(create_dvrockceiling_891(5688, 712), 2);
    add_background_object(create_dvceilingoverlay_915(5688, 712), 2);
    add_background_object(create_dvwalledge1_887(5304, 544), 2);
    add_background_object(create_dvwalledge1_887(5304, 608), 2);
    add_background_object(create_dvwalledge1_887(5304, 672), 2);
    add_background_object(create_dvrockceiling_891(5304, 712), 2);
    add_background_object(create_dvceilingoverlay_915(5304, 712), 2);
    add_background_object(create_dvrockedge1_905(5240, 536), 2);
    add_background_object(create_dvladder_914(5360, 392), 2);
    add_background_object(create_dvladder_914(5360, 360), 2);
    add_background_object(create_dvladder_914(5360, 328), 2);
    add_background_object(create_dvladder_914(5360, 424), 2);
    add_background_object(create_dvladder_914(5360, 456), 2);
    add_background_object(create_dvwall4_485(5376, 576), 2);
    add_background_object(create_dvwall4_485(5744, 424), 2);
    add_background_object(create_dvrockceiling_891(7776, 800), 2);
    add_background_object(create_dvceilingoverlay_915(7776, 800), 2);
    add_background_object(create_dvwalledge2_895(7688, 800), 2);
    add_background_object(create_dvwalledge2_895(7688, 736), 2);
    add_background_object(create_dvwall3_873(5432, 352), 2);
    add_background_object(create_dvwalledge1_887(5432, 328), 2);
    add_background_object(create_dvwalledge1_887(5432, 392), 2);
    add_background_object(create_dvtree4_874(5528, 200), 2);
    add_background_object(create_dvbackrock2_890(5664, 176), 2);
    add_background_object(create_dvbackrock3_881(5800, 288), 2);
    add_background_object(create_dvrockedge1_905(5816, 336), 2);
    add_background_object(create_dvrockslope4_900(5848, 328), 2);
    add_background_object(create_levelbackdrop02_875(5560, 288), 2);
    add_background_object(create_levelbackdrop02_875(5624, 288), 2);
    add_background_object(create_levelbackdrop02_875(5688, 288), 2);
    add_background_object(create_levelbackdrop02_875(5752, 288), 2);
    add_background_object(create_dvrockslope1_896(5720, 264), 2);
    add_background_object(create_dvrockslope4_900(5592, 264), 2);
    add_background_object(create_dvwalledge1_887(5560, 296), 2);
    add_background_object(create_dvrockedge1_905(5560, 272), 2);
    add_background_object(create_dvwalledge2_895(5800, 288), 2);
    add_background_object(create_dvrockedge2_904(5784, 264), 2);
    add_background_object(create_dvtree4_874(5288, 160), 2);
    add_background_object(create_dvrockslope4_901(5432, 328), 2);
    add_background_object(create_dvrockedge1_905(5400, 328), 2);
    add_background_object(create_dvwall1_482(5560, 352), 2);
    add_background_object(create_dvrockedge2_904(7776, 992), 2);
    add_background_object(create_dvrockedge1_905(7808, 1016), 2);
    add_background_object(create_dvrockedge1_905(7744, 992), 2);
    add_background_object(create_dvrockslope1_896(7840, 1016), 2);
    add_background_object(create_dvrockedge2_904(5032, 536), 2);
    add_background_object(create_dvwall1_482(4520, 96), 2);
    add_background_object(create_dvwall1_482(4520, -88), 2);
    add_background_object(create_dvrockslope4_900(4920, 536), 2);
    add_background_object(create_dvwalledge2_895(4920, 472), 2);
    add_background_object(create_dvwalledge2_895(4920, 536), 2);
    add_background_object(create_dvbackrock1_882(4752, 344), 2);
    add_background_object(create_dvbackrock3_881(4784, 416), 2);
    add_background_object(create_dvrockedge2_904(4904, 464), 2);
    add_background_object(create_dvrockslope1_896(4840, 464), 2);
    add_background_object(create_dvrockslope1_896(4776, 464), 2);
    add_background_object(create_dvwall1_482(4520, 288), 2);
    add_background_object(create_dvwalledge2_895(4760, 0), 2);
    add_background_object(create_dvwalledge2_895(4760, 64), 2);
    add_background_object(create_dvwalledge2_895(4760, 128), 2);
    add_background_object(create_dvwalledge2_895(4760, 192), 2);
    add_background_object(create_dvwalledge2_895(4760, 256), 2);
    add_background_object(create_dvwalledge2_895(4760, 312), 2);
    add_background_object(create_dvwalledge2_895(4760, 368), 2);
    add_background_object(create_dvwalledge2_895(4760, 424), 2);
    add_background_object(create_dvrockedge1_905(4760, 464), 2);
    add_background_object(create_dvbackrock3_881(5312, 496), 2);
    add_background_object(create_dvwalledge1_887(5432, 456), 2);
    add_background_object(create_dvwalledge1_887(5432, 520), 2);
    add_background_object(create_dvrockslope1_896(5368, 544), 2);
    add_background_object(create_dvrockslope4_901(5272, 536), 2);
    add_background_object(create_dvwall1_482(7552, 1336), 2);
    add_background_object(create_dvwall1_482(7808, 1336), 2);
    add_background_object(create_dvwall1_482(2240, 1672), 2);
    add_background_object(create_dvwall1_482(2496, 1672), 2);
    add_background_object(create_dvwall1_482(2752, 1672), 2);
    add_background_object(create_dvwall1_482(3008, 1672), 2);
    add_background_object(create_dvwall1_482(3264, 1672), 2);
    add_background_object(create_dvwall2_886(3520, 1672), 2);
    add_background_object(create_dvwall1_482(5888, 1328), 2);
    add_background_object(create_dvwall1_482(6144, 1328), 2);
    add_background_object(create_dvwall1_482(6656, 1328), 2);
    add_background_object(create_dvwall2_886(6912, 1328), 2);
    add_background_object(create_levelbackdrop02_875(5824, 1328), 2);
    add_background_object(create_levelbackdrop02_875(5824, 1392), 2);
    add_background_object(create_levelbackdrop02_875(5824, 1456), 2);
    add_background_object(create_dvceilingoverlay_915(4080, 1048), 2);
    add_background_object(create_dvrockceiling_891(4080, 1048), 2);
    add_background_object(create_dvceilingoverlay_915(4208, 1048), 2);
    add_background_object(create_dvrockceiling_891(4208, 1048), 2);
    add_background_object(create_dvwalledge1_887(4280, 1056), 2);
    add_background_object(create_dvwall6_903(4272, 968), 2);
    add_background_object(create_dvrockceiling_891(4280, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4280, 1104), 2);
    add_background_object(create_dvwall6_903(7016, 648), 2);
    add_background_object(create_dvrockedge1_905(2752, 680), 2);
    add_background_object(create_dvhalfpipe3_869(2656, 496), 2);
    add_background_object(create_dvwalledge2_895(2840, -48), 2);
    add_background_object(create_dvwalledge2_895(2840, 16), 2);
    add_background_object(create_dvwalledge2_895(2840, 80), 2);
    add_background_object(create_dvwalledge2_895(2840, 144), 2);
    add_background_object(create_dvwalledge2_895(2840, 208), 2);
    add_background_object(create_dvwalledge2_895(2840, 272), 2);
    add_background_object(create_dvwalledge2_895(2840, 336), 2);
    add_background_object(create_dvrockceiling_891(2728, 384), 2);
    add_object(create_yellowspringup_434(14448, 1000), 2);
    add_object(create_minibossrailing_923(14432, 776), 2);
    add_object(create_minibossrailing_923(14432, 824), 2);
    add_object(create_minibossrailing_923(14432, 872), 2);
    add_object(create_minibossrailing_923(14432, 920), 2);
    add_object(create_minibossrailing_923(14432, 968), 2);
    add_object(create_minibossbarrier_924(14432, 776), 2);
    add_object(create_minibosswretchnidrightleg2_925(14455, 915), 2);
    add_object(create_minibosswretchnidrightleg5_926(14455, 859), 2);
    add_object(create_minibosswretchnidrightleg3_927(14455, 923), 2);
    add_object(create_minibosswretchnidrightleg6_928(14455, 851), 2);
    add_object(create_minibosswretchnidrightleg1_929(14455, 907), 2);
    add_object(create_minibosswretchnidrightleg4_930(14455, 867), 2);
    add_object(create_minibosswretchnidleftleg1_931(14375, 907), 2);
    add_object(create_minibosswretchnidleftleg4_932(14375, 867), 2);
    add_object(create_minibosswretchnidleftleg2_933(14375, 915), 2);
    add_object(create_minibosswretchnidleftleg5_934(14375, 859), 2);
    add_object(create_minibosswretchnidleftleg3_935(14375, 923), 2);
    add_object(create_minibosswretchnidleftleg6_936(14375, 851), 2);
    add_object(create_fronttree_937(8952, 496), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(14992, 85), 2);
    add_object(create_playerstartingpoint_358(53, 429), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_enemyturretus_938(1233, 437), 2);
    add_object(create_objectcrystal_279(725, 250), 2);
    add_object(create_objectcrystal_279(757, 218), 2);
    add_object(create_levelvalleyplatform1_939(688, 280), 2);
    add_object(create_levelmovingplatform2_940(1984, 1072), 2);
    add_object(create_halfcorkscrewleft_941(2328, 679), 2);
    add_object(create_halfcorkscrewright_942(2856, 679), 2);
    add_object(create_layerchangeswitch_404(2432, 592), 2);
    add_object(create_layerchangeswitch_404(2736, 592), 2);
    add_object(create_monitorrings_407(2168, 216), 2);
    add_object(create_objectcrystal_279(789, 250), 2);
    add_object(create_objectcrystal_279(1621, 370), 2);
    add_object(create_objectcrystal_279(1669, 370), 2);
    add_object(create_objectcrystal_279(1645, 346), 2);
    add_object(create_levelvalleyplatform1_939(1488, 248), 2);
    add_object(create_objectcrystal_279(1317, 746), 2);
    add_object(create_objectcrystal_279(1269, 746), 2);
    add_object(create_yellowspringright_435(1216, 736), 2);
    add_object(create_enemyturretus_938(4775, 1440), 2);
    add_object(create_enemyturretus_938(4519, 1248), 2);
    add_object(create_enemygansekijr_943(799, 116), 2);
    add_object(create_enemydragonfly_944(2295, 1357), 2);
    add_object(create_levelvalleyplatform1_939(4200, 1304), 2);
    add_object(create_yellowspringupleft_432(5600, 1088), 2);
    add_object(create_yellowspringup_434(3968, 1376), 2);
    add_object(create_objectcrystal_279(2781, 1306), 2);
    add_object(create_objectcrystal_279(2853, 1306), 2);
    add_object(create_objectcrystal_279(2725, 1330), 2);
    add_object(create_objectcrystal_279(2677, 1370), 2);
    add_object(create_objectcrystal_279(2901, 1330), 2);
    add_object(create_objectcrystal_279(2949, 1378), 2);
    add_object(create_objectcrystal_279(5109, 1378), 2);
    add_object(create_objectcrystal_279(4965, 1314), 2);
    add_object(create_objectcrystal_279(5013, 1338), 2);
    add_object(create_objectcrystal_279(5061, 1362), 2);
    add_object(create_laddertop_357(932, 191), 2);
    add_object(create_laddertop_357(5484, 831), 2);
    add_object(create_enemydragonfly_944(1559, 140), 2);
    add_object(create_enemydragonfly_944(2559, 797), 2);
    add_object(create_enemydragonfly_944(2447, 1333), 2);
    add_object(create_enemydragonfly_944(4879, 1277), 2);
    add_object(create_objectcrystal_279(1725, 178), 2);
    add_object(create_objectcrystal_279(1885, 186), 2);
    add_object(create_objectcrystal_279(1845, 178), 2);
    add_object(create_objectcrystal_279(1805, 178), 2);
    add_object(create_objectcrystal_279(1685, 186), 2);
    add_object(create_objectcrystal_279(1765, 178), 2);
    add_object(create_enemygansekijr_943(2231, 180), 2);
    add_object(create_gimmickbridge12logs_353(10896, 616), 2);
    add_object(create_frontrock1_945(9052, 640), 2);
    add_object(create_frontrock1_945(9020, 696), 2);
    add_object(create_frontrock1_945(9092, 704), 2);
    add_object(create_frontrock1_945(9052, 744), 2);
    add_object(create_bossserpentinebody_946(3060, -52), 2);
    add_object(create_bossserpentinebody_946(3084, -68), 2);
    add_object(create_bossserpentinebody_946(3100, -92), 2);
    add_object(create_bossserpentinebody_946(3084, -116), 2);
    add_object(create_bossserpentinebody_946(3060, -132), 2);
    add_object(create_bossserpentinebody_946(3044, -156), 2);
    add_object(create_bossserpentinebody_946(3060, -180), 2);
    add_object(create_npcserpentine_947(3060, -220), 2);
    add_object(create_bossserpentinehead_948(9004, 800), 2);
    add_object(create_frontrock1_945(9140, 776), 2);
    add_object(create_frontrock1_945(8972, 776), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_gimmickhangingidlesensor_740(5361, 936), 2);
    add_object(create_gimmickhangingidlesensor_740(5297, 936), 2);
    add_object(create_gimmickhangingidlesensor_740(5233, 936), 2);
    add_object(create_yellowspringup_434(4680, 912), 2);
    add_object(create_gimmickhangingidlesensor_740(4713, 696), 2);
    add_object(create_gimmickhangingidlesensor_740(4793, 696), 2);
    add_object(create_gimmickhangingidlesensor_740(4873, 696), 2);
    add_object(create_enemygansekijr_943(7911, 1004), 2);
    add_object(create_gimmickhangingidlesensor_740(4953, 696), 2);
    add_object(create_gimmickhangingidlesensor_740(5033, 696), 2);
    add_object(create_objectcrystal_279(4869, 922), 2);
    add_object(create_objectcrystal_279(4973, 1018), 2);
    add_object(create_objectcrystal_279(4941, 986), 2);
    add_object(create_objectcrystal_279(4909, 954), 2);
    add_object(create_levelmovingplatform3_949(5080, 656), 2);
    add_object(create_enemyturretus_938(6647, 752), 2);
    add_object(create_halfcorkscrewleft_941(6480, 479), 2);
    add_object(create_halfcorkscrewright_942(7296, 479), 2);
    add_object(create_layerchangeswitch_404(6584, 392), 2);
    add_object(create_layerchangeswitch_404(7176, 392), 2);
    add_object(create_yellowspringright_435(6072, 448), 2);
    add_object(create_yellowspringright_435(6072, 416), 2);
    add_object(create_yellowspringupleft_432(6904, 656), 2);
    add_object(create_yellowspringup_434(6584, 584), 2);
    add_object(create_objectcrystal_279(6397, 458), 2);
    add_object(create_objectcrystal_279(6349, 450), 2);
    add_object(create_objectcrystal_279(6253, 450), 2);
    add_object(create_objectcrystal_279(6205, 458), 2);
    add_object(create_objectcrystal_279(6301, 450), 2);
    add_object(create_objectcrystal_279(4789, 722), 2);
    add_object(create_objectcrystal_279(4869, 722), 2);
    add_object(create_objectcrystal_279(4949, 722), 2);
    add_object(create_objectcrystal_279(5029, 722), 2);
    add_object(create_monitorcrystals_324(6144, 896), 2);
    add_object(create_objectcrystal_279(2853, 786), 2);
    add_object(create_objectcrystal_279(2797, 786), 2);
    add_object(create_objectcrystal_279(2909, 786), 2);
    add_object(create_layerchangeswitch_404(6480, 424), 2);
    add_object(create_layerchangeswitch_404(7288, 424), 2);
    add_object(create_levelvalleyplatform1_939(7464, 320), 2);
    add_object(create_enemydragonfly_944(7471, 205), 2);
    add_object(create_objectcrystal_279(7293, 202), 2);
    add_object(create_objectcrystal_279(7373, 202), 2);
    add_object(create_objectcrystal_279(7333, 202), 2);
    add_object(create_monitorrings_407(12968, 656), 2);
    add_object(create_hazardspikesup_950(13696, 1256), 2);
    add_object(create_hazardspikesup_950(13728, 1256), 2);
    add_object(create_hazardspikesup_950(13760, 1256), 2);
    add_object(create_hazardspikesup_950(13792, 1256), 2);
    add_object(create_hazardspikesup_950(13824, 1256), 2);
    add_object(create_gimmickhangingidlesensor_740(13729, 1048), 2);
    add_object(create_gimmickhangingidlesensor_740(13801, 1048), 2);
    add_object(create_levelvalleyplatform1_939(13880, 1144), 2);
    add_object(create_laddertop_357(14132, 911), 2);
    add_object(create_enemydragonfly_944(13703, 821), 2);
    add_object(create_enemyturretus_938(13759, 920), 2);
    add_object(create_objectpetal_302(689, 577), 2);
    add_object(create_objectpetal_302(769, 569), 2);
    add_object(create_objectpetal_302(849, 577), 2);
    add_object(create_objectpetal_302(1001, 441), 2);
    add_object(create_objectpetal_302(1041, 441), 2);
    add_object(create_breakablerock_951(8352, 592), 2);
    add_object(create_breakablerock_951(8296, 592), 2);
    add_object(create_breakablerock_951(8320, 592), 2);
    add_object(create_breakablerock_951(8456, 560), 2);
    add_object(create_breakablerock_951(8488, 560), 2);
    add_object(create_breakablerock_951(8488, 592), 2);
    add_object(create_breakablerock_951(8456, 592), 2);
    add_object(create_objectcrystal_279(12917, 922), 2);
    add_object(create_objectcrystal_279(12957, 930), 2);
    add_object(create_objectcrystal_279(12989, 954), 2);
    add_object(create_objectcrystal_279(12909, 826), 2);
    add_object(create_objectcrystal_279(12917, 794), 2);
    add_object(create_objectcrystal_279(12925, 762), 2);
    add_object(create_objectpetal_302(4225, 1233), 2);
    add_object(create_objectpetal_302(4313, 1273), 2);
    add_object(create_objectcrystal_279(7173, 202), 2);
    add_object(create_objectcrystal_279(7253, 202), 2);
    add_object(create_objectcrystal_279(7213, 202), 2);
    add_object(create_objectcrystal_279(7093, 202), 2);
    add_object(create_objectcrystal_279(7133, 202), 2);
    add_object(create_objectcodec_354(12642, 277), 2);
    add_object(create_objectpetal_302(7553, 289), 2);
    add_object(create_objectpetal_302(7505, 289), 2);
    add_object(create_enemygansekijr_943(14127, 1204), 2);
    add_object(create_objectcrystal_279(7413, 202), 2);
    add_object(create_minibosswretchnidbase_952(14433, 907), 2);
    add_object(create_minibosswretchnidturret_953(14439, 884), 2);
    add_object(create_minibosswretchnidweakspot_954(14537, 907), 2);
    add_object(create_minibossbarrier_924(14432, 824), 2);
    add_object(create_minibossbarrier_924(14432, 872), 2);
    add_object(create_minibossbarrier_924(14432, 920), 2);
    add_object(create_minibossbarrier_924(14432, 968), 2);
    add_object(create_objectcodec_354(6122, 301), 2);
    add_object(create_monitorinvincibility_408(6224, 856), 2);
    add_object(create_objectcrystal_279(8157, 98), 2);
    add_object(create_objectcrystal_279(8189, 98), 2);
    add_object(create_objectcrystal_279(8221, 98), 2);
    add_object(create_objectcrystal_279(8253, 98), 2);
    add_object(create_objectcrystal_279(8285, 98), 2);
    add_object(create_objectcrystal_279(8317, 98), 2);
    add_object(create_objectcrystal_279(8141, 58), 2);
    add_object(create_objectcrystal_279(8173, 58), 2);
    add_object(create_objectcrystal_279(8205, 58), 2);
    add_object(create_objectcrystal_279(8237, 58), 2);
    add_object(create_objectcrystal_279(8269, 58), 2);
    add_object(create_objectcrystal_279(8301, 58), 2);
    add_object(create_objectcrystal_279(8157, 18), 2);
    add_object(create_objectcrystal_279(8189, 18), 2);
    add_object(create_objectcrystal_279(8221, 18), 2);
    add_object(create_objectcrystal_279(8253, 18), 2);
    add_object(create_objectcrystal_279(8285, 18), 2);
    add_object(create_objectcrystal_279(8317, 18), 2);
    add_object(create_objectcrystal_279(8333, 58), 2);
    add_object(create_objectcodec_354(2090, 1085), 2);
    add_object(create_objectcrystal_279(4565, 1354), 2);
    add_object(create_objectcrystal_279(4597, 1354), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_halfcorkscrewleft_941(10328, 1015), 2);
    add_object(create_halfcorkscrewright_942(11112, 1015), 2);
    add_object(create_layerchangeswitch_404(10432, 928), 2);
    add_object(create_layerchangeswitch_404(10992, 928), 2);
    add_object(create_layerchangeswitch_404(10352, 968), 2);
    add_object(create_layerchangeswitch_404(11072, 968), 2);
    add_object(create_objectcrystal_279(10557, 890), 2);
    add_object(create_objectcrystal_279(10597, 890), 2);
    add_object(create_objectcrystal_279(10637, 890), 2);
    add_object(create_objectcrystal_279(10677, 890), 2);
    add_object(create_objectcrystal_279(10717, 890), 2);
    add_object(create_objectcrystal_279(10757, 890), 2);
    add_object(create_objectcrystal_279(10797, 890), 2);
    add_object(create_objectcrystal_279(10837, 890), 2);
    add_object(create_objectcrystal_279(10877, 890), 2);
    add_object(create_hazardspikesup_950(10432, 1008), 2);
    add_object(create_hazardspikesup_950(10464, 1008), 2);
    add_object(create_hazardspikesup_950(10496, 1008), 2);
    add_object(create_hazardspikesup_950(10880, 1008), 2);
    add_object(create_hazardspikesup_950(10912, 1008), 2);
    add_object(create_hazardspikesup_950(10944, 1008), 2);
    add_object(create_hazardspikesup_950(10976, 1008), 2);
    add_object(create_hazardspikesup_950(10656, 1008), 2);
    add_object(create_hazardspikesup_950(10688, 1008), 2);
    add_object(create_hazardspikesup_950(10720, 1008), 2);
    add_object(create_hazardspikesup_950(10752, 1008), 2);
    add_object(create_levelvalleyplatform1_939(12152, 848), 2);
    add_object(create_levelvalleyplatform1_939(12424, 880), 2);
    add_object(create_objectpetal_302(12193, 817), 2);
    add_object(create_objectpetal_302(12241, 817), 2);
    add_object(create_objectpetal_302(12465, 849), 2);
    add_object(create_objectpetal_302(12513, 849), 2);
    add_object(create_enemyturretus_938(12687, 1000), 2);
    add_object(create_objectcrystal_279(9861, 986), 2);
    add_object(create_objectcrystal_279(9909, 986), 2);
    add_object(create_objectcrystal_279(9813, 994), 2);
    add_object(create_objectcrystal_279(9957, 994), 2);
    add_object(create_objectcrystal_279(10525, 482), 2);
    add_object(create_objectcrystal_279(10557, 466), 2);
    add_object(create_objectcrystal_279(10461, 578), 2);
    add_object(create_objectcrystal_279(10477, 538), 2);
    add_object(create_objectcrystal_279(10501, 506), 2);
    add_object(create_objectcrystal_279(10085, 626), 2);
    add_object(create_objectcrystal_279(10157, 610), 2);
    add_object(create_objectcrystal_279(10013, 658), 2);
    add_object(create_yellowspringupright_433(9912, 760), 2);
    add_object(create_halfcorkscrewleft_941(11928, 567), 2);
    add_object(create_halfcorkscrewright_942(12456, 567), 2);
    add_object(create_layerchangeswitch_404(12032, 480), 2);
    add_object(create_layerchangeswitch_404(12336, 480), 2);
    add_object(create_levelvalleyplatform1_939(11600, 392), 2);
    add_object(create_yellowspringupleft_432(10256, 752), 2);
    add_object(create_laddertop_357(11244, 399), 2);
    add_object(create_enemyturretus_938(11367, 360), 2);
    add_object(create_levelvalleyplatform1_939(11808, 368), 2);
    add_object(create_monitorkeystone_562(12544, 176), 2);
    add_object(create_objectcrystal_279(11645, 362), 2);
    add_object(create_objectcrystal_279(11685, 362), 2);
    add_object(create_objectcrystal_279(11853, 338), 2);
    add_object(create_objectcrystal_279(11893, 338), 2);
    add_object(create_enemydragonfly_944(12031, 261), 2);
    add_object(create_laddertop_357(12372, 239), 2);
    add_object(create_objectjumppad_530(6488, -64), 2);
    add_object(create_objectpetal_302(13969, 1113), 2);
    add_object(create_objectpetal_302(13921, 1113), 2);
    add_object(create_objectpetal_302(12137, 441), 2);
    add_object(create_objectpetal_302(12193, 441), 2);
    add_object(create_objectpetal_302(12249, 441), 2);
    add_object(create_objectfuel_528(1924, 1348), 2);
    add_object(create_objectfuel_528(7732, 292), 2);
    add_object(create_spiraltunnelfront_955(8083, 328), 2);
    add_object(create_spiraltunneltop_956(8224, 382), 2);
    add_object(create_spiraltunnelbottom_957(8224, 600), 2);
    add_object(create_spiraltunnelmask_958(8088, 328), 2);
    add_object(create_objectcrystal_279(12133, 690), 2);
    add_object(create_objectcrystal_279(12157, 666), 2);
    add_object(create_objectcrystal_279(12181, 642), 2);
    add_object(create_objectcrystal_279(12205, 618), 2);
    add_object(create_objectcrystal_279(2005, 466), 2);
    add_object(create_objectcrystal_279(2077, 482), 2);
    add_object(create_objectcrystal_279(2125, 530), 2);
    add_object(create_objectcrystal_279(2173, 578), 2);
    add_object(create_objectcrystal_279(2029, 866), 2);
    add_object(create_objectcrystal_279(2069, 850), 2);
    add_object(create_objectcrystal_279(2109, 834), 2);
    add_object(create_objectcrystal_279(1989, 882), 2);
    add_object(create_objectcrystal_279(3029, 602), 2);
    add_object(create_objectcrystal_279(3189, 586), 2);
    add_object(create_objectcrystal_279(3149, 586), 2);
    add_object(create_objectcrystal_279(3109, 594), 2);
    add_object(create_objectcrystal_279(2989, 602), 2);
    add_object(create_objectcrystal_279(3069, 594), 2);
    add_object(create_yellowspringupright_433(3408, 656), 2);
    add_object(create_objectcodec_354(4234, 693), 2);
    add_object(create_levelvalleyplatform1_939(3712, 936), 2);
    add_object(create_levelvalleyplatform1_939(4032, 1208), 2);
    add_object(create_enemydragonfly_944(3439, 1181), 2);
    add_object(create_objectcrystal_279(4173, 1442), 2);
    add_object(create_objectcrystal_279(4213, 1442), 2);
    add_object(create_objectcrystal_279(4253, 1442), 2);
    add_object(create_objectcrystal_279(4293, 1442), 2);
    add_object(create_objectcrystal_279(3981, 1274), 2);
    add_object(create_objectcrystal_279(3981, 1242), 2);
    add_object(create_objectcrystal_279(3981, 1210), 2);
    add_object(create_objectcrystal_279(3981, 1306), 2);
    add_object(create_monitor1up_410(7952, 912), 2);
    add_object(create_hazardspikesleft_959(4104, 296), 2);
    add_object(create_hazardspikesleft_959(4104, 264), 2);
    add_object(create_hazardspikesleft_959(4104, 328), 2);
    add_object(create_breakablerock_951(6824, 880), 2);
    add_object(create_breakablerock_951(6824, 904), 2);
    add_object(create_enemygansekijr_943(6199, 876), 2);
    add_object(create_breakablerock_951(6864, 880), 2);
    add_object(create_breakablerock_951(6864, 904), 2);
    add_object(create_objectpetal_302(6857, 833), 2);
    add_object(create_objectpetal_302(6905, 833), 2);
    add_object(create_objectcrystal_279(6805, 778), 2);
    add_object(create_objectcrystal_279(6773, 746), 2);
    add_object(create_objectcrystal_279(6741, 714), 2);
    add_object(create_objectpetal_302(5633, 769), 2);
    add_object(create_objectpetal_302(5681, 769), 2);
    add_object(create_objectpetal_302(7425, 937), 2);
    add_object(create_objectpetal_302(7473, 937), 2);
    add_object(create_objectpetal_302(7521, 937), 2);
    add_object(create_laddertop_357(5380, 351), 2);
    add_object(create_enemyturretus_938(5655, 248), 2);
    add_object(create_enemyturretus_938(6031, 312), 2);
    add_object(create_objectpetal_302(5585, 769), 2);
    add_object(create_objectcrystal_279(5413, 418), 2);
    add_object(create_objectcrystal_279(5413, 458), 2);
    add_object(create_objectcrystal_279(5413, 498), 2);
    add_object(create_enemydragonfly_944(6071, 197), 2);
    add_object(create_monitorcrystals_324(4824, 432), 2);
    add_object(create_yellowspringupright_433(4936, 512), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_dvwall3_873(6936, 304), 3);
    add_background_object(create_dvwalledge1_887(6936, 368), 3);
    add_background_object(create_dvwall6_903(6936, 248), 3);
    add_background_object(create_dvwalledge1_887(6936, 304), 3);
    add_background_object(create_dvwalledge2_895(7048, 304), 3);
    add_background_object(create_dvwalledge2_895(7048, 352), 3);
    add_background_object(create_dvwalledge1_887(6936, 432), 3);
    add_background_object(create_dvwall6_903(6976, 464), 3);
    add_background_object(create_dvtree4_874(6888, 312), 3);
    add_background_object(create_dvrockedge2_904(3072, 960), 3);
    add_background_object(create_dvrockedge1_905(3040, 960), 3);
    add_background_object(create_dvtree4_874(2928, 792), 3);
    add_background_object(create_dvrockedge1_905(7000, 480), 3);
    add_background_object(create_dvrockedge2_904(7032, 480), 3);
    add_background_object(create_dvrockceiling_891(9656, 816), 3);
    add_background_object(create_dvtree4_874(10488, 896), 3);
    add_background_object(create_dvrockedge2_904(10656, 1064), 3);
    add_background_object(create_dvrockslope4_900(10528, 1064), 3);
    add_background_object(create_dvrockedge1_905(10496, 1072), 3);
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
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
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
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_mapdata2_32(-432, 240), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
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
    loop_gansekijr_floor_running = false;
    loop_gansekijr_floor_index = 0;
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
    loop_serpent_step_running = false;
    loop_serpent_step_index = 0;
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
    loop_serpent_segments_running = false;
    loop_serpent_segments_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_20, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_20, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_20, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_20, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_20, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_20, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_20, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_20, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_20, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_20, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_20, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_20, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_20, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_20, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_20, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_20, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_20, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_20, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_20, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_20, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_20, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_20, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_20, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_20, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_20, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_20, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_20, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_20, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_20, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_20, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_20, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_20, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_20, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_20, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_20, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_20, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_20, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_20, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_20, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_20, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_20, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_20, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_20, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_20, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_20, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_20, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_20, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_20, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_20, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_20, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_20, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_20, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_20, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_20, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1576_20 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1432_20 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1434_20 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1566_20 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1433_20 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1435_20 = loop_count;
    not_always_600_13 = loop_count;
    not_always_1717_17 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    not_always_1609_20 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    once_condition_1612_20 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1573_20 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1436_20 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_destroyed_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1568_20 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1602_20 = loop_count;
    not_always_1542_20 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_wretchnid_main_1 = true;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_pause_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_wretchnid_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_serpentine_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
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
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_539_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_snake_emerge_1 = true;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4501()
{
    // event 1617_21
    {
        if (!(group_main_engine_1)) goto event_1617_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1617_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.sub(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1617_21_end: ;
}
void Frames::loop_cacteon_floor_21()
{
    event_func_4501();
}
void Frames::event_func_4502()
{
    // event 1718_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1718_21_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_movesnake_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1718_21_end;
#ifdef CHOWDREN_WAIT
        clickteam_movement_controller_74(((Active*)get_single(bosssnakebody_995_instances)));
        clickteam_movement_controller_56(20*clickteam_movement_controller_56(((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_x(), ((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_y(), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22)));
        clickteam_movement_controller_51(((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22));
#endif
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1718_21_end: ;
}
void Frames::loop_movesnake_21()
{
    event_func_4502();
}
void Frames::event_func_4503()
{
    // event 1684_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_bossinitiate_1)) goto event_1684_21_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1684_21_end: ;
}
void Frames::loop_trigger_deactivate_boss_21()
{
    event_func_4503();
}
void Frames::event_func_4504()
{
    // event 1588_21
    {
        if (!(group_main_engine_1)) goto event_1588_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1588_21_end;
        FrameObject * single_instance_1588_21_0; single_instance_1588_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysporepod_1005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1588_21_0 == NULL)
                    single_instance_1588_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1588_21_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1588_21_0))->force_frame(5+((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1588_21_end: ;
}
void Frames::loop_spawndebris_21()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_4327();
    event_func_4504();
}
void Frames::event_func_4505()
{
    // event 1618_21
    {
        if (!(group_main_engine_1)) goto event_1618_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1618_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, 1.6);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1618_21_end: ;
}
void Frames::event_func_4506()
{
    // event 1619_21
    {
        if (!(group_main_engine_1)) goto event_1619_21_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1619_21_end;
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(4, -1.6);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    event_1619_21_end: ;
}
void Frames::loop_cacteon_21()
{
    event_func_4505();
    event_func_4506();
}
void Frames::event_func_4507()
{
    // event 1730_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_defeated_1)) goto event_1730_21_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        global_values->set(4, 10);
        global_values->set(5, 9186);
        global_values->set(6, 882);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(11));
    }
    event_1730_21_end: ;
}
void Frames::loop_next_act_21()
{
    event_func_4507();
}
void Frames::event_func_4508()
{
    // event 1933_21
    {
        if (!(group_main_engine_1)) goto event_1933_21_end;
        if (!((global_values->get(4)) < (10))) goto event_1933_21_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage1_ogg_131, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1933_21_end: ;
}
void Frames::event_func_4509()
{
    // event 1934_21
    {
        if (!(group_main_engine_1)) goto event_1934_21_end;
        if (!((global_values->get(4)) >= (10))) goto event_1934_21_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage1b_ogg_132, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1934_21_end: ;
}
void Frames::loop_play_music_5_21()
{
    event_func_4508();
    event_func_4509();
}
void Frames::event_func_4510()
{
    // event 1583_21
    {
        if (!(group_main_engine_1)) goto event_1583_21_end;
        enemysporepod_1005_instances.clear_selection();
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysporepod_1005_instances.has_selection()) goto event_1583_21_end;
        FrameObject * single_instance_1583_21_0; single_instance_1583_21_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysporepod_1005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysporeprojectile_969(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1583_21_0 == NULL)
                    single_instance_1583_21_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1583_21_0))->alterables->values.set(0, ((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->alterables->values.get(5)*90.0+45)*4);
        ((Active*)((Active*)single_instance_1583_21_0))->alterables->values.set(1, ((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->get_action_y()-sin_deg(((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->alterables->values.get(5)*90.0+45)*4);
        for (ObjectIterator it(enemysporepod_1005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
        }
        ((Active*)((Active*)single_instance_1583_21_0))->alterables->values.set(2, cos_deg(((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->alterables->values.get(5)*90.0+45)*2);
        ((Active*)((Active*)single_instance_1583_21_0))->alterables->values.set(3, -3-sin_deg(((Active*)get_single(enemysporepod_1005_instances, default_active_instance))->alterables->values.get(5)*90.0+45));
    }
    event_1583_21_end: ;
}
void Frames::loop_sporepod_21()
{
    event_func_4510();
}
void Frames::loop_wrapper_sound_kick1_21(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_21(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_21(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_21(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_21(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_21(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_21(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_21(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_21(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_21(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_21(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_21(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_21(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_21(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_21(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_21(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_21(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_21(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_21(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_21();
}
void Frames::loop_wrapper_play_music_6_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_20();
}
void Frames::loop_wrapper_sound_go0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_21(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_20();
}
void Frames::loop_wrapper_process_call_unqueue_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_21(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_21(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_4511()
{
    // event 1594_21
    {
        if (!(group_main_engine_1)) goto event_1594_21_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1594_21_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1594_21_end;
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, ((Active*)col_instance_2)->alterables->values.get(2)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)col_instance_2)->alterables->values.get(3)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
    }
    event_1594_21_end: ;
}
void Frames::col_2_21()
{
    event_func_4511();
}
void Frames::event_func_4512()
{
    // event 1592_21
    {
        if (!(group_main_engine_1)) goto event_1592_21_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1592_21_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
    }
    event_1592_21_end: ;
}
void Frames::col_6_21()
{
    event_func_4512();
}
void Frames::event_func_4513()
{
    // event 1526_21
    {
        if (!(group_main_engine_1)) goto event_1526_21_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(1))) goto event_1526_21_end;
        FrameObject * single_instance_1526_21_0; single_instance_1526_21_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1526_21_0 == NULL)
                single_instance_1526_21_0 = new_obj;
        }
        FrameObject * single_instance_1526_21_1; single_instance_1526_21_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1526_21_1 == NULL)
                single_instance_1526_21_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1526_21_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1526_21_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1526_21_0))->move_back();
        FrameObject * single_instance_1526_21_2; single_instance_1526_21_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1526_21_2 == NULL)
                single_instance_1526_21_2 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
    }
    event_1526_21_end: ;
}
void Frames::col_15_21()
{
    event_func_4513();
}
void Frames::event_func_4514()
{
    // event 1593_21
    {
        if (!(group_main_engine_1)) goto event_1593_21_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1593_21_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1593_21_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1593_21_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1593_21_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
    }
    event_1593_21_end: ;
}
void Frames::col_16_21()
{
    event_func_4514();
}
void Frames::event_func_4515()
{
    // event 1706_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_crater_jump_1)) goto event_1706_21_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1706_21_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1706_21_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_speed(50);
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_deceleration(0);
        ((Active*)((Active*)col_instance_2))->set_direction(((Active*)col_instance_2)->get_direction()+16);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
    }
    event_1706_21_end: ;
}
void Frames::col_19_21()
{
    event_func_4515();
}
void Frames::event_func_4516()
{
    // event 1591_21
    {
        if (!(group_main_engine_1)) goto event_1591_21_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(0))) goto event_1591_21_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->advance_movement(+1);
    }
    event_1591_21_end: ;
}
void Frames::col_27_21()
{
    event_func_4516();
}
void Frames::event_func_4517()
{
    // event 1731_21
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1731_21_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1731_21_0; single_instance_1731_21_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1731_21_0 == NULL)
                single_instance_1731_21_0 = new_obj;
        }
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1731_21_end: ;
}
