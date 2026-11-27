#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10490()
{
    // event 2074_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2074_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) > (50))) goto event_2074_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(4)) > (0))) goto event_2074_43_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_2074_43_end;
        FrameObject * single_instance_2074_43_0; single_instance_2074_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_1835(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2074_43_0 == NULL)
                    single_instance_2074_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2074_43_0))->alterables->values.set(5, 90);
        ((Active*)((Active*)single_instance_2074_43_0))->set_x(((Active*)single_instance_2074_43_0)->get_x()+((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(4)*14);
        ((Active*)((Active*)single_instance_2074_43_0))->alterables->values.set(0, ((Active*)single_instance_2074_43_0)->get_x());
        ((Active*)((Active*)single_instance_2074_43_0))->alterables->values.set(1, ((Active*)single_instance_2074_43_0)->get_y());
        ((Active*)((Active*)single_instance_2074_43_0))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_2074_43_0))->alterables->values.set(6, ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.sub(4, 1);
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
        ((Active*)((Active*)single_instance_2074_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_2074_43_end: ;
}
void Frames::event_func_10491()
{
    // event 2075_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2075_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) > (300))) goto event_2075_43_end;
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(3)-4, -8));
    }
    event_2075_43_end: ;
}
void Frames::event_func_10492()
{
    // event 2076_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2076_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) > (300))) goto event_2076_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(3)) <= (-8))) goto event_2076_43_end;
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.set(5, 0);
    }
    event_2076_43_end: ;
}
void Frames::event_func_10493()
{
    // event 2077_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2077_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(5)) > (0))) goto event_2077_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(5)) <= (300))) goto event_2077_43_end;
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(3)+4, 65));
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.add(5, 1);
    }
    event_2077_43_end: ;
}
void Frames::event_func_10494()
{
    // event 2078_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2078_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(5)) > (160))) goto event_2078_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(4)) > (0))) goto event_2078_43_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_2078_43_end;
        FrameObject * single_instance_2078_43_0; single_instance_2078_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipmissilerackright_2524_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_1835(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2078_43_0 == NULL)
                    single_instance_2078_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->values.set(5, 90);
        ((Active*)((Active*)single_instance_2078_43_0))->set_x(((Active*)single_instance_2078_43_0)->get_x()-((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(4)*14);
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->values.set(0, ((Active*)single_instance_2078_43_0)->get_x());
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->values.set(1, ((Active*)single_instance_2078_43_0)->get_y());
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->values.set(6, ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.sub(4, 1);
        ((Active*)((Active*)single_instance_2078_43_0))->alterables->flags.enable(1);
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
        ((Active*)((Active*)single_instance_2078_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_2078_43_end: ;
}
void Frames::event_func_10495()
{
    // event 2079_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2079_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(5)) > (300))) goto event_2079_43_end;
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(3)-4, -8));
    }
    event_2079_43_end: ;
}
void Frames::event_func_10496()
{
    // event 2080_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2080_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(5)) > (300))) goto event_2080_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(3)) <= (-8))) goto event_2080_43_end;
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.set(5, 0);
    }
    event_2080_43_end: ;
}
void Frames::event_func_10497()
{
    // event 2081_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2081_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (3))) goto event_2081_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(12)) > (300))) goto event_2081_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 0);
    }
    event_2081_43_end: ;
}
void Frames::event_func_10498()
{
    // event 2082_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2082_43_end;
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bossgunshiptrooper_2522_instances.has_selection()) goto event_2082_43_end;
        if (not_always_2082_43 > loop_count) {
            not_always_2082_43 = loop_count + 2;
            goto event_2082_43_end;
        }
        not_always_2082_43 = loop_count + 2;
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_2082_43_end: ;
}
void Frames::event_func_10499()
{
    // event 2083_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2083_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (4))) goto event_2083_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(13)) == (0))) goto event_2083_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(4)) <= (((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-360))) goto event_2083_43_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2083_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(1, 1);
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(13, 1);
    }
    event_2083_43_end: ;
}
void Frames::event_func_10500()
{
    // event 2084_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2084_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2084_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0)) == (0))) goto event_2084_43_end;
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_2084_43_end: ;
}
void Frames::event_func_10501()
{
    // event 2085_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2085_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2085_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0)+2, 96));
    }
    event_2085_43_end: ;
}
void Frames::event_func_10502()
{
    // event 2086_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2086_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2086_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0)) == (94))) goto event_2086_43_end;
        media.stop_sample(SOUND_ROTATEBIG_165);
        media.play_id(SOUND_ROTATEBIG_STOP_166, -1, 1);
    }
    event_2086_43_end: ;
}
void Frames::event_func_10503()
{
    // event 2087_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2087_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2087_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0)) >= (96))) goto event_2087_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.add(2, 1);
    }
    event_2087_43_end: ;
}
void Frames::event_func_10504()
{
    // event 2088_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2088_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2088_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(2)) == (40))) goto event_2088_43_end;
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bossgunshiptrooper_2522_instances.has_selection()) goto event_2088_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.add(2, 1);
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_2088_43_0; single_instance_2088_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2088_43_0 == NULL)
                    single_instance_2088_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_2088_43_1; single_instance_2088_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2088_43_1 == NULL)
                    single_instance_2088_43_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(5, ((Active*)single_instance_2088_43_1)->get_x());
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(6, ((Active*)single_instance_2088_43_1)->get_y());
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->flags.enable(16);
        FrameObject * single_instance_2088_43_2; single_instance_2088_43_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_2088_43_1)->x + 0, ((Active*)single_instance_2088_43_1)->y + 0), ((Active*)single_instance_2088_43_1)->layer);
            if (single_instance_2088_43_2 == NULL)
                single_instance_2088_43_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(3, -1);
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(8, -5);
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(14, 0);
        ((Active*)((Active*)single_instance_2088_43_2))->move_back();
        ((Active*)((Active*)single_instance_2088_43_2))->set_y_scale(0.25);
        ((Active*)((Active*)single_instance_2088_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_2088_43_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_2088_43_1))->alterables->values.set(16, 1);
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.add(3, 1);
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_2088_43_end: ;
}
void Frames::event_func_10505()
{
    // event 2089_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2089_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2089_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(2)) == (140))) goto event_2089_43_end;
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgunshiptrooper_2522_instances.has_selection()) goto event_2089_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.add(2, 1);
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_2089_43_0; single_instance_2089_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2089_43_0 == NULL)
                    single_instance_2089_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_2089_43_1; single_instance_2089_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2089_43_1 == NULL)
                    single_instance_2089_43_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(5, ((Active*)single_instance_2089_43_1)->get_x());
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(6, ((Active*)single_instance_2089_43_1)->get_y());
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->flags.enable(16);
        FrameObject * single_instance_2089_43_2; single_instance_2089_43_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_2089_43_1)->x + 0, ((Active*)single_instance_2089_43_1)->y + 0), ((Active*)single_instance_2089_43_1)->layer);
            if (single_instance_2089_43_2 == NULL)
                single_instance_2089_43_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(3, -1);
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(8, -5);
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(14, 0);
        ((Active*)((Active*)single_instance_2089_43_2))->move_back();
        ((Active*)((Active*)single_instance_2089_43_2))->set_y_scale(0.25);
        ((Active*)((Active*)single_instance_2089_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_2089_43_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_2089_43_1))->alterables->values.set(16, 1);
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.add(3, 1);
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_2089_43_end: ;
}
void Frames::event_func_10506()
{
    // event 2090_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2090_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2090_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(2)) > (180))) goto event_2090_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(1, 0);
    }
    event_2090_43_end: ;
}
void Frames::event_func_10507()
{
    // event 2091_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2091_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (0))) goto event_2091_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0)-2, 0));
    }
    event_2091_43_end: ;
}
void Frames::event_func_10508()
{
    // event 2092_43
    bool or_result_2092_43 = false;
    bool or_temp_result_2092_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2092_43_0_end;
        bossgunship_2527_instances.clear_selection();
        for (ObjectIterator it(bossgunship_2527_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (260))) { it.deselect(); continue; }
        }
        if (!bossgunship_2527_instances.has_selection()) goto or_event_2092_43_0_end;
        if (!((enemyelitemask_2511_instances.size()) <= (0))) goto or_event_2092_43_0_end;
        or_result_2092_43 = true;
        or_temp_result_2092_43_0 = true;
    }
    or_event_2092_43_0_end: ;
    bossgunship_2527_instances.clear_saved_selection();
    if (or_temp_result_2092_43_0) {
        bossgunship_2527_instances.save_selection();
    }
    // event 2092_43
    bool or_temp_result_2092_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2092_43_1_end;
        bossgunship_2527_instances.clear_selection();
        for (ObjectIterator it(bossgunship_2527_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (460))) { it.deselect(); continue; }
        }
        if (!bossgunship_2527_instances.has_selection()) goto or_event_2092_43_1_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto or_event_2092_43_1_end;
        or_result_2092_43 = true;
        or_temp_result_2092_43_1 = true;
    }
    or_event_2092_43_1_end: ;
    bossgunshiphitbox_2536_instances.clear_saved_selection();
    if (or_temp_result_2092_43_1) {
        bossgunshiphitbox_2536_instances.save_selection();
        bossgunship_2527_instances.save_selection();
    }
    // event 2092_43
    bool or_temp_result_2092_43_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2092_43_2_end;
        bossgunship_2527_instances.clear_selection();
        for (ObjectIterator it(bossgunship_2527_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
        }
        if (!bossgunship_2527_instances.has_selection()) goto or_event_2092_43_2_end;
        bossgunshipplatform_2521_instances.clear_selection();
        for (ObjectIterator it(bossgunshipplatform_2521_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (30))) { it.deselect(); continue; }
        }
        if (!bossgunshipplatform_2521_instances.has_selection()) goto or_event_2092_43_2_end;
        if (!((enemyelitemask_2511_instances.size()) >= (2))) goto or_event_2092_43_2_end;
        or_result_2092_43 = true;
        or_temp_result_2092_43_2 = true;
        or_event_2092_43_2_end: ;
        bossgunshipplatform_2521_instances.clear_saved_selection();
        if (or_temp_result_2092_43_2) {
            bossgunshipplatform_2521_instances.save_selection();
            bossgunship_2527_instances.save_selection();
        }
        if (!or_result_2092_43) goto or_final_or_event_2092_43_2_end;
        bossgunship_2527_instances.empty_selection();
        bossgunshipplatform_2521_instances.empty_selection();
        bossgunshiphitbox_2536_instances.empty_selection();
        if (or_temp_result_2092_43_2) {
            bossgunshipplatform_2521_instances.restore_selection();
        }
        if (or_temp_result_2092_43_1) {
            bossgunshiphitbox_2536_instances.restore_selection();
        }
        if (or_temp_result_2092_43_0 || or_temp_result_2092_43_1 || or_temp_result_2092_43_2) {
            bossgunship_2527_instances.restore_selection();
        }
        for (ObjectIterator it(bossgunship_2527_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        for (ObjectIterator it(bossgunshipplatform_2521_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    or_final_or_event_2092_43_2_end: ;
}
void Frames::event_func_10509()
{
    // event 2094_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2094_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
    }
    event_2094_43_end: ;
}
void Frames::event_func_10510()
{
    // event 2095_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2095_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2095_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_2095_43_end: ;
}
void Frames::event_func_10511()
{
    // event 2096_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2096_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2096_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3-((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2096_43_end: ;
}
void Frames::event_func_10512()
{
    // event 2097_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2097_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*100))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2097_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(4, 5);
        }
        media.play_id(SOUND_COMMON_GLASSBREAK_2_134, -1, 1);
    }
    event_2097_43_end: ;
}
void Frames::event_func_10513()
{
    // event 2098_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2098_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2098_43_end;
        FrameObject * single_instance_2098_43_0; single_instance_2098_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiphitbox_2536_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2098_43_0 == NULL)
                    single_instance_2098_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2098_43_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_2098_43_0))->force_frame(35+((Active*)get_single(bossgunshiphitbox_2536_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_2098_43_0))->set_direction(4+((Active*)get_single(bossgunshiphitbox_2536_instances, default_active_instance))->alterables->values.get(4)*2);
        {
            ((Active*)single_instance_2098_43_0)->set_shader(Render::ADDITIVE);
        }
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
        ((Active*)((Active*)single_instance_2098_43_0))->set_x(((Active*)single_instance_2098_43_0)->get_x()+12-((Active*)get_single(bossgunshiphitbox_2536_instances, default_active_instance))->alterables->values.get(4)*6);
    }
    event_2098_43_end: ;
}
void Frames::event_func_10514()
{
    // event 2099_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2099_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_2099_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (220))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2099_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 220);
        }
    }
    event_2099_43_end: ;
}
void Frames::event_func_10515()
{
    // event 2100_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2100_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_2100_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2100_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 50);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2100_43_end: ;
}
void Frames::event_func_10516()
{
    // event 2101_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2101_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2101_43_end;
        if (once_condition_2101_43) goto event_2101_43_end;
        once_condition_2101_43 = true;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(4, 5);
        }
        media.play_id(SOUND_COMMON_GLASSBREAK_2_134, -1, 1);
    }
    event_2101_43_end: ;
}
void Frames::event_func_10517()
{
    // event 2102_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2102_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2102_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_2102_43_end: ;
}
void Frames::event_func_10518()
{
    // event 2103_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2103_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(3)) >= (4))) goto event_2103_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_2103_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2103_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1) goto event_2103_43_end;
        monitorrings_407_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorrings_407(0, 0), 3);
            monitorrings_407_instances.add_back();
        }
        for (ObjectIterator it(monitorrings_407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(23, 12);
            ((Active*)*it)->set_x(frame_left()-40);
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y()-100);
        }
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(0, frame_left()-150);
        if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1) {
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 = true;
        }
    }
    event_2103_43_end: ;
}
void Frames::event_func_10519()
{
    // event 2104_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2104_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2104_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_2104_43_end;
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2104_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_player_assistance_1 && group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1) goto event_2104_43_end;
        monitorrings_407_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorrings_407(0, 0), 3);
            monitorrings_407_instances.add_back();
        }
        for (ObjectIterator it(monitorrings_407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(23, 12);
            ((Active*)*it)->set_x(frame_left()-40);
            ((Active*)*it)->set_y(((Active*)get_instance(playerassistmillamask_2557_instances))->get_y()-100);
        }
        ((Active*)get_instance(playerassistmillamask_2557_instances))->alterables->values.set(0, frame_left()-150);
        if (!group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1) {
            group_main_engine_level_specific_methods_bosses_player_assistance_player_assist_milla_1 = true;
        }
    }
    event_2104_43_end: ;
}
void Frames::event_func_10520()
{
    // event 2105_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2105_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2105_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_2105_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_x(get_min(frame_left()-60, ((Active*)get_instance(bossgunshippilot_2535_instances))->get_x()-200));
        media.play_id(SOUND_LILAC_COMETDASH_53, -1, 1);
    }
    event_2105_43_end: ;
}
void Frames::event_func_10521()
{
    // event 2106_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2106_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2106_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2106_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_x(get_min(frame_left()-60, ((Active*)get_instance(bossgunshippilot_2535_instances))->get_x()-200));
        ((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->values.set(5, 1);
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
    }
    event_2106_43_end: ;
}
void Frames::event_func_10522()
{
    // event 2107_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2107_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2107_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_x(((Active*)get_instance(playerassistfinisher_2561_instances))->get_x()+12);
    }
    event_2107_43_end: ;
}
void Frames::event_func_10523()
{
    // event 2108_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2108_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (900))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2108_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_y(((Active*)get_instance(bossgunshippilot_2535_instances))->get_y());
    }
    event_2108_43_end: ;
}
void Frames::event_func_10524()
{
    // event 2109_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2109_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2109_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_2109_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_instance(playerassistfinisher_2561_instances));
            if (parent == NULL) goto pos_end_2109_43_0;
            ((Active*)get_instance(playerassistlilachair_2537_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2109_43_0: ;
        }
        ((Active*)get_instance(playerassistlilachair_2537_instances))->force_animation(13);
        FrameObject * single_instance_2109_43_1; single_instance_2109_43_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerassistfinisher_2561_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2109_43_1 == NULL)
                    single_instance_2109_43_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2109_43_1))->set_x(((Active*)single_instance_2109_43_1)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_2109_43_1))->set_y(((Active*)single_instance_2109_43_1)->get_y()-20+randrange(41));
    }
    event_2109_43_end: ;
}
void Frames::event_func_10525()
{
    // event 2110_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2110_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2110_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_2110_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_direction(1);
    }
    event_2110_43_end: ;
}
void Frames::event_func_10526()
{
    // event 2111_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2111_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (900))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2111_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->get_x()) > (((Active*)get_instance(bossgunshippilot_2535_instances))->get_x()-20))) goto event_2111_43_end;
        ((Active*)get_instance(bossgunshippilot_2535_instances))->force_animation(5);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 9);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, 12);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 9000);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1000);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(10, 0);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
            group_pause_1 = false;
    
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_2111_43_end: ;
}
void Frames::event_func_10527()
{
    // event 2112_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2112_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->values.get(5)) == (1))) goto event_2112_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->values.add(3, 0.2);
        ((Active*)get_instance(playerassistfinisher_2561_instances))->force_animation(7);
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_y(((Active*)get_instance(playerassistfinisher_2561_instances))->get_y()+((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->values.get(3));
    }
    event_2112_43_end: ;
}
void Frames::event_func_10528()
{
    // event 2113_43
    bool or_result_2113_43 = false;
    bool or_temp_result_2113_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2113_43_0_end;
        playerassistfinisher_2561_instances.clear_selection();
        for (ObjectIterator it(playerassistfinisher_2561_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistfinisher_2561_instances.has_selection()) goto or_event_2113_43_0_end;
        or_result_2113_43 = true;
        or_temp_result_2113_43_0 = true;
    }
    or_event_2113_43_0_end: ;
    playerassistfinisher_2561_instances.clear_saved_selection();
    if (or_temp_result_2113_43_0) {
        playerassistfinisher_2561_instances.save_selection();
    }
    // event 2113_43
    bool or_temp_result_2113_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2113_43_1_end;
        playerassistfinisher_2561_instances.clear_selection();
        for (ObjectIterator it(playerassistfinisher_2561_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistfinisher_2561_instances.has_selection()) goto or_event_2113_43_1_end;
        or_result_2113_43 = true;
        or_temp_result_2113_43_1 = true;
    }
    or_event_2113_43_1_end: ;
    if (or_temp_result_2113_43_1) {
        playerassistfinisher_2561_instances.save_selection();
    }
    // event 2113_43
    bool or_temp_result_2113_43_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2113_43_2_end;
        playerassistfinisher_2561_instances.clear_selection();
        for (ObjectIterator it(playerassistfinisher_2561_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistfinisher_2561_instances.has_selection()) goto or_event_2113_43_2_end;
        or_result_2113_43 = true;
        or_temp_result_2113_43_2 = true;
        or_event_2113_43_2_end: ;
        if (or_temp_result_2113_43_2) {
            playerassistfinisher_2561_instances.save_selection();
        }
        if (!or_result_2113_43) goto or_final_or_event_2113_43_2_end;
        playerassistfinisher_2561_instances.empty_selection();
        if (or_temp_result_2113_43_0 || or_temp_result_2113_43_1 || or_temp_result_2113_43_2) {
            playerassistfinisher_2561_instances.restore_selection();
        }
        media.play_id(SOUND_ATTACK2_137, -1, 1);
        FrameObject * single_instance_2113_43_0; single_instance_2113_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerassistfinisher_2561_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2113_43_0 == NULL)
                    single_instance_2113_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2113_43_0))->force_speed(100);
        ((Active*)single_instance_2113_43_0)->move_back(((Active*)get_single(playerassistfinisher_2561_instances)));
        ((Active*)((Active*)single_instance_2113_43_0))->alterables->values.set(0, 1);
        for (ObjectIterator it(playerassistfinisher_2561_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+1)%math_helper%3);
        }
        ((Active*)((Active*)single_instance_2113_43_0))->set_direction(pick_random(3, 2, 3, 4));
        ((Active*)((Active*)single_instance_2113_43_0))->alterables->flags.enable(4);
    }
    or_final_or_event_2113_43_2_end: ;
}
void Frames::event_func_10529()
{
    // event 2114_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2114_43_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_2114_43_end;
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerassistfinisher_2561_instances));
            if (parent == NULL) goto pos_end_2114_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2114_43_0: ;
        }
    }
    event_2114_43_end: ;
}
void Frames::event_func_10530()
{
    // event 2115_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2115_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->values.get(5)) == (1))) goto event_2115_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->get_frame()) != (2))) goto event_2115_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->get_frame()) != (5))) goto event_2115_43_end;
        if (!((((Active*)get_instance(playerassistfinisher_2561_instances))->get_frame()) != (7))) goto event_2115_43_end;
        ((Active*)get_instance(playerassistfinisher_2561_instances))->alterables->flags.disable(2);
    }
    event_2115_43_end: ;
}
void Frames::event_func_10531()
{
    // event 2116_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2116_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2116_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(bossgunshippilot_2535_instances))->get_x())*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_instance(bossgunshippilot_2535_instances))->get_y()+30)*0.05, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()-50));
    }
    event_2116_43_end: ;
}
void Frames::event_func_10532()
{
    // event 2117_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2117_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1060))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2117_43_end;
        FrameObject * single_instance_2117_43_0; single_instance_2117_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshippilot_2535_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2117_43_0 == NULL)
                    single_instance_2117_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2117_43_0))->force_speed(100);
        ((Active*)((Active*)single_instance_2117_43_0))->set_x(((Active*)get_instance(bossgunshippilot_2535_instances))->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2117_43_0))->set_y(((Active*)get_instance(bossgunshippilot_2535_instances))->get_y()-40+randrange(81));
        ((Active*)((Active*)single_instance_2117_43_0))->alterables->flags.enable(0);
    }
    event_2117_43_end: ;
}
void Frames::event_func_10533()
{
    // event 2118_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2118_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1060))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2118_43_end;
        if (not_always_2118_43 > loop_count) {
            not_always_2118_43 = loop_count + 2;
            goto event_2118_43_end;
        }
        not_always_2118_43 = loop_count + 2;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_2118_43_end: ;
}
void Frames::event_func_10534()
{
    // event 2119_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2119_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2119_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1060))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2119_43_end;
        FrameObject * single_instance_2119_43_0; single_instance_2119_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshippilot_2535_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2119_43_0 == NULL)
                    single_instance_2119_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2119_43_0))->force_speed(40+randrange(30));
        ((Active*)((Active*)single_instance_2119_43_0))->set_x(((Active*)get_instance(bossgunshippilot_2535_instances))->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_2119_43_0))->set_y(((Active*)get_instance(bossgunshippilot_2535_instances))->get_y()-40+randrange(81));
        ((Active*)((Active*)single_instance_2119_43_0))->alterables->flags.enable(0);
    }
    event_2119_43_end: ;
}
void Frames::event_func_10535()
{
    // event 2120_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2120_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1000))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2120_43_end;
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossgunshiptrooper_2522_instances.has_selection()) goto event_2120_43_end;
        FrameObject * single_instance_2120_43_0; single_instance_2120_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2120_43_0 == NULL)
                    single_instance_2120_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_2120_43_1; single_instance_2120_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgunshiptrooper_2522_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2120_43_1 == NULL)
                    single_instance_2120_43_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(5, ((Active*)single_instance_2120_43_1)->get_x());
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(6, ((Active*)single_instance_2120_43_1)->get_y());
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->flags.enable(16);
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(3, -1);
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(8, -5);
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(14, 0);
        ((Active*)((Active*)single_instance_2120_43_1))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(20, 9);
        ((Active*)((Active*)single_instance_2120_43_1))->alterables->values.set(0, 0);
        ((Active*)((Active*)single_instance_2120_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2120_43_end: ;
}
void Frames::event_func_10536()
{
    // event 2121_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2121_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1000))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2121_43_end;
        if (!((((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(1)) == (1))) goto event_2121_43_end;
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.set(2, 999);
    }
    event_2121_43_end: ;
}
void Frames::event_func_10537()
{
    // event 2122_43
    bool or_result_2122_43 = false;
    bool or_temp_result_2122_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2122_43_0_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1060))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto or_event_2122_43_0_end;
        or_result_2122_43 = true;
        or_temp_result_2122_43_0 = true;
    }
    or_event_2122_43_0_end: ;
    bossgunshiphitbox_2536_instances.clear_saved_selection();
    if (or_temp_result_2122_43_0) {
        bossgunshiphitbox_2536_instances.save_selection();
    }
    // event 2122_43
    bool or_temp_result_2122_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto or_event_2122_43_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_2122_43_1_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1060))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto or_event_2122_43_1_end;
        or_result_2122_43 = true;
        or_temp_result_2122_43_1 = true;
        or_event_2122_43_1_end: ;
        if (or_temp_result_2122_43_1) {
            bossgunshiphitbox_2536_instances.save_selection();
        }
        if (!or_result_2122_43) goto or_final_or_event_2122_43_1_end;
        bossgunshiphitbox_2536_instances.empty_selection();
        if (or_temp_result_2122_43_0 || or_temp_result_2122_43_1) {
            bossgunshiphitbox_2536_instances.restore_selection();
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2122_43_0_end;
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
        dynamic_2122_43_0_end: ;
    }
    or_final_or_event_2122_43_1_end: ;
}
void Frames::event_func_10538()
{
    // event 2123_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2123_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1060))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2123_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(4, ((Active*)get_single(bossgunshiphitbox_2536_instances, default_active_instance))->alterables->values.get(6));
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 0.1);
        }
    }
    event_2123_43_end: ;
}
void Frames::event_func_10539()
{
    // event 2124_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2124_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1200))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2124_43_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
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
    }
    event_2124_43_end: ;
}
void Frames::event_func_10540()
{
    // event 2125_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2125_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (1200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (1300))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2125_43_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_2125_43_end: ;
}
void Frames::event_func_10541()
{
    // event 2126_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2126_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1216))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2126_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2126_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        global_values->set(1, 2);
    }
    event_2126_43_end: ;
}
void Frames::event_func_10542()
{
    // event 2127_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2127_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1219))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2127_43_end;
        if (once_condition_2127_43) goto event_2127_43_end;
        once_condition_2127_43 = true;
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
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 13300);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 540);
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
        ((Active*)get_instance(playerassistmilla_2558_instances))->set_visible(false);
        ((Active*)get_instance(playerassistcarol_2559_instances))->set_visible(false);
        ((Active*)get_instance(playerassistfinisher_2561_instances))->set_visible(false);
        ((Active*)get_instance(playerassistlilachair_2537_instances))->set_visible(false);
        ((Active*)get_instance(playerassistmillatail_2554_instances))->set_visible(false);
        ((Active*)get_instance(playerassistcaroltail_2553_instances))->set_visible(false);
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
            group_main_engine_level_specific_methods_bosses_player_assistance_1 = false;
    
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2127_43_end: ;
}
void Frames::event_func_10543()
{
    // event 2128_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2128_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (1220))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2128_43_end;
        if (once_condition_2128_43) goto event_2128_43_end;
        once_condition_2128_43 = true;
        playerskinsashhair_417_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinsashhair_417(13340, 610), 3);
            playerskinsashhair_417_instances.add_back();
        }
        playerskinsash_418_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinsash_418(13340, 610), 3);
            playerskinsash_418_instances.add_back();
        }
        playerskinmillatail_381_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinmillatail_381(13290, 610), 3);
            playerskinmillatail_381_instances.add_back();
        }
        playerskinmilla_446_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskinmilla_446(13290, 610), 3);
            playerskinmilla_446_instances.add_back();
        }
        playerskincaroltail_444_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskincaroltail_444(13240, 610), 3);
            playerskincaroltail_444_instances.add_back();
        }
        playerskincarol_445_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerskincarol_445(13240, 610), 3);
            playerskincarol_445_instances.add_back();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2128_43_end: ;
}
void Frames::event_func_10544()
{
    // event 2129_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2129_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (1300))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2129_43_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -60);
    }
    event_2129_43_end: ;
}
void Frames::event_func_10545()
{
    // event 2130_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2130_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1364))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2130_43_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2130_43_end: ;
}
void Frames::event_func_10546()
{
    // event 2131_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2131_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (1380))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2131_43_end;
        if (once_condition_2131_43) goto event_2131_43_end;
        once_condition_2131_43 = true;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->set_direction(1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->set_direction(1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2131_43_end: ;
}
void Frames::event_func_10547()
{
    // event 2132_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2132_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2132_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2132_43_end: ;
}
void Frames::event_func_10548()
{
    // event 2133_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2133_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2133_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2)*32*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_direction(24);
        }
        FrameObject * single_instance_2133_43_0; single_instance_2133_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwarning_1513(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2133_43_0 == NULL)
                    single_instance_2133_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2133_43_0))->set_y(((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->alterables->values.get(9)+50);
        ((Active*)((Active*)single_instance_2133_43_0))->set_visible(true);
    }
    event_2133_43_end: ;
}
void Frames::event_func_10549()
{
    // event 2134_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2134_43_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2134_43_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2134_43_end: ;
}
void Frames::event_func_10550()
{
    // event 2135_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2135_43_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2135_43_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2135_43_end: ;
}
void Frames::event_func_10551()
{
    // event 2136_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2136_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2136_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_2136_43_end: ;
}
void Frames::event_func_10552()
{
    // event 2137_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2137_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->alterables->values.get(9)-200))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2137_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2137_43_0; single_instance_2137_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2137_43_0 == NULL)
                    single_instance_2137_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2137_43_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_2137_43_end: ;
}
void Frames::event_func_10553()
{
    // event 2138_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2138_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2138_43_end;
        qualifier_8.clear_selection();
        if (!check_overlap(bossrapidbullet_1834_instances, qualifier_8)) goto event_2138_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2138_43_0; single_instance_2138_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2138_43_0 == NULL)
                    single_instance_2138_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2138_43_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_2138_43_end: ;
}
void Frames::event_func_10554()
{
    // event 2141_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2141_43_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_2141_43_end: ;
}
void Frames::event_func_10555()
{
    // event 2142_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2142_43_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2142_43_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2142_43_end: ;
}
void Frames::event_func_10556()
{
    // event 2143_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2143_43_end;
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_2143_43_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2143_43_0; single_instance_2143_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylaser_1626_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2143_43_0 == NULL)
                    single_instance_2143_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2143_43_0))->set_scale(0.5);
    }
    event_2143_43_end: ;
}
void Frames::event_func_10557()
{
    // event 2144_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2144_43_end;
        shieldserpentine_1868_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(shieldserpentine_1868_instances, playercharactersensor_383_instances)) goto event_2144_43_end;
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_2144_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2144_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2144_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2144_43_end: ;
}
void Frames::event_func_10558()
{
    // event 2145_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2145_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2145_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, 12));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2145_43_end: ;
}
void Frames::event_func_10559()
{
    // event 2146_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2146_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2146_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.5, -12));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2146_43_end: ;
}
void Frames::event_func_10560()
{
    // event 2147_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2147_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2147_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_2147_43_end: ;
}
void Frames::event_func_10561()
{
    // event 2148_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2148_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()-4))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2148_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_2148_43_end: ;
}
void Frames::event_func_10562()
{
    // event 2149_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2149_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2149_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_2149_43_end: ;
}
void Frames::event_func_10563()
{
    // event 2152_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2152_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2152_43_end;
        FrameObject * single_instance_2152_43_0; single_instance_2152_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmissile_1835_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2152_43_0 == NULL)
                    single_instance_2152_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2152_43_0))->set_x(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*132)*(8+sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_2152_43_0))->set_y(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_2152_43_0))->force_speed(30+cos_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*143)*10);
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_2152_43_end: ;
}
void Frames::event_func_10564()
{
    // event 2155_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2155_43_end;
        bossmissile_1835_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_1835_instances, playercharactersensor_383_instances)) goto event_2155_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2155_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2155_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2155_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2155_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2155_43_end: ;
}
void Frames::event_func_10565()
{
    // event 2156_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2156_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2156_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2156_43_end: ;
}
void Frames::event_func_10566()
{
    // event 2157_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2157_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-32))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2157_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2157_43_end: ;
}
void Frames::event_func_10567()
{
    // event 2158_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2158_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+32))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2158_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2158_43_end: ;
}
void Frames::event_func_10568()
{
    // event 2159_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2159_43_end;
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_2159_43_end: ;
}
void Frames::event_func_10569()
{
    // event 2160_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1)) goto event_2160_43_end;
        minibossflame_1199_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, playercharactersensor_383_instances)) goto event_2160_43_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_2160_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2160_43_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (8))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_2160_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2160_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2160_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_2160_43_end: ;
}
void Frames::event_func_10570()
{
    // event 2162_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2162_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2162_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_2162_43_end: ;
}
void Frames::event_func_10571()
{
    // event 2163_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2163_43_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2163_43_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2163_43_0; single_instance_2163_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2163_43_0 == NULL)
                    single_instance_2163_43_0 = new_obj;
            }
        }
        media.play_id(SOUND_METALHIT_45, -1, 1);
        ((Active*)((Active*)single_instance_2163_43_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_2163_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_2163_43_end: ;
}
void Frames::event_func_10572()
{
    // event 2165_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2165_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2165_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(5))*((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(5))*((Active*)*it)->alterables->values.get(2)*-1);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(5), 0);
        }
    }
    event_2165_43_end: ;
}
void Frames::event_func_10573()
{
    // event 2166_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2166_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2166_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-10, -170+((Active*)*it)->alterables->values.get(6)*15));
        }
    }
    event_2166_43_end: ;
}
void Frames::event_func_10574()
{
    // event 2167_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2167_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2167_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+10, 350-((Active*)*it)->alterables->values.get(6)*15));
        }
    }
    event_2167_43_end: ;
}
void Frames::event_func_10575()
{
    // event 2171_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2171_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2171_43_end;
        {
            SavedSelection extra_bossmissile_1835_instances(bossmissile_1835_instances);
            for (SavedIterator it(extra_bossmissile_1835_instances); !it.end(); ++it) {
                foreach_instance_m = ((Active*)*it);
                foreach_m_43();
            }
        }
    }
    event_2171_43_end: ;
}
void Frames::event_func_10576()
{
    // event 2173_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2173_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2173_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2173_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2173_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2173_43_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_1835_instances, playercharactersensor_383_instances)) goto event_2173_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2173_43_end: ;
}
void Frames::event_func_10577()
{
    // event 2174_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2174_43_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2174_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2174_43_end: ;
}
void Frames::event_func_10578()
{
    // event 2175_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2175_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2175_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2175_43_end: ;
}
void Frames::event_func_10579()
{
    // event 2176_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2176_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2176_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_2176_43_end: ;
}
void Frames::event_func_10580()
{
    // event 2177_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2177_43_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(false);
    }
    event_2177_43_end: ;
}
void Frames::event_func_10581()
{
    // event 2178_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2178_43_end;
        if (!((bossgunshipflare_2509_instances.size()) > (0))) goto event_2178_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-20))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2178_43_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2178_43_end: ;
}
void Frames::event_func_10582()
{
    // event 2179_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2179_43_end;
        if (!((bossgunshipflare_2509_instances.size()) > (0))) goto event_2179_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-20))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2179_43_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2179_43_end: ;
}
void Frames::event_func_10583()
{
    // event 2180_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2180_43_end;
        if (!((bossgunshipflare_2509_instances.size()) > (0))) goto event_2180_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+20))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2180_43_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossgunshipflare_2509_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2180_43_end: ;
}
void Frames::event_func_10584()
{
    // event 2181_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2181_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2181_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2181_43_end: ;
}
void Frames::event_func_10585()
{
    // event 2182_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2182_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2182_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_2182_43_end: ;
}
void Frames::event_func_10586()
{
    // event 2183_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2183_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2183_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_2183_43_end: ;
}
void Frames::event_func_10587()
{
    // event 2184_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2184_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2184_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2184_43_end: ;
}
void Frames::event_func_10588()
{
    // event 2185_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2185_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2185_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-15);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2185_43_end: ;
}
void Frames::event_func_10589()
{
    // event 2186_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_gunship_projectiles_1)) goto event_2186_43_end;
        bossgunshipflare_2509_instances.clear_selection();
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-400))) { it.deselect(); continue; }
        }
        if (!bossgunshipflare_2509_instances.has_selection()) goto event_2186_43_end;
        for (ObjectIterator it(bossgunshipflare_2509_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2186_43_end: ;
}
