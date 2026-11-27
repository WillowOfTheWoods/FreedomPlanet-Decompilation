#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_17870()
{
    // event 1641_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1641_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (11))) goto event_1641_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1641_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1641_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1641_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1641_79_end: ;
}
void Frames::event_func_17871()
{
    // event 1642_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1642_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1642_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1642_79_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1642_79_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_1642_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1642_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 56);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(2, ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x());
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1642_79_end: ;
}
void Frames::event_func_17872()
{
    // event 1643_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1643_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1643_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (29))) goto event_1643_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (31))) goto event_1643_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1643_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1643_79_end: ;
}
void Frames::event_func_17873()
{
    // event 1644_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1644_79_end;
        if (!((global_values->get(27)) == (0))) goto event_1644_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1644_79_end;
        if (!((media.get_channel_position(-1 +20)) > (550))) goto event_1644_79_end;
        if (!((media.get_channel_position(-1 +20)) < (1400))) goto event_1644_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(7)) == (0))) goto event_1644_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(7, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7);
        }
    }
    event_1644_79_end: ;
}
void Frames::event_func_17874()
{
    // event 1645_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1645_79_end;
        if (!((global_values->get(27)) == (0))) goto event_1645_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1645_79_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1645_79_end;
        if (!((media.get_channel_position(-1 +20)) < (2000))) goto event_1645_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(7)) == (1))) goto event_1645_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(randrange(3));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(randrange(2)*16-1);
        }
    }
    event_1645_79_end: ;
}
void Frames::event_func_17875()
{
    // event 1646_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1646_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1646_79_end;
        if (!((media.get_channel_position(-1 +20)) > (2000))) goto event_1646_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(7)) == (1))) goto event_1646_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(7, 1);
    }
    event_1646_79_end: ;
}
void Frames::event_func_17876()
{
    // event 1647_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1647_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1647_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(7)) == (2))) goto event_1647_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1647_79_end: ;
}
void Frames::event_func_17877()
{
    // event 1648_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1648_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1648_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1648_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1648_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(2));
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(21);
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 31);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1648_79_end: ;
}
void Frames::event_func_17878()
{
    // event 1649_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1649_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1649_79_end;
        if (once_condition_1649_79) goto event_1649_79_end;
        once_condition_1649_79 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1649_79_end: ;
}
void Frames::event_func_17879()
{
    // event 1650_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1650_79_end;
        if (!((global_values->get(27)) == (0))) goto event_1650_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1650_79_end;
        if (!((media.get_channel_position(-1 +20)) > (1300))) goto event_1650_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 24);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1650_79_end: ;
}
void Frames::event_func_17880()
{
    // event 1651_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1651_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1651_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1651_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1651_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ship1_1982_instances.clear_selection();
        for (ObjectIterator it(ship1_1982_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shipbullet_1984_instances.clear_selection();
        for (ObjectIterator it(shipbullet_1984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ship2_1985_instances.clear_selection();
        for (ObjectIterator it(ship2_1985_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->hide_layer(5-1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, 12);
        media.stop_channel(20-1);
        npcmerc_1283_instances.clear_selection();
        spread_value(npcmerc_1283_instances, 0, 0);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1651_79_end: ;
}
void Frames::event_func_17881()
{
    // event 1652_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1652_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1652_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)*2, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(npcmayor_3950_instances))->get_x()-50));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1652_79_end: ;
}
void Frames::event_func_17882()
{
    // event 1653_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1653_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1653_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (10))) goto event_1653_79_end;
        media.play_id(SOUND_SCENE_TRUCKSTOP_2_425, -1, 1);
    }
    event_1653_79_end: ;
}
void Frames::event_func_17883()
{
    // event 1654_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1654_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1654_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1654_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1654_79_end: ;
}
void Frames::event_func_17884()
{
    // event 1655_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1655_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1655_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1655_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1655_79_end: ;
}
void Frames::event_func_17885()
{
    // event 1656_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1656_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1656_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (50))) goto event_1656_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1656_79_end: ;
}
void Frames::event_func_17886()
{
    // event 1657_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1657_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1657_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1657_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1657_79_end: ;
}
void Frames::event_func_17887()
{
    // event 1658_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1658_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1658_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-50))) goto event_1658_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1658_79_end: ;
}
void Frames::event_func_17888()
{
    // event 1659_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1659_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (13))) goto event_1659_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+150))) goto event_1659_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 33);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1659_79_end: ;
}
void Frames::event_func_17889()
{
    // event 1660_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1660_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1660_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1660_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+100))) goto event_1660_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(4, get_max(((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)-0.1, 0));
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(npcmayor_3950_instances))->get_x()-50));
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)*2, 0);
        }
    }
    event_1660_79_end: ;
}
void Frames::event_func_17890()
{
    // event 1661_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1661_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (14))) goto event_1661_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (15))) goto event_1661_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(4)) > (3))) goto event_1661_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1661_79_end: ;
}
void Frames::event_func_17891()
{
    // event 1662_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1662_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1662_79_end;
        if (((Active*)get_instance(npcmayor_3950_instances))->test_animation(5)) goto event_1662_79_end;
        if (!((media.get_channel_position(-1 +20)) > (1700))) goto event_1662_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(3);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
    }
    event_1662_79_end: ;
}
void Frames::event_func_17892()
{
    // event 1663_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1663_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1663_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1663_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1663_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(1);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_ZAO_SURPRISE_402, -1, 1);
        ((Active*)get_instance(npcmayor_3950_instances))->alterables->values.set(1, ((Active*)get_instance(npcmayor_3950_instances))->get_x());
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_x());
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_y());
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-50);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
    }
    event_1663_79_end: ;
}
void Frames::event_func_17893()
{
    // event 1664_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1664_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1664_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1664_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(4);
    }
    event_1664_79_end: ;
}
void Frames::event_func_17894()
{
    // event 1665_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1665_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1665_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (80))) goto event_1665_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1665_79_end: ;
}
void Frames::event_func_17895()
{
    // event 1666_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1666_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1666_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (90))) goto event_1666_79_end;
        media.play_id(SOUND_SCENE_TRUCKBACKUP_401, -1, 1);
    }
    event_1666_79_end: ;
}
void Frames::event_func_17896()
{
    // event 1667_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1667_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1667_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (90))) goto event_1667_79_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)-2);
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+4, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        ((Active*)get_instance(npcshellduck_533_instances))->set_layer(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(npcshellduck_533_instances))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
        ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->move_front(((Active*)get_instance(npcshellduck_533_instances)));
    }
    event_1667_79_end: ;
}
void Frames::event_func_17897()
{
    // event 1668_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1668_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (15))) goto event_1668_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (360))) goto event_1668_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1668_79_end: ;
}
void Frames::event_func_17898()
{
    // event 1669_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1669_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1669_79_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
    }
    event_1669_79_end: ;
}
void Frames::event_func_17899()
{
    // event 1670_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1670_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (16))) goto event_1670_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (50))) goto event_1670_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1670_79_end: ;
}
void Frames::event_func_17900()
{
    // event 1671_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1671_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1671_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()-3);
    }
    event_1671_79_end: ;
}
void Frames::event_func_17901()
{
    // event 1672_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1672_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (17))) goto event_1672_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (50))) goto event_1672_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(6);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1672_79_end: ;
}
void Frames::event_func_17902()
{
    // event 1673_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1673_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1673_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1673_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1673_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1673_79_end: ;
}
void Frames::event_func_17903()
{
    // event 1674_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1674_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1674_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1674_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(10);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_frame();
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
    }
    event_1674_79_end: ;
}
void Frames::event_func_17904()
{
    // event 1675_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1675_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1675_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1675_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1675_79_end: ;
}
void Frames::event_func_17905()
{
    // event 1676_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1676_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1676_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (50))) goto event_1676_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1676_79_end: ;
}
void Frames::event_func_17906()
{
    // event 1677_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1677_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1677_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (90))) goto event_1677_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(36);
        }
    }
    event_1677_79_end: ;
}
void Frames::event_func_17907()
{
    // event 1678_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1678_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (19))) goto event_1678_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (120))) goto event_1678_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(36);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1678_79_end: ;
}
void Frames::event_func_17908()
{
    // event 1679_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1679_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1679_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1679_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1679_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1679_79_end: ;
}
void Frames::event_func_17909()
{
    // event 1680_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1680_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1680_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1680_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1680_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1680_79_end: ;
}
void Frames::event_func_17910()
{
    // event 1681_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1681_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (21))) goto event_1681_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (50))) goto event_1681_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1681_79_end: ;
}
void Frames::event_func_17911()
{
    // event 1682_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1682_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1682_79_end;
        if (!((media.get_channel_position(-1 +20)) > (950))) goto event_1682_79_end;
        if (!((media.get_channel_position(-1 +20)) < (2450))) goto event_1682_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(18);
    }
    event_1682_79_end: ;
}
void Frames::event_func_17912()
{
    // event 1683_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1683_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1683_79_end;
        if (!((media.get_channel_position(-1 +20)) > (2450))) goto event_1683_79_end;
        if (once_condition_1683_79) goto event_1683_79_end;
        once_condition_1683_79 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(9);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
    }
    event_1683_79_end: ;
}
void Frames::event_func_17913()
{
    // event 1684_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1684_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1684_79_end;
        if (!((media.get_channel_position(-1 +20)) > (2450))) goto event_1684_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(10);
    }
    event_1684_79_end: ;
}
void Frames::event_func_17914()
{
    // event 1685_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1685_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1685_79_end;
        if (!((media.get_channel_position(-1 +20)) > (2950))) goto event_1685_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(9);
    }
    event_1685_79_end: ;
}
void Frames::event_func_17915()
{
    // event 1686_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1686_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1686_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1686_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1686_79_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(9);
    }
    event_1686_79_end: ;
}
void Frames::event_func_17916()
{
    // event 1687_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1687_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1687_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (10))) goto event_1687_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1687_79_end: ;
}
void Frames::event_func_17917()
{
    // event 1688_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1688_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1688_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (20))) goto event_1688_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
    }
    event_1688_79_end: ;
}
void Frames::event_func_17918()
{
    // event 1689_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1689_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1689_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1689_79_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1689_79_end: ;
}
void Frames::event_func_17919()
{
    // event 1690_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1690_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1690_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (40))) goto event_1690_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1690_79_end: ;
}
void Frames::event_func_17920()
{
    // event 1691_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1691_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1691_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (50))) goto event_1691_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1691_79_end: ;
}
void Frames::event_func_17921()
{
    // event 1692_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1692_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1692_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1692_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+3);
    }
    event_1692_79_end: ;
}
void Frames::event_func_17922()
{
    // event 1693_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1693_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (23))) goto event_1693_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (90))) goto event_1693_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
    }
    event_1693_79_end: ;
}
void Frames::event_func_17923()
{
    // event 1694_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1694_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) > (23))) goto event_1694_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) < (26))) goto event_1694_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcmayor_3950_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1694_79_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1694_79_end: ;
}
void Frames::event_func_17924()
{
    // event 1695_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1695_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1695_79_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1695_79_end: ;
}
void Frames::event_func_17925()
{
    // event 1696_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1696_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1696_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1696_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1696_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1696_79_end: ;
}
void Frames::event_func_17926()
{
    // event 1697_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1697_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1697_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1697_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1697_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(19);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1697_79_end: ;
}
void Frames::event_func_17927()
{
    // event 1698_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1698_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (25))) goto event_1698_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (15))) goto event_1698_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(12);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(1)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1698_79_end: ;
}
void Frames::event_func_17928()
{
    // event 1699_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1699_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1699_79_end;
        if (once_condition_1699_79) goto event_1699_79_end;
        once_condition_1699_79 = true;
        effectsconfetti_2890_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(12));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
            ((Active*)*it)->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
        }
    }
    event_1699_79_end: ;
}
void Frames::event_func_17929()
{
    // event 1700_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1700_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (26))) goto event_1700_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(npcmayor_3950_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1700_79_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1700_79_end: ;
}
void Frames::event_func_17930()
{
    // event 1701_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1701_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1701_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1701_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1701_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        FrameObject * single_instance_1701_79_0; single_instance_1701_79_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectzaobuff_3947(parent->x + 0, parent->y + -50), parent->layer);
                if (single_instance_1701_79_0 == NULL)
                    single_instance_1701_79_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_GACHAPONWIN_188, -1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1701_79_end: ;
}
void Frames::event_func_17931()
{
    // event 1702_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1702_79_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1702_79_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1702_79_end: ;
}
void Frames::event_func_17932()
{
    // event 1703_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1703_79_end;
        effectzaobuff_3947_instances.clear_selection();
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (25))) { it.deselect(); continue; }
        }
        if (!effectzaobuff_3947_instances.has_selection()) goto event_1703_79_end;
        for (ObjectIterator it(effectzaobuff_3947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1703_79_end: ;
}
void Frames::event_func_17933()
{
    // event 1704_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1704_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (27))) goto event_1704_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (40))) goto event_1704_79_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1704_79_end: ;
}
void Frames::event_func_17934()
{
    // event 1705_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1705_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (27))) goto event_1705_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (60))) goto event_1705_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1705_79_end: ;
}
void Frames::event_func_17935()
{
    // event 1706_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1706_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1706_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1706_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1706_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(15);
    }
    event_1706_79_end: ;
}
void Frames::event_func_17936()
{
    // event 1707_79
    bool or_result_1707_79 = false;
    bool or_temp_result_1707_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1707_79_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1707_79_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (42))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1707_79_0_end;
        if (!((media.get_channel_position(-1 +20)) > (500))) goto or_event_1707_79_0_end;
        or_result_1707_79 = true;
        or_temp_result_1707_79_0 = true;
    }
    or_event_1707_79_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1707_79_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 1707_79
    bool or_temp_result_1707_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1707_79_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1707_79_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (42))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (10))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1707_79_1_end;
        or_result_1707_79 = true;
        or_temp_result_1707_79_1 = true;
        or_event_1707_79_1_end: ;
        if (or_temp_result_1707_79_1) {
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1707_79) goto or_final_or_event_1707_79_1_end;
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1707_79_0 || or_temp_result_1707_79_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 18);
        }
    }
    or_final_or_event_1707_79_1_end: ;
}
void Frames::event_func_17937()
{
    // event 1708_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1708_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1708_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (42))) goto event_1708_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1708_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        FrameObject * single_instance_1708_79_0; single_instance_1708_79_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectzaobuff_3947(parent->x + 0, parent->y + -50), parent->layer);
                if (single_instance_1708_79_0 == NULL)
                    single_instance_1708_79_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_GACHAPONWIN_188, -1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)((Active*)single_instance_1708_79_0))->set_direction(1);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(18);
    }
    event_1708_79_end: ;
}
void Frames::event_func_17938()
{
    // event 1709_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1709_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (29))) goto event_1709_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (60))) goto event_1709_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(9);
    }
    event_1709_79_end: ;
}
void Frames::event_func_17939()
{
    // event 1710_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1710_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (29))) goto event_1710_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (180))) goto event_1710_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1710_79_end: ;
}
void Frames::event_func_17940()
{
    // event 1711_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1711_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1711_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (43))) goto event_1711_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (45))) goto event_1711_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1711_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1711_79_end: ;
}
void Frames::event_func_17941()
{
    // event 1712_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1712_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (44))) goto event_1712_79_end;
        if (once_condition_1712_79) goto event_1712_79_end;
        once_condition_1712_79 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(0);
    }
    event_1712_79_end: ;
}
void Frames::event_func_17942()
{
    // event 1713_79
    bool or_result_1713_79 = false;
    bool or_temp_result_1713_79_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1713_79_0_end;
        if (!((global_values->get(27)) == (0))) goto or_event_1713_79_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (43))) goto or_event_1713_79_0_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto or_event_1713_79_0_end;
        or_result_1713_79 = true;
        or_temp_result_1713_79_0 = true;
    }
    or_event_1713_79_0_end: ;
    // event 1713_79
    bool or_temp_result_1713_79_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto or_event_1713_79_1_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1713_79_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (43))) goto or_event_1713_79_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) > (10))) goto or_event_1713_79_1_end;
        or_result_1713_79 = true;
        or_temp_result_1713_79_1 = true;
        or_event_1713_79_1_end: ;
        if (!or_result_1713_79) goto or_final_or_event_1713_79_1_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 12);
    }
    or_final_or_event_1713_79_1_end: ;
}
void Frames::event_func_17943()
{
    // event 1714_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1714_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1714_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1714_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1714_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_RECORDSCRATCH_403, -1, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1714_79_end: ;
}
void Frames::event_func_17944()
{
    // event 1715_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1715_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (31))) goto event_1715_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (20))) goto event_1715_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1715_79_end: ;
}
void Frames::event_func_17945()
{
    // event 1716_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1716_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1716_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1716_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1716_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1716_79_end: ;
}
void Frames::event_func_17946()
{
    // event 1717_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1717_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1717_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (47))) goto event_1717_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1717_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1717_79_end: ;
}
void Frames::event_func_17947()
{
    // event 1718_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1718_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1718_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (30))) goto event_1718_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1718_79_end: ;
}
void Frames::event_func_17948()
{
    // event 1719_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1719_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1719_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (50))) goto event_1719_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1719_79_end: ;
}
void Frames::event_func_17949()
{
    // event 1720_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1720_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1720_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (90))) goto event_1720_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(16);
    }
    event_1720_79_end: ;
}
void Frames::event_func_17950()
{
    // event 1721_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1721_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1721_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (110))) goto event_1721_79_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1721_79_end: ;
}
void Frames::event_func_17951()
{
    // event 1722_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1722_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1722_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (128))) goto event_1722_79_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
    }
    event_1722_79_end: ;
}
void Frames::event_func_17952()
{
    // event 1723_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1723_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1723_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) == (135))) goto event_1723_79_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1723_79_end: ;
}
void Frames::event_func_17953()
{
    // event 1724_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1724_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (33))) goto event_1724_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) > (150))) goto event_1724_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1724_79_end: ;
}
void Frames::event_func_17954()
{
    // event 1725_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1725_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (48))) goto event_1725_79_end;
        if (not_always_1725_79 > loop_count) {
            not_always_1725_79 = loop_count + 2;
            goto event_1725_79_end;
        }
        not_always_1725_79 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1725_79_end: ;
}
void Frames::event_func_17955()
{
    // event 1726_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1726_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1726_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (48))) goto event_1726_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1726_79_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1726_79_end: ;
}
void Frames::event_func_17956()
{
    // event 1727_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1727_79_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1727_79_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (49))) goto event_1727_79_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1727_79_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.set(1, 0);
    }
    event_1727_79_end: ;
}
void Frames::event_func_17957()
{
    // event 1728_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1728_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (35))) goto event_1728_79_end;
        if (not_always_1728_79 > loop_count) {
            not_always_1728_79 = loop_count + 2;
            goto event_1728_79_end;
        }
        not_always_1728_79 = loop_count + 2;
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
    
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1728_79_end: ;
}
void Frames::event_func_17958()
{
    // event 1729_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1729_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (35))) goto event_1729_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1729_79_end: ;
}
void Frames::event_func_17959()
{
    // event 1730_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_robopanther_aftermath_1)) goto event_1730_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (35))) goto event_1730_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1730_79_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 4);
    }
    event_1730_79_end: ;
}
void Frames::event_func_17960()
{
    // event 1732_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1732_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(1, 1);
    }
    event_1732_79_end: ;
}
void Frames::event_func_17961()
{
    // event 1733_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1733_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1733_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(1)) < (5))) goto event_1733_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(706);
        ((Active*)get_instance(npcmayor_3950_instances))->set_layer(4-1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(705);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(frame_left()-40);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(frame_left()-80);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(706);
            ((Active*)*it)->set_x(frame_left()-120);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(706);
            ((Active*)*it)->set_x(frame_left()-350);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(706);
            ((Active*)*it)->set_x(frame_left()-460);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1733_79_end: ;
}
void Frames::event_func_17962()
{
    // event 1734_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1734_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1734_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 5000);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 640);
    }
    event_1734_79_end: ;
}
void Frames::event_func_17963()
{
    // event 1735_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1735_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) == (0))) goto event_1735_79_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1735_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->alterables->values.add(0, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        media.play_id(SOUND_RUMBLEDEEP_110, 16-1, 0);
    }
    event_1735_79_end: ;
}
void Frames::event_func_17964()
{
    // event 1736_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1736_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1736_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->alterables->values.get(0)) == (0))) goto event_1736_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+4);
    }
    event_1736_79_end: ;
}
void Frames::event_func_17965()
{
    // event 1737_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1737_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1737_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->alterables->values.get(0)) == (1))) goto event_1737_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(17);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()-4);
    }
    event_1737_79_end: ;
}
void Frames::event_func_17966()
{
    // event 1738_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1738_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1738_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) > (5200))) goto event_1738_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->alterables->values.set(0, 1);
    }
    event_1738_79_end: ;
}
void Frames::event_func_17967()
{
    // event 1739_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1739_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1739_79_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) < (4950))) goto event_1739_79_end;
        ((Active*)get_instance(npcmayor_3950_instances))->alterables->values.set(0, 0);
    }
    event_1739_79_end: ;
}
void Frames::event_func_17968()
{
    // event 1740_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1740_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1740_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) < (4950))) goto event_1740_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(((Active*)get_instance(npcshellduck_533_instances))->get_x()+3);
        ((Active*)get_instance(npcshellduck_533_instances))->force_speed(35);
    }
    event_1740_79_end: ;
}
void Frames::event_func_17969()
{
    // event 1741_79
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_scene_zao_s_airship_1)) goto event_1741_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) <= (1))) goto event_1741_79_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->get_x()) >= (4950))) goto event_1741_79_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->restore_speed();
    }
    event_1741_79_end: ;
}
