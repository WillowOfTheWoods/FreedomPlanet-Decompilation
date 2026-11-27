#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18802()
{
    // event 1677_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1677_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1677_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (1))) goto event_1677_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (32))) goto event_1677_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+1, 12));
        }
    }
    event_1677_82_end: ;
}
void Frames::event_func_18803()
{
    // event 1678_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1678_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1678_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (32))) goto event_1678_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-1, 0));
        }
    }
    event_1678_82_end: ;
}
void Frames::event_func_18804()
{
    // event 1679_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1679_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (32))) goto event_1679_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1679_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1679_82_end: ;
}
void Frames::event_func_18805()
{
    // event 1680_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1680_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1680_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1680_82_end: ;
}
void Frames::event_func_18806()
{
    // event 1681_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1681_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1681_82_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1681_82_end;
        if (!((media.get_channel_position(-1 +20)) < (500))) goto event_1681_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(39);
    }
    event_1681_82_end: ;
}
void Frames::event_func_18807()
{
    // event 1682_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1682_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1682_82_end;
        if (!((media.get_channel_position(-1 +20)) > (1800))) goto event_1682_82_end;
        if (!((media.get_channel_position(-1 +20)) < (2400))) goto event_1682_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(39);
    }
    event_1682_82_end: ;
}
void Frames::event_func_18808()
{
    // event 1683_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1683_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1683_82_end;
        if (!((media.get_channel_position(-1 +20)) > (2400))) goto event_1683_82_end;
        if (!((media.get_channel_position(-1 +20)) < (2800))) goto event_1683_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(40);
    }
    event_1683_82_end: ;
}
void Frames::event_func_18809()
{
    // event 1684_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1684_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1684_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (60))) goto event_1684_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.3, 10));
        }
    }
    event_1684_82_end: ;
}
void Frames::event_func_18810()
{
    // event 1685_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1685_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1685_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1685_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.3, 2));
        }
    }
    event_1685_82_end: ;
}
void Frames::event_func_18811()
{
    // event 1686_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1686_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (34))) goto event_1686_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1686_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1686_82_end: ;
}
void Frames::event_func_18812()
{
    // event 1687_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1687_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1687_82_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1687_82_end;
        if (!((media.get_channel_position(-1 +20)) < (700))) goto event_1687_82_end;
        if (once_condition_1687_82) goto event_1687_82_end;
        once_condition_1687_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(31);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
    }
    event_1687_82_end: ;
}
void Frames::event_func_18813()
{
    // event 1688_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1688_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1688_82_end;
        if (!((media.get_channel_position(-1 +20)) > (700))) goto event_1688_82_end;
        if (!((media.get_channel_position(-1 +20)) < (1600))) goto event_1688_82_end;
        if (once_condition_1688_82) goto event_1688_82_end;
        once_condition_1688_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(9);
    }
    event_1688_82_end: ;
}
void Frames::event_func_18814()
{
    // event 1689_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1689_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1689_82_end;
        if (!((media.get_channel_position(-1 +20)) > (1600))) goto event_1689_82_end;
        if (!((media.get_channel_position(-1 +20)) < (2100))) goto event_1689_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(9);
    }
    event_1689_82_end: ;
}
void Frames::event_func_18815()
{
    // event 1690_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1690_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1690_82_end;
        if (!((media.get_channel_position(-1 +20)) > (2100))) goto event_1690_82_end;
        if (!((media.get_channel_position(-1 +20)) < (3300))) goto event_1690_82_end;
        if (once_condition_1690_82) goto event_1690_82_end;
        once_condition_1690_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(9);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(31);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
    }
    event_1690_82_end: ;
}
void Frames::event_func_18816()
{
    // event 1691_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1691_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1691_82_end;
        if (!((media.get_channel_position(-1 +20)) > (3300))) goto event_1691_82_end;
        if (!((media.get_channel_position(-1 +20)) < (4300))) goto event_1691_82_end;
        if (once_condition_1691_82) goto event_1691_82_end;
        once_condition_1691_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(0);
    }
    event_1691_82_end: ;
}
void Frames::event_func_18817()
{
    // event 1692_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1692_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1692_82_end;
        if (!((media.get_channel_position(-1 +20)) > (4300))) goto event_1692_82_end;
        if (once_condition_1692_82) goto event_1692_82_end;
        once_condition_1692_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 3);
    }
    event_1692_82_end: ;
}
void Frames::event_func_18818()
{
    // event 1693_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1693_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1693_82_end;
        if (once_condition_1693_82) goto event_1693_82_end;
        once_condition_1693_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(3);
    }
    event_1693_82_end: ;
}
void Frames::event_func_18819()
{
    // event 1694_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1694_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1694_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (50))) goto event_1694_82_end;
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(bossholodragoneye_3055_instances, default_active_instance))->get_x()+cos_deg(get_min(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*10-20, 200))*-80);
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(bossholodragoneye_3055_instances, default_active_instance))->get_y()-sin_deg(get_min(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*10-20, 200))*-80);
    }
    event_1694_82_end: ;
}
void Frames::event_func_18820()
{
    // event 1695_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1695_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1695_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1695_82_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcmayor_3950_instances));
            if (parent == NULL) goto pos_end_1695_82_0;
            ((Active*)get_instance(player_389_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1695_82_0: ;
        }
    }
    event_1695_82_end: ;
}
void Frames::event_func_18821()
{
    // event 1696_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1696_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1696_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1696_82_end;
        media.play_id(SOUND_DRAGONROAR2_332, -1, 1);
    }
    event_1696_82_end: ;
}
void Frames::event_func_18822()
{
    // event 1697_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1697_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1697_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1697_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (160))) goto event_1697_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+2, 24));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 4);
    }
    event_1697_82_end: ;
}
void Frames::event_func_18823()
{
    // event 1698_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1698_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1698_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1698_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-2, 0));
        }
    }
    event_1698_82_end: ;
}
void Frames::event_func_18824()
{
    // event 1699_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1699_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (36))) goto event_1699_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1699_82_end;
        media.play_id(SOUND_DRAGONROAR_5_333, -1, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(player_389_instances))->set_x(0);
    }
    event_1699_82_end: ;
}
void Frames::event_func_18825()
{
    // event 1700_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1700_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (37))) goto event_1700_82_end;
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.15, -15));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+get_max(((Active*)get_single(bossholodragonneck_3057_instances, default_active_instance))->alterables->values.get(3)-250, 2680))*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_single(bossholodragonneck_3057_instances, default_active_instance))->alterables->values.get(4))*0.05);
    }
    event_1700_82_end: ;
}
void Frames::event_func_18826()
{
    // event 1701_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1701_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (37))) goto event_1701_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (320))) goto event_1701_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1701_82_end: ;
}
void Frames::event_func_18827()
{
    // event 1702_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1702_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (37))) goto event_1702_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (388))) goto event_1702_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_right()+50);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_right()+110);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(frame_right()+80);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1702_82_end: ;
}
void Frames::event_func_18828()
{
    // event 1703_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1703_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1703_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+height-global_values->get(17)*0.5-8)*0.05);
    }
    event_1703_82_end: ;
}
void Frames::event_func_18829()
{
    // event 1704_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1704_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1704_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (60))) goto event_1704_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1704_82_end: ;
}
void Frames::event_func_18830()
{
    // event 1705_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1705_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1705_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (70))) goto event_1705_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1705_82_end: ;
}
void Frames::event_func_18831()
{
    // event 1706_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1706_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1706_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (85))) goto event_1706_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1706_82_end: ;
}
void Frames::event_func_18832()
{
    // event 1707_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1707_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1707_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (60))) goto event_1707_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1707_82_end: ;
}
void Frames::event_func_18833()
{
    // event 1708_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1708_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1708_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (70))) goto event_1708_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1708_82_end: ;
}
void Frames::event_func_18834()
{
    // event 1709_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1709_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1709_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (85))) goto event_1709_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(57);
        }
    }
    event_1709_82_end: ;
}
void Frames::event_func_18835()
{
    // event 1710_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1710_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (38))) goto event_1710_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1710_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1710_82_end: ;
}
void Frames::event_func_18836()
{
    // event 1711_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1711_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1711_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (23))) goto event_1711_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (25))) goto event_1711_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1711_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1711_82_end: ;
}
void Frames::event_func_18837()
{
    // event 1712_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1712_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1712_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (25))) goto event_1712_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (30))) goto event_1712_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1712_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1712_82_end: ;
}
void Frames::event_func_18838()
{
    // event 1713_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1713_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (40))) goto event_1713_82_end;
        if (once_condition_1713_82) goto event_1713_82_end;
        once_condition_1713_82 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(51);
            ((Active*)*it)->set_x(2970);
            ((Active*)*it)->set_y(1322);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1713_82_end: ;
}
void Frames::event_func_18839()
{
    // event 1714_82
    bool or_result_1714_82 = false;
    bool or_temp_result_1714_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1714_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (39))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1714_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (25))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1714_82_0_end;
        or_result_1714_82 = true;
        or_temp_result_1714_82_0 = true;
    }
    or_event_1714_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1714_82_0) {
        themagister_2115_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1714_82
    bool or_temp_result_1714_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1714_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1714_82_1_end;
        or_result_1714_82 = true;
        or_temp_result_1714_82_1 = true;
        or_event_1714_82_1_end: ;
        if (or_temp_result_1714_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1714_82) goto or_final_or_event_1714_82_1_end;
        themagister_2115_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1714_82_0 || or_temp_result_1714_82_1) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_1714_82_0) {
            dialogbox_566_instances.restore_selection();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(33);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
    }
    or_final_or_event_1714_82_1_end: ;
}
void Frames::event_func_18840()
{
    // event 1715_82
    bool or_result_1715_82 = false;
    bool or_temp_result_1715_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1715_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (39))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (25))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1715_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (25))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1715_82_0_end;
        or_result_1715_82 = true;
        or_temp_result_1715_82_0 = true;
    }
    or_event_1715_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1715_82_0) {
        themagister_2115_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1715_82
    bool or_temp_result_1715_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1715_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (25))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1715_82_1_end;
        or_result_1715_82 = true;
        or_temp_result_1715_82_1 = true;
        or_event_1715_82_1_end: ;
        if (or_temp_result_1715_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1715_82) goto or_final_or_event_1715_82_1_end;
        themagister_2115_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1715_82_0 || or_temp_result_1715_82_1) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_1715_82_0) {
            dialogbox_566_instances.restore_selection();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1715_82_1_end: ;
}
void Frames::event_func_18841()
{
    // event 1716_82
    bool or_result_1716_82 = false;
    bool or_temp_result_1716_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1716_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (39))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (30))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1716_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (25))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1716_82_0_end;
        or_result_1716_82 = true;
        or_temp_result_1716_82_0 = true;
    }
    or_event_1716_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1716_82_0) {
        themagister_2115_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1716_82
    bool or_temp_result_1716_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1716_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (30))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1716_82_1_end;
        or_result_1716_82 = true;
        or_temp_result_1716_82_1 = true;
        or_event_1716_82_1_end: ;
        if (or_temp_result_1716_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1716_82) goto or_final_or_event_1716_82_1_end;
        themagister_2115_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1716_82_0 || or_temp_result_1716_82_1) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_1716_82_0) {
            dialogbox_566_instances.restore_selection();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1716_82_1_end: ;
}
void Frames::event_func_18842()
{
    // event 1717_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1717_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (40))) goto event_1717_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*9+((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x())*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*9+((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()+30)*0.1);
    }
    event_1717_82_end: ;
}
void Frames::event_func_18843()
{
    // event 1718_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1718_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (40))) goto event_1718_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1718_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_22_05_ogg_303, 28-1);
        media.play(str_data_voices_88+global_strings->get(11)+str_to_to_21_03_ogg_304, 29-1);
    }
    event_1718_82_end: ;
}
void Frames::event_func_18844()
{
    // event 1719_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1719_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (41))) goto event_1719_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1719_82_end;
        media.play_id(SOUND_LILAC_DIVEKICKA_407, -1, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(25);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25);
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1719_82_end: ;
}
void Frames::event_func_18845()
{
    // event 1720_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1720_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (41))) goto event_1720_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1720_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(19);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        media.play_id(SOUND_LILAC_DIVEKICKB_2_398, -1, 1);
    }
    event_1720_82_end: ;
}
void Frames::event_func_18846()
{
    // event 1721_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1721_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (41))) goto event_1721_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (30))) goto event_1721_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+10);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 10);
    }
    event_1721_82_end: ;
}
void Frames::event_func_18847()
{
    // event 1722_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1722_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (41))) goto event_1722_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (30))) goto event_1722_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (1515))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1722_82_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1722_82_end: ;
}
void Frames::event_func_18848()
{
    // event 1723_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1723_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (42))) goto event_1723_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1723_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(57);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 29);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1723_82_end: ;
}
void Frames::event_func_18849()
{
    // event 1724_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1724_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1724_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1724_82_end: ;
}
void Frames::event_func_18850()
{
    // event 1725_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1725_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (44))) goto event_1725_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1725_82_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(50);
        }
    }
    event_1725_82_end: ;
}
void Frames::event_func_18851()
{
    // event 1726_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1726_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (44))) goto event_1726_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1726_82_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1726_82_end: ;
}
void Frames::event_func_18852()
{
    // event 1727_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1727_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (44))) goto event_1727_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1727_82_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(40);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40);
        }
    }
    event_1727_82_end: ;
}
void Frames::event_func_18853()
{
    // event 1728_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1728_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (44))) goto event_1728_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1728_82_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(9);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(6);
        }
    }
    event_1728_82_end: ;
}
void Frames::event_func_18854()
{
    // event 1729_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1729_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (44))) goto event_1729_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+30))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1729_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1729_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1729_82_end: ;
}
void Frames::event_func_18855()
{
    // event 1730_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1730_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1730_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (30))) goto event_1730_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (32))) goto event_1730_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1730_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1730_82_end: ;
}
void Frames::event_func_18856()
{
    // event 1731_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1731_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1731_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (32))) goto event_1731_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1731_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, frame_top()-160);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+90);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, -1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(11, 0);
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        npcpanguleftarm_3075_instances.clear_selection();
        spread_value(npcpanguleftarm_3075_instances, 0, 0);
        npcpangurightarm_3076_instances.clear_selection();
        spread_value(npcpangurightarm_3076_instances, 0, 0);
    }
    event_1731_82_end: ;
}
void Frames::event_func_18857()
{
    // event 1732_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1732_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (46))) goto event_1732_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(10, 4);
    }
    event_1732_82_end: ;
}
void Frames::event_func_18858()
{
    // event 1733_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1733_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (46))) goto event_1733_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (40))) goto event_1733_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1733_82_end: ;
}
void Frames::event_func_18859()
{
    // event 1734_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1734_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (46))) goto event_1734_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1734_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1734_82_end: ;
}
void Frames::event_func_18860()
{
    // event 1735_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1735_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (46))) goto event_1735_82_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-80))) goto event_1735_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1735_82_end: ;
}
void Frames::event_func_18861()
{
    // event 1736_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1736_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (47))) goto event_1736_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (16))) goto event_1736_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->force_frame(3);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1736_82_end: ;
}
void Frames::event_func_18862()
{
    // event 1737_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1737_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1737_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1737_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (16))) goto event_1737_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1737_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1737_82_end: ;
}
void Frames::event_func_18863()
{
    // event 1738_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1738_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1738_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1738_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1738_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1738_82_end: ;
}
void Frames::event_func_18864()
{
    // event 1739_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1739_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (48))) goto event_1739_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1739_82_end;
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_PLBLOCK_VANISH_331, -1, 1);
    }
    event_1739_82_end: ;
}
void Frames::event_func_18865()
{
    // event 1740_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1740_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (48))) goto event_1740_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1740_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1740_82_end: ;
}
void Frames::event_func_18866()
{
    // event 1741_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1741_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1741_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (35))) goto event_1741_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (40))) goto event_1741_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (14))) goto event_1741_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1741_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1741_82_end: ;
}
void Frames::event_func_18867()
{
    // event 1742_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1742_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1742_82_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1742_82_end;
        if (!((media.get_channel_position(-1 +20)) < (1200))) goto event_1742_82_end;
        if (once_condition_1742_82) goto event_1742_82_end;
        once_condition_1742_82 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_1742_82_end: ;
}
void Frames::event_func_18868()
{
    // event 1743_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1743_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1743_82_end;
        if (!((media.get_channel_position(-1 +20)) > (1200))) goto event_1743_82_end;
        if (once_condition_1743_82) goto event_1743_82_end;
        once_condition_1743_82 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1743_82_end: ;
}
void Frames::event_func_18869()
{
    // event 1744_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1744_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (38))) goto event_1744_82_end;
        if (once_condition_1744_82) goto event_1744_82_end;
        once_condition_1744_82 = true;
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3836, 1442);
            pos_end_1744_82_0: ;
        }
        ((Active*)get_instance(npcgong_634_instances))->set_layer(2-1);
        ((Active*)get_instance(gongshield_633_instances))->set_layer(2-1);
        ((Active*)get_instance(gongshield_633_instances))->move_back();
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(18);
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
        magisterletter_4015_instances.clear_selection();
        for (ObjectIterator it(magisterletter_4015_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_layer(2-1);
        {
            ((Active*)get_instance(npcmayor_3950_instances))->set_global_position(3836, 1496);
            pos_end_1744_82_1: ;
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(9);
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(16);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+100);
        }
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-500);
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
        {
            ((Active*)get_instance(npcstofficer_3941_instances))->set_global_position(3289, 1477);
            pos_end_1744_82_2: ;
        }
    }
    event_1744_82_end: ;
}
void Frames::event_func_18870()
{
    // event 1745_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1745_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (38))) goto event_1745_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+3700)*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+1430)*0.05);
    }
    event_1745_82_end: ;
}
void Frames::event_func_18871()
{
    // event 1746_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1746_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (39))) goto event_1746_82_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->alterables->values.get(1)) < (10))) goto event_1746_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()-4);
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(((Active*)get_instance(npcmayor_3950_instances))->get_y()-4);
        ((Active*)get_instance(npcmayor_3950_instances))->alterables->values.add(1, 1);
    }
    event_1746_82_end: ;
}
void Frames::event_func_18872()
{
    // event 1747_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1747_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1747_82_end;
        if (once_condition_1747_82) goto event_1747_82_end;
        once_condition_1747_82 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1747_82_end: ;
}
void Frames::event_func_18873()
{
    // event 1748_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1748_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1748_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1748_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1748_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1748_82_end: ;
}
void Frames::event_func_18874()
{
    // event 1749_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1749_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (50))) goto event_1749_82_end;
        if (not_always_1749_82 > loop_count) {
            not_always_1749_82 = loop_count + 2;
            goto event_1749_82_end;
        }
        not_always_1749_82 = loop_count + 2;
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
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1000_209);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1749_82_end: ;
}
void Frames::event_func_18875()
{
    // event 1750_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1750_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (50))) goto event_1750_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1750_82_end: ;
}
void Frames::event_func_18876()
{
    // event 1751_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1751_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (50))) goto event_1751_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1751_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        next_frame = (index+1-0)-1 + 0;    
    
        global_values->set(4, 1);
    }
    event_1751_82_end: ;
}
void Frames::event_func_18877()
{
    // event 1752_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1752_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1752_82_end;
        if (once_condition_1752_82) goto event_1752_82_end;
        once_condition_1752_82 = true;
        ((Active*)get_instance(npcstofficer_3941_instances))->set_layer(8-1);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_x(frame_left()+90);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_direction(0);
        ((Active*)get_instance(npcstofficer_3941_instances))->set_y(frame_bottom()+50);
    }
    event_1752_82_end: ;
}
void Frames::event_func_18878()
{
    // event 1753_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1753_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1753_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (10))) goto event_1753_82_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->set_y(((Active*)get_instance(npcstofficer_3941_instances))->get_y()-5);
    }
    event_1753_82_end: ;
}
void Frames::event_func_18879()
{
    // event 1754_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1754_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1754_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1754_82_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(5);
        media.play_id(SOUND_WANGH_2_364, -1, 1);
    }
    event_1754_82_end: ;
}
void Frames::event_func_18880()
{
    // event 1755_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1755_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1755_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1755_82_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->force_animation(0);
    }
    event_1755_82_end: ;
}
void Frames::event_func_18881()
{
    // event 1756_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1756_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1756_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (45))) goto event_1756_82_end;
        ((Active*)get_instance(npcstofficer_3941_instances))->set_y(((Active*)get_instance(npcstofficer_3941_instances))->get_y()+6);
    }
    event_1756_82_end: ;
}
void Frames::event_func_18882()
{
    // event 1757_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1757_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (51))) goto event_1757_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1757_82_end;
        global_values->set(4, 1);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1757_82_end: ;
}
void Frames::event_func_18883()
{
    // event 1758_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1758_82_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_1758_82_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1758_82_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
        ((Active*)get_instance(gongshield_633_instances))->move_back(((Active*)get_instance(npcgong_634_instances)));
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1758_82_end: ;
}
void Frames::event_func_18884()
{
    // event 1759_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1759_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1759_82_end;
        {
            FrameObject * parent = ((Active*)get_single(playerskintorque_450_instances));
            if (parent == NULL) goto pos_end_1759_82_0;
            ((Active*)get_instance(npcshellduck_533_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1759_82_0: ;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->move_front(((Active*)get_single(playerskintorque_450_instances)));
        ((Active*)get_instance(npcshellduck_533_instances))->set_layer(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->current_animation);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame());
    }
    event_1759_82_end: ;
}
void Frames::event_func_18885()
{
    // event 1760_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1760_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1760_82_end;
        {
            FrameObject * parent = ((Active*)get_single(playerskintorque_450_instances));
            if (parent == NULL) goto pos_end_1760_82_0;
            ((Active*)get_instance(npcshellduck_533_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1760_82_0: ;
        }
        ((Active*)get_instance(npcshellduck_533_instances))->move_front(((Active*)get_single(playerskintorque_450_instances)));
        ((Active*)get_instance(npcshellduck_533_instances))->set_layer(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->layer->index+1-1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame());
    }
    event_1760_82_end: ;
}
void Frames::event_func_18886()
{
    // event 1762_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1762_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1762_82_end: ;
}
void Frames::event_func_18887()
{
    // event 1763_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1763_82_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1763_82_end;
        FrameObject * single_instance_1763_82_0; single_instance_1763_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bgfireplace2_4008_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectember_970(parent->x + 16, parent->y + 59), parent->layer);
                if (single_instance_1763_82_0 == NULL)
                    single_instance_1763_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1763_82_0))->set_x(((Active*)single_instance_1763_82_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1763_82_0))->set_y(((Active*)single_instance_1763_82_0)->get_y()+randrange(30));
        ((Active*)((Active*)single_instance_1763_82_0))->alterables->values.set(0, 1+randrange(4));
        ((Active*)((Active*)single_instance_1763_82_0))->move_back();
    }
    event_1763_82_end: ;
}
void Frames::event_func_18888()
{
    // event 1764_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1764_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1764_82_end;
        if (once_condition_1764_82) goto event_1764_82_end;
        once_condition_1764_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2090);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height-global_values->get(17)*0.5-8);
        {
            ((Active*)get_instance(npcmayor_3950_instances))->set_global_position(2223, 1514);
            pos_end_1764_82_0: ;
        }
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(2373, 1514);
            pos_end_1764_82_1: ;
        }
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, 1400);
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(2500);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, -1);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcmayor_3950_instances))->set_direction(0);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        media.play_id(SOUND_FIREPLACE_443, 25-1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        npcpanguleftarm_3075_instances.clear_selection();
        spread_value(npcpanguleftarm_3075_instances, 0, 0);
        npcpangurightarm_3076_instances.clear_selection();
        spread_value(npcpangurightarm_3076_instances, 0, 0);
    }
    event_1764_82_end: ;
}
void Frames::event_func_18889()
{
    // event 1765_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1765_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1765_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(2412);
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(2462);
            ((Active*)*it)->set_visible(true);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(2190);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(1515);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(2270);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
        ((Active*)get_instance(npcshellduck_533_instances))->force_animation(5);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
    }
    event_1765_82_end: ;
}
void Frames::event_func_18890()
{
    // event 1766_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1766_82_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1766_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1766_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1766_82_end: ;
}
void Frames::event_func_18891()
{
    // event 1767_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1767_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1767_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 2);
    }
    event_1767_82_end: ;
}
void Frames::event_func_18892()
{
    // event 1768_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1768_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1768_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(bgfireplace2_4008_instances))->get_x()))) goto event_1768_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 50);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1768_82_end: ;
}
void Frames::event_func_18893()
{
    // event 1769_82
    bool or_result_1769_82 = false;
    bool or_temp_result_1769_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1769_82_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1769_82_0_end;
        or_result_1769_82 = true;
        or_temp_result_1769_82_0 = true;
    }
    or_event_1769_82_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1769_82_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1769_82
    bool or_temp_result_1769_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1769_82_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1769_82_1_end;
        or_result_1769_82 = true;
        or_temp_result_1769_82_1 = true;
    }
    or_event_1769_82_1_end: ;
    if (or_temp_result_1769_82_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1769_82
    bool or_temp_result_1769_82_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1769_82_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1769_82_2_end;
        or_result_1769_82 = true;
        or_temp_result_1769_82_2 = true;
        or_event_1769_82_2_end: ;
        if (or_temp_result_1769_82_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1769_82) goto or_final_or_event_1769_82_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1769_82_0 || or_temp_result_1769_82_1 || or_temp_result_1769_82_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1769_82_2_end: ;
}
void Frames::event_func_18894()
{
    // event 1770_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1770_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1770_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (50))) goto event_1770_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (57))) goto event_1770_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (63))) goto event_1770_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1770_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1770_82_end: ;
}
void Frames::event_func_18895()
{
    // event 1771_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1771_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (54))) goto event_1771_82_end;
        if (once_condition_1771_82) goto event_1771_82_end;
        once_condition_1771_82 = true;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(0);
    }
    event_1771_82_end: ;
}
void Frames::event_func_18896()
{
    // event 1772_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1772_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (56))) goto event_1772_82_end;
        if (once_condition_1772_82) goto event_1772_82_end;
        once_condition_1772_82 = true;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(0);
    }
    event_1772_82_end: ;
}
void Frames::event_func_18897()
{
    // event 1773_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1773_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1773_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (57))) goto event_1773_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1773_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1773_82_end: ;
}
void Frames::event_func_18898()
{
    // event 1774_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1774_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1774_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1774_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(6);
    }
    event_1774_82_end: ;
}
void Frames::event_func_18899()
{
    // event 1775_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1775_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1775_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1775_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1775_82_end: ;
}
void Frames::event_func_18900()
{
    // event 1776_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1776_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (59))) goto event_1776_82_end;
        if (once_condition_1776_82) goto event_1776_82_end;
        once_condition_1776_82 = true;
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_frame(0);
    }
    event_1776_82_end: ;
}
void Frames::event_func_18901()
{
    // event 1777_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1777_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1777_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (63))) goto event_1777_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1777_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
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
    event_1777_82_end: ;
}
