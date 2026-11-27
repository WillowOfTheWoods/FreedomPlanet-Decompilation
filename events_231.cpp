#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18258()
{
    // event 1524_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1524_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1524_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1524_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(0);
    }
    event_1524_81_end: ;
}
void Frames::event_func_18259()
{
    // event 1525_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1525_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1525_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (65))) goto event_1525_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (120))) goto event_1525_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(1);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_x(712-2+randrange(5));
    }
    event_1525_81_end: ;
}
void Frames::event_func_18260()
{
    // event 1526_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1526_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1526_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1526_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(0);
    }
    event_1526_81_end: ;
}
void Frames::event_func_18261()
{
    // event 1527_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1527_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1527_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (153))) goto event_1527_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (190))) goto event_1527_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(1);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_x(712-2+randrange(5));
    }
    event_1527_81_end: ;
}
void Frames::event_func_18262()
{
    // event 1528_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1528_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1528_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (190))) goto event_1528_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(2);
    }
    event_1528_81_end: ;
}
void Frames::event_func_18263()
{
    // event 1529_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1529_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1529_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1529_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()-2);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(1);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_1529_81_end: ;
}
void Frames::event_func_18264()
{
    // event 1530_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1530_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1530_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1530_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(npclilactorture_3974_instances))->get_x()+20))) goto event_1530_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(11);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(18);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_28_05_ogg_293, 19-1);
    }
    event_1530_81_end: ;
}
void Frames::event_func_18265()
{
    // event 1531_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1531_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1531_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(29);
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_1531_81_0;
            ((Active*)get_instance(npclilactorture_3974_instances))->set_global_position(parent->get_action_x() + 3, parent->get_action_y() + 16);
            pos_end_1531_81_0: ;
        }
        ((Active*)get_instance(npclilactorture_3974_instances))->move_back(((Active*)get_instance(brevon_3683_instances)));
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(randrange(2));
    }
    event_1531_81_end: ;
}
void Frames::event_func_18266()
{
    // event 1532_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1532_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1532_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1532_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(4);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1532_81_end: ;
}
void Frames::event_func_18267()
{
    // event 1533_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1533_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1533_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1533_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1533_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1533_81_end: ;
}
void Frames::event_func_18268()
{
    // event 1534_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1534_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1534_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1534_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1534_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1534_81_end: ;
}
void Frames::event_func_18269()
{
    // event 1535_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1535_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1535_81_end;
        if (not_always_1535_81 > loop_count) {
            not_always_1535_81 = loop_count + 2;
            goto event_1535_81_end;
        }
        not_always_1535_81 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1535_81_end: ;
}
void Frames::event_func_18270()
{
    // event 1536_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1536_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1536_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1536_81_end: ;
}
void Frames::event_func_18271()
{
    // event 1537_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1537_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1537_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1537_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(npclilactorture_3974_instances))->set_x(1608);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_y(1481);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1608);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(0);
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(0);
        ((Active*)get_instance(npclilactorture_3974_instances))->restore_frame();
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1450);
        ((Active*)get_instance(brevon_3683_instances))->set_x(1802);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(29);
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
            ((Active*)*it)->set_x(1836);
        }
    }
    event_1537_81_end: ;
}
void Frames::event_func_18272()
{
    // event 1538_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1538_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1538_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1538_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1538_81_end: ;
}
void Frames::event_func_18273()
{
    // event 1539_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1539_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1539_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1539_81_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1539_81_end: ;
}
void Frames::event_func_18274()
{
    // event 1540_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1540_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1540_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1540_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(31);
        ((Active*)get_instance(brevon_3683_instances))->set_layer(3-1);
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1540_81_end: ;
}
void Frames::event_func_18275()
{
    // event 1541_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1541_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (11))) goto event_1541_81_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(global_values->get(3)*1.5)*4);
        }
        ((Active*)get_instance(tbtortureterminalscreen_3970_instances))->move_back();
    }
    event_1541_81_end: ;
}
void Frames::event_func_18276()
{
    // event 1542_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1542_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1542_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1542_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (240))) goto event_1542_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1542_81_end: ;
}
void Frames::event_func_18277()
{
    // event 1543_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1543_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1543_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1543_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 7);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1543_81_end: ;
}
void Frames::event_func_18278()
{
    // event 1544_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1544_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1544_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1544_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1544_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1544_81_end: ;
}
void Frames::event_func_18279()
{
    // event 1545_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1545_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1545_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1545_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(0);
    }
    event_1545_81_end: ;
}
void Frames::event_func_18280()
{
    // event 1546_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1546_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1546_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1546_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1546_81_end: ;
}
void Frames::event_func_18281()
{
    // event 1547_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1547_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (15))) goto event_1547_81_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->move_back();
        }
    }
    event_1547_81_end: ;
}
void Frames::event_func_18282()
{
    // event 1548_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1548_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (15))) goto event_1548_81_end;
        if (!(((Active*)get_instance(npclilactorture_3974_instances))->test_directions(1))) goto event_1548_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_frame());
    }
    event_1548_81_end: ;
}
void Frames::event_func_18283()
{
    // event 1549_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1549_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (15))) goto event_1549_81_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(brevon_3683_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonartifact_3975_instances.has_selection()) goto event_1549_81_end;
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1549_81_end: ;
}
void Frames::event_func_18284()
{
    // event 1550_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1550_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1550_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (8))) goto event_1550_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (17))) goto event_1550_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1550_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1550_81_end: ;
}
void Frames::event_func_18285()
{
    // event 1551_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1551_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1551_81_end;
        if (once_condition_1551_81) goto event_1551_81_end;
        once_condition_1551_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(0);
        media.stop_channel(20-1);
    }
    event_1551_81_end: ;
}
void Frames::event_func_18286()
{
    // event 1552_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1552_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_1552_81_end;
        if (!((media.get_channel_position(-1 +20)) > (2000))) goto event_1552_81_end;
        if (once_condition_1552_81) goto event_1552_81_end;
        once_condition_1552_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 6);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1552_81_end: ;
}
void Frames::event_func_18287()
{
    // event 1553_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1553_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1553_81_end;
        if (once_condition_1553_81) goto event_1553_81_end;
        once_condition_1553_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        media.stop_channel(20-1);
    }
    event_1553_81_end: ;
}
void Frames::event_func_18288()
{
    // event 1554_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1554_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_1554_81_end;
        if (!((media.get_channel_position(-1 +20)) > (1100))) goto event_1554_81_end;
        if (once_condition_1554_81) goto event_1554_81_end;
        once_condition_1554_81 = true;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_1554_81_end: ;
}
void Frames::event_func_18289()
{
    // event 1555_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1555_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1555_81_end;
        if (once_condition_1555_81) goto event_1555_81_end;
        once_condition_1555_81 = true;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_1555_81_end: ;
}
void Frames::event_func_18290()
{
    // event 1556_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1556_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1556_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1556_81_end: ;
}
void Frames::event_func_18291()
{
    // event 1557_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1557_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1557_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1557_81_end: ;
}
void Frames::event_func_18292()
{
    // event 1558_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1558_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1558_81_end;
        if (once_condition_1558_81) goto event_1558_81_end;
        once_condition_1558_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1558_81_end: ;
}
void Frames::event_func_18293()
{
    // event 1559_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1559_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1559_81_end;
        if (once_condition_1559_81) goto event_1559_81_end;
        once_condition_1559_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1559_81_end: ;
}
void Frames::event_func_18294()
{
    // event 1560_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1560_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1560_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1560_81_end: ;
}
void Frames::event_func_18295()
{
    // event 1561_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1561_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1561_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1561_81_end: ;
}
void Frames::event_func_18296()
{
    // event 1562_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1562_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1562_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1562_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1562_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_03_ogg_294, 19-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1562_81_end: ;
}
void Frames::event_func_18297()
{
    // event 1563_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1563_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1563_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1563_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1563_81_end: ;
}
void Frames::event_func_18298()
{
    // event 1564_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1564_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1564_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1564_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1564_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1564_81_end: ;
}
void Frames::event_func_18299()
{
    // event 1565_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1565_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1565_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1565_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_1565_81_end: ;
}
void Frames::event_func_18300()
{
    // event 1566_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1566_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1566_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1566_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(31);
    }
    event_1566_81_end: ;
}
void Frames::event_func_18301()
{
    // event 1567_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1567_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1567_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1567_81_end;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(36);
            ((Active*)*it)->set_x(1726);
            ((Active*)*it)->set_y(1488);
        }
    }
    event_1567_81_end: ;
}
void Frames::event_func_18302()
{
    // event 1568_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1568_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1568_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1568_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (110))) goto event_1568_81_end;
        tbbackwindow_3966_instances.clear_selection();
        for (ObjectIterator it(tbbackwindow_3966_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1568_81_end: ;
}
void Frames::event_func_18303()
{
    // event 1569_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1569_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1569_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1569_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1569_81_end: ;
}
void Frames::event_func_18304()
{
    // event 1570_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1570_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1570_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (110))) goto event_1570_81_end;
        media.play_id(SOUND_DOORMETAL_CLOSE_282, -1, 1);
    }
    event_1570_81_end: ;
}
void Frames::event_func_18305()
{
    // event 1571_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1571_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1571_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1571_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1571_81_end: ;
}
void Frames::event_func_18306()
{
    // event 1572_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1572_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1572_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (19))) goto event_1572_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (21))) goto event_1572_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1572_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1572_81_end: ;
}
void Frames::event_func_18307()
{
    // event 1573_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1573_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1573_81_end;
        if (not_always_1573_81 > loop_count) {
            not_always_1573_81 = loop_count + 2;
            goto event_1573_81_end;
        }
        not_always_1573_81 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1573_81_end: ;
}
void Frames::event_func_18308()
{
    // event 1574_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1574_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1574_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (21))) goto event_1574_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (22))) goto event_1574_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (25))) goto event_1574_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1574_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1574_81_end: ;
}
void Frames::event_func_18309()
{
    // event 1575_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1575_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1575_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1575_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(45);
        }
    }
    event_1575_81_end: ;
}
void Frames::event_func_18310()
{
    // event 1576_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1576_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1576_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_1576_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1576_81_end: ;
}
void Frames::event_func_18311()
{
    // event 1577_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1577_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1577_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1577_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1577_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1577_81_end: ;
}
void Frames::event_func_18312()
{
    // event 1578_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1578_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (23))) goto event_1578_81_end;
        if (not_always_1578_81 > loop_count) {
            not_always_1578_81 = loop_count + 2;
            goto event_1578_81_end;
        }
        not_always_1578_81 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1578_81_end: ;
}
void Frames::event_func_18313()
{
    // event 1579_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1579_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1579_81_end;
        if (not_always_1579_81 > loop_count) {
            not_always_1579_81 = loop_count + 2;
            goto event_1579_81_end;
        }
        not_always_1579_81 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1579_81_end: ;
}
void Frames::event_func_18314()
{
    // event 1580_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1580_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1580_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1580_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1580_81_end: ;
}
void Frames::event_func_18315()
{
    // event 1581_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1581_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1581_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1581_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1581_81_end: ;
}
void Frames::event_func_18316()
{
    // event 1582_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1582_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1582_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_1582_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1582_81_end: ;
}
void Frames::event_func_18317()
{
    // event 1583_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1583_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1583_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (1))) goto event_1583_81_end;
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
    }
    event_1583_81_end: ;
}
void Frames::event_func_18318()
{
    // event 1584_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1584_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1584_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1584_81_end;
        media.play_id(SOUND_BIGCHARGE_200, -1, 1);
    }
    event_1584_81_end: ;
}
void Frames::event_func_18319()
{
    // event 1585_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1585_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1585_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1585_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(12);
    }
    event_1585_81_end: ;
}
void Frames::event_func_18320()
{
    // event 1586_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1586_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1586_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1586_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
    }
    event_1586_81_end: ;
}
void Frames::event_func_18321()
{
    // event 1587_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1587_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1587_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1587_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1587_81_end: ;
}
void Frames::event_func_18322()
{
    // event 1588_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1588_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1588_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1588_81_end;
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
        ((Active*)get_instance(torturelightning_3978_instances))->set_visible(true);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(1);
        ((Active*)get_instance(npclilactorture_3974_instances))->restore_frame();
        ((Active*)get_instance(npclilactorture_3974_instances))->restore_speed();
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_07_ogg_295, 19-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
    }
    event_1588_81_end: ;
}
void Frames::event_func_18323()
{
    // event 1589_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1589_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1589_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1589_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_1589_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
        FrameObject * single_instance_1589_81_0; single_instance_1589_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + -4, parent->y + -8), parent->layer);
                if (single_instance_1589_81_0 == NULL)
                    single_instance_1589_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1589_81_0))->move_back();
        ((Active*)((Active*)single_instance_1589_81_0))->get_movement()->set_speed(40+randrange(20));
        static FlatObjectList swap_1589_81;
        swap_1589_81.clear();
        {
            swap_1589_81.push_back(((Active*)single_instance_1589_81_0));
        }
        ((Active*)((Active*)single_instance_1589_81_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1589_81_0))->set_x(((Active*)single_instance_1589_81_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_1589_81_0))->set_y(((Active*)single_instance_1589_81_0)->get_y()-16+randrange(33));
        ((Active*)((Active*)single_instance_1589_81_0))->set_direction(pick_random(16, 0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16));
        ((Active*)((Active*)single_instance_1589_81_0))->get_movement()->set_deceleration(0);
        swap_position(swap_1589_81);
    }
    event_1589_81_end: ;
}
void Frames::event_func_18324()
{
    // event 1590_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1590_81_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1590_81_end: ;
}
void Frames::event_func_18325()
{
    // event 1591_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1591_81_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+12))) { it.deselect(); continue; }
        }
        if (!effectsplayersplode_310_instances.has_selection()) goto event_1591_81_end;
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1591_81_end: ;
}
void Frames::event_func_18326()
{
    // event 1592_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1592_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1592_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1592_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%30) == (0))) goto event_1592_81_end;
        media.play_id(SOUND_ENEMY_ELECTRIC_167, -1, 1);
    }
    event_1592_81_end: ;
}
void Frames::event_func_18327()
{
    // event 1593_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1593_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1593_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (280))) goto event_1593_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%100) == (80))) goto event_1593_81_end;
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
    }
    event_1593_81_end: ;
}
void Frames::event_func_18328()
{
    // event 1594_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1594_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1594_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (300))) goto event_1594_81_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_08_ogg_296, 19-1);
    }
    event_1594_81_end: ;
}
void Frames::event_func_18329()
{
    // event 1595_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1595_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1595_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (420))) goto event_1595_81_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_09_ogg_297, 19-1);
    }
    event_1595_81_end: ;
}
void Frames::event_func_18330()
{
    // event 1596_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1596_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1596_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (220))) goto event_1596_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1596_81_end: ;
}
void Frames::event_func_18331()
{
    // event 1597_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1597_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1597_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (460))) goto event_1597_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1597_81_end: ;
}
void Frames::event_func_18332()
{
    // event 1598_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1598_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1598_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (500))) goto event_1598_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(torturelightning_3978_instances))->set_visible(false);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(0);
    }
    event_1598_81_end: ;
}
void Frames::event_func_18333()
{
    // event 1599_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1599_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1599_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (80))) goto event_1599_81_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1599_81_end;
        FrameObject * single_instance_1599_81_0; single_instance_1599_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + -4, parent->y + -8), parent->layer);
                if (single_instance_1599_81_0 == NULL)
                    single_instance_1599_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1599_81_0))->move_back();
        ((Active*)((Active*)single_instance_1599_81_0))->set_direction(pick_random(5, 7, 8, 9, 10, 11));
    }
    event_1599_81_end: ;
}
void Frames::event_func_18334()
{
    // event 1600_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1600_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1600_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (25))) goto event_1600_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (26))) goto event_1600_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1600_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(2);
    }
    event_1600_81_end: ;
}
void Frames::event_func_18335()
{
    // event 1601_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1601_81_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(2))) goto event_1601_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1601_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (80))) goto event_1601_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.disable(2);
    }
    event_1601_81_end: ;
}
void Frames::event_func_18336()
{
    // event 1602_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1602_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1602_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1602_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_1602_81_end: ;
}
void Frames::event_func_18337()
{
    // event 1603_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1603_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1603_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1603_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(31);
    }
    event_1603_81_end: ;
}
void Frames::event_func_18338()
{
    // event 1604_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1604_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1604_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (51))) goto event_1604_81_end;
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
    }
    event_1604_81_end: ;
}
void Frames::event_func_18339()
{
    // event 1605_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1605_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (26))) goto event_1605_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1605_81_end;
        media.play_id(SOUND_BIGCHARGE_200, -1, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 10);
    }
    event_1605_81_end: ;
}
void Frames::event_func_18340()
{
    // event 1606_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1606_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1606_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1606_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1606_81_end: ;
}
void Frames::event_func_18341()
{
    // event 1607_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1607_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1607_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1607_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1607_81_end: ;
}
void Frames::event_func_18342()
{
    // event 1608_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1608_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1608_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1608_81_end;
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
        ((Active*)get_instance(torturelightning_3978_instances))->set_visible(true);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(1);
        ((Active*)get_instance(npclilactorture_3974_instances))->restore_frame();
        ((Active*)get_instance(npclilactorture_3974_instances))->restore_speed();
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_07_ogg_295, 19-1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
    }
    event_1608_81_end: ;
}
void Frames::event_func_18343()
{
    // event 1609_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1609_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1609_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1609_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%3) == (0))) goto event_1609_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 5);
        FrameObject * single_instance_1609_81_0; single_instance_1609_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + -4, parent->y + -8), parent->layer);
                if (single_instance_1609_81_0 == NULL)
                    single_instance_1609_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1609_81_0))->move_back();
        ((Active*)((Active*)single_instance_1609_81_0))->get_movement()->set_speed(40+randrange(20));
        static FlatObjectList swap_1609_81;
        swap_1609_81.clear();
        {
            swap_1609_81.push_back(((Active*)single_instance_1609_81_0));
        }
        ((Active*)((Active*)single_instance_1609_81_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1609_81_0))->set_x(((Active*)single_instance_1609_81_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_1609_81_0))->set_y(((Active*)single_instance_1609_81_0)->get_y()-16+randrange(33));
        ((Active*)((Active*)single_instance_1609_81_0))->set_direction(pick_random(16, 0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16));
        ((Active*)((Active*)single_instance_1609_81_0))->get_movement()->set_deceleration(0);
        swap_position(swap_1609_81);
    }
    event_1609_81_end: ;
}
void Frames::event_func_18344()
{
    // event 1610_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1610_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1610_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1610_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%30) == (0))) goto event_1610_81_end;
        media.play_id(SOUND_ENEMY_ELECTRIC_167, -1, 1);
    }
    event_1610_81_end: ;
}
void Frames::event_func_18345()
{
    // event 1611_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1611_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1611_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (280))) goto event_1611_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%100) == (80))) goto event_1611_81_end;
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
    }
    event_1611_81_end: ;
}
void Frames::event_func_18346()
{
    // event 1612_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1612_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1612_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (300))) goto event_1612_81_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_29_09_ogg_297, 19-1);
    }
    event_1612_81_end: ;
}
void Frames::event_func_18347()
{
    // event 1613_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1613_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1613_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (440))) goto event_1613_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 10);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(3);
        ((Active*)get_instance(torturelightning_3978_instances))->set_visible(false);
    }
    event_1613_81_end: ;
}
void Frames::event_func_18348()
{
    // event 1614_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1614_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1614_81_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1614_81_end;
        FrameObject * single_instance_1614_81_0; single_instance_1614_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + -4, parent->y + -8), parent->layer);
                if (single_instance_1614_81_0 == NULL)
                    single_instance_1614_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1614_81_0))->move_back();
        ((Active*)((Active*)single_instance_1614_81_0))->set_direction(pick_random(5, 7, 8, 9, 10, 11));
    }
    event_1614_81_end: ;
}
void Frames::event_func_18349()
{
    // event 1615_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1615_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (28))) goto event_1615_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1615_81_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(2))) goto event_1615_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.disable(2);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1615_81_end: ;
}
void Frames::event_func_18350()
{
    // event 1616_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1616_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1616_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1616_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1616_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1616_81_end: ;
}
void Frames::event_func_18351()
{
    // event 1617_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1617_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1617_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(1);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()-2);
    }
    event_1617_81_end: ;
}
void Frames::event_func_18352()
{
    // event 1618_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1618_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1618_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1618_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(45);
        }
    }
    event_1618_81_end: ;
}
void Frames::event_func_18353()
{
    // event 1619_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1619_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (30))) goto event_1619_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1619_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(4);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1619_81_end: ;
}
void Frames::event_func_18354()
{
    // event 1620_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1620_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1620_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (28))) goto event_1620_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (30))) goto event_1620_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1620_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1620_81_end: ;
}
void Frames::event_func_18355()
{
    // event 1621_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1621_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1621_81_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1621_81_end;
        if (!((media.get_channel_position(-1 +20)) < (2200))) goto event_1621_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(8);
    }
    event_1621_81_end: ;
}
void Frames::event_func_18356()
{
    // event 1622_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1622_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1622_81_end;
        if (once_condition_1622_81) goto event_1622_81_end;
        once_condition_1622_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(0);
        ((Active*)get_instance(npclilactorture_3974_instances))->force_frame(15);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(15);
        }
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1622_81_end: ;
}
void Frames::event_func_18357()
{
    // event 1623_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_tortured_1)) goto event_1623_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1623_81_end;
        if (once_condition_1623_81) goto event_1623_81_end;
        once_condition_1623_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1623_81_end: ;
}
