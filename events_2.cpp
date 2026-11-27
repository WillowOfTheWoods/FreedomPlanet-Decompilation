#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_72()
{
    // event 178_0
    {
        if (!(group_sound_events_lilac_1)) goto event_178_0_end;
        media.play_id(SOUND_LILAC_ATTACK3_87, -1, 1);
    }
    event_178_0_end: ;
}
void Frames::event_func_73()
{
    // event 199_0
    {
        if (!(group_sound_events_carol_1)) goto event_199_0_end;
        media.play_id(SOUND_CAROL_PUNCH_4_122, -1, 1);
    }
    event_199_0_end: ;
}
void Frames::loop_sound_attack3_0()
{
    event_func_72();
    event_func_73();
}
void Frames::event_func_74()
{
    // event 177_0
    {
        if (!(group_sound_events_lilac_1)) goto event_177_0_end;
        media.play_id(SOUND_LILAC_ATTACK_3_86, -1, 1);
    }
    event_177_0_end: ;
}
void Frames::event_func_75()
{
    // event 198_0
    {
        if (!(group_sound_events_carol_1)) goto event_198_0_end;
        media.play_id(SOUND_CAROL_PUNCH2_121, -1, 1);
    }
    event_198_0_end: ;
}
void Frames::loop_sound_attack2_0()
{
    event_func_74();
    event_func_75();
}
void Frames::event_func_76()
{
    // event 186_0
    {
        if (!(group_sound_events_lilac_1)) goto event_186_0_end;
        media.play_id(SOUND_LILAC_BADTIME_94, -1, 1);
    }
    event_186_0_end: ;
}
void Frames::event_func_77()
{
    // event 194_0
    {
        if (!(group_sound_events_carol_1)) goto event_194_0_end;
        media.play_id(SOUND_CAROL_WHATTHINKDOIN_2_112, -1, 1);
    }
    event_194_0_end: ;
}
void Frames::event_func_78()
{
    // event 214_0
    {
        if (!(group_sound_events_milla_1)) goto event_214_0_end;
        media.play_id(SOUND_MILLA_UMMHEH_206, -1, 1);
    }
    event_214_0_end: ;
}
void Frames::loop_sound_idle7_0()
{
    event_func_76();
    event_func_77();
    event_func_78();
}
void Frames::event_func_79()
{
    // event 187_0
    {
        if (!(group_sound_events_lilac_1)) goto event_187_0_end;
        media.play_id(SOUND_LILAC_CANTMOVEIT_97, -1, 1);
    }
    event_187_0_end: ;
}
void Frames::event_func_80()
{
    // event 207_0
    {
        if (!(group_sound_events_carol_1)) goto event_207_0_end;
        media.play_id(SOUND_CAROL_WONTMOVE_124, -1, 1);
    }
    event_207_0_end: ;
}
void Frames::event_func_81()
{
    // event 224_0
    {
        if (!(group_sound_events_milla_1)) goto event_224_0_end;
        media.play_id(SOUND_MILLA_CANTMOVEIT_201, -1, 1);
    }
    event_224_0_end: ;
}
void Frames::event_func_82()
{
    // event 232_0
    {
        if (!(group_sound_events_torque_1)) goto event_232_0_end;
        media.play_id(SOUND_TORQUE_NOTGONNABUDGE_2_250, -1, 1);
    }
    event_232_0_end: ;
}
void Frames::loop_sound_cantmoveit_0()
{
    event_func_79();
    event_func_80();
    event_func_81();
    event_func_82();
}
void Frames::event_func_83()
{
    // event 181_0
    {
        if (!(group_sound_events_lilac_1)) goto event_181_0_end;
        media.play_id(SOUND_LILAC_UPPERCUT_4_177, -1, 1);
    }
    event_181_0_end: ;
}
void Frames::loop_sound_uppercut3_0()
{
    event_func_83();
}
void Frames::event_func_84()
{
    // event 180_0
    {
        if (!(group_sound_events_lilac_1)) goto event_180_0_end;
        media.play_id(SOUND_LILAC_UPPERCUT1_176, -1, 1);
    }
    event_180_0_end: ;
}
void Frames::loop_sound_uppercut1_0()
{
    event_func_84();
}
void Frames::event_func_85()
{
    // event 179_0
    {
        if (!(group_sound_events_lilac_1)) goto event_179_0_end;
        media.play_id(SOUND_LILAC_UPPERCUT_1_175, -1, 1);
    }
    event_179_0_end: ;
}
void Frames::loop_sound_uppercut0_0()
{
    event_func_85();
}
void Frames::event_func_86()
{
    // event 238_0
    {
        if (!((global_values->get(1)) == (3))) goto event_238_0_end;
        global_values->set(1, 2);
    }
    event_238_0_end: ;
}
void Frames::event_func_87()
{
    // event 239_0
    {
        media.resume_samples();
        media.stop_samples();
        set_lives(get_max(global_values->get(28)-1, 1));
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_239_0_end: ;
}
void Frames::loop_restart_0()
{
    event_func_86();
    event_func_87();
}
void Frames::event_func_88()
{
    // event 195_0
    {
        if (!(group_sound_events_carol_1)) goto event_195_0_end;
        media.play_id(SOUND_CAROL_GO_113, -1, 1);
        media.stop_sample(SOUND_CAROL_POUNCE_2_133);
    }
    event_195_0_end: ;
}
void Frames::loop_sound_go0_0()
{
    event_func_88();
}
void Frames::event_func_89()
{
    // event 172_0
    {
        if (!(group_sound_events_lilac_1)) goto event_172_0_end;
        media.play_id(SOUND_LILAC_HURT_3_82, -1, 1);
    }
    event_172_0_end: ;
}
void Frames::event_func_90()
{
    // event 205_0
    {
        if (!(group_sound_events_carol_1)) goto event_205_0_end;
        media.play_id(SOUND_CAROL_HURT2_118, -1, 1);
    }
    event_205_0_end: ;
}
void Frames::event_func_91()
{
    // event 217_0
    {
        if (!(group_sound_events_milla_1)) goto event_217_0_end;
        media.play_id(SOUND_MILLA_HURT2_181, -1, 1);
    }
    event_217_0_end: ;
}
void Frames::event_func_92()
{
    // event 229_0
    {
        if (!(group_sound_events_torque_1)) goto event_229_0_end;
        media.play_id(SOUND_TORQUE_HURT_1_247, -1, 1);
    }
    event_229_0_end: ;
}
void Frames::loop_sound_hurt2_0()
{
    event_func_89();
    event_func_90();
    event_func_91();
    event_func_92();
}
void Frames::event_func_93()
{
    // event 182_0
    {
        if (!(group_sound_events_lilac_1)) goto event_182_0_end;
        media.play_id(SOUND_LILAC_CYCLONE1_174, -1, 1);
    }
    event_182_0_end: ;
}
void Frames::loop_sound_cyclone0_0()
{
    event_func_93();
}
void Frames::event_func_94()
{
    // event 161_0
    {
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    event_161_0_end: ;
}
void Frames::loop_sound_explode2_0()
{
    event_func_94();
}
void Frames::event_func_95()
{
    // event 170_0
    {
        if (!(group_sound_events_lilac_1)) goto event_170_0_end;
        media.play_id(SOUND_LILAC_HURT_1_80, -1, 1);
    }
    event_170_0_end: ;
}
void Frames::event_func_96()
{
    // event 203_0
    {
        if (!(group_sound_events_carol_1)) goto event_203_0_end;
        media.play_id(SOUND_CAROL_HURT_1_114, -1, 1);
    }
    event_203_0_end: ;
}
void Frames::event_func_97()
{
    // event 215_0
    {
        if (!(group_sound_events_milla_1)) goto event_215_0_end;
        media.play_id(SOUND_MILLA_HURT0_179, -1, 1);
    }
    event_215_0_end: ;
}
void Frames::loop_sound_hurt0_0()
{
    event_func_95();
    event_func_96();
    event_func_97();
    event_func_92();
}
void Frames::loop_wrapper_sound_explode8_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_sound_explode3_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode2_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_sound_explode0_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_sound_explode5_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_0(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::test_collisions_0()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_98()
{
    // event 9_0
    {
        if (!(group_game_startup_1)) goto event_9_0_end;
        set_display_center(-1, ((Active*)get_instance(scrolldot_6_instances))->get_y());
        ((Active*)get_instance(scrolldot_6_instances))->set_y(((Active*)get_instance(scrolldot_6_instances))->alterables->values.get(24));
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_max(1.5-((Active*)*it)->alterables->values.get(0)*0.01, 1));
        }
    }
    event_9_0_end: ;
}
void Frames::event_func_99()
{
    // event 10_0
    {
        if (!(group_game_startup_1)) goto event_10_0_end;
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (180))) { it.deselect(); continue; }
        }
        if (!sparkletrail_15_instances.has_selection()) goto event_10_0_end;
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+30+(global_values->get(16)/math_helper/2)+cos_deg(((Active*)*it)->alterables->values.get(0))*-1*get_min(150+((Active*)*it)->alterables->values.get(0)*0.5, 190));
            ((Active*)*it)->set_y(frame_top()+120+sin_deg(((Active*)*it)->alterables->values.get(0))*-1*get_max(130-((Active*)*it)->alterables->values.get(0)*0.5, 80));
            ((Active*)*it)->alterables->values.add(0, 2.25);
        }
    }
    event_10_0_end: ;
}
void Frames::event_func_100()
{
    // event 11_0
    {
        if (!(group_game_startup_1)) goto event_11_0_end;
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (-20))) { it.deselect(); continue; }
        }
        if (!sparkletrail_15_instances.has_selection()) goto event_11_0_end;
        FrameObject * single_instance_11_0_0; single_instance_11_0_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sparkletrail_15_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle_3(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_11_0_0 == NULL)
                    single_instance_11_0_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_11_0_0))->set_x(((Active*)single_instance_11_0_0)->get_x()-6+randrange(13));
        ((Active*)((Active*)single_instance_11_0_0))->set_y(((Active*)single_instance_11_0_0)->get_y()-2+randrange(5));
        ((Active*)((Active*)single_instance_11_0_0))->set_scale(get_max(1.5-((Active*)get_single(sparkletrail_15_instances, default_active_instance))->alterables->values.get(0)*0.01, 1));
    }
    event_11_0_end: ;
}
void Frames::event_func_101()
{
    // event 12_0
    {
        if (!(group_game_startup_1)) goto event_12_0_end;
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!sparkletrail_15_instances.has_selection()) goto event_12_0_end;
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180);
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()-6, frame_right()+20));
        }
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)get_single(sparkletrail_15_instances, it.current_index, default_active_instance))->get_x(), frame_left()));
            ((Active*)*it)->set_y(((Active*)get_single(sparkletrail_15_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_12_0_end: ;
}
void Frames::event_func_102()
{
    // event 13_0
    {
        if (!(group_game_startup_1)) goto event_13_0_end;
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (frame_left()))) { it.deselect(); continue; }
        }
        if (!beam_16_instances.has_selection()) goto event_13_0_end;
        if (not_always_13_0 > loop_count) {
            not_always_13_0 = loop_count + 2;
            goto event_13_0_end;
        }
        not_always_13_0 = loop_count + 2;
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        media.play_id(SOUND_GALAXYTRAIL_65, -1, 1);
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_13_0_end: ;
}
void Frames::event_func_103()
{
    // event 14_0
    {
        if (!(group_game_startup_1)) goto event_14_0_end;
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (13))) { it.deselect(); continue; }
        }
        if (!beam_16_instances.has_selection()) goto event_14_0_end;
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_14_0_end: ;
}
void Frames::event_func_104()
{
    // event 15_0
    {
        if (!(group_game_startup_1)) goto event_15_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (16))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_15_0_end;
        sparkle_3_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sparkle_3(-41, 88), 3);
            sparkle_3_instances.add_back();
        }
        for (ObjectIterator it(sparkle_3_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(gtlogo1_13_instances, it.current_index, default_active_instance))->get_x()-135+randrange(271));
            ((Active*)*it)->set_y(((Active*)get_single(gtlogo1_13_instances, it.current_index, default_active_instance))->get_y()-20+randrange(41));
        }
    }
    event_15_0_end: ;
}
void Frames::event_func_105()
{
    // event 16_0
    {
        if (!(group_game_startup_1)) goto event_16_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (16))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_16_0_end;
        sparkle_3_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sparkle_3(-41, 88), 3);
            sparkle_3_instances.add_back();
        }
        for (ObjectIterator it(sparkle_3_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(10+randrange(width-10));
            ((Active*)*it)->set_y(((Active*)get_single(gtlogo1_13_instances, it.current_index, default_active_instance))->get_y()-30+randrange(61));
        }
    }
    event_16_0_end: ;
}
void Frames::event_func_106()
{
    // event 17_0
    {
        if (!(group_game_startup_1)) goto event_17_0_end;
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (32))) { it.deselect(); continue; }
        }
        if (!beam_16_instances.has_selection()) goto event_17_0_end;
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_17_0_end: ;
}
void Frames::event_func_107()
{
    // event 18_0
    {
        if (!(group_game_startup_1)) goto event_18_0_end;
        if (!((beam_16_instances.size()) == (0))) goto event_18_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_18_0_end;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_18_0_end: ;
}
void Frames::event_func_108()
{
    // event 19_0
    {
        if (!(group_game_startup_1)) goto event_19_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_19_0_end;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_19_0_end: ;
}
void Frames::event_func_109()
{
    // event 20_0
    {
        if (!(group_game_startup_1)) goto event_20_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(1)/math_helper/2))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_20_0_end;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_20_0_end: ;
}
void Frames::event_func_110()
{
    // event 21_0
    {
        if (!(group_game_startup_1)) goto event_21_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (16))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_21_0_end;
        if (not_always_21_0 > loop_count) {
            not_always_21_0 = loop_count + 2;
            goto event_21_0_end;
        }
        not_always_21_0 = loop_count + 2;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        gtlogo2_14_instances.clear_selection();
        for (ObjectIterator it(gtlogo2_14_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_21_0_end: ;
}
void Frames::event_func_111()
{
    // event 22_0
    {
        if (!(group_game_startup_1)) goto event_22_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (25))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_22_0_end;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        gtlogo2_14_instances.clear_selection();
        for (ObjectIterator it(gtlogo2_14_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    event_22_0_end: ;
}
void Frames::event_func_112()
{
    // event 23_0
    {
        if (!(group_game_startup_1)) goto event_23_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (25))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_23_0_end;
        ((Active*)get_instance(scrolldot_6_instances))->alterables->values.sub(24, 0.5);
    }
    event_23_0_end: ;
}
void Frames::event_func_113()
{
    // event 24_0
    {
        if (!(group_game_startup_1)) goto event_24_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (25))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_24_0_end;
        if (once_condition_24_0) goto event_24_0_end;
        once_condition_24_0 = true;
        ((LayerObject*)get_instance(layerobject_10_instances))->show_layer(3-1);
    }
    event_24_0_end: ;
}
void Frames::event_func_114()
{
    // event 25_0
    {
        if (!(group_game_startup_1)) goto event_25_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (26))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_25_0_end;
        if (once_condition_25_0) goto event_25_0_end;
        once_condition_25_0 = true;
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_brevon3_ogg_4, 32-1, 0);
    }
    event_25_0_end: ;
}
void Frames::event_func_115()
{
    // event 26_0
    {
        if (!(group_game_startup_1)) goto event_26_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (47))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_26_0_end;
        ((Active*)get_instance(scrolldot_6_instances))->alterables->values.add(24, 1);
    }
    event_26_0_end: ;
}
void Frames::event_func_116()
{
    // event 27_0
    {
        if (!(group_game_startup_1)) goto event_27_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (40))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_27_0_end;
        if (once_condition_27_0) goto event_27_0_end;
        once_condition_27_0 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_27_0_end: ;
}
void Frames::event_func_117()
{
    // event 28_0
    {
        if (!(group_game_startup_1)) goto event_28_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (47))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_28_0_end;
        if (once_condition_28_0) goto event_28_0_end;
        once_condition_28_0 = true;
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_x(540);
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_y(360);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(0, ((Active*)get_instance(brevonmechflyby_11_instances))->get_x());
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_visible(true);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
    }
    event_28_0_end: ;
}
void Frames::event_func_118()
{
    // event 29_0
    {
        if (!(group_game_startup_1)) goto event_29_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (47))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_29_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_x(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0));
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(0, -8+get_min(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(13)*0.07, 9));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_scale(1.0-get_min(get_max(0, get_log10((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(13)+20)*0.05)), 1));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_blend_color(make_color_int(248-get_min(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(13), 248), 248-get_min(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(13), 248), 255));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_angle(20-get_min(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(13)*0.2, 20), 0);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(13, 1);
    }
    event_29_0_end: ;
}
void Frames::event_func_119()
{
    // event 30_0
    {
        if (!(group_game_startup_1)) goto event_30_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (55))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_30_0_end;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        ((TextBlitter*)get_instance(locationname_25_instances))->set_visible(false);
    }
    event_30_0_end: ;
}
void Frames::event_func_120()
{
    // event 31_0
    {
        if (!(group_game_startup_1)) goto event_31_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)+((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(13)+((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(14)+((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) > (0))) goto event_31_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (25))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_31_0_end;
        if (once_condition_31_0) goto event_31_0_end;
        once_condition_31_0 = true;
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_title_ogg_5, 32-1, 0);
    }
    event_31_0_end: ;
}
void Frames::event_func_121()
{
    // event 32_0
    bool or_result_32_0 = false;
    bool or_temp_result_32_0_0 = false;
    {
        if (!(group_game_startup_1)) goto or_event_32_0_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto or_event_32_0_0_end;
        or_result_32_0 = true;
        or_temp_result_32_0_0 = true;
    }
    or_event_32_0_0_end: ;
    gtlogo1_13_instances.clear_saved_selection();
    if (or_temp_result_32_0_0) {
        gtlogo1_13_instances.save_selection();
    }
    // event 32_0
    bool or_temp_result_32_0_1 = false;
    {
        if (!(group_game_startup_1)) goto or_event_32_0_1_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto or_event_32_0_1_end;
        or_result_32_0 = true;
        or_temp_result_32_0_1 = true;
        or_event_32_0_1_end: ;
        if (or_temp_result_32_0_1) {
            gtlogo1_13_instances.save_selection();
        }
        if (!or_result_32_0) goto or_final_or_event_32_0_1_end;
        gtlogo1_13_instances.clear_selection();
        if (or_temp_result_32_0_0 || or_temp_result_32_0_1) {
            gtlogo1_13_instances.restore_selection();
        }
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        gtlogo2_14_instances.clear_selection();
        for (ObjectIterator it(gtlogo2_14_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    or_final_or_event_32_0_1_end: ;
}
void Frames::event_func_122()
{
    // event 33_0
    {
        if (!(group_game_startup_1)) goto event_33_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_33_0_end;
        if (!((((Active*)get_single(gtlogo1_13_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_33_0_end;
        if (!(!media.is_channel_playing(32-1))) goto event_33_0_end;
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_title_ogg_5, 32-1, 0);
    }
    event_33_0_end: ;
}
void Frames::event_func_123()
{
    // event 34_0
    bool or_result_34_0 = false;
    bool or_temp_result_34_0_0 = false;
    {
        if (!(group_game_startup_1)) goto or_event_34_0_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto or_event_34_0_0_end;
        if (!((((Active*)get_single(gtlogo1_13_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto or_event_34_0_0_end;
        or_result_34_0 = true;
        or_temp_result_34_0_0 = true;
    }
    or_event_34_0_0_end: ;
    gtlogo1_13_instances.clear_saved_selection();
    if (or_temp_result_34_0_0) {
        gtlogo1_13_instances.save_selection();
    }
    // event 34_0
    bool or_temp_result_34_0_1 = false;
    {
        if (!(group_game_startup_1)) goto or_event_34_0_1_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto or_event_34_0_1_end;
        or_result_34_0 = true;
        or_temp_result_34_0_1 = true;
        or_event_34_0_1_end: ;
        if (or_temp_result_34_0_1) {
            gtlogo1_13_instances.save_selection();
        }
        if (!or_result_34_0) goto or_final_or_event_34_0_1_end;
        gtlogo1_13_instances.clear_selection();
        if (or_temp_result_34_0_0 || or_temp_result_34_0_1) {
            gtlogo1_13_instances.restore_selection();
        }
        {
            ((Active*)get_instance(whitefade_17_instances))->blend_color.set_semi_transparency(((Active*)get_instance(whitefade_17_instances))->blend_color.get_semi_transparency()-3);
        }
        ((Active*)get_instance(whitefade_17_instances))->set_x(frame_left());
        ((Active*)get_instance(whitefade_17_instances))->set_y(frame_top());
        ((Active*)get_instance(whitefade_17_instances))->set_x_scale(global_values->get(16));
        ((Active*)get_instance(whitefade_17_instances))->set_y_scale(240);
    }
    or_final_or_event_34_0_1_end: ;
}
void Frames::event_func_124()
{
    // event 35_0
    {
        if (!(group_game_startup_1)) goto event_35_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_35_0_end;
        if (!((((Active*)get_single(gtlogo1_13_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_35_0_end;
        if (!((((Active*)get_instance(whitefade_17_instances))->blend_color.get_semi_transparency()) <= (0))) goto event_35_0_end;
        global_values->set(0, -17);
        next_frame = 2 + 0;    
    
    }
    event_35_0_end: ;
}
void Frames::event_func_125()
{
    // event 36_0
    {
        if (!(group_game_startup_1)) goto event_36_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!gtlogo1_13_instances.has_selection()) goto event_36_0_end;
        if (!((((Active*)get_single(gtlogo1_13_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_36_0_end;
        if (!((((Active*)get_instance(whitefade_17_instances))->blend_color.get_semi_transparency()) <= (0))) goto event_36_0_end;
        global_values->set(4, 2);
        next_frame = 83 + 0;    
    
    }
    event_36_0_end: ;
}
void Frames::event_func_126()
{
    // event 37_0
    {
        // group: Location Name
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_37_0_end;
        ((TextBlitter*)get_instance(locationname_25_instances))->set_text(left_string(((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.get(0), ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)));
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.add(0, 1);
        ((TextBlitter*)get_instance(locationname_25_instances))->set_visible(true);
    }
    event_37_0_end: ;
}
void Frames::event_func_127()
{
    // event 38_0
    {
        // group: Location Name
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_38_0_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) < (string_size(((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.get(0))))) goto event_38_0_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)%math_helper%3) == (1))) goto event_38_0_end;
        media.play_id(SOUND_LOCATION_NAME_406, -1, 1);
    }
    event_38_0_end: ;
}
void Frames::event_func_128()
{
    // event 39_0
    {
        // group: Location Name
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_39_0_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) > (150))) goto event_39_0_end;
        {
            ((TextBlitter*)get_instance(locationname_25_instances))->blend_color.set_semi_transparency(((TextBlitter*)get_instance(locationname_25_instances))->blend_color.get_semi_transparency()+1);
        }
    }
    event_39_0_end: ;
}
void Frames::event_func_129()
{
    // event 40_0
    {
        // group: Location Name
        if (!(((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.is_on(0))) goto event_40_0_end;
        if (!((((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.get(0)) > (150+128))) goto event_40_0_end;
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.disable(0);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->values.set(0, 0);
        ((TextBlitter*)get_instance(locationname_25_instances))->set_visible(false);
        {
            ((TextBlitter*)get_instance(locationname_25_instances))->blend_color.set_semi_transparency(0);
        }
    }
    event_40_0_end: ;
}
void Frames::event_func_130()
{
    // event 41_0
    {
        if (!(group_cutscene_1)) goto event_41_0_end;
        set_display_center(-1, height-global_values->get(17)*0.5-randrange(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(1))*0.5);
    }
    event_41_0_end: ;
}
void Frames::event_func_131()
{
    // event 42_0
    {
        if (!(group_cutscene_1)) goto event_42_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (0))) goto event_42_0_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    event_42_0_end: ;
}
void Frames::event_func_132()
{
    // event 43_0
    {
        if (!(group_cutscene_1)) goto event_43_0_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_43_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (0))) goto event_43_0_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(0, 1);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_43_0_end: ;
}
void Frames::event_func_133()
{
    // event 44_0
    {
        if (!(group_cutscene_1)) goto event_44_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_44_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(1, get_max(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(1)-0.25, 0));
    }
    event_44_0_end: ;
}
void Frames::event_func_134()
{
    // event 45_0
    {
        if (!(group_cutscene_1)) goto event_45_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_45_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)%math_helper%50) == (3))) goto event_45_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(1, 3);
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(164, 321), 2);
            effectswhiteburst_5_instances.add_back();
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-30+randrange(61));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20+randrange(41));
            ((Active*)*it)->set_scale(randrange(10)*0.03+0.3);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_45_0_1_end;
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
        dynamic_45_0_1_end: ;
    }
    event_45_0_end: ;
}
void Frames::event_func_135()
{
    // event 46_0
    {
        if (!(group_cutscene_1)) goto event_46_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_46_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)%math_helper%70) == (9))) goto event_46_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(1, 3);
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(164, 321), 2);
            effectswhiteburst_5_instances.add_back();
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-30+randrange(61));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20+randrange(41));
            ((Active*)*it)->set_scale(randrange(10)*0.03+0.3);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_46_0_1_end;
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
        dynamic_46_0_1_end: ;
    }
    event_46_0_end: ;
}
void Frames::event_func_136()
{
    // event 47_0
    {
        if (!(group_cutscene_1)) goto event_47_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_47_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)%math_helper%60) == (15))) goto event_47_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(1, 3);
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(164, 321), 2);
            effectswhiteburst_5_instances.add_back();
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-30+randrange(61));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20+randrange(41));
            ((Active*)*it)->set_scale(randrange(10)*0.03+0.3);
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_47_0_end: ;
}
void Frames::event_func_137()
{
    // event 48_0
    {
        if (!(group_cutscene_1)) goto event_48_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_48_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)%math_helper%90) == (60))) goto event_48_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(1, 3);
        effectswhiteburst_5_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(164, 321), 2);
            effectswhiteburst_5_instances.add_back();
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-30+randrange(61));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20+randrange(41));
            ((Active*)*it)->set_scale(randrange(10)*0.03+0.3);
        }
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
    }
    event_48_0_end: ;
}
void Frames::event_func_138()
{
    // event 49_0
    {
        if (!(group_cutscene_1)) goto event_49_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (1))) goto event_49_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)) > (300))) goto event_49_0_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(0, 1);
        {
            ((Active*)get_instance(whitefade_17_instances))->blend_color.set_semi_transparency(128);
        }
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
    }
    event_49_0_end: ;
}
void Frames::event_func_139()
{
    // event 50_0
    {
        if (!(group_cutscene_1)) goto event_50_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (2))) goto event_50_0_end;
        {
            ((Active*)get_instance(whitefade_17_instances))->blend_color.set_semi_transparency(((Active*)get_instance(whitefade_17_instances))->blend_color.get_semi_transparency()-3);
        }
        ((Active*)get_instance(whitefade_17_instances))->set_x(frame_left());
        ((Active*)get_instance(whitefade_17_instances))->set_y(frame_top());
        ((Active*)get_instance(whitefade_17_instances))->set_x_scale(global_values->get(16));
        ((Active*)get_instance(whitefade_17_instances))->set_y_scale(240);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(2, 1);
    }
    event_50_0_end: ;
}
void Frames::event_func_140()
{
    // event 51_0
    {
        if (!(group_cutscene_1)) goto event_51_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0)) == (2))) goto event_51_0_end;
        if (!((((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(2)) > (345))) goto event_51_0_end;
        global_values->set(4, 5);
        next_frame = 83 + 0;    
    
    }
    event_51_0_end: ;
}
void Frames::event_func_141()
{
    // event 52_0
    {
        if (!(is_key_pressed(SDLK_d))) goto event_52_0_end;
        if (!(is_key_pressed(SDLK_LCTRL))) goto event_52_0_end;
        if (!(is_key_pressed(SDLK_LSHIFT))) goto event_52_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_52_0_end: ;
}
void Frames::event_func_142()
{
    // event 53_0
    {
        if (is_key_pressed(SDLK_d)) goto event_53_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_53_0_end: ;
}
void Frames::event_func_143()
{
    // event 54_0
    {
        if (is_key_pressed(SDLK_LCTRL)) goto event_54_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_54_0_end: ;
}
void Frames::event_func_144()
{
    // event 55_0
    {
        if (is_key_pressed(SDLK_LSHIFT)) goto event_55_0_end;
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_55_0_end: ;
}
void Frames::event_func_145()
{
    // event 57_0
    {
        if (!((global_values->get(1)) == (1))) goto event_57_0_end;
        global_values->set(1, 0);
    }
    event_57_0_end: ;
}
void Frames::event_func_146()
{
    // event 58_0
    {
        if (!((global_values->get(1)) == (5))) goto event_58_0_end;
        global_values->set(1, 0);
    }
    event_58_0_end: ;
}
void Frames::event_func_147()
{
    // event 63_0
    bool or_result_63_0 = false;
    bool or_temp_result_63_0_0 = false;
    {
        // group: Controller Setup | Memory Management
        if (once_condition_63_0) goto or_event_63_0_0_end;
        once_condition_63_0 = true;
        if (!((((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0)) > (0))) goto or_event_63_0_0_end;
        or_result_63_0 = true;
        or_temp_result_63_0_0 = true;
    }
    or_event_63_0_0_end: ;
    // event 63_0
    bool or_temp_result_63_0_1 = false;
    {
        // group: Controller Setup | Memory Management
        if (once_condition_63_0) goto or_event_63_0_1_end;
        once_condition_63_0 = true;
        if (!((((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(1)) > (0))) goto or_event_63_0_1_end;
        or_result_63_0 = true;
        or_temp_result_63_0_1 = true;
        or_event_63_0_1_end: ;
        if (!or_result_63_0) goto or_final_or_event_63_0_1_end;
        joystick2_29_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_joystick2_29(-168, -112), 0);
            joystick2_29_instances.add_back();
        }
    }
    or_final_or_event_63_0_1_end: ;
}
void Frames::event_func_148()
{
    // event 64_0
    {
        // group: Controller Setup | Memory Management
        if (!((((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0)) == (0))) goto event_64_0_end;
        if (not_always_64_0 > loop_count) {
            not_always_64_0 = loop_count + 2;
            goto event_64_0_end;
        }
        not_always_64_0 = loop_count + 2;
        if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) {
            group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = true;
        }
            group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 1, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 2, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 3, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 4, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 5, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 6, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 7, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 8, 2, 0);
    }
    event_64_0_end: ;
}
