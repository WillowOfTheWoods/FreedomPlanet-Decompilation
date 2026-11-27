#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16707()
{
    // event 117_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_117_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (47))) goto event_117_75_end;
        next_frame = 64 + 0;    
    
    }
    event_117_75_end: ;
}
void Frames::event_func_16708()
{
    // event 118_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_118_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (48))) goto event_118_75_end;
        next_frame = 65 + 0;    
    
    }
    event_118_75_end: ;
}
void Frames::event_func_16709()
{
    // event 119_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_119_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (49))) goto event_119_75_end;
        next_frame = 66 + 0;    
    
    }
    event_119_75_end: ;
}
void Frames::event_func_16710()
{
    // event 120_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_120_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (50))) goto event_120_75_end;
        next_frame = 67 + 0;    
    
    }
    event_120_75_end: ;
}
void Frames::event_func_16711()
{
    // event 121_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_121_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (51))) goto event_121_75_end;
        next_frame = 68 + 0;    
    
    }
    event_121_75_end: ;
}
void Frames::event_func_16712()
{
    // event 122_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_122_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (52))) goto event_122_75_end;
        next_frame = 69 + 0;    
    
    }
    event_122_75_end: ;
}
void Frames::event_func_16713()
{
    // event 123_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_123_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (53))) goto event_123_75_end;
        next_frame = 70 + 0;    
    
    }
    event_123_75_end: ;
}
void Frames::event_func_16714()
{
    // event 124_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_124_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (54))) goto event_124_75_end;
        next_frame = 71 + 0;    
    
    }
    event_124_75_end: ;
}
void Frames::event_func_16715()
{
    // event 125_75
    {
        if (!(group_get_back_up_1 && group_get_back_up_jump_to_last_checkpoint_1)) goto event_125_75_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(16)) == (55))) goto event_125_75_end;
        next_frame = 72 + 0;    
    
    }
    event_125_75_end: ;
}
void Frames::event_func_16716()
{
    // event 126_75
    {
        if (!(group_stars_1)) goto event_126_75_end;
        if (not_always_126_75 > loop_count) {
            not_always_126_75 = loop_count + 2;
            goto event_126_75_end;
        }
        not_always_126_75 = loop_count + 2;
        FrameObject * single_instance_126_75_0; single_instance_126_75_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle1_300(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_126_75_0 == NULL)
                    single_instance_126_75_0 = new_obj;
            }
        }
        FrameObject * single_instance_126_75_1; single_instance_126_75_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle2_333(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_126_75_1 == NULL)
                    single_instance_126_75_1 = new_obj;
            }
        }
        FrameObject * single_instance_126_75_2; single_instance_126_75_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle3_334(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_126_75_2 == NULL)
                    single_instance_126_75_2 = new_obj;
            }
        }
        FrameObject * single_instance_126_75_3; single_instance_126_75_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle4_335(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_126_75_3 == NULL)
                    single_instance_126_75_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_126_75_0))->alterables->values.set(2, 20);
        ((Active*)((Active*)single_instance_126_75_0))->alterables->values.set(3, 0);
        ((Active*)((Active*)single_instance_126_75_1))->alterables->values.set(2, 20);
        ((Active*)((Active*)single_instance_126_75_1))->alterables->values.set(3, 180);
        ((Active*)((Active*)single_instance_126_75_2))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_126_75_2))->alterables->values.set(3, 0);
        ((Active*)((Active*)single_instance_126_75_3))->alterables->values.set(2, 10);
        ((Active*)((Active*)single_instance_126_75_3))->alterables->values.set(3, 180);
    }
    event_126_75_end: ;
}
void Frames::event_func_16717()
{
    // event 127_75
    {
        if (!(group_stars_1)) goto event_127_75_end;
        every_127_75 += manager.dt;
        if (every_127_75 < 0.1) goto event_127_75_end;
        every_127_75 -= 0.1;
        sparkle5_336_instances.empty_selection();
        // select single: false true false
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator p_it(sparkle1_300_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator p_it(sparkle2_333_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator p_it(sparkle3_334_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
        // select single: false true true
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator p_it(sparkle4_335_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->x + 0, parent->y + 0), parent->layer);
                sparkle5_336_instances.add_back();
            }
        }
    }
    event_127_75_end: ;
}
void Frames::event_func_16718()
{
    // event 128_75
    {
        if (!(group_stars_1)) goto event_128_75_end;
        every_128_75 += manager.dt;
        if (every_128_75 < 0.02) goto event_128_75_end;
        every_128_75 -= 0.02;
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_128_75_end: ;
}
void Frames::event_func_16719()
{
    // event 129_75
    {
        if (!(group_stars_1)) goto event_129_75_end;
        every_129_75 += manager.dt;
        if (every_129_75 < 0.05) goto event_129_75_end;
        every_129_75 -= 0.05;
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playerskinsash_418_instances))->get_y()-4);
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playerskinsash_418_instances))->get_y()-4);
        }
    }
    event_129_75_end: ;
}
void Frames::event_func_16720()
{
    // event 130_75
    {
        if (!(group_stars_1)) goto event_130_75_end;
        every_130_75 += manager.dt;
        if (every_130_75 < 0.1) goto event_130_75_end;
        every_130_75 -= 0.1;
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playerskinsash_418_instances))->get_y()-4);
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playerskinsash_418_instances))->get_y()-4);
        }
    }
    event_130_75_end: ;
}
void Frames::event_func_16721()
{
    // event 131_75
    {
        if (!(group_stars_1)) goto event_131_75_end;
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
        }
    }
    event_131_75_end: ;
}
void Frames::event_func_16722()
{
    // event 132_75
    {
        if (!(group_stars_1)) goto event_132_75_end;
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+10);
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+10);
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+7);
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+7);
        }
    }
    event_132_75_end: ;
}
void Frames::event_func_16723()
{
    // event 133_75
    {
        if (!(group_boost_sparkle_1)) goto event_133_75_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_133_75_end;
        FrameObject * single_instance_133_75_0; single_instance_133_75_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_133_75_0 == NULL)
                    single_instance_133_75_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_133_75_0))->set_x(((Active*)single_instance_133_75_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_133_75_0))->set_y(((Active*)single_instance_133_75_0)->get_y()-8+randrange(17));
    }
    event_133_75_end: ;
}
void Frames::handle_frame_76_events()
{
    test_collisions_75();
    event_func_16630();
    event_func_16602();
    event_func_16603();
    event_func_379();
    if (!group_continue_1) goto group_continue_1_end;
    event_func_16604();
    group_continue_1_end: ;
    if (!group_countdown_1) goto group_countdown_1_end;
    event_func_16605();
    event_func_16606();
    event_func_16607();
    event_func_16608();
    event_func_16609();
    event_func_16610();
    event_func_16611();
    event_func_16612();
    event_func_16613();
    event_func_16614();
    event_func_16615();
    event_func_16616();
    event_func_16617();
    event_func_16618();
    event_func_16619();
    group_countdown_1_end: ;
    if (!group_game_over_1) goto group_game_over_1_end;
    event_func_16620();
    event_func_16621();
    event_func_16622();
    event_func_16623();
    group_game_over_1_end: ;
    if (!group_get_back_up_1) goto group_get_back_up_1_end;
    event_func_16624();
    event_func_16625();
    event_func_16626();
    event_func_16627();
    event_func_16628();
    event_func_16629();
    event_func_16631();
    event_func_16632();
    event_func_16633();
    event_func_16634();
    event_func_16635();
    event_func_16636();
    event_func_16637();
    event_func_16638();
    event_func_16639();
    event_func_16640();
    event_func_16641();
    event_func_16642();
    event_func_16643();
    event_func_16644();
    event_func_16645();
    event_func_16646();
    event_func_16647();
    event_func_16648();
    event_func_16649();
    event_func_16650();
    event_func_16651();
    event_func_16652();
    event_func_16653();
    event_func_16654();
    event_func_16655();
    event_func_16656();
    event_func_16657();
    event_func_16658();
    event_func_16659();
    event_func_16660();
    if (!group_get_back_up_jump_to_last_checkpoint_1) goto group_get_back_up_jump_to_last_checkpoint_1_end;
    event_func_16661();
    event_func_16662();
    event_func_16663();
    event_func_16664();
    event_func_16665();
    event_func_16666();
    event_func_16667();
    event_func_16668();
    event_func_16669();
    event_func_16670();
    event_func_16671();
    event_func_16672();
    event_func_16673();
    event_func_16674();
    event_func_16675();
    event_func_16676();
    event_func_16677();
    event_func_16678();
    event_func_16679();
    event_func_16680();
    event_func_16681();
    event_func_16682();
    event_func_16683();
    event_func_16684();
    event_func_16685();
    event_func_16686();
    event_func_16687();
    event_func_16688();
    event_func_16689();
    event_func_16690();
    event_func_16691();
    event_func_16692();
    event_func_16693();
    event_func_16694();
    event_func_16695();
    event_func_16696();
    event_func_16697();
    event_func_16698();
    event_func_16699();
    event_func_16700();
    event_func_16701();
    event_func_16702();
    event_func_16703();
    event_func_16704();
    event_func_16705();
    event_func_16706();
    event_func_16707();
    event_func_16708();
    event_func_16709();
    event_func_16710();
    event_func_16711();
    event_func_16712();
    event_func_16713();
    event_func_16714();
    event_func_16715();
    group_get_back_up_jump_to_last_checkpoint_1_end: ;
    group_get_back_up_1_end: ;
    if (!group_stars_1) goto group_stars_1_end;
    event_func_16716();
    event_func_16717();
    event_func_16718();
    event_func_16719();
    event_func_16720();
    event_func_16721();
    event_func_16722();
    group_stars_1_end: ;
    if (!group_boost_sparkle_1) goto group_boost_sparkle_1_end;
    event_func_16723();
    group_boost_sparkle_1_end: ;
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
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_652();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_76_pre_events()
{
}
void Frames::event_func_16724()
{
    // event 1_75
    {
        if (!(!media.is_channel_playing(32-1))) goto event_1_75_end;
        media.play(str_data_bgm_m_gameover_ogg_53, 32-1, 0);
    }
    event_1_75_end: ;
}
void Frames::event_func_16725()
{
    // event 2_75
    {
        countdowncrystal_3884_instances.clear_selection();
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(countdowncrystal_3884_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(3, -1);
        ((Active*)get_instance(controllermusic_128_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        fallencharacter_3882_instances.clear_selection();
        for (ObjectIterator it(fallencharacter_3882_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(global_values->get(1));
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        ((Counter*)get_instance(totalcrystals_854_instances))->set(manager.score);
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
            ((Active*)*it)->set_x(frame_left());
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        ((Counter*)get_instance(guicrystal_121_instances))->set(999);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, 0);
        set_display_center(320+(106-global_values->get(19)*53), -1);
    }
    event_2_75_end: ;
}
void Frames::on_frame_76_start_events()
{
    event_func_16724();
    event_func_16725();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_76_init()
{
    index = 75;
    width = 640;
    height = 1280;
    virtual_width = 640;
    virtual_height = 1280;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(2);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&effectsspadeimage_321_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, NULL};
    qualifier_4.set(9, &qualifier_4_instances[0]);
    add_background_object(create_separatormasterobjects2_12(-192, -160), 0);
    add_background_object(create_backdrop_3881(264, 24), 0);
    add_object(create_playerskinmillatail_381(-179, 201), 0);
    add_object(create_playerskincaroltail_444(-88, 201), 0);
    add_object(create_fallencharacter_3882(204, 201), 0);
    add_object(create_floorlight_3883(212, 216), 0);
    add_object(create_countdowncrystal_3884(335, 282), 0);
    add_object(create_countdowncrystal_3884(313, 274), 0);
    add_object(create_countdowncrystal_3884(303, 282), 0);
    add_object(create_countdowncrystal_3884(335, 298), 0);
    add_object(create_countdowncrystal_3884(335, 314), 0);
    add_object(create_countdowncrystal_3884(327, 330), 0);
    add_object(create_countdowncrystal_3884(303, 298), 0);
    add_object(create_countdowncrystal_3884(319, 306), 0);
    add_object(create_countdowncrystal_3884(311, 338), 0);
    add_object(create_countdowncrystal_3884(325, 274), 0);
    add_object(create_countdowncrystal_3884(336, 399), 0);
    add_object(create_countdowncrystal_3884(327, 383), 0);
    add_object(create_countdowncrystal_3884(313, 383), 0);
    add_object(create_countdowncrystal_3884(336, 431), 0);
    add_object(create_countdowncrystal_3884(312, 415), 0);
    add_object(create_countdowncrystal_3884(327, 447), 0);
    add_object(create_countdowncrystal_3884(304, 399), 0);
    add_object(create_countdowncrystal_3884(328, 415), 0);
    add_object(create_countdowncrystal_3884(313, 447), 0);
    add_object(create_countdowncrystal_3884(304, 431), 0);
    add_object(create_countdowncrystal_3884(340, 494), 0);
    add_object(create_countdowncrystal_3884(332, 494), 0);
    add_object(create_countdowncrystal_3884(324, 494), 0);
    add_object(create_countdowncrystal_3884(316, 494), 0);
    add_object(create_countdowncrystal_3884(324, 526), 0);
    add_object(create_countdowncrystal_3884(308, 494), 0);
    add_object(create_countdowncrystal_3884(300, 494), 0);
    add_object(create_countdowncrystal_3884(332, 510), 0);
    add_object(create_countdowncrystal_3884(308, 558), 0);
    add_object(create_countdowncrystal_3884(316, 542), 0);
    add_object(create_countdowncrystal_3884(314, 636), 0);
    add_object(create_countdowncrystal_3884(328, 604), 0);
    add_object(create_countdowncrystal_3884(314, 604), 0);
    add_object(create_countdowncrystal_3884(336, 652), 0);
    add_object(create_countdowncrystal_3884(304, 640), 0);
    add_object(create_countdowncrystal_3884(328, 668), 0);
    add_object(create_countdowncrystal_3884(304, 620), 0);
    add_object(create_countdowncrystal_3884(328, 636), 0);
    add_object(create_countdowncrystal_3884(314, 668), 0);
    add_object(create_countdowncrystal_3884(304, 660), 0);
    add_object(create_countdowncrystal_3884(324, 716), 0);
    add_object(create_countdowncrystal_3884(313, 716), 0);
    add_object(create_countdowncrystal_3884(303, 716), 0);
    add_object(create_countdowncrystal_3884(335, 764), 0);
    add_object(create_countdowncrystal_3884(311, 748), 0);
    add_object(create_countdowncrystal_3884(325, 780), 0);
    add_object(create_countdowncrystal_3884(303, 732), 0);
    add_object(create_countdowncrystal_3884(325, 748), 0);
    add_object(create_countdowncrystal_3884(311, 780), 0);
    add_object(create_countdowncrystal_3884(335, 716), 0);
    add_object(create_countdowncrystal_3884(335, 839), 0);
    add_object(create_countdowncrystal_3884(335, 823), 0);
    add_object(create_countdowncrystal_3884(303, 823), 0);
    add_object(create_countdowncrystal_3884(335, 871), 0);
    add_object(create_countdowncrystal_3884(303, 855), 0);
    add_object(create_countdowncrystal_3884(324, 855), 0);
    add_object(create_countdowncrystal_3884(303, 839), 0);
    add_object(create_countdowncrystal_3884(335, 855), 0);
    add_object(create_countdowncrystal_3884(335, 887), 0);
    add_object(create_countdowncrystal_3884(313, 855), 0);
    add_object(create_countdowncrystal_3884(318, 958), 0);
    add_object(create_countdowncrystal_3884(328, 926), 0);
    add_object(create_countdowncrystal_3884(315, 926), 0);
    add_object(create_countdowncrystal_3884(336, 974), 0);
    add_object(create_countdowncrystal_3884(304, 982), 0);
    add_object(create_countdowncrystal_3884(328, 990), 0);
    add_object(create_countdowncrystal_3884(304, 934), 0);
    add_object(create_countdowncrystal_3884(328, 958), 0);
    add_object(create_countdowncrystal_3884(315, 990), 0);
    add_object(create_countdowncrystal_3884(336, 942), 0);
    add_object(create_countdowncrystal_3884(327, 1034), 0);
    add_object(create_countdowncrystal_3884(313, 1034), 0);
    add_object(create_countdowncrystal_3884(303, 1042), 0);
    add_object(create_countdowncrystal_3884(311, 1082), 0);
    add_object(create_countdowncrystal_3884(324, 1066), 0);
    add_object(create_countdowncrystal_3884(325, 1098), 0);
    add_object(create_countdowncrystal_3884(303, 1098), 0);
    add_object(create_countdowncrystal_3884(335, 1050), 0);
    add_object(create_countdowncrystal_3884(313, 1098), 0);
    add_object(create_countdowncrystal_3884(335, 1098), 0);
    add_object(create_countdowncrystal_3884(320, 1160), 0);
    add_object(create_countdowncrystal_3884(320, 1144), 0);
    add_object(create_countdowncrystal_3884(312, 1152), 0);
    add_object(create_countdowncrystal_3884(320, 1192), 0);
    add_object(create_countdowncrystal_3884(336, 1208), 0);
    add_object(create_countdowncrystal_3884(304, 1160), 0);
    add_object(create_countdowncrystal_3884(314, 1208), 0);
    add_object(create_countdowncrystal_3884(320, 1176), 0);
    add_object(create_countdowncrystal_3884(326, 1208), 0);
    add_object(create_countdowncrystal_3884(304, 1208), 0);
    add_object(create_marker_3885(320, 247), 0);
    add_object(create_playerskinsashhair_417(-40, 203), 0);
    add_object(create_playerskinsash_418(-43, 203), 0);
    add_object(create_ringsparkle_139(-137, 71), 0);
    add_object(create_sparkle1_300(-153, 111), 0);
    add_object(create_sparkle2_333(-153, 87), 0);
    add_object(create_sparkle3_334(-129, 39), 0);
    add_object(create_sparkle4_335(-153, 15), 0);
    add_object(create_sparkle5_336(-120, 72), 0);
    add_object(create_guirings_122(-32, -96), 0);
    add_object(create_playerinput_19(-176, -136), 0);
    add_object(create_masterinput_20(-152, -136), 0);
    add_object(create_inputsp1_21(-128, -136), 0);
    add_object(create_globalinputdata_22(-104, -136), 0);
    add_object(create_masterlevel_37(-32, 0), 0);
    add_object(create_controllermusic_128(-32, 64), 0);
    add_object(create_playerothers_123(-32, -24), 0);
    add_object(create_playerskincarol_445(-92, 201), 0);
    add_object(create_guienergy_124(16, -32), 0);
    add_object(create_totalcrystals_854(366, 76), 0);
    add_object(create_levelcardactclear4_846(272, 56), 0);
    add_object(create_guilifebasemeter_125(128, -32), 0);
    add_object(create_playerskinspade_419(-138, 201), 0);
    add_object(create_guicrystal_121(197, -25), 0);
    add_object(create_playerskinmilla_446(-179, 201), 0);
    add_object(create_playerskincarolbike_382(-232, 200), 0);
    add_object(create_mapdata_30(-144, -80), 0);
    add_object(create_windowcontrol_27(-144, -112), 0);
    add_object(create_mapdata2_32(-144, -72), 0);
    add_object(create_fade_54(0, 0), 1);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_sound_continue0_running = false;
    loop_sound_continue0_index = 0;
    loop_sound_continue1_running = false;
    loop_sound_continue1_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_continue0", 15)].set(&loop_wrapper_sound_continue0_75, &loop_sound_continue0_running, &loop_sound_continue0_index);
        frame_loops[std::string("sound_continue1", 15)].set(&loop_wrapper_sound_continue1_75, &loop_sound_continue1_running, &loop_sound_continue1_index);
        loops_initialized = true;
    }
    group_stars_1 = false;
    group_continue_1 = false;
    group_game_over_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    every_65_75 = 0.0f;
    not_always_121_0 = loop_count;
    not_always_99_0 = loop_count;
    not_always_19_75 = loop_count;
    group_debug_mode_debugging_1 = false;
    not_always_54_75 = loop_count;
    every_127_75 = 0.0f;
    group_get_back_up_1 = false;
    every_18_75 = 0.0f;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_boost_sparkle_1 = false;
    not_always_66_0 = loop_count;
    group_sound_events_milla_1 = false;
    not_always_126_75 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_97_0 = loop_count;
    every_128_75 = 0.0f;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    once_condition_27_75 = false;
    not_always_96_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_98_0 = loop_count;
    not_always_20_75 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    group_get_back_up_jump_to_last_checkpoint_1 = false;
    not_always_103_0 = loop_count;
    not_always_168_0 = loop_count;
    group_countdown_1 = true;
    not_always_64_0 = loop_count;
    not_always_150_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_101_0 = loop_count;
    every_130_75 = 0.0f;
    group_sound_events_spade_1 = false;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_140_0 = loop_count;
    every_129_75 = 0.0f;
    not_always_102_0 = loop_count;
    not_always_95_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    every_22_75 = 0.0f;
}
void Frames::event_func_16726()
{
    // event 1469_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1469_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1469_76_end;
        if (test_obstacle(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x(), ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y()+13)) goto event_1469_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1469_76_end: ;
}
void Frames::event_func_16727()
{
    // event 1470_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1470_76_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1470_76_end;
        if (!(test_obstacle(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x(), ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y()+13))) goto event_1470_76_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1470_76_end: ;
}
void Frames::event_func_16728()
{
    // event 1471_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1471_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1471_76_end;
        if (test_obstacle(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_x(), ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_y()+13)) goto event_1471_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1471_76_end: ;
}
void Frames::event_func_16729()
{
    // event 1472_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1472_76_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1472_76_end;
        if (!(test_obstacle(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_x(), ((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_y()+13))) goto event_1472_76_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1472_76_end: ;
}
void Frames::loop_floorcheck_76()
{
    event_func_16726();
    event_func_16727();
    event_func_16728();
    event_func_16729();
}
void Frames::loop_spawndebris_76()
{
    event_func_1178();
}
void Frames::event_func_16730()
{
    // event 1965_76
    {
        if (!(group_main_engine_1)) goto event_1965_76_end;
        if (!((global_values->get(4)) == (0))) goto event_1965_76_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_disaster_ogg_276, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1965_76_end: ;
}
void Frames::event_func_16731()
{
    // event 1966_76
    {
        if (!(group_main_engine_1)) goto event_1966_76_end;
        if (!((global_values->get(4)) == (1))) goto event_1966_76_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_trouble_ogg_143, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1966_76_end: ;
}
void Frames::loop_play_music_5_76()
{
    event_func_16730();
    event_func_16731();
}
void Frames::event_func_16732()
{
    // event 1967_76
    {
        if (!(group_main_engine_1)) goto event_1967_76_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_rescue_ogg_100, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1967_76_end: ;
}
void Frames::loop_play_music_6_76()
{
    event_func_16732();
}
void Frames::event_func_16733()
{
    // event 1710_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1710_76_end;
        if (!((global_values->get(26)) == (0))) goto event_1710_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1710_76_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1710_76_end: ;
}
void Frames::event_func_16734()
{
    // event 1711_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1711_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1711_76_end: ;
}
void Frames::event_func_16735()
{
    // event 1712_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1712_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1712_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1712_76_end: ;
}
void Frames::event_func_16736()
{
    // event 1753_76
    {
        if (!(group_main_engine_1)) goto event_1753_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1753_76_end: ;
}
void Frames::loop_voice_76()
{
    event_func_16733();
    event_func_16734();
    event_func_16735();
    event_func_16736();
}
void Frames::loop_wrapper_sound_hurt1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_76(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_76(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_76(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_76(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_76(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_76(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_76(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_76(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_76(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_76();
}
void Frames::loop_wrapper_play_music_6_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_76();
}
void Frames::loop_wrapper_sound_go0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_76(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_20();
}
void Frames::loop_wrapper_sound_explode3_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_76(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_76(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_76(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_16737()
{
    // event 1586_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1586_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (6))) goto event_1586_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) <= (7))) goto event_1586_76_end;
        FrameObject * single_instance_1586_76_0; single_instance_1586_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1586_76_0 == NULL)
                single_instance_1586_76_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->destroy();
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, 12);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(5, -6);
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
    }
    event_1586_76_end: ;
}
void Frames::col_0_76()
{
    event_func_16737();
}
void Frames::event_func_16738()
{
    // event 1602_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1602_76_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1602_76_0; single_instance_1602_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1602_76_0 == NULL)
                single_instance_1602_76_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1602_76_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(5, -6);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.stop_sample(SOUND_METALHIT_45);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1602_76_end: ;
}
void Frames::col_6_76()
{
    event_func_16738();
}
void Frames::event_func_16739()
{
    // event 1478_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1478_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) == (1))) goto event_1478_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(6, 2);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(3, 3);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, -8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
        media.play_id(SOUND_COMMON_EXPLODE9_313, 2-1);
        FrameObject * single_instance_1478_76_0; single_instance_1478_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 10), ((Active*)col_instance_1)->layer);
            if (single_instance_1478_76_0 == NULL)
                single_instance_1478_76_0 = new_obj;
        }
    }
    event_1478_76_end: ;
}
void Frames::col_15_76()
{
    event_func_16739();
}
void Frames::event_func_16740()
{
    // event 1571_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1571_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) > (3))) goto event_1571_76_end;
        media.play_id(SOUND_BLAST1_55, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 1));
    }
    event_1571_76_end: ;
}
