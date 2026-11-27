#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11171()
{
    // event 1768_46
    {
        if (!(group_main_engine_1)) goto event_1768_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1768_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(13)*4);
        }
    }
    event_1768_46_end: ;
}
void Frames::event_func_11172()
{
    // event 1769_46
    {
        if (!(group_main_engine_1)) goto event_1769_46_end;
        if (!((((Active*)get_instance(bossrobosquidglass_2751_instances))->alterables->values.get(1)) >= (1))) goto event_1769_46_end;
        ((Active*)get_instance(bossrobosquidglass_2751_instances))->set_direction(1);
    }
    event_1769_46_end: ;
}
void Frames::event_func_11173()
{
    // event 1770_46
    {
        if (!(group_main_engine_1)) goto event_1770_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (2))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1770_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1770_46_end: ;
}
void Frames::event_func_11174()
{
    // event 1771_46
    {
        if (!(group_main_engine_1)) goto event_1771_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) < (18))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1771_46_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1771_46_end;
        FrameObject * single_instance_1771_46_0; single_instance_1771_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1771_46_0 == NULL)
                    single_instance_1771_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1771_46_0))->set_x(((Active*)single_instance_1771_46_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1771_46_0))->set_y(((Active*)single_instance_1771_46_0)->get_y()-40+randrange(81));
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(15, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1771_46_1_end;
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
        dynamic_1771_46_1_end: ;
    }
    event_1771_46_end: ;
}
void Frames::event_func_11175()
{
    // event 1772_46
    {
        if (!(group_main_engine_1)) goto event_1772_46_end;
        bossrobosquid_2752_instances.clear_selection();
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) >= (18))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) != (1))) { it.deselect(); continue; }
        }
        if (!bossrobosquid_2752_instances.has_selection()) goto event_1772_46_end;
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(bossrobosquid_2752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 20);
        }
        FrameObject * single_instance_1772_46_0; single_instance_1772_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrobosquid_2752_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1772_46_0 == NULL)
                    single_instance_1772_46_0 = new_obj;
            }
        }
    }
    event_1772_46_end: ;
}
void Frames::event_func_11176()
{
    // event 1773_46
    {
        if (!(group_main_engine_1)) goto event_1773_46_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1773_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1773_46_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
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
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->set_visible(true);
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_visible(false);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_visible(false);
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1773_46_end: ;
}
void Frames::event_func_11177()
{
    // event 1776_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1)) goto event_1776_46_end;
        ((Active*)get_instance(hazardfireup_2226_instances))->move_back();
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)+((global_values->get(3)*10)%math_helper%128));
        }
    }
    event_1776_46_end: ;
}
void Frames::event_func_11178()
{
    // event 1777_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1)) goto event_1777_46_end;
        hazardlavafall_2720_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(hazardlavafall_2720_instances, player_389_instances)) goto event_1777_46_end;
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1777_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1777_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1777_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1777_46_end;
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
    }
    event_1777_46_end: ;
}
void Frames::event_func_11179()
{
    // event 1778_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1)) goto event_1778_46_end;
        hazardlavafall_2720_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(hazardlavafall_2720_instances, player_389_instances)) goto event_1778_46_end;
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!hazardlavafall_2720_instances.has_selection()) goto event_1778_46_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1778_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1778_46_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1778_46_end;
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
    }
    event_1778_46_end: ;
}
void Frames::event_func_11180()
{
    // event 1779_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1779_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1779_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_visible(false);
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_visible(false);
    }
    event_1779_46_end: ;
}
void Frames::event_func_11181()
{
    // event 1780_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1780_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1780_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_y());
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_action_x()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_action_y()-18);
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_y());
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_x()+44*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_y());
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_x()+((Active*)*it)->alterables->values.get(0)*24*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-12*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_y());
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(23, ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_x());
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(24, ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_y());
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1780_46_end: ;
}
void Frames::event_func_11182()
{
    // event 1781_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1781_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1781_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1781_46_end: ;
}
void Frames::event_func_11183()
{
    // event 1782_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1782_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1782_46_end;
        FrameObject * single_instance_1782_46_0; single_instance_1782_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1782_46_0 == NULL)
                    single_instance_1782_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1782_46_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1782_46_0))->alterables->values.set(0, -90);
        ((Active*)((Active*)single_instance_1782_46_0))->alterables->values.set(2, 7);
    }
    event_1782_46_end: ;
}
void Frames::event_func_11184()
{
    // event 1783_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1783_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1783_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1783_46_end;
        FrameObject * single_instance_1783_46_0; single_instance_1783_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderarm_2741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1783_46_0 == NULL)
                    single_instance_1783_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1783_46_0))->alterables->values.set(2, 0);
    }
    event_1783_46_end: ;
}
void Frames::event_func_11185()
{
    // event 1784_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1784_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1784_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1784_46_end;
        FrameObject * single_instance_1784_46_0; single_instance_1784_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderarm_2741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1784_46_0 == NULL)
                    single_instance_1784_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1784_46_0))->alterables->values.set(2, 1);
    }
    event_1784_46_end: ;
}
void Frames::event_func_11186()
{
    // event 1785_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1785_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1785_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1785_46_end;
        FrameObject * single_instance_1785_46_0; single_instance_1785_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderlegback_2738_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1785_46_0 == NULL)
                    single_instance_1785_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1785_46_0))->move_back();
        ((Active*)((Active*)single_instance_1785_46_0))->alterables->values.set(2, 3);
    }
    event_1785_46_end: ;
}
void Frames::event_func_11187()
{
    // event 1786_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1786_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1786_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1786_46_end;
        FrameObject * single_instance_1786_46_0; single_instance_1786_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderlegback_2738_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1786_46_0 == NULL)
                    single_instance_1786_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1786_46_0))->move_back();
        ((Active*)((Active*)single_instance_1786_46_0))->alterables->values.set(2, 4);
    }
    event_1786_46_end: ;
}
void Frames::event_func_11188()
{
    // event 1787_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1787_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1787_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1787_46_end;
        FrameObject * single_instance_1787_46_0; single_instance_1787_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderlegfront_2744_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1787_46_0 == NULL)
                    single_instance_1787_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1787_46_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1787_46_0))->alterables->values.set(0, -90);
        ((Active*)((Active*)single_instance_1787_46_0))->alterables->values.set(2, 5);
    }
    event_1787_46_end: ;
}
void Frames::event_func_11189()
{
    // event 1788_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1788_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1788_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1788_46_end;
        FrameObject * single_instance_1788_46_0; single_instance_1788_46_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssyntaxspiderlegfront_2744_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1788_46_0 == NULL)
                    single_instance_1788_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_46_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1788_46_0))->alterables->values.set(0, -90);
        ((Active*)((Active*)single_instance_1788_46_0))->alterables->values.set(2, 6);
    }
    event_1788_46_end: ;
}
void Frames::event_func_11190()
{
    // event 1789_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1789_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1789_46_end;
        FrameObject * single_instance_1789_46_0; single_instance_1789_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderbody_2740_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssyntaxhook_2726(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_1789_46_0 == NULL)
                    single_instance_1789_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1789_46_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1789_46_0))->alterables->values.set(0, -90);
        ((Active*)((Active*)single_instance_1789_46_0))->move_back();
        ((Active*)((Active*)single_instance_1789_46_0))->alterables->values.set(2, 2);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1789_46_end: ;
}
void Frames::event_func_11191()
{
    // event 1790_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1790_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1790_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        spread_value(bosssyntaxhook_2726_instances, 1, 0);
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-72);
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
    }
    event_1790_46_end: ;
}
void Frames::event_func_11192()
{
    // event 1791_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1791_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (3))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1791_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1791_46_end: ;
}
void Frames::event_func_11193()
{
    // event 1792_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1792_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1792_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-1, 0));
        }
    }
    event_1792_46_end: ;
}
void Frames::event_func_11194()
{
    // event 1793_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1793_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1793_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1793_46_end: ;
}
void Frames::event_func_11195()
{
    // event 1794_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1794_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1794_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1794_46_end: ;
}
void Frames::event_func_11196()
{
    // event 1795_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1795_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1795_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1795_46_end: ;
}
void Frames::event_func_11197()
{
    // event 1796_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1796_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1796_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1796_46_end: ;
}
void Frames::event_func_11198()
{
    // event 1797_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1797_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1797_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-10);
        }
    }
    event_1797_46_end: ;
}
void Frames::event_func_11199()
{
    // event 1798_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1798_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1798_46_end;
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-10);
        }
    }
    event_1798_46_end: ;
}
void Frames::event_func_11200()
{
    // event 1799_46
    bool or_result_1799_46 = false;
    bool or_temp_result_1799_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto or_event_1799_46_0_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto or_event_1799_46_0_end;
        or_result_1799_46 = true;
        or_temp_result_1799_46_0 = true;
    }
    or_event_1799_46_0_end: ;
    bosssyntaxhook_2726_instances.clear_saved_selection();
    if (or_temp_result_1799_46_0) {
        bosssyntaxhook_2726_instances.save_selection();
    }
    // event 1799_46
    bool or_temp_result_1799_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto or_event_1799_46_1_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto or_event_1799_46_1_end;
        or_result_1799_46 = true;
        or_temp_result_1799_46_1 = true;
        or_event_1799_46_1_end: ;
        if (or_temp_result_1799_46_1) {
            bosssyntaxhook_2726_instances.save_selection();
        }
        if (!or_result_1799_46) goto or_final_or_event_1799_46_1_end;
        bosssyntaxhook_2726_instances.empty_selection();
        if (or_temp_result_1799_46_0 || or_temp_result_1799_46_1) {
            bosssyntaxhook_2726_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_1799_46_1_end: ;
}
void Frames::event_func_11201()
{
    // event 1800_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1800_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1800_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1800_46_end;
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1800_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1800_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1800_46_end: ;
}
void Frames::event_func_11202()
{
    // event 1801_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1801_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1801_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1801_46_end;
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_x()+((Active*)*it)->alterables->values.get(0)*24*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-12*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_y());
        }
    }
    event_1801_46_end: ;
}
void Frames::event_func_11203()
{
    // event 1802_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1802_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1802_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1802_46_end;
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1802_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1802_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1802_46_end: ;
}
void Frames::event_func_11204()
{
    // event 1803_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1803_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1803_46_end;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderarm_2741_instances.has_selection()) goto event_1803_46_end;
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_x()+((Active*)*it)->alterables->values.get(0)*24*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-12*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_y());
        }
    }
    event_1803_46_end: ;
}
void Frames::event_func_11205()
{
    // event 1804_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1804_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1804_46_end;
        {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances));
            if (parent == NULL) goto pos_end_1804_46_0;
            ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1804_46_0: ;
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_visible(true);
    }
    event_1804_46_end: ;
}
void Frames::event_func_11206()
{
    // event 1805_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1805_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1805_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_y());
    }
    event_1805_46_end: ;
}
void Frames::event_func_11207()
{
    // event 1806_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1806_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1806_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1806_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1806_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1806_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1806_46_end: ;
}
void Frames::event_func_11208()
{
    // event 1807_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1807_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1807_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1807_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(23)+44*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(24));
        }
    }
    event_1807_46_end: ;
}
void Frames::event_func_11209()
{
    // event 1808_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1808_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1808_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1808_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1808_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1808_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1808_46_end: ;
}
void Frames::event_func_11210()
{
    // event 1809_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1809_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1809_46_end;
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegback_2738_instances.has_selection()) goto event_1809_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(23)+44*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(24));
        }
    }
    event_1809_46_end: ;
}
void Frames::event_func_11211()
{
    // event 1810_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1810_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1810_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1810_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1810_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1810_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1810_46_end: ;
}
void Frames::event_func_11212()
{
    // event 1811_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1811_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1811_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1811_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(23)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(24));
        }
    }
    event_1811_46_end: ;
}
void Frames::event_func_11213()
{
    // event 1812_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1812_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1812_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1812_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances, it.current_index));
            if (parent == NULL) goto pos_end_1812_46_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1812_46_0: ;
        }
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1812_46_end: ;
}
void Frames::event_func_11214()
{
    // event 1813_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1813_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1813_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderlegfront_2744_instances.has_selection()) goto event_1813_46_end;
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(23)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(24));
        }
    }
    event_1813_46_end: ;
}
void Frames::event_func_11215()
{
    // event 1814_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1814_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1814_46_end;
        {
            FrameObject * parent = ((Active*)get_single(bosssyntaxhook_2726_instances));
            if (parent == NULL) goto pos_end_1814_46_0;
            ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1814_46_0: ;
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_visible(true);
    }
    event_1814_46_end: ;
}
void Frames::event_func_11216()
{
    // event 1815_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1815_46_end;
        bosssyntaxhook_2726_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxhook_2726_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxhook_2726_instances.has_selection()) goto event_1815_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_action_x()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_action_y()-18);
    }
    event_1815_46_end: ;
}
void Frames::event_func_11217()
{
    // event 1816_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1816_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) > (80))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1816_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1 = true;
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1816_46_end: ;
}
void Frames::event_func_11218()
{
    // event 1817_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1817_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1817_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(15), ((Active*)*it)->alterables->values.get(9)));
            ((Active*)*it)->alterables->values.set(15, get_min(((Active*)*it)->alterables->values.get(15)+0.3, 12));
        }
    }
    event_1817_46_end: ;
}
void Frames::event_func_11219()
{
    // event 1818_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1)) goto event_1818_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1818_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) <= (0))) goto event_1818_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(5, 1);
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_dropping_1 = false;
    
        media.play(str_data_voices_eng_sx_sx_lost_ogg_200, 20-1);
    }
    event_1818_46_end: ;
}
void Frames::event_func_11220()
{
    // event 1819_46
    bool or_result_1819_46 = false;
    bool or_temp_result_1819_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1819_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1819_46_0_end;
        or_result_1819_46 = true;
        or_temp_result_1819_46_0 = true;
    }
    or_event_1819_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1819_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1819_46
    bool or_temp_result_1819_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1819_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (5))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1819_46_1_end;
        or_result_1819_46 = true;
        or_temp_result_1819_46_1 = true;
    }
    or_event_1819_46_1_end: ;
    if (or_temp_result_1819_46_1) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1819_46
    bool or_temp_result_1819_46_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1819_46_2_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1819_46_2_end;
        or_result_1819_46 = true;
        or_temp_result_1819_46_2 = true;
        or_event_1819_46_2_end: ;
        if (or_temp_result_1819_46_2) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1819_46) goto or_final_or_event_1819_46_2_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1819_46_0 || or_temp_result_1819_46_1 || or_temp_result_1819_46_2) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    or_final_or_event_1819_46_2_end: ;
}
void Frames::event_func_11221()
{
    // event 1820_46
    bool or_result_1820_46 = false;
    bool or_temp_result_1820_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1820_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances, default_active_instance))->alterables->values.get(0)-100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1820_46_0_end;
        or_result_1820_46 = true;
        or_temp_result_1820_46_0 = true;
    }
    or_event_1820_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1820_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1820_46
    bool or_temp_result_1820_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1820_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances, default_active_instance))->alterables->values.get(0)-100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1820_46_1_end;
        or_result_1820_46 = true;
        or_temp_result_1820_46_1 = true;
    }
    or_event_1820_46_1_end: ;
    if (or_temp_result_1820_46_1) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1820_46
    bool or_temp_result_1820_46_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1820_46_2_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances, default_active_instance))->alterables->values.get(0)-100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1820_46_2_end;
        or_result_1820_46 = true;
        or_temp_result_1820_46_2 = true;
        or_event_1820_46_2_end: ;
        if (or_temp_result_1820_46_2) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1820_46) goto or_final_or_event_1820_46_2_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1820_46_0 || or_temp_result_1820_46_1 || or_temp_result_1820_46_2) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    or_final_or_event_1820_46_2_end: ;
}
void Frames::event_func_11222()
{
    // event 1821_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1821_46_end;
        if (!((((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(10)%math_helper%4) == (2))) goto event_1821_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1821_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
        }
    }
    event_1821_46_end: ;
}
void Frames::event_func_11223()
{
    // event 1822_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1822_46_end;
        if (!((((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(10)%math_helper%4) == (2))) goto event_1822_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) >= (10))) goto event_1822_46_end;
        if (!((hazardlavafall2_2724_instances.size()) == (0))) goto event_1822_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1822_46_end: ;
}
void Frames::event_func_11224()
{
    // event 1823_46
    bool or_result_1823_46 = false;
    bool or_temp_result_1823_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1823_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (3))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1823_46_0_end;
        or_result_1823_46 = true;
        or_temp_result_1823_46_0 = true;
    }
    or_event_1823_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1823_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1823_46
    bool or_temp_result_1823_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1823_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (9))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1823_46_1_end;
        or_result_1823_46 = true;
        or_temp_result_1823_46_1 = true;
    }
    or_event_1823_46_1_end: ;
    if (or_temp_result_1823_46_1) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1823_46
    bool or_temp_result_1823_46_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1823_46_2_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (13))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1823_46_2_end;
        or_result_1823_46 = true;
        or_temp_result_1823_46_2 = true;
        or_event_1823_46_2_end: ;
        if (or_temp_result_1823_46_2) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1823_46) goto or_final_or_event_1823_46_2_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1823_46_0 || or_temp_result_1823_46_1 || or_temp_result_1823_46_2) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
    }
    or_final_or_event_1823_46_2_end: ;
}
void Frames::event_func_11225()
{
    // event 1824_46
    bool or_result_1824_46 = false;
    bool or_temp_result_1824_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1824_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances, default_active_instance))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1824_46_0_end;
        or_result_1824_46 = true;
        or_temp_result_1824_46_0 = true;
    }
    or_event_1824_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1824_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1824_46
    bool or_temp_result_1824_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1824_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances, default_active_instance))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1824_46_1_end;
        or_result_1824_46 = true;
        or_temp_result_1824_46_1 = true;
    }
    or_event_1824_46_1_end: ;
    if (or_temp_result_1824_46_1) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1824_46
    bool or_temp_result_1824_46_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1824_46_2_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances, default_active_instance))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1824_46_2_end;
        or_result_1824_46 = true;
        or_temp_result_1824_46_2 = true;
        or_event_1824_46_2_end: ;
        if (or_temp_result_1824_46_2) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1824_46) goto or_final_or_event_1824_46_2_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1824_46_0 || or_temp_result_1824_46_1 || or_temp_result_1824_46_2) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    or_final_or_event_1824_46_2_end: ;
}
void Frames::event_func_11226()
{
    // event 1825_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1825_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1825_46_end;
        if (!((((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(10)%math_helper%4) == (0))) goto event_1825_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)) == (0))) goto event_1825_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1825_46_end: ;
}
void Frames::event_func_11227()
{
    // event 1826_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1826_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (4))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1826_46_end;
        if (!((((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(10)%math_helper%4) == (0))) goto event_1826_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) <= (0))) goto event_1826_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1826_46_end: ;
}
void Frames::event_func_11228()
{
    // event 1827_46
    bool or_result_1827_46 = false;
    bool or_temp_result_1827_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1827_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (7))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1827_46_0_end;
        or_result_1827_46 = true;
        or_temp_result_1827_46_0 = true;
    }
    or_event_1827_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1827_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1827_46
    bool or_temp_result_1827_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1827_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (15))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1827_46_1_end;
        or_result_1827_46 = true;
        or_temp_result_1827_46_1 = true;
        or_event_1827_46_1_end: ;
        if (or_temp_result_1827_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1827_46) goto or_final_or_event_1827_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1827_46_0 || or_temp_result_1827_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    or_final_or_event_1827_46_1_end: ;
}
void Frames::event_func_11229()
{
    // event 1828_46
    bool or_result_1828_46 = false;
    bool or_temp_result_1828_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1828_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1828_46_0_end;
        or_result_1828_46 = true;
        or_temp_result_1828_46_0 = true;
    }
    or_event_1828_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1828_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1828_46
    bool or_temp_result_1828_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1828_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1828_46_1_end;
        or_result_1828_46 = true;
        or_temp_result_1828_46_1 = true;
        or_event_1828_46_1_end: ;
        if (or_temp_result_1828_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1828_46) goto or_final_or_event_1828_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1828_46_0 || or_temp_result_1828_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        bosssyntaxspiderlavacannon_2742_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlavacannon_2742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    or_final_or_event_1828_46_1_end: ;
}
void Frames::event_func_11230()
{
    // event 1829_46
    bool or_result_1829_46 = false;
    bool or_temp_result_1829_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1829_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1829_46_0_end;
        or_result_1829_46 = true;
        or_temp_result_1829_46_0 = true;
    }
    or_event_1829_46_0_end: ;
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1829_46_0) {
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1829_46
    bool or_temp_result_1829_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1829_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1829_46_1_end;
        or_result_1829_46 = true;
        or_temp_result_1829_46_1 = true;
        or_event_1829_46_1_end: ;
        if (or_temp_result_1829_46_1) {
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1829_46) goto or_final_or_event_1829_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        if (or_temp_result_1829_46_0 || or_temp_result_1829_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    or_final_or_event_1829_46_1_end: ;
}
void Frames::event_func_11231()
{
    // event 1830_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1830_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (16))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1830_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 1);
        }
    }
    event_1830_46_end: ;
}
void Frames::event_func_11232()
{
    // event 1831_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1831_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1831_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)-0.2, -4));
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)+0.05, 1));
    }
    event_1831_46_end: ;
}
void Frames::event_func_11233()
{
    // event 1832_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1832_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1832_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)+0.2, 4));
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)+0.05, 1));
    }
    event_1832_46_end: ;
}
void Frames::event_func_11234()
{
    // event 1833_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1833_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1833_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)) < (0))) goto event_1833_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)+0.2, 0));
    }
    event_1833_46_end: ;
}
void Frames::event_func_11235()
{
    // event 1834_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1834_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1834_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)) > (0))) goto event_1834_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)-0.2, 0));
    }
    event_1834_46_end: ;
}
void Frames::event_func_11236()
{
    // event 1835_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1835_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1835_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)-0.05, 0));
    }
    event_1835_46_end: ;
}
void Frames::event_func_11237()
{
    // event 1836_46
    bool or_result_1836_46 = false;
    bool or_temp_result_1836_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1836_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1836_46_0_end;
        bosssyntaxspiderbody_2740_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderbody_2740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderbody_2740_instances.has_selection()) goto or_event_1836_46_0_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosslavasplash1_2745_instances, default_active_instance))->alterables->values.get(0)-100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1836_46_0_end;
        or_result_1836_46 = true;
        or_temp_result_1836_46_0 = true;
    }
    or_event_1836_46_0_end: ;
    bosssyntaxspiderbody_2740_instances.clear_saved_selection();
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1836_46_0) {
        bosssyntaxspiderbody_2740_instances.save_selection();
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1836_46
    bool or_temp_result_1836_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1836_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1836_46_1_end;
        bosssyntaxspiderbody_2740_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderbody_2740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderbody_2740_instances.has_selection()) goto or_event_1836_46_1_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(bosslavasplash2_2746_instances, default_active_instance))->alterables->values.get(0)+100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1836_46_1_end;
        or_result_1836_46 = true;
        or_temp_result_1836_46_1 = true;
        or_event_1836_46_1_end: ;
        if (or_temp_result_1836_46_1) {
            bosssyntaxspiderbody_2740_instances.save_selection();
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1836_46) goto or_final_or_event_1836_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        bosssyntaxspiderbody_2740_instances.empty_selection();
        if (or_temp_result_1836_46_0 || or_temp_result_1836_46_1) {
            bosssyntaxspiderbody_2740_instances.restore_selection();
        }
        if (or_temp_result_1836_46_0 || or_temp_result_1836_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(6, 0-((Active*)get_single(bosssyntaxspiderbody_2740_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        bosssyntaxspiderlavacannon_2742_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlavacannon_2742_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    or_final_or_event_1836_46_1_end: ;
}
void Frames::event_func_11238()
{
    // event 1837_46
    bool or_result_1837_46 = false;
    bool or_temp_result_1837_46_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1837_46_0_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1837_46_0_end;
        bosssyntaxspiderbody_2740_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderbody_2740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderbody_2740_instances.has_selection()) goto or_event_1837_46_0_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosslavasplash2_2746_instances, default_active_instance))->alterables->values.get(0)+100))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1837_46_0_end;
        or_result_1837_46 = true;
        or_temp_result_1837_46_0 = true;
    }
    or_event_1837_46_0_end: ;
    bosssyntaxspiderbody_2740_instances.clear_saved_selection();
    bosssyntaxspider_2743_instances.clear_saved_selection();
    if (or_temp_result_1837_46_0) {
        bosssyntaxspiderbody_2740_instances.save_selection();
        bosssyntaxspider_2743_instances.save_selection();
    }
    // event 1837_46
    bool or_temp_result_1837_46_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto or_event_1837_46_1_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1837_46_1_end;
        bosssyntaxspiderbody_2740_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderbody_2740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspiderbody_2740_instances.has_selection()) goto or_event_1837_46_1_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(bosslavasplash1_2745_instances, default_active_instance))->alterables->values.get(0)-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto or_event_1837_46_1_end;
        or_result_1837_46 = true;
        or_temp_result_1837_46_1 = true;
        or_event_1837_46_1_end: ;
        if (or_temp_result_1837_46_1) {
            bosssyntaxspiderbody_2740_instances.save_selection();
            bosssyntaxspider_2743_instances.save_selection();
        }
        if (!or_result_1837_46) goto or_final_or_event_1837_46_1_end;
        bosssyntaxspider_2743_instances.empty_selection();
        bosssyntaxspiderbody_2740_instances.empty_selection();
        if (or_temp_result_1837_46_0 || or_temp_result_1837_46_1) {
            bosssyntaxspiderbody_2740_instances.restore_selection();
        }
        if (or_temp_result_1837_46_0 || or_temp_result_1837_46_1) {
            bosssyntaxspider_2743_instances.restore_selection();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(6, 0-((Active*)get_single(bosssyntaxspiderbody_2740_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        bosssyntaxspiderlavacannon_2742_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlavacannon_2742_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    or_final_or_event_1837_46_1_end: ;
}
void Frames::event_func_11239()
{
    // event 1838_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1838_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1838_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(2, 0);
    }
    event_1838_46_end: ;
}
void Frames::event_func_11240()
{
    // event 1839_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1839_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (10))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1839_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(2, ((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->alterables->values.get(6));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->move_back();
    }
    event_1839_46_end: ;
}
void Frames::event_func_11241()
{
    // event 1840_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1840_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1840_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->force_animation(0);
    }
    event_1840_46_end: ;
}
void Frames::event_func_11242()
{
    // event 1841_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1841_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) >= (10))) goto event_1841_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->force_animation(7);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.disable(2);
    }
    event_1841_46_end: ;
}
void Frames::event_func_11243()
{
    // event 1842_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1842_46_end;
        if (!(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.is_on(1))) goto event_1842_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(3)+2, 18));
    }
    event_1842_46_end: ;
}
void Frames::event_func_11244()
{
    // event 1843_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1843_46_end;
        if (!(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.is_off(1))) goto event_1843_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(3)-2, 0));
    }
    event_1843_46_end: ;
}
void Frames::event_func_11245()
{
    // event 1844_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1844_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1844_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(5, get_min(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)+0.1, 1));
    }
    event_1844_46_end: ;
}
void Frames::event_func_11246()
{
    // event 1845_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1845_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1845_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1845_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1845_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (1))) goto event_1845_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_x(((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_y(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_y());
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_visible(true);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.enable(2);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(0);
        }
    }
    event_1845_46_end: ;
}
void Frames::event_func_11247()
{
    // event 1846_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1846_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1846_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1846_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1846_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (-1))) goto event_1846_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_x(((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.get(0));
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_y(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_y());
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_visible(true);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.enable(2);
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(0);
        }
    }
    event_1846_46_end: ;
}
void Frames::event_func_11248()
{
    // event 1847_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1847_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1847_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1847_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1847_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1847_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        media.play_id(SOUND_LOWBUZZ_307, -1, 1);
    }
    event_1847_46_end: ;
}
void Frames::event_func_11249()
{
    // event 1848_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1848_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1848_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1848_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1848_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1848_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1848_46_end;
        if (!((hazardlavafall2_2724_instances.size()) == (0))) goto event_1848_46_end;
        media.play_id(SOUND_LAVAEXTRACT_306, -1, 1);
    }
    event_1848_46_end: ;
}
void Frames::event_func_11250()
{
    // event 1849_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1849_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1849_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1849_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1849_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1849_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (1))) goto event_1849_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1849_46_end;
        FrameObject * single_instance_1849_46_0; single_instance_1849_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosslavasplash1_2745_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardlavafall2_2724(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1849_46_0 == NULL)
                    single_instance_1849_46_0 = new_obj;
            }
        }
        ((Active*)single_instance_1849_46_0)->move_back(((Active*)get_instance(bosslavasplash1_2745_instances)));
        ((Active*)((Active*)single_instance_1849_46_0))->alterables->values.set(0, 0-((Active*)single_instance_1849_46_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1849_46_0))->alterables->flags.enable(1);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.add(2, 1);
    }
    event_1849_46_end: ;
}
void Frames::event_func_11251()
{
    // event 1850_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1850_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1850_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1850_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1850_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1850_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (-1))) goto event_1850_46_end;
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1850_46_end;
        FrameObject * single_instance_1850_46_0; single_instance_1850_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosslavasplash2_2746_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardlavafall2_2724(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1850_46_0 == NULL)
                    single_instance_1850_46_0 = new_obj;
            }
        }
        ((Active*)single_instance_1850_46_0)->move_back(((Active*)get_instance(bosslavasplash2_2746_instances)));
        ((Active*)((Active*)single_instance_1850_46_0))->alterables->flags.enable(1);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.add(2, 1);
    }
    event_1850_46_end: ;
}
void Frames::event_func_11252()
{
    // event 1851_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1851_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1851_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1851_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) > (0))) goto event_1851_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) > (0))) goto event_1851_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (-1))) goto event_1851_46_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances));
            if (parent == NULL) goto pos_end_1851_46_0;
            ((Active*)get_instance(bosslavasplash1_2745_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1851_46_0: ;
        }
        ((Active*)get_instance(bosslavasplash1_2745_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash1_2745_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash1_2745_instances))->set_visible(true);
    }
    event_1851_46_end: ;
}
void Frames::event_func_11253()
{
    // event 1852_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1852_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1852_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1852_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) > (0))) goto event_1852_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) > (0))) goto event_1852_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (1))) goto event_1852_46_end;
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances));
            if (parent == NULL) goto pos_end_1852_46_0;
            ((Active*)get_instance(bosslavasplash2_2746_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1852_46_0: ;
        }
        ((Active*)get_instance(bosslavasplash2_2746_instances))->force_frame(0);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->restore_frame();
        ((Active*)get_instance(bosslavasplash2_2746_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(bosslavasplash2_2746_instances))->set_visible(true);
    }
    event_1852_46_end: ;
}
void Frames::event_func_11254()
{
    // event 1853_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1853_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1853_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1853_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1853_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (1))) goto event_1853_46_end;
        if (!((((Active*)get_instance(bosslavasplash1_2745_instances))->get_x()) > (frame_left()+global_values->get(16)))) goto event_1853_46_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bosslavasplash1_2745_instances))->get_y());
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-30);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1853_46_end: ;
}
void Frames::event_func_11255()
{
    // event 1854_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1854_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1854_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) >= (1))) goto event_1854_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) < (10))) goto event_1854_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (-1))) goto event_1854_46_end;
        if (!((((Active*)get_instance(bosslavasplash2_2746_instances))->get_x()) < (frame_left()))) goto event_1854_46_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bosslavasplash2_2746_instances))->get_y());
            ((Active*)*it)->set_x(frame_left()+30);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1854_46_end: ;
}
void Frames::event_func_11256()
{
    // event 1855_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1855_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1855_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1855_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) > (0))) goto event_1855_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) > (0))) goto event_1855_46_end;
        if (!((hazardlavafall2_2724_instances.size()) == (0))) goto event_1855_46_end;
        media.play_id(SOUND_LAVABURST_305, -1, 1);
    }
    event_1855_46_end: ;
}
void Frames::event_func_11257()
{
    // event 1856_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1856_46_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1856_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1856_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) > (0))) goto event_1856_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(2)) > (0))) goto event_1856_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.set(1, -10);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.sub(2, 1);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_action_x()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        FrameObject * single_instance_1856_46_0; single_instance_1856_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardlavafall2_2724(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1856_46_0 == NULL)
                    single_instance_1856_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1856_46_0))->alterables->values.set(0, ((Active*)single_instance_1856_46_0)->alterables->values.get(0)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
    }
    event_1856_46_end: ;
}
void Frames::event_func_11258()
{
    // event 1857_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1857_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)) < (10))) goto event_1857_46_end;
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.add(1, 1);
    }
    event_1857_46_end: ;
}
void Frames::event_func_11259()
{
    // event 1858_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1858_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1858_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)) >= (10))) goto event_1858_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)) > (0))) goto event_1858_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)-0.1, 0));
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1858_46_end: ;
}
void Frames::event_func_11260()
{
    // event 1859_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1859_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1859_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (0))) goto event_1859_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.set(2, 1);
    }
    event_1859_46_end: ;
}
void Frames::event_func_11261()
{
    // event 1860_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1860_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1));
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.sub(0, ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(1)*4.5);
    }
    event_1860_46_end: ;
}
void Frames::event_func_11262()
{
    // event 1861_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1861_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (-1))) goto event_1861_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_direction(16);
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_direction(16+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.get(2));
    }
    event_1861_46_end: ;
}
void Frames::event_func_11263()
{
    // event 1862_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1862_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (1))) goto event_1862_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_direction(0);
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_direction(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->flags.get(2));
    }
    event_1862_46_end: ;
}
void Frames::event_func_11264()
{
    // event 1863_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1863_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) == (0))) goto event_1863_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_direction(24);
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_direction(24);
    }
    event_1863_46_end: ;
}
void Frames::event_func_11265()
{
    // event 1864_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1864_46_end;
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_x(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_x());
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_y(((Active*)get_instance(bosssyntaxspider_2743_instances, default_active_instance))->get_y());
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_action_x()+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(1)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, default_active_instance))->get_action_y()-18+((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->alterables->values.get(3));
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_y());
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_x()+44*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)+((Active*)*it)->alterables->values.get(0)*28-14);
            ((Active*)*it)->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_action_y());
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_x()+((Active*)*it)->alterables->values.get(0)*24*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-12*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_single(bosssyntaxspider_2743_instances, it.current_index, default_active_instance))->get_action_y());
        }
    }
    event_1864_46_end: ;
}
void Frames::event_func_11266()
{
    // event 1865_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1865_46_end;
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(0)*180)*8)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+180+((Active*)*it)->alterables->values.get(0)*180)*6)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
        }
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_min(0, (cos_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(0)*180)*8)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)));
        }
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_min(0, (cos_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+180+((Active*)*it)->alterables->values.get(0)*180)*8)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)));
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-1)*90+((Active*)*it)->alterables->values.get(0)*180)*6)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_min(0, (cos_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)-1)*90+((Active*)*it)->alterables->values.get(0)*180)*8)*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4)));
        }
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+90)*3*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_y(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->get_y()+sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0))*3*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_y()+sin_deg(((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(0)+45)*3*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(4));
    }
    event_1865_46_end: ;
}
void Frames::event_func_11267()
{
    // event 1866_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_syntax_spider_positions_and_directions_1)) goto event_1866_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)*8);
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)*8);
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)*8);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->set_y(((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->get_y()+((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(5)*8);
    }
    event_1866_46_end: ;
}
void Frames::event_func_11268()
{
    // event 1867_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1)) goto event_1867_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosssyntaxspider_2743_instances.has_selection()) goto event_1867_46_end;
        if (!((((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2)) != (0))) goto event_1867_46_end;
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1 = true;
        }
    }
    event_1867_46_end: ;
}
void Frames::event_func_11269()
{
    // event 1868_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1)) goto event_1868_46_end;
        if (once_condition_1868_46) goto event_1868_46_end;
        once_condition_1868_46 = true;
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(-30*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2), 0);
        }
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(30*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2), 0);
        }
        bosssyntaxspiderlegback_2738_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegback_2738_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(-30*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2), 0);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->set_angle(30*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2), 0);
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(-30*((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->alterables->values.get(2), 0);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1868_46_end: ;
}
void Frames::event_func_11270()
{
    // event 1869_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_syntax_spider_defeated_1)) goto event_1869_46_end;
        bosssyntaxspider_2743_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspider_2743_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(bosssyntaxspiderbody_2740_instances))->force_animation(8);
        bosssyntaxspiderlegfront_2744_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderlegfront_2744_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        bosssyntaxspiderarm_2741_instances.clear_selection();
        for (ObjectIterator it(bosssyntaxspiderarm_2741_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(bosssyntaxspiderlavacannon_2742_instances))->force_animation(8);
    }
    event_1869_46_end: ;
}
