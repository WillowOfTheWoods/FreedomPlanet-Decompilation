#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7615()
{
    // event 1552_32
    {
        if (!(group_main_engine_1)) goto event_1552_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1552_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1552_32_end;
        ((Active*)get_instance(playerskinsash_418_instances))->move_back();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_back();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1552_32_end: ;
}
void Frames::event_func_7616()
{
    // event 1553_32
    {
        if (!(group_main_engine_1)) goto event_1553_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (1))) goto event_1553_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1553_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1553_32_end;
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1553_32_end: ;
}
void Frames::event_func_7617()
{
    // event 1554_32
    {
        if (!(group_main_engine_1)) goto event_1554_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1554_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1554_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1554_32_end;
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1554_32_end: ;
}
void Frames::event_func_7618()
{
    // event 1555_32
    {
        if (!(group_main_engine_1)) goto event_1555_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1555_32_end;
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_BATHROOM1_217, -1, 1);
    }
    event_1555_32_end: ;
}
void Frames::event_func_7619()
{
    // event 1556_32
    {
        if (!(group_main_engine_1)) goto event_1556_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1556_32_end;
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_BATHROOM2_218, -1, 1);
    }
    event_1556_32_end: ;
}
void Frames::event_func_7620()
{
    // event 1559_32
    {
        if (!(group_main_engine_1)) goto event_1559_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (39))) goto event_1559_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, 0));
            ((Active*)*it)->force_frame(sin_deg(((Active*)*it)->alterables->values.get(0))*11);
        }
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-10, 0));
            ((Active*)*it)->force_frame(sin_deg(((Active*)*it)->alterables->values.get(0))*11);
        }
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1559_32_end: ;
}
void Frames::event_func_7621()
{
    // event 1560_32
    {
        if (!(group_main_engine_1)) goto event_1560_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1560_32_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_front();
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->move_front();
    }
    event_1560_32_end: ;
}
void Frames::event_func_7622()
{
    // event 1561_32
    {
        if (!(group_main_engine_1)) goto event_1561_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1561_32_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_front();
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->move_front();
    }
    event_1561_32_end: ;
}
void Frames::event_func_7623()
{
    // event 1563_32
    {
        if (!(group_main_engine_1)) goto event_1563_32_end;
        keyboard_1940_instances.clear_selection();
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1563_32_end: ;
}
void Frames::event_func_7624()
{
    // event 1564_32
    {
        if (!(group_main_engine_1)) goto event_1564_32_end;
        playersensorbottombig_397_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, keyboard_1940_instances)) goto event_1564_32_end;
        FrameObject * single_instance_1564_32_0; single_instance_1564_32_0 = pick_random(keyboard_1940_instances);
        if (single_instance_1564_32_0 == NULL) goto event_1564_32_end;
        ((Active*)((Active*)single_instance_1564_32_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1564_32_0))->alterables->values.set(1, 0);
    }
    event_1564_32_end: ;
}
void Frames::event_func_7625()
{
    // event 1565_32
    {
        if (!(group_main_engine_1)) goto event_1565_32_end;
        enemyroller_1943_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        if (!check_overlap(enemyroller_1943_instances, keyboard_1940_instances)) goto event_1565_32_end;
        FrameObject * single_instance_1565_32_0; single_instance_1565_32_0 = pick_random(keyboard_1940_instances);
        if (single_instance_1565_32_0 == NULL) goto event_1565_32_end;
        ((Active*)((Active*)single_instance_1565_32_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1565_32_0))->alterables->values.set(1, 0);
    }
    event_1565_32_end: ;
}
void Frames::event_func_7626()
{
    // event 1566_32
    {
        if (!(group_main_engine_1)) goto event_1566_32_end;
        keyboard_1940_instances.clear_selection();
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!keyboard_1940_instances.has_selection()) goto event_1566_32_end;
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1566_32_0; single_instance_1566_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(keyboard_1940_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 24, parent->y + 0), parent->layer);
                if (single_instance_1566_32_0 == NULL)
                    single_instance_1566_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1566_32_0))->force_animation(7);
        ((Active*)((Active*)single_instance_1566_32_0))->force_frame(randrange(3));
        ((Active*)((Active*)single_instance_1566_32_0))->alterables->values.set(0, ((Active*)single_instance_1566_32_0)->get_x());
        ((Active*)((Active*)single_instance_1566_32_0))->restore_frame();
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_p_154+number_to_string(((Active*)get_single(keyboard_1940_instances, default_active_instance))->alterables->values.get(0)));
            if (dyn_it == (*loops).end()) goto dynamic_1566_32_1_end;
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
        dynamic_1566_32_1_end: ;
    }
    event_1566_32_end: ;
}
void Frames::event_func_7627()
{
    // event 1575_32
    {
        if (!(group_main_engine_1)) goto event_1575_32_end;
        keyboard_1940_instances.clear_selection();
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!keyboard_1940_instances.has_selection()) goto event_1575_32_end;
        if (!check_not_overlap(keyboard_1940_instances, playersensorbottombig_397_instances)) goto event_1575_32_end;
        if (!check_not_overlap(keyboard_1940_instances, enemyroller_1943_instances)) goto event_1575_32_end;
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1575_32_end: ;
}
void Frames::event_func_7628()
{
    // event 1576_32
    {
        if (!(group_main_engine_1)) goto event_1576_32_end;
        keyboard_1940_instances.clear_selection();
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (3))) { it.deselect(); continue; }
        }
        if (!keyboard_1940_instances.has_selection()) goto event_1576_32_end;
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1576_32_end: ;
}
void Frames::event_func_7629()
{
    // event 1577_32
    bool or_result_1577_32 = false;
    bool or_temp_result_1577_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_0_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_0_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_0 = true;
    }
    or_event_1577_32_0_end: ;
    discolight_1944_instances.clear_saved_selection();
    if (or_temp_result_1577_32_0) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_1_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_1_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_1 = true;
    }
    or_event_1577_32_1_end: ;
    if (or_temp_result_1577_32_1) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_2_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_2_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_2 = true;
    }
    or_event_1577_32_2_end: ;
    if (or_temp_result_1577_32_2) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_3_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_3_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_3 = true;
    }
    or_event_1577_32_3_end: ;
    if (or_temp_result_1577_32_3) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_4_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_4_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_4 = true;
    }
    or_event_1577_32_4_end: ;
    if (or_temp_result_1577_32_4) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_5 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_5_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_5_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_5 = true;
    }
    or_event_1577_32_5_end: ;
    if (or_temp_result_1577_32_5) {
        discolight_1944_instances.save_selection();
    }
    // event 1577_32
    bool or_temp_result_1577_32_6 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1577_32_6_end;
        discolight_1944_instances.clear_selection();
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (8))) { it.deselect(); continue; }
        }
        if (!discolight_1944_instances.has_selection()) goto or_event_1577_32_6_end;
        or_result_1577_32 = true;
        or_temp_result_1577_32_6 = true;
        or_event_1577_32_6_end: ;
        if (or_temp_result_1577_32_6) {
            discolight_1944_instances.save_selection();
        }
        if (!or_result_1577_32) goto or_final_or_event_1577_32_6_end;
        discolight_1944_instances.empty_selection();
        if (or_temp_result_1577_32_0 || or_temp_result_1577_32_1 || or_temp_result_1577_32_2 || or_temp_result_1577_32_3 || or_temp_result_1577_32_4 || or_temp_result_1577_32_5 || or_temp_result_1577_32_6) {
            discolight_1944_instances.restore_selection();
        }
        for (ObjectIterator it(discolight_1944_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    or_final_or_event_1577_32_6_end: ;
}
void Frames::event_func_7630()
{
    // event 1578_32
    {
        if (!(group_main_engine_1)) goto event_1578_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(2)) > (0))) goto event_1578_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(1, 0);
    }
    event_1578_32_end: ;
}
void Frames::event_func_7631()
{
    // event 1579_32
    {
        if (!(group_main_engine_1)) goto event_1579_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(1)) == (7))) goto event_1579_32_end;
        if (once_condition_1579_32) goto event_1579_32_end;
        once_condition_1579_32 = true;
        FrameObject * single_instance_1579_32_0; single_instance_1579_32_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1579_32_0 == NULL)
                    single_instance_1579_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1579_32_0))->force_frame(8);
    }
    event_1579_32_end: ;
}
void Frames::event_func_7632()
{
    // event 1580_32
    {
        if (!(group_main_engine_1)) goto event_1580_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(1)) == (7))) goto event_1580_32_end;
        if (once_condition_1580_32) goto event_1580_32_end;
        once_condition_1580_32 = true;
        media.play_id(SOUND_APPLAUSE_2_430, -1, 1);
        FrameObject * single_instance_1580_32_0; single_instance_1580_32_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1580_32_0 == NULL)
                    single_instance_1580_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1580_32_0))->force_frame(1);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 41)), 2, 41);
    }
    event_1580_32_end: ;
}
void Frames::event_func_7633()
{
    // event 1586_32
    {
        if (!(group_main_engine_1)) goto event_1586_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7)) != (180))) goto event_1586_32_end;
        enemycoil_1755_instances.clear_selection();
        enemycoilflip_1756_instances.clear_selection();
        if (!check_overlap(enemycoil_1755_instances, enemycoilflip_1756_instances)) goto event_1586_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(7, 180);
        for (ObjectIterator it(enemycoilflip_1756_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1586_32_end: ;
}
void Frames::event_func_7634()
{
    // event 1587_32
    {
        if (!(group_main_engine_1)) goto event_1587_32_end;
        if (((Active*)get_instance(enemycoil_1755_instances))->is_near_border(-100)) goto event_1587_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(4)) <= (0))) goto event_1587_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(6)) == (1))) goto event_1587_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.add(3, -4);
    }
    event_1587_32_end: ;
}
void Frames::event_func_7635()
{
    // event 1588_32
    {
        if (!(group_main_engine_1)) goto event_1588_32_end;
        if (((Active*)get_instance(enemycoil_1755_instances))->is_near_border(-100)) goto event_1588_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(4)) <= (0))) goto event_1588_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(6)) == (-1))) goto event_1588_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.add(3, 4);
    }
    event_1588_32_end: ;
}
void Frames::event_func_7636()
{
    // event 1589_32
    {
        if (!(group_main_engine_1)) goto event_1589_32_end;
        if (((Active*)get_instance(enemycoil_1755_instances))->is_near_border(-100)) goto event_1589_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) == (0))) goto event_1589_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_off(1))) goto event_1589_32_end;
        media.play_id(SOUND_COIL_STEP_164, -1, 1);
    }
    event_1589_32_end: ;
}
void Frames::event_func_7637()
{
    // event 1590_32
    {
        if (!(group_main_engine_1)) goto event_1590_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) == (0))) goto event_1590_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_off(1))) goto event_1590_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)) != (0))) goto event_1590_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(4, 120);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(5, (((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)+1)%math_helper%2);
    }
    event_1590_32_end: ;
}
void Frames::event_func_7638()
{
    // event 1591_32
    {
        if (!(group_main_engine_1)) goto event_1591_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) == (0))) goto event_1591_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_off(1))) goto event_1591_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)) == (0))) goto event_1591_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(4, 20);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(5, (((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)+1)%math_helper%2);
    }
    event_1591_32_end: ;
}
void Frames::event_func_7639()
{
    // event 1592_32
    {
        if (!(group_main_engine_1)) goto event_1592_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)) != (0))) goto event_1592_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(4, get_max(0, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(4)-1));
    }
    event_1592_32_end: ;
}
void Frames::event_func_7640()
{
    // event 1593_32
    {
        if (!(group_main_engine_1)) goto event_1593_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5)) == (0))) goto event_1593_32_end;
        if (((Active*)get_instance(enemycoil_1755_instances))->is_near_border(-100)) goto event_1593_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(4, get_max(0, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(4)-1));
    }
    event_1593_32_end: ;
}
void Frames::event_func_7641()
{
    // event 1600_32
    {
        if (!(group_main_engine_1)) goto event_1600_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) != (0))) goto event_1600_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_on(1))) goto event_1600_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.disable(1);
    }
    event_1600_32_end: ;
}
void Frames::event_func_7642()
{
    // event 1601_32
    {
        if (!(group_main_engine_1)) goto event_1601_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) > (60))) goto event_1601_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.sub(3, 120);
        ((Active*)get_instance(enemycoil_1755_instances))->set_x(((Active*)get_instance(enemycoil_1755_instances))->get_x()-cos_deg(((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7))*75);
        ((Active*)get_instance(enemycoil_1755_instances))->set_y(((Active*)get_instance(enemycoil_1755_instances))->get_y()-sin_deg(((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7))*-75);
    }
    event_1601_32_end: ;
}
void Frames::event_func_7643()
{
    // event 1602_32
    {
        if (!(group_main_engine_1)) goto event_1602_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)) < (-60))) goto event_1602_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.add(3, 120);
        ((Active*)get_instance(enemycoil_1755_instances))->set_x(((Active*)get_instance(enemycoil_1755_instances))->get_x()+cos_deg(((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7))*75);
        ((Active*)get_instance(enemycoil_1755_instances))->set_y(((Active*)get_instance(enemycoil_1755_instances))->get_y()+sin_deg(((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7))*-75);
    }
    event_1602_32_end: ;
}
void Frames::event_func_7644()
{
    // event 1603_32
    {
        if (!(group_main_engine_1)) goto event_1603_32_end;
        enemycoil_1755_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemycoil_1755_instances, enemylimiter_350_instances)) goto event_1603_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_off(2))) goto event_1603_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(6, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(6)*-1);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.enable(2);
    }
    event_1603_32_end: ;
}
void Frames::event_func_7645()
{
    // event 1604_32
    {
        if (!(group_main_engine_1)) goto event_1604_32_end;
        if (!(((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.is_on(2))) goto event_1604_32_end;
        enemycoil_1755_instances.clear_selection();
        if (!check_not_overlap(enemycoil_1755_instances, enemylimiter_350_instances)) goto event_1604_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.disable(2);
    }
    event_1604_32_end: ;
}
void Frames::event_func_7646()
{
    // event 1605_32
    {
        if (!(group_main_engine_1)) goto event_1605_32_end;
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3));
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)*2);
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3));
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3));
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3));
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)*2);
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.set(1, ((Active*)get_instance(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1605_32_end: ;
}
void Frames::event_func_7647()
{
    // event 1606_32
    {
        if (!(group_main_engine_1)) goto event_1606_32_end;
        if (!((((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(3)) >= (0))) goto event_1606_32_end;
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(3)*0.5);
    }
    event_1606_32_end: ;
}
void Frames::event_func_7648()
{
    // event 1607_32
    {
        if (!(group_main_engine_1)) goto event_1607_32_end;
        if (!((((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(3)) < (0))) goto event_1607_32_end;
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(3)*1.5);
    }
    event_1607_32_end: ;
}
void Frames::event_func_7649()
{
    // event 1608_32
    {
        if (!(group_main_engine_1)) goto event_1608_32_end;
        if (!((((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(3)) >= (0))) goto event_1608_32_end;
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(3)*1.5);
    }
    event_1608_32_end: ;
}
void Frames::event_func_7650()
{
    // event 1609_32
    {
        if (!(group_main_engine_1)) goto event_1609_32_end;
        if (!((((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(3)) < (0))) goto event_1609_32_end;
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(3)*0.5);
    }
    event_1609_32_end: ;
}
void Frames::event_func_7651()
{
    // event 1610_32
    {
        if (!(group_main_engine_1)) goto event_1610_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->set_angle(((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(3)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7), 0);
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->set_angle(get_max(get_min(45, ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(0)), -90)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7), 0);
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->set_angle(get_max(get_min(0, ((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.get(0)), -120)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7), 0);
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->set_angle(get_min(get_max(-45, ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(0)), 90)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7), 0);
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->set_angle(get_min(get_max(0, ((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.get(0)), 120)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7), 0);
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(7));
        }
    }
    event_1610_32_end: ;
}
void Frames::event_func_7652()
{
    // event 1611_32
    {
        if (!(group_main_engine_1)) goto event_1611_32_end;
        {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances));
            if (parent == NULL) goto pos_end_1611_32_0;
            ((Active*)get_instance(enemycoilpiece1_1751_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1611_32_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances));
            if (parent == NULL) goto pos_end_1611_32_1;
            ((Active*)get_instance(enemycoilpiece2_1753_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1611_32_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances));
            if (parent == NULL) goto pos_end_1611_32_2;
            ((Active*)get_instance(enemycoilpiece3_1752_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1611_32_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances));
            if (parent == NULL) goto pos_end_1611_32_3;
            ((Active*)get_instance(enemycoilpiece4_1754_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1611_32_3: ;
        }
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(0, ((Active*)get_instance(enemycoilhead_1782_instances, default_active_instance))->alterables->values.get(0));
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(enemycoil_1755_instances))->alterables->flags.get(1)+((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(enemycoil_1755_instances))->get_action_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(enemycoil_1755_instances))->get_action_y());
        }
    }
    event_1611_32_end: ;
}
void Frames::event_func_7653()
{
    // event 1614_32
    bool or_result_1614_32 = false;
    bool or_temp_result_1614_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1614_32_0_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1614_32_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemycoilhead_1782_instances, qualifier_7)) goto or_event_1614_32_0_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1614_32_0_end;
        or_result_1614_32 = true;
        or_temp_result_1614_32_0 = true;
    }
    or_event_1614_32_0_end: ;
    enemycoilhead_1782_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1614_32_0) {
        enemycoilhead_1782_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1614_32
    bool or_temp_result_1614_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1614_32_1_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1614_32_1_end;
        or_result_1614_32 = true;
        or_temp_result_1614_32_1 = true;
        or_event_1614_32_1_end: ;
        if (or_temp_result_1614_32_1) {
            enemycoilhead_1782_instances.save_selection();
        }
        if (!or_result_1614_32) goto or_final_or_event_1614_32_1_end;
        enemycoilhead_1782_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1614_32_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1614_32_0 || or_temp_result_1614_32_1) {
            enemycoilhead_1782_instances.restore_selection();
        }
        FrameObject * single_instance_1614_32_0; single_instance_1614_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1614_32_0 == NULL)
                    single_instance_1614_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1614_32_0))->set_direction(2);
        FrameObject * single_instance_1614_32_1; single_instance_1614_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1614_32_1 == NULL)
                    single_instance_1614_32_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1614_32_1_end: ;
}
void Frames::event_func_7654()
{
    // event 1617_32
    {
        if (!(group_main_engine_1)) goto event_1617_32_end;
        if (!((((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.get(1)) <= (0))) goto event_1617_32_end;
        if (!(((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->flags.is_off(0))) goto event_1617_32_end;
        if (!((((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.get(0)) > (0))) goto event_1617_32_end;
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->set_visible(false);
    }
    event_1617_32_end: ;
}
void Frames::event_func_7655()
{
    // event 1618_32
    {
        if (!(group_main_engine_1)) goto event_1618_32_end;
        if (!((((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.get(1)) <= (0))) goto event_1618_32_end;
        if (!(((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->flags.is_off(0))) goto event_1618_32_end;
        if (!((((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.get(0)) > (0))) goto event_1618_32_end;
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->set_visible(false);
    }
    event_1618_32_end: ;
}
void Frames::event_func_7656()
{
    // event 1619_32
    {
        if (!(group_main_engine_1)) goto event_1619_32_end;
        if (!((((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->values.get(1)) <= (0))) goto event_1619_32_end;
        if (!(((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->flags.is_off(0))) goto event_1619_32_end;
        ((Active*)get_instance(enemycoilpiece2_1753_instances))->alterables->flags.enable(0);
    }
    event_1619_32_end: ;
}
void Frames::event_func_7657()
{
    // event 1620_32
    {
        if (!(group_main_engine_1)) goto event_1620_32_end;
        if (!((((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->values.get(1)) <= (0))) goto event_1620_32_end;
        if (!(((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->flags.is_off(0))) goto event_1620_32_end;
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(enemycoilpiece1_1751_instances))->set_visible(false);
    }
    event_1620_32_end: ;
}
void Frames::event_func_7658()
{
    // event 1621_32
    {
        if (!(group_main_engine_1)) goto event_1621_32_end;
        if (!((((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->values.get(1)) <= (0))) goto event_1621_32_end;
        if (!(((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->flags.is_off(0))) goto event_1621_32_end;
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(enemycoilpiece3_1752_instances))->set_visible(false);
    }
    event_1621_32_end: ;
}
void Frames::event_func_7659()
{
    // event 1622_32
    {
        if (!(group_main_engine_1)) goto event_1622_32_end;
        if (!((((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->values.get(1)) <= (0))) goto event_1622_32_end;
        if (!(((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->flags.is_off(0))) goto event_1622_32_end;
        ((Active*)get_instance(enemycoilpiece4_1754_instances))->alterables->flags.enable(0);
    }
    event_1622_32_end: ;
}
void Frames::event_func_7660()
{
    // event 1623_32
    {
        if (!(group_main_engine_1)) goto event_1623_32_end;
        if (!((((Active*)get_instance(enemycoil_1755_instances))->alterables->values.get(0)) <= (0))) goto event_1623_32_end;
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(enemycoil_1755_instances))->alterables->values.set(4, 99);
    }
    event_1623_32_end: ;
}
void Frames::event_func_7661()
{
    // event 1625_32
    {
        if (!(group_main_engine_1)) goto event_1625_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1625_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1625_32_end: ;
}
void Frames::event_func_7662()
{
    // event 1626_32
    {
        if (!(group_main_engine_1)) goto event_1626_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1626_32_end;
        if (test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y())) goto event_1626_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1626_32_end: ;
}
void Frames::event_func_7663()
{
    // event 1627_32
    {
        if (!(group_main_engine_1)) goto event_1627_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1627_32_end;
        if (test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y())) goto event_1627_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1627_32_end: ;
}
void Frames::event_func_7664()
{
    // event 1628_32
    {
        if (!(group_main_engine_1)) goto event_1628_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1628_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->alterables->values.set(9, 99);
        }
    }
    event_1628_32_end: ;
}
void Frames::event_func_7665()
{
    // event 1629_32
    {
        if (!(group_main_engine_1)) goto event_1629_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1629_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1629_32_end: ;
}
void Frames::event_func_7666()
{
    // event 1630_32
    {
        if (!(group_main_engine_1)) goto event_1630_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1630_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.2, -5));
        }
    }
    event_1630_32_end: ;
}
void Frames::event_func_7667()
{
    // event 1631_32
    {
        if (!(group_main_engine_1)) goto event_1631_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1631_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.2, 5));
        }
    }
    event_1631_32_end: ;
}
void Frames::event_func_7668()
{
    // event 1632_32
    {
        if (!(group_main_engine_1)) goto event_1632_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1632_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, randrange(50));
            ((Active*)*it)->alterables->values.set(11, -1);
        }
    }
    event_1632_32_end: ;
}
void Frames::event_func_7669()
{
    // event 1633_32
    {
        if (!(group_main_engine_1)) goto event_1633_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1633_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, randrange(50));
            ((Active*)*it)->alterables->values.set(11, 1);
        }
    }
    event_1633_32_end: ;
}
void Frames::event_func_7670()
{
    // event 1634_32
    {
        if (!(group_main_engine_1)) goto event_1634_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1634_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1634_32_end: ;
}
void Frames::event_func_7671()
{
    // event 1635_32
    {
        if (!(group_main_engine_1)) goto event_1635_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1635_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1635_32_end: ;
}
void Frames::event_func_7672()
{
    // event 1636_32
    {
        if (!(group_main_engine_1)) goto event_1636_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (10))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1636_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 2);
        }
    }
    event_1636_32_end: ;
}
void Frames::event_func_7673()
{
    // event 1637_32
    {
        if (!(group_main_engine_1)) goto event_1637_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (3))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1637_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1637_32_end: ;
}
void Frames::event_func_7674()
{
    // event 1638_32
    {
        if (!(group_main_engine_1)) goto event_1638_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (5))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1638_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 3);
            ((Active*)*it)->alterables->values.set(6, -6);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1638_32_end: ;
}
void Frames::event_func_7675()
{
    // event 1639_32
    {
        if (!(group_main_engine_1)) goto event_1639_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1639_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.25, 12));
        }
    }
    event_1639_32_end: ;
}
void Frames::event_func_7676()
{
    // event 1640_32
    {
        if (!(group_main_engine_1)) goto event_1640_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1640_32_end;
        if (test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_box_index(3)+1)) goto event_1640_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 3);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1640_32_end: ;
}
void Frames::event_func_7677()
{
    // event 1641_32
    {
        if (!(group_main_engine_1)) goto event_1641_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1641_32_end;
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1641_32_0; single_instance_1641_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyroller_1943_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_1641_32_0 == NULL)
                    single_instance_1641_32_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1641_32_0))->set_direction(24);
        ((Active*)((Active*)single_instance_1641_32_0))->get_movement()->set_speed(50);
    }
    event_1641_32_end: ;
}
void Frames::event_func_7678()
{
    // event 1642_32
    {
        if (!(group_main_engine_1)) goto event_1642_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1642_32_end;
        if (!(test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y()-12))) goto event_1642_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1642_32_end: ;
}
void Frames::event_func_7679()
{
    // event 1643_32
    {
        if (!(group_main_engine_1)) goto event_1643_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1643_32_end;
        if (!(test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_box_index(3)+1))) goto event_1643_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(8, 1);
            ((Active*)*it)->alterables->values.set(10, -30-randrange(30));
        }
        media.play_id(SOUND_COIL_STEP_164, -1, 1);
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 99);
        }
    }
    event_1643_32_end: ;
}
void Frames::event_func_7680()
{
    // event 1644_32
    {
        if (!(group_main_engine_1)) goto event_1644_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1644_32_end;
        if (!(test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_box_index(3)))) goto event_1644_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1644_32_end: ;
}
void Frames::event_func_7681()
{
    // event 1646_32
    bool or_result_1646_32 = false;
    bool or_temp_result_1646_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1646_32_0_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto or_event_1646_32_0_end;
        if (!(test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x()+12, ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y()))) goto or_event_1646_32_0_end;
        if (test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x()-12, ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y())) goto or_event_1646_32_0_end;
        or_result_1646_32 = true;
        or_temp_result_1646_32_0 = true;
    }
    or_event_1646_32_0_end: ;
    enemyroller_1943_instances.clear_saved_selection();
    if (or_temp_result_1646_32_0) {
        enemyroller_1943_instances.save_selection();
    }
    // event 1646_32
    bool or_temp_result_1646_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1646_32_1_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto or_event_1646_32_1_end;
        if (!(test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x()-12, ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y()))) goto or_event_1646_32_1_end;
        if (test_obstacle(((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_x()+12, ((Active*)get_single(enemyroller_1943_instances, default_active_instance))->get_y())) goto or_event_1646_32_1_end;
        or_result_1646_32 = true;
        or_temp_result_1646_32_1 = true;
        or_event_1646_32_1_end: ;
        if (or_temp_result_1646_32_1) {
            enemyroller_1943_instances.save_selection();
        }
        if (!or_result_1646_32) goto or_final_or_event_1646_32_1_end;
        enemyroller_1943_instances.empty_selection();
        if (or_temp_result_1646_32_0 || or_temp_result_1646_32_1) {
            enemyroller_1943_instances.restore_selection();
        }
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
        }
    }
    or_final_or_event_1646_32_1_end: ;
}
void Frames::event_func_7682()
{
    // event 1647_32
    {
        if (!(group_main_engine_1)) goto event_1647_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1647_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 4);
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1647_32_end: ;
}
void Frames::event_func_7683()
{
    // event 1648_32
    {
        if (!(group_main_engine_1)) goto event_1648_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1648_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1648_32_end: ;
}
void Frames::event_func_7684()
{
    // event 1649_32
    bool or_result_1649_32 = false;
    bool or_temp_result_1649_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1649_32_0_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto or_event_1649_32_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyroller_1943_instances, qualifier_7)) goto or_event_1649_32_0_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto or_event_1649_32_0_end;
        or_result_1649_32 = true;
        or_temp_result_1649_32_0 = true;
    }
    or_event_1649_32_0_end: ;
    enemyroller_1943_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1649_32_0) {
        enemyroller_1943_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1649_32
    bool or_temp_result_1649_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1649_32_1_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto or_event_1649_32_1_end;
        or_result_1649_32 = true;
        or_temp_result_1649_32_1 = true;
        or_event_1649_32_1_end: ;
        if (or_temp_result_1649_32_1) {
            enemyroller_1943_instances.save_selection();
        }
        if (!or_result_1649_32) goto or_final_or_event_1649_32_1_end;
        qualifier_7.empty_selection();
        enemyroller_1943_instances.empty_selection();
        if (or_temp_result_1649_32_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1649_32_0 || or_temp_result_1649_32_1) {
            enemyroller_1943_instances.restore_selection();
        }
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1649_32_0; single_instance_1649_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyroller_1943_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1649_32_0 == NULL)
                    single_instance_1649_32_0 = new_obj;
            }
        }
        FrameObject * single_instance_1649_32_1; single_instance_1649_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyroller_1943_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1649_32_1 == NULL)
                    single_instance_1649_32_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1649_32_1_end: ;
}
void Frames::event_func_7685()
{
    // event 1651_32
    {
        if (!(group_main_engine_1)) goto event_1651_32_end;
        enemydusterarm2_1938_instances.clear_selection();
        for (ObjectIterator it(enemydusterarm2_1938_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyduster_1958_instances, it.current_index));
            if (parent == NULL) goto pos_end_1651_32_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1651_32_0: ;
        }
        enemydusterarm1_1939_instances.clear_selection();
        for (ObjectIterator it(enemydusterarm1_1939_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(enemydusterarm2_1938_instances, it.current_index));
            if (parent == NULL) goto pos_end_1651_32_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1651_32_1: ;
        }
        enemydustermouth_1957_instances.clear_selection();
        for (ObjectIterator it(enemydustermouth_1957_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(enemydusterarm1_1939_instances, it.current_index));
            if (parent == NULL) goto pos_end_1651_32_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1651_32_2: ;
        }
        for (ObjectIterator it(enemydusterarm2_1938_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(cos_deg(((Active*)get_instance(enemyduster_1958_instances, it.current_index, default_active_instance))->alterables->values.get(3))*20-20, 0);
        }
        for (ObjectIterator it(enemydusterarm1_1939_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(cos_deg(((Active*)get_instance(enemyduster_1958_instances, it.current_index, default_active_instance))->alterables->values.get(3))*-20+20, 0);
        }
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
        }
        for (ObjectIterator it(enemydusterarm2_1938_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(enemyduster_1958_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(enemydusterarm1_1939_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(enemyduster_1958_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(enemydustermouth_1957_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(enemyduster_1958_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemyduster_1958_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->flags.get(6));
        }
    }
    event_1651_32_end: ;
}
void Frames::event_func_7686()
{
    // event 1652_32
    {
        if (!(group_main_engine_1)) goto event_1652_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1652_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%360);
            ((Active*)*it)->alterables->values.add(4, sin_deg(((Active*)*it)->alterables->values.get(3)*0.5)*3);
        }
    }
    event_1652_32_end: ;
}
void Frames::event_func_7687()
{
    // event 1653_32
    {
        if (!(group_main_engine_1)) goto event_1653_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1653_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, sin_deg(((Active*)*it)->alterables->values.get(3)*0.5)*3);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+355)%math_helper%360);
        }
    }
    event_1653_32_end: ;
}
void Frames::event_func_7688()
{
    // event 1654_32
    {
        if (!(group_main_engine_1)) goto event_1654_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1654_32_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemyduster_1958_instances, enemylimiter_350_instances)) goto event_1654_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1654_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1654_32_end: ;
}
void Frames::event_func_7689()
{
    // event 1655_32
    {
        if (!(group_main_engine_1)) goto event_1655_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (5))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1655_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(6, 100);
        }
    }
    event_1655_32_end: ;
}
void Frames::event_func_7690()
{
    // event 1656_32
    {
        if (!(group_main_engine_1)) goto event_1656_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1656_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    event_1656_32_end: ;
}
void Frames::event_func_7691()
{
    // event 1657_32
    {
        if (!(group_main_engine_1)) goto event_1657_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1657_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1657_32_0; single_instance_1657_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyduster_1958_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1657_32_0 == NULL)
                    single_instance_1657_32_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        FrameObject * single_instance_1657_32_1; single_instance_1657_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyduster_1958_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1657_32_1 == NULL)
                    single_instance_1657_32_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1657_32_1))->force_frame(2);
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1657_32_end: ;
}
void Frames::event_func_7692()
{
    // event 1658_32
    {
        if (!(group_main_engine_1)) goto event_1658_32_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1658_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (4))) { it.deselect(); continue; }
        }
        if (!enemyduster_1958_instances.has_selection()) goto event_1658_32_end;
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        FrameObject * single_instance_1658_32_0; single_instance_1658_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyduster_1958_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1658_32_0 == NULL)
                    single_instance_1658_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1658_32_0))->set_x(((Active*)single_instance_1658_32_0)->get_x()-5+randrange(11));
        ((Active*)((Active*)single_instance_1658_32_0))->set_y(((Active*)single_instance_1658_32_0)->get_y()-8+randrange(17));
    }
    event_1658_32_end: ;
}
void Frames::event_func_7693()
{
    // event 1659_32
    {
        if (!(group_main_engine_1)) goto event_1659_32_end;
        enemydustermouth_1957_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemydustermouth_1957_instances, qualifier_20)) goto event_1659_32_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1659_32_end;
        FrameObject * single_instance_1659_32_0; single_instance_1659_32_0 = pick_random(qualifier_20);
        if (single_instance_1659_32_0 == NULL) goto event_1659_32_end;
        ((Active*)((Active*)single_instance_1659_32_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1659_32_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1659_32_0))->alterables->values.set(24, 0);
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1659_32_0))->alterables->values.sub(0, 3);
        {
            ((Active*)single_instance_1659_32_0)->set_shader(Render::INVERT);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1659_32_end: ;
}
void Frames::event_func_7694()
{
    // event 1660_32
    {
        if (!(group_main_engine_1)) goto event_1660_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1660_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1660_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1660_32_end;
        playercharactersensor_383_instances.clear_selection();
        enemydustermouth_1957_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, enemydustermouth_1957_instances)) goto event_1660_32_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->get_x()) > (((Active*)get_single(enemydustermouth_1957_instances, default_active_instance))->get_x()+8))) goto event_1660_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1660_32_end: ;
}
void Frames::event_func_7695()
{
    // event 1670_32
    {
        if (!(group_main_engine_1)) goto event_1670_32_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1670_32_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1670_32_0; single_instance_1670_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1670_32_0 == NULL)
                    single_instance_1670_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1670_32_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1670_32_0))->alterables->values.set(1, -3);
        FrameObject * single_instance_1670_32_1; single_instance_1670_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1670_32_1 == NULL)
                    single_instance_1670_32_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1670_32_end: ;
}
void Frames::event_func_7696()
{
    // event 1704_32
    bool or_result_1704_32 = false;
    bool or_temp_result_1704_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1704_32_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1704_32_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1704_32_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1704_32_0_end;
        or_result_1704_32 = true;
        or_temp_result_1704_32_0 = true;
    }
    or_event_1704_32_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1704_32_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1704_32
    bool or_temp_result_1704_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1704_32_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1704_32_1_end;
        or_result_1704_32 = true;
        or_temp_result_1704_32_1 = true;
        or_event_1704_32_1_end: ;
        if (or_temp_result_1704_32_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1704_32) goto or_final_or_event_1704_32_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1704_32_0 || or_temp_result_1704_32_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1704_32_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1704_32_0; single_instance_1704_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1704_32_0 == NULL)
                    single_instance_1704_32_0 = new_obj;
            }
        }
        FrameObject * single_instance_1704_32_1; single_instance_1704_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1704_32_1 == NULL)
                    single_instance_1704_32_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1704_32_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1704_32_1_end: ;
}
void Frames::event_func_7697()
{
    // event 1713_32
    {
        if (!(group_main_engine_1)) goto event_1713_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1713_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(6))*40);
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+2)%math_helper%360);
        }
    }
    event_1713_32_end: ;
}
void Frames::event_func_7698()
{
    // event 1714_32
    {
        if (!(group_main_engine_1)) goto event_1714_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1714_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1714_32_end: ;
}
void Frames::event_func_7699()
{
    // event 1715_32
    {
        if (!(group_main_engine_1)) goto event_1715_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1715_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1715_32_end: ;
}
void Frames::event_func_7700()
{
    // event 1716_32
    {
        if (!(group_main_engine_1)) goto event_1716_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1716_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1716_32_end: ;
}
void Frames::event_func_7701()
{
    // event 1717_32
    {
        if (!(group_main_engine_1)) goto event_1717_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1717_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -90);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1717_32_end: ;
}
void Frames::event_func_7702()
{
    // event 1718_32
    {
        if (!(group_main_engine_1)) goto event_1718_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1718_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 6);
        }
        media.play_id(SOUND_ENEMY_GHETTOBLAST_231, -1, 1);
    }
    event_1718_32_end: ;
}
void Frames::event_func_7703()
{
    // event 1719_32
    {
        if (!(group_main_engine_1)) goto event_1719_32_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1719_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (1))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1719_32_end;
        FrameObject * single_instance_1719_32_0; single_instance_1719_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysoundwave_1885(parent->x + 0, parent->y + -18), parent->layer);
                if (single_instance_1719_32_0 == NULL)
                    single_instance_1719_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1719_32_0))->set_direction(((Active*)get_single(enemyghettoshell_1971_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1719_32_0))->alterables->values.set(1, ((Active*)get_single(enemyghettoshell_1971_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_1719_32_end: ;
}
void Frames::event_func_7704()
{
    // event 1720_32
    {
        if (!(group_main_engine_1)) goto event_1720_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1720_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1720_32_end: ;
}
void Frames::event_func_7705()
{
    // event 1721_32
    {
        if (!(group_main_engine_1)) goto event_1721_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1721_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1721_32_end: ;
}
void Frames::event_func_7706()
{
    // event 1722_32
    {
        if (!(group_main_engine_1)) goto event_1722_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1722_32_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1722_32_end;
        FrameObject * single_instance_1722_32_0; single_instance_1722_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1722_32_0 == NULL)
                    single_instance_1722_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1722_32_0))->set_x(((Active*)single_instance_1722_32_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1722_32_0))->set_y(((Active*)single_instance_1722_32_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1722_32_1_end;
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
        dynamic_1722_32_1_end: ;
    }
    event_1722_32_end: ;
}
void Frames::event_func_7707()
{
    // event 1723_32
    {
        if (!(group_main_engine_1)) goto event_1723_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1723_32_end;
        FrameObject * single_instance_1723_32_0; single_instance_1723_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1723_32_0 == NULL)
                    single_instance_1723_32_0 = new_obj;
            }
        }
        FrameObject * single_instance_1723_32_1; single_instance_1723_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1723_32_1 == NULL)
                    single_instance_1723_32_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1723_32_end: ;
}
void Frames::event_func_7708()
{
    // event 1725_32
    {
        if (!(group_main_engine_1)) goto event_1725_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1725_32_end;
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1725_32_end: ;
}
void Frames::event_func_7709()
{
    // event 1726_32
    {
        if (!(group_main_engine_1)) goto event_1726_32_end;
        enemysoundwave_1885_instances.clear_selection();
        for (ObjectIterator it(enemysoundwave_1885_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1)*6);
            ((Active*)*it)->set_scale(0.5+get_min(((Active*)*it)->alterables->values.get(0)*0.1, 0.5));
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1726_32_end: ;
}
void Frames::event_func_7710()
{
    // event 1727_32
    {
        if (!(group_main_engine_1)) goto event_1727_32_end;
        enemysoundwave_1885_instances.clear_selection();
        for (ObjectIterator it(enemysoundwave_1885_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (16))) { it.deselect(); continue; }
        }
        if (!enemysoundwave_1885_instances.has_selection()) goto event_1727_32_end;
        for (ObjectIterator it(enemysoundwave_1885_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1727_32_end: ;
}
void Frames::event_func_7711()
{
    // event 1728_32
    {
        if (!(group_main_engine_1)) goto event_1728_32_end;
        enemysoundwave_1885_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemysoundwave_1885_instances, playercharactersensor_383_instances)) goto event_1728_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1728_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1728_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1728_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1728_32_end: ;
}
void Frames::event_func_7712()
{
    // event 1729_32
    {
        if (!(group_main_engine_1)) goto event_1729_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+20))) goto event_1729_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1729_32_end;
        if (not_always_1729_32 > loop_count) {
            not_always_1729_32 = loop_count + 2;
            goto event_1729_32_end;
        }
        not_always_1729_32 = loop_count + 2;
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
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
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
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1729_32_end: ;
}
void Frames::event_func_7713()
{
    // event 1738_32
    bool or_result_1738_32 = false;
    bool or_temp_result_1738_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1738_32_0_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2560, 770, 2784, 834)) > (0))) goto or_event_1738_32_0_end;
        or_result_1738_32 = true;
        or_temp_result_1738_32_0 = true;
    }
    or_event_1738_32_0_end: ;
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1738_32_0) {
        player_389_instances.save_selection();
    }
    // event 1738_32
    bool or_temp_result_1738_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1738_32_1_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3008, 768, 3232, 832)) > (0))) goto or_event_1738_32_1_end;
        or_result_1738_32 = true;
        or_temp_result_1738_32_1 = true;
    }
    or_event_1738_32_1_end: ;
    if (or_temp_result_1738_32_1) {
        player_389_instances.save_selection();
    }
    // event 1738_32
    bool or_temp_result_1738_32_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1738_32_2_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2815, 1009, 3184, 1073)) > (0))) goto or_event_1738_32_2_end;
        or_result_1738_32 = true;
        or_temp_result_1738_32_2 = true;
        or_event_1738_32_2_end: ;
        if (or_temp_result_1738_32_2) {
            player_389_instances.save_selection();
        }
        if (!or_result_1738_32) goto or_final_or_event_1738_32_2_end;
        player_389_instances.empty_selection();
        if (or_temp_result_1738_32_0 || or_temp_result_1738_32_1 || or_temp_result_1738_32_2) {
            player_389_instances.restore_selection();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    or_final_or_event_1738_32_2_end: ;
}
void Frames::event_func_7714()
{
    // event 1744_32
    {
        if (!(group_main_engine_1)) goto event_1744_32_end;
        if (!((global_values->get(4)) < (2))) goto event_1744_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7670))) goto event_1744_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7770))) goto event_1744_32_end;
        global_values->set(4, 2);
        global_values->set(5, 7670);
        global_values->set(6, 840);
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
    event_1744_32_end: ;
}
