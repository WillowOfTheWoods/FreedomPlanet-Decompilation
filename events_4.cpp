#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_clear_1()
{
    event_func_243();
}
void Frames::test_collisions_1()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_244()
{
    // event 8_1
    {
        // group: Debug keys
        ((Text*)get_instance(stagelist_38_instances))->set_paragraph(((Counter*)get_instance(selectedstage_40_instances))->value-1);
        ((TextBlitter*)get_instance(message2_43_instances))->set_text(((Text*)get_instance(stagelist_38_instances))->text);
        {
            ((Active*)get_instance(highlighter_36_instances))->blend_color.set_semi_transparency(32+sin_deg((frame_time * 1000.0)*0.5)*32);
        }
        ((TextBlitter*)get_instance(message3_44_instances))->set_text(((Text*)get_instance(cutscenelist_39_instances))->text);
        ((Text*)get_instance(cutscenelist_39_instances))->set_paragraph(((Counter*)get_instance(selectedscene_41_instances))->value-1);
    }
    event_8_1_end: ;
}
void Frames::event_func_245()
{
    // event 9_1
    {
        // group: Debug keys
        if (!(is_key_pressed_once(SDLK_UP))) goto event_9_1_end;
        ((Active*)get_instance(highlighter_36_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(highlighter_36_instances))->set_y(((TextBlitter*)get_instance(message2_43_instances))->get_y());
    }
    event_9_1_end: ;
}
void Frames::event_func_246()
{
    // event 10_1
    {
        // group: Debug keys
        if (!(is_key_pressed_once(SDLK_DOWN))) goto event_10_1_end;
        ((Active*)get_instance(highlighter_36_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(highlighter_36_instances))->set_y(((TextBlitter*)get_instance(message3_44_instances))->get_y());
    }
    event_10_1_end: ;
}
void Frames::event_func_247()
{
    // event 11_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (0))) goto event_11_1_end;
        if (!(is_key_pressed_once(SDLK_RIGHT))) goto event_11_1_end;
        ((Counter*)get_instance(selectedstage_40_instances))->add(1);
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_11_1_end: ;
}
void Frames::event_func_248()
{
    // event 12_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (0))) goto event_12_1_end;
        if (!(is_key_pressed_once(SDLK_LEFT))) goto event_12_1_end;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((Counter*)get_instance(selectedstage_40_instances))->subtract(1);
    }
    event_12_1_end: ;
}
void Frames::event_func_249()
{
    // event 13_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (0))) goto event_13_1_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_13_1_end;
        ((Active*)get_instance(highlighter_36_instances))->alterables->flags.enable(1);
    }
    event_13_1_end: ;
}
void Frames::event_func_250()
{
    // event 14_1
    {
        // group: Debug keys
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (0))) goto event_14_1_end;
        ((Counter*)get_instance(selectedstage_40_instances))->set(70);
    }
    event_14_1_end: ;
}
void Frames::event_func_251()
{
    // event 15_1
    {
        // group: Debug keys
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) >= (71))) goto event_15_1_end;
        ((Counter*)get_instance(selectedstage_40_instances))->set(1);
    }
    event_15_1_end: ;
}
void Frames::event_func_252()
{
    // event 16_1
    {
        // group: Debug keys
        if (!(((Active*)get_instance(highlighter_36_instances))->alterables->flags.is_on(1))) goto event_16_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (0))) goto event_16_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_16_1_end;
        if (!group_debug_keys_jump_to_frame_1) {
            group_debug_keys_jump_to_frame_1 = true;
        }
    }
    event_16_1_end: ;
}
void Frames::event_func_253()
{
    // event 17_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_17_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (1))) goto event_17_1_end;
        next_frame = index + 1 + 0;    
    
    }
    event_17_1_end: ;
}
void Frames::event_func_254()
{
    // event 18_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_18_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (2))) goto event_18_1_end;
        next_frame = 6 + 0;    
    
    }
    event_18_1_end: ;
}
void Frames::event_func_255()
{
    // event 19_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_19_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (3))) goto event_19_1_end;
        next_frame = 16 + 0;    
    
        global_values->set(1, 4);
    }
    event_19_1_end: ;
}
void Frames::event_func_256()
{
    // event 20_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_20_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (4))) goto event_20_1_end;
        next_frame = 16 + 0;    
    
        global_values->set(1, 1);
    }
    event_20_1_end: ;
}
void Frames::event_func_257()
{
    // event 21_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_21_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (5))) goto event_21_1_end;
        global_values->set(4, 11);
        global_values->set(5, 7648);
        global_values->set(6, 1124);
        next_frame = 17 + 0;    
    
        global_values->set(1, 4);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_21_1_end: ;
}
void Frames::event_func_258()
{
    // event 22_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_22_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (6))) goto event_22_1_end;
        global_values->set(4, 11);
        global_values->set(5, 7648);
        global_values->set(6, 1124);
        next_frame = 17 + 0;    
    
        global_values->set(1, 1);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_22_1_end: ;
}
void Frames::event_func_259()
{
    // event 23_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_23_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (7))) goto event_23_1_end;
        next_frame = 20 + 0;    
    
        global_values->set(1, 0);
    }
    event_23_1_end: ;
}
void Frames::event_func_260()
{
    // event 24_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_24_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (8))) goto event_24_1_end;
        global_values->set(1, 2);
        next_frame = 20 + 0;    
    
    }
    event_24_1_end: ;
}
void Frames::event_func_261()
{
    // event 25_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_25_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (9))) goto event_25_1_end;
        global_values->set(4, 10);
        global_values->set(5, 9186);
        global_values->set(6, 882);
        global_values->set(1, 0);
        global_values->set(13, 600000);
        next_frame = 21 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_25_1_end: ;
}
void Frames::event_func_262()
{
    // event 26_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_26_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (10))) goto event_26_1_end;
        next_frame = 21 + 0;    
    
        global_values->set(4, 10);
        global_values->set(5, 9186);
        global_values->set(6, 882);
        global_values->set(1, 2);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_26_1_end: ;
}
void Frames::event_func_263()
{
    // event 27_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_27_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (11))) goto event_27_1_end;
        next_frame = 24 + 0;    
    
        global_values->set(1, 0);
    }
    event_27_1_end: ;
}
void Frames::event_func_264()
{
    // event 28_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_28_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (12))) goto event_28_1_end;
        next_frame = 24 + 0;    
    
        global_values->set(1, 2);
    }
    event_28_1_end: ;
}
void Frames::event_func_265()
{
    // event 29_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_29_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (13))) goto event_29_1_end;
        next_frame = 24 + 0;    
    
        global_values->set(1, 4);
    }
    event_29_1_end: ;
}
void Frames::event_func_266()
{
    // event 30_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_30_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (14))) goto event_30_1_end;
        next_frame = 26 + 0;    
    
        global_values->set(4, 10);
        global_values->set(5, 8312);
        global_values->set(6, 2717);
        global_values->set(1, 0);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_30_1_end: ;
}
void Frames::event_func_267()
{
    // event 31_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_31_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (15))) goto event_31_1_end;
        next_frame = 26 + 0;    
    
        global_values->set(4, 10);
        global_values->set(5, 8312);
        global_values->set(6, 2717);
        global_values->set(1, 2);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_31_1_end: ;
}
void Frames::event_func_268()
{
    // event 32_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_32_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (16))) goto event_32_1_end;
        next_frame = 26 + 0;    
    
        global_values->set(4, 10);
        global_values->set(5, 8312);
        global_values->set(6, 2717);
        global_values->set(1, 4);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_32_1_end: ;
}
void Frames::event_func_269()
{
    // event 33_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_33_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (17))) goto event_33_1_end;
        next_frame = 29 + 0;    
    
        global_values->set(1, 0);
    }
    event_33_1_end: ;
}
void Frames::event_func_270()
{
    // event 34_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_34_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (18))) goto event_34_1_end;
        next_frame = 29 + 0;    
    
        global_values->set(1, 2);
    }
    event_34_1_end: ;
}
void Frames::event_func_271()
{
    // event 35_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_35_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (19))) goto event_35_1_end;
        next_frame = 29 + 0;    
    
        global_values->set(1, 4);
    }
    event_35_1_end: ;
}
void Frames::event_func_272()
{
    // event 36_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_36_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (20))) goto event_36_1_end;
        next_frame = 32 + 0;    
    
        global_values->set(1, 0);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_36_1_end: ;
}
void Frames::event_func_273()
{
    // event 37_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_37_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (21))) goto event_37_1_end;
        next_frame = 32 + 0;    
    
        global_values->set(1, 2);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_37_1_end: ;
}
void Frames::event_func_274()
{
    // event 38_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_38_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (22))) goto event_38_1_end;
        next_frame = 32 + 0;    
    
        global_values->set(1, 4);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_38_1_end: ;
}
void Frames::event_func_275()
{
    // event 39_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_39_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (23))) goto event_39_1_end;
        global_values->set(1, 0);
        next_frame = 35 + 0;    
    
    }
    event_39_1_end: ;
}
void Frames::event_func_276()
{
    // event 40_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_40_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (24))) goto event_40_1_end;
        global_values->set(1, 2);
        next_frame = 35 + 0;    
    
    }
    event_40_1_end: ;
}
void Frames::event_func_277()
{
    // event 41_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_41_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (25))) goto event_41_1_end;
        global_values->set(1, 4);
        next_frame = 35 + 0;    
    
    }
    event_41_1_end: ;
}
void Frames::event_func_278()
{
    // event 42_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_42_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (26))) goto event_42_1_end;
        global_values->set(1, 0);
        next_frame = 39 + 0;    
    
    }
    event_42_1_end: ;
}
void Frames::event_func_279()
{
    // event 43_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_43_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (27))) goto event_43_1_end;
        global_values->set(1, 2);
        next_frame = 39 + 0;    
    
    }
    event_43_1_end: ;
}
void Frames::event_func_280()
{
    // event 44_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_44_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (28))) goto event_44_1_end;
        global_values->set(1, 4);
        next_frame = 39 + 0;    
    
    }
    event_44_1_end: ;
}
void Frames::event_func_281()
{
    // event 45_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_45_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (29))) goto event_45_1_end;
        global_values->set(4, 10);
        global_values->set(5, 9128);
        global_values->set(6, 1550);
        global_values->set(1, 0);
        global_values->set(13, 600000);
        next_frame = 41 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_45_1_end: ;
}
void Frames::event_func_282()
{
    // event 46_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_46_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (30))) goto event_46_1_end;
        global_values->set(4, 10);
        global_values->set(5, 9128);
        global_values->set(6, 1550);
        global_values->set(1, 2);
        global_values->set(13, 600000);
        next_frame = 41 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_46_1_end: ;
}
void Frames::event_func_283()
{
    // event 47_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_47_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (31))) goto event_47_1_end;
        global_values->set(4, 10);
        global_values->set(5, 9128);
        global_values->set(6, 1550);
        global_values->set(1, 4);
        global_values->set(13, 600000);
        next_frame = 41 + 0;    
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_47_1_end: ;
}
void Frames::event_func_284()
{
    // event 48_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_48_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (32))) goto event_48_1_end;
        next_frame = 44 + 0;    
    
        global_values->set(1, 0);
    }
    event_48_1_end: ;
}
void Frames::event_func_285()
{
    // event 49_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_49_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (33))) goto event_49_1_end;
        global_values->set(1, 2);
        next_frame = 44 + 0;    
    
    }
    event_49_1_end: ;
}
void Frames::event_func_286()
{
    // event 50_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_50_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (34))) goto event_50_1_end;
        global_values->set(1, 4);
        next_frame = 44 + 0;    
    
    }
    event_50_1_end: ;
}
void Frames::event_func_287()
{
    // event 51_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_51_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (35))) goto event_51_1_end;
        global_values->set(1, 1);
        next_frame = 44 + 0;    
    
    }
    event_51_1_end: ;
}
void Frames::event_func_288()
{
    // event 52_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_52_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (36))) goto event_52_1_end;
        next_frame = 47 + 0;    
    
        global_values->set(1, 0);
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_52_1_end: ;
}
void Frames::event_func_289()
{
    // event 53_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_53_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (37))) goto event_53_1_end;
        global_values->set(1, 2);
        next_frame = 47 + 0;    
    
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_53_1_end: ;
}
void Frames::event_func_290()
{
    // event 54_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_54_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (38))) goto event_54_1_end;
        global_values->set(1, 4);
        next_frame = 47 + 0;    
    
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_54_1_end: ;
}
void Frames::event_func_291()
{
    // event 55_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_55_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (39))) goto event_55_1_end;
        global_values->set(1, 1);
        next_frame = 47 + 0;    
    
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_55_1_end: ;
}
void Frames::event_func_292()
{
    // event 56_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_56_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (40))) goto event_56_1_end;
        global_values->set(1, 0);
        next_frame = 56 + 0;    
    
    }
    event_56_1_end: ;
}
void Frames::event_func_293()
{
    // event 57_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_57_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (41))) goto event_57_1_end;
        next_frame = 56 + 0;    
    
        global_values->set(1, 4);
    }
    event_57_1_end: ;
}
void Frames::event_func_294()
{
    // event 58_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_58_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (42))) goto event_58_1_end;
        global_values->set(1, 0);
        next_frame = 50 + 0;    
    
    }
    event_58_1_end: ;
}
void Frames::event_func_295()
{
    // event 59_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_59_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (43))) goto event_59_1_end;
        global_values->set(1, 0);
        next_frame = 53 + 0;    
    
        global_values->set(13, 600000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_59_1_end: ;
}
void Frames::event_func_296()
{
    // event 60_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_60_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (44))) goto event_60_1_end;
        global_values->set(1, 0);
        next_frame = 85 + 0;    
    
    }
    event_60_1_end: ;
}
void Frames::event_func_297()
{
    // event 61_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_61_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (45))) goto event_61_1_end;
        global_values->set(1, 2);
        next_frame = 85 + 0;    
    
    }
    event_61_1_end: ;
}
void Frames::event_func_298()
{
    // event 62_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_62_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (46))) goto event_62_1_end;
        global_values->set(1, 4);
        next_frame = 85 + 0;    
    
    }
    event_62_1_end: ;
}
void Frames::event_func_299()
{
    // event 63_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_63_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (47))) goto event_63_1_end;
        next_frame = 59 + 0;    
    
        global_values->set(1, 0);
    }
    event_63_1_end: ;
}
void Frames::event_func_300()
{
    // event 64_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_64_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (48))) goto event_64_1_end;
        global_values->set(1, 2);
        next_frame = 59 + 0;    
    
    }
    event_64_1_end: ;
}
void Frames::event_func_301()
{
    // event 65_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_65_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (49))) goto event_65_1_end;
        global_values->set(1, 4);
        next_frame = 59 + 0;    
    
    }
    event_65_1_end: ;
}
void Frames::event_func_302()
{
    // event 66_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_66_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (50))) goto event_66_1_end;
        global_values->set(1, 1);
        next_frame = 59 + 0;    
    
    }
    event_66_1_end: ;
}
void Frames::event_func_303()
{
    // event 67_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_67_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (51))) goto event_67_1_end;
        next_frame = 62 + 0;    
    
        global_values->set(1, 0);
        global_values->set(13, 600000);
        global_values->set(4, 6);
        global_values->set(5, 3456);
        global_values->set(6, 1800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_67_1_end: ;
}
void Frames::event_func_304()
{
    // event 68_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_68_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (52))) goto event_68_1_end;
        global_values->set(1, 2);
        global_values->set(13, 600000);
        next_frame = 62 + 0;    
    
        global_values->set(4, 6);
        global_values->set(5, 3456);
        global_values->set(6, 1800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_68_1_end: ;
}
void Frames::event_func_305()
{
    // event 69_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_69_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (53))) goto event_69_1_end;
        global_values->set(1, 4);
        global_values->set(13, 600000);
        next_frame = 62 + 0;    
    
        global_values->set(4, 6);
        global_values->set(5, 3456);
        global_values->set(6, 1800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_69_1_end: ;
}
void Frames::event_func_306()
{
    // event 70_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_70_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (54))) goto event_70_1_end;
        global_values->set(1, 1);
        global_values->set(13, 600000);
        next_frame = 62 + 0;    
    
        global_values->set(4, 6);
        global_values->set(5, 3456);
        global_values->set(6, 1800);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 900000);
    }
    event_70_1_end: ;
}
void Frames::event_func_307()
{
    // event 71_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_71_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (55))) goto event_71_1_end;
        next_frame = 65 + 0;    
    
        global_values->set(1, 0);
    }
    event_71_1_end: ;
}
void Frames::event_func_308()
{
    // event 72_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_72_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (56))) goto event_72_1_end;
        global_values->set(1, 2);
        next_frame = 65 + 0;    
    
    }
    event_72_1_end: ;
}
void Frames::event_func_309()
{
    // event 73_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_73_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (57))) goto event_73_1_end;
        next_frame = 67 + 0;    
    
        global_values->set(1, 0);
    }
    event_73_1_end: ;
}
void Frames::event_func_310()
{
    // event 74_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_74_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (58))) goto event_74_1_end;
        global_values->set(1, 2);
        next_frame = 67 + 0;    
    
    }
    event_74_1_end: ;
}
void Frames::event_func_311()
{
    // event 75_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_75_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (59))) goto event_75_1_end;
        next_frame = 69 + 0;    
    
        global_values->set(1, 0);
    }
    event_75_1_end: ;
}
void Frames::event_func_312()
{
    // event 76_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_76_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (60))) goto event_76_1_end;
        global_values->set(1, 2);
        next_frame = 69 + 0;    
    
    }
    event_76_1_end: ;
}
void Frames::event_func_313()
{
    // event 77_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_77_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (61))) goto event_77_1_end;
        next_frame = 71 + 0;    
    
        global_values->set(1, 0);
    }
    event_77_1_end: ;
}
void Frames::event_func_314()
{
    // event 78_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_78_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (62))) goto event_78_1_end;
        global_values->set(1, 2);
        next_frame = 71 + 0;    
    
    }
    event_78_1_end: ;
}
void Frames::event_func_315()
{
    // event 79_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_79_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (63))) goto event_79_1_end;
        global_values->set(1, 0);
        next_frame = 72 + 0;    
    
    }
    event_79_1_end: ;
}
void Frames::event_func_316()
{
    // event 80_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_80_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (64))) goto event_80_1_end;
        global_values->set(1, 2);
        next_frame = 72 + 0;    
    
    }
    event_80_1_end: ;
}
void Frames::event_func_317()
{
    // event 81_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_81_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (65))) goto event_81_1_end;
        next_frame = 73 + 0;    
    
        global_values->set(1, 0);
    }
    event_81_1_end: ;
}
void Frames::event_func_318()
{
    // event 82_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_82_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (66))) goto event_82_1_end;
        global_values->set(1, 2);
        next_frame = 73 + 0;    
    
    }
    event_82_1_end: ;
}
void Frames::event_func_319()
{
    // event 83_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_83_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (67))) goto event_83_1_end;
        global_values->set(1, 4);
        next_frame = 73 + 0;    
    
    }
    event_83_1_end: ;
}
void Frames::event_func_320()
{
    // event 84_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_84_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (68))) goto event_84_1_end;
        global_values->set(1, 1);
        next_frame = 73 + 0;    
    
    }
    event_84_1_end: ;
}
void Frames::event_func_321()
{
    // event 85_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_85_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (69))) goto event_85_1_end;
        global_values->set(1, 5);
        next_frame = 73 + 0;    
    
    }
    event_85_1_end: ;
}
void Frames::event_func_322()
{
    // event 86_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_86_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (70))) goto event_86_1_end;
        if (not_always_86_1 > loop_count) {
            not_always_86_1 = loop_count + 2;
            goto event_86_1_end;
        }
        not_always_86_1 = loop_count + 2;
        {
            loop_clear_running = true;
            int times = int(99);
            loop_clear_index = 0;
            while (loop_clear_index < times) {
                loop_clear_1();
                if (!loop_clear_running) break;
                loop_clear_index++;
            }
        }
    }
    event_86_1_end: ;
}
void Frames::event_func_323()
{
    // event 88_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_88_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (70))) goto event_88_1_end;
        if (not_always_88_1 > loop_count) {
            not_always_88_1 = loop_count + 2;
            goto event_88_1_end;
        }
        not_always_88_1 = loop_count + 2;
        ((ArrayObject*)get_instance(recorddata_34_instances))->save(get_app_drive()+get_app_dir()+str_records_dat_9);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->upload("./records.dat");
    }
    event_88_1_end: ;
}
void Frames::event_func_324()
{
    // event 89_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_89_1_end;
        if (!((((Counter*)get_instance(selectedstage_40_instances))->value) == (70))) goto event_89_1_end;
        if (not_always_89_1 > loop_count) {
            not_always_89_1 = loop_count + 2;
            goto event_89_1_end;
        }
        not_always_89_1 = loop_count + 2;
        next_frame = 10 + 0;    
    
    }
    event_89_1_end: ;
}
void Frames::event_func_325()
{
    // event 90_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (1))) goto event_90_1_end;
        if (!(is_key_pressed_once(SDLK_RIGHT))) goto event_90_1_end;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((Counter*)get_instance(selectedscene_41_instances))->add(1);
    }
    event_90_1_end: ;
}
void Frames::event_func_326()
{
    // event 91_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (1))) goto event_91_1_end;
        if (!(is_key_pressed_once(SDLK_LEFT))) goto event_91_1_end;
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((Counter*)get_instance(selectedscene_41_instances))->subtract(1);
    }
    event_91_1_end: ;
}
void Frames::event_func_327()
{
    // event 92_1
    {
        // group: Debug keys
        if (!((((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)) == (1))) goto event_92_1_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_92_1_end;
        ((Active*)get_instance(highlighter_36_instances))->alterables->flags.enable(2);
    }
    event_92_1_end: ;
}
void Frames::event_func_328()
{
    // event 93_1
    {
        // group: Debug keys
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (0))) goto event_93_1_end;
        ((Counter*)get_instance(selectedscene_41_instances))->set(37);
    }
    event_93_1_end: ;
}
void Frames::event_func_329()
{
    // event 94_1
    {
        // group: Debug keys
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) >= (39))) goto event_94_1_end;
        ((Counter*)get_instance(selectedscene_41_instances))->set(1);
    }
    event_94_1_end: ;
}
void Frames::event_func_330()
{
    // event 95_1
    {
        // group: Debug keys
        if (!(((Active*)get_instance(highlighter_36_instances))->alterables->flags.is_on(2))) goto event_95_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (0))) goto event_95_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_95_1_end;
        if (!group_debug_keys_jump_to_scene_1) {
            group_debug_keys_jump_to_scene_1 = true;
        }
    }
    event_95_1_end: ;
}
void Frames::event_func_331()
{
    // event 96_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_96_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (1))) goto event_96_1_end;
        next_frame = index + 1 + 0;    
    
    }
    event_96_1_end: ;
}
void Frames::event_func_332()
{
    // event 97_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_97_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (2))) goto event_97_1_end;
        global_values->set(4, 0);
        next_frame = 76 + 0;    
    
    }
    event_97_1_end: ;
}
void Frames::event_func_333()
{
    // event 98_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_98_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (3))) goto event_98_1_end;
        global_values->set(4, 1);
        next_frame = 76 + 0;    
    
    }
    event_98_1_end: ;
}
void Frames::event_func_334()
{
    // event 99_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_99_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (4))) goto event_99_1_end;
        global_values->set(4, 1);
        next_frame = 77 + 0;    
    
    }
    event_99_1_end: ;
}
void Frames::event_func_335()
{
    // event 100_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_100_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (5))) goto event_100_1_end;
        global_values->set(4, 0);
        next_frame = 77 + 0;    
    
        global_values->set(1, 4);
    }
    event_100_1_end: ;
}
void Frames::event_func_336()
{
    // event 101_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_101_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (6))) goto event_101_1_end;
        global_values->set(4, 3);
        next_frame = 77 + 0;    
    
        global_values->set(1, 2);
    }
    event_101_1_end: ;
}
void Frames::event_func_337()
{
    // event 102_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_102_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (7))) goto event_102_1_end;
        global_values->set(4, 0);
        next_frame = 83 + 0;    
    
    }
    event_102_1_end: ;
}
void Frames::event_func_338()
{
    // event 103_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_103_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (8))) goto event_103_1_end;
        global_values->set(4, 2);
        next_frame = 77 + 0;    
    
    }
    event_103_1_end: ;
}
void Frames::event_func_339()
{
    // event 104_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_104_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (9))) goto event_104_1_end;
        global_values->set(4, 11);
        next_frame = 15 + 0;    
    
    }
    event_104_1_end: ;
}
void Frames::event_func_340()
{
    // event 105_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_105_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (10))) goto event_105_1_end;
        global_values->set(4, 1);
        next_frame = 83 + 0;    
    
    }
    event_105_1_end: ;
}
void Frames::event_func_341()
{
    // event 106_1
    {
        if (!(group_debug_keys_jump_to_scene_1)) goto event_106_1_end;
        if (!((((Counter*)get_instance(selectedscene_41_instances))->value) == (11))) goto event_106_1_end;
        global_values->set(4, 12);
        next_frame = 14 + 0;    
    
    }
    event_106_1_end: ;
}
