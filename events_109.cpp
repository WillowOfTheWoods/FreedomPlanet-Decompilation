#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8886()
{
    // event 1738_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1738_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1738_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(12, -1);
            ((Active*)*it)->alterables->values.set(7, 7);
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(6, get_max((((Active*)get_instance(player_389_instances))->get_x()-100-((Active*)*it)->alterables->values.get(4))*0.03, -5));
        }
    }
    event_1738_36_end: ;
}
void Frames::event_func_8887()
{
    // event 1739_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1739_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1739_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(7, 7);
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(6, get_min((((Active*)get_instance(player_389_instances))->get_x()+100-((Active*)*it)->alterables->values.get(4))*0.03, 5));
        }
    }
    event_1739_36_end: ;
}
void Frames::event_func_8888()
{
    // event 1740_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1740_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1740_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 2);
        }
    }
    event_1740_36_end: ;
}
void Frames::event_func_8889()
{
    // event 1741_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1741_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1741_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 1);
        }
    }
    event_1741_36_end: ;
}
void Frames::event_func_8890()
{
    // event 1742_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1742_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1742_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2, -4));
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1742_36_end: ;
}
void Frames::event_func_8891()
{
    // event 1743_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1743_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (((Active*)get_instance(player_389_instances))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1743_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(13, 300);
        }
    }
    event_1743_36_end: ;
}
void Frames::event_func_8892()
{
    // event 1744_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1744_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)*it)->alterables->values.get(13)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)get_instance(player_389_instances))->get_y()+30))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1744_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(13, 200);
        }
    }
    event_1744_36_end: ;
}
void Frames::event_func_8893()
{
    // event 1745_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1745_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)*it)->alterables->values.get(13)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1745_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(3, -3);
            ((Active*)*it)->alterables->values.set(12, -1);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    event_1745_36_end: ;
}
void Frames::event_func_8894()
{
    // event 1746_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1746_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)*it)->alterables->values.get(13)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1746_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -4);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(12, -1);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    event_1746_36_end: ;
}
void Frames::event_func_8895()
{
    // event 1747_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1747_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)*it)->alterables->values.get(13)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1747_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -3);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(3, -3);
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    event_1747_36_end: ;
}
void Frames::event_func_8896()
{
    // event 1748_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1748_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)*it)->alterables->values.get(13)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1748_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 4);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    event_1748_36_end: ;
}
void Frames::event_func_8897()
{
    // event 1749_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1749_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1749_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1749_36_end: ;
}
void Frames::event_func_8898()
{
    // event 1750_36
    bool or_result_1750_36 = false;
    bool or_temp_result_1750_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1750_36_0_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (20))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1750_36_0_end;
        or_result_1750_36 = true;
        or_temp_result_1750_36_0 = true;
    }
    or_event_1750_36_0_end: ;
    bosschopper_2216_instances.clear_saved_selection();
    if (or_temp_result_1750_36_0) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1750_36
    bool or_temp_result_1750_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1750_36_1_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (40))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1750_36_1_end;
        or_result_1750_36 = true;
        or_temp_result_1750_36_1 = true;
    }
    or_event_1750_36_1_end: ;
    if (or_temp_result_1750_36_1) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1750_36
    bool or_temp_result_1750_36_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1750_36_2_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (60))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1750_36_2_end;
        or_result_1750_36 = true;
        or_temp_result_1750_36_2 = true;
    }
    or_event_1750_36_2_end: ;
    if (or_temp_result_1750_36_2) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1750_36
    bool or_temp_result_1750_36_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1750_36_3_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (80))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1750_36_3_end;
        or_result_1750_36 = true;
        or_temp_result_1750_36_3 = true;
    }
    or_event_1750_36_3_end: ;
    if (or_temp_result_1750_36_3) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1750_36
    bool or_temp_result_1750_36_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1750_36_4_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (100))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1750_36_4_end;
        or_result_1750_36 = true;
        or_temp_result_1750_36_4 = true;
        or_event_1750_36_4_end: ;
        if (or_temp_result_1750_36_4) {
            bosschopper_2216_instances.save_selection();
        }
        if (!or_result_1750_36) goto or_final_or_event_1750_36_4_end;
        bosschopper_2216_instances.empty_selection();
        if (or_temp_result_1750_36_0 || or_temp_result_1750_36_1 || or_temp_result_1750_36_2 || or_temp_result_1750_36_3 || or_temp_result_1750_36_4) {
            bosschopper_2216_instances.restore_selection();
        }
        FrameObject * single_instance_1750_36_0; single_instance_1750_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschopper_2216_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 24), parent->layer);
                if (single_instance_1750_36_0 == NULL)
                    single_instance_1750_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1750_36_0))->move_back();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    or_final_or_event_1750_36_4_end: ;
}
void Frames::event_func_8899()
{
    // event 1751_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1751_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (120))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1751_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(12, 0-((Active*)*it)->alterables->values.get(12));
        }
    }
    event_1751_36_end: ;
}
void Frames::event_func_8900()
{
    // event 1752_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1752_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (160))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1752_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1752_36_end: ;
}
void Frames::event_func_8901()
{
    // event 1755_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1755_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1755_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1755_36_end: ;
}
void Frames::event_func_8902()
{
    // event 1756_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1756_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (15))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1756_36_end;
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1756_36_0;
            ((Active*)get_instance(bosschopperbars_2212_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1756_36_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1756_36_1;
            ((Active*)get_instance(bosschopperbars2_2213_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1756_36_1: ;
        }
    }
    event_1756_36_end: ;
}
void Frames::event_func_8903()
{
    // event 1757_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1757_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (15))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1757_36_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1757_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        FrameObject * single_instance_1757_36_0; single_instance_1757_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschopper_2216_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1757_36_0 == NULL)
                    single_instance_1757_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1757_36_0))->set_x(((Active*)single_instance_1757_36_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1757_36_0))->set_y(((Active*)single_instance_1757_36_0)->get_y()-40+randrange(81));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1757_36_1_end;
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
        dynamic_1757_36_1_end: ;
    }
    event_1757_36_end: ;
}
void Frames::event_func_8904()
{
    // event 1758_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1758_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (3))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1758_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1758_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1758_36_0; single_instance_1758_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschoppertail_2215_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1758_36_0 == NULL)
                    single_instance_1758_36_0 = new_obj;
            }
        }
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->alterables->values.set(1, -6*((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->alterables->values.set(1, 6*((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(12));
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1758_36_end: ;
}
void Frames::event_func_8905()
{
    // event 1759_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1759_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1759_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1759_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1759_36_0; single_instance_1759_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschoppertail_2215_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1759_36_0 == NULL)
                    single_instance_1759_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1759_36_end: ;
}
void Frames::event_func_8906()
{
    // event 1760_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1760_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (9))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1760_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1760_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1760_36_0; single_instance_1760_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschoppertail_2215_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1760_36_0 == NULL)
                    single_instance_1760_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1760_36_end: ;
}
void Frames::event_func_8907()
{
    // event 1761_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1761_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (12))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1761_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1761_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1761_36_0; single_instance_1761_36_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschoppertail_2215_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1761_36_0 == NULL)
                    single_instance_1761_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1761_36_end: ;
}
void Frames::event_func_8908()
{
    // event 1762_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1762_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (15))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1762_36_end;
        if (!((((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.get(1)) == (0))) goto event_1762_36_end;
        ((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.set(1, -6*((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(12));
        ((Active*)get_instance(bosschopperbars2_2213_instances))->alterables->values.set(1, 6*((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(12));
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1762_36_end: ;
}
void Frames::event_func_8909()
{
    // event 1763_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1763_36_end;
        if (!((((Active*)get_instance(bosschoppertailblade_2217_instances))->alterables->values.get(1)) != (0))) goto event_1763_36_end;
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_x(((Active*)get_instance(bosschoppertailblade_2217_instances))->get_x()+((Active*)get_instance(bosschoppertailblade_2217_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_y(((Active*)get_instance(bosschoppertailblade_2217_instances))->get_y()+((Active*)get_instance(bosschoppertailblade_2217_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->alterables->values.add(2, 0.4);
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_x(((Active*)get_instance(bosschoppertailblade2_2214_instances))->get_x()+((Active*)get_instance(bosschoppertailblade2_2214_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_y(((Active*)get_instance(bosschoppertailblade2_2214_instances))->get_y()+((Active*)get_instance(bosschoppertailblade2_2214_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->alterables->values.add(2, 0.4);
    }
    event_1763_36_end: ;
}
void Frames::event_func_8910()
{
    // event 1764_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1764_36_end;
        if (!((((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.get(1)) != (0))) goto event_1764_36_end;
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_x(((Active*)get_instance(bosschopperbars_2212_instances))->get_x()+((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_y(((Active*)get_instance(bosschopperbars_2212_instances))->get_y()+((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosschopperbars_2212_instances))->alterables->values.add(2, 0.4);
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_x(((Active*)get_instance(bosschopperbars2_2213_instances))->get_x()+((Active*)get_instance(bosschopperbars2_2213_instances))->alterables->values.get(1));
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_y(((Active*)get_instance(bosschopperbars2_2213_instances))->get_y()+((Active*)get_instance(bosschopperbars2_2213_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosschopperbars2_2213_instances))->alterables->values.add(2, 0.4);
    }
    event_1764_36_end: ;
}
void Frames::event_func_8911()
{
    // event 1765_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1765_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (15))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1765_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(-7, get_min(((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(12)*0.3, 12)));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, -7));
            ((Active*)*it)->alterables->values.add(9, 1);
        }
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
    }
    event_1765_36_end: ;
}
void Frames::event_func_8912()
{
    // event 1766_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1766_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (50))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1766_36_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(4);
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        media.stop_channel(32-1);
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
    }
    event_1766_36_end: ;
}
void Frames::event_func_8913()
{
    // event 1768_36
    {
        if (!(group_main_engine_1)) goto event_1768_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1768_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+600))) goto event_1768_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1768_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1768_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-300))) goto event_1768_36_end;
        if (!((minibossbarrier_924_instances.size()) > (0))) goto event_1768_36_end;
        if (once_condition_1768_36) goto event_1768_36_end;
        once_condition_1768_36 = true;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_1 = true;
        }
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, -1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(player_389_instances))->get_x()+200);
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)+600);
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1768_36_end: ;
}
void Frames::event_func_8914()
{
    // event 1769_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1769_36_end;
        if (once_condition_1769_36) goto event_1769_36_end;
        once_condition_1769_36 = true;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1769_36_end: ;
}
void Frames::event_func_8915()
{
    // event 1770_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1770_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(0, 99);
        }
    }
    event_1770_36_end: ;
}
void Frames::event_func_8916()
{
    // event 1771_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1771_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(8))*((Active*)*it)->alterables->values.get(11));
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1771_36_0;
            ((Active*)get_instance(bosschopperblade_2218_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1771_36_0: ;
        }
        ((Active*)get_instance(bosschopperblade_2218_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
    }
    event_1771_36_end: ;
}
void Frames::event_func_8917()
{
    // event 1772_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1772_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1772_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(2)-sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8))*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11)+sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8)-20-((Active*)*it)->alterables->values.get(0)*20)*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11));
            ((Active*)*it)->set_direction(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1772_36_end: ;
}
void Frames::event_func_8918()
{
    // event 1773_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1773_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(10), 0);
        }
        ((Active*)get_instance(bosschopperblade_2218_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
    }
    event_1773_36_end: ;
}
void Frames::event_func_8919()
{
    // event 1774_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1774_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1774_36_end;
        {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances));
            if (parent == NULL) goto pos_end_1774_36_0;
            ((Active*)get_instance(bosschoppertailblade_2217_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1774_36_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances));
            if (parent == NULL) goto pos_end_1774_36_1;
            ((Active*)get_instance(bosschoppertailblade2_2214_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1774_36_1: ;
        }
    }
    event_1774_36_end: ;
}
void Frames::event_func_8920()
{
    // event 1775_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1775_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1775_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1775_36_end: ;
}
void Frames::event_func_8921()
{
    // event 1776_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1776_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1776_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1776_36_end: ;
}
void Frames::event_func_8922()
{
    // event 1777_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1777_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1777_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+6)%math_helper%360);
        }
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1777_36_0;
            ((Active*)get_instance(bosschopperbars_2212_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1777_36_0: ;
        }
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschopperbars_2212_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances));
            if (parent == NULL) goto pos_end_1777_36_1;
            ((Active*)get_instance(bosschopperbars2_2213_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1777_36_1: ;
        }
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_direction(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(bosschopperbars2_2213_instances))->set_angle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->alterables->values.get(10), 0);
    }
    event_1777_36_end: ;
}
void Frames::event_func_8923()
{
    // event 1778_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1778_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1778_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (32+((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1778_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 8);
        }
    }
    event_1778_36_end: ;
}
void Frames::event_func_8924()
{
    // event 1779_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1779_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1779_36_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-32-((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1779_36_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 8);
        }
    }
    event_1779_36_end: ;
}
void Frames::event_func_8925()
{
    // event 1780_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1780_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) != (-1))) goto event_1780_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) != (9))) goto event_1780_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1780_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.5, -15));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2, -15));
        }
    }
    event_1780_36_end: ;
}
void Frames::event_func_8926()
{
    // event 1781_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1781_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) != (-1))) goto event_1781_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) != (9))) goto event_1781_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1781_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1781_36_end: ;
}
void Frames::event_func_8927()
{
    // event 1782_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1782_36_end;
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1 = false;
    
    }
    event_1782_36_end: ;
}
void Frames::event_func_8928()
{
    // event 1783_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1783_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1783_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1 = true;
        }
    }
    event_1783_36_end: ;
}
void Frames::event_func_8929()
{
    // event 1784_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1784_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(15);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(0, ((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_x()+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*10);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bosschopper_2216_instances, default_active_instance))->get_y()+68);
    }
    event_1784_36_end: ;
}
void Frames::event_func_8930()
{
    // event 1785_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1785_36_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1785_36_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1785_36_end: ;
}
void Frames::event_func_8931()
{
    // event 1786_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1786_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1786_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)-160))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1786_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -8);
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)get_instance(player_389_instances))->get_x()+150, ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()-150));
        }
    }
    event_1786_36_end: ;
}
void Frames::event_func_8932()
{
    // event 1787_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1787_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1787_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)-160))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1787_36_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(9, 1);
    }
    event_1787_36_end: ;
}
void Frames::event_func_8933()
{
    // event 1788_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1788_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1788_36_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)-160))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1788_36_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1) goto event_1788_36_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
    }
    event_1788_36_end: ;
}
void Frames::event_func_8934()
{
    // event 1789_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1789_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1789_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (80))) goto event_1789_36_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_spade_encounter_1) goto event_1789_36_end;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1789_36_end: ;
}
void Frames::event_func_8935()
{
    // event 1790_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1)) goto event_1790_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (-1))) goto event_1790_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (80))) goto event_1790_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(10, 9);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, -1);
    }
    event_1790_36_end: ;
}
void Frames::event_func_8936()
{
    // event 1791_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1791_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (0))) goto event_1791_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = true;
        }
    }
    event_1791_36_end: ;
}
void Frames::event_func_8937()
{
    // event 1792_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1792_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+100))) goto event_1792_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1792_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, -1);
    }
    event_1792_36_end: ;
}
void Frames::event_func_8938()
{
    // event 1793_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1793_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-100))) goto event_1793_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1793_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, 1);
    }
    event_1793_36_end: ;
}
void Frames::event_func_8939()
{
    // event 1794_36
    bool or_result_1794_36 = false;
    bool or_temp_result_1794_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1794_36_0_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1794_36_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+300))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (120))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1794_36_0_end;
        or_result_1794_36 = true;
        or_temp_result_1794_36_0 = true;
    }
    or_event_1794_36_0_end: ;
    player_389_instances.clear_saved_selection();
    bossspademask_2231_instances.clear_saved_selection();
    if (or_temp_result_1794_36_0) {
        player_389_instances.save_selection();
        bossspademask_2231_instances.save_selection();
    }
    // event 1794_36
    bool or_temp_result_1794_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1794_36_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1794_36_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1794_36_1_end;
        or_result_1794_36 = true;
        or_temp_result_1794_36_1 = true;
        or_event_1794_36_1_end: ;
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_1794_36_1) {
            playermovementvalues_245_instances.save_selection();
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1794_36) goto or_final_or_event_1794_36_1_end;
        bossspademask_2231_instances.empty_selection();
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1794_36_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1794_36_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1794_36_0 || or_temp_result_1794_36_1) {
            bossspademask_2231_instances.restore_selection();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    or_final_or_event_1794_36_1_end: ;
}
void Frames::event_func_8940()
{
    // event 1795_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1795_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(13)) == (30))) goto event_1795_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1795_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(13, 1);
        media.play(str_data_voices_eng_sp_spade_comeon_ogg_178, 28-1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 39)), 2, 39);
    }
    event_1795_36_end: ;
}
void Frames::event_func_8941()
{
    // event 1796_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1796_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(13)) == (30))) goto event_1796_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1796_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(13, 1);
        media.play(str_data_voices_eng_sp_spade_goodenough_ogg_179, 28-1);
    }
    event_1796_36_end: ;
}
void Frames::event_func_8942()
{
    // event 1797_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1797_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(13)) == (90))) goto event_1797_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1797_36_end;
        if (once_condition_1797_36) goto event_1797_36_end;
        once_condition_1797_36 = true;
        media.play(str_data_voices_eng_li_lilac_hitmeifyoucan_ogg_180, 28-1);
    }
    event_1797_36_end: ;
}
void Frames::event_func_8943()
{
    // event 1798_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1798_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(13)) == (400))) goto event_1798_36_end;
        media.play(str_data_voices_eng_sp_spade_comeon2_ogg_181, 28-1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(13, -300);
    }
    event_1798_36_end: ;
}
void Frames::event_func_8944()
{
    // event 1799_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1799_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(13)) != (0))) goto event_1799_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1799_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 3);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(10, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 5);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
    }
    event_1799_36_end: ;
}
void Frames::event_func_8945()
{
    // event 1800_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1800_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (-1))) goto event_1800_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) <= (0))) goto event_1800_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) > (-2))) goto event_1800_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, -2);
    }
    event_1800_36_end: ;
}
void Frames::event_func_8946()
{
    // event 1801_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1801_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (-1))) goto event_1801_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) > (0))) goto event_1801_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)-0.2, -5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1801_36_end: ;
}
void Frames::event_func_8947()
{
    // event 1802_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1802_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (-1))) goto event_1802_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)-0.1, -5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1802_36_end: ;
}
void Frames::event_func_8948()
{
    // event 1803_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1803_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (1))) goto event_1803_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) >= (0))) goto event_1803_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) < (2))) goto event_1803_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, 2);
    }
    event_1803_36_end: ;
}
void Frames::event_func_8949()
{
    // event 1804_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1804_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (1))) goto event_1804_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) < (0))) goto event_1804_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)+0.2, 5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1804_36_end: ;
}
void Frames::event_func_8950()
{
    // event 1805_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1805_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (1))) goto event_1805_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)+0.1, 5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1805_36_end: ;
}
void Frames::event_func_8951()
{
    // event 1806_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1806_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (0))) goto event_1806_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) < (0))) goto event_1806_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)+0.2, 0));
    }
    event_1806_36_end: ;
}
void Frames::event_func_8952()
{
    // event 1807_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1807_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (0))) goto event_1807_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) > (0))) goto event_1807_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_1807_36_end: ;
}
void Frames::event_func_8953()
{
    // event 1808_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1808_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(11)) == (0))) goto event_1808_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(11, 90);
    }
    event_1808_36_end: ;
}
void Frames::event_func_8954()
{
    // event 1809_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1809_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(11)) > (0))) goto event_1809_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(11, 1);
    }
    event_1809_36_end: ;
}
void Frames::event_func_8955()
{
    // event 1810_36
    bool or_result_1810_36 = false;
    bool or_temp_result_1810_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1810_36_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1810_36_0_end;
        or_result_1810_36 = true;
        or_temp_result_1810_36_0 = true;
    }
    or_event_1810_36_0_end: ;
    bossspademask_2231_instances.clear_saved_selection();
    if (or_temp_result_1810_36_0) {
        bossspademask_2231_instances.save_selection();
    }
    // event 1810_36
    bool or_temp_result_1810_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto or_event_1810_36_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-300))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1810_36_1_end;
        or_result_1810_36 = true;
        or_temp_result_1810_36_1 = true;
        or_event_1810_36_1_end: ;
        if (or_temp_result_1810_36_1) {
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1810_36) goto or_final_or_event_1810_36_1_end;
        bossspademask_2231_instances.empty_selection();
        if (or_temp_result_1810_36_0 || or_temp_result_1810_36_1) {
            bossspademask_2231_instances.restore_selection();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 4);
        }
    }
    or_final_or_event_1810_36_1_end: ;
}
void Frames::event_func_8956()
{
    // event 1811_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1811_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(11)) > (140))) goto event_1811_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1811_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1811_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1811_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, -8);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1811_36_end: ;
}
void Frames::event_func_8957()
{
    // event 1812_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1812_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(11)) > (140))) goto event_1812_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1812_36_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+200))) goto event_1812_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1812_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, -8);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1812_36_end: ;
}
void Frames::event_func_8958()
{
    // event 1813_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1813_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1813_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (0))) goto event_1813_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) == (0))) goto event_1813_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(40)) goto event_1813_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(0);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
        ((Active*)get_instance(bossspade_2194_instances))->restore_speed();
    }
    event_1813_36_end: ;
}
void Frames::event_func_8959()
{
    // event 1814_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1814_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1814_36_end;
        if (!((get_abs(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))) > (0))) goto event_1814_36_end;
        if (!((get_abs(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))) < (5))) goto event_1814_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(1);
        ((Active*)get_instance(bossspade_2194_instances))->force_speed(14+get_abs(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))*5);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1814_36_end: ;
}
void Frames::event_func_8960()
{
    // event 1815_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1)) goto event_1815_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1815_36_end;
        if (!((get_abs(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))) >= (5))) goto event_1815_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(2);
        ((Active*)get_instance(bossspade_2194_instances))->force_speed(27+get_abs(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))*2);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
    }
    event_1815_36_end: ;
}
void Frames::event_func_8961()
{
    // event 1816_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1816_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (1))) goto event_1816_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = true;
        }
    }
    event_1816_36_end: ;
}
void Frames::event_func_8962()
{
    // event 1817_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1817_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (2))) goto event_1817_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = true;
        }
    }
    event_1817_36_end: ;
}
void Frames::event_func_8963()
{
    // event 1818_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1818_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
        ((Active*)get_instance(bossspade_2194_instances))->restore_speed();
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)+0.3, 15));
    }
    event_1818_36_end: ;
}
void Frames::event_func_8964()
{
    // event 1819_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1819_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (0))) goto event_1819_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1819_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(8, randrange(2)*2-1);
    }
    event_1819_36_end: ;
}
void Frames::event_func_8965()
{
    // event 1820_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1820_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (-1))) goto event_1820_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)-0.1, -5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1820_36_end: ;
}
void Frames::event_func_8966()
{
    // event 1821_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1821_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(8)) == (1))) goto event_1821_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)+0.1, 5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1821_36_end: ;
}
void Frames::event_func_8967()
{
    // event 1822_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1822_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(12)) <= (0))) goto event_1822_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)) >= (-2))) goto event_1822_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1822_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1822_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1822_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3), -5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 5);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*3);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1822_36_end: ;
}
void Frames::event_func_8968()
{
    // event 1823_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1823_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(12)) <= (0))) goto event_1823_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)) >= (-2))) goto event_1823_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1823_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1823_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1823_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3), -5));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 5);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*3);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1823_36_end: ;
}
void Frames::event_func_8969()
{
    // event 1824_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (2))) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)) >= (0))) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-300))) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+300))) goto event_1824_36_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1824_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(16)) <= (0))) goto event_1824_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 4);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.sub(12, 1);
    }
    event_1824_36_end: ;
}
void Frames::event_func_8970()
{
    // event 1825_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto event_1825_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (2))) goto event_1825_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(3)) >= (0))) goto event_1825_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(1)) >= (((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4)))) goto event_1825_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(1, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(10, 0);
    }
    event_1825_36_end: ;
}
void Frames::event_func_8971()
{
    // event 1826_36
    bool or_result_1826_36 = false;
    bool or_temp_result_1826_36_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto or_event_1826_36_0_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-2))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1826_36_0_end;
        or_result_1826_36 = true;
        or_temp_result_1826_36_0 = true;
    }
    or_event_1826_36_0_end: ;
    bossspademask_2231_instances.clear_saved_selection();
    if (or_temp_result_1826_36_0) {
        bossspademask_2231_instances.save_selection();
    }
    // event 1826_36
    bool or_temp_result_1826_36_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1)) goto or_event_1826_36_1_end;
        bossspademask_2231_instances.clear_selection();
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (-6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
        }
        if (!bossspademask_2231_instances.has_selection()) goto or_event_1826_36_1_end;
        or_result_1826_36 = true;
        or_temp_result_1826_36_1 = true;
        or_event_1826_36_1_end: ;
        if (or_temp_result_1826_36_1) {
            bossspademask_2231_instances.save_selection();
        }
        if (!or_result_1826_36) goto or_final_or_event_1826_36_1_end;
        bossspademask_2231_instances.empty_selection();
        if (or_temp_result_1826_36_0 || or_temp_result_1826_36_1) {
            bossspademask_2231_instances.restore_selection();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 3);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bossspade_2194_instances.clear_selection();
        for (ObjectIterator it(bossspade_2194_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(bossspademask_2231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    or_final_or_event_1826_36_1_end: ;
}
void Frames::event_func_8972()
{
    // event 1827_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1827_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (3))) goto event_1827_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = true;
        }
    }
    event_1827_36_end: ;
}
void Frames::event_func_8973()
{
    // event 1828_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1828_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.add(9, 1);
    }
    event_1828_36_end: ;
}
void Frames::event_func_8974()
{
    // event 1829_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1829_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) == (5))) goto event_1829_36_end;
        FrameObject * single_instance_1829_36_0; single_instance_1829_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossspademask_2231_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -12), parent->layer);
                if (single_instance_1829_36_0 == NULL)
                    single_instance_1829_36_0 = new_obj;
            }
        }
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
    }
    event_1829_36_end: ;
}
void Frames::event_func_8975()
{
    // event 1830_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1830_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (5))) goto event_1830_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(29);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)*15);
    }
    event_1830_36_end: ;
}
void Frames::event_func_8976()
{
    // event 1831_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1831_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (5))) goto event_1831_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)%math_helper%2) == (1))) goto event_1831_36_end;
        FrameObject * single_instance_1831_36_0; single_instance_1831_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossspade_2194_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1831_36_0 == NULL)
                    single_instance_1831_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1831_36_0))->set_direction(((Active*)get_instance(bossspade_2194_instances))->get_direction());
        ((Active*)single_instance_1831_36_0)->move_back(((Active*)get_instance(bossspade_2194_instances)));
    }
    event_1831_36_end: ;
}
void Frames::event_func_8977()
{
    // event 1832_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1)) goto event_1832_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(9)) > (13))) goto event_1832_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(24);
        ((Active*)get_instance(bossspade_2194_instances))->force_frame(3);
        ((Active*)get_instance(bossspade_2194_instances))->restore_frame();
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(5, 2);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(5, get_max(-5, ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2))));
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(9, 0);
    }
    event_1832_36_end: ;
}
void Frames::event_func_8978()
{
    // event 1833_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1)) goto event_1833_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(5)) == (4))) goto event_1833_36_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1) {
            group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = true;
        }
    }
    event_1833_36_end: ;
}
void Frames::event_func_8979()
{
    // event 1834_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1834_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(25)) goto event_1834_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(26)) goto event_1834_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(28)) goto event_1834_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) <= (0))) goto event_1834_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1834_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(26);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, -1);
    }
    event_1834_36_end: ;
}
void Frames::event_func_8980()
{
    // event 1835_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1835_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(25)) goto event_1835_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(26)) goto event_1835_36_end;
        if (((Active*)get_instance(bossspade_2194_instances))->test_animation(28)) goto event_1835_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) <= (0))) goto event_1835_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1835_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->force_animation(26);
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(7, 1);
    }
    event_1835_36_end: ;
}
void Frames::event_func_8981()
{
    // event 1836_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1836_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) < (0))) goto event_1836_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_min(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)+0.2, 0));
    }
    event_1836_36_end: ;
}
void Frames::event_func_8982()
{
    // event 1837_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1837_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)) > (0))) goto event_1837_36_end;
        ((Active*)get_instance(bossspademask_2231_instances))->alterables->values.set(2, get_max(((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)-0.2, 0));
    }
    event_1837_36_end: ;
}
void Frames::event_func_8983()
{
    // event 1838_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1838_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) < (2))) goto event_1838_36_end;
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.set(0, 0);
    }
    event_1838_36_end: ;
}
void Frames::event_func_8984()
{
    // event 1839_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1839_36_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*0.25))) == (0))) goto event_1839_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) >= (2))) goto event_1839_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)) == (1))) goto event_1839_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) < (((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*10))) goto event_1839_36_end;
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        FrameObject * single_instance_1839_36_0; single_instance_1839_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossspade_2194_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1839_36_0 == NULL)
                    single_instance_1839_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1839_36_0))->alterables->values.set(0, ((Active*)single_instance_1839_36_0)->get_x());
        ((Active*)((Active*)single_instance_1839_36_0))->alterables->values.set(1, ((Active*)single_instance_1839_36_0)->get_y());
        ((Active*)((Active*)single_instance_1839_36_0))->alterables->values.set(2, cos_deg(0+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*2-((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0))*(8+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)*0.5)*((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7));
        ((Active*)((Active*)single_instance_1839_36_0))->alterables->values.set(3, sin_deg(0-0+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*2-((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0))*(8+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)*0.5)*((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7));
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(0, 10);
        ((Active*)((Active*)single_instance_1839_36_0))->set_layer(((Active*)get_instance(bossspade_2194_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1839_36_0))->alterables->values.set(8, ((Active*)single_instance_1839_36_0)->alterables->values.get(8)+((Active*)get_instance(bossspade_2194_instances))->alterables->flags.get(1)*2);
    }
    event_1839_36_end: ;
}
void Frames::event_func_8985()
{
    // event 1840_36
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_spade_1 && group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1)) goto event_1840_36_end;
        if (!((global_values->get(3)%math_helper%(3-get_floor(((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*0.25))) == (0))) goto event_1840_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->get_frame()) >= (2))) goto event_1840_36_end;
        if (!((((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7)) != (1))) goto event_1840_36_end;
        if (!((((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0)) < (((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*10))) goto event_1840_36_end;
        FrameObject * single_instance_1840_36_0; single_instance_1840_36_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossspade_2194_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspadecard_2128(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1840_36_0 == NULL)
                    single_instance_1840_36_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1840_36_0))->alterables->values.set(0, ((Active*)single_instance_1840_36_0)->get_x());
        ((Active*)((Active*)single_instance_1840_36_0))->alterables->values.set(1, ((Active*)single_instance_1840_36_0)->get_y());
        ((Active*)((Active*)single_instance_1840_36_0))->alterables->values.set(2, cos_deg(0+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*-2+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0))*(8+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)*-0.5)*((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7));
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        ((Active*)((Active*)single_instance_1840_36_0))->alterables->values.set(3, sin_deg(0-0+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(1)*-2+((Active*)get_instance(bossspade_2194_instances))->alterables->values.get(0))*(8+((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(2)*-0.5)*((Active*)get_instance(bossspademask_2231_instances))->alterables->values.get(7));
        ((Active*)get_instance(bossspade_2194_instances))->alterables->values.add(0, 10);
        ((Active*)((Active*)single_instance_1840_36_0))->set_layer(((Active*)get_instance(bossspade_2194_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1840_36_0))->alterables->values.set(8, ((Active*)single_instance_1840_36_0)->alterables->values.get(8)+((Active*)get_instance(bossspade_2194_instances))->alterables->flags.get(1)*2);
    }
    event_1840_36_end: ;
}
