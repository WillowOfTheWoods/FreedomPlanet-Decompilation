#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11612()
{
    // event 1548_49
    bool or_result_1548_49 = false;
    bool or_temp_result_1548_49_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1548_49_0_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1548_49_0_end;
        or_result_1548_49 = true;
        or_temp_result_1548_49_0 = true;
    }
    or_event_1548_49_0_end: ;
    bosssyntaxsquidbody_2869_instances.clear_saved_selection();
    if (or_temp_result_1548_49_0) {
        bosssyntaxsquidbody_2869_instances.save_selection();
    }
    // event 1548_49
    bool or_temp_result_1548_49_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1548_49_1_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (270))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1548_49_1_end;
        or_result_1548_49 = true;
        or_temp_result_1548_49_1 = true;
        or_event_1548_49_1_end: ;
        if (or_temp_result_1548_49_1) {
            bosssyntaxsquidbody_2869_instances.save_selection();
        }
        if (!or_result_1548_49) goto or_final_or_event_1548_49_1_end;
        bosssyntaxsquidbody_2869_instances.empty_selection();
        if (or_temp_result_1548_49_0 || or_temp_result_1548_49_1) {
            bosssyntaxsquidbody_2869_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(5)*2)%math_helper%360);
        }
    }
    or_final_or_event_1548_49_1_end: ;
}
void Frames::event_func_11613()
{
    // event 1549_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1549_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1549_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)*9)*0.1);
        }
    }
    event_1549_49_end: ;
}
void Frames::event_func_11614()
{
    // event 1550_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1550_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1550_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)*9+360)*0.1);
        }
    }
    event_1550_49_end: ;
}
void Frames::event_func_11615()
{
    // event 1551_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1551_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1551_49_end;
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidclawleft_2871_instances.has_selection()) goto event_1551_49_end;
        bosslavalaser_2862_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosssyntaxsquidclawleft_2871_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -48), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -24), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
        }
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
            ((Active*)*it)->move_back();
            ((Active*)*it)->alterables->values.set(0, 15);
        }
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1551_49_end: ;
}
void Frames::event_func_11616()
{
    // event 1552_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1552_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (300))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1552_49_end;
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidclawright_2870_instances.has_selection()) goto event_1552_49_end;
        bosslavalaser_2862_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bosssyntaxsquidclawright_2870_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -48), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + -24), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                bosslavalaser_2862_instances.add_back();
            }
        }
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
            ((Active*)*it)->move_back();
            ((Active*)*it)->alterables->values.set(0, 15);
        }
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1552_49_end: ;
}
void Frames::event_func_11617()
{
    // event 1553_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1553_49_end;
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidclawleft_2871_instances.has_selection()) goto event_1553_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1553_49_end;
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1553_49_end: ;
}
void Frames::event_func_11618()
{
    // event 1554_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1554_49_end;
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidclawright_2870_instances.has_selection()) goto event_1554_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (300))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1554_49_end;
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1554_49_end: ;
}
void Frames::event_func_11619()
{
    // event 1555_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1555_49_end;
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (bosssyntaxsquidarmleft_2867_instances.size()))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmleft_2867_instances.has_selection()) goto event_1555_49_end;
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxsquidarmleft_2867_instances, it.current_index));
            if (parent == NULL) goto pos_end_1555_49_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1555_49_0: ;
        }
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)+(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-180)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+135+180+30)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9), 0);
        }
    }
    event_1555_49_end: ;
}
void Frames::event_func_11620()
{
    // event 1556_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1556_49_end;
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (bosssyntaxsquidarmright_2868_instances.size()))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmright_2868_instances.has_selection()) goto event_1556_49_end;
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxsquidarmright_2868_instances, it.current_index));
            if (parent == NULL) goto pos_end_1556_49_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1556_49_0: ;
        }
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(2)-(sin_deg(((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(3)-180)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(4)+45+300)*((Active*)get_instance(bosssyntaxsquidbody_2869_instances, it.current_index, default_active_instance))->alterables->values.get(9), 0);
        }
    }
    event_1556_49_end: ;
}
void Frames::event_func_11621()
{
    // event 1557_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1557_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1557_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1557_49_end: ;
}
void Frames::event_func_11622()
{
    // event 1558_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1558_49_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1558_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1558_49_end;
        FrameObject * single_instance_1558_49_0; single_instance_1558_49_0 = NULL;
        // select single: true false false
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator p_it(bosssyntaxsquidhead_2866_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1558_49_0 == NULL)
                    single_instance_1558_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1558_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1558_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1558_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)((Active*)single_instance_1558_49_0))->set_x(((Active*)single_instance_1558_49_0)->get_x()-60+randrange(121));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1558_49_end: ;
}
void Frames::event_func_11623()
{
    // event 1559_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1559_49_end;
        every_1559_49 += manager.dt;
        if (every_1559_49 < 0.24) goto event_1559_49_end;
        every_1559_49 -= 0.24;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1559_49_end;
        media.play_id(SOUND_RUMBLE_78, -1, 1);
    }
    event_1559_49_end: ;
}
void Frames::event_func_11624()
{
    // event 1560_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1560_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (101))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosslavasplashleft1_2879_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1560_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, -12);
        }
    }
    event_1560_49_end: ;
}
void Frames::event_func_11625()
{
    // event 1561_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1561_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (101))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1561_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(18, get_min(((Active*)*it)->alterables->values.get(18)+0.3, 15));
        }
    }
    event_1561_49_end: ;
}
void Frames::event_func_11626()
{
    // event 1562_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1562_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1562_49_end;
        if (not_always_1562_49 > loop_count) {
            not_always_1562_49 = loop_count + 2;
            goto event_1562_49_end;
        }
        not_always_1562_49 = loop_count + 2;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1562_49_end: ;
}
void Frames::event_func_11627()
{
    // event 1563_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1563_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosslavasplashleft1_2879_instances, default_active_instance))->get_y()-112))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1563_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bosslavasplashleft1_2879_instances, it.current_index, default_active_instance))->get_y()-112);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1563_49_end: ;
}
void Frames::event_func_11628()
{
    // event 1564_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1564_49_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1564_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (106))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1564_49_end;
        if (!((get_abs(((Active*)get_single(bosssyntaxsquidbody_2869_instances, default_active_instance))->alterables->values.get(20))+get_abs(((Active*)get_single(bosssyntaxsquidbody_2869_instances, default_active_instance))->alterables->values.get(18))) > (3))) goto event_1564_49_end;
        media.play_id(SOUND_ROTORBLADE_266, -1, 1);
    }
    event_1564_49_end: ;
}
void Frames::event_func_11629()
{
    // event 1565_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1565_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (101))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1565_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(20));
            ((Active*)*it)->alterables->values.set(20, get_max(((Active*)*it)->alterables->values.get(20)-0.3, -12));
        }
    }
    event_1565_49_end: ;
}
void Frames::event_func_11630()
{
    // event 1566_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1566_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (101))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+96))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1566_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+96);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1566_49_end: ;
}
void Frames::event_func_11631()
{
    // event 1567_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1567_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (102))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1567_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(18, get_max(((Active*)*it)->alterables->values.get(18)-0.3, -12));
        }
    }
    event_1567_49_end: ;
}
void Frames::event_func_11632()
{
    // event 1568_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1568_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (102))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()+96))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1568_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(cameralimitbosstop_423_instances, it.current_index, default_active_instance))->get_y()+96);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1568_49_end: ;
}
void Frames::event_func_11633()
{
    // event 1569_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1569_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (103))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1569_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(20));
            ((Active*)*it)->alterables->values.set(20, get_min(((Active*)*it)->alterables->values.get(20)+0.3, 12));
        }
    }
    event_1569_49_end: ;
}
void Frames::event_func_11634()
{
    // event 1570_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1570_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (103))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-96))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1570_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x()-96);
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
    }
    event_1570_49_end: ;
}
void Frames::event_func_11635()
{
    // event 1571_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1571_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (104))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1571_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(18, get_min(((Active*)*it)->alterables->values.get(18)+0.3, 12));
        }
    }
    event_1571_49_end: ;
}
void Frames::event_func_11636()
{
    // event 1572_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1572_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (104))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosslavasplashleft1_2879_instances, default_active_instance))->get_y()-112))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1572_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bosslavasplashleft1_2879_instances, it.current_index, default_active_instance))->get_y()-112);
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1572_49_end: ;
}
void Frames::event_func_11637()
{
    // event 1573_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1573_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (105))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1573_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(20));
            ((Active*)*it)->alterables->values.set(20, get_max(((Active*)*it)->alterables->values.get(20)-0.3, -12));
        }
    }
    event_1573_49_end: ;
}
void Frames::event_func_11638()
{
    // event 1574_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1574_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (105))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+96))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1574_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(20, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+96);
            ((Active*)*it)->alterables->values.set(18, -15);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 6);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
    }
    event_1574_49_end: ;
}
void Frames::event_func_11639()
{
    // event 1575_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1575_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (106))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1575_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(18, get_min(((Active*)*it)->alterables->values.get(18)+0.3, 15));
            ((Active*)*it)->alterables->values.add(0, 3);
        }
    }
    event_1575_49_end: ;
}
void Frames::event_func_11640()
{
    // event 1576_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1576_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (106))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosslavasplashleft1_2879_instances, default_active_instance))->get_y()-128))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1576_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1-1);
        }
    }
    event_1576_49_end: ;
}
void Frames::event_func_11641()
{
    // event 1577_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1577_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (106))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(bosslavasplashleft1_2879_instances, default_active_instance))->get_y()+200))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1577_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1577_49_end: ;
}
void Frames::event_func_11642()
{
    // event 1578_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1578_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1578_49_end;
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+16, 0);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1578_49_end: ;
}
void Frames::event_func_11643()
{
    // event 1579_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1579_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bosssyntaxsquidhitbox_2881_instances, playercharactersensor_383_instances)) goto event_1579_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (5))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1579_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1579_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1579_49_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(6, get_max(-15, get_min((((Active*)get_instance(player_389_instances))->get_y()-((Active*)get_single(bosssyntaxsquidhitbox_2881_instances, default_active_instance))->get_y())*0.5, 15)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, get_max(-15, get_min((((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_single(bosssyntaxsquidhitbox_2881_instances, default_active_instance))->get_x())*0.5, 15)));
    }
    event_1579_49_end: ;
}
void Frames::event_func_11644()
{
    // event 1580_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1580_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1580_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        effectwarning2_1864_instances.clear_selection();
        for (ObjectIterator it(effectwarning2_1864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)get_instance(bosslavasplashright1_2880_instances, it.current_index, default_active_instance))->get_y()+40, frame_top()+global_values->get(17)-20));
            ((Active*)*it)->set_x(((Active*)get_instance(bosslavasplashright1_2880_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1580_49_end: ;
}
void Frames::event_func_11645()
{
    // event 1581_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1581_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (40))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1581_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1581_49_end;
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(6, -15);
        }
    }
    event_1581_49_end: ;
}
void Frames::event_func_11646()
{
    // event 1582_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1582_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (90))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1582_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1582_49_end;
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(6, -15);
        }
    }
    event_1582_49_end: ;
}
void Frames::event_func_11647()
{
    // event 1583_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1583_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (140))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1583_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1583_49_end;
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(6, -15);
        }
    }
    event_1583_49_end: ;
}
void Frames::event_func_11648()
{
    // event 1584_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1584_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (240))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1584_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1584_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 5);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
    }
    event_1584_49_end: ;
}
void Frames::event_func_11649()
{
    // event 1585_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1585_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (240))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1585_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 50);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
    }
    event_1585_49_end: ;
}
void Frames::event_func_11650()
{
    // event 1586_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1586_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1586_49_end;
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.2, 15));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.sub(4, get_abs(((Active*)*it)->alterables->values.get(6)*2));
        }
    }
    event_1586_49_end: ;
}
void Frames::event_func_11651()
{
    // event 1587_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1587_49_end;
        bossspikesphere2_2877_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere2_2877_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossspikesphere_2876_instances, it.current_index));
            if (parent == NULL) goto pos_end_1587_49_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1587_49_0: ;
        }
        for (ObjectIterator it(bossspikesphere2_2877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bossspikesphere_2876_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
    }
    event_1587_49_end: ;
}
void Frames::event_func_11652()
{
    // event 1588_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1588_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (((Active*)*it)->alterables->values.get(8)))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1588_49_end;
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1588_49_end: ;
}
void Frames::event_func_11653()
{
    // event 1589_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1589_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1589_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_min(((Active*)*it)->alterables->values.get(12)+1, 20));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, 30));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-2, 45));
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+2, 135));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-1, 5));
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1589_49_end: ;
}
void Frames::event_func_11654()
{
    // event 1590_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1590_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1590_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)*9)*0.1);
        }
    }
    event_1590_49_end: ;
}
void Frames::event_func_11655()
{
    // event 1591_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1591_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1591_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)*9+360)*0.1);
        }
    }
    event_1591_49_end: ;
}
void Frames::event_func_11656()
{
    // event 1592_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1592_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1592_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-1, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-1, 10));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+2, 90));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-2, 90));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+1, 25));
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bosslavasplashleft1_2879_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft1_2879_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxsquidshoulderleft_2865_instances, it.current_index, default_active_instance))->get_action_x());
        }
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxsquidshoulderleft_2865_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssyntaxsquidshoulderleft_2865_instances, it.current_index, default_active_instance))->get_action_y());
        }
        bosslavasplashright1_2880_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright1_2880_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxsquidshoulderright_2864_instances, it.current_index, default_active_instance))->get_action_x());
        }
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxsquidshoulderright_2864_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssyntaxsquidshoulderright_2864_instances, it.current_index, default_active_instance))->get_action_y());
        }
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1592_49_end: ;
}
void Frames::event_func_11657()
{
    // event 1593_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1593_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1593_49_end;
        media.play_id(SOUND_LOWBUZZ_307, -1, 1);
    }
    event_1593_49_end: ;
}
void Frames::event_func_11658()
{
    // event 1594_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1594_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1594_49_end;
        media.play_id(SOUND_LAVAEXTRACT_306, -1, 1);
    }
    event_1594_49_end: ;
}
void Frames::event_func_11659()
{
    // event 1595_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1595_49_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1595_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1595_49_end;
        FrameObject * single_instance_1595_49_0; single_instance_1595_49_0 = NULL;
        // select single: true false false
        bosslavasplashleft1_2879_instances.clear_selection();
        for (ObjectIterator p_it(bosslavasplashleft1_2879_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1595_49_0 == NULL)
                    single_instance_1595_49_0 = new_obj;
            }
        }
        ((Active*)single_instance_1595_49_0)->move_back(((Active*)get_single(bosslavasplashleft1_2879_instances)));
        ((Active*)((Active*)single_instance_1595_49_0))->alterables->values.set(0, -12);
        for (ObjectIterator it(bosslavasplashleft1_2879_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1595_49_end: ;
}
void Frames::event_func_11660()
{
    // event 1596_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1596_49_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1596_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1596_49_end;
        FrameObject * single_instance_1596_49_0; single_instance_1596_49_0 = NULL;
        // select single: true false false
        bosslavasplashright1_2880_instances.clear_selection();
        for (ObjectIterator p_it(bosslavasplashright1_2880_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1596_49_0 == NULL)
                    single_instance_1596_49_0 = new_obj;
            }
        }
        ((Active*)single_instance_1596_49_0)->move_back(((Active*)get_single(bosslavasplashright1_2880_instances)));
        ((Active*)((Active*)single_instance_1596_49_0))->alterables->values.set(0, -12);
        for (ObjectIterator it(bosslavasplashright1_2880_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1596_49_end: ;
}
void Frames::event_func_11661()
{
    // event 1597_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1597_49_end;
        bosslavalaser_2862_instances.clear_selection();
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosslavalaser_2862_instances.has_selection()) goto event_1597_49_end;
        bosslavasplashleft2_2882_instances.clear_selection();
        if (!check_overlap(bosslavalaser_2862_instances, bosslavasplashleft2_2882_instances)) goto event_1597_49_end;
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bosssyntaxsquidshoulderleft_2865_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!bosslavalaser_2862_instances.has_selection()) goto event_1597_49_end;
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_front();
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1597_49_end: ;
}
void Frames::event_func_11662()
{
    // event 1598_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1598_49_end;
        bosslavalaser_2862_instances.clear_selection();
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosslavalaser_2862_instances.has_selection()) goto event_1598_49_end;
        bosslavasplashright2_2883_instances.clear_selection();
        if (!check_overlap(bosslavalaser_2862_instances, bosslavasplashright2_2883_instances)) goto event_1598_49_end;
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bosssyntaxsquidshoulderright_2864_instances, default_active_instance))->get_action_y()))) { it.deselect(); continue; }
        }
        if (!bosslavalaser_2862_instances.has_selection()) goto event_1598_49_end;
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->move_front();
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1598_49_end: ;
}
void Frames::event_func_11663()
{
    // event 1599_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1599_49_end;
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!bosslavasplashleft2_2882_instances.has_selection()) goto event_1599_49_end;
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1599_49_end: ;
}
void Frames::event_func_11664()
{
    // event 1600_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1600_49_end;
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!bosslavasplashright2_2883_instances.has_selection()) goto event_1600_49_end;
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1600_49_end: ;
}
void Frames::event_func_11665()
{
    // event 1601_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1601_49_end;
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!bosslavasplashleft2_2882_instances.has_selection()) goto event_1601_49_end;
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1601_49_end: ;
}
void Frames::event_func_11666()
{
    // event 1602_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1602_49_end;
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!bosslavasplashright2_2883_instances.has_selection()) goto event_1602_49_end;
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1602_49_end: ;
}
void Frames::event_func_11667()
{
    // event 1603_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1603_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1603_49_end;
        bosslavasplashleft1_2879_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft1_2879_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosslavasplashright1_2880_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright1_2880_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1603_49_end: ;
}
void Frames::event_func_11668()
{
    // event 1604_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1604_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (120))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1604_49_end;
        if (!((bosslavalaser_2862_instances.size()) == (0))) goto event_1604_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(17, 2+((Active*)*it)->alterables->flags.get(3)*2);
        }
    }
    event_1604_49_end: ;
}
void Frames::event_func_11669()
{
    // event 1605_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1605_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (20))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1605_49_end;
        media.play_id(SOUND_LAVABURST_305, -1, 1);
    }
    event_1605_49_end: ;
}
void Frames::event_func_11670()
{
    // event 1606_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1606_49_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1606_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1606_49_end;
        FrameObject * single_instance_1606_49_0; single_instance_1606_49_0 = NULL;
        // select single: true false false
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator p_it(bosssyntaxsquidshoulderleft_2865_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1606_49_0 == NULL)
                    single_instance_1606_49_0 = new_obj;
            }
        }
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        ((Active*)((Active*)single_instance_1606_49_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1606_49_0))->move_back();
    }
    event_1606_49_end: ;
}
void Frames::event_func_11671()
{
    // event 1607_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1607_49_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1607_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1607_49_end;
        FrameObject * single_instance_1607_49_0; single_instance_1607_49_0 = NULL;
        // select single: true false false
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator p_it(bosssyntaxsquidshoulderright_2864_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavalaser_2862(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1607_49_0 == NULL)
                    single_instance_1607_49_0 = new_obj;
            }
        }
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        ((Active*)((Active*)single_instance_1607_49_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1607_49_0))->move_back();
    }
    event_1607_49_end: ;
}
void Frames::event_func_11672()
{
    // event 1608_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1608_49_end;
        bosslavalaser_2862_instances.clear_selection();
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosslavalaser_2862_instances.has_selection()) goto event_1608_49_end;
        hazardlavapit_2719_instances.clear_selection();
        if (!check_overlap(bosslavalaser_2862_instances, hazardlavapit_2719_instances)) goto event_1608_49_end;
        FrameObject * single_instance_1608_49_0; single_instance_1608_49_0 = pick_random(bosslavalaser_2862_instances);
        if (single_instance_1608_49_0 == NULL) goto event_1608_49_end;
        ((Active*)((Active*)single_instance_1608_49_0))->destroy();
        bosslavasplashmain_2861_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosslavasplashmain_2861(-32, -32), 1);
            bosslavasplashmain_2861_instances.add_back();
        }
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(hazardlavapit_2719_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->set_y(((Active*)get_single(hazardlavapit_2719_instances, it.current_index, default_active_instance))->get_box_index(1)+3);
            ((Active*)*it)->set_x(((Active*)single_instance_1608_49_0)->get_x());
        }
        {
            ObjectIterator other_it(hazardlavapit_2719_instances);
            for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1608_49_2_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1608_49_2_end: ;
    }
    event_1608_49_end: ;
}
void Frames::event_func_11673()
{
    // event 1609_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1609_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1609_49_end;
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1609_49_end: ;
}
void Frames::event_func_11674()
{
    // event 1610_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1610_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1610_49_end;
        if (!((bosslavalaser_2862_instances.size()) == (0))) goto event_1610_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.set(17, 1);
        }
    }
    event_1610_49_end: ;
}
void Frames::event_func_11675()
{
    // event 1611_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1611_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1611_49_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)get_instance(bosslavasplashleft1_2879_instances, it.current_index, default_active_instance))->get_y()+40, frame_top()+global_values->get(17)-20));
            ((Active*)*it)->set_x(((Active*)get_instance(bosslavasplashleft1_2879_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
        }
        effectwarning2_1864_instances.clear_selection();
        for (ObjectIterator it(effectwarning2_1864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)get_instance(bosslavasplashright1_2880_instances, it.current_index, default_active_instance))->get_y()+40, frame_top()+global_values->get(17)-20));
            ((Active*)*it)->set_x(((Active*)get_instance(bosslavasplashright1_2880_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1611_49_end: ;
}
void Frames::event_func_11676()
{
    // event 1612_49
    bool or_result_1612_49 = false;
    bool or_temp_result_1612_49_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1612_49_0_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1612_49_0_end;
        or_result_1612_49 = true;
        or_temp_result_1612_49_0 = true;
    }
    or_event_1612_49_0_end: ;
    bosssyntaxsquidbody_2869_instances.clear_saved_selection();
    if (or_temp_result_1612_49_0) {
        bosssyntaxsquidbody_2869_instances.save_selection();
    }
    // event 1612_49
    bool or_temp_result_1612_49_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto or_event_1612_49_1_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto or_event_1612_49_1_end;
        or_result_1612_49 = true;
        or_temp_result_1612_49_1 = true;
        or_event_1612_49_1_end: ;
        if (or_temp_result_1612_49_1) {
            bosssyntaxsquidbody_2869_instances.save_selection();
        }
        if (!or_result_1612_49) goto or_final_or_event_1612_49_1_end;
        bosssyntaxsquidbody_2869_instances.empty_selection();
        if (or_temp_result_1612_49_0 || or_temp_result_1612_49_1) {
            bosssyntaxsquidbody_2869_instances.restore_selection();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)get_instance(bosslavasplashleft2_2882_instances, it.current_index, default_active_instance))->get_y()-40, frame_top()+20));
            ((Active*)*it)->set_x(((Active*)get_instance(bosslavasplashright2_2883_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
        }
        effectwarning2_1864_instances.clear_selection();
        for (ObjectIterator it(effectwarning2_1864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)get_instance(bosslavasplashright2_2883_instances, it.current_index, default_active_instance))->get_y()-40, frame_top()+20));
            ((Active*)*it)->set_x(((Active*)get_instance(bosslavasplashleft2_2882_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
        }
    }
    or_final_or_event_1612_49_1_end: ;
}
void Frames::event_func_11677()
{
    // event 1613_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1613_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1613_49_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        effectwarning2_1864_instances.clear_selection();
        for (ObjectIterator it(effectwarning2_1864_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1613_49_end: ;
}
void Frames::event_func_11678()
{
    // event 1614_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1614_49_end;
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhead_2866_instances.has_selection()) goto event_1614_49_end;
        FrameObject * single_instance_1614_49_0; single_instance_1614_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidhead_2866_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1614_49_0 == NULL)
                    single_instance_1614_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1614_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1614_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1614_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_SLIME_FALL_253, -1, 1);
    }
    event_1614_49_end: ;
}
void Frames::event_func_11679()
{
    // event 1615_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1615_49_end;
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhead_2866_instances.has_selection()) goto event_1615_49_end;
        FrameObject * single_instance_1615_49_0; single_instance_1615_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidhead_2866_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1615_49_0 == NULL)
                    single_instance_1615_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1615_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1615_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1615_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_SLIME_RISE_254, -1, 1);
    }
    event_1615_49_end: ;
}
void Frames::event_func_11680()
{
    // event 1616_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1616_49_end;
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidshoulderleft_2865_instances.has_selection()) goto event_1616_49_end;
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1616_49_0; single_instance_1616_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidshoulderleft_2865_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1616_49_0 == NULL)
                    single_instance_1616_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1616_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1616_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1616_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1616_49_end: ;
}
void Frames::event_func_11681()
{
    // event 1617_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1617_49_end;
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidshoulderleft_2865_instances.has_selection()) goto event_1617_49_end;
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        FrameObject * single_instance_1617_49_0; single_instance_1617_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidshoulderleft_2865_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1617_49_0 == NULL)
                    single_instance_1617_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1617_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1617_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1617_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1617_49_end: ;
}
void Frames::event_func_11682()
{
    // event 1618_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1618_49_end;
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidshoulderright_2864_instances.has_selection()) goto event_1618_49_end;
        FrameObject * single_instance_1618_49_0; single_instance_1618_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidshoulderright_2864_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1618_49_0 == NULL)
                    single_instance_1618_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1618_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1618_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1618_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1618_49_end: ;
}
void Frames::event_func_11683()
{
    // event 1619_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1619_49_end;
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidshoulderright_2864_instances.has_selection()) goto event_1619_49_end;
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        FrameObject * single_instance_1619_49_0; single_instance_1619_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidshoulderright_2864_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1619_49_0 == NULL)
                    single_instance_1619_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1619_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1619_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1619_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1619_49_end: ;
}
void Frames::event_func_11684()
{
    // event 1620_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1620_49_end;
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmleft_2867_instances.has_selection()) goto event_1620_49_end;
        FrameObject * single_instance_1620_49_0; single_instance_1620_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidarmleft_2867_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1620_49_0 == NULL)
                    single_instance_1620_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1620_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1620_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1620_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1620_49_end: ;
}
void Frames::event_func_11685()
{
    // event 1621_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1621_49_end;
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmleft_2867_instances.has_selection()) goto event_1621_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        FrameObject * single_instance_1621_49_0; single_instance_1621_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidarmleft_2867_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1621_49_0 == NULL)
                    single_instance_1621_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1621_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1621_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1621_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1621_49_end: ;
}
void Frames::event_func_11686()
{
    // event 1622_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1622_49_end;
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmright_2868_instances.has_selection()) goto event_1622_49_end;
        FrameObject * single_instance_1622_49_0; single_instance_1622_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidarmright_2868_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1622_49_0 == NULL)
                    single_instance_1622_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1622_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1622_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1622_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1622_49_end: ;
}
void Frames::event_func_11687()
{
    // event 1623_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1623_49_end;
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidarmright_2868_instances.has_selection()) goto event_1623_49_end;
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        FrameObject * single_instance_1623_49_0; single_instance_1623_49_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxsquidarmright_2868_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1623_49_0 == NULL)
                    single_instance_1623_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1623_49_0))->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1623_49_0))->set_y(((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)+3);
        ((Active*)single_instance_1623_49_0)->move_back(((Active*)get_instance(hazardlavapit_2719_instances)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1623_49_end: ;
}
void Frames::event_func_11688()
{
    // event 1624_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1624_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1624_49_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        bosslavasplashmain_2861_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossspikesphere_2876_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + -16, parent->y + 0), parent->layer);
                bosslavasplashmain_2861_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 16, parent->y + 0), parent->layer);
                bosslavasplashmain_2861_instances.add_back();
            }
        }
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->set_y(((Active*)get_instance(hazardlavapit_2719_instances, it.current_index, default_active_instance))->get_box_index(1)+3);
        }
        {
            hazardlavapit_2719_instances.clear_selection();
            ObjectIterator other_it(hazardlavapit_2719_instances);
            for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1624_49_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1624_49_1_end: ;
        media.play_id(SOUND_SLIME_FALL_253, -1, 1);
    }
    event_1624_49_end: ;
}
void Frames::event_func_11689()
{
    // event 1625_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1625_49_end;
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(hazardlavapit_2719_instances, default_active_instance))->get_box_index(1)))) { it.deselect(); continue; }
        }
        if (!bossspikesphere_2876_instances.has_selection()) goto event_1625_49_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        media.play_id(SOUND_SLIME_RISE_254, -1, 1);
        bosslavasplashmain_2861_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossspikesphere_2876_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + -16, parent->y + 0), parent->layer);
                bosslavasplashmain_2861_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosslavasplashmain_2861(parent->x + 16, parent->y + 0), parent->layer);
                bosslavasplashmain_2861_instances.add_back();
            }
        }
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(hazardlavapit_2719_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->set_y(((Active*)get_instance(hazardlavapit_2719_instances, it.current_index, default_active_instance))->get_box_index(1)+3);
        }
        {
            hazardlavapit_2719_instances.clear_selection();
            ObjectIterator other_it(hazardlavapit_2719_instances);
            for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1625_49_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1625_49_1_end: ;
    }
    event_1625_49_end: ;
}
void Frames::event_func_11690()
{
    // event 1626_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1626_49_end;
        bosslavasplashmain_2861_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosslavasplashmain_2861_instances.has_selection()) goto event_1626_49_end;
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_speed(20+randrange(10));
        }
    }
    event_1626_49_end: ;
}
void Frames::event_func_11691()
{
    // event 1627_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1627_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1627_49_end;
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1627_49_end: ;
}
void Frames::event_func_11692()
{
    // event 1629_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1629_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1629_49_end;
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1629_49_end: ;
}
void Frames::event_func_11693()
{
    // event 1630_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1630_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1630_49_end;
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5+(global_values->get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1630_49_end: ;
}
void Frames::event_func_11694()
{
    // event 1631_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1631_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1631_49_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(bosstbplatform_2878_instances, playersensorbottombig_397_instances)) goto event_1631_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1631_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1631_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1631_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1631_49_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 15);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, default_active_instance))->alterables->values.get(9)));
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, default_active_instance))->alterables->values.get(9)));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform_2878_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
    }
    event_1631_49_end: ;
}
void Frames::event_func_11695()
{
    // event 1632_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1632_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1632_49_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1632_49_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(bosstbplatform_2878_instances, playersensorbottombig_397_instances)) goto event_1632_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1632_49_end;
        FrameObject * single_instance_1632_49_0; single_instance_1632_49_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1632_49_0 == NULL)
                    single_instance_1632_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1632_49_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1632_49_0))->set_x(((Active*)single_instance_1632_49_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1632_49_0))->set_y(((Active*)single_instance_1632_49_0)->get_y()-10+randrange(21));
    }
    event_1632_49_end: ;
}
void Frames::event_func_11696()
{
    // event 1633_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1633_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1633_49_end;
        if (!check_not_overlap(bosstbplatform_2878_instances, playersensorbottombig_397_instances)) goto event_1633_49_end;
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1633_49_end: ;
}
void Frames::event_func_11697()
{
    // event 1634_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1634_49_end;
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (80))) { it.deselect(); continue; }
        }
        if (!bosstbplatform_2878_instances.has_selection()) goto event_1634_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1634_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1634_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1634_49_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1634_49_end: ;
}
void Frames::event_func_11698()
{
    // event 1635_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1635_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1635_49_end;
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1635_49_end: ;
}
void Frames::event_func_11699()
{
    // event 1637_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1637_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1637_49_end;
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1637_49_end: ;
}
void Frames::event_func_11700()
{
    // event 1638_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1638_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1638_49_end;
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5+(global_values->get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1638_49_end: ;
}
void Frames::event_func_11701()
{
    // event 1639_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1639_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1639_49_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(bosstbplatform2_2874_instances, playersensorbottombig_397_instances)) goto event_1639_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1639_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1639_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1639_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1639_49_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 15);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, default_active_instance))->alterables->values.get(9)));
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 3);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, default_active_instance))->alterables->values.get(9)));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9), 255-((Active*)get_single(bosstbplatform2_2874_instances, it.current_index, default_active_instance))->alterables->values.get(9)));
        }
    }
    event_1639_49_end: ;
}
void Frames::event_func_11702()
{
    // event 1640_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1640_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1640_49_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1640_49_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(bosstbplatform2_2874_instances, playersensorbottombig_397_instances)) goto event_1640_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1640_49_end;
        FrameObject * single_instance_1640_49_0; single_instance_1640_49_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1640_49_0 == NULL)
                    single_instance_1640_49_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1640_49_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1640_49_0))->set_x(((Active*)single_instance_1640_49_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1640_49_0))->set_y(((Active*)single_instance_1640_49_0)->get_y()-10+randrange(21));
    }
    event_1640_49_end: ;
}
void Frames::event_func_11703()
{
    // event 1641_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1641_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1641_49_end;
        if (!check_not_overlap(bosstbplatform2_2874_instances, playersensorbottombig_397_instances)) goto event_1641_49_end;
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1641_49_end: ;
}
void Frames::event_func_11704()
{
    // event 1642_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1642_49_end;
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (80))) { it.deselect(); continue; }
        }
        if (!bosstbplatform2_2874_instances.has_selection()) goto event_1642_49_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1642_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1642_49_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1642_49_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1642_49_end: ;
}
void Frames::event_func_11705()
{
    // event 1643_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1643_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxsquidhead_2866_instances, it.current_index));
            if (parent == NULL) goto pos_end_1643_49_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1643_49_0: ;
        }
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosssyntaxsquidhead_2866_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1643_49_end: ;
}
void Frames::event_func_11706()
{
    // event 1644_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1644_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1644_49_end;
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1644_49_end: ;
}
void Frames::event_func_11707()
{
    // event 1645_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1645_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1645_49_end;
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1645_49_end: ;
}
void Frames::event_func_11708()
{
    // event 1646_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1646_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1646_49_end;
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1646_49_end: ;
}
void Frames::event_func_11709()
{
    // event 1647_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1647_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1647_49_end;
        bosssyntaxsquidback_2863_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidback_2863_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidshoulderright_2864_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderright_2864_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidshoulderleft_2865_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidshoulderleft_2865_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidarmleft_2867_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmleft_2867_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidarmright_2868_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidarmright_2868_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidclawright_2870_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawright_2870_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidclawleft_2871_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidclawleft_2871_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxsquidhead_2866_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(bosssyntaxsquidhead_2866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1647_49_end: ;
}
void Frames::event_func_11710()
{
    // event 1648_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1648_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1648_49_end;
        bosssyntaxsquidbody_2869_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidbody_2869_instances.has_selection()) goto event_1648_49_end;
        for (ObjectIterator it(bosssyntaxsquidbody_2869_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, get_min(((Active*)*it)->alterables->values.get(14), 40));
            ((Active*)*it)->alterables->values.set(15, (((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x())*0.5);
            ((Active*)*it)->alterables->values.set(16, ((Active*)get_instance(cameralimitbossbottom_420_instances, it.current_index, default_active_instance))->get_y()+250);
            ((Active*)*it)->alterables->values.set(17, 3);
        }
    }
    event_1648_49_end: ;
}
void Frames::event_func_11711()
{
    // event 1649_49
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1)) goto event_1649_49_end;
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (3))) { it.deselect(); continue; }
        }
        if (!bosssyntaxsquidhitbox_2881_instances.has_selection()) goto event_1649_49_end;
        levelheatsky_2757_instances.clear_selection();
        for (ObjectIterator it(levelheatsky_2757_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
            ((Active*)*it)->set_x_scale(43);
            ((Active*)*it)->set_y_scale(24);
            ((Active*)*it)->set_visible(true);
        }
            group_main_engine_level_specific_methods_bosses_boss_syntax_squid_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_squid_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_squid_defeated_1 = true;
        }
        media.play_id(SOUND_LAVAWALL_311, 29-1, 0);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectwarning2_1864_instances.clear_selection();
        for (ObjectIterator it(effectwarning2_1864_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavalaser_2862_instances.clear_selection();
        for (ObjectIterator it(bosslavalaser_2862_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossspikesphere_2876_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere_2876_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossspikesphere2_2877_instances.clear_selection();
        for (ObjectIterator it(bossspikesphere2_2877_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavasplashleft1_2879_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft1_2879_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavasplashmain_2861_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashmain_2861_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavasplashright1_2880_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright1_2880_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavasplashleft2_2882_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashleft2_2882_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosslavasplashright2_2883_instances.clear_selection();
        for (ObjectIterator it(bosslavasplashright2_2883_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        for (ObjectIterator it(bosssyntaxsquidhitbox_2881_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        bosstbplatform_2878_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform_2878_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        bosstbplatform2_2874_instances.clear_selection();
        for (ObjectIterator it(bosstbplatform2_2874_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1649_49_end: ;
}
