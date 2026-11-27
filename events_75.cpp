#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6129()
{
    // event 1589_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1589_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1589_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (130))) goto event_1589_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1589_28_end: ;
}
void Frames::event_func_6130()
{
    // event 1590_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1590_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1590_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (7))) goto event_1590_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (11))) goto event_1590_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1590_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
    }
    event_1590_28_end: ;
}
void Frames::event_func_6131()
{
    // event 1591_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1591_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1591_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1591_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1591_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        media.play(str_data_voices_eng_sp_sp_01_06_ogg_146, 20-1);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(21);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_frame(0);
    }
    event_1591_28_end: ;
}
void Frames::event_func_6132()
{
    // event 1592_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1592_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (9))) goto event_1592_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->restore_frame();
        ((Active*)get_instance(placeholdercharacter_1588_instances))->restore_speed();
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(66);
        }
    }
    event_1592_28_end: ;
}
void Frames::event_func_6133()
{
    // event 1593_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1593_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (9))) goto event_1593_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_1593_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_frame(0);
    }
    event_1593_28_end: ;
}
void Frames::event_func_6134()
{
    // event 1594_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1594_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (9))) goto event_1594_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_1594_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(16);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1594_28_end: ;
}
void Frames::event_func_6135()
{
    // event 1595_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1595_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1595_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1595_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1595_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 13);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(true);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(0);
    }
    event_1595_28_end: ;
}
void Frames::event_func_6136()
{
    // event 1596_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1596_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1596_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1596_28_end: ;
}
void Frames::event_func_6137()
{
    // event 1597_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1597_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1597_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (15))) goto event_1597_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_animation(7);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.set(0, -8);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1597_28_end: ;
}
void Frames::event_func_6138()
{
    // event 1598_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1598_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1598_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1598_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1598_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()+((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.get(0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.add(0, 0.5);
    }
    event_1598_28_end: ;
}
void Frames::event_func_6139()
{
    // event 1599_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1599_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1599_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1599_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1599_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1599_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_x(get_min(((Active*)get_instance(placeholdercharacter_1588_instances))->get_x()+1, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()-14));
    }
    event_1599_28_end: ;
}
void Frames::event_func_6140()
{
    // event 1600_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1600_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1600_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1600_28_end;
        if (!((((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.get(0)) > (0))) goto event_1600_28_end;
        if (!((((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_y()))) goto event_1600_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1600_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_animation(0);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(1);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
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
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1600_28_end: ;
}
void Frames::event_func_6141()
{
    // event 1601_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1601_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (11))) goto event_1601_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+4, 128));
        }
    }
    event_1601_28_end: ;
}
void Frames::event_func_6142()
{
    // event 1602_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1602_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (11))) goto event_1602_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1602_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1602_28_end: ;
}
void Frames::event_func_6143()
{
    // event 1603_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1603_28_end;
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ksprojectile1_1525_instances.has_selection()) goto event_1603_28_end;
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1603_28_end: ;
}
void Frames::event_func_6144()
{
    // event 1604_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1604_28_end;
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ksprojectile2_1606_instances.has_selection()) goto event_1604_28_end;
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
        }
    }
    event_1604_28_end: ;
}
void Frames::event_func_6145()
{
    // event 1605_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1605_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1605_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (80))) goto event_1605_28_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1605_28_end;
        FrameObject * single_instance_1605_28_0; single_instance_1605_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 4), parent->layer);
                if (single_instance_1605_28_0 == NULL)
                    single_instance_1605_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1605_28_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1605_28_0))->set_x(((Active*)single_instance_1605_28_0)->get_x()-20+randrange(41));
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1605_28_end: ;
}
void Frames::event_func_6146()
{
    // event 1606_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1606_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1606_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (140))) goto event_1606_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        FrameObject * single_instance_1606_28_0; single_instance_1606_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1606_28_0 == NULL)
                    single_instance_1606_28_0 = new_obj;
            }
        }
        media.play_id(SOUND_METALHIT_45, -1, 1);
        media.play_id(SOUND_COMMON_LIGHTRAY_111, -1, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1606_28_end: ;
}
void Frames::event_func_6147()
{
    // event 1607_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1607_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (12))) goto event_1607_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(1, get_max(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(1)-0.1, -16));
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(0, ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(1));
        ((Active*)get_instance(kingdomstone_1587_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(2)+((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(npchookline_1601_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_box_index(1));
    }
    event_1607_28_end: ;
}
void Frames::event_func_6148()
{
    // event 1608_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1608_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1608_28_end;
        ksprojectile1_1525_instances.clear_selection();
        playerskinsash_418_instances.clear_selection();
        if (!check_overlap(ksprojectile1_1525_instances, playerskinsash_418_instances)) goto event_1608_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_off(1))) goto event_1608_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(5, -4);
        media.play_id(SOUND_LILAC_HURT_2_81, -1, 1);
    }
    event_1608_28_end: ;
}
void Frames::event_func_6149()
{
    // event 1609_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1609_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1609_28_end;
        ksprojectile1_1525_instances.clear_selection();
        playerskincarol_445_instances.clear_selection();
        if (!check_overlap(ksprojectile1_1525_instances, playerskincarol_445_instances)) goto event_1609_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_off(2))) goto event_1609_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.enable(2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(6, -7);
        media.play_id(SOUND_CAROL_HURT1_115, -1, 1);
    }
    event_1609_28_end: ;
}
void Frames::event_func_6150()
{
    // event 1610_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1610_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1610_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (23))) goto event_1610_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_off(1))) goto event_1610_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1610_28_end: ;
}
void Frames::event_func_6151()
{
    // event 1611_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1611_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1611_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (23))) goto event_1611_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1611_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(5)) < (0))) goto event_1611_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(5));
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(5, get_min(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(5)+0.2, 0));
    }
    event_1611_28_end: ;
}
void Frames::event_func_6152()
{
    // event 1612_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1612_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1612_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (23))) goto event_1612_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1612_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(5)) >= (0))) goto event_1612_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1612_28_end: ;
}
void Frames::event_func_6153()
{
    // event 1613_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1613_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1613_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (20))) goto event_1613_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_off(2))) goto event_1613_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1613_28_end: ;
}
void Frames::event_func_6154()
{
    // event 1614_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1614_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1614_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (23))) goto event_1614_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(2))) goto event_1614_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(6)) < (0))) goto event_1614_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(6));
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(6, get_min(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(6)+0.2, 0));
    }
    event_1614_28_end: ;
}
void Frames::event_func_6155()
{
    // event 1615_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1615_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (11))) goto event_1615_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (23))) goto event_1615_28_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(2))) goto event_1615_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(6)) >= (0))) goto event_1615_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1615_28_end: ;
}
void Frames::event_func_6156()
{
    // event 1616_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1616_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1616_28_end;
        if (!((global_values->get(1)) == (0))) goto event_1616_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1616_28_end: ;
}
void Frames::event_func_6157()
{
    // event 1617_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1617_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1617_28_end;
        if (!((global_values->get(1)) != (0))) goto event_1617_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1617_28_end: ;
}
void Frames::event_func_6158()
{
    // event 1618_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1618_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1618_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1618_28_end: ;
}
void Frames::event_func_6159()
{
    // event 1619_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1619_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1619_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (5))) goto event_1619_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
        }
    }
    event_1619_28_end: ;
}
void Frames::event_func_6160()
{
    // event 1620_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1620_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1620_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (20))) goto event_1620_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
        }
    }
    event_1620_28_end: ;
}
void Frames::event_func_6161()
{
    // event 1621_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1621_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1621_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (80))) goto event_1621_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 2);
    }
    event_1621_28_end: ;
}
void Frames::event_func_6162()
{
    // event 1622_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1622_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1622_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (140))) goto event_1622_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 4);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(54);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1622_28_end: ;
}
void Frames::event_func_6163()
{
    // event 1623_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1623_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (12))) goto event_1623_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (180))) goto event_1623_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
    }
    event_1623_28_end: ;
}
void Frames::event_func_6164()
{
    // event 1624_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1624_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1624_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1624_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1624_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1624_28_end: ;
}
void Frames::event_func_6165()
{
    // event 1625_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1625_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1625_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1625_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1625_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1625_28_end: ;
}
void Frames::event_func_6166()
{
    // event 1626_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1626_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (14))) goto event_1626_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
    }
    event_1626_28_end: ;
}
void Frames::event_func_6167()
{
    // event 1627_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1627_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (14))) goto event_1627_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1627_28_end;
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1 = true;
        }
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 6344);
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 3200);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x());
    }
    event_1627_28_end: ;
}
void Frames::event_func_6168()
{
    // event 1628_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1628_28_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1628_28_end;
        FrameObject * single_instance_1628_28_0; single_instance_1628_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1628_28_0 == NULL)
                    single_instance_1628_28_0 = new_obj;
            }
        }
    }
    event_1628_28_end: ;
}
void Frames::event_func_6169()
{
    // event 1629_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1629_28_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1629_28_end;
        FrameObject * single_instance_1629_28_0; single_instance_1629_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_28_0 == NULL)
                    single_instance_1629_28_0 = new_obj;
            }
        }
    }
    event_1629_28_end: ;
}
void Frames::event_func_6170()
{
    // event 1630_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1630_28_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1630_28_end;
        FrameObject * single_instance_1630_28_0; single_instance_1630_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1630_28_0 == NULL)
                    single_instance_1630_28_0 = new_obj;
            }
        }
    }
    event_1630_28_end: ;
}
void Frames::event_func_6171()
{
    // event 1631_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1631_28_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1631_28_end;
        FrameObject * single_instance_1631_28_0; single_instance_1631_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1631_28_0 == NULL)
                    single_instance_1631_28_0 = new_obj;
            }
        }
    }
    event_1631_28_end: ;
}
void Frames::event_func_6172()
{
    // event 1632_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1632_28_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1632_28_end;
        FrameObject * single_instance_1632_28_0; single_instance_1632_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1632_28_0 == NULL)
                    single_instance_1632_28_0 = new_obj;
            }
        }
    }
    event_1632_28_end: ;
}
void Frames::event_func_6173()
{
    // event 1633_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1633_28_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1633_28_end;
        FrameObject * single_instance_1633_28_0; single_instance_1633_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1633_28_0 == NULL)
                    single_instance_1633_28_0 = new_obj;
            }
        }
    }
    event_1633_28_end: ;
}
void Frames::event_func_6174()
{
    // event 1634_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1634_28_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1634_28_end;
        FrameObject * single_instance_1634_28_0; single_instance_1634_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1634_28_0 == NULL)
                    single_instance_1634_28_0 = new_obj;
            }
        }
    }
    event_1634_28_end: ;
}
void Frames::event_func_6175()
{
    // event 1635_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1635_28_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1635_28_end;
        FrameObject * single_instance_1635_28_0; single_instance_1635_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1635_28_0 == NULL)
                    single_instance_1635_28_0 = new_obj;
            }
        }
    }
    event_1635_28_end: ;
}
void Frames::event_func_6176()
{
    // event 1636_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1636_28_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1636_28_end;
        FrameObject * single_instance_1636_28_0; single_instance_1636_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_28_0 == NULL)
                    single_instance_1636_28_0 = new_obj;
            }
        }
    }
    event_1636_28_end: ;
}
void Frames::event_func_6177()
{
    // event 1637_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1637_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1637_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1637_28_end: ;
}
void Frames::event_func_6178()
{
    // event 1638_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1638_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1638_28_end;
        if (not_always_1638_28 > loop_count) {
            not_always_1638_28 = loop_count + 2;
            goto event_1638_28_end;
        }
        not_always_1638_28 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1638_28_end: ;
}
void Frames::event_func_6179()
{
    // event 1639_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1639_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1639_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_28();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1639_28_end: ;
}
void Frames::event_func_6180()
{
    // event 1640_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1640_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1640_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1640_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1640_28_end: ;
}
void Frames::event_func_6181()
{
    // event 1641_28
    bool or_result_1641_28 = false;
    bool or_temp_result_1641_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1641_28_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1641_28_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1641_28_0_end;
        if (not_always_1641_28 > loop_count) {
            not_always_1641_28 = loop_count + 2;
            goto or_event_1641_28_0_end;
        }
        not_always_1641_28 = loop_count + 2;
        or_result_1641_28 = true;
        or_temp_result_1641_28_0 = true;
    }
    or_event_1641_28_0_end: ;
    // event 1641_28
    bool or_temp_result_1641_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1641_28_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1641_28_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1641_28_1_end;
        if (not_always_1641_28 > loop_count) {
            not_always_1641_28 = loop_count + 2;
            goto or_event_1641_28_1_end;
        }
        not_always_1641_28 = loop_count + 2;
        or_result_1641_28 = true;
        or_temp_result_1641_28_1 = true;
        or_event_1641_28_1_end: ;
        if (!or_result_1641_28) goto or_final_or_event_1641_28_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1641_28_1_end: ;
}
void Frames::event_func_6182()
{
    // event 1642_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1642_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1642_28_end;
        if (not_always_1642_28 > loop_count) {
            not_always_1642_28 = loop_count + 2;
            goto event_1642_28_end;
        }
        not_always_1642_28 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1642_28_end: ;
}
void Frames::event_func_6183()
{
    // event 1643_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1643_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1643_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1643_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1643_28_end: ;
}
void Frames::event_func_6184()
{
    // event 1644_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1644_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1644_28_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1644_28_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1644_28_end: ;
}
void Frames::event_func_6185()
{
    // event 1645_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1645_28_end;
        if (!((global_values->get(27)) == (0))) goto event_1645_28_end;
        if (not_always_1645_28 > loop_count) {
            not_always_1645_28 = loop_count + 2;
            goto event_1645_28_end;
        }
        not_always_1645_28 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1645_28_end: ;
}
void Frames::event_func_6186()
{
    // event 1649_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1649_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1649_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1649_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1649_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1649_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1649_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1649_28_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1649_28_end: ;
}
void Frames::event_func_6187()
{
    // event 1650_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1650_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1650_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1650_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1650_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1650_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1650_28_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1650_28_end: ;
}
void Frames::event_func_6188()
{
    // event 1651_28
    bool or_result_1651_28 = false;
    bool or_temp_result_1651_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1651_28_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1651_28_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1651_28_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1651_28_0_end;
        or_result_1651_28 = true;
        or_temp_result_1651_28_0 = true;
    }
    or_event_1651_28_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1651_28_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1651_28
    bool or_temp_result_1651_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1651_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1651_28_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1651_28_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1651_28_1_end;
        or_result_1651_28 = true;
        or_temp_result_1651_28_1 = true;
        or_event_1651_28_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1651_28_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1651_28) goto or_final_or_event_1651_28_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1651_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1651_28_0 || or_temp_result_1651_28_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1651_28_1_end: ;
}
void Frames::event_func_6189()
{
    // event 1652_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1652_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1652_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1652_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1652_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1652_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1652_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1652_28_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1652_28_end: ;
}
void Frames::event_func_6190()
{
    // event 1653_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1653_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1653_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1653_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1653_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1653_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1653_28_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1653_28_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1653_28_end: ;
}
void Frames::event_func_6191()
{
    // event 1654_28
    bool or_result_1654_28 = false;
    bool or_temp_result_1654_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1654_28_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1654_28_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1654_28_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1654_28_0_end;
        or_result_1654_28 = true;
        or_temp_result_1654_28_0 = true;
    }
    or_event_1654_28_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1654_28_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1654_28
    bool or_temp_result_1654_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1654_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1654_28_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1654_28_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1654_28_1_end;
        or_result_1654_28 = true;
        or_temp_result_1654_28_1 = true;
        or_event_1654_28_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1654_28_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1654_28) goto or_final_or_event_1654_28_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1654_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1654_28_0 || or_temp_result_1654_28_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1654_28_1_end: ;
}
void Frames::event_func_6192()
{
    // event 1655_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1655_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1655_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1655_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1655_28_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1655_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1655_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1655_28_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1655_28_end: ;
}
void Frames::event_func_6193()
{
    // event 1656_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1656_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1656_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1656_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1656_28_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1656_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1656_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1656_28_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1656_28_end: ;
}
void Frames::event_func_6194()
{
    // event 1657_28
    bool or_result_1657_28 = false;
    bool or_temp_result_1657_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1657_28_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1657_28_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1657_28_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1657_28_0_end;
        or_result_1657_28 = true;
        or_temp_result_1657_28_0 = true;
    }
    or_event_1657_28_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1657_28_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1657_28
    bool or_temp_result_1657_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1657_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1657_28_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1657_28_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1657_28_1_end;
        or_result_1657_28 = true;
        or_temp_result_1657_28_1 = true;
        or_event_1657_28_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1657_28_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1657_28) goto or_final_or_event_1657_28_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1657_28_0 || or_temp_result_1657_28_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1657_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1657_28_1_end: ;
}
void Frames::event_func_6195()
{
    // event 1658_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1658_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1658_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1658_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1658_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1658_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1658_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1658_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1658_28_end: ;
}
void Frames::event_func_6196()
{
    // event 1659_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1659_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1659_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1659_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1659_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1659_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1659_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1659_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1659_28_end: ;
}
void Frames::event_func_6197()
{
    // event 1660_28
    bool or_result_1660_28 = false;
    bool or_temp_result_1660_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1660_28_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1660_28_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1660_28_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1660_28_0_end;
        or_result_1660_28 = true;
        or_temp_result_1660_28_0 = true;
    }
    or_event_1660_28_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1660_28_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1660_28
    bool or_temp_result_1660_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1660_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1660_28_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1660_28_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1660_28_1_end;
        or_result_1660_28 = true;
        or_temp_result_1660_28_1 = true;
        or_event_1660_28_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1660_28_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1660_28) goto or_final_or_event_1660_28_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1660_28_0 || or_temp_result_1660_28_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1660_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1660_28_1_end: ;
}
void Frames::event_func_6198()
{
    // event 1661_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1661_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1661_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1661_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1661_28_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1661_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1661_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1661_28_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1661_28_end: ;
}
void Frames::event_func_6199()
{
    // event 1662_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1662_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1662_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1662_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1662_28_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1662_28_end;
        if (!media.is_channel_playing(20-1)) goto event_1662_28_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1662_28_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1662_28_end: ;
}
void Frames::event_func_6200()
{
    // event 1663_28
    bool or_result_1663_28 = false;
    bool or_temp_result_1663_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1663_28_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1663_28_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1663_28_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1663_28_0_end;
        or_result_1663_28 = true;
        or_temp_result_1663_28_0 = true;
    }
    or_event_1663_28_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1663_28_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1663_28
    bool or_temp_result_1663_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1663_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1663_28_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1663_28_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1663_28_1_end;
        or_result_1663_28 = true;
        or_temp_result_1663_28_1 = true;
        or_event_1663_28_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1663_28_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1663_28) goto or_final_or_event_1663_28_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1663_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1663_28_0 || or_temp_result_1663_28_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1663_28_1_end: ;
}
void Frames::event_func_6201()
{
    // event 1664_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1664_28_end;
        if (!((global_values->get(27)) == (1))) goto event_1664_28_end;
        if (not_always_1664_28 > loop_count) {
            not_always_1664_28 = loop_count + 2;
            goto event_1664_28_end;
        }
        not_always_1664_28 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1664_28_end: ;
}
void Frames::event_func_6202()
{
    // event 1665_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1665_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1665_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1665_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1665_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1665_28_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1665_28_end: ;
}
void Frames::event_func_6203()
{
    // event 1666_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1666_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1666_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1666_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1666_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1666_28_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1666_28_end: ;
}
void Frames::event_func_6204()
{
    // event 1667_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1667_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1667_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1667_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1667_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1667_28_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1667_28_end: ;
}
void Frames::event_func_6205()
{
    // event 1668_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1668_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1668_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1668_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1668_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1668_28_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1668_28_end: ;
}
void Frames::event_func_6206()
{
    // event 1669_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1669_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1669_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1669_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1669_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1669_28_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1669_28_end: ;
}
void Frames::event_func_6207()
{
    // event 1670_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1670_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1670_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1670_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1670_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1670_28_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1670_28_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1670_28_end: ;
}
void Frames::event_func_6208()
{
    // event 1671_28
    bool or_result_1671_28 = false;
    bool or_temp_result_1671_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1671_28_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1671_28_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1671_28_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1671_28_0_end;
        or_result_1671_28 = true;
        or_temp_result_1671_28_0 = true;
    }
    or_event_1671_28_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1671_28_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1671_28
    bool or_temp_result_1671_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1671_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1671_28_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1671_28_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1671_28_1_end;
        or_result_1671_28 = true;
        or_temp_result_1671_28_1 = true;
        or_event_1671_28_1_end: ;
        if (or_temp_result_1671_28_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1671_28) goto or_final_or_event_1671_28_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1671_28_0 || or_temp_result_1671_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1671_28_0 || or_temp_result_1671_28_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1671_28_1_end: ;
}
void Frames::event_func_6209()
{
    // event 1672_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1672_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1672_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1672_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1672_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1672_28_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1672_28_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1672_28_end: ;
}
void Frames::event_func_6210()
{
    // event 1673_28
    bool or_result_1673_28 = false;
    bool or_temp_result_1673_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1673_28_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1673_28_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1673_28_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1673_28_0_end;
        or_result_1673_28 = true;
        or_temp_result_1673_28_0 = true;
    }
    or_event_1673_28_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1673_28_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1673_28
    bool or_temp_result_1673_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1673_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1673_28_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1673_28_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1673_28_1_end;
        or_result_1673_28 = true;
        or_temp_result_1673_28_1 = true;
        or_event_1673_28_1_end: ;
        if (or_temp_result_1673_28_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1673_28) goto or_final_or_event_1673_28_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1673_28_0 || or_temp_result_1673_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1673_28_0 || or_temp_result_1673_28_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1673_28_1_end: ;
}
void Frames::event_func_6211()
{
    // event 1674_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1674_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1674_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1674_28_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1674_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1674_28_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1674_28_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1674_28_end: ;
}
void Frames::event_func_6212()
{
    // event 1675_28
    bool or_result_1675_28 = false;
    bool or_temp_result_1675_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1675_28_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1675_28_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1675_28_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1675_28_0_end;
        or_result_1675_28 = true;
        or_temp_result_1675_28_0 = true;
    }
    or_event_1675_28_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1675_28_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1675_28
    bool or_temp_result_1675_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1675_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1675_28_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1675_28_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1675_28_1_end;
        or_result_1675_28 = true;
        or_temp_result_1675_28_1 = true;
        or_event_1675_28_1_end: ;
        if (or_temp_result_1675_28_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1675_28) goto or_final_or_event_1675_28_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1675_28_0 || or_temp_result_1675_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1675_28_0 || or_temp_result_1675_28_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1675_28_1_end: ;
}
void Frames::event_func_6213()
{
    // event 1676_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1676_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1676_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1676_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1676_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1676_28_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1676_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1676_28_end: ;
}
void Frames::event_func_6214()
{
    // event 1677_28
    bool or_result_1677_28 = false;
    bool or_temp_result_1677_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1677_28_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1677_28_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1677_28_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1677_28_0_end;
        or_result_1677_28 = true;
        or_temp_result_1677_28_0 = true;
    }
    or_event_1677_28_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1677_28_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1677_28
    bool or_temp_result_1677_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1677_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1677_28_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1677_28_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1677_28_1_end;
        or_result_1677_28 = true;
        or_temp_result_1677_28_1 = true;
        or_event_1677_28_1_end: ;
        if (or_temp_result_1677_28_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1677_28) goto or_final_or_event_1677_28_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1677_28_0 || or_temp_result_1677_28_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1677_28_0 || or_temp_result_1677_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1677_28_1_end: ;
}
void Frames::event_func_6215()
{
    // event 1678_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto event_1678_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1678_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1678_28_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1678_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1678_28_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1678_28_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1678_28_end: ;
}
void Frames::event_func_6216()
{
    // event 1679_28
    bool or_result_1679_28 = false;
    bool or_temp_result_1679_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1679_28_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1679_28_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1679_28_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1679_28_0_end;
        or_result_1679_28 = true;
        or_temp_result_1679_28_0 = true;
    }
    or_event_1679_28_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1679_28_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1679_28
    bool or_temp_result_1679_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_blips_1)) goto or_event_1679_28_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1679_28_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1679_28_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1679_28_1_end;
        or_result_1679_28 = true;
        or_temp_result_1679_28_1 = true;
        or_event_1679_28_1_end: ;
        if (or_temp_result_1679_28_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1679_28) goto or_final_or_event_1679_28_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1679_28_0 || or_temp_result_1679_28_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1679_28_0 || or_temp_result_1679_28_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1679_28_1_end: ;
}
void Frames::event_func_6217()
{
    // event 1681_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1681_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1681_28_end: ;
}
void Frames::event_func_6218()
{
    // event 1684_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1684_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1684_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1684_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1684_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1684_28_end;
        if (not_always_1684_28 > loop_count) {
            not_always_1684_28 = loop_count + 2;
            goto event_1684_28_end;
        }
        not_always_1684_28 = loop_count + 2;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1684_28_end: ;
}
void Frames::event_func_6219()
{
    // event 1685_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1685_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1685_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1685_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1685_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1685_28_end: ;
}
void Frames::event_func_6220()
{
    // event 1686_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1686_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1686_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1686_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(-2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1686_28_end: ;
}
void Frames::event_func_6221()
{
    // event 1687_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1687_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1687_28_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1687_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1687_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1687_28_end;
        global_values->set(4, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 1024);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1816);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1687_28_end: ;
}
void Frames::event_func_6222()
{
    // event 1688_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1688_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (80))) goto event_1688_28_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1688_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1688_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1096))) goto event_1688_28_end;
        global_values->set(4, -3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 704);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 920);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1688_28_end: ;
}
void Frames::event_func_6223()
{
    // event 1689_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1689_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (840))) goto event_1689_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1689_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (900))) goto event_1689_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (704-50))) goto event_1689_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1689_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1689_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1689_28_end;
        if (not_always_1689_28 > loop_count) {
            not_always_1689_28 = loop_count + 2;
            goto event_1689_28_end;
        }
        not_always_1689_28 = loop_count + 2;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
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
    }
    event_1689_28_end: ;
}
void Frames::event_func_6224()
{
    // event 1690_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1690_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1690_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1864))) goto event_1690_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1024-50))) goto event_1690_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1690_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1690_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1690_28_end;
        if (not_always_1690_28 > loop_count) {
            not_always_1690_28 = loop_count + 2;
            goto event_1690_28_end;
        }
        not_always_1690_28 = loop_count + 2;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
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
    }
    event_1690_28_end: ;
}
void Frames::event_func_6225()
{
    // event 1691_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1691_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (900))) goto event_1691_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (840))) goto event_1691_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1691_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (704-50))) goto event_1691_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1691_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1691_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1691_28_end: ;
}
void Frames::event_func_6226()
{
    // event 1692_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (840))) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (900))) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (704-50))) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1692_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1692_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1692_28_end: ;
}
void Frames::event_func_6227()
{
    // event 1693_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1693_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (840))) goto event_1693_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1096))) goto event_1693_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (900))) goto event_1693_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (704-50))) goto event_1693_28_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1693_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1693_28_end;
        global_values->set(4, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1432);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1693_28_end: ;
}
void Frames::event_func_6228()
{
    // event 1694_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1694_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1608))) goto event_1694_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1864))) goto event_1694_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1024-50))) goto event_1694_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1694_28_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1694_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1694_28_end: ;
}
