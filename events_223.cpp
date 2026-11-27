#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17622()
{
    // event 1489_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1489_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1489_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) > (((Active*)get_instance(npcstofficer_3941_instances, default_active_instance))->get_x()-50))) goto event_1489_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()-4);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_1489_78_end: ;
}
void Frames::event_func_17623()
{
    // event 1490_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1490_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1490_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) <= (((Active*)get_instance(npcstofficer_3941_instances, default_active_instance))->get_x()-50))) goto event_1490_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        npcstofficer_3941_instances.clear_selection();
        for (ObjectIterator it(npcstofficer_3941_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1490_78_end: ;
}
void Frames::event_func_17624()
{
    // event 1491_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1491_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (16))) goto event_1491_78_end;
        if (not_always_1491_78 > loop_count) {
            not_always_1491_78 = loop_count + 2;
            goto event_1491_78_end;
        }
        not_always_1491_78 = loop_count + 2;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1491_78_end: ;
}
void Frames::event_func_17625()
{
    // event 1492_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1492_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1492_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
    }
    event_1492_78_end: ;
}
void Frames::event_func_17626()
{
    // event 1493_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1493_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1493_78_end;
        gongshield_633_instances.clear_selection();
        for (ObjectIterator it(gongshield_633_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1493_78_end: ;
}
void Frames::event_func_17627()
{
    // event 1494_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1494_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1494_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (19))) goto event_1494_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1494_78_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1494_78_end: ;
}
void Frames::event_func_17628()
{
    // event 1495_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1495_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1495_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1495_78_end: ;
}
void Frames::event_func_17629()
{
    // event 1496_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1496_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1496_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (10))) goto event_1496_78_end;
        npcstofficer_3941_instances.clear_selection();
        for (ObjectIterator it(npcstofficer_3941_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        media.play_id(SOUND_WANGH_2_364, -1, 1);
    }
    event_1496_78_end: ;
}
void Frames::event_func_17630()
{
    // event 1497_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1497_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1497_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (33))) goto event_1497_78_end;
        npcstofficer_3941_instances.clear_selection();
        for (ObjectIterator it(npcstofficer_3941_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1497_78_end: ;
}
void Frames::event_func_17631()
{
    // event 1498_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1498_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1498_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1498_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
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
    event_1498_78_end: ;
}
void Frames::event_func_17632()
{
    // event 1499_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1499_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (18))) goto event_1499_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1499_78_end: ;
}
void Frames::event_func_17633()
{
    // event 1500_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1500_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (18))) goto event_1500_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1500_78_end;
        gongshield_633_instances.clear_selection();
        pick_objects_in_zone(gongshield_633_instances, 1794, 610, 2440, 871);
        npcplane_3940_instances.clear_selection();
        pick_objects_in_zone(npcplane_3940_instances, 1794, 610, 2440, 871);
        npcstofficer_3941_instances.clear_selection();
        pick_objects_in_zone(npcstofficer_3941_instances, 1794, 610, 2440, 871);
        npcgong_634_instances.clear_selection();
        pick_objects_in_zone(npcgong_634_instances, 1794, 610, 2440, 871);
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(npcstofficer_3941_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(gongshield_633_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1500_78_end: ;
}
void Frames::event_func_17634()
{
    // event 1501_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1501_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (18))) goto event_1501_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1501_78_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 19);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(2500);
        playerassistcopilot_2219_instances.clear_selection();
        spread_value(playerassistcopilot_2219_instances, 0, 0);
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0)*2);
            ((Active*)*it)->set_visible(true);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1501_78_end: ;
}
void Frames::event_func_17635()
{
    // event 1502_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1502_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1502_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(npcplane_3940_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 700);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(false);
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1502_78_end: ;
}
void Frames::event_func_17636()
{
    // event 1503_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1503_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1503_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1503_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 20);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1503_78_end: ;
}
void Frames::event_func_17637()
{
    // event 1504_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1504_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (20))) goto event_1504_78_end;
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!playerassistcopilot_2219_instances.has_selection()) goto event_1504_78_end;
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_frame());
        }
    }
    event_1504_78_end: ;
}
void Frames::event_func_17638()
{
    // event 1505_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1505_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (20))) goto event_1505_78_end;
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16))) { it.deselect(); continue; }
        }
        if (!playerassistcopilot_2219_instances.has_selection()) goto event_1505_78_end;
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_frame());
        }
    }
    event_1505_78_end: ;
}
void Frames::event_func_17639()
{
    // event 1506_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1506_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1506_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1506_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1506_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1506_78_end: ;
}
void Frames::event_func_17640()
{
    // event 1507_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1507_78_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1507_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1507_78_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1507_78_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1507_78_end: ;
}
void Frames::event_func_17641()
{
    // event 1508_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1508_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1508_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1508_78_end: ;
}
void Frames::event_func_17642()
{
    // event 1509_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1509_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1509_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (20))) goto event_1509_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(1);
        }
        media.play_id(SOUND_SCENE_PLANETAKEOFF_434, -1, 1);
    }
    event_1509_78_end: ;
}
void Frames::event_func_17643()
{
    // event 1510_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1510_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1510_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (80))) goto event_1510_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_1510_78_end: ;
}
void Frames::event_func_17644()
{
    // event 1511_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1511_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (22))) goto event_1511_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!npcplane_3940_instances.has_selection()) goto event_1511_78_end;
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1511_78_end: ;
}
void Frames::event_func_17645()
{
    // event 1512_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1512_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (22))) goto event_1512_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.03);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_single(npcplane_3940_instances, default_active_instance))->get_x());
    }
    event_1512_78_end: ;
}
void Frames::event_func_17646()
{
    // event 1513_78
    bool or_result_1513_78 = false;
    bool or_temp_result_1513_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1513_78_0_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (22))) goto or_event_1513_78_0_end;
        or_result_1513_78 = true;
        or_temp_result_1513_78_0 = true;
    }
    or_event_1513_78_0_end: ;
    // event 1513_78
    bool or_temp_result_1513_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1513_78_1_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto or_event_1513_78_1_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (20))) goto or_event_1513_78_1_end;
        or_result_1513_78 = true;
        or_temp_result_1513_78_1 = true;
        or_event_1513_78_1_end: ;
        if (!or_result_1513_78) goto or_final_or_event_1513_78_1_end;
        FrameObject * single_instance_1513_78_0; single_instance_1513_78_0 = NULL;
        // select single: true false false
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator p_it(npcplane_3940_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + -64, parent->y + 8), parent->layer);
                if (single_instance_1513_78_0 == NULL)
                    single_instance_1513_78_0 = new_obj;
            }
        }
        ((Active*)single_instance_1513_78_0)->move_back(((Active*)get_single(npcplane_3940_instances)));
        ((Active*)((Active*)single_instance_1513_78_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1513_78_0))->force_speed(50+randrange(50));
        ((Active*)((Active*)single_instance_1513_78_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1513_78_0))->get_movement()->set_speed(40-((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)*2);
    }
    or_final_or_event_1513_78_1_end: ;
}
void Frames::event_func_17647()
{
    // event 1514_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1514_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (22))) goto event_1514_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (2530))) { it.deselect(); continue; }
        }
        if (!npcplane_3940_instances.has_selection()) goto event_1514_78_end;
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1514_78_end: ;
}
void Frames::event_func_17648()
{
    // event 1515_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1515_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1515_78_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(npcplane_3940_instances, default_active_instance))->get_x());
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, -2));
            ((Active*)*it)->set_angle(get_max(((Active*)*it)->get_angle()-0.1, 0), 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.05, 20));
        }
    }
    event_1515_78_end: ;
}
void Frames::event_func_17649()
{
    // event 1516_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1516_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1516_78_end;
        npcplane_3940_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(npcplane_3940_instances, qualifier_20)) goto event_1516_78_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1516_78_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(npcplane_3940_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1516_78_end: ;
}
void Frames::event_func_17650()
{
    // event 1517_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1517_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!npcplane_3940_instances.has_selection()) goto event_1517_78_end;
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1517_78_end: ;
}
void Frames::event_func_17651()
{
    // event 1518_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1518_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1518_78_end;
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (5900))) { it.deselect(); continue; }
        }
        if (!npcplane_3940_instances.has_selection()) goto event_1518_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
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
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_lock_music_2000_285);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1518_78_end: ;
}
void Frames::event_func_17652()
{
    // event 1519_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1519_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (19))) goto event_1519_78_end;
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcplane_3940_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(npcplane_3940_instances, it.current_index, default_active_instance))->get_angle())*sin_deg(((Active*)*it)->alterables->values.get(0)*120)*20);
            ((Active*)*it)->set_y(((Active*)get_instance(npcplane_3940_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_instance(npcplane_3940_instances, it.current_index, default_active_instance))->get_angle())*sin_deg(((Active*)*it)->alterables->values.get(0)*120)*-20);
            ((Active*)*it)->set_angle(((Active*)get_instance(npcplane_3940_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1519_78_end: ;
}
void Frames::event_func_17653()
{
    // event 1520_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1520_78_end;
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistcopilot_2219_instances.has_selection()) goto event_1520_78_end;
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1520_78_end: ;
}
void Frames::event_func_17654()
{
    // event 1521_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1521_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (24))) goto event_1521_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1521_78_end: ;
}
void Frames::event_func_17655()
{
    // event 1522_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1522_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (24))) goto event_1522_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1522_78_end;
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
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1522_78_end: ;
}
void Frames::event_func_17656()
{
    // event 1523_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1523_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (25))) goto event_1523_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1523_78_end: ;
}
void Frames::event_func_17657()
{
    // event 1524_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1524_78_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (25))) goto event_1524_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1524_78_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        global_values->set(4, 0);
        next_frame = 79 + 0;    
    
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1524_78_end: ;
}
void Frames::event_func_17658()
{
    // event 1525_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1525_78_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1525_78_end;
        FrameObject * single_instance_1525_78_0; single_instance_1525_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1525_78_0 == NULL)
                    single_instance_1525_78_0 = new_obj;
            }
        }
    }
    event_1525_78_end: ;
}
void Frames::event_func_17659()
{
    // event 1526_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1526_78_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1526_78_end;
        FrameObject * single_instance_1526_78_0; single_instance_1526_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1526_78_0 == NULL)
                    single_instance_1526_78_0 = new_obj;
            }
        }
    }
    event_1526_78_end: ;
}
void Frames::event_func_17660()
{
    // event 1527_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1527_78_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1527_78_end;
        FrameObject * single_instance_1527_78_0; single_instance_1527_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1527_78_0 == NULL)
                    single_instance_1527_78_0 = new_obj;
            }
        }
    }
    event_1527_78_end: ;
}
void Frames::event_func_17661()
{
    // event 1528_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1528_78_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1528_78_end;
        FrameObject * single_instance_1528_78_0; single_instance_1528_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1528_78_0 == NULL)
                    single_instance_1528_78_0 = new_obj;
            }
        }
    }
    event_1528_78_end: ;
}
void Frames::event_func_17662()
{
    // event 1529_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1529_78_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1529_78_end;
        FrameObject * single_instance_1529_78_0; single_instance_1529_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1529_78_0 == NULL)
                    single_instance_1529_78_0 = new_obj;
            }
        }
    }
    event_1529_78_end: ;
}
void Frames::event_func_17663()
{
    // event 1530_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1530_78_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1530_78_end;
        FrameObject * single_instance_1530_78_0; single_instance_1530_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1530_78_0 == NULL)
                    single_instance_1530_78_0 = new_obj;
            }
        }
    }
    event_1530_78_end: ;
}
void Frames::event_func_17664()
{
    // event 1531_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1531_78_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1531_78_end;
        FrameObject * single_instance_1531_78_0; single_instance_1531_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1531_78_0 == NULL)
                    single_instance_1531_78_0 = new_obj;
            }
        }
    }
    event_1531_78_end: ;
}
void Frames::event_func_17665()
{
    // event 1532_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1532_78_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1532_78_end;
        FrameObject * single_instance_1532_78_0; single_instance_1532_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1532_78_0 == NULL)
                    single_instance_1532_78_0 = new_obj;
            }
        }
    }
    event_1532_78_end: ;
}
void Frames::event_func_17666()
{
    // event 1533_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1533_78_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1533_78_end;
        FrameObject * single_instance_1533_78_0; single_instance_1533_78_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1533_78_0 == NULL)
                    single_instance_1533_78_0 = new_obj;
            }
        }
    }
    event_1533_78_end: ;
}
void Frames::event_func_17667()
{
    // event 1534_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1534_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1534_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1534_78_end: ;
}
void Frames::event_func_17668()
{
    // event 1535_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1535_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1535_78_end;
        if (not_always_1535_78 > loop_count) {
            not_always_1535_78 = loop_count + 2;
            goto event_1535_78_end;
        }
        not_always_1535_78 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1535_78_end: ;
}
void Frames::event_func_17669()
{
    // event 1536_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1536_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1536_78_end;
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
                loop_voice_78();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1536_78_end: ;
}
void Frames::event_func_17670()
{
    // event 1537_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1537_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1537_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1537_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1537_78_end: ;
}
void Frames::event_func_17671()
{
    // event 1538_78
    bool or_result_1538_78 = false;
    bool or_temp_result_1538_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1538_78_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1538_78_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1538_78_0_end;
        if (not_always_1538_78 > loop_count) {
            not_always_1538_78 = loop_count + 2;
            goto or_event_1538_78_0_end;
        }
        not_always_1538_78 = loop_count + 2;
        or_result_1538_78 = true;
        or_temp_result_1538_78_0 = true;
    }
    or_event_1538_78_0_end: ;
    // event 1538_78
    bool or_temp_result_1538_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto or_event_1538_78_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1538_78_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1538_78_1_end;
        if (not_always_1538_78 > loop_count) {
            not_always_1538_78 = loop_count + 2;
            goto or_event_1538_78_1_end;
        }
        not_always_1538_78 = loop_count + 2;
        or_result_1538_78 = true;
        or_temp_result_1538_78_1 = true;
        or_event_1538_78_1_end: ;
        if (!or_result_1538_78) goto or_final_or_event_1538_78_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1538_78_1_end: ;
}
void Frames::event_func_17672()
{
    // event 1539_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1539_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1539_78_end;
        if (not_always_1539_78 > loop_count) {
            not_always_1539_78 = loop_count + 2;
            goto event_1539_78_end;
        }
        not_always_1539_78 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1539_78_end: ;
}
void Frames::event_func_17673()
{
    // event 1540_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1540_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1540_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1540_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1540_78_end: ;
}
void Frames::event_func_17674()
{
    // event 1541_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1541_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1541_78_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1541_78_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1541_78_end: ;
}
void Frames::event_func_17675()
{
    // event 1542_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1542_78_end;
        if (!((global_values->get(27)) == (0))) goto event_1542_78_end;
        if (not_always_1542_78 > loop_count) {
            not_always_1542_78 = loop_count + 2;
            goto event_1542_78_end;
        }
        not_always_1542_78 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1542_78_end: ;
}
void Frames::event_func_17676()
{
    // event 1546_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1546_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1546_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1546_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1546_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1546_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1546_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1546_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1546_78_end: ;
}
void Frames::event_func_17677()
{
    // event 1547_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1547_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1547_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1547_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1547_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1547_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1547_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1547_78_end: ;
}
void Frames::event_func_17678()
{
    // event 1548_78
    bool or_result_1548_78 = false;
    bool or_temp_result_1548_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1548_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1548_78_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1548_78_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1548_78_0_end;
        or_result_1548_78 = true;
        or_temp_result_1548_78_0 = true;
    }
    or_event_1548_78_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1548_78_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1548_78
    bool or_temp_result_1548_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1548_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1548_78_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1548_78_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1548_78_1_end;
        or_result_1548_78 = true;
        or_temp_result_1548_78_1 = true;
        or_event_1548_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1548_78_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1548_78) goto or_final_or_event_1548_78_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1548_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1548_78_0 || or_temp_result_1548_78_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1548_78_1_end: ;
}
void Frames::event_func_17679()
{
    // event 1549_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1549_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1549_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1549_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1549_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1549_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1549_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1549_78_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1549_78_end: ;
}
void Frames::event_func_17680()
{
    // event 1550_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1550_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1550_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1550_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1550_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1550_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1550_78_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1550_78_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1550_78_end: ;
}
void Frames::event_func_17681()
{
    // event 1551_78
    bool or_result_1551_78 = false;
    bool or_temp_result_1551_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1551_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1551_78_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1551_78_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1551_78_0_end;
        or_result_1551_78 = true;
        or_temp_result_1551_78_0 = true;
    }
    or_event_1551_78_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1551_78_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1551_78
    bool or_temp_result_1551_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1551_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1551_78_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1551_78_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1551_78_1_end;
        or_result_1551_78 = true;
        or_temp_result_1551_78_1 = true;
        or_event_1551_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1551_78_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1551_78) goto or_final_or_event_1551_78_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1551_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1551_78_0 || or_temp_result_1551_78_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1551_78_1_end: ;
}
void Frames::event_func_17682()
{
    // event 1552_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1552_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1552_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1552_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1552_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1552_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1552_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1552_78_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1552_78_end: ;
}
void Frames::event_func_17683()
{
    // event 1553_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1553_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1553_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1553_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1553_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1553_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1553_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1553_78_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1553_78_end: ;
}
void Frames::event_func_17684()
{
    // event 1554_78
    bool or_result_1554_78 = false;
    bool or_temp_result_1554_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1554_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1554_78_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1554_78_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1554_78_0_end;
        or_result_1554_78 = true;
        or_temp_result_1554_78_0 = true;
    }
    or_event_1554_78_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1554_78_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1554_78
    bool or_temp_result_1554_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1554_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1554_78_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1554_78_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1554_78_1_end;
        or_result_1554_78 = true;
        or_temp_result_1554_78_1 = true;
        or_event_1554_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1554_78_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1554_78) goto or_final_or_event_1554_78_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1554_78_0 || or_temp_result_1554_78_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1554_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1554_78_1_end: ;
}
void Frames::event_func_17685()
{
    // event 1555_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1555_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1555_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1555_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1555_78_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1555_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1555_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1555_78_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1555_78_end: ;
}
void Frames::event_func_17686()
{
    // event 1556_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1556_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1556_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1556_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1556_78_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1556_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1556_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1556_78_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1556_78_end: ;
}
void Frames::event_func_17687()
{
    // event 1557_78
    bool or_result_1557_78 = false;
    bool or_temp_result_1557_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1557_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1557_78_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1557_78_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1557_78_0_end;
        or_result_1557_78 = true;
        or_temp_result_1557_78_0 = true;
    }
    or_event_1557_78_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1557_78_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1557_78
    bool or_temp_result_1557_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1557_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1557_78_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1557_78_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1557_78_1_end;
        or_result_1557_78 = true;
        or_temp_result_1557_78_1 = true;
        or_event_1557_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1557_78_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1557_78) goto or_final_or_event_1557_78_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1557_78_0 || or_temp_result_1557_78_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1557_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1557_78_1_end: ;
}
void Frames::event_func_17688()
{
    // event 1558_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1558_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1558_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1558_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1558_78_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1558_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1558_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1558_78_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1558_78_end: ;
}
void Frames::event_func_17689()
{
    // event 1559_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1559_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1559_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1559_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1559_78_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1559_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1559_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1559_78_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1559_78_end: ;
}
void Frames::event_func_17690()
{
    // event 1560_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1560_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1560_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1560_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1560_78_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1560_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1560_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1560_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1560_78_end: ;
}
void Frames::event_func_17691()
{
    // event 1561_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1561_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1561_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1561_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1561_78_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1561_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1561_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1561_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
    }
    event_1561_78_end: ;
}
void Frames::event_func_17692()
{
    // event 1562_78
    bool or_result_1562_78 = false;
    bool or_temp_result_1562_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1562_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1562_78_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1562_78_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1562_78_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1562_78_0_end;
        or_result_1562_78 = true;
        or_temp_result_1562_78_0 = true;
    }
    or_event_1562_78_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1562_78_0) {
        npcshellduck_533_instances.save_selection();
    }
    // event 1562_78
    bool or_temp_result_1562_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1562_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1562_78_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1562_78_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1562_78_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1562_78_1_end;
        or_result_1562_78 = true;
        or_temp_result_1562_78_1 = true;
        or_event_1562_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1562_78_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1562_78) goto or_final_or_event_1562_78_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1562_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1562_78_0 || or_temp_result_1562_78_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1562_78_1_end: ;
}
void Frames::event_func_17693()
{
    // event 1563_78
    bool or_result_1563_78 = false;
    bool or_temp_result_1563_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1563_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1563_78_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1563_78_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1563_78_0_end;
        or_result_1563_78 = true;
        or_temp_result_1563_78_0 = true;
    }
    or_event_1563_78_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1563_78_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1563_78
    bool or_temp_result_1563_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1563_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1563_78_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1563_78_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1563_78_1_end;
        or_result_1563_78 = true;
        or_temp_result_1563_78_1 = true;
        or_event_1563_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1563_78_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1563_78) goto or_final_or_event_1563_78_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1563_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1563_78_0 || or_temp_result_1563_78_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1563_78_1_end: ;
}
void Frames::event_func_17694()
{
    // event 1564_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto event_1564_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1564_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1564_78_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto event_1564_78_end;
        if (!media.is_channel_playing(20-1)) goto event_1564_78_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1564_78_end;
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1564_78_end: ;
}
void Frames::event_func_17695()
{
    // event 1565_78
    bool or_result_1565_78 = false;
    bool or_temp_result_1565_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1565_78_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1565_78_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1565_78_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1565_78_0_end;
        or_result_1565_78 = true;
        or_temp_result_1565_78_0 = true;
    }
    or_event_1565_78_0_end: ;
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1565_78_0) {
        npcgong_634_instances.save_selection();
    }
    // event 1565_78
    bool or_temp_result_1565_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1565_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1565_78_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1565_78_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1565_78_1_end;
        or_result_1565_78 = true;
        or_temp_result_1565_78_1 = true;
        or_event_1565_78_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1565_78_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1565_78) goto or_final_or_event_1565_78_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1565_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1565_78_0 || or_temp_result_1565_78_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1565_78_1_end: ;
}
void Frames::event_func_17696()
{
    // event 1566_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1566_78_end;
        if (!((global_values->get(27)) == (1))) goto event_1566_78_end;
        if (not_always_1566_78 > loop_count) {
            not_always_1566_78 = loop_count + 2;
            goto event_1566_78_end;
        }
        not_always_1566_78 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1566_78_end: ;
}
void Frames::event_func_17697()
{
    // event 1567_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1567_78_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1567_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1567_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1567_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1567_78_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1567_78_end: ;
}
void Frames::event_func_17698()
{
    // event 1568_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1568_78_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1568_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1568_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1568_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1568_78_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1568_78_end: ;
}
void Frames::event_func_17699()
{
    // event 1569_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1569_78_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1569_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1569_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1569_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1569_78_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1569_78_end: ;
}
void Frames::event_func_17700()
{
    // event 1570_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1570_78_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1570_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1570_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1570_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1570_78_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1570_78_end: ;
}
void Frames::event_func_17701()
{
    // event 1571_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1571_78_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1571_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1571_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1571_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1571_78_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1571_78_end: ;
}
void Frames::event_func_17702()
{
    // event 1572_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1572_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1572_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1572_78_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1572_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1572_78_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1572_78_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1572_78_end: ;
}
void Frames::event_func_17703()
{
    // event 1573_78
    bool or_result_1573_78 = false;
    bool or_temp_result_1573_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1573_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1573_78_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1573_78_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1573_78_0_end;
        or_result_1573_78 = true;
        or_temp_result_1573_78_0 = true;
    }
    or_event_1573_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1573_78_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1573_78
    bool or_temp_result_1573_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1573_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1573_78_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1573_78_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1573_78_1_end;
        or_result_1573_78 = true;
        or_temp_result_1573_78_1 = true;
        or_event_1573_78_1_end: ;
        if (or_temp_result_1573_78_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1573_78) goto or_final_or_event_1573_78_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1573_78_0 || or_temp_result_1573_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1573_78_0 || or_temp_result_1573_78_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1573_78_1_end: ;
}
void Frames::event_func_17704()
{
    // event 1574_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1574_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1574_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1574_78_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1574_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1574_78_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1574_78_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1574_78_end: ;
}
void Frames::event_func_17705()
{
    // event 1575_78
    bool or_result_1575_78 = false;
    bool or_temp_result_1575_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1575_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1575_78_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1575_78_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1575_78_0_end;
        or_result_1575_78 = true;
        or_temp_result_1575_78_0 = true;
    }
    or_event_1575_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1575_78_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1575_78
    bool or_temp_result_1575_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1575_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1575_78_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1575_78_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1575_78_1_end;
        or_result_1575_78 = true;
        or_temp_result_1575_78_1 = true;
        or_event_1575_78_1_end: ;
        if (or_temp_result_1575_78_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1575_78) goto or_final_or_event_1575_78_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1575_78_0 || or_temp_result_1575_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1575_78_0 || or_temp_result_1575_78_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1575_78_1_end: ;
}
void Frames::event_func_17706()
{
    // event 1576_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1576_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1576_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1576_78_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1576_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1576_78_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1576_78_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1576_78_end: ;
}
void Frames::event_func_17707()
{
    // event 1577_78
    bool or_result_1577_78 = false;
    bool or_temp_result_1577_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1577_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1577_78_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1577_78_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1577_78_0_end;
        or_result_1577_78 = true;
        or_temp_result_1577_78_0 = true;
    }
    or_event_1577_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1577_78_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1577_78
    bool or_temp_result_1577_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1577_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1577_78_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1577_78_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1577_78_1_end;
        or_result_1577_78 = true;
        or_temp_result_1577_78_1 = true;
        or_event_1577_78_1_end: ;
        if (or_temp_result_1577_78_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1577_78) goto or_final_or_event_1577_78_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1577_78_0 || or_temp_result_1577_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1577_78_0 || or_temp_result_1577_78_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1577_78_1_end: ;
}
void Frames::event_func_17708()
{
    // event 1578_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1578_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1578_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1578_78_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1578_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1578_78_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1578_78_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1578_78_end: ;
}
void Frames::event_func_17709()
{
    // event 1579_78
    bool or_result_1579_78 = false;
    bool or_temp_result_1579_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1579_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1579_78_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1579_78_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1579_78_0_end;
        or_result_1579_78 = true;
        or_temp_result_1579_78_0 = true;
    }
    or_event_1579_78_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1579_78_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1579_78
    bool or_temp_result_1579_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1579_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1579_78_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1579_78_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1579_78_1_end;
        or_result_1579_78 = true;
        or_temp_result_1579_78_1 = true;
        or_event_1579_78_1_end: ;
        if (or_temp_result_1579_78_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1579_78) goto or_final_or_event_1579_78_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1579_78_0 || or_temp_result_1579_78_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1579_78_0 || or_temp_result_1579_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1579_78_1_end: ;
}
void Frames::event_func_17710()
{
    // event 1580_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1580_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1580_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1580_78_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1580_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1580_78_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1580_78_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1580_78_end: ;
}
void Frames::event_func_17711()
{
    // event 1581_78
    bool or_result_1581_78 = false;
    bool or_temp_result_1581_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1581_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1581_78_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1581_78_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1581_78_0_end;
        or_result_1581_78 = true;
        or_temp_result_1581_78_0 = true;
    }
    or_event_1581_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1581_78_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1581_78
    bool or_temp_result_1581_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1581_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1581_78_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1581_78_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1581_78_1_end;
        or_result_1581_78 = true;
        or_temp_result_1581_78_1 = true;
        or_event_1581_78_1_end: ;
        if (or_temp_result_1581_78_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1581_78) goto or_final_or_event_1581_78_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1581_78_0 || or_temp_result_1581_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1581_78_0 || or_temp_result_1581_78_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1581_78_1_end: ;
}
void Frames::event_func_17712()
{
    // event 1582_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1582_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1582_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1582_78_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1582_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1582_78_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1582_78_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1582_78_end: ;
}
void Frames::event_func_17713()
{
    // event 1583_78
    bool or_result_1583_78 = false;
    bool or_temp_result_1583_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1583_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1583_78_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1583_78_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1583_78_0_end;
        or_result_1583_78 = true;
        or_temp_result_1583_78_0 = true;
    }
    or_event_1583_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1583_78_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1583_78
    bool or_temp_result_1583_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1583_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1583_78_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1583_78_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1583_78_1_end;
        or_result_1583_78 = true;
        or_temp_result_1583_78_1 = true;
        or_event_1583_78_1_end: ;
        if (or_temp_result_1583_78_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1583_78) goto or_final_or_event_1583_78_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1583_78_0 || or_temp_result_1583_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1583_78_0 || or_temp_result_1583_78_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1583_78_1_end: ;
}
void Frames::event_func_17714()
{
    // event 1584_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto event_1584_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1584_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1584_78_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto event_1584_78_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1584_78_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1584_78_end;
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1584_78_end: ;
}
void Frames::event_func_17715()
{
    // event 1585_78
    bool or_result_1585_78 = false;
    bool or_temp_result_1585_78_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1585_78_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1585_78_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1585_78_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1585_78_0_end;
        or_result_1585_78 = true;
        or_temp_result_1585_78_0 = true;
    }
    or_event_1585_78_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1585_78_0) {
        dialogbox_566_instances.save_selection();
        npcgong_634_instances.save_selection();
    }
    // event 1585_78
    bool or_temp_result_1585_78_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_dialog_system_dialog_voices_blips_1)) goto or_event_1585_78_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1585_78_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1585_78_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1585_78_1_end;
        or_result_1585_78 = true;
        or_temp_result_1585_78_1 = true;
        or_event_1585_78_1_end: ;
        if (or_temp_result_1585_78_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1585_78) goto or_final_or_event_1585_78_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1585_78_0 || or_temp_result_1585_78_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1585_78_0 || or_temp_result_1585_78_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1585_78_1_end: ;
}
void Frames::event_func_17716()
{
    // event 1587_78
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_meeting_with_gong_1)) goto event_1587_78_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1587_78_end: ;
}
void Frames::event_func_17717()
{
    // event 1791_78
    {
        if (!(group_pause_1)) goto event_1791_78_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1791_78_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1791_78_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1791_78_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1791_78_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
    }
    event_1791_78_end: ;
}
void Frames::event_func_17718()
{
    // event 1792_78
    bool or_result_1792_78 = false;
    bool or_temp_result_1792_78_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1792_78_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1792_78_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1792_78_0_end;
        or_result_1792_78 = true;
        or_temp_result_1792_78_0 = true;
    }
    or_event_1792_78_0_end: ;
    // event 1792_78
    bool or_temp_result_1792_78_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1792_78_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1792_78_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1792_78_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1792_78_1_end;
        or_result_1792_78 = true;
        or_temp_result_1792_78_1 = true;
        or_event_1792_78_1_end: ;
        if (!or_result_1792_78) goto or_final_or_event_1792_78_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
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
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        playerassistcopilot_2219_instances.clear_selection();
        for (ObjectIterator it(playerassistcopilot_2219_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        npcplane_3940_instances.clear_selection();
        for (ObjectIterator it(npcplane_3940_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
    }
    or_final_or_event_1792_78_1_end: ;
}
void Frames::event_func_17719()
{
    // event 1797_78
    {
        if (!(group_pause_1)) goto event_1797_78_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_1797_78_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (4))) goto event_1797_78_end;
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
    event_1797_78_end: ;
}
void Frames::event_func_17720()
{
    // event 1798_78
    {
        if (!(group_pause_1)) goto event_1798_78_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1798_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1798_78_end;
        global_values->set(4, 0);
        next_frame = 79 + 0;    
    
        media.stop_samples();
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1798_78_end: ;
}
void Frames::event_func_17721()
{
    // event 1799_78
    {
        if (!(group_pause_1)) goto event_1799_78_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_1799_78_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1799_78_end;
        global_values->set(4, 0);
        next_frame = 29 + 0;    
    
        media.stop_samples();
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1799_78_end: ;
}
