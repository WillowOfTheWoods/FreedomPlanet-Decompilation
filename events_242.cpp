#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19221()
{
    // event 1545_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1545_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1545_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(29);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(1000, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+1));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1560);
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1545_83_end: ;
}
void Frames::event_func_19222()
{
    // event 1546_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1546_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1546_83_end;
        if (once_condition_1546_83) goto event_1546_83_end;
        once_condition_1546_83 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_shuigang_palace_8);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_1546_83_end: ;
}
void Frames::event_func_19223()
{
    // event 1547_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1547_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1547_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1547_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1547_83_end: ;
}
void Frames::event_func_19224()
{
    // event 1548_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1548_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1548_83_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()))) goto event_1548_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()-80);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_y()-90);
        ((Active*)get_instance(npcsyntax_2519_instances))->force_animation(7);
        media.play_id(SOUND_SYNTAX_APPEAR_2_286, -1, 1);
    }
    event_1548_83_end: ;
}
void Frames::event_func_19225()
{
    // event 1549_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1549_83_end;
        if (((Active*)get_instance(npcsyntax_2519_instances))->test_animation(7)) goto event_1549_83_end;
        if (once_condition_1549_83) goto event_1549_83_end;
        once_condition_1549_83 = true;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
    }
    event_1549_83_end: ;
}
void Frames::event_func_19226()
{
    // event 1550_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1550_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1550_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1550_83_end: ;
}
void Frames::event_func_19227()
{
    // event 1551_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1551_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1551_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1551_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 13);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1551_83_end: ;
}
void Frames::event_func_19228()
{
    // event 1552_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1552_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1552_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (13))) goto event_1552_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1552_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1552_83_end: ;
}
void Frames::event_func_19229()
{
    // event 1553_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1553_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1553_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1553_83_end: ;
}
void Frames::event_func_19230()
{
    // event 1554_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1554_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1554_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->get_x()) > (((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()+20))) goto event_1554_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, -1);
    }
    event_1554_83_end: ;
}
void Frames::event_func_19231()
{
    // event 1555_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1555_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1555_83_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->get_x()) > (((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()+80))) goto event_1555_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1555_83_end: ;
}
void Frames::event_func_19232()
{
    // event 1556_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1556_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1556_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1556_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1556_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(30);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1556_83_end: ;
}
void Frames::event_func_19233()
{
    // event 1557_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1557_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) > (3))) goto event_1557_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) > (14))) goto event_1557_83_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1557_83_end: ;
}
void Frames::event_func_19234()
{
    // event 1558_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1558_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) > (3))) goto event_1558_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) > (14))) goto event_1558_83_end;
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(brevon_3683_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonartifact_3975_instances.has_selection()) goto event_1558_83_end;
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1558_83_end: ;
}
void Frames::event_func_19235()
{
    // event 1559_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1559_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1559_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1559_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1559_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1559_83_end: ;
}
void Frames::event_func_19236()
{
    // event 1560_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1560_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1560_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1560_83_end: ;
}
void Frames::event_func_19237()
{
    // event 1561_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1561_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1561_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1561_83_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.sub(10, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 0.5);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()+3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1561_83_end: ;
}
void Frames::event_func_19238()
{
    // event 1562_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1562_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1562_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1562_83_end;
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(true);
        ((Active*)get_instance(syntaxprojection2_4098_instances))->set_visible(true);
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
    }
    event_1562_83_end: ;
}
void Frames::event_func_19239()
{
    // event 1563_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1563_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1563_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1563_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1563_83_end: ;
}
void Frames::event_func_19240()
{
    // event 1564_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1564_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1564_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1564_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1564_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1564_83_end: ;
}
void Frames::event_func_19241()
{
    // event 1565_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1565_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1565_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1565_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1565_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
    }
    event_1565_83_end: ;
}
void Frames::event_func_19242()
{
    // event 1566_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1566_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1566_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1566_83_end: ;
}
void Frames::event_func_19243()
{
    // event 1567_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1567_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1567_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1567_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, 2000);
        ((Active*)get_instance(syntaxprojection1_4100_instances))->set_visible(false);
        ((Active*)get_instance(syntaxprojection2_4098_instances))->set_visible(false);
        syntaxprojection3_4101_instances.clear_selection();
        for (ObjectIterator it(syntaxprojection3_4101_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 20);
    }
    event_1567_83_end: ;
}
void Frames::event_func_19244()
{
    // event 1568_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1568_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1568_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1568_83_end: ;
}
void Frames::event_func_19245()
{
    // event 1569_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1569_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1569_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1569_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1569_83_end: ;
}
void Frames::event_func_19246()
{
    // event 1570_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1570_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1570_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1570_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1570_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1570_83_end: ;
}
void Frames::event_func_19247()
{
    // event 1571_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1571_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1571_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (19))) goto event_1571_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1571_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1571_83_end: ;
}
void Frames::event_func_19248()
{
    // event 1572_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1572_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1572_83_end;
        if (not_always_1572_83 > loop_count) {
            not_always_1572_83 = loop_count + 2;
            goto event_1572_83_end;
        }
        not_always_1572_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1572_83_end: ;
}
void Frames::event_func_19249()
{
    // event 1573_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1573_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1573_83_end;
        if (not_always_1573_83 > loop_count) {
            not_always_1573_83 = loop_count + 2;
            goto event_1573_83_end;
        }
        not_always_1573_83 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1573_83_end: ;
}
void Frames::event_func_19250()
{
    // event 1574_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1574_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1574_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1574_83_end: ;
}
void Frames::event_func_19251()
{
    // event 1575_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1575_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1575_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcdail_4017_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1575_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(5);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1575_83_end: ;
}
void Frames::event_func_19252()
{
    // event 1576_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1576_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1576_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1576_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1576_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1576_83_end: ;
}
void Frames::event_func_19253()
{
    // event 1577_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1577_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1577_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1577_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1577_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1577_83_end: ;
}
void Frames::event_func_19254()
{
    // event 1578_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1578_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1578_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1578_83_end: ;
}
void Frames::event_func_19255()
{
    // event 1579_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1579_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1579_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcdail_4017_instances, default_active_instance))->get_x()-50))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1579_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(5);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1579_83_end: ;
}
void Frames::event_func_19256()
{
    // event 1580_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1580_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1580_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (22))) goto event_1580_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (23))) goto event_1580_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1580_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1580_83_end: ;
}
void Frames::event_func_19257()
{
    // event 1581_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1581_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (23))) goto event_1581_83_end;
        if (not_always_1581_83 > loop_count) {
            not_always_1581_83 = loop_count + 2;
            goto event_1581_83_end;
        }
        not_always_1581_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1581_83_end: ;
}
void Frames::event_func_19258()
{
    // event 1582_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1582_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1582_83_end;
        if (not_always_1582_83 > loop_count) {
            not_always_1582_83 = loop_count + 2;
            goto event_1582_83_end;
        }
        not_always_1582_83 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1582_83_end: ;
}
void Frames::event_func_19259()
{
    // event 1583_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1583_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1583_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (24))) goto event_1583_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1583_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1583_83_end: ;
}
void Frames::event_func_19260()
{
    // event 1584_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1584_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1584_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1584_83_end: ;
}
void Frames::event_func_19261()
{
    // event 1585_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1585_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1585_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcdail_4017_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1585_83_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1585_83_end: ;
}
void Frames::event_func_19262()
{
    // event 1586_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1586_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1586_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1586_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1586_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1586_83_end: ;
}
void Frames::event_func_19263()
{
    // event 1587_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1587_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1587_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (26))) goto event_1587_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1587_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1587_83_end: ;
}
void Frames::event_func_19264()
{
    // event 1588_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1588_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1588_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1588_83_end: ;
}
void Frames::event_func_19265()
{
    // event 1589_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1589_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1589_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1589_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1589_83_end: ;
}
void Frames::event_func_19266()
{
    // event 1590_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1590_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1590_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1590_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1590_83_end: ;
}
void Frames::event_func_19267()
{
    // event 1591_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1591_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1591_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1591_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1792+global_values->get(17)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 1792);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 264);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(264, 2064);
            pos_end_1591_83_0: ;
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1591_83_end: ;
}
void Frames::event_func_19268()
{
    // event 1592_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1592_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1592_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 1792);
    }
    event_1592_83_end: ;
}
void Frames::event_func_19269()
{
    // event 1593_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1593_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1593_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1593_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1593_83_end: ;
}
void Frames::event_func_19270()
{
    // event 1594_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1594_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (18))) goto event_1594_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+1, ((Active*)get_instance(npcdail_4017_instances, default_active_instance))->get_y()-64));
    }
    event_1594_83_end: ;
}
void Frames::event_func_19271()
{
    // event 1595_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1595_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1595_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1595_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1595_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1595_83_end: ;
}
void Frames::event_func_19272()
{
    // event 1596_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1596_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1596_83_end;
        if (!((media.get_channel_position(-1 +20)) > (2400))) goto event_1596_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
    }
    event_1596_83_end: ;
}
void Frames::event_func_19273()
{
    // event 1597_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1597_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1597_83_end;
        if (once_condition_1597_83) goto event_1597_83_end;
        once_condition_1597_83 = true;
        media.play_id(SOUND_CROWD_COMPLAIN_366, -1, 1);
        crowd_4129_instances.clear_selection();
        for (ObjectIterator it(crowd_4129_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(10+randrange(10));
        }
    }
    event_1597_83_end: ;
}
void Frames::event_func_19274()
{
    // event 1598_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1598_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1598_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1598_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1598_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1598_83_end: ;
}
void Frames::event_func_19275()
{
    // event 1599_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1599_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1599_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1599_83_end: ;
}
void Frames::event_func_19276()
{
    // event 1600_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1600_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1600_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1600_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1600_83_end: ;
}
void Frames::event_func_19277()
{
    // event 1601_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1601_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1601_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (29))) goto event_1601_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (30))) goto event_1601_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1601_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_CROWD_CHEER_365, -1, 1);
        crowd_4129_instances.clear_selection();
        for (ObjectIterator it(crowd_4129_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+randrange(20));
        }
    }
    event_1601_83_end: ;
}
void Frames::event_func_19278()
{
    // event 1602_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1602_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_1602_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1602_83_end: ;
}
void Frames::event_func_19279()
{
    // event 1603_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1603_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_1603_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1603_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1603_83_end: ;
}
void Frames::event_func_19280()
{
    // event 1604_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1604_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (23))) goto event_1604_83_end;
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1604_83_end: ;
}
void Frames::event_func_19281()
{
    // event 1605_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1605_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1605_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1605_83_end: ;
}
void Frames::event_func_19282()
{
    // event 1606_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_search_1)) goto event_1606_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1606_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1606_83_end;
        global_values->set(4, 12);
        next_frame = 14 + 0;    
    
        media.stop_samples();
    }
    event_1606_83_end: ;
}
void Frames::event_func_19283()
{
    // event 1608_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1608_83_end;
        if (once_condition_1608_83) goto event_1608_83_end;
        once_condition_1608_83 = true;
        acidfloor_4139_instances.clear_selection();
        spread_value(acidfloor_4139_instances, 0, 0);
        acidfloorglow_4140_instances.clear_selection();
        spread_value(acidfloorglow_4140_instances, 0, 0);
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)/math_helper/2);
        }
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)/math_helper/2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 320);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1590);
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        spread_value(npcsgmerc_4021_instances, 7, 0);
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 31);
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->load(str_data_font_bmp_7);
    }
    event_1608_83_end: ;
}
void Frames::event_func_19284()
{
    // event 1609_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1609_83_end;
            group_pause_1 = false;
    
    }
    event_1609_83_end: ;
}
void Frames::event_func_19285()
{
    // event 1610_83
    bool or_result_1610_83 = false;
    bool or_temp_result_1610_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1610_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1610_83_0_end;
        if (!(frame_time >= 1.0)) goto or_event_1610_83_0_end;
        or_result_1610_83 = true;
        or_temp_result_1610_83_0 = true;
    }
    or_event_1610_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1610_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1610_83
    bool or_temp_result_1610_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1610_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1610_83_1_end;
        if (!(frame_time >= 1.0)) goto or_event_1610_83_1_end;
        or_result_1610_83 = true;
        or_temp_result_1610_83_1 = true;
    }
    or_event_1610_83_1_end: ;
    if (or_temp_result_1610_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1610_83
    bool or_temp_result_1610_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1610_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1610_83_2_end;
        if (!(frame_time >= 1.0)) goto or_event_1610_83_2_end;
        or_result_1610_83 = true;
        or_temp_result_1610_83_2 = true;
    }
    or_event_1610_83_2_end: ;
    if (or_temp_result_1610_83_2) {
        inputsp1_21_instances.save_selection();
    }
    // event 1610_83
    bool or_temp_result_1610_83_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1610_83_3_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1610_83_3_end;
        if (!(frame_time >= 1.0)) goto or_event_1610_83_3_end;
        or_result_1610_83 = true;
        or_temp_result_1610_83_3 = true;
        or_event_1610_83_3_end: ;
        if (or_temp_result_1610_83_3) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1610_83) goto or_final_or_event_1610_83_3_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1610_83_0 || or_temp_result_1610_83_1 || or_temp_result_1610_83_2 || or_temp_result_1610_83_3) {
            inputsp1_21_instances.restore_selection();
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
        next_frame = 2 + 0;    
    
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_title_ogg_5, 32-1, 0);
            group_main_engine_level_specific_methods_cutscenes_intro_scene_1 = false;
    
    }
    or_final_or_event_1610_83_3_end: ;
}
void Frames::event_func_19286()
{
    // event 1611_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1611_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(6), ((Active*)*it)->alterables->values.get(4)));
        }
    }
    event_1611_83_end: ;
}
void Frames::event_func_19287()
{
    // event 1613_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1613_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1613_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(6, 0.3);
        }
    }
    event_1613_83_end: ;
}
void Frames::event_func_19288()
{
    // event 1614_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1614_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1614_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 7);
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1614_83_end: ;
}
void Frames::event_func_19289()
{
    // event 1615_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1615_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1615_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.set(7, 20);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1615_83_end: ;
}
void Frames::event_func_19290()
{
    // event 1616_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1616_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1616_83_end;
        {
            SavedSelection extra_npcsgmerc_4021_instances(npcsgmerc_4021_instances);
            for (SavedIterator it(extra_npcsgmerc_4021_instances); !it.end(); ++it) {
                foreach_instance_sgs = ((Active*)*it);
                foreach_sgs_83();
            }
        }
    }
    event_1616_83_end: ;
}
void Frames::event_func_19291()
{
    // event 1618_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1618_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1618_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_1618_83_end: ;
}
void Frames::event_func_19292()
{
    // event 1623_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1623_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1623_83_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        brevonartifact_3975_instances.clear_selection();
        for (ObjectIterator it(brevonartifact_3975_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_1623_83_end: ;
}
void Frames::event_func_19293()
{
    // event 1624_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1624_83_end;
        if (!((((Active*)get_instance(fade_54_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1624_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1624_83_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1624_83_end: ;
}
void Frames::event_func_19294()
{
    // event 1625_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1625_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1625_83_end;
        acidfloor_4139_instances.clear_selection();
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < ((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)-50)/math_helper/15))) { it.deselect(); continue; }
        }
        if (!acidfloor_4139_instances.has_selection()) goto event_1625_83_end;
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1625_83_end: ;
}
void Frames::event_func_19295()
{
    // event 1626_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1626_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1626_83_end;
        acidfloorglow_4140_instances.clear_selection();
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < ((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)-50)/math_helper/15))) { it.deselect(); continue; }
        }
        if (!acidfloorglow_4140_instances.has_selection()) goto event_1626_83_end;
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1626_83_end: ;
}
void Frames::event_func_19296()
{
    // event 1627_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1627_83_end;
        acidfloor_4139_instances.clear_selection();
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!acidfloor_4139_instances.has_selection()) goto event_1627_83_end;
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+2, 128));
        }
    }
    event_1627_83_end: ;
}
void Frames::event_func_19297()
{
    // event 1628_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1628_83_end;
        acidfloorglow_4140_instances.clear_selection();
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!acidfloorglow_4140_instances.has_selection()) goto event_1628_83_end;
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(acidfloorglow_4140_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+2, 128));
        }
    }
    event_1628_83_end: ;
}
void Frames::event_func_19298()
{
    // event 1629_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1629_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1629_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (10))) goto event_1629_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 49, 1531, 287, 1768);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1629_83_end: ;
}
void Frames::event_func_19299()
{
    // event 1630_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1630_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1630_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_1630_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 49, 1531, 287, 1768);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1630_83_end: ;
}
void Frames::event_func_19300()
{
    // event 1631_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1631_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1631_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1631_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 49, 1531, 287, 1768);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1631_83_end: ;
}
void Frames::event_func_19301()
{
    // event 1632_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1632_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1632_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1632_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 295, 1519, 533, 1756);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1632_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1632_83_end: ;
}
void Frames::event_func_19302()
{
    // event 1633_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1633_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1633_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1633_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 511, 1500, 749, 1737);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1633_83_end: ;
}
void Frames::event_func_19303()
{
    // event 1634_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1634_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1634_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1634_83_end: ;
}
void Frames::event_func_19304()
{
    // event 1635_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1635_83_end;
        npcsgmerc_4021_instances.clear_selection();
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (50))) { it.deselect(); continue; }
        }
        if (!npcsgmerc_4021_instances.has_selection()) goto event_1635_83_end;
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1635_83_end: ;
}
void Frames::event_func_19305()
{
    // event 1636_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1636_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1636_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1636_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)-70)*0.05, 4));
    }
    event_1636_83_end: ;
}
void Frames::event_func_19306()
{
    // event 1637_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1637_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1637_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1637_83_end;
        npcsgmerc_4021_instances.clear_selection();
        pick_objects_in_zone(npcsgmerc_4021_instances, 44, 1459, 642, 1767);
        for (ObjectIterator it(npcsgmerc_4021_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(5, get_min(1, get_max((((Active*)*it)->get_x()-320), -1))*5);
            ((Active*)*it)->alterables->values.set(6, -5-((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1637_83_end: ;
}
void Frames::event_func_19307()
{
    // event 1638_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1638_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1638_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1638_83_end;
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        acidfloor_4139_instances.clear_selection();
        for (ObjectIterator it(acidfloor_4139_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        FrameObject * single_instance_1638_83_0; single_instance_1638_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(acidfloor_4139_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 32, parent->y + 0), parent->layer);
                if (single_instance_1638_83_0 == NULL)
                    single_instance_1638_83_0 = new_obj;
            }
        }
    }
    event_1638_83_end: ;
}
void Frames::event_func_19308()
{
    // event 1639_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1639_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1639_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1639_83_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(2, get_max(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2)-0.015, 0));
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(3, get_min(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)+0.015, 1));
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2)*-14);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1639_83_end: ;
}
void Frames::event_func_19309()
{
    // event 1640_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1640_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1640_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1640_83_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) >= (1))) goto event_1640_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1640_83_end: ;
}
void Frames::event_func_19310()
{
    // event 1641_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1641_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1641_83_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 30);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(4352, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+28));
    }
    event_1641_83_end: ;
}
void Frames::event_func_19311()
{
    // event 1642_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1642_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1642_83_end;
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(brevonmechhead_2544_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!breakableshuigangpillar_4104_instances.has_selection()) goto event_1642_83_end;
        FrameObject * single_instance_1642_83_0; single_instance_1642_83_0 = pick_random(breakableshuigangpillar_4104_instances);
        if (single_instance_1642_83_0 == NULL) goto event_1642_83_end;
        ((Active*)((Active*)single_instance_1642_83_0))->alterables->flags.enable(0);
        {
            loop_pillar_running = true;
            int times = int(6);
            loop_pillar_index = 0;
            while (loop_pillar_index < times) {
                loop_pillar_83();
                if (!loop_pillar_running) break;
                loop_pillar_index++;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1642_83_end: ;
}
void Frames::event_func_19312()
{
    // event 1644_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1644_83_end;
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!breakableshuigangpillar_4104_instances.has_selection()) goto event_1644_83_end;
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1644_83_end: ;
}
void Frames::event_func_19313()
{
    // event 1645_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1645_83_end;
        breakableshuigangpillarpiece_4020_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillarpiece_4020_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.3);
        }
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1645_83_end: ;
}
void Frames::event_func_19314()
{
    // event 1646_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1646_83_end;
        breakableshuigangpillarpiece_4020_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillarpiece_4020_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!breakableshuigangpillarpiece_4020_instances.has_selection()) goto event_1646_83_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(6+randrange(5)));
            if (dyn_it == (*loops).end()) goto dynamic_1646_83_0_end;
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
        dynamic_1646_83_0_end: ;
    }
    event_1646_83_end: ;
}
void Frames::event_func_19315()
{
    // event 1647_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1647_83_end;
        breakableshuigangpillarpiece_4020_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillarpiece_4020_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!breakableshuigangpillarpiece_4020_instances.has_selection()) goto event_1647_83_end;
        for (ObjectIterator it(breakableshuigangpillarpiece_4020_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1647_83_0; single_instance_1647_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakableshuigangpillarpiece_4020_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1647_83_0 == NULL)
                    single_instance_1647_83_0 = new_obj;
            }
        }
    }
    event_1647_83_end: ;
}
void Frames::event_func_19316()
{
    // event 1648_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1648_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1648_83_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (4352))) goto event_1648_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) < (30))) goto event_1648_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(2, 1);
    }
    event_1648_83_end: ;
}
void Frames::event_func_19317()
{
    // event 1649_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1649_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_1649_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_1649_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        {
            ((Active*)get_instance(player_389_instances))->set_global_position(6734, 1631);
            pos_end_1649_83_0: ;
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 99);
        }
    }
    event_1649_83_end: ;
}
void Frames::event_func_19318()
{
    // event 1650_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1650_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1650_83_end;
        enemyelitemask_2511_instances.clear_selection();
        spread_value(enemyelitemask_2511_instances, 21, 0);
    }
    event_1650_83_end: ;
}
void Frames::event_func_19319()
{
    // event 1651_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1651_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1651_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(2)) == (30))) goto event_1651_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(19)) < (30))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1651_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 40);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1651_83_end: ;
}
void Frames::event_func_19320()
{
    // event 1652_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1652_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1652_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) <= (160))) goto event_1652_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(4652, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+8));
    }
    event_1652_83_end: ;
}
