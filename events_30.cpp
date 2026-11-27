#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2618()
{
    // event 1529_13
    {
        if (!(group_main_engine_1)) goto event_1529_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) == (0))) goto event_1529_13_end;
        if (not_always_1529_13 > loop_count) {
            not_always_1529_13 = loop_count + 2;
            goto event_1529_13_end;
        }
        not_always_1529_13 = loop_count + 2;
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_animation(7);
    }
    event_1529_13_end: ;
}
void Frames::event_func_2619()
{
    // event 1532_13
    {
        if (!(group_main_engine_1)) goto event_1532_13_end;
        if (!(manager.player_died)) goto event_1532_13_end;
        if (not_always_1532_13 > loop_count) {
            not_always_1532_13 = loop_count + 2;
            goto event_1532_13_end;
        }
        not_always_1532_13 = loop_count + 2;
        ((Active*)get_instance(levelcardgameover_462_instances))->get_movement()->start();
        ((Active*)get_instance(player_389_instances))->alterables->flags.enable(8);
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(player_389_instances))->alterables->values.set(4, 0);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(8)+str_1_3_84);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(levelcardgameover_462_instances))->set_visible(true);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1532_13_end: ;
}
void Frames::event_func_2620()
{
    // event 1533_13
    {
        if (!(group_main_engine_1)) goto event_1533_13_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_on(8))) goto event_1533_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->values.add(5, 1);
    }
    event_1533_13_end: ;
}
void Frames::event_func_2621()
{
    // event 1534_13
    {
        if (!(group_main_engine_1)) goto event_1534_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(5)) < (200))) goto event_1534_13_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) > (64))) goto event_1534_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-1);
        }
    }
    event_1534_13_end: ;
}
void Frames::event_func_2622()
{
    // event 1535_13
    {
        if (!(group_main_engine_1)) goto event_1535_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(5)) >= (200))) goto event_1535_13_end;
        {
            ((Active*)get_instance(levelcardgameover_462_instances))->blend_color.set_semi_transparency(((Active*)get_instance(levelcardgameover_462_instances))->blend_color.get_semi_transparency()+2);
        }
    }
    event_1535_13_end: ;
}
void Frames::event_func_2623()
{
    // event 1536_13
    {
        if (!(group_main_engine_1)) goto event_1536_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(5)) >= (200))) goto event_1536_13_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1536_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1536_13_end: ;
}
void Frames::event_func_2624()
{
    // event 1537_13
    {
        if (!(group_main_engine_1)) goto event_1537_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(5)) >= (280))) goto event_1537_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
        stringparser_427_instances.clear_selection();
        for (ObjectIterator it(stringparser_427_instances); !it.end(); ++it) {
            ((StringParser*)*it)->destroy();
        }
        next_frame = 75 + 0;    
    
    }
    event_1537_13_end: ;
}
void Frames::event_func_2625()
{
    // event 1540_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1540_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1540_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0)-90)*(250-((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0)-90)*(250-((Active*)*it)->alterables->values.get(0))*-1);
            ((Active*)*it)->alterables->values.add(0, 3);
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-160, 0);
        }
        FrameObject * single_instance_1540_13_0; single_instance_1540_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelcardintro1_464_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1540_13_0 == NULL)
                    single_instance_1540_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1540_13_0))->set_scale(get_max((180-((Active*)get_single(levelcardintro1_464_instances, default_active_instance))->alterables->values.get(0))*0.02, 1));
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(false);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1540_13_end: ;
}
void Frames::event_func_2626()
{
    // event 1541_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1541_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1541_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (0))) goto event_1541_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1541_13_0; single_instance_1541_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1541_13_0 == NULL)
                    single_instance_1541_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(true);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_visible(true);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1541_13_end: ;
}
void Frames::event_func_2627()
{
    // event 1542_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1542_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1542_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1542_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1542_13_0; single_instance_1542_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1542_13_0 == NULL)
                    single_instance_1542_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1542_13_end: ;
}
void Frames::event_func_2628()
{
    // event 1543_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1543_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1543_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1543_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1543_13_0; single_instance_1543_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1543_13_0 == NULL)
                    single_instance_1543_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1543_13_end: ;
}
void Frames::event_func_2629()
{
    // event 1544_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1544_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1544_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1544_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1544_13_0; single_instance_1544_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1544_13_0 == NULL)
                    single_instance_1544_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1544_13_end: ;
}
void Frames::event_func_2630()
{
    // event 1545_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1545_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1545_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1545_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1545_13_0; single_instance_1545_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_13_0 == NULL)
                    single_instance_1545_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1545_13_end: ;
}
void Frames::event_func_2631()
{
    // event 1546_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1546_13_end;
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (250))) { it.deselect(); continue; }
        }
        if (!levelcardintro1_464_instances.has_selection()) goto event_1546_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_1546_13_end;
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        FrameObject * single_instance_1546_13_0; single_instance_1546_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1546_13_0 == NULL)
                    single_instance_1546_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BONUSENTER_136, -1, 1);
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1546_13_end: ;
}
void Frames::event_func_2632()
{
    // event 1547_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1547_13_end;
        if (!((levelcardintro1_464_instances.size()) == (0))) goto event_1547_13_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(2);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_13();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1547_13_end: ;
}
void Frames::event_func_2633()
{
    // event 1548_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1548_13_end;
        if (!((levelcardintro1_464_instances.size()) == (0))) goto event_1548_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1548_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
    }
    event_1548_13_end: ;
}
void Frames::event_func_2634()
{
    // event 1559_13
    {
        if (!(group_main_engine_1)) goto event_1559_13_end;
        if (!((media.get_channel_volume(-1 +32)) < (global_values->get(25)))) goto event_1559_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1559_13_end;
        media.set_channel_volume(32-1, get_min(media.get_channel_volume(-1 +32)+((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(7), global_values->get(25)));
    }
    event_1559_13_end: ;
}
void Frames::event_func_2635()
{
    // event 1560_13
    {
        if (!(group_main_engine_1)) goto event_1560_13_end;
        if (!((media.get_channel_volume(-1 +32)) > (global_values->get(25)))) goto event_1560_13_end;
        media.set_channel_volume(32-1, global_values->get(25));
    }
    event_1560_13_end: ;
}
void Frames::event_func_2636()
{
    // event 1561_13
    {
        if (!(group_main_engine_1)) goto event_1561_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1561_13_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-((Active*)*it)->alterables->values.get(8), 0));
        }
        media.set_channel_volume(32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(9)*(global_values->get(25)*0.01));
    }
    event_1561_13_end: ;
}
void Frames::event_func_2637()
{
    // event 1562_13
    {
        if (!(group_main_engine_1)) goto event_1562_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1562_13_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+number_to_string(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(3))+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1562_13_end: ;
}
void Frames::event_func_2638()
{
    // event 1564_13
    {
        if (!(group_main_engine_1)) goto event_1564_13_end;
        if (!((((ArrayObject*)get_instance(functionmusic_231_instances))->data.x_pos) > (0))) goto event_1564_13_end;
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
                loop_process_call_me_13();
                if (!loop_process_call_me_running) break;
                loop_process_call_me_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
    }
    event_1564_13_end: ;
}
void Frames::event_func_2639()
{
    // event 1570_13
    bool or_result_1570_13 = false;
    bool or_temp_result_1570_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1570_13_0_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_1570_13_0_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos) == (0))) goto or_event_1570_13_0_end;
        if (not_always_1570_13 > loop_count) {
            not_always_1570_13 = loop_count + 2;
            goto or_event_1570_13_0_end;
        }
        not_always_1570_13 = loop_count + 2;
        or_result_1570_13 = true;
        or_temp_result_1570_13_0 = true;
    }
    or_event_1570_13_0_end: ;
    // event 1570_13
    bool or_temp_result_1570_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1570_13_1_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_1570_13_1_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto or_event_1570_13_1_end;
        if (not_always_1570_13 > loop_count) {
            not_always_1570_13 = loop_count + 2;
            goto or_event_1570_13_1_end;
        }
        not_always_1570_13 = loop_count + 2;
        or_result_1570_13 = true;
        or_temp_result_1570_13_1 = true;
    }
    or_event_1570_13_1_end: ;
    controllermusic_128_instances.clear_saved_selection();
    if (or_temp_result_1570_13_1) {
        controllermusic_128_instances.save_selection();
    }
    // event 1570_13
    bool or_temp_result_1570_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1570_13_2_end;
        if (!(!media.is_channel_playing(32-1))) goto or_event_1570_13_2_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto or_event_1570_13_2_end;
        if (not_always_1570_13 > loop_count) {
            not_always_1570_13 = loop_count + 2;
            goto or_event_1570_13_2_end;
        }
        not_always_1570_13 = loop_count + 2;
        or_result_1570_13 = true;
        or_temp_result_1570_13_2 = true;
        or_event_1570_13_2_end: ;
        if (or_temp_result_1570_13_2) {
            controllermusic_128_instances.save_selection();
        }
        if (!or_result_1570_13) goto or_final_or_event_1570_13_2_end;
        controllermusic_128_instances.clear_selection();
        if (or_temp_result_1570_13_1 || or_temp_result_1570_13_2) {
            controllermusic_128_instances.restore_selection();
        }
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    or_final_or_event_1570_13_2_end: ;
}
void Frames::event_func_2640()
{
    // event 1571_13
    {
        if (!(group_main_engine_1)) goto event_1571_13_end;
        if (!(!media.is_channel_playing(32-1))) goto event_1571_13_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos) > (0))) goto event_1571_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1571_13_end;
        if (not_always_1571_13 > loop_count) {
            not_always_1571_13 = loop_count + 2;
            goto event_1571_13_end;
        }
        not_always_1571_13 = loop_count + 2;
        {
            loop_process_call_resume_music_running = true;
            int times = int(1);
            loop_process_call_resume_music_index = 0;
            while (loop_process_call_resume_music_index < times) {
                loop_process_call_resume_music_13();
                if (!loop_process_call_resume_music_running) break;
                loop_process_call_resume_music_index++;
            }
        }
    }
    event_1571_13_end: ;
}
void Frames::event_func_2641()
{
    // event 1588_13
    {
        if (!(group_main_engine_1)) goto event_1588_13_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (media.get_channel_position(-1 +32)))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1588_13_end;
        media.set_channel_position(32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1588_13_end: ;
}
void Frames::event_func_2642()
{
    // event 1589_13
    {
        if (!(group_pause_1)) goto event_1589_13_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1589_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1589_13_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1589_13_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1589_13_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
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
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
    }
    event_1589_13_end: ;
}
void Frames::event_func_2643()
{
    // event 1590_13
    bool or_result_1590_13 = false;
    bool or_temp_result_1590_13_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1590_13_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1590_13_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1590_13_0_end;
        or_result_1590_13 = true;
        or_temp_result_1590_13_0 = true;
    }
    or_event_1590_13_0_end: ;
    // event 1590_13
    bool or_temp_result_1590_13_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1590_13_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1590_13_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1590_13_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1590_13_1_end;
        or_result_1590_13 = true;
        or_temp_result_1590_13_1 = true;
        or_event_1590_13_1_end: ;
        if (!or_result_1590_13) goto or_final_or_event_1590_13_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
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
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
    }
    or_final_or_event_1590_13_1_end: ;
}
void Frames::event_func_2644()
{
    // event 1591_13
    {
        if (!(group_pause_1)) goto event_1591_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) > (0))) goto event_1591_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) != (3))) goto event_1591_13_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.sub(0, 1);
    }
    event_1591_13_end: ;
}
void Frames::event_func_2645()
{
    // event 1592_13
    {
        if (!(group_pause_1)) goto event_1592_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1592_13_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1592_13_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto event_1592_13_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+24);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1592_13_end: ;
}
void Frames::event_func_2646()
{
    // event 1593_13
    {
        if (!(group_pause_1)) goto event_1593_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1593_13_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1593_13_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1593_13_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y());
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1593_13_end: ;
}
void Frames::event_func_2647()
{
    // event 1594_13
    {
        if (!(group_pause_1)) goto event_1594_13_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1594_13_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1594_13_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1594_13_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1594_13_end: ;
}
void Frames::event_func_2648()
{
    // event 1595_13
    {
        if (!(group_pause_1)) goto event_1595_13_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1595_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1595_13_end: ;
}
void Frames::event_func_2649()
{
    // event 1596_13
    {
        if (!(group_pause_1)) goto event_1596_13_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1596_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1596_13_end;
        {
            loop_return_running = true;
            int times = int(1);
            loop_return_index = 0;
            while (loop_return_index < times) {
                loop_return_0();
                if (!loop_return_running) break;
                loop_return_index++;
            }
        }
    }
    event_1596_13_end: ;
}
void Frames::event_func_2650()
{
    // event 1794_13
    {
        if (!(group_debug_mode_1)) goto event_1794_13_end;
        if (!(((Active*)get_instance(guiscoretimerings_451_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1794_13_end;
        global_values->set(22, (global_values->get(22)+1)%math_helper%4);
    }
    event_1794_13_end: ;
}
void Frames::event_func_2651()
{
    // event 1796_13
    {
        if (!(group_debug_mode_1)) goto event_1796_13_end;
        if (!((global_values->get(22)) == (3))) goto event_1796_13_end;
            group_debug_mode_debugging_1 = false;
    
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        global_values->set(22, 0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(true);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(true);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(true);
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(true);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(true);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(true);
    }
    event_1796_13_end: ;
}
void Frames::event_func_2652()
{
    // event 1797_13
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_1797_13_end;
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(false);
    }
    event_1797_13_end: ;
}
void Frames::event_func_2653()
{
    // event 1814_13
    {
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1814_13_end;
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_1814_13_end: ;
}
void Frames::handle_frame_14_events()
{
    test_collisions_13();
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
    event_func_1369();
    event_func_1370();
    event_func_1371();
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
    event_func_1424();
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
    event_func_1470();
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
    event_func_1726();
    event_func_1727();
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
    event_func_1746();
    event_func_1747();
    event_func_1748();
    event_func_1749();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_1754();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
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
    event_func_1775();
    event_func_1776();
    event_func_1777();
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
    event_func_1909();
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
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_1987();
    event_func_1988();
    event_func_1989();
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
    event_func_1997();
    event_func_1998();
    event_func_1999();
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
    event_func_2024();
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
    event_func_2096();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2097();
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
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2321();
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
    event_func_2423();
    event_func_2424();
    event_func_2425();
    event_func_2426();
    event_func_2427();
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
    event_func_2486();
    event_func_2487();
    event_func_2488();
    event_func_2489();
    event_func_2490();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_cutscene_aircraft_down_1) goto group_main_engine_level_specific_methods_cutscenes_cutscene_aircraft_down_1_end;
    group_main_engine_level_specific_methods_cutscenes_cutscene_aircraft_down_1_end: ;
    event_func_2492();
    event_func_2493();
    event_func_2494();
    event_func_2495();
    event_func_2496();
    event_func_2497();
    event_func_2498();
    event_func_2499();
    event_func_2500();
    event_func_2501();
    event_func_2502();
    event_func_2503();
    event_func_2504();
    event_func_2505();
    event_func_2506();
    event_func_2507();
    event_func_2508();
    event_func_2509();
    event_func_2510();
    event_func_2511();
    event_func_2512();
    event_func_2513();
    event_func_2514();
    event_func_2515();
    event_func_2516();
    event_func_2517();
    event_func_2518();
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_2603();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_2614();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_2625();
    event_func_2626();
    event_func_2627();
    event_func_2628();
    event_func_2629();
    event_func_2630();
    event_func_2631();
    event_func_2632();
    event_func_2633();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_2642();
    event_func_2643();
    event_func_2644();
    event_func_2645();
    event_func_2646();
    event_func_2647();
    event_func_2648();
    event_func_2649();
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
    event_func_2651();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_2652();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_14_pre_events()
{
}
void Frames::event_func_2654()
{
    // event 1_13
    {
        global_values->set(4, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1_13_end: ;
}
void Frames::event_func_2655()
{
    // event 2_13
    {
        if (!(group_main_engine_1)) goto event_2_13_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardbonus_463_instances.clear_selection();
        for (ObjectIterator it(levelcardbonus_463_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        }
        ((Counter*)get_instance(guikeystonecount_459_instances))->set_x(((Counter*)get_instance(guikeystonecount_459_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(guikeystones_458_instances))->set_x(((Active*)get_instance(guikeystones_458_instances))->get_x()+global_values->get(16)*0.5);
    }
    event_2_13_end: ;
}
void Frames::event_func_2656()
{
    // event 3_13
    {
        if (!(group_main_engine_1)) goto event_3_13_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
    }
    event_3_13_end: ;
}
void Frames::event_func_2657()
{
    // event 5_13
    {
        if (!(group_main_engine_1)) goto event_5_13_end;
        gimmickbridgelog_412_instances.clear_selection();
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_5_13_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_5_13_end: ;
}
void Frames::event_func_2658()
{
    // event 6_13
    {
        if (!(group_main_engine_1)) goto event_6_13_end;
        gimmickbridge12logs_353_instances.clear_selection();
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!gimmickbridge12logs_353_instances.has_selection()) goto event_6_13_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_6_13_end: ;
}
void Frames::event_func_2659()
{
    // event 7_13
    {
        if (!(group_main_engine_1)) goto event_7_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_7_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_7_13_end: ;
}
void Frames::event_func_2660()
{
    // event 8_13
    {
        if (!(group_main_engine_1)) goto event_8_13_end;
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!monitorbroken_330_instances.has_selection()) goto event_8_13_end;
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_8_13_end: ;
}
void Frames::event_func_2661()
{
    // event 9_13
    {
        if (!(group_main_engine_1)) goto event_9_13_end;
        redspringup_440_instances.clear_selection();
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringup_440_instances.has_selection()) goto event_9_13_end;
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_9_13_end: ;
}
void Frames::event_func_2662()
{
    // event 10_13
    {
        if (!(group_main_engine_1)) goto event_10_13_end;
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringright_441_instances.has_selection()) goto event_10_13_end;
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_10_13_end: ;
}
void Frames::event_func_2663()
{
    // event 11_13
    {
        if (!(group_main_engine_1)) goto event_11_13_end;
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringleft_442_instances.has_selection()) goto event_11_13_end;
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_11_13_end: ;
}
void Frames::event_func_2664()
{
    // event 12_13
    {
        if (!(group_main_engine_1)) goto event_12_13_end;
        redspringdown_443_instances.clear_selection();
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringdown_443_instances.has_selection()) goto event_12_13_end;
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_12_13_end: ;
}
void Frames::event_func_2665()
{
    // event 13_13
    {
        if (!(group_main_engine_1)) goto event_13_13_end;
        redspringupright_438_instances.clear_selection();
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringupright_438_instances.has_selection()) goto event_13_13_end;
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_13_13_end: ;
}
void Frames::event_func_2666()
{
    // event 14_13
    {
        if (!(group_main_engine_1)) goto event_14_13_end;
        redspringupleft_439_instances.clear_selection();
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!redspringupleft_439_instances.has_selection()) goto event_14_13_end;
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_14_13_end: ;
}
void Frames::event_func_2667()
{
    // event 15_13
    {
        if (!(group_main_engine_1)) goto event_15_13_end;
        yellowspringup_434_instances.clear_selection();
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringup_434_instances.has_selection()) goto event_15_13_end;
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_15_13_end: ;
}
void Frames::event_func_2668()
{
    // event 16_13
    {
        if (!(group_main_engine_1)) goto event_16_13_end;
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringright_435_instances.has_selection()) goto event_16_13_end;
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_16_13_end: ;
}
void Frames::event_func_2669()
{
    // event 17_13
    {
        if (!(group_main_engine_1)) goto event_17_13_end;
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringleft_436_instances.has_selection()) goto event_17_13_end;
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_17_13_end: ;
}
void Frames::event_func_2670()
{
    // event 18_13
    {
        if (!(group_main_engine_1)) goto event_18_13_end;
        yellowspringdown_437_instances.clear_selection();
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringdown_437_instances.has_selection()) goto event_18_13_end;
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_18_13_end: ;
}
void Frames::event_func_2671()
{
    // event 19_13
    {
        if (!(group_main_engine_1)) goto event_19_13_end;
        yellowspringupright_433_instances.clear_selection();
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringupright_433_instances.has_selection()) goto event_19_13_end;
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_19_13_end: ;
}
void Frames::event_func_2672()
{
    // event 20_13
    {
        if (!(group_main_engine_1)) goto event_20_13_end;
        yellowspringupleft_432_instances.clear_selection();
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!yellowspringupleft_432_instances.has_selection()) goto event_20_13_end;
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_20_13_end: ;
}
void Frames::event_func_2673()
{
    // event 29_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_29_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(19, 0.96875);
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(0, -12);
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(0, -13);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(0, 12);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(1, -12);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(1, -13);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(1, 13);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(1, 24);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(0, 7);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(0, -8);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->flags.disable(10);
    }
    event_29_13_end: ;
}
void Frames::event_func_2674()
{
    // event 30_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_30_13_end;
        if (!((global_values->get(4)) <= (0))) goto event_30_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, global_values->get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, -32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerstartingpoint_358_instances))->get_y()+16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_30_13_end: ;
}
void Frames::event_func_2675()
{
    // event 31_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_31_13_end;
        if (!((global_values->get(4)) == (1))) goto event_31_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, global_values->get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerstartingpoint_358_instances))->get_x()+16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerstartingpoint_358_instances))->get_y()+16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_31_13_end: ;
}
void Frames::event_func_2676()
{
    // event 32_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_32_13_end;
        if (!((global_values->get(4)) > (1))) goto event_32_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, global_values->get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, global_values->get(5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, global_values->get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_32_13_end: ;
}
void Frames::event_func_2677()
{
    // event 33_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_33_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playergimmickactions_413_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerinput_19_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(player_389_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortopbig_395_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortop_394_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottom_396_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorplatform_399_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleft_390_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorright_392_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorslopes_398_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftedge_402_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightedge_403_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftangle_400_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightangle_401_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
    }
    event_33_13_end: ;
}
void Frames::event_func_2678()
{
    // event 34_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_34_13_end;
        {
            ((Active*)get_instance(playerstartingpoint_358_instances))->set_global_position(-32, -32);
            pos_end_34_13_0: ;
        }
    }
    event_34_13_end: ;
}
void Frames::event_func_2679()
{
    // event 1040_13
    {
        if (!(group_main_engine_1)) goto event_1040_13_end;
        link_352_instances.clear_selection();
        spread_value(link_352_instances, 25, 1);
        qualifier_12.clear_selection();
        spread_value(qualifier_12, 14, 0);
    }
    event_1040_13_end: ;
}
void Frames::event_func_2680()
{
    // event 1041_13
    {
        if (!(group_main_engine_1)) goto event_1041_13_end;
        {
            loop_link_objects_1_running = true;
            int times = int(qualifier_12.size());
            loop_link_objects_1_index = 0;
            while (loop_link_objects_1_index < times) {
                loop_link_objects_1_13();
                if (!loop_link_objects_1_running) break;
                loop_link_objects_1_index++;
            }
        }
    }
    event_1041_13_end: ;
}
void Frames::event_func_2681()
{
    // event 1044_13
    {
        if (!(group_main_engine_1)) goto event_1044_13_end;
        if (!((global_values->get(12)) < (0))) goto event_1044_13_end;
        FrameObject * single_instance_1044_13_0; single_instance_1044_13_0 = NULL;
        // select single: true false false
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator p_it(objectpetal_302_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1044_13_0 == NULL)
                    single_instance_1044_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1044_13_1; single_instance_1044_13_1 = NULL;
        // select single: true false false
        monitorrings_407_instances.clear_selection();
        for (ObjectIterator p_it(monitorrings_407_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorcrystals_324(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1044_13_1 == NULL)
                    single_instance_1044_13_1 = new_obj;
            }
        }
        for (ObjectIterator it(monitorrings_407_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1044_13_end: ;
}
void Frames::event_func_2682()
{
    // event 1045_13
    {
        if (!(group_main_engine_1)) goto event_1045_13_end;
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(8, 2);
        guikeystone_455_instances.clear_selection();
        spread_value(guikeystone_455_instances, 0, 0);
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 8);
        }
    }
    event_1045_13_end: ;
}
void Frames::event_func_2683()
{
    // event 1109_13
    {
        if (!(group_main_engine_1)) goto event_1109_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1109_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1109_13_end: ;
}
void Frames::event_func_2684()
{
    // event 1137_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1137_13_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(9))) goto event_1137_13_end;
            group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = false;
    
    }
    event_1137_13_end: ;
}
void Frames::event_func_2685()
{
    // event 1141_13
    {
        if (!(group_main_engine_1)) goto event_1141_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1141_13_end: ;
}
void Frames::event_func_2686()
{
    // event 1349_13
    {
        if (!(group_main_engine_1)) goto event_1349_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1349_13_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1349_13_end: ;
}
void Frames::event_func_2687()
{
    // event 1355_13
    {
        if (!(group_main_engine_1)) goto event_1355_13_end;
        if (!((global_values->get(4)) >= (0))) goto event_1355_13_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1355_13_end: ;
}
void Frames::event_func_2688()
{
    // event 1359_13
    {
        if (!(group_main_engine_1)) goto event_1359_13_end;
        chancecube_366_instances.clear_selection();
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        ((Counter*)get_instance(guikeystonecount_459_instances))->set(get_max(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(14), 0));
        for (ObjectIterator it(chancecube_366_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
        }
    }
    event_1359_13_end: ;
}
void Frames::event_func_2689()
{
    // event 1451_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1451_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(23, (frame_right()-frame_left())/math_helper/2-(106-global_values->get(19)*53));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(24, (frame_bottom()-frame_top())/math_helper/2);
    }
    event_1451_13_end: ;
}
void Frames::event_func_2690()
{
    // event 1452_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1452_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+((Active*)get_instance(cameralimitbossright_422_instances, it.current_index, default_active_instance))->get_x())/math_helper/2);
            ((Active*)*it)->alterables->values.set(1, (((Active*)get_instance(cameralimitbosstop_423_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_instance(cameralimitbossbottom_420_instances, it.current_index, default_active_instance))->get_y())/math_helper/2);
        }
    }
    event_1452_13_end: ;
}
void Frames::event_func_2691()
{
    // event 1453_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1453_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1453_13_end: ;
}
void Frames::event_func_2692()
{
    // event 1538_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1538_13_end;
        manager.ignore_controls = true;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1538_13_end: ;
}
void Frames::event_func_2693()
{
    // event 1539_13
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1539_13_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_13();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
        }
    }
    event_1539_13_end: ;
}
void Frames::event_func_2694()
{
    // event 1563_13
    {
        if (!(group_main_engine_1)) goto event_1563_13_end;
        stringparser_427_instances.clear_selection();
        for (ObjectIterator it(stringparser_427_instances); !it.end(); ++it) {
            ((StringParser*)*it)->add_delimiter(str__85);
            ((StringParser*)*it)->add_delimiter(str__86);
            ((StringParser*)*it)->add_delimiter(str__76);
        }
        media.set_channel_volume(32-1, global_values->get(25));
        media.lock(32-1);
    }
    event_1563_13_end: ;
}
void Frames::on_frame_14_start_events()
{
    event_func_2654();
    event_func_2655();
    event_func_2656();
    event_func_2657();
    event_func_2658();
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
    event_func_2686();
    event_func_2687();
    event_func_2688();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_2692();
    event_func_2693();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_14_init()
{
    index = 13;
    width = 1280;
    height = 640;
    virtual_width = 1280;
    virtual_height = 640;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, NULL};
    qualifier_9.set(27, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&chancecube_366_instances, &objecttarget_367_instances, NULL};
    qualifier_20.set(2, &qualifier_20_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &levellayer115_348_instances, &levellayer116_349_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, NULL};
    qualifier_7.set(22, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, NULL};
    qualifier_4.set(31, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, NULL};
    qualifier_19.set(10, &qualifier_19_instances[0]);
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
    static ObjectList* qualifier_11_instances[] = {&levellayer115_348_instances, &levellayer116_349_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(5, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_bonusstagebrick_340(880, 24), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_bonusstagebackdrop_341(880, 216), 2);
    add_background_object(create_bonusstagebackdrop_341(1008, 216), 2);
    add_background_object(create_bonusstagebackdrop_341(1136, 216), 2);
    add_background_object(create_bonusstagebackdrop3_342(1136, -8), 2);
    add_background_object(create_bonusstagebackdrop2_343(1264, 160), 2);
    add_background_object(create_bonusstagebackdrop4_344(848, 24), 2);
    add_background_object(create_bonusstagebackdrop3_342(1008, -8), 2);
    add_background_object(create_bonusstagebackdrop3_342(880, -8), 2);
    add_background_object(create_bonusstagebackdrop_341(1264, 160), 2);
    add_background_object(create_bonusstagebackdrop4_344(848, 88), 2);
    add_background_object(create_bonusstagebackdrop2_343(1480, -64), 2);
    add_background_object(create_bonusstagebackdrop3_342(1392, -96), 2);
    add_background_object(create_bonusstagebrick_340(880, 424), 2);
    add_background_object(create_bonusstagebackdrop_341(880, 616), 2);
    add_background_object(create_bonusstagebackdrop_341(1008, 616), 2);
    add_background_object(create_bonusstagebackdrop_341(1136, 616), 2);
    add_background_object(create_bonusstagebackdrop3_342(1136, 392), 2);
    add_background_object(create_bonusstagebackdrop2_343(1264, 424), 2);
    add_background_object(create_bonusstagebackdrop4_344(464, 424), 2);
    add_background_object(create_bonusstagebackdrop3_342(1008, 392), 2);
    add_background_object(create_bonusstagebackdrop3_342(880, 392), 2);
    add_background_object(create_bonusstagebackdrop4_344(464, 488), 2);
    add_background_object(create_bonusstagebrick_340(496, 424), 2);
    add_background_object(create_bonusstagebackdrop3_342(752, 392), 2);
    add_background_object(create_bonusstagebackdrop3_342(624, 392), 2);
    add_background_object(create_bonusstagebackdrop3_342(496, 392), 2);
    add_background_object(create_bonusstagebackdrop_341(496, 616), 2);
    add_background_object(create_bonusstagebackdrop_341(624, 616), 2);
    add_background_object(create_bonusstagebackdrop_341(752, 616), 2);
    add_background_object(create_bonusstagebackdrop2_343(1264, 488), 2);
    add_background_object(create_bonusstagebackdrop5_345(1136, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(1136, 552), 2);
    add_background_object(create_bonusstagebackdrop5_345(1008, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(1008, 552), 2);
    add_background_object(create_bonusstagebackdrop5_345(880, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(880, 552), 2);
    add_background_object(create_bonusstagebackdrop5_345(752, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(752, 552), 2);
    add_background_object(create_bonusstagebackdrop5_345(624, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(624, 552), 2);
    add_background_object(create_bonusstagebackdrop5_345(496, 480), 2);
    add_background_object(create_bonusstagebackdrop5_345(496, 552), 2);
    add_background_object(create_bonusstagebackdrop4_344(864, 424), 2);
    add_background_object(create_bonusstagebackdrop2_343(864, 424), 2);
    add_background_object(create_bonusstagewallshadow_346(880, 24), 2);
    add_background_object(create_bonusstagewallshadow_346(880, 120), 2);
    add_background_object(create_bonusstagewallshadow2_347(880, 24), 2);
    add_background_object(create_bonusstagewallshadow_346(1248, 24), 2);
    add_background_object(create_bonusstagewallshadow_346(1248, 120), 2);
    add_background_object(create_bonusstagewallshadow2_347(1008, 24), 2);
    add_background_object(create_bonusstagewallshadow2_347(1136, 24), 2);
    add_background_object(create_bonusstagebackdrop3_342(1264, 48), 2);
    add_background_object(create_bonusstagebackdrop2_343(1264, -48), 2);
    add_object(create_levellayer115_348(-544, 1872), 2);
    add_object(create_levellayer116_349(-504, 1872), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9912, 87), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_gimmickbridge12logs_353(8480, -216), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-196, 791), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_playerstartingpoint_358(973, 197), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldmagnetic_317(-76, 348), 2);
    add_object(create_shieldflamefront_316(-116, 348), 2);
    add_object(create_shieldwater_318(-84, 332), 2);
    add_object(create_guitimermilli_360(121, -24), 2);
    add_object(create_guitimermilli2_361(111, -24), 2);
    add_object(create_guitimers_362(95, -24), 2);
    add_object(create_guitimers2_363(85, -24), 2);
    add_object(create_guitimerm_364(69, -24), 2);
    add_object(create_guitimerm2_365(59, -24), 2);
    add_object(create_chancecube_366(1068, 116), 2);
    add_object(create_bonusstagecrystalfront1_368(880, 216), 2);
    add_object(create_bonusstagecrystalfront2_369(1264, 160), 2);
    add_object(create_bonusstagecrystalfront4_370(848, 24), 2);
    add_object(create_bonusstagecrystalfront1_368(1008, 216), 2);
    add_object(create_bonusstagecrystalfront3_371(880, -8), 2);
    add_object(create_bonusstagecrystalfront1_368(1136, 216), 2);
    add_object(create_bonusstagecrystalfront1_368(1264, 160), 2);
    add_object(create_bonusstagecrystalfront3_371(1008, -8), 2);
    add_object(create_bonusstagecrystalfront3_371(1136, -8), 2);
    add_object(create_bonusstagecrystalfront4_370(848, 88), 2);
    add_object(create_bonusstagecrystalfront3_371(1264, 48), 2);
    add_object(create_bonusstagecrystalfront2_369(1264, -48), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-592, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-75, 273), 5);
    add_object(create_playerskincarolbike_382(-96, 256), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_cameralimitbossbottom_420(1096, -73), 5);
    add_object(create_cameralimitbossleft_421(936, -192), 5);
    add_object(create_cameralimitbossright_422(1255, -192), 5);
    add_object(create_cameralimitbosstop_423(1096, -312), 5);
    add_object(create_cameratriggerboss_424(952, -200), 5);
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
    add_object(create_bigbubble_428(-497, 79), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
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
    add_object(create_playerskincaroltail_444(-96, 273), 5);
    add_object(create_playerskincarol_445(-100, 273), 5);
    add_object(create_objectbike_322(-216, 288), 5);
    add_object(create_playerskinmilla_446(-75, 273), 5);
    add_object(create_playerreflect_447(-64, 224), 5);
    add_object(create_playerdig_448(-48, 234), 5);
    add_object(create_playerskintorquearm_449(-80, 224), 5);
    add_object(create_playerskintorque_450(-52, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_mapdata2_32(-432, 240), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guirings_122(8, 18), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(264, -32), 6);
    add_object(create_guikeystone_455(248, -32), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guikeystones_458(-22, 56), 6);
    add_object(create_guikeystonecount_459(24, 67), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardbonus_463(0, 46), 7);
    add_object(create_levelcardintro1_464(-20, -116), 7);
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
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
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
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_13, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_13, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_13, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_13, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_13, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_13, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_13, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_13, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_13, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_13, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_13, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_13, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_13, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_13, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_13, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_13, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_13, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_13, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_13, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_13, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_13, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_13, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_13, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_13, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_13, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_13, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_13, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_13, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_13, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_13, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_13, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_13, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_13, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_13, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_13, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_13, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_13, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_13, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_13, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_13, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_13, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_13, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_13, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_13, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_56_13 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1386_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_554_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
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
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_1385_13 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1363_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_237_13 = loop_count;
    not_always_39_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_cutscene_aircraft_down_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
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
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_540_13 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_2695()
{
    // event 1728_14
    {
        if (!(group_main_engine_1)) goto event_1728_14_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1728_14_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_y(((Active*)get_instance(guiscoretimerings_451_instances))->get_y()+1);
        ((Active*)get_instance(guienergy_124_instances))->set_y(((Active*)get_instance(guienergy_124_instances))->get_y()+1);
        ((Counter*)get_instance(guirings_122_instances))->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()+1);
        ((Counter*)get_instance(guilives_454_instances))->set_y(((Counter*)get_instance(guilives_454_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->set_y(((Active*)get_instance(guiicon_452_instances))->get_y()+1);
        ((Active*)get_instance(guiicon_452_instances))->alterables->values.sub(0, 1);
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
        ((Counter*)get_instance(guicrystal_121_instances))->set_y(((Counter*)get_instance(guicrystal_121_instances))->get_y()+1);
        ((Active*)get_instance(guitimer_564_instances))->set_y(((Active*)get_instance(guitimer_564_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(((Counter*)get_instance(guitimerm_364_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(((Counter*)get_instance(guitimers_362_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(((Counter*)get_instance(guitimermilli_360_instances))->get_y()+1);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(((Counter*)get_instance(guitimermilli2_361_instances))->get_y()+1);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(((Counter*)get_instance(guitimers2_363_instances))->get_y()+1);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(((Counter*)get_instance(guitimerm2_365_instances))->get_y()+1);
    }
    event_1728_14_end: ;
}
void Frames::loop_gui_shiftdown_14()
{
    event_func_2695();
}
void Frames::event_func_2696()
{
    // event 1387_14
    {
        if (!(group_main_engine_1)) goto event_1387_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1387_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1387_14_end;
        gimmickbridgelog_412_instances.clear_selection();
        if (!check_overlap(gimmickbridgelog_412_instances, gimmickbridge12logs_353_instances)) goto event_1387_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11-loop_gimmik_bridge12_rightside_index))) { it.deselect(); continue; }
        }
        if (!gimmickbridgelog_412_instances.has_selection()) goto event_1387_14_end;
        for (ObjectIterator it(gimmickbridgelog_412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_single(gimmickbridge12logs_353_instances, it.current_index, default_active_instance))->alterables->values.get(4))*((Active*)get_single(gimmickbridge12logs_353_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1387_14_end: ;
}
void Frames::event_func_2697()
{
    // event 1388_14
    {
        if (!(group_main_engine_1)) goto event_1388_14_end;
        player_389_instances.clear_selection();
        gimmickbridge12logs_353_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickbridge12logs_353_instances)) goto event_1388_14_end;
        if (!check_overlap(gimmickbridge12logs_353_instances, player_389_instances)) goto event_1388_14_end;
        for (ObjectIterator it(gimmickbridge12logs_353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1388_14_end: ;
}
void Frames::loop_gimmik_bridge12_rightside_14()
{
    event_func_2696();
    event_func_2697();
}
void Frames::loop_collect_item_14()
{
    event_func_1183();
    event_func_1184();
    event_func_1186();
    event_func_1187();
    event_func_1188();
}
void Frames::event_func_2698()
{
    // event 952_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_952_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(4)*0.5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5);
        }
    }
    event_952_14_end: ;
}
void Frames::loop_reposition_skin_14()
{
    event_func_2698();
}
void Frames::event_func_2699()
{
    // event 221_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_221_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_221_14_end;
        media.play_id(SOUND_LILAC_COMETREBOUND_2_31, -1, 1);
    }
    event_221_14_end: ;
}
void Frames::event_func_2700()
{
    // event 222_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_control_1)) goto event_222_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_222_14_end;
        media.play_id(SOUND_LILAC_SCOMETREBOUND_400, -1, 1);
    }
    event_222_14_end: ;
}
void Frames::loop_bs_14()
{
    event_func_2699();
    event_func_2700();
}
void Frames::event_func_2701()
{
    // event 74_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_74_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(1, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(2, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(5, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(6, str_player01allsensors_44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01allsensors_44);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        ((Active*)get_instance(playercharactersensor_383_instances))->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)/math_helper/11.25);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_74_14_end: ;
}
void Frames::loop_player01allsensors_14()
{
    event_func_2701();
}
void Frames::event_func_2702()
{
    // event 1805_14
    {
        if (!(group_main_engine_1)) goto event_1805_14_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub1_ogg_87, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1805_14_end: ;
}
void Frames::loop_play_music_5_14()
{
    event_func_2702();
}
void Frames::event_func_2703()
{
    // event 1563_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1563_14_end;
        if (!((global_values->get(26)) == (0))) goto event_1563_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1563_14_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1563_14_end: ;
}
void Frames::event_func_2704()
{
    // event 1564_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1564_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1564_14_end: ;
}
void Frames::event_func_2705()
{
    // event 1565_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1565_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1565_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1565_14_end: ;
}
void Frames::event_func_2706()
{
    // event 1602_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1602_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1602_14_end: ;
}
