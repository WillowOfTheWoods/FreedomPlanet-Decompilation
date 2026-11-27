#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13646()
{
    // event 1558_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1558_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1558_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1558_64_end: ;
}
void Frames::event_func_13647()
{
    // event 1559_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1559_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1559_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (11))) goto event_1559_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1559_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1559_64_end: ;
}
void Frames::event_func_13648()
{
    // event 1560_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1560_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (1))) goto event_1560_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1560_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
    }
    event_1560_64_end: ;
}
void Frames::event_func_13649()
{
    // event 1561_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1561_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (2))) goto event_1561_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1561_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1561_64_end: ;
}
void Frames::event_func_13650()
{
    // event 1562_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1562_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (2))) goto event_1562_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (60))) goto event_1562_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1562_64_end: ;
}
void Frames::event_func_13651()
{
    // event 1563_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1563_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1563_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (12))) goto event_1563_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (14))) goto event_1563_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1563_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1563_64_end: ;
}
void Frames::event_func_13652()
{
    // event 1564_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1564_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1564_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1564_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1564_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
    }
    event_1564_64_end: ;
}
void Frames::event_func_13653()
{
    // event 1565_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1565_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (4))) goto event_1565_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1565_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1565_64_end: ;
}
void Frames::event_func_13654()
{
    // event 1566_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1566_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (4))) goto event_1566_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (50))) goto event_1566_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        FrameObject * single_instance_1566_64_0; single_instance_1566_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_64_0 == NULL)
                    single_instance_1566_64_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_1566_64_0)->set_shader(Render::ADDITIVE);
        }
        media.play_id(SOUND_SPADE_DASH_155, -1, 1);
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1566_64_end: ;
}
void Frames::event_func_13655()
{
    // event 1567_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1567_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (4))) goto event_1567_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (50))) goto event_1567_64_end;
        FrameObject * single_instance_1567_64_0; single_instance_1567_64_0 = NULL;
        // select single: true false false
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1567_64_0 == NULL)
                    single_instance_1567_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1567_64_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1567_64_0))->move_back();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
    }
    event_1567_64_end: ;
}
void Frames::event_func_13656()
{
    // event 1568_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1568_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (4))) goto event_1568_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (110))) goto event_1568_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1568_64_end: ;
}
void Frames::event_func_13657()
{
    // event 1569_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1569_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1569_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (20))) goto event_1569_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1569_64_end: ;
}
void Frames::event_func_13658()
{
    // event 1570_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1570_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1570_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1570_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1570_64_end: ;
}
void Frames::event_func_13659()
{
    // event 1571_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1571_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1571_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (50))) goto event_1571_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1571_64_end: ;
}
void Frames::event_func_13660()
{
    // event 1572_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1572_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1572_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (60))) goto event_1572_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1572_64_end: ;
}
void Frames::event_func_13661()
{
    // event 1573_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1573_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1573_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (80))) goto event_1573_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1573_64_end: ;
}
void Frames::event_func_13662()
{
    // event 1574_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1574_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (5))) goto event_1574_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (90))) goto event_1574_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1574_64_end: ;
}
void Frames::event_func_13663()
{
    // event 1575_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1575_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1575_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (15))) goto event_1575_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1575_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1575_64_end: ;
}
void Frames::event_func_13664()
{
    // event 1576_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1576_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (6))) goto event_1576_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) < (60))) goto event_1576_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
    }
    event_1576_64_end: ;
}
void Frames::event_func_13665()
{
    // event 1577_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1577_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (6))) goto event_1577_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (40))) goto event_1577_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) < (80))) goto event_1577_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1577_64_end: ;
}
void Frames::event_func_13666()
{
    // event 1578_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1578_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (6))) goto event_1578_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) >= (80))) goto event_1578_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1578_64_end: ;
}
void Frames::event_func_13667()
{
    // event 1579_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1579_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1579_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (16))) goto event_1579_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (22))) goto event_1579_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1579_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1579_64_end: ;
}
void Frames::event_func_13668()
{
    // event 1580_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1580_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (7))) goto event_1580_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1580_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1580_64_end: ;
}
void Frames::event_func_13669()
{
    // event 1581_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1581_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (7))) goto event_1581_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (50))) goto event_1581_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1581_64_end: ;
}
void Frames::event_func_13670()
{
    // event 1582_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1582_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1582_64_end;
        if (once_condition_1582_64) goto event_1582_64_end;
        once_condition_1582_64 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1582_64_end: ;
}
void Frames::event_func_13671()
{
    // event 1583_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1583_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1583_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1583_64_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1583_64_end: ;
}
void Frames::event_func_13672()
{
    // event 1584_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1584_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1584_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1584_64_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1584_64_end: ;
}
void Frames::event_func_13673()
{
    // event 1585_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1585_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1585_64_end;
        if (once_condition_1585_64) goto event_1585_64_end;
        once_condition_1585_64 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_x()-40);
        }
    }
    event_1585_64_end: ;
}
void Frames::event_func_13674()
{
    // event 1586_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1586_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1586_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1586_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1586_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
    }
    event_1586_64_end: ;
}
void Frames::event_func_13675()
{
    // event 1587_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1587_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (8))) goto event_1587_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (5))) goto event_1587_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1587_64_end: ;
}
void Frames::event_func_13676()
{
    // event 1588_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1588_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (8))) goto event_1588_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (20))) goto event_1588_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(63);
        }
    }
    event_1588_64_end: ;
}
void Frames::event_func_13677()
{
    // event 1589_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1589_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (8))) goto event_1589_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (40))) goto event_1589_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1589_64_end: ;
}
void Frames::event_func_13678()
{
    // event 1590_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1590_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (8))) goto event_1590_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (80))) goto event_1590_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1590_64_end: ;
}
void Frames::event_func_13679()
{
    // event 1591_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1591_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (8))) goto event_1591_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (150))) goto event_1591_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1591_64_end: ;
}
void Frames::event_func_13680()
{
    // event 1592_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1592_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1592_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (23))) goto event_1592_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (29))) goto event_1592_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1592_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1592_64_end: ;
}
void Frames::event_func_13681()
{
    // event 1593_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1593_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (25))) goto event_1593_64_end;
        if (once_condition_1593_64) goto event_1593_64_end;
        once_condition_1593_64 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1593_64_end: ;
}
void Frames::event_func_13682()
{
    // event 1594_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1594_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (28))) goto event_1594_64_end;
        if (once_condition_1594_64) goto event_1594_64_end;
        once_condition_1594_64 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1594_64_end: ;
}
void Frames::event_func_13683()
{
    // event 1595_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1595_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1595_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1595_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1595_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(7)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1595_64_end: ;
}
void Frames::event_func_13684()
{
    // event 1596_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1596_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (10))) goto event_1596_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1596_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1596_64_end: ;
}
void Frames::event_func_13685()
{
    // event 1597_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1597_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (10))) goto event_1597_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (60))) goto event_1597_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(28);
        }
    }
    event_1597_64_end: ;
}
void Frames::event_func_13686()
{
    // event 1598_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1598_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (10))) goto event_1598_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (80))) goto event_1598_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1598_64_end: ;
}
void Frames::event_func_13687()
{
    // event 1599_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1599_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (10))) goto event_1599_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (110))) goto event_1599_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(28);
        }
    }
    event_1599_64_end: ;
}
void Frames::event_func_13688()
{
    // event 1600_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1600_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (10))) goto event_1600_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (130))) goto event_1600_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1600_64_end: ;
}
void Frames::event_func_13689()
{
    // event 1601_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1601_64_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1601_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1601_64_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1601_64_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        spread_value(device_3367_instances, 2, 0);
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskintorque_450_instances, it.current_index));
            if (parent == NULL) goto pos_end_1601_64_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -4);
            pos_end_1601_64_0: ;
        }
    }
    event_1601_64_end: ;
}
void Frames::event_func_13690()
{
    // event 1602_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1602_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1602_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1602_64_end;
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*9+((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*9+((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_y()-65)*0.1);
        }
    }
    event_1602_64_end: ;
}
void Frames::event_func_13691()
{
    // event 1603_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1603_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1603_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (30))) goto event_1603_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1603_64_end;
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*9+((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*9+((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_y()-65)*0.1);
        }
    }
    event_1603_64_end: ;
}
void Frames::event_func_13692()
{
    // event 1604_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1604_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1604_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (60))) goto event_1604_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1604_64_end;
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*9+((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_x())*0.1);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*9+((Active*)get_instance(playerskintorque_450_instances, it.current_index, default_active_instance))->get_y()-65)*0.1);
        }
    }
    event_1604_64_end: ;
}
void Frames::event_func_13693()
{
    // event 1605_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1605_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1605_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (30))) goto event_1605_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1605_64_end;
        FrameObject * single_instance_1605_64_0; single_instance_1605_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(device_3367_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_64_0 == NULL)
                    single_instance_1605_64_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_KEYCARD_287, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1605_64_end: ;
}
void Frames::event_func_13694()
{
    // event 1606_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1606_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1606_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (60))) goto event_1606_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1606_64_end;
        FrameObject * single_instance_1606_64_0; single_instance_1606_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(device_3367_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1606_64_0 == NULL)
                    single_instance_1606_64_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_KEYCARD_287, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1606_64_end: ;
}
void Frames::event_func_13695()
{
    // event 1607_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1607_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1607_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (90))) goto event_1607_64_end;
        device_3367_instances.clear_selection();
        for (ObjectIterator it(device_3367_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!device_3367_instances.has_selection()) goto event_1607_64_end;
        FrameObject * single_instance_1607_64_0; single_instance_1607_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(device_3367_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1607_64_0 == NULL)
                    single_instance_1607_64_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_KEYCARD_287, -1, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1607_64_end: ;
}
void Frames::event_func_13696()
{
    // event 1608_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1608_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (12))) goto event_1608_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (150))) goto event_1608_64_end;
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
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
    }
    event_1608_64_end: ;
}
void Frames::event_func_13697()
{
    // event 1609_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1609_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (13))) goto event_1609_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1609_64_end: ;
}
void Frames::event_func_13698()
{
    // event 1610_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1610_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (13))) goto event_1610_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1610_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1024);
    }
    event_1610_64_end: ;
}
void Frames::event_func_13699()
{
    // event 1611_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1611_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (14))) goto event_1611_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
    }
    event_1611_64_end: ;
}
void Frames::event_func_13700()
{
    // event 1612_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1612_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (14))) goto event_1612_64_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1612_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_cutscenes_team_meeting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1) {
            group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1 = true;
        }
    }
    event_1612_64_end: ;
}
void Frames::event_func_13701()
{
    // event 1613_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1613_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(19, 1);
    }
    event_1613_64_end: ;
}
void Frames::event_func_13702()
{
    // event 1614_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1614_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1614_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+1700)*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
    }
    event_1614_64_end: ;
}
void Frames::event_func_13703()
{
    // event 1615_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1615_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1615_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) == (180))) goto event_1615_64_end;
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
    }
    event_1615_64_end: ;
}
void Frames::event_func_13704()
{
    // event 1616_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1616_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1616_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (180))) goto event_1616_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) < (700))) goto event_1616_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 20);
    }
    event_1616_64_end: ;
}
void Frames::event_func_13705()
{
    // event 1617_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1617_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1617_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (240))) goto event_1617_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(20, get_max(((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(20)-0.005, -10));
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.add(2, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(20));
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.add(2, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(20));
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(liftoffjet1_3354_instances))->set_visible(true);
        ((Active*)get_instance(liftoffjet2_3355_instances))->set_visible(true);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(20)*10);
    }
    event_1617_64_end: ;
}
void Frames::event_func_13706()
{
    // event 1618_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1618_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1618_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (240))) goto event_1618_64_end;
        effectsexplosion02_411_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(0, 0), 0);
            effectsexplosion02_411_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_x()+192-10+randrange(21));
            ((Active*)*it)->set_y(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_y()+670);
            ((Active*)*it)->set_scale(0.8+randrange(40)*0.01);
            ((Active*)*it)->force_speed(20+randrange(20));
            ((Active*)*it)->alterables->values.set(1, 6+randrange(6));
        }
    }
    event_1618_64_end: ;
}
void Frames::event_func_13707()
{
    // event 1619_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1619_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1619_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (240))) goto event_1619_64_end;
        effectsexplosion02_411_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(0, 0), 0);
            effectsexplosion02_411_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->get_x()+116-10+randrange(21));
            ((Active*)*it)->set_y(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_y()+670);
            ((Active*)*it)->set_scale(0.8+randrange(40)*0.01);
            ((Active*)*it)->force_speed(20+randrange(20));
            ((Active*)*it)->alterables->values.set(1, 6+randrange(6));
        }
    }
    event_1619_64_end: ;
}
void Frames::event_func_13708()
{
    // event 1620_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1620_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1620_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (600))) goto event_1620_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1620_64_end;
        media.set_channel_volume(25-1, get_max(media.get_channel_volume(-1 +25)-1, 0));
    }
    event_1620_64_end: ;
}
void Frames::event_func_13709()
{
    // event 1621_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1)) goto event_1621_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1621_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(19)) > (900))) goto event_1621_64_end;
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
        media.stop_channel(25-1);
        media.set_channel_volume(25-1, 100);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1621_64_end: ;
}
void Frames::event_func_13710()
{
    // event 1622_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1622_64_end;
        bgplatform1_3318_instances.clear_selection();
        for (ObjectIterator it(bgplatform1_3318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/5)%math_helper%8);
        }
        objectsiren_3337_instances.clear_selection();
        for (ObjectIterator it(objectsiren_3337_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%4);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1622_64_end: ;
}
void Frames::event_func_13711()
{
    // event 1623_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1623_64_end;
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosshatchdoor_3317_instances.has_selection()) goto event_1623_64_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(bossshadebeast_3357_instances, default_active_instance))->get_y()))) goto event_1623_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-3, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7), -50)));
    }
    event_1623_64_end: ;
}
void Frames::event_func_13712()
{
    // event 1629_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1629_64_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(bossshadebeast_3357_instances, default_active_instance))->get_x()-200))) goto event_1629_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1629_64_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1629_64_end: ;
}
void Frames::event_func_13713()
{
    // event 1630_64
    bool or_result_1630_64 = false;
    bool or_temp_result_1630_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1630_64_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(bossshadebeast_3357_instances, default_active_instance))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1630_64_0_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(12))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto or_event_1630_64_0_end;
        or_result_1630_64 = true;
        or_temp_result_1630_64_0 = true;
    }
    or_event_1630_64_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    bossdail_3359_instances.clear_saved_selection();
    if (or_temp_result_1630_64_0) {
        playermovementvalues_245_instances.save_selection();
        bossdail_3359_instances.save_selection();
    }
    // event 1630_64
    bool or_temp_result_1630_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto or_event_1630_64_1_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(12))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto or_event_1630_64_1_end;
        or_result_1630_64 = true;
        or_temp_result_1630_64_1 = true;
        or_event_1630_64_1_end: ;
        if (or_temp_result_1630_64_1) {
            bossdail_3359_instances.save_selection();
        }
        if (!or_result_1630_64) goto or_final_or_event_1630_64_1_end;
        playermovementvalues_245_instances.empty_selection();
        bossdail_3359_instances.empty_selection();
        if (or_temp_result_1630_64_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1630_64_0 || or_temp_result_1630_64_1) {
            bossdail_3359_instances.restore_selection();
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1) {
            group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 3);
        }
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1824);
        }
        media.play_id(SOUND_SHADEBEAST_VORTEXFADE_353, -1, 1);
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
    }
    or_final_or_event_1630_64_1_end: ;
}
void Frames::event_func_13714()
{
    // event 1631_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1631_64_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1631_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)) < (72))) goto event_1631_64_end;
        FrameObject * single_instance_1631_64_0; single_instance_1631_64_0 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbossshade_3347(parent->x + -600, parent->y + 0), parent->layer);
                if (single_instance_1631_64_0 == NULL)
                    single_instance_1631_64_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(4, 1);
        ((Active*)((Active*)single_instance_1631_64_0))->alterables->values.set(3, -64-randrange(64));
        ((Active*)((Active*)single_instance_1631_64_0))->alterables->values.set(2, 0.5*((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)%math_helper%2)*2-1));
        ((Active*)((Active*)single_instance_1631_64_0))->alterables->values.set(0, (((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)%math_helper%2)*180);
        ((Active*)((Active*)single_instance_1631_64_0))->alterables->values.set(4, randrange(360));
    }
    event_1631_64_end: ;
}
void Frames::event_func_13715()
{
    // event 1632_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1632_64_end;
        if (!((global_values->get(3)%math_helper%7) == (5))) goto event_1632_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)) > (10))) goto event_1632_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)) < (72))) goto event_1632_64_end;
        FrameObject * single_instance_1632_64_0; single_instance_1632_64_0 = NULL;
        // select single: true false false
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator p_it(bossshadebeast_3357_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbossshade_3347(parent->x + -600, parent->y + 0), parent->layer);
                if (single_instance_1632_64_0 == NULL)
                    single_instance_1632_64_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(4, 1);
        ((Active*)((Active*)single_instance_1632_64_0))->alterables->values.set(3, -64-randrange(64));
        ((Active*)((Active*)single_instance_1632_64_0))->alterables->values.set(2, 0.5*((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)%math_helper%2)*2-1));
        ((Active*)((Active*)single_instance_1632_64_0))->alterables->values.set(0, (((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)%math_helper%2)*180);
        ((Active*)((Active*)single_instance_1632_64_0))->alterables->values.set(4, randrange(360));
    }
    event_1632_64_end: ;
}
void Frames::event_func_13716()
{
    // event 1633_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1633_64_end;
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x()-cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_y()+((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(4))*40);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+4)%math_helper%360);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+360+((Active*)*it)->alterables->values.get(2))%math_helper%360);
            ((Active*)*it)->move_back();
        }
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(24)+sin_deg(global_values->get(3)*2)*12);
        }
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossshadebeast_3357_instances, it.current_index));
            if (parent == NULL) goto pos_end_1633_64_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1633_64_0: ;
        }
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_y()-56);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_single(bossshadebeast_3357_instances, default_active_instance))->get_x())*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_single(bossshadebeast_3357_instances, default_active_instance))->alterables->values.get(24)-((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4))*0.05);
    }
    event_1633_64_end: ;
}
void Frames::event_func_13717()
{
    // event 1634_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1634_64_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1634_64_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1634_64_end: ;
}
void Frames::event_func_13718()
{
    // event 1635_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1635_64_end;
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!effectbossshade_3347_instances.has_selection()) goto event_1635_64_end;
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-5, 100));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.01, 4));
        }
    }
    event_1635_64_end: ;
}
void Frames::event_func_13719()
{
    // event 1636_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1636_64_end;
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!effectbossshade_3347_instances.has_selection()) goto event_1636_64_end;
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-5, 100));
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.01, -4));
        }
    }
    event_1636_64_end: ;
}
void Frames::event_func_13720()
{
    // event 1637_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1637_64_end;
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (100))) { it.deselect(); continue; }
        }
        if (!effectbossshade_3347_instances.has_selection()) goto event_1637_64_end;
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1637_64_end: ;
}
void Frames::event_func_13721()
{
    // event 1638_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1638_64_end;
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (180))) { it.deselect(); continue; }
        }
        if (!effectbossshade_3347_instances.has_selection()) goto event_1638_64_end;
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1638_64_end: ;
}
void Frames::event_func_13722()
{
    // event 1639_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1639_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)) >= (8))) goto event_1639_64_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(1))) goto event_1639_64_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(1);
        media.play(str_data_voices_eng_da_da_05_02_ogg_217, 28-1);
    }
    event_1639_64_end: ;
}
void Frames::event_func_13723()
{
    // event 1640_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1640_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(4)) >= (64))) goto event_1640_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(5)) == (0))) goto event_1640_64_end;
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(5, 1);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        media.play_id(SOUND_SHADEBEAST_RUMBLE_351, -1, 1);
    }
    event_1640_64_end: ;
}
void Frames::event_func_13724()
{
    // event 1641_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1641_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(5)) == (1))) goto event_1641_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0), 0));
        }
    }
    event_1641_64_end: ;
}
void Frames::event_func_13725()
{
    // event 1642_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1642_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(5)) == (1))) goto event_1642_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1642_64_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(5, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 = true;
        }
        effectbossshade_3347_instances.clear_selection();
        for (ObjectIterator it(effectbossshade_3347_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1940);
        }
    }
    event_1642_64_end: ;
}
void Frames::event_func_13726()
{
    // event 1643_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1643_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(5)) == (2))) goto event_1643_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(128, ((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1643_64_end: ;
}
void Frames::event_func_13727()
{
    // event 1644_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1644_64_end;
        if (!((((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(5)) == (2))) goto event_1644_64_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1644_64_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(5, 1);
            group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1 = false;
    
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1644_64_end: ;
}
void Frames::event_func_13728()
{
    // event 1645_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1)) goto event_1645_64_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 37)) == (0))) goto event_1645_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1645_64_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 37);
    }
    event_1645_64_end: ;
}
void Frames::event_func_13729()
{
    // event 1646_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1646_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 576);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 1472);
    }
    event_1646_64_end: ;
}
void Frames::event_func_13730()
{
    // event 1647_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1647_64_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1647_64_end;
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (50))) { it.deselect(); continue; }
        }
        if (!bossshadebeastcrown_3358_instances.has_selection()) goto event_1647_64_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1647_64_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1647_64_end: ;
}
void Frames::event_func_13731()
{
    // event 1648_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1648_64_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1648_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1648_64_end;
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->set_x(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.add(3, ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(1));
    }
    event_1648_64_end: ;
}
void Frames::event_func_13732()
{
    // event 1649_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1649_64_end;
        if (!(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->flags.is_off(1))) goto event_1649_64_end;
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.set(1, get_max(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(1)-0.05, -2));
    }
    event_1649_64_end: ;
}
void Frames::event_func_13733()
{
    // event 1650_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1650_64_end;
        if (!(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->flags.is_on(1))) goto event_1650_64_end;
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.set(1, get_min(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(1)+0.05, 2));
    }
    event_1650_64_end: ;
}
void Frames::event_func_13734()
{
    // event 1651_64
    bool or_result_1651_64 = false;
    bool or_temp_result_1651_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto or_event_1651_64_0_end;
        bossdailspawnpoint_3356_instances.clear_selection();
        for (ObjectIterator it(bossdailspawnpoint_3356_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(2)-160))) { it.deselect(); continue; }
        }
        if (!bossdailspawnpoint_3356_instances.has_selection()) goto or_event_1651_64_0_end;
        or_result_1651_64 = true;
        or_temp_result_1651_64_0 = true;
    }
    or_event_1651_64_0_end: ;
    bossdailspawnpoint_3356_instances.clear_saved_selection();
    if (or_temp_result_1651_64_0) {
        bossdailspawnpoint_3356_instances.save_selection();
    }
    // event 1651_64
    bool or_temp_result_1651_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto or_event_1651_64_1_end;
        bossdailspawnpoint_3356_instances.clear_selection();
        for (ObjectIterator it(bossdailspawnpoint_3356_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(2)+160))) { it.deselect(); continue; }
        }
        if (!bossdailspawnpoint_3356_instances.has_selection()) goto or_event_1651_64_1_end;
        or_result_1651_64 = true;
        or_temp_result_1651_64_1 = true;
        or_event_1651_64_1_end: ;
        if (or_temp_result_1651_64_1) {
            bossdailspawnpoint_3356_instances.save_selection();
        }
        if (!or_result_1651_64) goto or_final_or_event_1651_64_1_end;
        bossdailspawnpoint_3356_instances.empty_selection();
        if (or_temp_result_1651_64_0 || or_temp_result_1651_64_1) {
            bossdailspawnpoint_3356_instances.restore_selection();
        }
        for (ObjectIterator it(bossdailspawnpoint_3356_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    or_final_or_event_1651_64_1_end: ;
}
void Frames::event_func_13735()
{
    // event 1652_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1652_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (bossshadebeasteye_3346_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1652_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossshadebeasteye_3346_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bossshadebeasteye_3346_instances, it.current_index, default_active_instance))->get_y()-64+6-((Active*)*it)->alterables->values.get(5)*0.4);
            ((Active*)*it)->alterables->values.set(3, 15+sin_deg(((Active*)get_single(bossshadebeasteye_3346_instances, it.current_index, default_active_instance))->alterables->values.get(4)*2)*1);
            ((Active*)*it)->alterables->values.set(4, 2+sin_deg(((Active*)get_single(bossshadebeasteye_3346_instances, it.current_index, default_active_instance))->alterables->values.get(4)*2-90)*2*(1-((Active*)*it)->alterables->values.get(7)));
        }
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_y()-56);
        }
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_single(bossshadebeasteye_3346_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1652_64_end: ;
}
void Frames::event_func_13736()
{
    // event 1653_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1653_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_exp((((Active*)*it)->alterables->values.get(3)+((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(5))*0.025));
            ((Active*)*it)->set_y(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_y()+((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(5)*0.5-((Active*)*it)->alterables->values.get(5)*24+sin_deg(((Active*)*it)->alterables->values.get(4)*2)*8);
            ((Active*)*it)->set_x(((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x()+sin_deg(((Active*)*it)->alterables->values.get(4)-((Active*)*it)->alterables->values.get(3))*(80+get_max(0, ((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(5)*-1)-((Active*)*it)->alterables->values.get(5)*15)+sin_deg(((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(0)*2-((Active*)*it)->alterables->values.get(5)*((Active*)*it)->alterables->values.get(5)*10)*3);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+3)%math_helper%360);
            ((Active*)*it)->set_scale(0.75+cos_deg(((Active*)*it)->alterables->values.get(4))*0.25);
        }
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.set(0, (((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.get(0)+3)%math_helper%360);
        bossshadebeasttoptooth_3363_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasttoptooth_3363_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_x()+cos_deg((((Active*)*it)->alterables->values.get(0)/math_helper/2)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)-90)*(50-((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(4)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_y()-20-(sin_deg((((Active*)*it)->alterables->values.get(0)/math_helper/2)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)-90)*(50-((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(4)))*(1-((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(7)));
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(0)/math_helper/2)*5*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1), 0);
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastbottomtooth_3364_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_x()+cos_deg((((Active*)*it)->alterables->values.get(0)/math_helper/2)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)-90)*(50+((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(4)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->get_y()-sin_deg((((Active*)*it)->alterables->values.get(0)/math_helper/2)*((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(3)*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1)-90)*(50+((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(4)));
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(0)/math_helper/2)*5*((((Active*)*it)->alterables->values.get(0)%math_helper%2)*2-1), 0);
        }
        bossshadebeastcrown_3358_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastcrown_3358_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossshadebeast_3357_instances, it.current_index));
            if (parent == NULL) goto pos_end_1653_64_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1653_64_0: ;
        }
        bossshadebeastmouth_3361_instances.clear_selection();
        for (ObjectIterator it(bossshadebeastmouth_3361_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossshadebeast_3357_instances, it.current_index));
            if (parent == NULL) goto pos_end_1653_64_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1653_64_1: ;
        }
        for (ObjectIterator it(bossshadebeastmouth_3361_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(0.2+((Active*)get_instance(bossshadebeast_3357_instances, it.current_index, default_active_instance))->alterables->values.get(7)*0.7);
        }
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1653_64_end: ;
}
void Frames::event_func_13737()
{
    // event 1654_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1654_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1654_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(6)/math_helper/2);
        }
    }
    event_1654_64_end: ;
}
void Frames::event_func_13738()
{
    // event 1655_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1655_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (210))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1655_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1655_64_end: ;
}
void Frames::event_func_13739()
{
    // event 1656_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1656_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1656_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1656_64_end: ;
}
void Frames::event_func_13740()
{
    // event 1657_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1657_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        FrameObject * single_instance_1657_64_0; single_instance_1657_64_0 = pick_random(bossshadebeasteye_3346_instances);
        if (single_instance_1657_64_0 == NULL) goto event_1657_64_end;
        ((Active*)((Active*)single_instance_1657_64_0))->alterables->flags.enable(1);
    }
    event_1657_64_end: ;
}
void Frames::event_func_13741()
{
    // event 1658_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1658_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1658_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    event_1658_64_end: ;
}
void Frames::event_func_13742()
{
    // event 1659_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1659_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1659_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1659_64_end: ;
}
void Frames::event_func_13743()
{
    // event 1660_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1)) goto event_1660_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (16))) { it.deselect(); continue; }
        }
        if (!bossshadebeasteye_3346_instances.has_selection()) goto event_1660_64_end;
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1660_64_end: ;
}
void Frames::event_func_13744()
{
    // event 1661_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1661_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1661_64_end;
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1661_64_end: ;
}
void Frames::event_func_13745()
{
    // event 1662_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1662_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (630))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1662_64_end;
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (15))) { it.deselect(); continue; }
        }
        if (!bossshadebeast_3357_instances.has_selection()) goto event_1662_64_end;
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        {
            ((Active*)get_instance(leveldarksky_2069_instances))->blend_color.set_semi_transparency(get_min(((Active*)get_instance(leveldarksky_2069_instances))->blend_color.get_semi_transparency()+4, 128));
        }
        ((Active*)get_instance(leveldarksky_2069_instances))->set_x(frame_left());
    }
    event_1662_64_end: ;
}
