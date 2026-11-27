#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11271()
{
    // event 1870_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1)) goto event_1870_46_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1870_46_end;
        FrameObject * single_instance_1870_46_0; single_instance_1870_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderbody_2740_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1870_46_0 == NULL)
                    single_instance_1870_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1870_46_0))->set_x(((Active*)single_instance_1870_46_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1870_46_0))->set_x(((Active*)single_instance_1870_46_0)->get_x()-30+randrange(61));
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1870_46_1_end;
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
        dynamic_1870_46_1_end: ;
    }
    event_1870_46_end: ;
}
void Frames::event_func_11272()
{
    // event 1871_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1)) goto event_1871_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (12))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1871_46_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1 = true;
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 30);
        }
        FrameObject * single_instance_1871_46_0; single_instance_1871_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderbody_2740_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1871_46_0 == NULL)
                    single_instance_1871_46_0 = new_obj;
            }
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(23, -8*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(24, -4);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.set(23, 8*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.set(24, -4);
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 6*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(24, -8);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 3*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(24, -10);
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -6*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(24, -8);
        }
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1 = false;
    
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0, 0);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(23, ((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(24, ((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_y());
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1871_46_end: ;
}
void Frames::event_func_11273()
{
    // event 1872_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1872_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_x(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_x()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(23));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_y()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(24));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.add(24, 0.3);
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_x()+((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(23));
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_y()+((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(24));
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.add(24, 0.3);
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.add(24, 0.3);
        }
    }
    event_1872_46_end: ;
}
void Frames::event_func_11274()
{
    // event 1873_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1873_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1873_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)+((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0))*0.5));
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(2, ((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(9)-96);
    }
    event_1873_46_end: ;
}
void Frames::event_func_11275()
{
    // event 1874_46
    bool or_result_1874_46 = false;
    bool or_temp_result_1874_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1874_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (15))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1874_46_0_end;
        or_result_1874_46 = true;
        or_temp_result_1874_46_0 = true;
    }
    or_event_1874_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1874_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1874_46
    bool or_temp_result_1874_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1874_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1874_46_1_end;
        or_result_1874_46 = true;
        or_temp_result_1874_46_1 = true;
        or_event_1874_46_1_end: ;
        if (or_temp_result_1874_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1874_46) goto or_final_or_event_1874_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1874_46_0 || or_temp_result_1874_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        bosssyntaxgrappleline_2754_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxgrappleline_2754_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, (((Active*)*it)->alterables->values.get(23)*14+((Active*)*it)->alterables->values.get(1))/math_helper/15.0);
            ((Active*)*it)->alterables->values.set(24, (((Active*)*it)->alterables->values.get(24)*14+((Active*)*it)->alterables->values.get(2))/math_helper/15.0);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxgrappleline_2754_instances, it.current_index, default_active_instance))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_single(bosssyntaxgrappleline_2754_instances, it.current_index, default_active_instance))->alterables->values.get(24));
        }
    }
    or_final_or_event_1874_46_1_end: ;
}
void Frames::event_func_11276()
{
    // event 1875_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1875_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1875_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1875_46_end: ;
}
void Frames::event_func_11277()
{
    // event 1876_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1876_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1876_46_end;
        if (once_condition_1876_46) goto event_1876_46_end;
        once_condition_1876_46 = true;
        media.play_id(SOUND_TREDDSTEP_52, -1, 1);
    }
    event_1876_46_end: ;
}
void Frames::event_func_11278()
{
    // event 1877_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1877_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1877_46_end;
        {
            FrameObject * parent = ((Active*)get_single(bosssyntaxspider_2743_instances));
            if (parent == NULL) goto pos_end_1877_46_0;
            ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 8);
            pos_end_1877_46_0: ;
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->move_back();
    }
    event_1877_46_end: ;
}
void Frames::event_func_11279()
{
    // event 1878_46
    bool or_result_1878_46 = false;
    bool or_temp_result_1878_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1878_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1878_46_0_end;
        or_result_1878_46 = true;
        or_temp_result_1878_46_0 = true;
    }
    or_event_1878_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1878_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1878_46
    bool or_temp_result_1878_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1878_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) < (6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1878_46_1_end;
        or_result_1878_46 = true;
        or_temp_result_1878_46_1 = true;
        or_event_1878_46_1_end: ;
        if (or_temp_result_1878_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1878_46) goto or_final_or_event_1878_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1878_46_0 || or_temp_result_1878_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        bosssyntaxgrappleline_2754_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxgrappleline_2754_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+20, 648));
        }
    }
    or_final_or_event_1878_46_1_end: ;
}
void Frames::event_func_11280()
{
    // event 1879_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1879_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (70))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1879_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0)-64);
    }
    event_1879_46_end: ;
}
void Frames::event_func_11281()
{
    // event 1880_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1880_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1880_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1880_46_end: ;
}
void Frames::event_func_11282()
{
    // event 1881_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1881_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1881_46_end;
        media.play_id(SOUND_LOWBUZZ_307, -1, 1);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1881_46_end: ;
}
void Frames::event_func_11283()
{
    // event 1882_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1882_46_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1882_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1882_46_end;
        if (!((bossspikelauncher_2725_instances.size()) < (8))) goto event_1882_46_end;
        FrameObject * single_instance_1882_46_0; single_instance_1882_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspider_2743_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossspikelauncher_2725(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1882_46_0 == NULL)
                    single_instance_1882_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1882_46_0))->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(9)+96);
        ((Active*)((Active*)single_instance_1882_46_0))->set_x(((Active*)single_instance_1882_46_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1882_46_0))->move_back();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1882_46_end: ;
}
void Frames::event_func_11284()
{
    // event 1883_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1883_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_y()+48))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto event_1883_46_end;
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 200+((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->alterables->values.get(11)*20);
        }
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->move_front();
        }
    }
    event_1883_46_end: ;
}
void Frames::event_func_11285()
{
    // event 1884_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1884_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (110))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1884_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)+((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0))*0.5));
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1884_46_end: ;
}
void Frames::event_func_11286()
{
    // event 1885_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1885_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1885_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1885_46_end: ;
}
void Frames::event_func_11287()
{
    // event 1886_46
    bool or_result_1886_46 = false;
    bool or_temp_result_1886_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1886_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1886_46_0_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < ((((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.5)+180))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto or_event_1886_46_0_end;
        or_result_1886_46 = true;
        or_temp_result_1886_46_0 = true;
    }
    or_event_1886_46_0_end: ;
    bossspikelauncher_2725_instances.clear_saved_selection();
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1886_46_0) {
        bossspikelauncher_2725_instances.save_selection();
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1886_46
    bool or_temp_result_1886_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1886_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1886_46_1_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (360-(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.5)))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto or_event_1886_46_1_end;
        or_result_1886_46 = true;
        or_temp_result_1886_46_1 = true;
        or_event_1886_46_1_end: ;
        if (or_temp_result_1886_46_1) {
            bossspikelauncher_2725_instances.save_selection();
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1886_46) goto or_final_or_event_1886_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        bossspikelauncher_2725_instances.empty_selection();
        if (or_temp_result_1886_46_0 || or_temp_result_1886_46_1) {
            bossspikelauncher_2725_instances.restore_selection();
        }
        if (or_temp_result_1886_46_0 || or_temp_result_1886_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    or_final_or_event_1886_46_1_end: ;
}
void Frames::event_func_11288()
{
    // event 1887_46
    bool or_result_1887_46 = false;
    bool or_temp_result_1887_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1887_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1887_46_0_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < ((((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.5)+160))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto or_event_1887_46_0_end;
        or_result_1887_46 = true;
        or_temp_result_1887_46_0 = true;
    }
    or_event_1887_46_0_end: ;
    bossspikelauncher_2725_instances.clear_saved_selection();
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1887_46_0) {
        bossspikelauncher_2725_instances.save_selection();
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1887_46
    bool or_temp_result_1887_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto or_event_1887_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1887_46_1_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (380-(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.5)))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto or_event_1887_46_1_end;
        or_result_1887_46 = true;
        or_temp_result_1887_46_1 = true;
        or_event_1887_46_1_end: ;
        if (or_temp_result_1887_46_1) {
            bossspikelauncher_2725_instances.save_selection();
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1887_46) goto or_final_or_event_1887_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        bossspikelauncher_2725_instances.empty_selection();
        if (or_temp_result_1887_46_0 || or_temp_result_1887_46_1) {
            bossspikelauncher_2725_instances.restore_selection();
        }
        if (or_temp_result_1887_46_0 || or_temp_result_1887_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    or_final_or_event_1887_46_1_end: ;
}
void Frames::event_func_11289()
{
    // event 1888_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1888_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (240))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1888_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)+64);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1888_46_end: ;
}
void Frames::event_func_11290()
{
    // event 1889_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1889_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (240))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1889_46_end;
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0)-64);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.set(10, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1889_46_end: ;
}
void Frames::event_func_11291()
{
    // event 1890_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1890_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) != (6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1890_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1890_46_0; single_instance_1890_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossspikelauncher_2725_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1890_46_0 == NULL)
                    single_instance_1890_46_0 = new_obj;
            }
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 6);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(1, ((((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)+((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0))*0.5));
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1890_46_end: ;
}
void Frames::event_func_11292()
{
    // event 1891_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1891_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1891_46_end;
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.get(0)-20, 0));
    }
    event_1891_46_end: ;
}
void Frames::event_func_11293()
{
    // event 1892_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1892_46_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1892_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (12))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1892_46_end;
        FrameObject * single_instance_1892_46_0; single_instance_1892_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspider_2743_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1892_46_0 == NULL)
                    single_instance_1892_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1892_46_0))->set_x(((Active*)single_instance_1892_46_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1892_46_0))->set_x(((Active*)single_instance_1892_46_0)->get_x()-30+randrange(61));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1892_46_1_end;
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
        dynamic_1892_46_1_end: ;
    }
    event_1892_46_end: ;
}
void Frames::event_func_11294()
{
    // event 1893_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1893_46_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1893_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1893_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1893_46_end: ;
}
void Frames::event_func_11295()
{
    // event 1894_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1894_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1894_46_end;
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->alterables->values.sub(2, ((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(11));
    }
    event_1894_46_end: ;
}
void Frames::event_func_11296()
{
    // event 1895_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1)) goto event_1895_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (16))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1895_46_end;
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1 = true;
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosssyntaxgrappleline_2754_instances))->set_visible(false);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(255);
        ((Active*)get_instance(levelheatsky_2757_instances))->set_x_scale(43);
        ((Active*)get_instance(levelheatsky_2757_instances))->set_y_scale(24);
        ((Active*)get_instance(levelheatsky_2757_instances))->set_visible(true);
        media.play_id(SOUND_COMMON_TBALARM2_312, -1, 1);
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(4);
        }
    }
    event_1895_46_end: ;
}
void Frames::event_func_11297()
{
    // event 1896_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1896_46_end;
        if (not_always_1896_46 > loop_count) {
            not_always_1896_46 = loop_count + 2;
            goto event_1896_46_end;
        }
        not_always_1896_46 = loop_count + 2;
        media.stop_channel(32-1);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1896_46_end: ;
}
void Frames::event_func_11298()
{
    // event 1897_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1897_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1897_46_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (60))) goto event_1897_46_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1897_46_end: ;
}
void Frames::event_func_11299()
{
    // event 1898_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1898_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1898_46_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+2128)*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+3936)*0.05);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.05, 6));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 15);
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(get_max(((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()-1, 0));
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1898_46_end: ;
}
void Frames::event_func_11300()
{
    // event 1899_46
    bool or_result_1899_46 = false;
    bool or_temp_result_1899_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1899_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1899_46_0_end;
        or_result_1899_46 = true;
        or_temp_result_1899_46_0 = true;
    }
    or_event_1899_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1899_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1899_46
    bool or_temp_result_1899_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1899_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1899_46_1_end;
        or_result_1899_46 = true;
        or_temp_result_1899_46_1 = true;
        or_event_1899_46_1_end: ;
        if (or_temp_result_1899_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1899_46) goto or_final_or_event_1899_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1899_46_0 || or_temp_result_1899_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    or_final_or_event_1899_46_1_end: ;
}
void Frames::event_func_11301()
{
    // event 1900_46
    bool or_result_1900_46 = false;
    bool or_temp_result_1900_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1900_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1900_46_0_end;
        if (!(!media.is_sample_playing(SOUND_LAVAWALL_311))) goto or_event_1900_46_0_end;
        or_result_1900_46 = true;
        or_temp_result_1900_46_0 = true;
    }
    or_event_1900_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1900_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1900_46
    bool or_temp_result_1900_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1900_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1900_46_1_end;
        if (!(!media.is_sample_playing(SOUND_LAVAWALL_311))) goto or_event_1900_46_1_end;
        or_result_1900_46 = true;
        or_temp_result_1900_46_1 = true;
        or_event_1900_46_1_end: ;
        if (or_temp_result_1900_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1900_46) goto or_final_or_event_1900_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1900_46_0 || or_temp_result_1900_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        media.play_id(SOUND_LAVAWALL_311, 29-1, 0);
    }
    or_final_or_event_1900_46_1_end: ;
}
void Frames::event_func_11302()
{
    // event 1901_46
    bool or_result_1901_46 = false;
    bool or_temp_result_1901_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1901_46_0_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_1901_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1901_46_0_end;
        or_result_1901_46 = true;
        or_temp_result_1901_46_0 = true;
    }
    or_event_1901_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1901_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1901_46
    bool or_temp_result_1901_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1901_46_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_1901_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1901_46_1_end;
        or_result_1901_46 = true;
        or_temp_result_1901_46_1 = true;
        or_event_1901_46_1_end: ;
        if (or_temp_result_1901_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1901_46) goto or_final_or_event_1901_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1901_46_0 || or_temp_result_1901_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    or_final_or_event_1901_46_1_end: ;
}
void Frames::event_func_11303()
{
    // event 1902_46
    bool or_result_1902_46 = false;
    bool or_temp_result_1902_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1902_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1902_46_0_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(levellavacascadeend_2755_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto or_event_1902_46_0_end;
        or_result_1902_46 = true;
        or_temp_result_1902_46_0 = true;
    }
    or_event_1902_46_0_end: ;
    hazardlavafall3_2729_instances.clear_saved_selection();
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1902_46_0) {
        hazardlavafall3_2729_instances.save_selection();
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1902_46
    bool or_temp_result_1902_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto or_event_1902_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1902_46_1_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_right()+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(levellavacascadeend_2755_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto or_event_1902_46_1_end;
        or_result_1902_46 = true;
        or_temp_result_1902_46_1 = true;
        or_event_1902_46_1_end: ;
        if (or_temp_result_1902_46_1) {
            hazardlavafall3_2729_instances.save_selection();
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1902_46) goto or_final_or_event_1902_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        hazardlavafall3_2729_instances.empty_selection();
        if (or_temp_result_1902_46_0 || or_temp_result_1902_46_1) {
            hazardlavafall3_2729_instances.restore_selection();
        }
        if (or_temp_result_1902_46_0 || or_temp_result_1902_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        FrameObject * single_instance_1902_46_0; single_instance_1902_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardlavafall3_2729_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + -32, parent->y + 0), parent->layer);
                if (single_instance_1902_46_0 == NULL)
                    single_instance_1902_46_0 = new_obj;
            }
        }
    }
    or_final_or_event_1902_46_1_end: ;
}
void Frames::event_func_11304()
{
    // event 1903_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1903_46_end;
        effectsexplosion06_312_instances.clear_selection();
        hazardlavafall3_2729_instances.clear_selection();
        if (!check_overlap(effectsexplosion06_312_instances, hazardlavafall3_2729_instances)) goto event_1903_46_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectsexplosion06_312_instances.has_selection()) goto event_1903_46_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32+randrange(65));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1903_46_end: ;
}
void Frames::event_func_11305()
{
    // event 1904_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1904_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (230))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1904_46_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->set_x(3456);
        {
            loop_warning_running = true;
            int times = int(14);
            loop_warning_index = 0;
            while (loop_warning_index < times) {
                loop_warning_46();
                if (!loop_warning_running) break;
                loop_warning_index++;
            }
        }
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1904_46_end: ;
}
void Frames::event_func_11306()
{
    // event 1905_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1905_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (70))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1905_46_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_44();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1905_46_end: ;
}
void Frames::event_func_11307()
{
    // event 1906_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1906_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1906_46_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(5)*0.05, 6));
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(get_max(get_min(get_abs(((Active*)get_instance(hazardlavafall3_2729_instances, default_active_instance))->get_x()-frame_left())*0.5, 200), 20));
        playerblocker_2756_instances.clear_selection();
        for (ObjectIterator it(playerblocker_2756_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1906_46_end: ;
}
void Frames::event_func_11308()
{
    // event 1908_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1908_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1908_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1908_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-240))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1908_46_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1908_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (11))) goto event_1908_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 0.1);
    }
    event_1908_46_end: ;
}
void Frames::event_func_11309()
{
    // event 1909_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1909_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1909_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (4288))) goto event_1909_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        playerblocker_2756_instances.clear_selection();
        for (ObjectIterator it(playerblocker_2756_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1909_46_end: ;
}
void Frames::event_func_11310()
{
    // event 1910_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1910_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1910_46_end;
        if (!media.is_sample_playing(SOUND_LAVAWALL_311)) goto event_1910_46_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+50))) goto event_1910_46_end;
        media.set_channel_volume(29-1, get_max(media.get_channel_volume(-1 +29)-1, 20));
    }
    event_1910_46_end: ;
}
void Frames::event_func_11311()
{
    // event 1911_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1911_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1911_46_end;
        if (!media.is_sample_playing(SOUND_LAVAWALL_311)) goto event_1911_46_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+50))) goto event_1911_46_end;
        media.set_channel_volume(29-1, get_max(media.get_channel_volume(-1 +29)-1, 0));
    }
    event_1911_46_end: ;
}
void Frames::event_func_11312()
{
    // event 1912_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1912_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1912_46_end;
        if (!(!media.is_sample_playing(SOUND_LAVAWALL_311))) goto event_1912_46_end;
        media.set_channel_volume(29-1, 100);
    }
    event_1912_46_end: ;
}
void Frames::event_func_11313()
{
    // event 1913_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1913_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1913_46_end;
        if (!((((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()) < (200))) goto event_1913_46_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+50))) goto event_1913_46_end;
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(get_min(((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()+2, 200));
    }
    event_1913_46_end: ;
}
void Frames::event_func_11314()
{
    // event 1914_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1914_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1914_46_end;
        if (!((((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()) > (200))) goto event_1914_46_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+50))) goto event_1914_46_end;
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(get_max(((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()-1, 200));
    }
    event_1914_46_end: ;
}
void Frames::event_func_11315()
{
    // event 1915_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1915_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1915_46_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+50))) goto event_1915_46_end;
        ((Active*)get_instance(levelheatsky_2757_instances))->blend_color.set_alpha_coefficient(get_min(((Active*)get_instance(levelheatsky_2757_instances))->blend_color.get_alpha_coefficient()+1, 255));
    }
    event_1915_46_end: ;
}
void Frames::event_func_11316()
{
    // event 1916_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1916_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1916_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(levellavacascadeend_2755_instances))->get_x()+320))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1916_46_end;
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1280);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1916_46_end: ;
}
void Frames::event_func_11317()
{
    // event 1917_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1917_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1917_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1917_46_end: ;
}
void Frames::event_func_11318()
{
    // event 1918_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1918_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1918_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall3_2729_instances, playercharactersensor_383_instances)) goto event_1918_46_end;
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1918_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1918_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 3);
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 5);
        }
    }
    event_1918_46_end: ;
}
void Frames::event_func_11319()
{
    // event 1919_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1919_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1919_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall3_2729_instances, playercharactersensor_383_instances)) goto event_1919_46_end;
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1919_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1919_46_end;
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 5);
        }
    }
    event_1919_46_end: ;
}
void Frames::event_func_11320()
{
    // event 1920_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1920_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1920_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall3_2729_instances, playercharactersensor_383_instances)) goto event_1920_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1920_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7488))) goto event_1920_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1920_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1920_46_end;
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 10);
    }
    event_1920_46_end: ;
}
void Frames::event_func_11321()
{
    // event 1921_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1921_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1921_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall3_2729_instances, playercharactersensor_383_instances)) goto event_1921_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1921_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 10);
    }
    event_1921_46_end: ;
}
void Frames::event_func_11322()
{
    // event 1922_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1922_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        enemyelitemask_2511_instances.clear_selection();
        if (!check_overlap(hazardlavafall3_2729_instances, enemyelitemask_2511_instances)) goto event_1922_46_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(20, 99);
            ((Active*)*it)->alterables->values.set(23, 10);
        }
    }
    event_1922_46_end: ;
}
void Frames::event_func_11323()
{
    // event 1923_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1923_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1923_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1-1);
        }
    }
    event_1923_46_end: ;
}
void Frames::event_func_11324()
{
    // event 1924_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1924_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1924_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(11, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), 4));
    }
    event_1924_46_end: ;
}
void Frames::event_func_11325()
{
    // event 1925_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1925_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1925_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1925_46_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_1925_46_end: ;
}
void Frames::event_func_11326()
{
    // event 1926_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1926_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_1926_46_end;
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1926_46_end: ;
}
void Frames::event_func_11327()
{
    // event 1927_46
    {
        if (!(group_main_engine_1)) goto event_1927_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1927_46_end: ;
}
void Frames::event_func_11328()
{
    // event 1928_46
    {
        if (!(group_main_engine_1)) goto event_1928_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!hazardlavafall2_2724_instances.has_selection()) goto event_1928_46_end;
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_x(((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_y(((Active*)get_single(hazardlavafall2_2724_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bosslavasplash1_2745_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.set(1, 5);
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_visible(true);
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1928_46_end: ;
}
void Frames::event_func_11329()
{
    // event 1929_46
    {
        if (!(group_main_engine_1)) goto event_1929_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!hazardlavafall2_2724_instances.has_selection()) goto event_1929_46_end;
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_x(((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_y(((Active*)get_single(hazardlavafall2_2724_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bosslavasplash2_2746_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_visible(true);
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1929_46_end: ;
}
void Frames::event_func_11330()
{
    // event 1932_46
    {
        if (!(group_main_engine_1)) goto event_1932_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall2_2724_instances.has_selection()) goto event_1932_46_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall2_2724_instances, playercharactersensor_383_instances)) goto event_1932_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1932_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 3);
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 5);
        }
    }
    event_1932_46_end: ;
}
void Frames::event_func_11331()
{
    // event 1933_46
    {
        if (!(group_main_engine_1)) goto event_1933_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall2_2724_instances.has_selection()) goto event_1933_46_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlavafall2_2724_instances, playercharactersensor_383_instances)) goto event_1933_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1933_46_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(hazardlavafall2_2724_instances, default_active_instance))->alterables->values.get(0)*0.5);
    }
    event_1933_46_end: ;
}
void Frames::event_func_11332()
{
    // event 1934_46
    {
        if (!(group_main_engine_1)) goto event_1934_46_end;
        hazardlavafall2_2724_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardlavafall2_2724_instances.has_selection()) goto event_1934_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) < (1))) goto event_1934_46_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(hazardlavafall2_2724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1934_46_end: ;
}
void Frames::event_func_11333()
{
    // event 1935_46
    {
        if (!(group_main_engine_1)) goto event_1935_46_end;
        if (!((((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(1)) > (0))) goto event_1935_46_end;
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.sub(1, 1);
    }
    event_1935_46_end: ;
}
void Frames::event_func_11334()
{
    // event 1936_46
    {
        if (!(group_main_engine_1)) goto event_1936_46_end;
        if (!((((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(1)) == (0))) goto event_1936_46_end;
        if (!((((Active*)get_instance(bosslavasplash1_2745_instances))->get_frame()) == (0))) goto event_1936_46_end;
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_visible(false);
    }
    event_1936_46_end: ;
}
void Frames::event_func_11335()
{
    // event 1937_46
    {
        if (!(group_main_engine_1)) goto event_1937_46_end;
        if (!((((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(1)) > (0))) goto event_1937_46_end;
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.sub(1, 1);
    }
    event_1937_46_end: ;
}
void Frames::event_func_11336()
{
    // event 1938_46
    {
        if (!(group_main_engine_1)) goto event_1938_46_end;
        if (!((((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(1)) == (0))) goto event_1938_46_end;
        if (!((((Active*)get_instance(bosslavasplash2_2746_instances))->get_frame()) == (0))) goto event_1938_46_end;
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_visible(false);
    }
    event_1938_46_end: ;
}
void Frames::event_func_11337()
{
    // event 1939_46
    {
        if (!(group_main_engine_1)) goto event_1939_46_end;
        bosssyntaxspiderweb_2747_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1939_46_end: ;
}
void Frames::event_func_11338()
{
    // event 1940_46
    {
        if (!(group_main_engine_1)) goto event_1940_46_end;
        bosssyntaxspiderweb_2747_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (80))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderweb_2747_instances.has_selection()) goto event_1940_46_end;
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, 10));
        }
    }
    event_1940_46_end: ;
}
void Frames::event_func_11339()
{
    // event 1941_46
    {
        if (!(group_main_engine_1)) goto event_1941_46_end;
        bosssyntaxspiderweb_2747_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderweb_2747_instances.has_selection()) goto event_1941_46_end;
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.5, 0));
        }
    }
    event_1941_46_end: ;
}
void Frames::event_func_11340()
{
    // event 1942_46
    {
        if (!(group_main_engine_1)) goto event_1942_46_end;
        bosssyntaxspiderweb_2747_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderweb_2747_instances.has_selection()) goto event_1942_46_end;
        for (ObjectIterator it(bosssyntaxspiderweb_2747_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1942_46_end: ;
}
void Frames::event_func_11341()
{
    // event 1944_46
    {
        if (!(group_main_engine_1)) goto event_1944_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto event_1944_46_end;
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
        }
    }
    event_1944_46_end: ;
}
void Frames::event_func_11342()
{
    // event 1945_46
    {
        if (!(group_main_engine_1)) goto event_1945_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto event_1945_46_end;
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_y()+16);
        }
    }
    event_1945_46_end: ;
}
void Frames::event_func_11343()
{
    // event 1946_46
    {
        if (!(group_main_engine_1)) goto event_1946_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!bossspikelauncher_2725_instances.has_selection()) goto event_1946_46_end;
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(4, sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*-1);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1946_46_end: ;
}
void Frames::event_func_11344()
{
    // event 1949_46
    {
        if (!(group_main_engine_1)) goto event_1949_46_end;
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1949_46_end: ;
}
void Frames::event_func_11345()
{
    // event 2044_46
    {
        if (!(group_main_engine_1)) goto event_2044_46_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3678, 1713, 4680, 2271)) == (0))) goto event_2044_46_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_2044_46_end;
        if (not_always_2044_46 > loop_count) {
            not_always_2044_46 = loop_count + 2;
            goto event_2044_46_end;
        }
        not_always_2044_46 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_2044_46_end: ;
}
void Frames::event_func_11346()
{
    // event 2125_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2125_46_end;
        if (!((media.get_channel_volume(-1 +32)) < (global_values->get(25)))) goto event_2125_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2125_46_end;
        media.set_channel_volume(32-1, get_min(media.get_channel_volume(-1 +32)+((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(7), global_values->get(25)));
    }
    event_2125_46_end: ;
}
void Frames::event_func_11347()
{
    // event 2126_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2126_46_end;
        if (!((media.get_channel_volume(-1 +32)) > (global_values->get(25)))) goto event_2126_46_end;
        media.set_channel_volume(32-1, global_values->get(25));
    }
    event_2126_46_end: ;
}
void Frames::event_func_11348()
{
    // event 2127_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2127_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2127_46_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-((Active*)*it)->alterables->values.get(8), 0));
        }
        media.set_channel_volume(32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(9)*(global_values->get(25)*0.01));
    }
    event_2127_46_end: ;
}
void Frames::event_func_11349()
{
    // event 2128_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2128_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2128_46_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+number_to_string(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(3))+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2128_46_end: ;
}
void Frames::event_func_11350()
{
    // event 2130_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2130_46_end;
        if (!((((ArrayObject*)get_instance(functionmusic_231_instances))->data.x_pos) > (0))) goto event_2130_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((ArrayObject*)get_instance(functionmusic_231_instances, it.current_index))->data.x_pos);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_process_call_me_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(5));
            loop_process_call_me_index = 0;
            while (loop_process_call_me_index < times) {
                loop_process_call_me_46();
                if (!loop_process_call_me_running) break;
                loop_process_call_me_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
    }
    event_2130_46_end: ;
}
void Frames::event_func_11351()
{
    // event 2136_46
    bool or_result_2136_46 = false;
    bool or_temp_result_2136_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_2136_46_0_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_2136_46_0_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos) == (0))) goto or_event_2136_46_0_end;
        if (not_always_2136_46 > loop_count) {
            not_always_2136_46 = loop_count + 2;
            goto or_event_2136_46_0_end;
        }
        not_always_2136_46 = loop_count + 2;
        or_result_2136_46 = true;
        or_temp_result_2136_46_0 = true;
    }
    or_event_2136_46_0_end: ;
    // event 2136_46
    bool or_temp_result_2136_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_2136_46_1_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_2136_46_1_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto or_event_2136_46_1_end;
        if (not_always_2136_46 > loop_count) {
            not_always_2136_46 = loop_count + 2;
            goto or_event_2136_46_1_end;
        }
        not_always_2136_46 = loop_count + 2;
        or_result_2136_46 = true;
        or_temp_result_2136_46_1 = true;
    }
    or_event_2136_46_1_end: ;
    controllermusic_128_instances.clear_saved_selection();
    if (or_temp_result_2136_46_1) {
        controllermusic_128_instances.save_selection();
    }
    // event 2136_46
    bool or_temp_result_2136_46_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_2136_46_2_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_2136_46_2_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto or_event_2136_46_2_end;
        if (not_always_2136_46 > loop_count) {
            not_always_2136_46 = loop_count + 2;
            goto or_event_2136_46_2_end;
        }
        not_always_2136_46 = loop_count + 2;
        or_result_2136_46 = true;
        or_temp_result_2136_46_2 = true;
        or_event_2136_46_2_end: ;
        if (or_temp_result_2136_46_2) {
            controllermusic_128_instances.save_selection();
        }
        if (!or_result_2136_46) goto or_final_or_event_2136_46_2_end;
        controllermusic_128_instances.clear_selection();
        if (or_temp_result_2136_46_1 || or_temp_result_2136_46_2) {
            controllermusic_128_instances.restore_selection();
        }
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    or_final_or_event_2136_46_2_end: ;
}
void Frames::event_func_11352()
{
    // event 2137_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2137_46_end;
        if (!(!media.is_channel_playing(32-1))) goto event_2137_46_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos) > (0))) goto event_2137_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2137_46_end;
        if (not_always_2137_46 > loop_count) {
            not_always_2137_46 = loop_count + 2;
            goto event_2137_46_end;
        }
        not_always_2137_46 = loop_count + 2;
        {
            loop_process_call_resume_music_running = true;
            int times = int(1);
            loop_process_call_resume_music_index = 0;
            while (loop_process_call_resume_music_index < times) {
                loop_process_call_resume_music_46();
                if (!loop_process_call_resume_music_running) break;
                loop_process_call_resume_music_index++;
            }
        }
    }
    event_2137_46_end: ;
}
void Frames::event_func_11353()
{
    // event 2154_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2154_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (media.get_channel_position(-1 +32)))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2154_46_end;
        media.set_channel_position(32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(0));
    }
    event_2154_46_end: ;
}
void Frames::event_func_11354()
{
    // event 2158_46
    {
        if (!(group_main_engine_1)) goto event_2158_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_2158_46_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2158_46_end: ;
}
void Frames::event_func_11355()
{
    // event 2159_46
    {
        if (!(group_main_engine_1)) goto event_2159_46_end;
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (frame_left()))) { it.deselect(); continue; }
        }
        if (!hazardlavafall3_2729_instances.has_selection()) goto event_2159_46_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2159_46_end: ;
}
void Frames::event_func_11356()
{
    // event 2161_46
    {
        if (!(group_pause_1)) goto event_2161_46_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2161_46_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2161_46_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2161_46_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2161_46_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(enemypushup_2656_instances))->stop_animation();
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->stop_animation();
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->stop_animation();
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->stop_animation();
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->stop_animation();
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->stop_animation();
        ((Active*)get_instance(bosslavasplash2_2746_instances))->stop_animation();
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(hazardfireup_2226_instances))->stop_animation();
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->stop_animation();
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->stop_animation();
    }
    event_2161_46_end: ;
}
void Frames::event_func_11357()
{
    // event 2162_46
    bool or_result_2162_46 = false;
    bool or_temp_result_2162_46_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2162_46_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2162_46_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2162_46_0_end;
        or_result_2162_46 = true;
        or_temp_result_2162_46_0 = true;
    }
    or_event_2162_46_0_end: ;
    // event 2162_46
    bool or_temp_result_2162_46_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2162_46_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2162_46_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2162_46_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2162_46_1_end;
        or_result_2162_46 = true;
        or_temp_result_2162_46_1 = true;
        or_event_2162_46_1_end: ;
        if (!or_result_2162_46) goto or_final_or_event_2162_46_1_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorterminal_2606_instances.clear_selection();
        for (ObjectIterator it(lockeddoorterminal_2606_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(enemypushup_2656_instances))->start_animation();
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->start_animation();
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->start_animation();
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->start_animation();
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->start_animation();
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->start_animation();
        ((Active*)get_instance(bosslavasplash2_2746_instances))->start_animation();
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(hazardfireup_2226_instances))->start_animation();
        ((Active*)get_instance(bossrobosquidjet_2753_instances))->start_animation();
        hazardlavafall3_2729_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall3_2729_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        lockeddoorseal_2672_instances.clear_selection();
        for (ObjectIterator it(lockeddoorseal_2672_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorback_2605_instances.clear_selection();
        for (ObjectIterator it(lockeddoorback_2605_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        lockeddoorfront_2671_instances.clear_selection();
        for (ObjectIterator it(lockeddoorfront_2671_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossspikelauncher_2725_instances.clear_selection();
        for (ObjectIterator it(bossspikelauncher_2725_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->start_animation();
    }
    or_final_or_event_2162_46_1_end: ;
}
void Frames::handle_frame_47_events()
{
    test_collisions_46();
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
    event_func_11128();
    event_func_11162();
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
    event_func_10753();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_11112();
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
    event_func_10755();
    event_func_1776();
    event_func_11113();
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
    event_func_11114();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_10954();
    event_func_10955();
    event_func_10956();
    event_func_10957();
    event_func_10958();
    event_func_10959();
    event_func_10960();
    event_func_10961();
    event_func_10962();
    event_func_10963();
    event_func_10964();
    event_func_10965();
    event_func_10966();
    event_func_10967();
    event_func_10968();
    event_func_10969();
    event_func_10970();
    event_func_10971();
    event_func_10972();
    event_func_10973();
    event_func_11115();
    event_func_10976();
    event_func_11116();
    event_func_10978();
    event_func_10979();
    event_func_10980();
    event_func_10981();
    event_func_10982();
    event_func_10983();
    event_func_10984();
    event_func_10985();
    event_func_10986();
    event_func_10987();
    event_func_10988();
    event_func_10989();
    event_func_10990();
    event_func_10991();
    event_func_10992();
    event_func_10993();
    event_func_10994();
    event_func_10995();
    event_func_10996();
    event_func_10997();
    event_func_10998();
    event_func_10999();
    event_func_11000();
    event_func_11117();
    event_func_11118();
    event_func_11119();
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_11120();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
    event_func_10810();
    event_func_10811();
    event_func_10812();
    event_func_10813();
    event_func_10814();
    event_func_10815();
    event_func_10816();
    event_func_10817();
    event_func_10818();
    event_func_10819();
    event_func_10820();
    event_func_10821();
    event_func_10822();
    event_func_10823();
    event_func_10824();
    event_func_10825();
    event_func_10826();
    event_func_11121();
    event_func_11122();
    event_func_10829();
    event_func_10830();
    event_func_10831();
    event_func_11123();
    event_func_11124();
    event_func_11125();
    event_func_11126();
    event_func_11127();
    event_func_11129();
    event_func_11130();
    event_func_11131();
    event_func_11132();
    event_func_11133();
    event_func_11134();
    event_func_10844();
    event_func_10845();
    event_func_10846();
    event_func_10847();
    event_func_10848();
    event_func_10849();
    event_func_10850();
    event_func_11004();
    event_func_11005();
    event_func_11006();
    event_func_11007();
    event_func_11008();
    event_func_11009();
    event_func_11010();
    event_func_11011();
    event_func_11012();
    event_func_11013();
    event_func_11014();
    event_func_11015();
    event_func_11016();
    event_func_11017();
    event_func_11018();
    event_func_11019();
    event_func_11020();
    event_func_11021();
    event_func_11135();
    event_func_11023();
    event_func_11024();
    event_func_11025();
    event_func_11026();
    event_func_11136();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_11137();
    event_func_2491();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_10854();
    event_func_10855();
    event_func_10856();
    event_func_10857();
    event_func_10858();
    event_func_10859();
    event_func_10860();
    event_func_10861();
    event_func_10862();
    event_func_10863();
    event_func_11047();
    event_func_11048();
    event_func_10864();
    event_func_10865();
    event_func_10866();
    event_func_10867();
    event_func_10868();
    event_func_10869();
    event_func_10869();
    event_func_10870();
    event_func_10870();
    event_func_10871();
    event_func_10871();
    event_func_10872();
    event_func_10873();
    event_func_10873();
    event_func_10874();
    event_func_11138();
    event_func_10876();
    event_func_10877();
    event_func_10878();
    event_func_10879();
    event_func_10880();
    event_func_10881();
    event_func_10882();
    event_func_10883();
    event_func_10884();
    event_func_10885();
    event_func_10886();
    event_func_10887();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_10888();
    event_func_10889();
    event_func_11139();
    event_func_11140();
    event_func_10891();
    event_func_10892();
    event_func_11141();
    event_func_11142();
    event_func_11143();
    event_func_11144();
    event_func_11145();
    event_func_11146();
    event_func_11147();
    event_func_11148();
    event_func_11149();
    event_func_11150();
    event_func_11151();
    event_func_11152();
    event_func_11153();
    event_func_11154();
    event_func_11155();
    event_func_11156();
    event_func_11157();
    event_func_11158();
    event_func_11159();
    event_func_11160();
    event_func_11161();
    event_func_11163();
    event_func_11164();
    event_func_11165();
    event_func_11166();
    event_func_11167();
    event_func_11167();
    event_func_11168();
    event_func_11169();
    event_func_11170();
    event_func_11171();
    event_func_11172();
    event_func_11173();
    event_func_11174();
    event_func_11175();
    event_func_11176();
    event_func_5013();
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1_end;
    event_func_11177();
    event_func_11178();
    event_func_11179();
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1_end;
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1_end;
    event_func_11180();
    event_func_11181();
    event_func_11182();
    event_func_11183();
    event_func_11184();
    event_func_11185();
    event_func_11186();
    event_func_11187();
    event_func_11188();
    event_func_11189();
    event_func_11190();
    event_func_11191();
    event_func_11192();
    event_func_11193();
    event_func_11194();
    event_func_11195();
    event_func_11196();
    event_func_11197();
    event_func_11198();
    event_func_11199();
    event_func_11200();
    event_func_11201();
    event_func_11202();
    event_func_11203();
    event_func_11204();
    event_func_11205();
    event_func_11206();
    event_func_11207();
    event_func_11208();
    event_func_11209();
    event_func_11210();
    event_func_11211();
    event_func_11212();
    event_func_11213();
    event_func_11214();
    event_func_11215();
    event_func_11216();
    event_func_11217();
    event_func_11218();
    event_func_11219();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1_end: ;
    event_func_11220();
    event_func_11221();
    event_func_11222();
    event_func_11223();
    event_func_11224();
    event_func_11225();
    event_func_11226();
    event_func_11227();
    event_func_11228();
    event_func_11229();
    event_func_11230();
    event_func_11231();
    event_func_11232();
    event_func_11233();
    event_func_11234();
    event_func_11235();
    event_func_11236();
    event_func_11237();
    event_func_11238();
    event_func_11239();
    event_func_11240();
    event_func_11241();
    event_func_11242();
    event_func_11243();
    event_func_11244();
    event_func_11245();
    event_func_11246();
    event_func_11247();
    event_func_11248();
    event_func_11249();
    event_func_11250();
    event_func_11251();
    event_func_11252();
    event_func_11253();
    event_func_11254();
    event_func_11255();
    event_func_11256();
    event_func_11257();
    event_func_11258();
    event_func_11259();
    event_func_11260();
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1_end;
    event_func_11261();
    event_func_11262();
    event_func_11263();
    event_func_11264();
    event_func_11265();
    event_func_11266();
    event_func_11267();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1_end: ;
    event_func_11268();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1_end;
    event_func_11269();
    event_func_11270();
    event_func_11271();
    event_func_11272();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1_end;
    event_func_11273();
    event_func_11274();
    event_func_11275();
    event_func_11276();
    event_func_11277();
    event_func_11278();
    event_func_11279();
    event_func_11280();
    event_func_11281();
    event_func_11282();
    event_func_11283();
    event_func_11284();
    event_func_11285();
    event_func_11286();
    event_func_11287();
    event_func_11288();
    event_func_11289();
    event_func_11290();
    event_func_11291();
    event_func_11292();
    event_func_11293();
    event_func_11294();
    event_func_11295();
    event_func_11296();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1) goto group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1_end;
    event_func_11297();
    event_func_11298();
    event_func_11299();
    event_func_11300();
    event_func_11301();
    event_func_11302();
    event_func_11303();
    event_func_11304();
    event_func_11305();
    event_func_11306();
    event_func_11307();
    event_func_11308();
    event_func_11309();
    event_func_11310();
    event_func_11311();
    event_func_11312();
    event_func_11313();
    event_func_11314();
    event_func_11315();
    event_func_11316();
    event_func_11317();
    event_func_11318();
    event_func_11319();
    event_func_11320();
    event_func_11321();
    event_func_11322();
    event_func_11323();
    event_func_11324();
    event_func_11325();
    event_func_11326();
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1_end: ;
    event_func_11327();
    event_func_11328();
    event_func_11329();
    event_func_11330();
    event_func_11331();
    event_func_11332();
    event_func_11333();
    event_func_11334();
    event_func_11335();
    event_func_11336();
    event_func_11337();
    event_func_11338();
    event_func_11339();
    event_func_11340();
    event_func_11341();
    event_func_11342();
    event_func_11343();
    event_func_11344();
    event_func_11058();
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
    event_func_3912();
    event_func_11345();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
    event_func_11059();
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
    event_func_3247();
    event_func_3248();
    event_func_11354();
    event_func_11355();
    event_func_10931();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_11356();
    event_func_11357();
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
void Frames::handle_frame_47_pre_events()
{
}
void Frames::event_func_11358()
{
    // event 2_46
    {
        if (!(group_main_engine_1)) goto event_2_46_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3200);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 63);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 28);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_46_end: ;
}
void Frames::event_func_11359()
{
    // event 1427_46
    {
        if (!(group_main_engine_1)) goto event_1427_46_end;
        levelpistonplatform1_2717_instances.clear_selection();
        spread_value(levelpistonplatform1_2717_instances, 4, 0);
        for (ObjectIterator it(levelpistonplatform1_2717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)*180)%math_helper%360);
        }
    }
    event_1427_46_end: ;
}
void Frames::event_func_11360()
{
    // event 1669_46
    {
        if (!(group_main_engine_1)) goto event_1669_46_end;
        if (!((global_values->get(4)) >= (0))) goto event_1669_46_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_201+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1669_46_end: ;
}
void Frames::event_func_11361()
{
    // event 1725_46
    {
        if (!(group_main_engine_1)) goto event_1725_46_end;
        npcsyntaxeye_2609_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxeye_2609_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        media.stop_sample(SOUND_LAVAWALL_311);
    }
    event_1725_46_end: ;
}
void Frames::event_func_11362()
{
    // event 1732_46
    {
        if (!(group_main_engine_1)) goto event_1732_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        spread_value(bosssyntaxspiderlegfront_2744_instances, 0, 0);
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        spread_value(bosssyntaxspiderlegback_2738_instances, 0, 0);
        bosssyntaxspiderarm_2741_instances.clear_selection();
        spread_value(bosssyntaxspiderarm_2741_instances, 0, 0);
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
        bosssyntaxspiderlavacannon_2742_instances.clear_selection();
        spread_value(bosssyntaxspiderlavacannon_2742_instances, 0, 0);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.set(0, ((Active*)get_instance(bosslavasplash1_2745_instances))->get_x());
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.set(0, ((Active*)get_instance(bosslavasplash2_2746_instances))->get_x());
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y()-80);
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->set_visible(false);
        }
        playerblocker_2756_instances.clear_selection();
        for (ObjectIterator it(playerblocker_2756_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1732_46_end: ;
}
void Frames::event_func_11363()
{
    // event 1733_46
    {
        if (!(group_main_engine_1)) goto event_1733_46_end;
        enemylavasquid_2721_instances.clear_selection();
        pick_objects_in_zone(enemylavasquid_2721_instances, 108, 1247, 1261, 2017);
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 30);
        }
    }
    event_1733_46_end: ;
}
void Frames::event_func_11364()
{
    // event 1737_46
    {
        if (!(group_main_engine_1)) goto event_1737_46_end;
        bossrobosquidleftarm_2749_instances.clear_selection();
        spread_value(bossrobosquidleftarm_2749_instances, 0, 1);
        bossrobosquidrightarm_2750_instances.clear_selection();
        spread_value(bossrobosquidrightarm_2750_instances, 0, 1);
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->alterables->values.set(3, ((Active*)get_instance(bossrobosquidglass_2751_instances))->get_x());
    }
    event_1737_46_end: ;
}
void Frames::event_func_11365()
{
    // event 2129_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2129_46_end;
        stringparser_427_instances.clear_selection();
        for (ObjectIterator it(stringparser_427_instances); !it.end(); ++it) {
            ((StringParser*)*it)->add_delimiter(str__85);
            ((StringParser*)*it)->add_delimiter(str__86);
            ((StringParser*)*it)->add_delimiter(str__76);
        }
        media.set_channel_volume(32-1, global_values->get(25));
        media.lock(32-1);
    }
    event_2129_46_end: ;
}
void Frames::on_frame_47_start_events()
{
    event_func_4133();
    event_func_11358();
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
    event_func_11063();
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
    event_func_3986();
    event_func_3987();
    event_func_11064();
    event_func_11065();
    event_func_11359();
    event_func_11068();
    event_func_10707();
    event_func_10939();
    event_func_10940();
    event_func_2686();
    event_func_11360();
    event_func_10941();
    event_func_11361();
    event_func_11362();
    event_func_11363();
    event_func_11364();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_11072();
    event_func_11073();
    event_func_4146();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_47_init()
{
    index = 46;
    width = 8000;
    height = 4480;
    virtual_width = 8000;
    virtual_height = 4480;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelfireplatform1_2646_instances, &levelpistonplatform1_2717_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &levelfireplatform1_2646_instances, &hazardspikesup_558_instances, &levelpistonplatform1_2717_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemypushuphitbox_2653_instances, &enemylavasquiddebris_2677_instances, &enemylavasquid_2721_instances, &bosssyntaxspider_2743_instances, &bossrobosquid_2752_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(6, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &levellift_2647_instances, &lockeddoorbarrier_2667_instances, &hazardspikesup_558_instances, &objectexplosiveblock_2708_instances, &minibosstrapdoor_2722_instances, &levelfireplatform2_2739_instances, &hazardfloortrap_2748_instances, &playerblocker_2756_instances, NULL};
    qualifier_7.set(33, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelfireplatform1_2646_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelfireplatform1_2646_instances, &levellift_2647_instances, &levelpistonplatform1_2717_instances, &levelfireplatform2_2739_instances, NULL};
    qualifier_13.set(5, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2563(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2564(0, 128), 0);
    add_background_object(create_levelparallaxpiece2_2565(0, 288), 0);
    add_background_object(create_levelparallaxpiece5_2566(0, 512), 0);
    add_background_object(create_levelparallaxpiece6_2567(0, 696), 0);
    add_background_object(create_levelparallaxpiece7_2675(0, 1112), 0);
    add_object(create_bubblepatch_806(-544, 319), 1);
    add_background_object(create_tbtunnelbottom1_2576(3968, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(4288, 2048), 2);
    add_background_object(create_tbtunneltop1_2577(32, 1216), 2);
    add_background_object(create_tbtunnelbottom1_2576(32, 1344), 2);
    add_background_object(create_tbtunnelbottom1_2576(3616, 1984), 2);
    add_background_object(create_tbtunneltop1_2577(3288, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(3288, 1984), 2);
    add_background_object(create_tbtunneltop1_2577(2904, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(2904, 1984), 2);
    add_background_object(create_tbtunneltop1_2577(2904, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2904, 2304), 2);
    add_background_object(create_tbtunneltop1_2577(2008, 1728), 2);
    add_background_object(create_tbtunnelbottom1_2576(2008, 1792), 2);
    add_background_object(create_tbtunneltop1_2577(2136, 1728), 2);
    add_background_object(create_tbtunnelbottom1_2576(2136, 1792), 2);
    add_background_object(create_tbtunneltop1_2577(1648, 1728), 2);
    add_background_object(create_tbtunnelbottom1_2576(1648, 2048), 2);
    add_background_object(create_tbtunnelwall_2578(1696, 1792), 2);
    add_background_object(create_tbtunnelwall_2578(1696, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(1696, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(1696, 1984), 2);
    add_background_object(create_tbtunneltop1_2577(1520, 1728), 2);
    add_background_object(create_tbtunnelbottom1_2576(1520, 2048), 2);
    add_background_object(create_tbtunneltop1_2577(1392, 1728), 2);
    add_background_object(create_tbwall3_2573(1792, 2016), 2);
    add_background_object(create_tbwalledge2_2594(1744, 1920), 2);
    add_background_object(create_tbwall1_2575(1792, 1920), 2);
    add_background_object(create_tbwall1_2575(1984, 1920), 2);
    add_background_object(create_tbwalledge1_2581(96, 1216), 2);
    add_background_object(create_tbwall1_2575(0, 1216), 2);
    add_background_object(create_tbwall3_2573(-96, 1312), 2);
    add_background_object(create_tbliftback_2597(2112, 2368), 2);
    add_background_object(create_tbtunnelwall_2578(1440, 1792), 2);
    add_background_object(create_tbtunnelwall_2578(1568, 1792), 2);
    add_background_object(create_tbliftback_2597(2112, 2560), 2);
    add_background_object(create_tbliftback_2597(2112, 2464), 2);
    add_background_object(create_tbtunnelwall_2578(1568, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(1568, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(1440, 1856), 2);
    add_background_object(create_tbwalledge4_2599(1744, 1728), 2);
    add_background_object(create_tbwall1_2575(1792, 1728), 2);
    add_background_object(create_tbwall1_2575(1888, 1728), 2);
    add_background_object(create_tbwall2_2580(1792, 1824), 2);
    add_background_object(create_tbtunnelwall_2578(1568, 1984), 2);
    add_background_object(create_tbwalledge3_2600(2080, 1728), 2);
    add_background_object(create_tbwall1_2575(1888, 1920), 2);
    add_background_object(create_tbwall1_2575(1984, 1728), 2);
    add_background_object(create_tbwall1_2575(1984, 1824), 2);
    add_background_object(create_tbwall3_2573(1984, 2016), 2);
    add_background_object(create_tbtunneltop1_2577(2264, 1728), 2);
    add_background_object(create_tbtunnelbottom1_2576(2264, 1792), 2);
    add_background_object(create_tbtunnelbottom2_2588(2392, 1800), 2);
    add_background_object(create_tbtunnelbottom4_2584(2520, 1856), 2);
    add_background_object(create_tbtunneltop2_2587(2392, 1728), 2);
    add_background_object(create_tbtunneltop4_2583(2520, 1760), 2);
    add_background_object(create_tbtunneltop1_2577(2648, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2648, 1856), 2);
    add_background_object(create_tbliftback_2597(2112, 2720), 2);
    add_background_object(create_tbliftback_2597(2112, 2624), 2);
    add_background_object(create_tbliftback_2597(2112, 2816), 2);
    add_background_object(create_tbliftback_2597(2112, 3008), 2);
    add_background_object(create_tbliftback_2597(2112, 2912), 2);
    add_background_object(create_tbliftback_2597(2112, 3104), 2);
    add_background_object(create_tbliftback_2597(2112, 3296), 2);
    add_background_object(create_tbliftback_2597(2112, 3200), 2);
    add_background_object(create_tbliftback_2597(2112, 3392), 2);
    add_background_object(create_tbliftback_2597(2112, 3488), 2);
    add_background_object(create_tbwall1_2575(2016, 3264), 2);
    add_background_object(create_tbwall1_2575(1920, 3264), 2);
    add_background_object(create_tbwall1_2575(2016, 3360), 2);
    add_background_object(create_tbwall1_2575(1920, 3360), 2);
    add_background_object(create_tbwalledge3_2600(2208, 3264), 2);
    add_background_object(create_tbwall1_2575(2080, 1920), 2);
    add_background_object(create_tbwalledge1_2581(2176, 1920), 2);
    add_background_object(create_tbwalledge4_2599(2256, 1920), 2);
    add_background_object(create_tbwall3_2573(2208, 2400), 2);
    add_background_object(create_tbwall1_2575(2208, 2304), 2);
    add_background_object(create_tbwall1_2575(2304, 2304), 2);
    add_background_object(create_tbwalledge3_2600(2880, 2016), 2);
    add_background_object(create_tbwalledge3_2600(2880, 2208), 2);
    add_background_object(create_tbwall1_2575(2304, 2208), 2);
    add_background_object(create_tbwall1_2575(2304, 2112), 2);
    add_background_object(create_tbwall1_2575(2400, 2208), 2);
    add_background_object(create_tbwall1_2575(2400, 2112), 2);
    add_background_object(create_tbwall3_2573(2400, 2400), 2);
    add_background_object(create_tbwall3_2573(2592, 2400), 2);
    add_background_object(create_tbtunneltop1_2577(2776, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2776, 1856), 2);
    add_background_object(create_tbwalledge3_2600(2888, 1760), 2);
    add_background_object(create_tbwalledge4_2599(2840, 1760), 2);
    add_background_object(create_tbwall1_2575(2784, 2208), 2);
    add_background_object(create_tbwall1_2575(2784, 2112), 2);
    add_background_object(create_tbwall1_2575(2688, 2208), 2);
    add_background_object(create_tbwall1_2575(2688, 2112), 2);
    add_background_object(create_tbwall3_2573(2688, 2400), 2);
    add_background_object(create_tbwall2_2580(2592, 2304), 2);
    add_background_object(create_tbtunneltop1_2577(3032, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(3032, 2304), 2);
    add_background_object(create_tbtunneltop1_2577(3160, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(3160, 2304), 2);
    add_background_object(create_tbtunneltop1_2577(3288, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(3288, 2304), 2);
    add_background_object(create_tbwalledge2_2594(3408, 1792), 2);
    add_background_object(create_tbwall1_2575(3456, 1792), 2);
    add_background_object(create_tbwall3_2573(3456, 1888), 2);
    add_background_object(create_tbwall1_2575(3552, 1792), 2);
    add_background_object(create_tbtunnelwall_2578(2952, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(2952, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(2952, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(2952, 2240), 2);
    add_background_object(create_tbtunneltop1_2577(3032, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(3032, 1984), 2);
    add_background_object(create_tbtunneltop1_2577(3160, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(3160, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(2952, 2112), 2);
    add_background_object(create_tbtunnelwall_2578(3080, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(3080, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(3208, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(3208, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(3336, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(3336, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(3336, 2112), 2);
    add_background_object(create_tbtunnelwall_2578(3336, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(3336, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(3080, 2112), 2);
    add_background_object(create_tbtunnelwall_2578(3080, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(3080, 2240), 2);
    add_background_object(create_tbsyntaxpanel1_2602(1968, 3312), 2);
    add_background_object(create_tbwall18_2680(3352, 3744), 2);
    add_background_object(create_tbwall18_2680(3448, 3744), 2);
    add_background_object(create_tbwall18_2680(3352, 3648), 2);
    add_background_object(create_tbwall18_2680(3448, 3648), 2);
    add_background_object(create_tbwall18_2680(3352, 3552), 2);
    add_background_object(create_tbwall18_2680(3448, 3552), 2);
    add_background_object(create_tbwall18_2680(3352, 3456), 2);
    add_background_object(create_tbwall18_2680(3448, 3456), 2);
    add_background_object(create_tbwall1_2575(2400, 2304), 2);
    add_background_object(create_tbwall1_2575(2496, 2304), 2);
    add_background_object(create_tbsyntaxpanel1_2602(2400, 2344), 2);
    add_background_object(create_tbwall1_2575(2304, 2016), 2);
    add_background_object(create_tbwall1_2575(2400, 2016), 2);
    add_background_object(create_tbwall1_2575(2784, 2016), 2);
    add_background_object(create_tbwall1_2575(2688, 2016), 2);
    add_background_object(create_tbwall1_2575(2304, 1920), 2);
    add_background_object(create_tbwall1_2575(2400, 1920), 2);
    add_background_object(create_tbwall1_2575(2784, 2304), 2);
    add_background_object(create_tbwall1_2575(2592, 2208), 2);
    add_background_object(create_tbwall1_2575(2592, 2112), 2);
    add_background_object(create_tbwall1_2575(2496, 2208), 2);
    add_background_object(create_tbwall1_2575(2496, 2112), 2);
    add_background_object(create_tbwalledge1_2581(3648, 1792), 2);
    add_background_object(create_tbtunnelbottom2_2588(3744, 1992), 2);
    add_background_object(create_tbtunnelbottom4_2584(3872, 2048), 2);
    add_background_object(create_tbtunnelwall_2578(3920, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(3920, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(3920, 1856), 2);
    add_background_object(create_tbtunneltop2_2587(3872, 1792), 2);
    add_background_object(create_tbtunnelwall_2578(3792, 1928), 2);
    add_background_object(create_tbtunnelwall_2578(3792, 1864), 2);
    add_background_object(create_tbtunneltop4_2583(4064, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(4112, 1984), 2);
    add_background_object(create_tbtunneltop5_2589(4192, 1856), 2);
    add_background_object(create_tbtunnelwall_2578(4240, 1984), 2);
    add_background_object(create_tbtunneltop7_2592(4384, 1792), 2);
    add_background_object(create_tbtunneltop1_2577(4512, 1792), 2);
    add_background_object(create_tbtunnelbottom1_2576(4512, 2048), 2);
    add_background_object(create_tbtunnelwall_2578(4432, 1992), 2);
    add_background_object(create_tbtunnelwall_2578(4432, 1928), 2);
    add_background_object(create_tbtunnelwall_2578(4432, 1864), 2);
    add_background_object(create_tbtunnelwall_2578(4560, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(4560, 1920), 2);
    add_background_object(create_tbtunnelwall_2578(4560, 1856), 2);
    add_background_object(create_tbtunnelbottom1_2576(4384, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(4192, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(4064, 2048), 2);
    add_background_object(create_tbtunnelbottom4_2584(1184, 1856), 2);
    add_background_object(create_tbtunneltop4_2583(1184, 1696), 2);
    add_background_object(create_tbtunnelwall_2578(1232, 1792), 2);
    add_background_object(create_tbwall1_2575(1328, 1728), 2);
    add_background_object(create_tbwall1_2575(1328, 1824), 2);
    add_background_object(create_tbwalledge3_2600(1424, 1728), 2);
    add_background_object(create_tbwalledge4_2599(1280, 1728), 2);
    add_background_object(create_tbtunneltop3_2585(1056, 1632), 2);
    add_background_object(create_tbtunnelbottom3_2586(1056, 1792), 2);
    add_background_object(create_tbtunnelwall_2578(1104, 1728), 2);
    add_background_object(create_tbtunneltop3_2585(928, 1568), 2);
    add_background_object(create_tbtunnelbottom3_2586(928, 1728), 2);
    add_background_object(create_tbtunnelwall_2578(976, 1664), 2);
    add_background_object(create_tbtunneltop3_2585(288, 1248), 2);
    add_background_object(create_tbtunnelbottom3_2586(288, 1408), 2);
    add_background_object(create_tbtunnelwall_2578(336, 1344), 2);
    add_background_object(create_tbtunnelbottom2_2588(160, 1352), 2);
    add_background_object(create_tbtunneltop2_2587(160, 1216), 2);
    add_background_object(create_tbtunnelwall_2578(208, 1288), 2);
    add_background_object(create_tbtunnelwall_2578(4112, 1952), 2);
    add_background_object(create_tbtunnelwall_2578(4240, 1952), 2);
    add_background_object(create_tbtunneltop3_2585(3968, 1808), 2);
    add_background_object(create_tbtunneltop6_2579(4288, 1808), 2);
    add_background_object(create_tbtunnelwall_2578(4336, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(4336, 1944), 2);
    add_background_object(create_tbtunnelwall_2578(4336, 1904), 2);
    add_background_object(create_tbtunnelwall_2578(4016, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(4016, 1944), 2);
    add_background_object(create_tbtunnelwall_2578(4016, 1904), 2);
    add_background_object(create_quickbackdrop_2727(3944, 3840), 2);
    add_background_object(create_tbwalledge4_2599(3896, 3840), 2);
    add_background_object(create_quickbackdrop2_2728(6976, 4320), 2);
    add_background_object(create_tbwalledge3_2600(2968, 3840), 2);
    add_background_object(create_tbwall1_2575(2872, 3840), 2);
    add_background_object(create_tbwall1_2575(2872, 3936), 2);
    add_background_object(create_tbwall1_2575(2776, 3840), 2);
    add_background_object(create_tbwall1_2575(2776, 3936), 2);
    add_background_object(create_tbwall1_2575(2680, 3840), 2);
    add_background_object(create_tbwall1_2575(2680, 3936), 2);
    add_background_object(create_tbwall1_2575(2584, 3840), 2);
    add_background_object(create_tbwall1_2575(2584, 3936), 2);
    add_background_object(create_tbwall1_2575(2488, 3840), 2);
    add_background_object(create_tbwall1_2575(2488, 3936), 2);
    add_background_object(create_tbwall1_2575(2392, 3840), 2);
    add_background_object(create_tbwall1_2575(2392, 3936), 2);
    add_background_object(create_tbwall1_2575(2296, 3840), 2);
    add_background_object(create_tbwall1_2575(2296, 3936), 2);
    add_background_object(create_tbwall1_2575(2200, 3840), 2);
    add_background_object(create_tbwall1_2575(2200, 3936), 2);
    add_background_object(create_tbwall1_2575(2104, 3840), 2);
    add_background_object(create_tbwall1_2575(2104, 3936), 2);
    add_background_object(create_tbwall1_2575(2008, 3840), 2);
    add_background_object(create_tbwall1_2575(2008, 3936), 2);
    add_background_object(create_tbwall1_2575(1912, 3840), 2);
    add_background_object(create_tbwall1_2575(1912, 3936), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(8032, -43), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_metaldoorback_2604(24, 1360), 2);
    add_object(create_lockeddoorback_2605(2264, 2448), 2);
    add_object(create_lockeddoorterminal_2606(2344, 2496), 2);
    add_object(create_levelpistonplatformmask_2685(2880, 2240), 2);
    add_object(create_hazardlavafallwarning_2709(3056, 3968), 2);
    add_object(create_hazardlavafallwarning_2709(3840, 3968), 2);
    add_object(create_hazardlavafallwarning_2709(3008, 3392), 2);
    add_object(create_hazardlavafallwarning_2709(2800, 3392), 2);
    add_object(create_hazardlavafallwarning_2709(2432, 3392), 2);
    add_object(create_hazardlavafallwarning_2709(2352, 3392), 2);
    add_object(create_levelpistonplatformmask_2685(3072, 2176), 2);
    add_object(create_npcsyntaxeye_2609(2016, 3360), 2);
    add_object(create_npcsyntaxeye_2609(2448, 2392), 2);
    add_object(create_metaldoorback_2604(7960, 4368), 2);
    add_object(create_hazardlavafall3_2729(1983, 3872), 2);
    add_object(create_hazardlavafall3_2729(1663, 3872), 2);
    add_object(create_hazardlavafall3_2729(1343, 3872), 2);
    add_object(create_lockeddoorback_2605(7512, 4368), 2);
    add_object(create_hazardlavafall3_2729(1023, 3872), 2);
    add_object(create_hazardlavafall3_2729(1983, 3936), 2);
    add_object(create_hazardlavafall3_2729(1663, 3936), 2);
    add_object(create_hazardlavafall3_2729(1343, 3936), 2);
    add_object(create_hazardlavafall3_2729(1023, 3936), 2);
    add_object(create_hazardlavafall3_2729(1983, 4000), 2);
    add_object(create_hazardlavafall3_2729(1663, 4000), 2);
    add_object(create_hazardlavafall3_2729(1343, 4000), 2);
    add_object(create_hazardlavafall3_2729(1023, 4000), 2);
    add_object(create_hazardlavafall3_2729(1663, 4064), 2);
    add_object(create_hazardlavafall3_2729(1343, 4064), 2);
    add_object(create_hazardlavafall3_2729(1023, 4064), 2);
    add_object(create_hazardlavafall3_2729(1983, 4128), 2);
    add_object(create_hazardlavafall3_2729(1663, 4128), 2);
    add_object(create_hazardlavafall3_2729(1343, 4128), 2);
    add_object(create_hazardlavafall3_2729(1023, 4128), 2);
    add_object(create_hazardlavafall3_2729(1983, 4192), 2);
    add_object(create_hazardlavafall3_2729(1663, 4192), 2);
    add_object(create_hazardlavafall3_2729(1343, 4192), 2);
    add_object(create_hazardlavafall3_2729(1023, 4192), 2);
    add_object(create_hazardlavafall3_2729(1983, 4256), 2);
    add_object(create_hazardlavafall3_2729(1663, 4256), 2);
    add_object(create_hazardlavafall3_2729(1343, 4256), 2);
    add_object(create_hazardlavafall3_2729(1023, 4256), 2);
    add_object(create_hazardlavafall3_2729(1983, 4064), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_tbwall1_2575(3440, 2176), 3);
    add_background_object(create_tbwall3_2573(3440, 2272), 3);
    add_background_object(create_tbwalledge2_2594(3392, 2176), 3);
    add_background_object(create_backdrop36_2601(6976, 4288), 3);
    add_background_object(create_backdrop36_2601(7456, 4288), 3);
    add_background_object(create_tbwalledge1_2581(6912, 4288), 3);
    add_background_object(create_tbsolidblack_2688(7808, 4160), 3);
    add_background_object(create_tbsolidblack_2688(7936, 4160), 3);
    add_background_object(create_tbwall8_2610(7936, 4256), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3712), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3776), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3840), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3904), 3);
    add_background_object(create_tbsolidblack_2688(4096, 4096), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3712), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3840), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3904), 3);
    add_background_object(create_tbsolidblack_2688(5888, 4096), 3);
    add_background_object(create_tbsolidblack_2688(5888, 4224), 3);
    add_background_object(create_tbsolidblack_2688(5888, 4352), 3);
    add_background_object(create_tbsolidblack_2688(5760, 4160), 3);
    add_background_object(create_tbsolidblack_2688(5248, 4288), 3);
    add_background_object(create_tbsolidblack_2688(5248, 4416), 3);
    add_background_object(create_tbsolidblack_2688(5376, 4224), 3);
    add_background_object(create_tbsolidblack_2688(5376, 4352), 3);
    add_background_object(create_tbsolidblack_2688(4224, 4128), 3);
    add_background_object(create_tbsolidblack_2688(4352, 4192), 3);
    add_background_object(create_tbsolidblack_2688(4480, 4256), 3);
    add_background_object(create_tbsolidblack_2688(1920, 4032), 3);
    add_background_object(create_tbsolidblack_2688(1792, 4032), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3904), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3776), 3);
    add_background_object(create_tbwall8_2610(2456, 1984), 3);
    add_background_object(create_tbwall8_2610(2456, 1920), 3);
    add_background_object(create_tbwall8_2610(2584, 1984), 3);
    add_background_object(create_tbwall8_2610(2520, 1984), 3);
    add_background_object(create_tbwall8_2610(2648, 1984), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3520), 3);
    add_background_object(create_tbsolidblack_2688(2944, 4096), 3);
    add_background_object(create_tbfloor19_2613(2232, 3200), 3);
    add_background_object(create_tbfloor19_2613(2232, 2496), 3);
    add_background_object(create_tbfloor19_2613(2232, 2560), 3);
    add_background_object(create_tbfloor19_2613(2232, 2624), 3);
    add_background_object(create_tbwall8_2610(2240, 2336), 3);
    add_background_object(create_tbsolidblack_2688(1408, 2048), 3);
    add_background_object(create_tblongrailing2_2689(1728, 1728), 3);
    add_background_object(create_tblongrailing3_2690(1992, 1728), 3);
    add_background_object(create_tblongrailing_2707(1736, 1776), 3);
    add_background_object(create_tblongrailing_2707(1800, 1776), 3);
    add_background_object(create_tblongrailing_2707(1928, 1776), 3);
    add_background_object(create_tbwall6_2611(0, 1248), 3);
    add_background_object(create_tbfloor2_2620(1376, 1664), 3);
    add_background_object(create_tbfloor2_2620(1696, 1664), 3);
    add_background_object(create_backdrop36_2601(2112, 2496), 3);
    add_background_object(create_tbwall6_2611(0, 1184), 3);
    add_background_object(create_tbswitchpadright_2691(6912, 2848), 3);
    add_background_object(create_tbswitchpadfloor_2692(6928, 2848), 3);
    add_background_object(create_tbswitchpadfloor_2692(7024, 2976), 3);
    add_background_object(create_tbswitchpadleft_2693(7056, 2976), 3);
    add_background_object(create_tbwallshadow_2598(64, 1216), 3);
    add_background_object(create_tbwallshadow_2598(64, 1312), 3);
    add_background_object(create_tbcornercurve1_2637(-200, 3688), 3);
    add_background_object(create_tbfloor1_2614(-280, 3696), 3);
    add_background_object(create_tbfloor10_2622(-232, 3696), 3);
    add_background_object(create_tbfloor11_2619(-168, 3712), 3);
    add_background_object(create_tbfloor12_2626(-208, 3712), 3);
    add_background_object(create_tbfloor13_2628(-224, 3712), 3);
    add_background_object(create_tbfloor14_2630(-184, 3712), 3);
    add_background_object(create_tbfloor15_2624(-232, 3720), 3);
    add_background_object(create_tbfloor16_2617(-200, 3704), 3);
    add_background_object(create_tbfloor17_2616(-200, 3752), 3);
    add_background_object(create_tbfloor18_2631(-208, 3704), 3);
    add_background_object(create_tbfloor19_2613(-152, 3728), 3);
    add_background_object(create_tbfloor2_2620(-296, 3680), 3);
    add_background_object(create_tbfloor20_2615(-232, 3720), 3);
    add_background_object(create_tbfloor21_2632(-232, 3744), 3);
    add_background_object(create_tbfloor22_2635(-200, 3728), 3);
    add_background_object(create_tbfloor3_2634(-184, 3728), 3);
    add_background_object(create_tbfloor4_2621(-224, 3720), 3);
    add_background_object(create_tbfloor5_2625(-248, 3712), 3);
    add_background_object(create_tbfloor6_2627(-256, 3688), 3);
    add_background_object(create_tbfloor7_2623(-248, 3704), 3);
    add_background_object(create_tbfloor8_2618(-240, 3688), 3);
    add_background_object(create_tbfloor9_2629(-240, 3712), 3);
    add_background_object(create_tbladder_2636(-224, 3720), 3);
    add_background_object(create_tbliftback_2597(-248, 3712), 3);
    add_background_object(create_tblongrailing_2707(-200, 3712), 3);
    add_background_object(create_tblongrailing2_2689(-248, 3712), 3);
    add_background_object(create_tblongrailing3_2690(-232, 3752), 3);
    add_background_object(create_tbsyntaxpanel1_2602(-272, 3712), 3);
    add_background_object(create_tbsyntaxpanel2_2612(1936, 3280), 3);
    add_background_object(create_tbtunnelbottom1_2576(-288, 3712), 3);
    add_background_object(create_tbtunnelbottom2_2588(-248, 3728), 3);
    add_background_object(create_tbtunnelbottom3_2586(-272, 3752), 3);
    add_background_object(create_tbtunnelbottom4_2584(-256, 3800), 3);
    add_background_object(create_tbtunnelbottom5_2590(-224, 3760), 3);
    add_background_object(create_tbtunnelbottom6_2591(-288, 3752), 3);
    add_background_object(create_tbtunnelbottom7_2593(-296, 3760), 3);
    add_background_object(create_tbtunneltop1_2577(-240, 3760), 3);
    add_background_object(create_tbtunneltop2_2587(-208, 3736), 3);
    add_background_object(create_tbtunneltop3_2585(-248, 3760), 3);
    add_background_object(create_tbtunneltop4_2583(-256, 3768), 3);
    add_background_object(create_tbtunneltop5_2589(-256, 3736), 3);
    add_background_object(create_tbtunneltop6_2579(-240, 3752), 3);
    add_background_object(create_tbtunneltop7_2592(-256, 3712), 3);
    add_background_object(create_tbtunnelwall_2578(-240, 3744), 3);
    add_background_object(create_tbwall1_2575(-448, 3720), 3);
    add_background_object(create_tbwall10_2695(-408, 3720), 3);
    add_background_object(create_tbwall11_2697(-424, 3760), 3);
    add_background_object(create_tbwall12_2699(-400, 3728), 3);
    add_background_object(create_tbwall13_2696(-432, 3736), 3);
    add_background_object(create_tbwall14_2679(-408, 3744), 3);
    add_background_object(create_tbwall15_2698(-440, 3784), 3);
    add_background_object(create_tbwall16_2700(-416, 3752), 3);
    add_background_object(create_tbwall17_2705(-400, 3752), 3);
    add_background_object(create_tbwall18_2680(-408, 3744), 3);
    add_background_object(create_tbwall19_2701(-408, 3760), 3);
    add_background_object(create_tbwall2_2580(-424, 3760), 3);
    add_background_object(create_tbwall20_2703(-392, 3776), 3);
    add_background_object(create_tbwall21_2704(-392, 3776), 3);
    add_background_object(create_tbwall22_2702(-416, 3768), 3);
    add_background_object(create_tbwall23_2706(-368, 3752), 3);
    add_background_object(create_tbwall3_2573(-424, 3768), 3);
    add_background_object(create_tbwall4_2574(-416, 3768), 3);
    add_background_object(create_tbwall5_2596(-400, 3768), 3);
    add_background_object(create_tbwall6_2611(-400, 3784), 3);
    add_background_object(create_tbwall7_2638(-432, 3784), 3);
    add_background_object(create_tbwall8_2610(-384, 3792), 3);
    add_background_object(create_tbwall9_2694(-400, 3752), 3);
    add_background_object(create_tbwalledge1_2581(-352, 3680), 3);
    add_background_object(create_tbwalledge2_2594(-352, 3680), 3);
    add_background_object(create_tbwalledge3_2600(-328, 3688), 3);
    add_background_object(create_tbwalledge4_2599(-320, 3680), 3);
    add_background_object(create_tbwalllight_2582(-280, 3752), 3);
    add_background_object(create_tbwalllight2_2730(-280, 3728), 3);
    add_background_object(create_tbwalllight3_2595(-288, 3776), 3);
    add_background_object(create_tbwallshadow_2598(-288, 3808), 3);
    add_background_object(create_watervent_725(-384, 3680), 3);
    add_background_object(create_tbwall8_2610(3072, 3840), 3);
    add_background_object(create_tbwall8_2610(3776, 3840), 3);
    add_background_object(create_tbwall15_2698(3136, 3776), 3);
    add_background_object(create_tbwall15_2698(3200, 3776), 3);
    add_background_object(create_tbwall15_2698(3264, 3776), 3);
    add_background_object(create_tbwall15_2698(3648, 3776), 3);
    add_background_object(create_tbwall15_2698(3712, 3776), 3);
    add_background_object(create_tbwall15_2698(3776, 3776), 3);
    add_background_object(create_tbwall15_2698(3072, 3776), 3);
    add_background_object(create_tbwall13_2696(3072, 4032), 3);
    add_background_object(create_tbwall13_2696(3264, 4032), 3);
    add_background_object(create_tbwall13_2696(3200, 4064), 3);
    add_background_object(create_tbwall13_2696(3136, 4064), 3);
    add_background_object(create_tbwall13_2696(3392, 4032), 3);
    add_background_object(create_tbwall13_2696(3328, 4032), 3);
    add_background_object(create_tbwall13_2696(3520, 4032), 3);
    add_background_object(create_tbwall13_2696(3456, 4032), 3);
    add_background_object(create_tbwall13_2696(3712, 4064), 3);
    add_background_object(create_tbwall13_2696(3584, 4032), 3);
    add_background_object(create_tbwall13_2696(3776, 4032), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3648), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3648), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3648), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3648), 3);
    add_background_object(create_tbwall11_2697(3072, 4160), 3);
    add_background_object(create_tbsolidblack_2688(3072, 4224), 3);
    add_background_object(create_tbsolidblack_2688(3200, 4224), 3);
    add_background_object(create_tbsolidblack_2688(3328, 4224), 3);
    add_background_object(create_tbsolidblack_2688(3456, 4224), 3);
    add_background_object(create_tbsolidblack_2688(3584, 4224), 3);
    add_background_object(create_tbsolidblack_2688(3712, 4224), 3);
    add_background_object(create_tbwall13_2696(3648, 4064), 3);
    add_background_object(create_tbwall15_2698(3584, 3776), 3);
    add_background_object(create_tbwall11_2697(3136, 4160), 3);
    add_background_object(create_tbwall11_2697(3200, 4160), 3);
    add_background_object(create_tbwall11_2697(3264, 4160), 3);
    add_background_object(create_tbwall11_2697(3328, 4160), 3);
    add_background_object(create_tbwall11_2697(3392, 4160), 3);
    add_background_object(create_tbwall11_2697(3456, 4160), 3);
    add_background_object(create_tbwall11_2697(3520, 4160), 3);
    add_background_object(create_tbwall11_2697(3584, 4160), 3);
    add_background_object(create_tbwall11_2697(3648, 4160), 3);
    add_background_object(create_tbwall11_2697(3712, 4160), 3);
    add_background_object(create_tbwall11_2697(3776, 4160), 3);
    add_background_object(create_tbwall6_2611(0, 1120), 3);
    add_background_object(create_tbwall11_2697(-64, 1408), 3);
    add_background_object(create_tbfloor17_2616(64, 1152), 3);
    add_background_object(create_tbwall11_2697(0, 1408), 3);
    add_background_object(create_tbwall20_2703(1408, 1920), 3);
    add_background_object(create_tbwall12_2699(1408, 1984), 3);
    add_background_object(create_tbwall20_2703(1472, 1984), 3);
    add_background_object(create_tbwall12_2699(1472, 2048), 3);
    add_background_object(create_tbsolidblack_2688(-64, 1472), 3);
    add_background_object(create_tbsolidblack_2688(1408, 2176), 3);
    add_background_object(create_tbsolidblack_2688(-64, 1600), 3);
    add_background_object(create_tbwall11_2697(1600, 2112), 3);
    add_background_object(create_tbwall11_2697(1664, 2112), 3);
    add_background_object(create_tbwall20_2703(1536, 2048), 3);
    add_background_object(create_tbwall12_2699(1536, 2112), 3);
    add_background_object(create_tbsolidblack_2688(1536, 2176), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2176), 3);
    add_background_object(create_tbsolidblack_2688(-64, 1728), 3);
    add_background_object(create_tbsolidblack_2688(1408, 2304), 3);
    add_background_object(create_tbsolidblack_2688(1536, 2304), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2304), 3);
    add_background_object(create_tbwall11_2697(1728, 2112), 3);
    add_background_object(create_tbwall11_2697(1792, 2112), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2176), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2304), 3);
    add_background_object(create_tbwall11_2697(1856, 2112), 3);
    add_background_object(create_tbwall11_2697(1920, 2112), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2176), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2304), 3);
    add_background_object(create_tbwall11_2697(1984, 2112), 3);
    add_background_object(create_tbfloor2_2620(2016, 1664), 3);
    add_background_object(create_tbwall11_2697(2048, 2112), 3);
    add_background_object(create_tbwall11_2697(2112, 2112), 3);
    add_background_object(create_tbwall6_2611(2112, 2048), 3);
    add_background_object(create_tbwall6_2611(2048, 2048), 3);
    add_background_object(create_tbfloor20_2615(2104, 1856), 3);
    add_background_object(create_tbfloor17_2616(2104, 1904), 3);
    add_background_object(create_tbfloor19_2613(2104, 1880), 3);
    add_background_object(create_tbfloor2_2620(2136, 1904), 3);
    add_background_object(create_tbfloor1_2614(2136, 1856), 3);
    add_background_object(create_tbfloor15_2624(2392, 1912), 3);
    add_background_object(create_tbfloor12_2626(2392, 1856), 3);
    add_background_object(create_tbfloor13_2628(2520, 1944), 3);
    add_background_object(create_tbfloor10_2622(2520, 1888), 3);
    add_background_object(create_tbfloor16_2617(1632, 1664), 3);
    add_background_object(create_tbfloor16_2617(1952, 1664), 3);
    add_background_object(create_tbfloor16_2617(2264, 1664), 3);
    add_background_object(create_tbfloor16_2617(2328, 1664), 3);
    add_background_object(create_tbfloor15_2624(2392, 1672), 3);
    add_background_object(create_tbfloor13_2628(2520, 1704), 3);
    add_background_object(create_tbwall20_2703(2240, 2112), 3);
    add_background_object(create_tbwall11_2697(2176, 2112), 3);
    add_background_object(create_tbwall19_2701(2240, 2304), 3);
    add_background_object(create_tbwall15_2698(2176, 2304), 3);
    add_background_object(create_tbwall15_2698(2112, 2304), 3);
    add_background_object(create_tbwall16_2700(2048, 2304), 3);
    add_background_object(create_tbwall9_2694(2048, 2368), 3);
    add_background_object(create_tbwall9_2694(2048, 2432), 3);
    add_background_object(create_tbwall9_2694(2048, 2496), 3);
    add_background_object(create_tbwall21_2704(2240, 2496), 3);
    add_background_object(create_tbfloor19_2613(2208, 2496), 3);
    add_background_object(create_tbfloor19_2613(2208, 2560), 3);
    add_background_object(create_tbfloor20_2615(2208, 2496), 3);
    add_background_object(create_tbwall11_2697(2304, 2496), 3);
    add_background_object(create_tbwall11_2697(2368, 2496), 3);
    add_background_object(create_tbwall10_2695(2240, 2560), 3);
    add_background_object(create_tbwall9_2694(2048, 2560), 3);
    add_background_object(create_tbwall9_2694(2048, 2624), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2432), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2304, 2560), 3);
    add_background_object(create_tbwall10_2695(2240, 2624), 3);
    add_background_object(create_tbfloor19_2613(2208, 2624), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2432), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2560), 3);
    add_background_object(create_tbfloor19_2613(2232, 2688), 3);
    add_background_object(create_tbfloor19_2613(2232, 2752), 3);
    add_background_object(create_tbfloor19_2613(2232, 2816), 3);
    add_background_object(create_tbfloor19_2613(2232, 2880), 3);
    add_background_object(create_tbfloor19_2613(2208, 2688), 3);
    add_background_object(create_tbwall10_2695(2240, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2304, 2688), 3);
    add_background_object(create_tbwall10_2695(2240, 2752), 3);
    add_background_object(create_tbfloor19_2613(2208, 2752), 3);
    add_background_object(create_tbfloor19_2613(2208, 2816), 3);
    add_background_object(create_tbwall10_2695(2240, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2304, 2816), 3);
    add_background_object(create_tbwall10_2695(2240, 2880), 3);
    add_background_object(create_tbfloor19_2613(2208, 2880), 3);
    add_background_object(create_tbfloor19_2613(2232, 2944), 3);
    add_background_object(create_tbfloor19_2613(2232, 3008), 3);
    add_background_object(create_tbfloor19_2613(2208, 2944), 3);
    add_background_object(create_tbwall10_2695(2240, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2304, 2944), 3);
    add_background_object(create_tbwall10_2695(2240, 3008), 3);
    add_background_object(create_tbfloor19_2613(2208, 3008), 3);
    add_background_object(create_tbfloor19_2613(2232, 3072), 3);
    add_background_object(create_tbfloor19_2613(2232, 3136), 3);
    add_background_object(create_tbfloor19_2613(2208, 3072), 3);
    add_background_object(create_tbwall10_2695(2240, 3072), 3);
    add_background_object(create_tbwall10_2695(2240, 3136), 3);
    add_background_object(create_tbfloor19_2613(2208, 3136), 3);
    add_background_object(create_tbfloor19_2613(2208, 3200), 3);
    add_background_object(create_tbfloor17_2616(2208, 3200), 3);
    add_background_object(create_tbwall22_2702(2240, 3200), 3);
    add_background_object(create_tbwall9_2694(2048, 2688), 3);
    add_background_object(create_tbwall9_2694(2048, 2752), 3);
    add_background_object(create_tbwall9_2694(2048, 2816), 3);
    add_background_object(create_tbwall9_2694(2048, 2880), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2816), 3);
    add_background_object(create_tbwall9_2694(2048, 2944), 3);
    add_background_object(create_tbwall9_2694(2048, 3008), 3);
    add_background_object(create_tbwall9_2694(2048, 3072), 3);
    add_background_object(create_tbwall9_2694(2048, 3136), 3);
    add_background_object(create_tbsolidblack_2688(1920, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3072), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3072), 3);
    add_background_object(create_tbwall11_2697(2176, 3584), 3);
    add_background_object(create_tbwall11_2697(2112, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2048, 3648), 3);
    add_background_object(create_tbsolidblack_2688(2176, 3648), 3);
    add_background_object(create_tbwall19_2701(2048, 3200), 3);
    add_background_object(create_tbwall15_2698(1920, 3200), 3);
    add_background_object(create_tbwall15_2698(1984, 3200), 3);
    add_background_object(create_tbfloor19_2613(2232, 3456), 3);
    add_background_object(create_tbfloor19_2613(2232, 3520), 3);
    add_background_object(create_tbfloor19_2613(2208, 3456), 3);
    add_background_object(create_tbfloor19_2613(2208, 3520), 3);
    add_background_object(create_tbfloor20_2615(2208, 3456), 3);
    add_background_object(create_tbwall12_2699(2048, 3584), 3);
    add_background_object(create_tbwall9_2694(2048, 3520), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3648), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3520), 3);
    add_background_object(create_tbwall20_2703(2048, 3456), 3);
    add_background_object(create_tbwall11_2697(1920, 3456), 3);
    add_background_object(create_tbwall11_2697(1984, 3456), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3200), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3328), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3456), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3712), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3584), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2432), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2560), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1664, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3072), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3200), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3328), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3456), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3712), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3584), 3);
    add_background_object(create_tbwall12_2699(1856, 3456), 3);
    add_background_object(create_tbwall16_2700(1856, 3200), 3);
    add_background_object(create_tbwall9_2694(1856, 3264), 3);
    add_background_object(create_tbwall9_2694(1856, 3328), 3);
    add_background_object(create_tbwall9_2694(1856, 3392), 3);
    add_background_object(create_tbwall17_2705(2240, 3584), 3);
    add_background_object(create_tbwall10_2695(2240, 3520), 3);
    add_background_object(create_tbwall21_2704(2240, 3456), 3);
    add_background_object(create_tbwall12_2699(2304, 3584), 3);
    add_background_object(create_tbwall9_2694(2304, 3520), 3);
    add_background_object(create_tbwall20_2703(2304, 3456), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3648), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3648), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3648), 3);
    add_background_object(create_tbwall15_2698(3008, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3072), 3);
    add_background_object(create_tbwall15_2698(2944, 3200), 3);
    add_background_object(create_tbwall13_2696(3008, 3456), 3);
    add_background_object(create_tbwall13_2696(2944, 3456), 3);
    add_background_object(create_tbwall11_2697(3008, 3584), 3);
    add_background_object(create_tbwall11_2697(2944, 3584), 3);
    add_background_object(create_tbwall15_2698(2432, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3072), 3);
    add_background_object(create_tbwall15_2698(2560, 3200), 3);
    add_background_object(create_tbwall13_2696(2496, 3456), 3);
    add_background_object(create_tbwall13_2696(2432, 3456), 3);
    add_background_object(create_tbwall11_2697(2432, 3584), 3);
    add_background_object(create_tbwall11_2697(2560, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3072), 3);
    add_background_object(create_tbwall15_2698(2304, 3200), 3);
    add_background_object(create_tbwall15_2698(2368, 3200), 3);
    add_background_object(create_tbwall13_2696(2368, 3456), 3);
    add_background_object(create_tbwall11_2697(2368, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2560, 3648), 3);
    add_background_object(create_tbwall13_2696(2624, 3456), 3);
    add_background_object(create_tbwall13_2696(2560, 3456), 3);
    add_background_object(create_tbwall11_2697(2496, 3584), 3);
    add_background_object(create_tbwall11_2697(2624, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2688, 3648), 3);
    add_background_object(create_tbwall13_2696(2752, 3456), 3);
    add_background_object(create_tbwall13_2696(2688, 3456), 3);
    add_background_object(create_tbwall11_2697(2688, 3584), 3);
    add_background_object(create_tbwall11_2697(2816, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3648), 3);
    add_background_object(create_tbwall13_2696(2880, 3456), 3);
    add_background_object(create_tbwall13_2696(2816, 3456), 3);
    add_background_object(create_tbwall11_2697(2752, 3584), 3);
    add_background_object(create_tbwall11_2697(2880, 3584), 3);
    add_background_object(create_tbwall15_2698(2688, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2688, 3072), 3);
    add_background_object(create_tbwall15_2698(2816, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2560, 3072), 3);
    add_background_object(create_tbwall15_2698(2496, 3200), 3);
    add_background_object(create_tbwall15_2698(2624, 3200), 3);
    add_background_object(create_tbwall15_2698(2752, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3072), 3);
    add_background_object(create_tbwall15_2698(2880, 3200), 3);
    add_background_object(create_tbwall8_2610(2944, 3264), 3);
    add_background_object(create_tbwall8_2610(2880, 3264), 3);
    add_background_object(create_tbwall8_2610(2816, 3264), 3);
    add_background_object(create_tbwall8_2610(2368, 3264), 3);
    add_background_object(create_tbwall11_2697(2432, 2496), 3);
    add_background_object(create_tbwall11_2697(2496, 2496), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2560), 3);
    add_background_object(create_tbwall11_2697(2560, 2496), 3);
    add_background_object(create_tbwall11_2697(2624, 2496), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2432, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2560, 2944), 3);
    add_background_object(create_tbfloor2_2620(2648, 1728), 3);
    add_background_object(create_tbfloor2_2620(2648, 1968), 3);
    add_background_object(create_tbfloor1_2614(2648, 1920), 3);
    add_background_object(create_tbfloor2_2620(3008, 1728), 3);
    add_background_object(create_tbfloor18_2631(2904, 1968), 3);
    add_background_object(create_tbfloor21_2632(2904, 1920), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2560), 3);
    add_background_object(create_tbwall11_2697(2688, 2496), 3);
    add_background_object(create_tbwall11_2697(2752, 2496), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2432), 3);
    add_background_object(create_tbwall11_2697(2880, 2368), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2432), 3);
    add_background_object(create_tbwall11_2697(2944, 2368), 3);
    add_background_object(create_tbwall11_2697(3008, 2368), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2944), 3);
    add_background_object(create_tbwall8_2610(2816, 2304), 3);
    add_background_object(create_tbwall6_2611(2816, 2240), 3);
    add_background_object(create_tbwall6_2611(3008, 2176), 3);
    add_background_object(create_tbwall8_2610(3200, 2176), 3);
    add_background_object(create_tbwall6_2611(3200, 2112), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2432), 3);
    add_background_object(create_tbwall11_2697(3072, 2368), 3);
    add_background_object(create_tbwall11_2697(3136, 2368), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2688), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2944), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2432), 3);
    add_background_object(create_tbwall11_2697(3200, 2368), 3);
    add_background_object(create_tbwall11_2697(3264, 2368), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2688), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2944), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2432), 3);
    add_background_object(create_tbwall11_2697(3328, 2368), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2688), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2944), 3);
    add_background_object(create_tbwall17_2705(3520, 2368), 3);
    add_background_object(create_tbwall10_2695(3520, 2304), 3);
    add_background_object(create_tbwall10_2695(3392, 2112), 3);
    add_background_object(create_tbwall10_2695(3392, 2048), 3);
    add_background_object(create_tbwall21_2704(3392, 1984), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2048), 3);
    add_background_object(create_tbwall11_2697(3456, 1984), 3);
    add_background_object(create_tbwall11_2697(3520, 1984), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2432), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2688), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2944), 3);
    add_background_object(create_tbfloor2_2620(3360, 1728), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2048), 3);
    add_background_object(create_tbwall11_2697(3584, 1984), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2176), 3);
    add_background_object(create_tbfloor18_2631(4576, 1728), 3);
    add_background_object(create_tbwall20_2703(3648, 1984), 3);
    add_background_object(create_tbwall9_2694(3648, 2048), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2304), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2432), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2560), 3);
    add_background_object(create_tbwall12_2699(3008, 4160), 3);
    add_background_object(create_tbwall9_2694(3008, 4096), 3);
    add_background_object(create_tbwall20_2703(3008, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2944, 4224), 3);
    add_background_object(create_tbwall11_2697(2944, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2816, 4096), 3);
    add_background_object(create_tbsolidblack_2688(2816, 4224), 3);
    add_background_object(create_tbwall11_2697(1984, 4032), 3);
    add_background_object(create_tbwall11_2697(1920, 4032), 3);
    add_background_object(create_tbwall15_2698(1984, 3776), 3);
    add_background_object(create_tbwall15_2698(2944, 3776), 3);
    add_background_object(create_tbwall15_2698(3008, 3776), 3);
    add_background_object(create_tbwall15_2698(1920, 3776), 3);
    add_background_object(create_tbwall15_2698(1984, 3776), 3);
    add_background_object(create_tbwall15_2698(2944, 3776), 3);
    add_background_object(create_tbwall15_2698(3008, 3776), 3);
    add_background_object(create_tbsolidblack_2688(3840, 4096), 3);
    add_background_object(create_tbsolidblack_2688(3840, 4224), 3);
    add_background_object(create_tbwall11_2697(3904, 4032), 3);
    add_background_object(create_tbwall15_2698(3904, 3776), 3);
    add_background_object(create_tbwall15_2698(3840, 3776), 3);
    add_background_object(create_tbwall21_2704(3840, 4032), 3);
    add_background_object(create_tbwall10_2695(3840, 4096), 3);
    add_background_object(create_tbwall17_2705(3840, 4160), 3);
    add_background_object(create_tbwall19_2701(3328, 3776), 3);
    add_background_object(create_tbwall9_2694(3328, 3712), 3);
    add_background_object(create_tbwall9_2694(3328, 3648), 3);
    add_background_object(create_tbwall22_2702(3520, 3776), 3);
    add_background_object(create_tbwall10_2695(3520, 3712), 3);
    add_background_object(create_tbwall10_2695(3520, 3648), 3);
    add_background_object(create_tbwall9_2694(3328, 3584), 3);
    add_background_object(create_tbwall10_2695(3520, 3584), 3);
    add_background_object(create_tbwall9_2694(3328, 3520), 3);
    add_background_object(create_tbwall10_2695(3520, 3520), 3);
    add_background_object(create_tbwall10_2695(3520, 3456), 3);
    add_background_object(create_tbwall10_2695(3520, 3392), 3);
    add_background_object(create_tbwall10_2695(3520, 3328), 3);
    add_background_object(create_tbwall10_2695(3520, 3264), 3);
    add_background_object(create_tbwall15_2698(3136, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3072), 3);
    add_background_object(create_tbwall15_2698(3072, 3200), 3);
    add_background_object(create_tbwall15_2698(3264, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3072), 3);
    add_background_object(create_tbwall15_2698(3200, 3200), 3);
    add_background_object(create_tbwall15_2698(3392, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3328, 3072), 3);
    add_background_object(create_tbwall15_2698(3328, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3456, 3072), 3);
    add_background_object(create_tbwall15_2698(3456, 3200), 3);
    add_background_object(create_tbwall23_2706(3520, 3200), 3);
    add_background_object(create_tbwall20_2703(3328, 3456), 3);
    add_background_object(create_tbwall21_2704(3072, 3456), 3);
    add_background_object(create_tbwall10_2695(3072, 3520), 3);
    add_background_object(create_tbwall17_2705(3072, 3584), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3520), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3648), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3520), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3520), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3520), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3264), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3264), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3264), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3008), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3008), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3008), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2880), 3);
    add_background_object(create_tbsolidblack_2688(3712, 2880), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2880), 3);
    add_background_object(create_tbwall13_2696(3200, 3488), 3);
    add_background_object(create_tbwall20_2703(3136, 3456), 3);
    add_background_object(create_tbwall21_2704(3264, 3456), 3);
    add_background_object(create_tbwall11_2697(3200, 3520), 3);
    add_background_object(create_tbwall17_2705(3264, 3520), 3);
    add_background_object(create_tbwall12_2699(3136, 3520), 3);
    add_background_object(create_tbsyntaxpanel2_2612(2368, 2312), 3);
    add_background_object(create_tbsolidblack_2688(2048, 2176), 3);
    add_background_object(create_tbsolidblack_2688(2176, 2176), 3);
    add_background_object(create_tbwall9_2694(2240, 2176), 3);
    add_background_object(create_tbwall9_2694(2240, 2240), 3);
    add_background_object(create_tbwall21_2704(2816, 2368), 3);
    add_background_object(create_tbwall10_2695(2816, 2432), 3);
    add_background_object(create_tbwall17_2705(2816, 2496), 3);
    add_background_object(create_tbwall6_2611(2456, 2240), 3);
    add_background_object(create_tbwall6_2611(2560, 2240), 3);
    add_background_object(create_tbwall6_2611(2624, 2240), 3);
    add_background_object(create_tbwall6_2611(2456, 2176), 3);
    add_background_object(create_tbwall6_2611(2456, 2112), 3);
    add_background_object(create_tbwall6_2611(2584, 2048), 3);
    add_background_object(create_tbwall6_2611(2456, 2048), 3);
    add_background_object(create_tbwall6_2611(2648, 2048), 3);
    add_background_object(create_tbwall6_2611(2688, 2240), 3);
    add_background_object(create_tbwall6_2611(2752, 2240), 3);
    add_background_object(create_tbwall6_2611(2520, 2048), 3);
    add_background_object(create_tbladder_2636(2520, 2240), 3);
    add_background_object(create_tbladder_2636(2520, 2272), 3);
    add_background_object(create_tbladder_2636(2520, 2304), 3);
    add_background_object(create_tbladder_2636(2520, 2336), 3);
    add_background_object(create_tbladder_2636(2520, 2368), 3);
    add_background_object(create_tbladder_2636(2520, 2400), 3);
    add_background_object(create_tbwall9_2694(3648, 2112), 3);
    add_background_object(create_tbwall9_2694(3648, 2176), 3);
    add_background_object(create_tbwall9_2694(3648, 2240), 3);
    add_background_object(create_tbwall9_2694(3648, 2304), 3);
    add_background_object(create_tbwall9_2694(3648, 2368), 3);
    add_background_object(create_tbwall9_2694(3648, 2432), 3);
    add_background_object(create_tbwall9_2694(3648, 2496), 3);
    add_background_object(create_tbwall9_2694(3648, 2560), 3);
    add_background_object(create_tbwall9_2694(3648, 2624), 3);
    add_background_object(create_tbfloor20_2615(3712, 2048), 3);
    add_background_object(create_tbfloor12_2626(3744, 2048), 3);
    add_background_object(create_tbfloor10_2622(3872, 2080), 3);
    add_background_object(create_tbfloor3_2634(4000, 2112), 3);
    add_background_object(create_tbfloor21_2632(4576, 2112), 3);
    add_background_object(create_tbwall6_2611(4608, 2112), 3);
    add_background_object(create_tbwall6_2611(4608, 2048), 3);
    add_background_object(create_tbwall6_2611(4608, 1984), 3);
    add_background_object(create_tbwall6_2611(4608, 1920), 3);
    add_background_object(create_tbwall6_2611(4608, 1856), 3);
    add_background_object(create_tbwall6_2611(4608, 1792), 3);
    add_background_object(create_tbcornercurve1_2637(4544, 2048), 3);
    add_background_object(create_tbcornercurve4_2731(4544, 1792), 3);
    add_background_object(create_tbcornercurve3_2732(3832, 1792), 3);
    add_background_object(create_tbfloor3_2634(4512, 2112), 3);
    add_background_object(create_tbwall6_2611(4608, 1728), 3);
    add_background_object(create_tbfloor16_2617(4512, 1728), 3);
    add_background_object(create_tbfloor7_2623(4384, 1736), 3);
    add_background_object(create_tbfloor6_2627(4192, 1800), 3);
    add_background_object(create_tbfloor13_2628(4064, 1800), 3);
    add_background_object(create_tbfloor15_2624(3872, 1736), 3);
    add_background_object(create_tbfloor17_2616(3840, 1728), 3);
    add_background_object(create_tbfloor18_2631(3680, 1728), 3);
    add_background_object(create_tbwall6_2611(3776, 1800), 3);
    add_background_object(create_tbwall6_2611(3776, 1736), 3);
    add_background_object(create_tbfloor3_2634(4320, 2112), 3);
    add_background_object(create_tbwall6_2611(3712, 1800), 3);
    add_background_object(create_tbwall6_2611(3712, 1736), 3);
    add_background_object(create_tbfloor16_2617(3304, 1728), 3);
    add_background_object(create_tbfloor16_2617(3616, 1728), 3);
    add_background_object(create_tbfloor16_2617(2952, 1728), 3);
    add_background_object(create_tbfloor16_2617(2896, 1728), 3);
    add_background_object(create_tbfloor16_2617(3256, 1728), 3);
    add_background_object(create_tbfloor1_2614(4064, 2112), 3);
    add_background_object(create_tbfloor3_2634(4448, 2112), 3);
    add_background_object(create_tbfloor3_2634(4384, 2112), 3);
    add_background_object(create_tbfloor16_2617(1312, 1664), 3);
    add_background_object(create_tbfloor13_2628(1184, 1640), 3);
    add_background_object(create_tbfloor14_2630(1120, 1608), 3);
    add_background_object(create_tbfloor14_2630(1056, 1576), 3);
    add_background_object(create_tbfloor14_2630(992, 1544), 3);
    add_background_object(create_tbfloor14_2630(928, 1512), 3);
    add_background_object(create_tbfloor14_2630(352, 1224), 3);
    add_background_object(create_tbfloor14_2630(288, 1192), 3);
    add_background_object(create_tbfloor15_2624(160, 1160), 3);
    add_background_object(create_tbfloor16_2617(96, 1152), 3);
    add_background_object(create_tbwall20_2703(64, 1408), 3);
    add_background_object(create_tbwall9_2694(64, 1472), 3);
    add_background_object(create_tbwall9_2694(64, 1536), 3);
    add_background_object(create_tbwall9_2694(64, 1600), 3);
    add_background_object(create_tbwall9_2694(64, 1664), 3);
    add_background_object(create_tbwall9_2694(64, 1728), 3);
    add_background_object(create_tbwall9_2694(64, 1792), 3);
    add_background_object(create_tbwall19_2701(64, 1856), 3);
    add_background_object(create_tbwall15_2698(0, 1856), 3);
    add_background_object(create_tbwall15_2698(-64, 1856), 3);
    add_background_object(create_tbfloor20_2615(128, 1408), 3);
    add_background_object(create_tbfloor12_2626(160, 1408), 3);
    add_background_object(create_tbfloor11_2619(288, 1440), 3);
    add_background_object(create_tbfloor11_2619(352, 1472), 3);
    add_background_object(create_tbfloor11_2619(928, 1760), 3);
    add_background_object(create_tbfloor11_2619(992, 1792), 3);
    add_background_object(create_tbfloor11_2619(1056, 1824), 3);
    add_background_object(create_tbfloor11_2619(1120, 1856), 3);
    add_background_object(create_tbfloor10_2622(1184, 1888), 3);
    add_background_object(create_tbfloor21_2632(1312, 1920), 3);
    add_background_object(create_tbwall21_2704(1344, 1920), 3);
    add_background_object(create_tbwall10_2695(1344, 1984), 3);
    add_background_object(create_tbwall10_2695(1344, 2048), 3);
    add_background_object(create_tbwall10_2695(1344, 2112), 3);
    add_background_object(create_tbwall10_2695(1344, 2176), 3);
    add_background_object(create_tbwall10_2695(1344, 2240), 3);
    add_background_object(create_tbwall10_2695(1344, 2304), 3);
    add_background_object(create_tbwall10_2695(1344, 2368), 3);
    add_background_object(create_tbtunneltop3_2585(800, 1504), 3);
    add_background_object(create_tbtunnelbottom3_2586(800, 1664), 3);
    add_background_object(create_tbtunnelwall_2578(848, 1600), 3);
    add_background_object(create_tbtunneltop3_2585(672, 1440), 3);
    add_background_object(create_tbtunnelbottom3_2586(672, 1600), 3);
    add_background_object(create_tbtunnelwall_2578(720, 1536), 3);
    add_background_object(create_tbfloor14_2630(864, 1480), 3);
    add_background_object(create_tbfloor14_2630(800, 1448), 3);
    add_background_object(create_tbfloor14_2630(736, 1416), 3);
    add_background_object(create_tbfloor14_2630(672, 1384), 3);
    add_background_object(create_tbfloor11_2619(672, 1632), 3);
    add_background_object(create_tbfloor11_2619(736, 1664), 3);
    add_background_object(create_tbfloor11_2619(800, 1696), 3);
    add_background_object(create_tbfloor11_2619(864, 1728), 3);
    add_background_object(create_tbtunneltop3_2585(544, 1376), 3);
    add_background_object(create_tbtunnelbottom3_2586(544, 1536), 3);
    add_background_object(create_tbtunnelwall_2578(592, 1472), 3);
    add_background_object(create_tbtunneltop3_2585(416, 1312), 3);
    add_background_object(create_tbtunnelbottom3_2586(416, 1472), 3);
    add_background_object(create_tbtunnelwall_2578(464, 1408), 3);
    add_background_object(create_tbfloor14_2630(608, 1352), 3);
    add_background_object(create_tbfloor14_2630(544, 1320), 3);
    add_background_object(create_tbfloor14_2630(480, 1288), 3);
    add_background_object(create_tbfloor14_2630(416, 1256), 3);
    add_background_object(create_tbfloor11_2619(416, 1504), 3);
    add_background_object(create_tbfloor11_2619(480, 1536), 3);
    add_background_object(create_tbfloor11_2619(544, 1568), 3);
    add_background_object(create_tbfloor11_2619(608, 1600), 3);
    add_background_object(create_tbfloor9_2629(4320, 1768), 3);
    add_background_object(create_tbfloor14_2630(4000, 1768), 3);
    add_background_object(create_tbsolidblack_2688(2688, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2688, 4160), 3);
    add_background_object(create_tbsolidblack_2688(2560, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2560, 4160), 3);
    add_background_object(create_tbwall12_2699(1856, 4032), 3);
    add_background_object(create_tbwall16_2700(1856, 3776), 3);
    add_background_object(create_tbwall9_2694(1856, 3840), 3);
    add_background_object(create_tbwall9_2694(1856, 3904), 3);
    add_background_object(create_tbwall9_2694(1856, 3968), 3);
    add_background_object(create_tbsolidblack_2688(2176, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2176, 4160), 3);
    add_background_object(create_tbsolidblack_2688(2048, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2048, 4160), 3);
    add_background_object(create_tbsolidblack_2688(1920, 4160), 3);
    add_background_object(create_tbsolidblack_2688(1792, 4160), 3);
    add_background_object(create_tbsolidblack_2688(1664, 4032), 3);
    add_background_object(create_tbsolidblack_2688(1664, 4160), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3904), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3776), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3968), 3);
    add_background_object(create_tbsolidblack_2688(1536, 4096), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3840), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3968), 3);
    add_background_object(create_tbsolidblack_2688(1408, 4096), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3840), 3);
    add_background_object(create_tbedgeoverlay_2640(288, 1248), 3);
    add_background_object(create_tbedgeoverlay_2640(224, 1216), 3);
    add_background_object(create_tbedgeoverlay_2640(352, 1280), 3);
    add_background_object(create_tbedgeoverlay_2640(416, 1312), 3);
    add_background_object(create_tbedgeoverlay_2640(480, 1344), 3);
    add_background_object(create_tbedgeoverlay_2640(544, 1376), 3);
    add_background_object(create_tbedgeoverlay_2640(608, 1408), 3);
    add_background_object(create_tbedgeoverlay_2640(672, 1440), 3);
    add_background_object(create_tbedgeoverlay_2640(736, 1472), 3);
    add_background_object(create_tbedgeoverlay_2640(800, 1504), 3);
    add_background_object(create_tbedgeoverlay_2640(864, 1536), 3);
    add_background_object(create_tbedgeoverlay_2640(928, 1568), 3);
    add_background_object(create_tbedgeoverlay_2640(992, 1600), 3);
    add_background_object(create_tbedgeoverlay_2640(1056, 1632), 3);
    add_background_object(create_tbedgeoverlay_2640(1120, 1664), 3);
    add_background_object(create_tbedgeoverlay_2640(1184, 1688), 3);
    add_background_object(create_tbedgeoverlay_2640(2512, 1752), 3);
    add_background_object(create_tbedgeoverlay_2640(2448, 1720), 3);
    add_background_object(create_tbwall11_2697(3968, 4032), 3);
    add_background_object(create_tbwall11_2697(4032, 4032), 3);
    add_background_object(create_tbwall11_2697(4096, 4032), 3);
    add_background_object(create_tbwall25_2733(4160, 4032), 3);
    add_background_object(create_tbwall26_2734(4160, 3776), 3);
    add_background_object(create_tbsolidblack_2688(3968, 4096), 3);
    add_background_object(create_tbsolidblack_2688(3968, 4224), 3);
    add_background_object(create_tbwall15_2698(2624, 3776), 3);
    add_background_object(create_tbwall15_2698(2688, 3776), 3);
    add_background_object(create_tbwall15_2698(2816, 3776), 3);
    add_background_object(create_tbwall15_2698(2880, 3776), 3);
    add_background_object(create_tbwall15_2698(2752, 3776), 3);
    add_background_object(create_tbwall11_2697(2880, 4032), 3);
    add_background_object(create_tbwall11_2697(2816, 4032), 3);
    add_background_object(create_tbwall11_2697(2752, 4032), 3);
    add_background_object(create_tbwall11_2697(2688, 4032), 3);
    add_background_object(create_tbwall11_2697(2624, 4032), 3);
    add_background_object(create_tbwall15_2698(2112, 3776), 3);
    add_background_object(create_tbwall15_2698(2176, 3776), 3);
    add_background_object(create_tbwall15_2698(2560, 3776), 3);
    add_background_object(create_tbwall15_2698(2240, 3776), 3);
    add_background_object(create_tbwall11_2697(2560, 4032), 3);
    add_background_object(create_tbwall11_2697(2240, 4032), 3);
    add_background_object(create_tbwall11_2697(2176, 4032), 3);
    add_background_object(create_tbwall11_2697(2112, 4032), 3);
    add_background_object(create_tbwall15_2698(2048, 3776), 3);
    add_background_object(create_tbwall11_2697(2048, 4032), 3);
    add_background_object(create_tbwall15_2698(4032, 3776), 3);
    add_background_object(create_tbwall15_2698(3968, 3776), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3648), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3520), 3);
    add_background_object(create_tbwall15_2698(4096, 3776), 3);
    add_background_object(create_tbwall25_2733(4224, 4064), 3);
    add_background_object(create_tbwall26_2734(4224, 3808), 3);
    add_background_object(create_tbwall25_2733(4288, 4096), 3);
    add_background_object(create_tbwall26_2734(4288, 3840), 3);
    add_background_object(create_tbwall25_2733(4352, 4128), 3);
    add_background_object(create_tbwall26_2734(4352, 3872), 3);
    add_background_object(create_tbwall25_2733(4416, 4160), 3);
    add_background_object(create_tbwall26_2734(4416, 3904), 3);
    add_background_object(create_tbwall25_2733(4480, 4192), 3);
    add_background_object(create_tbwall26_2734(4480, 3936), 3);
    add_background_object(create_tbwall25_2733(4544, 4224), 3);
    add_background_object(create_tbwall26_2734(4544, 3968), 3);
    add_background_object(create_tbwall25_2733(4608, 4256), 3);
    add_background_object(create_tbwall27_2735(5184, 4256), 3);
    add_background_object(create_tbwall26_2734(4608, 4000), 3);
    add_background_object(create_tbwall28_2736(5184, 4000), 3);
    add_background_object(create_tbwall11_2697(4672, 4288), 3);
    add_background_object(create_tbwall15_2698(4672, 4032), 3);
    add_background_object(create_tbwall11_2697(4736, 4288), 3);
    add_background_object(create_tbwall11_2697(4800, 4288), 3);
    add_background_object(create_tbwall11_2697(4864, 4288), 3);
    add_background_object(create_tbwall15_2698(4800, 4032), 3);
    add_background_object(create_tbwall15_2698(4736, 4032), 3);
    add_background_object(create_tbwall15_2698(4864, 4032), 3);
    add_background_object(create_tbwall11_2697(4928, 4288), 3);
    add_background_object(create_tbwall15_2698(4928, 4032), 3);
    add_background_object(create_tbwall11_2697(4992, 4288), 3);
    add_background_object(create_tbwall11_2697(5056, 4288), 3);
    add_background_object(create_tbwall11_2697(5120, 4288), 3);
    add_background_object(create_tbwall15_2698(5056, 4032), 3);
    add_background_object(create_tbwall15_2698(4992, 4032), 3);
    add_background_object(create_tbwall15_2698(5120, 4032), 3);
    add_background_object(create_tbwall27_2735(5248, 4224), 3);
    add_background_object(create_tbwall28_2736(5248, 3968), 3);
    add_background_object(create_tbwall27_2735(5312, 4192), 3);
    add_background_object(create_tbwall28_2736(5312, 3936), 3);
    add_background_object(create_tbwall27_2735(5376, 4160), 3);
    add_background_object(create_tbwall28_2736(5376, 3904), 3);
    add_background_object(create_tbwall27_2735(5696, 4128), 3);
    add_background_object(create_tbwall28_2736(5696, 3872), 3);
    add_background_object(create_tbwall11_2697(5440, 4160), 3);
    add_background_object(create_tbwall15_2698(5440, 3904), 3);
    add_background_object(create_tbwall11_2697(5504, 4160), 3);
    add_background_object(create_tbwall11_2697(5568, 4160), 3);
    add_background_object(create_tbwall11_2697(5632, 4160), 3);
    add_background_object(create_tbwall15_2698(5568, 3904), 3);
    add_background_object(create_tbwall15_2698(5504, 3904), 3);
    add_background_object(create_tbwall15_2698(5632, 3904), 3);
    add_background_object(create_tbwall27_2735(5760, 4096), 3);
    add_background_object(create_tbwall28_2736(5760, 3840), 3);
    add_background_object(create_tbwall27_2735(5824, 4064), 3);
    add_background_object(create_tbwall28_2736(5824, 3808), 3);
    add_background_object(create_tbwall27_2735(5888, 4032), 3);
    add_background_object(create_tbwall28_2736(5888, 3776), 3);
    add_background_object(create_tbwall11_2697(5952, 4032), 3);
    add_background_object(create_tbwall15_2698(5952, 3776), 3);
    add_background_object(create_tbwall11_2697(6016, 4032), 3);
    add_background_object(create_tbwall11_2697(6080, 4032), 3);
    add_background_object(create_tbwall15_2698(6080, 3776), 3);
    add_background_object(create_tbwall15_2698(6016, 3776), 3);
    add_background_object(create_tbwall15_2698(6144, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4096, 4224), 3);
    add_background_object(create_tbsolidblack_2688(4224, 4256), 3);
    add_background_object(create_tbsolidblack_2688(4096, 4352), 3);
    add_background_object(create_tbsolidblack_2688(4224, 4384), 3);
    add_background_object(create_tbsolidblack_2688(4352, 4320), 3);
    add_background_object(create_tbsolidblack_2688(4480, 4384), 3);
    add_background_object(create_tbsolidblack_2688(4608, 4352), 3);
    add_background_object(create_tbsolidblack_2688(4736, 4352), 3);
    add_background_object(create_tbsolidblack_2688(4864, 4352), 3);
    add_background_object(create_tbsolidblack_2688(4992, 4352), 3);
    add_background_object(create_tbsolidblack_2688(5120, 4352), 3);
    add_background_object(create_tbsolidblack_2688(5504, 4224), 3);
    add_background_object(create_tbsolidblack_2688(5504, 4352), 3);
    add_background_object(create_tbsolidblack_2688(5632, 4224), 3);
    add_background_object(create_tbsolidblack_2688(5632, 4352), 3);
    add_background_object(create_tbsolidblack_2688(5760, 4288), 3);
    add_background_object(create_tbsolidblack_2688(5760, 4416), 3);
    add_background_object(create_tbsolidblack_2688(6016, 4096), 3);
    add_background_object(create_tbsolidblack_2688(6016, 4224), 3);
    add_background_object(create_tbsolidblack_2688(6016, 4352), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3392), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3392), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3584), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3456), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3712), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3584), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3904), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3904), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3904), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3776), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3776), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3712), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3584), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3776), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3776), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3584), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3456), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3392), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3392), 3);
    add_background_object(create_tbwall15_2698(6208, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3392), 3);
    add_background_object(create_tbwall15_2698(6336, 3776), 3);
    add_background_object(create_tbwall15_2698(6272, 3776), 3);
    add_background_object(create_tbwall15_2698(6400, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3392), 3);
    add_background_object(create_tbwall15_2698(6464, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3392), 3);
    add_background_object(create_tbwall11_2697(6208, 4288), 3);
    add_background_object(create_tbsolidblack_2688(6144, 4352), 3);
    add_background_object(create_tbwall12_2699(6144, 4288), 3);
    add_background_object(create_tbwall20_2703(6144, 4032), 3);
    add_background_object(create_tbwall9_2694(6144, 4096), 3);
    add_background_object(create_tbwall9_2694(6144, 4160), 3);
    add_background_object(create_tbwall9_2694(6144, 4224), 3);
    add_background_object(create_tbsolidblack_2688(6272, 4352), 3);
    add_background_object(create_tbwall11_2697(6272, 4288), 3);
    add_background_object(create_tbwall11_2697(6336, 4288), 3);
    add_background_object(create_tbsolidblack_2688(6400, 4352), 3);
    add_background_object(create_tbwall11_2697(6400, 4288), 3);
    add_background_object(create_tbwall11_2697(6464, 4288), 3);
    add_background_object(create_tbsolidblack_2688(6528, 4352), 3);
    add_background_object(create_tbwall11_2697(6528, 4288), 3);
    add_background_object(create_tbwall11_2697(6592, 4288), 3);
    add_background_object(create_tbsolidblack_2688(6656, 4352), 3);
    add_background_object(create_tbwall11_2697(6656, 4288), 3);
    add_background_object(create_tbwall11_2697(6720, 4288), 3);
    add_background_object(create_tbwall11_2697(6848, 4416), 3);
    add_background_object(create_tbwall11_2697(7040, 4416), 3);
    add_background_object(create_tbwall11_2697(7104, 4416), 3);
    add_background_object(create_tbwall12_2699(6784, 4416), 3);
    add_background_object(create_tbwall20_2703(6784, 4288), 3);
    add_background_object(create_tbwall11_2697(7168, 4416), 3);
    add_background_object(create_tbwall11_2697(7232, 4416), 3);
    add_background_object(create_tbwall11_2697(7424, 4416), 3);
    add_background_object(create_tbwall11_2697(7488, 4416), 3);
    add_background_object(create_tbwall11_2697(7552, 4416), 3);
    add_background_object(create_tbwall11_2697(7616, 4416), 3);
    add_background_object(create_tbwall11_2697(7680, 4416), 3);
    add_background_object(create_tbwall11_2697(7744, 4416), 3);
    add_background_object(create_tbwall11_2697(7808, 4416), 3);
    add_background_object(create_tbwall11_2697(7872, 4416), 3);
    add_background_object(create_tbwall11_2697(7936, 4416), 3);
    add_background_object(create_tbwall11_2697(8000, 4416), 3);
    add_background_object(create_tbwall15_2698(6592, 3776), 3);
    add_background_object(create_tbwall15_2698(6528, 3776), 3);
    add_background_object(create_tbwall15_2698(6656, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3392), 3);
    add_background_object(create_tbwall15_2698(6720, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3392), 3);
    add_background_object(create_tbwall15_2698(6848, 3776), 3);
    add_background_object(create_tbwall15_2698(6784, 3776), 3);
    add_background_object(create_tbwall15_2698(6912, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3392), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3520), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3392), 3);
    add_background_object(create_tbwall15_2698(7040, 4032), 3);
    add_background_object(create_tbwall15_2698(7104, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3648), 3);
    add_background_object(create_tbwall22_2702(6976, 4032), 3);
    add_background_object(create_tbwall23_2706(6976, 3776), 3);
    add_background_object(create_tbwall10_2695(6976, 3840), 3);
    add_background_object(create_tbwall10_2695(6976, 3904), 3);
    add_background_object(create_tbwall10_2695(6976, 3968), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3520), 3);
    add_background_object(create_tbwall15_2698(7168, 4032), 3);
    add_background_object(create_tbwall15_2698(7232, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3648), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3520), 3);
    add_background_object(create_tbwall15_2698(7296, 4032), 3);
    add_background_object(create_tbwall15_2698(7360, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3776), 3);
    add_background_object(create_tbwall15_2698(7424, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7552, 4160), 3);
    add_background_object(create_tbsolidblack_2688(7552, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7680, 4160), 3);
    add_background_object(create_tbsolidblack_2688(7680, 4032), 3);
    add_background_object(create_tbwall15_2698(7808, 4224), 3);
    add_background_object(create_tbwall15_2698(7872, 4224), 3);
    add_background_object(create_tbwall15_2698(7936, 4224), 3);
    add_background_object(create_tbwall15_2698(8000, 4224), 3);
    add_background_object(create_tbwall23_2706(7488, 4032), 3);
    add_background_object(create_tbwall10_2695(7488, 4096), 3);
    add_background_object(create_tbwall10_2695(7488, 4160), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3776), 3);
    add_background_object(create_tbwall24_2737(6912, 3840), 3);
    add_background_object(create_tbwall24_2737(6912, 3904), 3);
    add_background_object(create_tbwall24_2737(6912, 3968), 3);
    add_background_object(create_tbwall24_2737(6912, 4032), 3);
    add_background_object(create_tbwall24_2737(7424, 4096), 3);
    add_background_object(create_tbwall24_2737(7424, 4160), 3);
    add_background_object(create_tbwall24_2737(7424, 4224), 3);
    add_background_object(create_tbwall24_2737(6208, 4032), 3);
    add_background_object(create_tbwall24_2737(6208, 4096), 3);
    add_background_object(create_tbwall24_2737(6208, 4160), 3);
    add_background_object(create_tbwall24_2737(6208, 4224), 3);
    add_background_object(create_tbsolidblack_2688(7808, 4032), 3);
    add_background_object(create_tbsolidblack_2688(7936, 4032), 3);
    add_background_object(create_tbwall24_2737(1920, 3840), 3);
    add_background_object(create_tbwall24_2737(1920, 3904), 3);
    add_background_object(create_tbwall24_2737(1920, 3968), 3);
    add_background_object(create_tbwall15_2698(7744, 4224), 3);
    add_background_object(create_tbwall15_2698(7680, 4224), 3);
    add_background_object(create_tbwall15_2698(7616, 4224), 3);
    add_background_object(create_tbwall15_2698(7552, 4224), 3);
    add_background_object(create_tbwall8_2610(7488, 4256), 3);
    add_background_object(create_tbwall11_2697(6912, 4416), 3);
    add_background_object(create_tbwall11_2697(6976, 4416), 3);
    add_background_object(create_tbwall6_2611(6848, 4352), 3);
    add_background_object(create_tbwall9_2694(6784, 4352), 3);
    add_background_object(create_tbwall6_2611(6848, 4288), 3);
    add_background_object(create_tbwall6_2611(6912, 4288), 3);
    add_background_object(create_tbwall11_2697(7296, 4416), 3);
    add_background_object(create_tbwall11_2697(7360, 4416), 3);
    add_background_object(create_backdrop36_2601(7072, 4288), 3);
    add_background_object(create_backdrop36_2601(7168, 4288), 3);
    add_background_object(create_backdrop36_2601(7264, 4288), 3);
    add_background_object(create_backdrop36_2601(7360, 4288), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3648), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3648), 3);
    add_background_object(create_tbsolidblack_2688(2432, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2432, 4160), 3);
    add_background_object(create_tbsolidblack_2688(2304, 4032), 3);
    add_background_object(create_tbsolidblack_2688(2304, 4160), 3);
    add_background_object(create_tbwall15_2698(2368, 3776), 3);
    add_background_object(create_tbwall15_2698(2432, 3776), 3);
    add_background_object(create_tbwall15_2698(2496, 3776), 3);
    add_background_object(create_tbwall11_2697(2496, 4032), 3);
    add_background_object(create_tbwall11_2697(2432, 4032), 3);
    add_background_object(create_tbwall11_2697(2368, 4032), 3);
    add_background_object(create_tbwall15_2698(2304, 3776), 3);
    add_background_object(create_tbwall11_2697(2304, 4032), 3);
    add_background_object(create_tbwall6_2611(3008, 2240), 3);
    add_background_object(create_tbwall6_2611(3200, 2240), 3);
    add_background_object(create_tbwall11_2697(3392, 2368), 3);
    add_background_object(create_tbwall11_2697(3456, 2368), 3);
    add_background_object(create_tbwall22_2702(3392, 2176), 3);
    add_background_object(create_tbwall15_2698(3456, 2176), 3);
    add_background_object(create_tbwall23_2706(3520, 2176), 3);
    add_background_object(create_tbwall10_2695(3520, 2240), 3);
    add_background_object(create_tblongrailing_2707(1864, 1776), 3);
    add_object(create_hazardfireup_2226(-280, 3207), 3);
    add_object(create_bosssyntaxspiderlegback_2738(-248, 3554), 3);
    add_object(create_bosssyntaxspiderlegback_2738(-216, 3554), 3);
    add_object(create_playerstartingpoint_358(109, 1389), 3);
    add_object(create_levelfireplatform2_2739(-272, 1944), 3);
    add_object(create_levelfireplatformflame1_2644(3276, 2159), 3);
    add_object(create_levelfireplatformflame2_2645(3380, 2159), 3);
    add_object(create_levelfireplatform1_2646(3328, 2160), 3);
    add_object(create_bosssyntaxspiderbody_2740(-230, 3542), 3);
    add_object(create_lockeddoorbarrier_2667(2264, 2400), 3);
    add_object(create_levelpistonplatform1_2717(2880, 2304), 3);
    add_object(create_gimmickclothesline_1970(1800, 1784), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1720, 1792), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1992, 1792), 3);
    add_object(create_gimmickclothesline_1970(1872, 1784), 3);
    add_object(create_bosssyntaxspiderarm_2741(-199, 3564), 3);
    add_object(create_gimmickclothesline_1970(1984, 1784), 3);
    add_object(create_levellift_2647(2160, 2496), 3);
    add_object(create_levelliftbottom_2651(2128, 3456), 3);
    add_object(create_levellifttop_2650(2128, 2496), 3);
    add_object(create_enemyelitemask_2511(1772, 2112), 3);
    add_object(create_bosssyntaxspiderlavacannon_2742(-208, 3544), 3);
    add_object(create_enemyelite_2510(1775, 2111), 3);
    add_object(create_hazardlavafall_2720(2400, 3200), 3);
    add_object(create_hazardlavafall_2720(2400, 3200), 3);
    add_object(create_hazardlavafall_2720(2400, 3200), 3);
    add_object(create_hazardlavafall_2720(2400, 3200), 3);
    add_object(create_switchbuttonright_2714(6912, 2848), 3);
    add_object(create_objectexplosiveblock_2708(6960, 2816), 3);
    add_object(create_objectexplosiveblock_2708(6960, 2752), 3);
    add_object(create_objectexplosiveblock_2708(6960, 2688), 3);
    add_object(create_objectexplosiveblock_2708(6960, 2880), 3);
    add_object(create_objectexplosiveblock_2708(6960, 2944), 3);
    add_object(create_switchbuttonleft_2715(7056, 2976), 3);
    add_object(create_tbwalllightanim_2603(-288, 3720), 3);
    add_object(create_bosssyntaxspider_2743(3327, 3983), 3);
    add_object(create_bosssyntaxspiderlegfront_2744(-292, 3554), 3);
    add_object(create_bosssyntaxspiderarm_2741(-223, 3564), 3);
    add_object(create_bosslavasplash1_2745(3775, 3992), 3);
    add_object(create_bosslavasplash2_2746(3136, 3992), 3);
    add_object(create_bosssyntaxspiderlegfront_2744(-268, 3554), 3);
    add_object(create_bosssyntaxspiderweb_2747(-352, 3544), 3);
    add_object(create_hazardlavafall_2720(3104, 3776), 3);
    add_object(create_hazardlavafall_2720(3104, 3776), 3);
    add_object(create_hazardlavafall_2720(3104, 3776), 3);
    add_object(create_hazardlavafall_2720(3104, 3776), 3);
    add_object(create_hazardlavafall_2720(3808, 3776), 3);
    add_object(create_hazardlavafall_2720(3808, 3776), 3);
    add_object(create_hazardlavafall_2720(3808, 3776), 3);
    add_object(create_hazardlavafall_2720(3808, 3776), 3);
    add_object(create_hazardlavafall_2720(2848, 3200), 3);
    add_object(create_hazardlavafall_2720(2848, 3200), 3);
    add_object(create_hazardlavafall_2720(2848, 3200), 3);
    add_object(create_hazardlavafall_2720(2848, 3200), 3);
    add_object(create_hazardlavafall_2720(2912, 3200), 3);
    add_object(create_hazardlavafall_2720(2912, 3200), 3);
    add_object(create_hazardlavafall_2720(2912, 3200), 3);
    add_object(create_hazardlavafall_2720(2912, 3200), 3);
    add_object(create_hazardlavafall_2720(2976, 3200), 3);
    add_object(create_hazardlavafall_2720(2976, 3200), 3);
    add_object(create_hazardlavafall_2720(2976, 3200), 3);
    add_object(create_hazardlavafall_2720(2976, 3200), 3);
    add_object(create_enemyelitemask_2511(2108, 2048), 3);
    add_object(create_enemyelite_2510(2111, 2047), 3);
    add_object(create_enemylimiter_350(2053, 2018), 3);
    add_object(create_enemylimiter_350(2197, 2018), 3);
    add_object(create_enemylimiter_350(1621, 2082), 3);
    add_object(create_enemylimiter_350(1869, 2082), 3);
    add_object(create_objectpetal_302(2089, 3433), 3);
    add_object(create_objectpetal_302(2041, 3433), 3);
    add_object(create_objectpetal_302(1993, 3433), 3);
    add_object(create_objectpetal_302(1945, 3433), 3);
    add_object(create_objectpetal_302(2089, 3385), 3);
    add_object(create_objectpetal_302(1945, 3385), 3);
    add_object(create_objectpetal_302(2089, 3337), 3);
    add_object(create_objectpetal_302(1945, 3337), 3);
    add_object(create_objectpetal_302(2089, 3289), 3);
    add_object(create_objectpetal_302(2041, 3289), 3);
    add_object(create_objectpetal_302(1993, 3289), 3);
    add_object(create_objectpetal_302(1945, 3289), 3);
    add_object(create_cameratriggerboss_424(3448, 3840), 3);
    add_object(create_levelpistonplatform1_2717(3072, 2240), 3);
    add_object(create_hazardspikesup_2669(3136, 4032), 3);
    add_object(create_hazardspikesup_2669(3168, 4032), 3);
    add_object(create_hazardspikesup_2669(3200, 4032), 3);
    add_object(create_hazardspikesup_2669(3232, 4032), 3);
    add_object(create_hazardspikesup_2669(3648, 4032), 3);
    add_object(create_hazardspikesup_2669(3680, 4032), 3);
    add_object(create_hazardspikesup_2669(3712, 4032), 3);
    add_object(create_hazardspikesup_2669(3744, 4032), 3);
    add_object(create_enemyseeker_2648(2783, 1848), 3);
    add_object(create_effectwarning_1513(-236, 3624), 3);
    add_object(create_npcsyntaxleftarm_2517(-279, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-263, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-247, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-231, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-215, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-199, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-183, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-295, 3458), 3);
    add_object(create_npcsyntaxleftarm_2517(-311, 3458), 3);
    add_object(create_npcsyntaxrightarm_2518(-279, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-263, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-247, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-231, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-215, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-199, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-183, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-295, 3466), 3);
    add_object(create_npcsyntaxrightarm_2518(-311, 3466), 3);
    add_object(create_npcsyntax_2519(-320, 3405), 3);
    add_object(create_hazardspikesup_2669(2560, 3424), 3);
    add_object(create_hazardspikesup_2669(2592, 3424), 3);
    add_object(create_hazardspikesup_2669(2624, 3424), 3);
    add_object(create_hazardspikesup_2669(2656, 3424), 3);
    add_object(create_objectcrystal_279(2613, 3346), 3);
    add_object(create_objectcrystal_279(2637, 3346), 3);
    add_object(create_objectcrystal_279(2661, 3346), 3);
    add_object(create_objectcrystal_279(2589, 3346), 3);
    add_object(create_hazardspikesup_2669(3200, 3456), 3);
    add_object(create_hazardspikesup_2669(3232, 3456), 3);
    add_object(create_enemypushup_2656(3164, 3455), 3);
    add_object(create_enemypushuphitbox_2653(3165, 3377), 3);
    add_object(create_hazardfloortrap_2748(2752, 2488), 3);
    add_object(create_hazardfloortrap_2748(3520, 1976), 3);
    add_object(create_laddertop_357(2540, 2263), 3);
    add_object(create_bossrobosquidleftarm_2749(4172, 1988), 3);
    add_object(create_bossrobosquidleftarm_2749(4164, 2004), 3);
    add_object(create_bossrobosquidleftarm_2749(4148, 2020), 3);
    add_object(create_bossrobosquidleftarm_2749(4132, 2036), 3);
    add_object(create_bossrobosquidleftarm_2749(4116, 2052), 3);
    add_object(create_bossrobosquidleftarm_2749(4108, 2068), 3);
    add_object(create_bossrobosquidleftarm_2749(4116, 2084), 3);
    add_object(create_bossrobosquidrightarm_2750(4212, 1988), 3);
    add_object(create_bossrobosquidrightarm_2750(4220, 2004), 3);
    add_object(create_bossrobosquidrightarm_2750(4236, 2020), 3);
    add_object(create_bossrobosquidrightarm_2750(4252, 2036), 3);
    add_object(create_bossrobosquidrightarm_2750(4268, 2052), 3);
    add_object(create_bossrobosquidrightarm_2750(4276, 2068), 3);
    add_object(create_bossrobosquidrightarm_2750(4268, 2084), 3);
    add_object(create_bossrobosquidglass_2751(4192, 1959), 3);
    add_object(create_bossrobosquid_2752(4192, 1959), 3);
    add_object(create_bossrobosquidjet_2753(4130, 1568), 3);
    add_object(create_enemylimiter_350(3957, 1946), 3);
    add_object(create_enemylimiter_350(4453, 1954), 3);
    add_object(create_redspringright_441(3712, 1984), 3);
    add_object(create_redspringright_441(3712, 2016), 3);
    add_object(create_enemylavasquid_2721(434, 1456), 3);
    add_object(create_enemylavasquid_2721(674, 1576), 3);
    add_object(create_enemylavasquid_2721(898, 1688), 3);
    add_object(create_enemyseeker_2648(1343, 1824), 3);
    add_object(create_enemyseeker_2648(1391, 1864), 3);
    add_object(create_enemylimiter_350(405, 1458), 3);
    add_object(create_enemylimiter_350(645, 1578), 3);
    add_object(create_enemylimiter_350(869, 1690), 3);
    add_object(create_enemylimiter_350(637, 1458), 3);
    add_object(create_enemylimiter_350(877, 1578), 3);
    add_object(create_enemylimiter_350(1101, 1690), 3);
    add_object(create_monitormetalshield_329(1472, 1952), 3);
    add_object(create_objectpetal_302(2785, 2465), 3);
    add_object(create_objectpetal_302(2721, 2465), 3);
    add_object(create_objectpetal_302(2657, 2465), 3);
    add_object(create_objectcrystal_279(4589, 1882), 3);
    add_object(create_objectcrystal_279(4589, 1946), 3);
    add_object(create_objectcrystal_279(4589, 2010), 3);
    add_object(create_objectpetal_302(2649, 1897), 3);
    add_object(create_objectpetal_302(2889, 1897), 3);
    add_object(create_objectpetal_302(2385, 1833), 3);
    add_object(create_bosssyntaxgrappleline_2754(-270, 3416), 3);
    add_object(create_lockeddoorbarrier_2667(7512, 4320), 3);
    add_object(create_lockeddoorterminal_2606(7456, 4416), 3);
    add_object(create_objectkeycard_2643(6912, 4392), 3);
    add_object(create_monitorcrate_409(7152, 4384), 3);
    add_object(create_monitorcrate_409(7120, 4384), 3);
    add_object(create_monitorcrate_409(7088, 4384), 3);
    add_object(create_levellavacascadeend_2755(7424, 4304), 3);
    add_object(create_minibosstrapdoor_2722(4416, 3824), 3);
    add_object(create_objectpetal_302(3937, 4009), 3);
    add_object(create_objectpetal_302(4001, 4009), 3);
    add_object(create_objectpetal_302(4065, 4009), 3);
    add_object(create_objectpetal_302(4129, 4009), 3);
    add_object(create_objectpetal_302(5473, 4137), 3);
    add_object(create_objectpetal_302(5537, 4137), 3);
    add_object(create_objectpetal_302(5601, 4137), 3);
    add_object(create_objectpetal_302(5665, 4137), 3);
    add_object(create_playerblocker_2756(6944, 4256), 3);
    add_object(create_playerblocker_2756(7008, 4232), 3);
    add_object(create_playerblocker_2756(7072, 4232), 3);
    add_object(create_playerblocker_2756(7136, 4232), 3);
    add_object(create_playerblocker_2756(7200, 4232), 3);
    add_object(create_playerblocker_2756(7264, 4232), 3);
    add_object(create_playerblocker_2756(7328, 4232), 3);
    add_object(create_playerblocker_2756(7392, 4232), 3);
    add_object(create_objectcodec_354(2522, 1853), 3);
    add_object(create_objectcodec_354(3458, 2309), 3);
    add_object(create_gimmickclothesline_1970(1944, 1784), 3);
    add_object(create_objectfuel_528(3876, 4020), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_tbwall8_2610(3776, 3840), 4);
    add_background_object(create_tbwall8_2610(3072, 3840), 4);
    add_background_object(create_tbwall15_2698(3136, 3776), 4);
    add_background_object(create_tbwall15_2698(3712, 3776), 4);
    add_background_object(create_tbwall15_2698(3200, 3776), 4);
    add_background_object(create_tbwall15_2698(3264, 3776), 4);
    add_background_object(create_tbwall15_2698(3648, 3776), 4);
    add_background_object(create_tbwall11_2697(3136, 4160), 4);
    add_background_object(create_tbwall11_2697(3712, 4160), 4);
    add_background_object(create_tbsolidblack_2688(3200, 3648), 4);
    add_background_object(create_tbsolidblack_2688(3584, 3648), 4);
    add_background_object(create_tbwall15_2698(2944, 3200), 4);
    add_background_object(create_tbwall11_2697(2944, 3584), 4);
    add_background_object(create_tbwall11_2697(2560, 3584), 4);
    add_background_object(create_tbwall15_2698(2368, 3200), 4);
    add_background_object(create_tbwall11_2697(2368, 3584), 4);
    add_background_object(create_tbwall11_2697(2624, 3584), 4);
    add_background_object(create_tbwall11_2697(2816, 3584), 4);
    add_background_object(create_tbwall11_2697(2880, 3584), 4);
    add_background_object(create_tbwall15_2698(2816, 3200), 4);
    add_background_object(create_tbwall15_2698(2880, 3200), 4);
    add_background_object(create_tbwall8_2610(2944, 3264), 4);
    add_background_object(create_tbwall8_2610(2880, 3264), 4);
    add_background_object(create_tbwall8_2610(2816, 3264), 4);
    add_background_object(create_tbwall8_2610(2368, 3264), 4);
    add_background_object(create_tbwall19_2701(3328, 3776), 4);
    add_background_object(create_tbwall9_2694(3328, 3712), 4);
    add_background_object(create_tbwall9_2694(3328, 3648), 4);
    add_background_object(create_tbwall22_2702(3520, 3776), 4);
    add_background_object(create_tbwall10_2695(3520, 3712), 4);
    add_background_object(create_tbwall10_2695(3520, 3648), 4);
    add_background_object(create_tbwall15_2698(3072, 3776), 4);
    add_background_object(create_tbwall11_2697(3072, 4160), 4);
    add_background_object(create_tbwall11_2697(3776, 4160), 4);
    add_background_object(create_tbwall15_2698(3776, 3776), 4);
    add_background_object(create_tbwall22_2702(6976, 4032), 4);
    add_background_object(create_tbwall10_2695(6976, 3840), 4);
    add_background_object(create_tbwall10_2695(6976, 3904), 4);
    add_background_object(create_tbwall10_2695(6976, 3968), 4);
    add_background_object(create_tbwall24_2737(6912, 3840), 4);
    add_background_object(create_tbwall24_2737(6912, 3904), 4);
    add_background_object(create_tbwall24_2737(6912, 3968), 4);
    add_background_object(create_tbwall24_2737(6912, 4032), 4);
    add_background_object(create_tbwall10_2695(7488, 4096), 4);
    add_background_object(create_tbwall10_2695(7488, 4160), 4);
    add_background_object(create_tbwall24_2737(7424, 4096), 4);
    add_background_object(create_tbwall24_2737(7424, 4160), 4);
    add_background_object(create_tbwall24_2737(7424, 4224), 4);
    add_background_object(create_tbwall20_2703(6144, 4032), 4);
    add_background_object(create_tbwall9_2694(6144, 4096), 4);
    add_background_object(create_tbwall9_2694(6144, 4160), 4);
    add_background_object(create_tbwall9_2694(6144, 4224), 4);
    add_background_object(create_tbwall24_2737(6208, 4032), 4);
    add_background_object(create_tbwall24_2737(6208, 4096), 4);
    add_background_object(create_tbwall24_2737(6208, 4160), 4);
    add_background_object(create_tbwall24_2737(6208, 4224), 4);
    add_background_object(create_tbwall22_2702(7488, 4224), 4);
    add_object(create_metaldoorfront_2670(24, 1360), 4);
    add_object(create_lockeddoorfront_2671(2264, 2448), 4);
    add_object(create_lockeddoorseal_2672(2268, 2456), 4);
    add_object(create_hazardlavapit_2719(3168, 4096), 4);
    add_object(create_hazardlavapit_2719(3104, 4096), 4);
    add_object(create_hazardlavapit_2719(3296, 4096), 4);
    add_object(create_hazardlavapit_2719(3232, 4096), 4);
    add_object(create_hazardlavapit_2719(3424, 4096), 4);
    add_object(create_hazardlavapit_2719(3360, 4096), 4);
    add_object(create_hazardlavapit_2719(3552, 4096), 4);
    add_object(create_hazardlavapit_2719(3488, 4096), 4);
    add_object(create_hazardlavapit_2719(3680, 4096), 4);
    add_object(create_hazardlavapit_2719(3616, 4096), 4);
    add_object(create_hazardlavapit_2719(3808, 4096), 4);
    add_object(create_hazardlavapit_2719(3744, 4096), 4);
    add_object(create_hazardlavapit_2719(2784, 3520), 4);
    add_object(create_hazardlavapit_2719(2720, 3520), 4);
    add_object(create_hazardlavapit_2719(2912, 3520), 4);
    add_object(create_hazardlavapit_2719(2848, 3520), 4);
    add_object(create_hazardlavapit_2719(3040, 3520), 4);
    add_object(create_hazardlavapit_2719(2976, 3520), 4);
    add_object(create_hazardlavapit_2719(2528, 3520), 4);
    add_object(create_hazardlavapit_2719(2464, 3520), 4);
    add_object(create_hazardlavapit_2719(2656, 3520), 4);
    add_object(create_hazardlavapit_2719(2592, 3520), 4);
    add_object(create_hazardlavapit_2719(2400, 3520), 4);
    add_object(create_metaldoorfront_2670(7960, 4368), 4);
    add_object(create_lockeddoorfront_2671(7512, 4368), 4);
    add_object(create_lockeddoorseal_2672(7516, 4376), 4);
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
    add_object(create_hazardspikesup_2669(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-368, 9), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(3456, 4071), 5);
    add_object(create_cameralimitbossleft_421(3072, 3944), 5);
    add_object(create_cameralimitbossright_422(3839, 3944), 5);
    add_object(create_cameralimitbosstop_423(3456, 3776), 5);
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
    add_object(create_mediumbubble_769(-468, 316), 5);
    add_object(create_levelheatsky_2757(0, 0), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
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
    add_object(create_guikeycards_2673(38, 231), 6);
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
    add_object(create_guikeycardicon_2674(16, 228), 6);
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
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
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
    loop_p_debris_running = false;
    loop_p_debris_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
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
    loop_warning_running = false;
    loop_warning_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_46, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_46, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_46, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_46, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_46, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_46, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_46, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_46, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_46, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_46, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_46, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_46, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_46, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_46, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_46, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_46, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_46, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_46, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_46, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_46, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_46, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_46, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_46, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_46, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_46, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_46, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_46, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_46, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_46, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_46, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_46, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_46, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_46, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_46, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_46, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_46, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_46, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_46, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_46, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_46, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_46, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_46, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_46, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_46, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_46, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_46, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_46, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_46, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_46, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_46, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_46, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_46, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_46, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_46, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1734_46 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 = true;
    not_always_2044_46 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_boss_syntax_grappler_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_809_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1420_45 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1 = false;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1635_44 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1448_45 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
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
    not_always_1677_44 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1724_45 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    once_condition_1728_46 = false;
    not_always_1447_13 = loop_count;
    not_always_1459_46 = loop_count;
    not_always_815_13 = loop_count;
    not_always_1421_45 = loop_count;
    not_always_929_13 = loop_count;
    not_always_2136_46 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
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
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    once_condition_1876_46 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1896_46 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    not_always_1678_44 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_1663_46 = loop_count;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
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
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
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
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1 = true;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_1868_46 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1 = false;
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
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    once_condition_1729_46 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1 = false;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_59_13 = loop_count;
    not_always_1634_44 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_11366()
{
    // event 336_47
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1)) goto event_336_47_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_31.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_31)) goto event_336_47_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_single(qualifier_31, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
    }
    event_336_47_end: ;
}
