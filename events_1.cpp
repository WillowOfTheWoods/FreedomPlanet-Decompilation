#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1()
{
    // event 171_0
    {
        if (!(group_sound_events_lilac_1)) goto event_171_0_end;
        media.play_id(SOUND_LILAC_HURT_2_81, -1, 1);
    }
    event_171_0_end: ;
}
void Frames::event_func_2()
{
    // event 204_0
    {
        if (!(group_sound_events_carol_1)) goto event_204_0_end;
        media.play_id(SOUND_CAROL_HURT1_115, -1, 1);
    }
    event_204_0_end: ;
}
void Frames::event_func_3()
{
    // event 216_0
    {
        if (!(group_sound_events_milla_1)) goto event_216_0_end;
        media.play_id(SOUND_MILLA_HURT_2_180, -1, 1);
    }
    event_216_0_end: ;
}
void Frames::event_func_4()
{
    // event 228_0
    {
        if (!(group_sound_events_torque_1)) goto event_228_0_end;
        media.play_id(SOUND_TORQUE_HURT_2_248, -1, 1);
    }
    event_228_0_end: ;
}
void Frames::loop_sound_hurt1_0()
{
    event_func_1();
    event_func_2();
    event_func_3();
    event_func_4();
}
void Frames::event_func_5()
{
    // event 201_0
    {
        if (!(group_sound_events_carol_1)) goto event_201_0_end;
        media.play_id(SOUND_CAROL_KICK1_140, -1, 1);
    }
    event_201_0_end: ;
}
void Frames::loop_sound_kick1_0()
{
    event_func_5();
}
void Frames::event_func_6()
{
    // event 200_0
    {
        if (!(group_sound_events_carol_1)) goto event_200_0_end;
        media.play_id(SOUND_CAROL_KICK0_139, -1, 1);
    }
    event_200_0_end: ;
}
void Frames::loop_sound_kick0_0()
{
    event_func_6();
}
void Frames::event_func_7()
{
    // event 188_0
    {
        if (!(group_sound_events_lilac_1)) goto event_188_0_end;
        media.stop_sample(SOUND_LILAC_ATTACK0_84);
        media.stop_sample(SOUND_LILAC_ATTACK1_85);
        media.stop_sample(SOUND_LILAC_ATTACK_3_86);
        media.stop_sample(SOUND_LILAC_ATTACK3_87);
        media.stop_sample(SOUND_LILAC_HURT_2_81);
        media.stop_sample(SOUND_LILAC_HURT_3_82);
        media.stop_sample(SOUND_LILAC_HURT_4_83);
        media.stop_sample(SOUND_LILAC_HURT_1_80);
        media.stop_sample(SOUND_LILAC_HEYCOMEON_2_92);
        media.stop_sample(SOUND_LILAC_WHATSWRONG_2_93);
        media.stop_sample(SOUND_LILAC_BADTIME_94);
        media.stop_sample(SOUND_LILAC_CANTMOVEIT_97);
        media.stop_sample(SOUND_LILAC_HITMEIFYOUCAN_131);
        media.stop_sample(SOUND_LILAC_CYCLONE1_174);
        media.stop_sample(SOUND_LILAC_UPPERCUT_1_175);
        media.stop_sample(SOUND_LILAC_UPPERCUT1_176);
        media.stop_sample(SOUND_LILAC_UPPERCUT_4_177);
    }
    event_188_0_end: ;
}
void Frames::event_func_8()
{
    // event 208_0
    {
        if (!(group_sound_events_carol_1)) goto event_208_0_end;
        media.stop_sample(SOUND_CAROL_GO_113);
        media.stop_sample(SOUND_CAROL_HURT_1_114);
        media.stop_sample(SOUND_CAROL_HURT1_115);
        media.stop_sample(SOUND_CAROL_HURT2_118);
        media.stop_sample(SOUND_CAROL_HURT3_119);
        media.stop_sample(SOUND_CAROL_PUNCH_4_122);
        media.stop_sample(SOUND_CAROL_PUNCH_1_120);
        media.stop_sample(SOUND_CAROL_PUNCH1_116);
        media.stop_sample(SOUND_CAROL_PUNCH2_121);
        media.stop_sample(SOUND_CAROL_WALLJUMP_2_117);
        media.stop_sample(SOUND_CAROL_WHYWESTOP_2_123);
        media.stop_sample(SOUND_CAROL_IMBORED_2_125);
        media.stop_sample(SOUND_CAROL_WHATTHINKDOIN_2_112);
        media.stop_sample(SOUND_CAROL_KICK_138);
        media.stop_sample(SOUND_CAROL_POUNCE_2_133);
    }
    event_208_0_end: ;
}
void Frames::event_func_9()
{
    // event 225_0
    {
        if (!(group_sound_events_milla_1)) goto event_225_0_end;
        media.stop_sample(SOUND_MILLA_HURT0_179);
        media.stop_sample(SOUND_MILLA_HURT_2_180);
        media.stop_sample(SOUND_MILLA_HURT2_181);
        media.stop_sample(SOUND_MILLA_HURT3_182);
        media.stop_sample(SOUND_MILLA_YAY_186);
        media.stop_sample(SOUND_MILLA_FLY_2_170);
        media.stop_sample(SOUND_MILLA_NICE_202);
        media.stop_sample(SOUND_MILLA_OOOH_203);
        media.stop_sample(SOUND_MILLA_SHINY_204);
        media.stop_sample(SOUND_MILLA_WHATSHOULDIDO_205);
        media.stop_sample(SOUND_MILLA_UMMHEH_206);
        media.stop_sample(SOUND_MILLA_STARINGATME_207);
        media.stop_sample(SOUND_MILLA_ATTACK0_246);
    }
    event_225_0_end: ;
}
void Frames::event_func_10()
{
    // event 233_0
    {
        if (!(group_sound_events_torque_1)) goto event_233_0_end;
        media.stop_sample(SOUND_TORQUE_HURT_1_247);
        media.stop_sample(SOUND_TORQUE_HURT_2_248);
        media.stop_sample(SOUND_TORQUE_NOTGONNABUDGE_2_250);
    }
    event_233_0_end: ;
}
void Frames::loop_stop_voices_0()
{
    event_func_7();
    event_func_8();
    event_func_9();
    event_func_10();
}
void Frames::event_func_11()
{
    // event 184_0
    {
        if (!(group_sound_events_lilac_1)) goto event_184_0_end;
        media.play_id(SOUND_LILAC_HEYCOMEON_2_92, -1, 1);
    }
    event_184_0_end: ;
}
void Frames::event_func_12()
{
    // event 192_0
    {
        if (!(group_sound_events_carol_1)) goto event_192_0_end;
        media.play_id(SOUND_CAROL_WHYWESTOP_2_123, -1, 1);
    }
    event_192_0_end: ;
}
void Frames::event_func_13()
{
    // event 212_0
    {
        if (!(group_sound_events_milla_1)) goto event_212_0_end;
        media.play_id(SOUND_MILLA_WHATSHOULDIDO_205, -1, 1);
    }
    event_212_0_end: ;
}
void Frames::loop_sound_idle3_0()
{
    event_func_11();
    event_func_12();
    event_func_13();
}
void Frames::event_func_14()
{
    // event 185_0
    {
        if (!(group_sound_events_lilac_1)) goto event_185_0_end;
        media.play_id(SOUND_LILAC_WHATSWRONG_2_93, -1, 1);
    }
    event_185_0_end: ;
}
void Frames::event_func_15()
{
    // event 193_0
    {
        if (!(group_sound_events_carol_1)) goto event_193_0_end;
        media.play_id(SOUND_CAROL_IMBORED_2_125, -1, 1);
    }
    event_193_0_end: ;
}
void Frames::event_func_16()
{
    // event 213_0
    {
        if (!(group_sound_events_milla_1)) goto event_213_0_end;
        media.play_id(SOUND_MILLA_STARINGATME_207, -1, 1);
    }
    event_213_0_end: ;
}
void Frames::loop_sound_idle5_0()
{
    event_func_14();
    event_func_15();
    event_func_16();
}
void Frames::event_func_17()
{
    // event 169_0
    {
        if (!(group_sound_events_lilac_1)) goto event_169_0_end;
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_169_0_end: ;
}
void Frames::event_func_18()
{
    // event 189_0
    {
        if (!(group_sound_events_spade_1)) goto event_189_0_end;
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_189_0_end: ;
}
void Frames::event_func_19()
{
    // event 209_0
    {
        if (!(group_sound_events_milla_1)) goto event_209_0_end;
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_209_0_end: ;
}
void Frames::event_func_20()
{
    // event 226_0
    {
        if (!(group_sound_events_torque_1)) goto event_226_0_end;
        media.play_id(SOUND_JUMP_T_2_233, -1, 1);
    }
    event_226_0_end: ;
}
void Frames::loop_sound_jump_0()
{
    event_func_17();
    event_func_18();
    event_func_19();
    event_func_20();
}
void Frames::event_func_21()
{
    // event 222_0
    {
        if (!(group_sound_events_milla_1)) goto event_222_0_end;
        media.play_id(SOUND_MILLA_OOOH_203, -1, 1);
    }
    event_222_0_end: ;
}
void Frames::loop_sound_dig2_0()
{
    event_func_21();
}
void Frames::event_func_22()
{
    // event 223_0
    {
        if (!(group_sound_events_milla_1)) goto event_223_0_end;
        media.play_id(SOUND_MILLA_SHINY_204, -1, 1);
    }
    event_223_0_end: ;
}
void Frames::loop_sound_dig3_0()
{
    event_func_22();
}
void Frames::event_func_23()
{
    // event 220_0
    {
        if (!(group_sound_events_milla_1)) goto event_220_0_end;
        media.play_id(SOUND_MILLA_YAY_186, -1, 1);
    }
    event_220_0_end: ;
}
void Frames::loop_sound_dig0_0()
{
    event_func_23();
}
void Frames::event_func_24()
{
    // event 221_0
    {
        if (!(group_sound_events_milla_1)) goto event_221_0_end;
        media.play_id(SOUND_MILLA_NICE_202, -1, 1);
    }
    event_221_0_end: ;
}
void Frames::loop_sound_dig1_0()
{
    event_func_24();
}
void Frames::event_func_25()
{
    // event 174_0
    {
        if (!(group_sound_events_lilac_1)) goto event_174_0_end;
        media.play_id(SOUND_LILAC_HURTNO_90, -1, 1);
    }
    event_174_0_end: ;
}
void Frames::event_func_26()
{
    // event 219_0
    {
        if (!(group_sound_events_milla_1)) goto event_219_0_end;
        media.play_id(SOUND_MILLA_SCREAMNO_209, -1, 1);
    }
    event_219_0_end: ;
}
void Frames::loop_sound_help_0()
{
    event_func_25();
    event_func_26();
}
void Frames::event_func_27()
{
    // event 167_0
    {
        media.play_id(SOUND_COMMON_EXPLODE5C_320, -1, 1);
    }
    event_167_0_end: ;
}
void Frames::loop_sound_explode8_0()
{
    event_func_27();
}
void Frames::event_func_28()
{
    // event 162_0
    {
        media.play_id(SOUND_COMMON_EXPLODE9_313, -1, 1);
    }
    event_162_0_end: ;
}
void Frames::loop_sound_explode3_0()
{
    event_func_28();
}
void Frames::event_func_29()
{
    // event 173_0
    {
        if (!(group_sound_events_lilac_1)) goto event_173_0_end;
        media.play_id(SOUND_LILAC_HURT_4_83, -1, 1);
    }
    event_173_0_end: ;
}
void Frames::event_func_30()
{
    // event 206_0
    {
        if (!(group_sound_events_carol_1)) goto event_206_0_end;
        media.play_id(SOUND_CAROL_HURT3_119, -1, 1);
    }
    event_206_0_end: ;
}
void Frames::event_func_31()
{
    // event 218_0
    {
        if (!(group_sound_events_milla_1)) goto event_218_0_end;
        media.play_id(SOUND_MILLA_HURT3_182, -1, 1);
    }
    event_218_0_end: ;
}
void Frames::loop_sound_hurt3_0()
{
    event_func_29();
    event_func_30();
    event_func_31();
    event_func_4();
}
void Frames::event_func_32()
{
    // event 62_0
    {
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(4, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(5, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(6, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(7, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(8, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(9, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(10, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(11, get_max(((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(0, 2, 0), 1)/math_helper/100.0);
    }
    event_62_0_end: ;
}
void Frames::loop_import_deadzones_0()
{
    event_func_32();
}
void Frames::event_func_33()
{
    // event 166_0
    {
        media.play_id(SOUND_COMMON_EXPLODE5B_315, -1, 1);
    }
    event_166_0_end: ;
}
void Frames::loop_sound_explode7_0()
{
    event_func_33();
}
void Frames::event_func_34()
{
    // event 165_0
    {
        media.play_id(SOUND_COMMON_EXPLODE5_314, -1, 1);
    }
    event_165_0_end: ;
}
void Frames::loop_sound_explode6_0()
{
    event_func_34();
}
void Frames::event_func_35()
{
    // event 164_0
    {
        media.play_id(SOUND_COMMON_EXPLODE9C_322, -1, 1);
    }
    event_164_0_end: ;
}
void Frames::loop_sound_explode5_0()
{
    event_func_35();
}
void Frames::event_func_36()
{
    // event 163_0
    {
        media.play_id(SOUND_COMMON_EXPLODE9B_321, -1, 1);
    }
    event_163_0_end: ;
}
void Frames::loop_sound_explode4_0()
{
    event_func_36();
}
void Frames::event_func_37()
{
    // event 183_0
    {
        if (!(group_sound_events_lilac_1)) goto event_183_0_end;
        media.play_id(SOUND_LILAC_DIE_2_91, -1, 1);
    }
    event_183_0_end: ;
}
void Frames::event_func_38()
{
    // event 191_0
    {
        if (!(group_sound_events_carol_1)) goto event_191_0_end;
        media.play_id(SOUND_CAROL_DIE_2_128, -1, 1);
    }
    event_191_0_end: ;
}
void Frames::event_func_39()
{
    // event 211_0
    {
        if (!(group_sound_events_milla_1)) goto event_211_0_end;
        media.play_id(SOUND_MILLA_DIE2_178, -1, 1);
    }
    event_211_0_end: ;
}
void Frames::event_func_40()
{
    // event 231_0
    {
        if (!(group_sound_events_torque_1)) goto event_231_0_end;
        media.play_id(SOUND_TORQUE_DIE_249, -1, 1);
    }
    event_231_0_end: ;
}
void Frames::loop_sound_die_0()
{
    event_func_37();
    event_func_38();
    event_func_39();
    event_func_40();
}
void Frames::event_func_41()
{
    // event 202_0
    {
        if (!(group_sound_events_carol_1)) goto event_202_0_end;
        media.play_id(SOUND_CAROL_KICK3_141, -1, 1);
    }
    event_202_0_end: ;
}
void Frames::loop_sound_kick2_0()
{
    event_func_41();
}
void Frames::event_func_42()
{
    // event 190_0
    {
        if (!(group_sound_events_spade_1)) goto event_190_0_end;
        media.stop_sample(SOUND_SPADE_WHYWONTMOVE_109);
    }
    event_190_0_end: ;
}
void Frames::event_func_43()
{
    // event 234_0
    {
        media.stop_sample(SOUND_LILAC_CANTMOVEIT_97);
        media.stop_sample(SOUND_CAROL_WONTMOVE_124);
        media.stop_sample(SOUND_SPADE_WHYWONTMOVE_109);
        media.stop_sample(SOUND_MILLA_CANTMOVEIT_201);
        media.stop_sample(SOUND_TORQUE_NOTGONNABUDGE_2_250);
    }
    event_234_0_end: ;
}
void Frames::loop_sound_stoppush_0()
{
    event_func_42();
    event_func_43();
}
void Frames::event_func_44()
{
    // event 160_0
    {
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
    }
    event_160_0_end: ;
}
void Frames::loop_sound_explode1_0()
{
    event_func_44();
}
void Frames::event_func_45()
{
    // event 240_0
    {
        next_frame = 7 + 0;    
    
        media.stop_channel(32-1);
    }
    event_240_0_end: ;
}
void Frames::loop_return_0()
{
    event_func_45();
}
void Frames::event_func_46()
{
    // event 68_0
    {
        if (!(group_pc_controls_input_management_record_input_1)) goto event_68_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(0, loop_record_inputs_index+1, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, loop_record_inputs_index+1, 2, 0);
    }
    event_68_0_end: ;
}
void Frames::event_func_47()
{
    // event 69_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_69_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (0))) goto event_69_0_end;
        if (!(is_key_pressed(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)))) goto event_69_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_69_0_end: ;
}
void Frames::event_func_48()
{
    // event 70_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_70_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_70_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (0))) goto event_70_0_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_70_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_70_0_end: ;
}
void Frames::event_func_49()
{
    // event 71_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_71_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_71_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (1))) goto event_71_0_end;
        if (!(is_mouse_pressed(SDL_BUTTON_RIGHT))) goto event_71_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_71_0_end: ;
}
void Frames::event_func_50()
{
    // event 72_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_72_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_72_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (2))) goto event_72_0_end;
        if (!(is_mouse_pressed(SDL_BUTTON_MIDDLE))) goto event_72_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_72_0_end: ;
}
void Frames::event_func_51()
{
    // event 73_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_73_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_73_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (3))) goto event_73_0_end;
        if (!(false)) goto event_73_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_73_0_end: ;
}
void Frames::event_func_52()
{
    // event 74_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_74_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_74_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (4))) goto event_74_0_end;
        if (!(false)) goto event_74_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_74_0_end: ;
}
void Frames::event_func_53()
{
    // event 75_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_75_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (2))) goto event_75_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(get_min(get_max((get_mouse_x()-160-frame_left())*12.5*((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0), 0), 1000), loop_record_inputs_index+1, 2, 0);
    }
    event_75_0_end: ;
}
void Frames::event_func_54()
{
    // event 76_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1)) goto event_76_0_end;
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (3))) goto event_76_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(get_min(get_max((get_mouse_y()-112-frame_top())*17.86*((ArrayObject*)get_instance(mapdata_30_instances))->get_value(loop_record_inputs_index+1, 1, 0), 0), 1000), loop_record_inputs_index+1, 2, 0);
    }
    event_76_0_end: ;
}
void Frames::event_func_55()
{
    // event 77_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_77_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (0))) goto event_77_0_end;
        if (!(is_joystick_pressed(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)))) goto event_77_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_77_0_end: ;
}
void Frames::event_func_56()
{
    // event 78_0
    bool or_result_78_0 = false;
    bool or_temp_result_78_0_0 = false;
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto or_event_78_0_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto or_event_78_0_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (0))) goto or_event_78_0_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) == (315))) goto or_event_78_0_0_end;
        or_result_78_0 = true;
        or_temp_result_78_0_0 = true;
    }
    or_event_78_0_0_end: ;
    // event 78_0
    bool or_temp_result_78_0_1 = false;
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto or_event_78_0_1_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto or_event_78_0_1_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (0))) goto or_event_78_0_1_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) > (-1))) goto or_event_78_0_1_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) <= (45))) goto or_event_78_0_1_end;
        or_result_78_0 = true;
        or_temp_result_78_0_1 = true;
        or_event_78_0_1_end: ;
        if (!or_result_78_0) goto or_final_or_event_78_0_1_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    or_final_or_event_78_0_1_end: ;
}
void Frames::event_func_57()
{
    // event 79_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_79_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_79_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (90))) goto event_79_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) >= (45))) goto event_79_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) <= (135))) goto event_79_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_79_0_end: ;
}
void Frames::event_func_58()
{
    // event 80_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_80_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_80_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (180))) goto event_80_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) >= (135))) goto event_80_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) <= (225))) goto event_80_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_80_0_end: ;
}
void Frames::event_func_59()
{
    // event 81_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_81_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (1))) goto event_81_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)) == (270))) goto event_81_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) >= (225))) goto event_81_0_end;
        if (!((get_joystick_dpad_degrees(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) <= (315))) goto event_81_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(1000, loop_record_inputs_index+1, 2, 0);
    }
    event_81_0_end: ;
}
void Frames::event_func_60()
{
    // event 82_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_82_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (2))) goto event_82_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max(get_joystick_x(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0), 0), loop_record_inputs_index+1, 2, 0);
    }
    event_82_0_end: ;
}
void Frames::event_func_61()
{
    // event 83_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_83_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (3))) goto event_83_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max(get_joystick_y(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0), 0), loop_record_inputs_index+1, 2, 0);
    }
    event_83_0_end: ;
}
void Frames::event_func_62()
{
    // event 84_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_84_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (4))) goto event_84_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max(get_joystick_dummy(0.0f, ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0), 0), loop_record_inputs_index+1, 2, 0);
    }
    event_84_0_end: ;
}
void Frames::event_func_63()
{
    // event 85_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_85_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (5))) goto event_85_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max((get_joystick_dummy(0.0f, ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))-32768)*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)/math_helper/32.767, 0), loop_record_inputs_index+1, 2, 0);
    }
    event_85_0_end: ;
}
void Frames::event_func_64()
{
    // event 86_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_86_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (6))) goto event_86_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max((get_joystick_dummy(0.0f, ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))-32768)*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)/math_helper/32.767, 0), loop_record_inputs_index+1, 2, 0);
    }
    event_86_0_end: ;
}
void Frames::event_func_65()
{
    // event 87_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_87_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (7))) goto event_87_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max((get_joystick_dummy(0.0f, ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))-32768)*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)/math_helper/32.767, 0), loop_record_inputs_index+1, 2, 0);
    }
    event_87_0_end: ;
}
void Frames::event_func_66()
{
    // event 88_0
    {
        if (!(group_pc_controls_input_management_record_input_1 && group_pc_controls_input_management_record_input_record_input_controller_1)) goto event_88_0_end;
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 0, 0)) == (8))) goto event_88_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(get_max((get_joystick_dummy(0.0f, ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))-32768)*((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(loop_record_inputs_index+1, 1, 0)/math_helper/32.767, 0), loop_record_inputs_index+1, 2, 0);
    }
    event_88_0_end: ;
}
void Frames::loop_record_inputs_0()
{
    event_func_46();
    event_func_47();
    event_func_48();
    event_func_49();
    event_func_50();
    event_func_51();
    event_func_52();
    event_func_53();
    event_func_54();
    event_func_55();
    event_func_56();
    event_func_57();
    event_func_58();
    event_func_59();
    event_func_60();
    event_func_61();
    event_func_62();
    event_func_63();
    event_func_64();
    event_func_65();
    event_func_66();
}
void Frames::event_func_67()
{
    // event 176_0
    {
        if (!(group_sound_events_lilac_1)) goto event_176_0_end;
        media.play_id(SOUND_LILAC_ATTACK1_85, -1, 1);
    }
    event_176_0_end: ;
}
void Frames::event_func_68()
{
    // event 197_0
    {
        if (!(group_sound_events_carol_1)) goto event_197_0_end;
        media.play_id(SOUND_CAROL_PUNCH1_116, -1, 1);
    }
    event_197_0_end: ;
}
void Frames::loop_sound_attack1_0()
{
    event_func_67();
    event_func_68();
}
void Frames::event_func_69()
{
    // event 175_0
    {
        if (!(group_sound_events_lilac_1)) goto event_175_0_end;
        media.play_id(SOUND_LILAC_ATTACK0_84, -1, 1);
    }
    event_175_0_end: ;
}
void Frames::event_func_70()
{
    // event 196_0
    {
        if (!(group_sound_events_carol_1)) goto event_196_0_end;
        media.play_id(SOUND_CAROL_PUNCH_1_120, -1, 1);
    }
    event_196_0_end: ;
}
void Frames::event_func_71()
{
    // event 210_0
    {
        if (!(group_sound_events_milla_1)) goto event_210_0_end;
        media.play_id(SOUND_MILLA_ATTACK0_246, -1, 1);
    }
    event_210_0_end: ;
}
void Frames::loop_sound_attack0_0()
{
    event_func_69();
    event_func_70();
    event_func_71();
}
